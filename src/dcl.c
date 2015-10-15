/* @(#) dcl.c 1.6 1/27/86 17:48:35 */ 
/*ident	"@(#)cfront:src/dcl.c	1.6" */
/**************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.

	
dcl.c:

	``declare'' all names, that is insert them in the appropriate symbol tables.

	Calculate the size for all objects (incl. stack frames),
	and find store the offsets for all members (incl. auto variables).
	"size.h" holds the constants needed for calculating sizes.

	Note that (due to errors) functions may nest

*****************************************************************************/


#include "cfront.h"
#include "size.h"

class dcl_context ccvec[MAXCONT], * cc = ccvec;
int byte_offset;
int bit_offset;
int max_align;
int stack_size;
int enum_count;
int friend_in_class = 0;

void name.check_oper(Pname cn)
/*
	check declarations of operators, ctors, dtors
*/
{
	switch (n_oper) {
	case CALL:
		if (cn == 0) error("operator() must be aM");
		break;
	case DEREF:
		if (cn == 0) error("operator[] must be aM");
		break;
	case 0:
	case TNAME:	/* may be a constructor */
		if (cn && strcmp(cn->string,string)==0) {
			if (tp->base == FCT) {
				Pfct f = (Pfct)tp;
				if (f->returns!=defa_type && fct_void==0)
					error("%s::%s() with returnT",string,string);
				f->returns = void_type;
				string = "_ctor";
				n_oper = CTOR;
			}
			else
				error('s',"struct%cnM%n",cn,cn);
		}
		else
			n_oper = 0;
		break;
	case DTOR:	/* must be a destructor */
		if (cn == 0) {
			n_oper = 0;
			error("destructor ~%s() not inC",string);
		}
		else if (strcmp(cn->string,string) == 0) {
			Pfct f = (Pfct)tp;
			string = "_dtor";
			if (tp->base != FCT) {
				error("%s::~%s notF",cn->string,cn->string);
				tp = new fct(void_type,0,1);
			}
			else if (f->returns!=defa_type && fct_void==0)
				error("%s::~%s() with returnT",cn->string,cn->string);
			if (f->argtype) {
				if (fct_void==0) error("%s::~%s() withAs",cn->string,cn->string);
				f->nargs = 0;
				f->nargs_known = 1;
				f->argtype = 0;
			}
			f->returns = void_type;
		}
		else {
			error("~%s in %s",string,cn->string);
			n_oper = 0;
		}
		break;
	case TYPE:
		if (cn == 0) {
			error("operator%t() not aM",(Ptype)n_initializer);
			n_oper = 0;
			n_initializer = 0;
		} else {
			Pfct f = (Pfct)tp;
			Ptype tx = (Ptype)n_initializer;
/*error('d',"operator%t()",tx);*/
			n_initializer = 0;
			if (f->base != FCT) error("badT for%n::operator%t()",cn,tx);
			if (f->returns != defa_type) {
				if (f->returns->check(tx,0)) error("bad resultT for%n::operator%t()",cn,tx);
				DEL(f->returns);
			}
			if (f->argtype) {
				error("%n::operator%t() withAs",cn,tx);
				f->argtype = 0;
			}
			f->returns = tx;
			Pname nx = tx->is_cl_obj();
			if (nx && can_coerce(tx,cn->tp)) error("both %n::%n(%n) and %n::operator%t()",cn,cn,nx,tx);
			char buf[128];
			char* bb = tx->signature(buf);
			int l2 = bb-buf-1;
			char* p = new char[l2+3];
			p[0] = '_';
			p[1] = 'O';
			strcpy(p+2,buf);
			string = p;
		}
		break;
	}
}

Pname name.dcl(Ptable tbl, TOK scope)
/*
	enter a copy of this name into symbol table "tbl";
		- create local symbol tables as needed
	
	"scope" gives the scope in which the declaration was found
		- EXTERN, FCT, ARG, PUBLIC, or 0
	Compare "scope" with the specified storage class "n_sto"
		- AUTO, STATIC, REGISTER, EXTERN, OVERLOAD, FRIEND, or 0

	After name.dcl()
	n_stclass ==	0		class or enum member
			REGISTER	auto variables declared register
			AUTO		auto variables not registers
			STATIC		statically allocated object
	n_scope ==	0		private class member
			PUBLIC		public class member
			EXTERN		name valid in this and other files
			STATIC		name valid for this file only
			FCT		name local to a function
			ARG		name of a function argument
			ARGT		name of a type defined in an
					argument list

	typecheck function bodies;
	typecheck initializers;

	note that functions (error recovery) and classes (legal) nest

	The return value is used to chain symbol table entries, but cannot
	be used for printout because it denotes the sum of all type information
	for the name

	names of typenames are marked with n_oper==TNAME

	WARNING: The handling of scope and storage class is cursed!
*/
{
	Pname nn;
	Ptype nnt = 0;
	Pname odcl = Cdcl;

	if (this == 0) error('i',"0->name.dcl()");
	if (tbl == 0) error('i',"%n->name.dcl(tbl=0,%k)",this,scope);
	if (tbl->base != TABLE) error('i',"%n->name.dcl(tbl=%d,%k)",this,tbl->base,scope);
	if (tp == 0) error('i',"name.dcl(%n,%k)T missing",this,scope);
/*fprintf(stderr,"(%d %s)->dcl(tbl=%d,scope=%d) tp = (%d %d)\n",this,string,tbl,scope,tp,tp->base); fflush(stderr);*/
	Cdcl = this;
	switch (base) {
	case TNAME:
		tp->dcl(tbl);
		PERM(tp);
		nn = new name(string);
		nn->base = TNAME;
		nn->tp = tp;
		tbl->insert(nn,0);
		delete nn;
		Cdcl = odcl;
		return this;
	case NAME:
		switch (n_oper) {
		case TNAME:
			if (tp->base != FCT) n_oper = 0;
			break;
		case COMPL:
			if (tp->base != FCT) {
				error("~%s notF",string);
				n_oper = 0;
			}
			break;
		}
		break;
	default:
		error('i',"NX in name.dcl()");
	}

	if (n_qualifier) {	/*	class function: c::f(); */
		if (tp->base != FCT) {
			error("QdN%n inD of nonF",this);
			Cdcl = odcl;
			return 0;
		}

		Pname cn = n_qualifier;
		switch (cn->base) {
		case TNAME:
			break;
		case NAME:
			cn = gtbl->look(cn->string,0);
			if (cn && cn->base==TNAME) break;
		default:
			error("badQr%n for%n",n_qualifier,this);
			Cdcl = odcl;
			return 0;
		}
		cn = Pbase(cn->tp)->b_name;
		if (n_oper) check_oper(cn);

		Pclass cl = (Pclass)cn->tp;
		if (cl == cc->cot) {
			n_qualifier = 0;
			goto xdr;
		}
		else if ((cl->defined&(DEFINED|SIMPLIFIED)) == 0) {
			error("C%nU",cn);
			Cdcl = odcl;
			return 0;
		}

		Ptable etbl = cl->memtbl;
		Pname x = etbl->look(string,0);
		if(x==0 || x->n_table!=etbl) {
			error("%n is not aM of%n",this,cn);
			Cdcl = odcl;
			return 0;
		}
	}
xdr:
	if (n_oper && tp->base!=FCT && n_sto!=OVERLOAD)
		error("operator%k not aF",n_oper);


	/*	if a storage class was specified
			check that it is legal in the scope 
		else
			provide default storage class
		some details must be left until the type of the object is known
	*/

	n_stclass = n_sto;
	n_scope = scope;	/* default scope & storage class */

	switch (n_sto) {
	default:
		error('i',"unX %k",n_sto);
	case FRIEND:
	{
		Pclass cl = cc->cot;

		switch (scope) {
		case 0:
		case PUBLIC:
			break;
		default:
			error("friend%n not in classD(%k)",this,scope);
			base = 0;
			Cdcl = odcl;
			return 0;
		}

		switch (n_oper) {
		case 0:
		case NEW:
		case DELETE:
		case CTOR:
		case DTOR:
		case TYPE:
			n_sto = 0;
			break;
		default:
			n_sto = OVERLOAD;
		}

		switch (tp->base) {
	/*	case INT:	 undefined: implicitly define as class
			nn = tname(CLASS);
			nn->tp->dcl(gtbl);
			break;
	*/
		case COBJ:
			nn = Pbase(tp)->b_name;
			break;
		case CLASS:
			nn = this;
			break;
		case FCT:
			cc->stack();
			cc->not = 0;
			cc->tot = 0;
			cc->cot = 0;
			friend_in_class++;
			n_sto = EXTERN;
			nn = dcl(gtbl,EXTERN);
			friend_in_class--;
/*fprintf(stderr,"ff %s %d\n",nn->string,nn->tp->base);*/
			cc->unstack();
			if (nn->tp->base == OVERLOAD) {
				Pgen g = (Pgen)nn->tp;
				nn = g->find( (Pfct)tp );
			}
			break;
		default:
			error("badT%t of friend%n",tp,this);
		}
		PERM(nn);
		cl->friend_list = new name_list(nn,cl->friend_list);
		Cdcl = odcl;
		return nn;
	}
	case OVERLOAD:
		n_sto = 0;
		switch (scope) {
		case 0:
		case PUBLIC:
			error('w',"overload inCD (ignored)");
			switch (tp->base) {
			case INT:
				base = 0;
				Cdcl = odcl;
				return this;
			case FCT:
				return dcl(tbl,scope);
			}
		}
		if (n_oper && tp->base==FCT) break;
		nn = tbl->insert(this,0);

		if (Nold) {
			if (nn->tp->base != OVERLOAD) {
				error("%n redefined as overloaded",this);
				nn->tp = new gen(string);
			}
		}
		else {
			nn->tp = new gen(string);
		}

		switch (tp->base) {
		case INT:
			base = 0;
			Cdcl = odcl;
			return nn;
		case FCT:
			break;
		default:
			error("N%n ofT%k cannot be overloaded",this,tp->base);
			Cdcl = odcl;
			return nn;
		}
		break;
	case REGISTER:
		if (tp->base == FCT) {
			error('w',"%n: register (ignored)",this);
			goto ddd;
		}
	case AUTO:
		switch (scope) {
		case 0:
		case PUBLIC:
		case EXTERN:
			error("%k not inF",n_sto);
			goto ddd;
		}
		break;
	case EXTERN:
		switch (scope) {
		case ARG:
			error("externA");
			goto ddd;
		case 0:
		case PUBLIC:
			/* extern is provided as a default for functions without body */
			if (tp->base != FCT) error("externM%n",this);
			goto ddd;
		}
		n_stclass = STATIC;
		n_scope = EXTERN;	/* avoid FCT scoped externs to allow better checking */
		break;
	case STATIC:
		switch (scope) {
		case ARG:
			error("static used forA%n",this);
			goto ddd;
		case 0:
		case PUBLIC:
			n_stclass = STATIC;
			n_scope = scope;
			break;
		default:
			n_scope = STATIC;
		}
		break;
	case 0:
	ddd:
		switch (scope) {	/* default storage classes */
		case EXTERN:
			n_scope = EXTERN;
			n_stclass = STATIC;
			break;
		case FCT:
			if (tp->base == FCT) {
				n_stclass = STATIC;
				n_scope = EXTERN;
			}
			else
				n_stclass = AUTO;
			break;
		case ARG:
			n_stclass = AUTO;
			break;
		case 0:
		case PUBLIC:
			n_stclass = 0;
			break;
		}
	}

	
	/*
		now insert the name into the appropriate symbol table,
		and compare types with previous declarations of that name

		do type dependent adjustments of the scope
	*/

	switch (tp->base) {
	case ASM:
	{	Pbase b = (Pbase)tp;
		Pname n = tbl->insert(this,0);
		n->assign();
		n->use();
		return this;
	}

	case CLASS:
	{	Pclass cl;
		Pbase bt;
		Pname bn;
	//	Pclass nest;
		Pname nx = ktbl->look(string,0);		// TNAME
//error('d',"%s: nx%n",string,nx);
		if (nx == 0) {
			/*	search for hidden name for
					(1) nested class declaration
					(2) local class declaration
			*/
			int tn = 0;
			for (nx=ktbl->look(string,HIDDEN); nx; nx=nx->n_tbl_list) {
//error('d',"%s: nxi%n key%d base%d",string,nx,nx->n_key,nx->tp->base);
				if (nx->n_key != HIDDEN) continue;
				if (nx->tp->base != COBJ) {
					tn = 1;
					continue;
				}
				bt = (Pbase)nx->tp;
				bn = bt->b_name;
				cl = (Pclass)bn->tp;
				if (cl == 0) continue;
			//	if ((nest=cl->in_class) && nest==cc->cot) 
			//		goto bbb;
			//	else
			//	 if (cc->nof	/* fudge */
			//		&& cc->nof->where.line<nx->where.line)
					goto bbb;
			}
			if (tn)
				error("%n redefined using typedef");
			else
				error('i',"%n is not aCN",this);
		}
		else {
			if (tbl != gtbl) { // careful: local class def
//error('d',"%n: local lex level %d",nx->lex_level);
				if (nx->lex_level == 0) // imperfect
					error('s',"localC%n and globalC%n",this,nx);
			}
			bt = (Pbase)nx->tp;			// COBJ
			bn = bt->b_name;
	//		nest = 0;
		}
bbb:
/*fprintf(stderr,"bbb: bt %d %d\n",bt,bt->base); fflush(stderr);*/
		Pname ln = tbl->look(bn->string,0);
//error('d',"ln %d %d",ln,ln?ln->n_table==tbl:0);
		if (ln && ln->n_table==tbl) error('w',"%n redefined",ln);
		bn->where = nx->where;
		Pname bnn = tbl->insert(bn,CLASS);	// copy for member lookup
		cl = (Pclass)bn->tp;
								/* CLASS */
/*fprintf(stderr,"cl %d %d\n",cl,cl->base); fflush(stderr);*/
		if (cl->defined&(DEFINED|SIMPLIFIED))
			error("C%n defined twice",this);
		else {
			if (bn->n_scope == ARG) bn->n_scope = ARGT;
			cl->dcl(bn,tbl);
	//		if (nest) {
	//			int l1 = strlen(cl->string);
	//			int l2 = strlen(nest->string);
	//			char* s = new char[l1+l2+2];
	//			strcpy(s,nest->string);
	//			s[l2] = '_';
	//			strcpy(s+l2+1,cl->string);
	//			cl->string = s;
	//		/*	cl->memtbl->t_name->string = s;*/
	//		}
		}
		tp = cl;
		Cdcl = odcl;
		return bnn;
	}

	case ENUM:
	{	Pname nx = ktbl->look(string,0);		/* TNAME */
		if (nx == 0) {
			nx = ktbl->look(string,HIDDEN);		/* hidden TNAME */
		}
		Pbase bt = (Pbase)nx->tp;			/* EOBJ */
		Pname bn = bt->b_name;
		Pname bnn = tbl->insert(bn,CLASS);
		Penum en = (Penum)bn->tp;			/* ENUM */
		if (en->defined&(DEFINED|SIMPLIFIED))
			error("enum%n defined twice",this);
		else {
			if (bn->n_scope == ARG) bn->n_scope = ARGT;
			en->dcl(bn,tbl);
		}
		tp = en;
		Cdcl = odcl;
		return bnn;
	}

	case FCT:
	{	Pfct f = (Pfct)tp;
		Pname class_name;
		Ptable etbl;
		int can_overload;
		int in_class_dcl = (int)cc->not;
		int just_made = 0;
//error('d',"fct%n",this);
		if (f->f_inline) n_sto = STATIC;

		if (f->argtype) {
			Pname a;
			int oo = const_save;
			const_save = 1;
			for (a=f->argtype; a; a=a->n_list) {
				Pexpr init;
				if (init = a->n_initializer) {	// default argument
//or('d',"init %k",init->base);
Pname cln;
if (cln = a->tp->is_cl_obj()) {
//error('d',"a%n cln%n init %k",a,cln,init->base);
	if (init->base==VALUE) {
		switch (init->tp2->base) {
		case CLASS:
			if (Pclass(init->tp2)!=Pclass(cln->tp)) goto inin2;
			break;
		default:
			Pname  n2 = init->tp2->is_cl_obj();
			if (n2==0 || Pclass(n2->tp)!=Pclass(cln->tp)) goto inin2;
		}
		init->e2 = a;
		init = init->typ(tbl);
		init->simpl();
		init->permanent = 2;
		a->n_initializer = init;
		error('s',"constructor as defaultA");
	}
	else {
	inin2:
//error('d',"inin2: %k %s",init->base,init->base==NAME?init->string:"");
		if (init->base == ILIST) error('s',"list as AIr");
		Pexpr i = init->typ(tbl);
		init = class_init(a,a->tp,i,tbl);
		if (i!=init && init->base==DEREF) error('s',"constructor needed forAIr");
		init->simpl();
		init->permanent = 2;
		a->n_initializer = init;
	}
}
else if (a->tp->is_ref()) {
//error('d',"%n is ref",a);
	init = init->typ(tbl);
	int tcount = stcount;
	init = ref_init(Pptr(a->tp),init,tbl);
	if (tcount != stcount) error('s',"needs temporaryV to evaluateAIr");
	init->simpl();
	init->permanent = 2;
	a->n_initializer = init;
//error('d',"ok");
}
else {
	int i = 0;
	init = init->typ(tbl);
	if (a->tp->check(init->tp,ARG)==0
	|| (i=can_coerce(a->tp,init->tp))) {
		if (1 < i) error("%d possible conversions for defaultA",i);
		if (Ncoerce) {
			Pname cn = init->tp->is_cl_obj();
			Pclass cl = (Pclass)cn->tp;
			Pref r = new ref(DOT,init,Ncoerce);
			init = new expr(G_CALL,r,0);
			init->fct_name = Ncoerce;
			init->tp = a->tp;
		}
		init->simpl();
		init->permanent = 2;
		a->n_initializer = init;
		Neval = 0;
		int i = init->eval();
		if (Neval == 0) {
			a->n_evaluated = 1;
			a->n_val = i;
		}
	}
	else {
		error("badIrT%t forA%n",init->tp,a);
		DEL(init);
		a->n_initializer = 0;
	}
				}
}
			flatten1:
				switch (a->tp->base) {
				case TYPE:
					a->tp = Pbase(a->tp)->b_name->tp;
					goto flatten1;
				case CHAR:
				case SHORT:
				/*	error('w',"A ofT%k (becomes int)",a->tp->base);	*/
					a->tp = int_type;
					break;
				case FLOAT:
				/*	error('w',"A ofT float (becomes double)");	*/
					a->tp = double_type;
					break;
				}
			}
			const_save = oo;
		}

		tp->dcl(tbl); /* must be done before the type check */

		if (n_qualifier) { /* qualified name: c.f() checked above */
			if (in_class_dcl) {
				error("unXQN%n",this);
				Cdcl = odcl;
				return 0;
			}
			class_name = Pbase(n_qualifier->tp)->b_name;
			etbl = Pclass(class_name->tp)->memtbl;
		}
		else {
			class_name = cc->not;
			/* beware of local function declarations in member functions */
			if (class_name && tbl!=cc->cot->memtbl) {
				class_name = 0;
				in_class_dcl = 0;
			}
			if (n_oper) check_oper(class_name);
			etbl = tbl;
		}

		if (etbl==0 || etbl->base!=TABLE) error('i',"N.dcl: etbl=%d",etbl);

		switch (n_oper) {
		case NEW:
		case DELETE:
			switch (scope) {
			case 0:
			case PUBLIC:
				error("%nMF",this);
			}
		case 0:
			can_overload = in_class_dcl;
			break;
		case CTOR:
			if (f->f_virtual) {
				error("virtual constructor");
				f->f_virtual = 0;
			}
		case DTOR:
			if (fct_void) n_scope = PUBLIC;
			can_overload = in_class_dcl;
			break;
		case TYPE:
			can_overload = 0;
			break;
		case ASSIGN:
//error('d',"assign %n",class_name);
			if (class_name && f->nargs==1) {
				Ptype t = f->argtype->tp;
				Pname an = t->is_cl_obj();  // X::operator=(X) ?
				if (an==0 && t->is_ref()) { // X::operator=(X&) ?
					t = Pptr(t)->typ;
				rx1:
					switch (t->base) {
					case TYPE:
						t = Pbase(t)->b_name->tp;
						goto rx1;
					case COBJ:
						an = Pbase(t)->b_name;
					}
				}
				if (an && an==class_name) Pclass(an->tp)->bit_ass = 0;
//error('d',"%n ==> %d",an,Pclass(class_name)->bit_ass);
			}
			else if (f->nargs == 2) {
				Ptype t = f->argtype->tp;
				Pname an1;
				if (t->is_ref()) { // operator=(X&,?) ?
					t = Pptr(t)->typ;
				rx2:
					switch (t->base) {
					case TYPE:
						t = Pbase(t)->b_name->tp;
						goto rx2;
					case COBJ:
						an1 = Pbase(t)->b_name;
					}
				}
				t = f->argtype->n_list->tp;
				Pname an2 = t->is_cl_obj(); // operator=(X&,X) ?
				if (an2==0 && t->is_ref()) { // operator=(X&,X&) ?
					t = Pptr(t)->typ;
				rx3:
					switch (t->base) {
					case TYPE:
						t = Pbase(t)->b_name->tp;
						goto rx3;
					case COBJ:
						an2 = Pbase(t)->b_name;
					}
				}
				if (an1 && an1==an2) Pclass(an1->tp)->bit_ass = 0;
			}
		default:
			can_overload = 1;	/* all operators are overloaded */
		}

		switch (scope) {
		case FCT:
		case ARG:
		{	Pname nx = gtbl->insert(this,0);
			n_table = 0;
			n_tbl_list = 0;
			if (Nold && tp->check(nx->tp,0)) error('w',"%n has been declared both as%t and as%t",this,nx->tp,tp);
			/* no break */
		}
		default:
			nn = etbl->insert(this,0);
			nn->assign();
			n_table = etbl;
			break;
		}

			
		if (Nold) {
			Pfct nf = (Pfct)nn->tp;
/*error('d',"%n: tp%t nf%t",nn,tp,nf);*/
			if (nf->base==ANY || f->base==ANY)
				;
			else if (nf->base == OVERLOAD) {
				Pgen g = (Pgen) nf;
				nn = g->add(this,0);
				string = nn->string;
				if (Nold == 0) {
					if (f->body) {
						if (n_qualifier) {
							error(0,"badAL for overloaded %n::%s()",n_qualifier,g->string);
							Cdcl = odcl;
							return 0;
						}
					//	else if (f->f_inline==0 && n_oper==0)
					//		error('w',"overloaded %n defined without being previously declared",nn);
					}
					goto thth;
				}
				else {
					if (f->body==0 && friend_in_class==0) error('w',"overloaded%n redeclared",nn);
				}
				
				nf = (Pfct)nn->tp;

				if (f->body && nf->body) {
					error("two definitions of overloaded%n",nn);
					Cdcl = odcl;
					return 0;
				}

				if (f->body) goto bdbd;
				
				goto stst;
			}
			else if (nf->base != FCT) {
				error("%n declared both as%t and asF",this,nf);
				f->body = 0;
			}
			else if (can_overload) {
				if (nf->check(f,OVERLOAD) || vrp_equiv) {
					if (f->body && n_qualifier) {
						error("badAT for%n",nn);
						Cdcl = odcl;
						return 0;
					}
					Pgen g = new gen(string);
					Pname n1 = g->add(nn,in_class_dcl);
					Pname n2 = g->add(this,0);
/*error('d',"n1%n n2%n\n",n1,n2);*/
					nn->tp = (Ptype)g;
					nn->string = g->string;
					nn = n2;
					goto thth;
				}
				
				if (in_class_dcl) {
					error("two declarations of%n",this);
					f->body = 0;
					Cdcl = odcl;
					return 0;
				}
				
				if (nf->body && f->body) {
					error("two definitions of%n",this);
					f->body = 0;
					Cdcl = odcl;
					return 0;
				}
				
				if (f->body) goto bdbd;

				goto stst;
			}
			else if (nf->check(f,0)) {
				switch (n_oper) {
				case CTOR:
				case DTOR:
					f->s_returns = nf->s_returns;
				}
				error("%nT mismatch:%t and%t",this,nf,f);
				f->body = 0;
			}
			else if (nf->body && f->body) {
				error("two definitions of%n",this);
				f->body = 0;
			}
			else if (f->body) {
				Pname a1, a2;
			bdbd: 
				if (f->nargs_known && nf->nargs_known)
				for (a1=f->argtype, a2=nf->argtype; a1; a1=a1->n_list, a2=a2->n_list) {
					int i1  =  a1->n_initializer || a1->n_evaluated;
					int i2  =  a2->n_initializer || a2->n_evaluated;
//error('d',"bdbd: i %d %d eval %d %d val %d %d",i1,i2,a1->n_evaluated,a2->n_evaluated,a1->n_val,a2->n_val);
					if (i1) {
						if (i2
						&& (	a1->n_evaluated==0
							|| a2->n_evaluated==0
							|| a1->n_val!=a2->n_val)
						)
							error("twoIrs for%nA%n",nn,a1);
					}
					else if (i2) {
						a1->n_initializer = a2->n_initializer;
						a1->n_evaluated = a2->n_evaluated;
						a1->n_val = a2->n_val;
					}
				}
				f->f_virtual = nf->f_virtual;
				f->f_this = nf->f_this;
/*fprintf(stderr,"bdbd %s: f %d inl %d nf %d inl %d\n",string,f,f->f_inline,nf,nf->f_inline);*/
				nn->tp = f;
				if (f->f_inline) {
					if (nf->f_inline==0 && nn->n_used)
						error("%n called before defined as inline",nn);
					nf->f_inline = 1;
					nn->n_sto = STATIC;
				}
				else if (nf->f_inline) {
					/*error("%n defined as inline but not declared as inline",this);*/
					f->f_inline = 1;
				}
				goto stst2;
			}
			else {	/* two declarations */
				Pname a1, a2;
				f->f_this = nf->f_this;
			stst:
				if (f->nargs_known && nf->nargs_known)
				for (a1=f->argtype, a2=nf->argtype; a1; a1=a1->n_list, a2=a2->n_list) {
					int i1  =  a1->n_initializer || a1->n_evaluated;
					int i2  =  a2->n_initializer || a2->n_evaluated;
//error('d',"stst %d %d",i1,i2);
					if (i1) {
						if (i2) {
							if (a1->n_evaluated==0
							|| a2->n_evaluated==0
							|| a1->n_val!=a2->n_val)
								error("twoIrs for%nA%n",nn,a1);
						}
						else if (class_name)
							error("defaultA for%n",nn);
					}
					else if (i2) {
						a1->n_initializer = a2->n_initializer;
						a1->n_evaluated = a2->n_evaluated;
						a1->n_val = a2->n_val;
					}
				}
			stst2:
				if (f->f_inline) n_sto = STATIC;
				if (n_sto
				&& nn->n_scope!=n_sto
				&& friend_in_class==0
				&& f->f_inline==0){ // allow re-def to "static"
if (n_sto == STATIC) nn->n_sto = STATIC; else
					error("%n both%k and%k",this,n_sto,nn->n_scope);
				}
				n_scope = nn->n_scope; // first specifier wins
				n_sto = nn->n_sto;
			
			}
		/*	Pfct(nn->tp)->nargs_known = nf->nargs_known;	*/
		}
		else {	/* new function: make f_this for member functions */
			if (tbl==gtbl && n_oper) {	// overload operator
				Pgen g = new gen(string);
				Pname n1 = g->add(nn,1);
//error('d',"overload %n -> %s",this,n1->string);
				nn->tp = Ptype(g);
				nn->string = g->string;
				string = n1->string;
				nn = n1;
			}
		thth:
			just_made = 1;
			if (f->f_inline)
				nn->n_sto = STATIC;
			else if (class_name==0
				&& n_sto==0
				&& f->body==0) // ``explicitly'' extern
					nn->n_sto = EXTERN;
/*fprintf(stderr,"thth %s: f %d nn->tp %d inl %d\n",string,f,nn->tp,f->f_inline);*/
			if (class_name && etbl!=gtbl) {	/* beware of implicit declatation */
				Pname cn = nn->n_table->t_name;
				Pname tt = new name("this");
				tt->n_scope = ARG;
				tt->n_sto = REGISTER;
				tt->tp = Pclass(class_name->tp)->this_type;
				PERM(tt);
				Pfct(nn->tp)->f_this = f->f_this = tt;
				tt->n_list = f->argtype;
			}

			if (f->f_virtual) {
				switch (nn->n_scope) {
				default:
					error("nonC virtual%n",this);
					break;
				case 0:
				case PUBLIC:
					cc->cot->virt_count = 1;
					Pfct(nn->tp)->f_virtual = 1;
					break;
				}
			}
		}

		/*	an operator must take at least one class object or
			reference to class object argument
		*/
		switch (n_oper) {
		case CTOR:
			if (f->nargs == 1) {	/* check for X(X) and X(X&) */
				Ptype t = f->argtype->tp;
			clll:
				switch (t->base) {
				case TYPE:
					t = Pbase(t)->b_name->tp;
					goto clll;
				case RPTR:			/* X(X&) ? */
					t = Pptr(t)->typ;
				cxll:
					switch (t->base) {
					case TYPE:
						t = Pbase(t)->b_name->tp;
						goto cxll;
					case COBJ:
						if (class_name == Pbase(t)->b_name)
							Pclass(class_name->tp)->itor = nn;
					}
					break;
				case COBJ:			/* X(X) ? */
					if (class_name == Pbase(t)->b_name)
						error("impossible constructor: %s(%s)",class_name->string,class_name->string);
				}
			}
			break;
		case TYPE:
/*error('d',"just_made %d %n",just_made,this);*/
			if (just_made) {
				nn->n_list = Pclass(class_name->tp)->conv;
				Pclass(class_name->tp)->conv = nn;
			}
			break;
		case DTOR:
		case NEW:
		case DELETE:
		case CALL:
		case 0:
			break;
		default:
			if (f->nargs_known != 1) {
				error("ATs must be fully specified for%n",nn);
			}
			else if (class_name == 0) {
				Pname a;
				switch (f->nargs) {
				case 1:
				case 2:
					for (a=f->argtype; a; a=a->n_list) {
						Ptype tx = a->tp;
						if (tx->base == RPTR) tx = ((Pptr)tx)->typ;
						if (tx->is_cl_obj()) goto cok;
					}
					error("%n must take at least oneCTA",nn);
					break;
				default:
					error("%n must take 1 or 2As",nn);
				}
			}
			else {
				switch (f->nargs) {
				case 0:
				case 1:
					break;
				default:
					error("%n must take 0 or 1As",nn);
				}
			}
		cok:;
		}

		/*
			the body cannot be checked until the name
			has been checked and entered into its table
		*/
		if (f->body) f->dcl(nn);
		break;
	}

	case FIELD:
	{	Pbase fld = (Pbase)tp;

		switch (n_stclass) {
		case 0:
		case PUBLIC:
			break;
		default:
			error("%k field",n_stclass);
			n_stclass = 0;
		}

		if (cc->not==0 || cc->cot->csu==UNION) {
			error(cc->not?"field in union":"field not inC");
			PERM(tp);
			Cdcl = odcl;
			return this;
		}

		if (string) {
			nn = tbl->insert(this,0);
			n_table = nn->n_table;
			if (Nold) error("twoDs of field%n",this);
		}

		tp->dcl(tbl);

		// adjust alignment
		int a = (F_SENSITIVE) ? Pbase(tp)->b_fieldtype->align() : SZ_WORD;
		if (max_align < a) max_align = a;

		if (fld->b_bits == 0) {		// force word alignment
			int b;
			if (bit_offset)
				fld->b_bits = BI_IN_WORD - bit_offset;
			else if (b = byte_offset%SZ_WORD)
				fld->b_bits = b * BI_IN_BYTE;
			if (max_align < SZ_WORD) max_align = SZ_WORD;
		}
		else if (bit_offset == 0) {	// take care of part of word
			int b = byte_offset%SZ_WORD;
			if (b) {
				byte_offset -= b;
				bit_offset = b*BI_IN_BYTE;
			}
		}
//error('d',"byteoff %d bitoff %d bits %d",byte_offset,bit_offset,fld->b_bits);
		int x = (bit_offset += fld->b_bits);
		if (BI_IN_WORD < x) {
			fld->b_offset = 0;
			byte_offset += SZ_WORD;
			bit_offset = fld->b_bits;
		}
		else {
			fld->b_offset = bit_offset;
			if (BI_IN_WORD == x) {
				bit_offset = 0;
				byte_offset += SZ_WORD;
			}
			else
				bit_offset = x;
		}
		n_offset = byte_offset;
		break;
	}

	case COBJ:
	{	Pclass cl = Pclass(Pbase(tp)->b_name->tp);
/*fprintf(stderr,"COBJ %d %s -> (%d %d)\n",tp,Pbase(tp)->b_name->string,cl,cl->base); fflush(stderr);*/
		if (cl->csu == ANON) {	/* export member names to enclosing scope */
			Pname nn;
			int i;
			int uindex;
			Ptable mtbl = cl->memtbl;
			char* p = cl->string;

			if (tbl == gtbl) error('s',"global anonymous union");
			while (*p++ != 'C');	/* UGH!!! */
			uindex = str_to_int(p);
			for ( nn=mtbl->get_mem(i=1); nn; nn=mtbl->get_mem(++i) ) {
				Ptable tb = nn->n_table;
				nn->n_table = 0;
				Pname n = tbl->insert(nn,0);
				n->n_union = uindex;
				nn->n_table = tb;
			}
		}
		goto cde;
	}

	case VEC:
	case PTR:
	case RPTR:
		tp->dcl(tbl);

	default:
	cde:
		nn = tbl->insert(this,0);

		n_table = nn->n_table;
//error('d',"Nold %d tbl %d nn %d%n tp%t gtbl %d",Nold,tbl,nn,nn,nn->tp,gtbl);
		if (Nold) {
			if (nn->tp->base == ANY) goto zzz;

			if (tp->check(nn->tp,0)) {
				error("twoDs of%n;Ts:%t and%t",this,nn->tp,tp);
				Cdcl = odcl;
				return 0;
			}

			if (n_sto && n_sto!=nn->n_scope) 
				error("%n both%k and not%k",this,n_sto,n_sto);
			else if (nn->n_scope==STATIC && n_scope==EXTERN)
				error("%n both static and extern",this);
			else if (nn->n_sto==STATIC && n_sto==STATIC ) 
				error("static%n declared twice",this);
			else {
			//	n_sto = nn->n_sto;	 first scope specifier wins
				n_scope = nn->n_scope;

				switch (scope) {
				case FCT:
					error("twoDs of%n",this);
					Cdcl = odcl;
					return 0;
				case ARG:
					error("two arguments%n",this);
					Cdcl = odcl;
					return 0;
				case 0:
				case PUBLIC:
					error("twoDs ofM%n",this);
					Cdcl = odcl;
					return 0;
				case EXTERN:
					if (fct_void==0
					&& n_sto==0
					&& nn->n_sto==0) {
						error("two definitions of%n",this);
						Cdcl = odcl;
						return 0;
					}
				}
			}
			n_scope = nn->n_scope;
/* n_val */
			if (n_initializer) {
				if (nn->n_initializer || nn->n_val) error("twoIrs for%n",this);
				nn->n_initializer = n_initializer;
			}
		}
		else {	// check for the ambiguous plain "int a;"
		/*	if (n_initializer==0
			&&  n_sto==0
			&&  scope==EXTERN) {
				error('w',"%n does not have storageC or initializer",this);
			}
		*/
		}
	
	zzz:
		if (base != TNAME) {
			Ptype t = nn->tp;
//fprintf(stderr,"tp %d %d nn->tp %d %d\n",tp,tp->base,nn->tp,nn->tp?nn->tp->base:0); fflush(stderr);
			if (t->base == TYPE) {
				Ptype tt = Pbase(t)->b_name->tp;
				if (tt->base == FCT) nn->tp = t = tt;
			}

			switch (nn->n_stclass) {
			default:
				switch (t->base) {
				case FCT:
				case OVERLOAD:
					break;
				default:
				{	int x = t->align();
					int y = t->tsizeof();

					if (max_align < x) max_align = x;

					while (0 < bit_offset) {
						byte_offset++;
						bit_offset -= BI_IN_BYTE;
					}
					bit_offset = 0;

					if (byte_offset && 1<x) byte_offset = ((byte_offset-1)/x)*x+x;
					nn->n_offset = byte_offset;
					byte_offset += y;
				}
				}
				break;
			case STATIC:
				switch (t->base) {
				case FCT:
				case OVERLOAD:
					break;
				default:
					t->tsizeof();	// check that size is known
				}
				break;
			}
		}

	{	Ptype t = nn->tp;
		int const_old = const_save;
		bit vec_seen = 0;
		Pexpr init = n_initializer;

		if (init) {
			switch (n_scope) {
			case 0:
			case PUBLIC:
				if (n_stclass != STATIC) error("Ir forM%n",this);
				break;
			}
		}

	/*	if (n_scope == EXTERN) break;		*/

	lll:
		switch (t->base) {
		case RPTR:
			if (init) {
				if (nn->n_scope == ARG) break;
				init = init->typ(tbl);
				if (n_sto==STATIC && init->lval(0)==0)
					error("Ir for static reference%n not an lvalue",this);
				else {
//					int tcount = stcount;
					nn->n_initializer = n_initializer = ref_init(Pptr(t),init,tbl);
//					if (tcount != stcount) error('s',"needs temporaryV for evaluation of AIr");
				}
				nn->assign();
			}
			else {
				switch (nn->n_scope) {
				default:
					if (n_sto == EXTERN) break;
					error("unId reference%n",this);
				case ARG:
					break;
				case PUBLIC:
				case 0:
					if (n_sto == STATIC) error("a staticM%n cannot be a reference",this);
					break;
				}
			}
			break;
		case COBJ:
		{	Pname cn = Pbase(t)->b_name;
			Pclass cl = (Pclass)cn->tp;
			Pname ctor = cl->has_ctor();
			Pname dtor = cl->has_dtor();
//error('d',"c/dtor %n %d %d",cn,ctor,dtor);
			if (dtor) {
				Pstmt dls;
				switch ( nn->n_scope ) {
				case EXTERN:
					if (n_sto==EXTERN) break;
				case STATIC:
				{	Ptable otbl = tbl;
						// to collect temporaries generated
						// in static destructors where we
						// can find them again (in std_tbl)
					if (std_tbl == 0) std_tbl = new table(8,gtbl,0);
					tbl = std_tbl;
					if (vec_seen) {	/*  _vec_delete(vec,noe,sz,dtor,0); */
						int esz = cl->tsizeof();
						Pexpr noe = new expr(IVAL, (Pexpr)(nn->tp->tsizeof()/esz),0);
						Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
						Pexpr arg = new expr(ELIST,dtor,zero);
						dtor->lval(ADDROF);
						arg = new expr(ELIST,sz,arg);
						arg = new expr(ELIST,noe,arg);
						arg = new expr(ELIST,nn,arg);
						arg = new call(vec_del_fct,arg);
						arg->base = G_CALL;
						arg->fct_name = vec_del_fct;
						arg->tp = any_type;	// avoid another type check
						dls = new estmt(SM,nn->where,arg,0);
					}
					else {	/* nn->cl.~cl(0); */
						Pref r = new ref(DOT,nn,dtor);
						Pexpr ee = new expr(ELIST,zero,0);
						Pcall dl = new call(r,ee);
						dls = new estmt(SM,nn->where,dl,0);
						dl->base = G_CALL;
						dl->fct_name = dtor;
						dl->tp = any_type;	// avoid another check
					}
					// destructors for statics are executed in reverse order
					if (st_dlist) dls->s_list = st_dlist;
					st_dlist = dls;
					tbl = otbl;
				}
				}
			}
			if (ctor)	{
				Pexpr oo = nn;
				for (int vi=vec_seen; vi; vi--) oo = oo->contents();
				int sti = 0;
//error('d',"ctor init=%d n_scope=%d",init,nn->n_scope);
				switch (nn->n_scope) {
				case EXTERN:
					if (init==0 && n_sto==EXTERN) goto ggg;
				case STATIC:
					sti = 1;
					if (tbl != gtbl) {
// prohibited only to avoid having to handle local variables in the
// constructors argument list
	error('s',"local static%n of class with constructor",this);
					}
				default:
					if (vec_seen && init) {
						error("Ir forCO%n\[\]",this);
						n_initializer = init = 0;
					}
					break;
				case ARG:
//error('d',"init %d",init);
/*
					if (init) {
						// check default arguments
						init = new texpr(VALUE,cl,0);
						init->e2 = oo;
						nn->n_initializer
							= n_initializer
							= init
							= init->typ(tbl);
					}
*/
				case PUBLIC:
				case 0:
					goto ggg;
				}
				const_save = 1;
				nn->assign();
//error('d',"init %d %n tbl %d",init,nn,tbl);
				Ptable otbl = tbl;
				if (sti) {	// to collect temporaries generated
						// in static initializers where we
						// can find them again (in sti_tbl)
					if (sti_tbl == 0) sti_tbl = new table(8,gtbl,0);
					tbl = sti_tbl;
					if (n_sto == EXTERN) nn->n_sto = n_sto = 0;
				}
//error('d',"init %d %d vec_seen %d",init,init?init->base:0,vec_seen);
				if (init) {
					if (init->base==VALUE) {
//error('d',"value %d",init->tp2->base);
						switch (init->tp2->base) {
						case CLASS:
							if (Pclass(init->tp2)!=cl) goto inin;
							break;
						default:
							Pname  n2 = init->tp2->is_cl_obj();
							if (n2==0 || Pclass(n2->tp)!=cl) goto inin;
						}
						init->e2 = oo;
						init = init->typ(tbl);
					}
					else {
					inin:
//error('d',"inin:");
						init = init->typ(tbl);
						init = class_init(nn,nn->tp,init,tbl);
					}
				}
				else {
					init = new texpr(VALUE,cl,0);
					init->e2 = oo;
					init = init->typ(tbl);
				}
				Pname c;
				if (vec_seen) {
					c = cl->has_ictor();
					if (c == 0)
						error("vector ofC%n that do not have a constructor taking noAs",cn);
					else if (Pfct(c->tp)->nargs)
						error('s',"defaultAs for constructor for vector ofC%n",cn);
				}
				
	if (sti) {
		if (vec_seen) {	// _vec_new(vec,noe,sz,ctor);
			int esz = cl->tsizeof();
			Pexpr noe = new expr(IVAL,(Pexpr)(nn->tp->tsizeof()/esz),0);
			Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
			Pexpr arg = new expr(ELIST,c,0);
			c->lval(ADDROF);
			arg = new expr(ELIST,sz,arg);
			arg = new expr(ELIST,noe,arg);
			arg = new expr(ELIST,nn,arg);
			init = new call(vec_new_fct,arg);
			init->base = G_CALL;
			init->fct_name = vec_new_fct;
			init->tp = any_type;
		}
		else {
//error('d',"init%n: %k",nn,init->base);
			switch (init->base) {
			case DEREF:		// *constructor?
				if (init->e1->base == G_CALL) {	
					Pname fn = init->e1->fct_name;
					if (fn==0 || fn->n_oper!=CTOR) goto as;
					init = init->e1;
					break;
				}
				goto as;
			case ASSIGN:
				if (init->e1 == nn) break;	// simple assignment
			as:	
			default:	
				init = new expr(ASSIGN,nn,init);
			}
		}
		Pstmt ist = new estmt(SM,nn->where,init,0);
		// constructors for statics are executed in order
		static Pstmt itail = 0;
		if (st_ilist == 0)
			st_ilist = ist;
		else
			itail->s_list = ist;
		itail = ist;
		init = 0;
	} // if (sti)
				nn->n_initializer = n_initializer = init;
				const_save = const_old;
				tbl = otbl;
			}
			else if (init == 0)		/* no initializer */
				goto str;
			else if (cl->is_simple() && cl->csu!=UNION && cl->csu!=ANON)	/* struct */
				goto str;
			else if (init->base == ILIST) {	// class or union
				error("cannotI%n withIrL",nn);
			}
			else {			// bitwise copy ok?
						// possible to get here?
//error('d',"not simple %n",this);
				init = init->typ(tbl);
				if (nn->tp->check(init->tp,ASSIGN)==0)
					goto str;
				else
					error("cannotI%n:C %s has privateMs but no constructor",nn,cl->string);
			}
			break;
		}
		case VEC:	
			t = Pvec(t)->typ;
			vec_seen++;
			goto lll;
		case TYPE:
			if (init==0 && Pbase(t)->b_const) {
				switch (n_scope) {
				case ARG:
				case 0:
				case PUBLIC:
					break;
				default:
					if (n_sto != EXTERN) error("unId const%n",this);
				}
			}
			t = Pbase(t)->b_name->tp;
			goto lll;
		default:
		str:
//error('d',"str: %n",this);
			if (init == 0) {
				switch (n_scope) {
				case ARG:
				case 0:
				case PUBLIC:
					break;
				default:
					if (n_sto!=EXTERN && t->tconst()) error("unId const%n",this);
				}

				break;
			}

			const_save = 	   const_save
					|| n_scope==ARG
					|| (t->tconst() && vec_const==0);
			nn->n_initializer = n_initializer = init = init->typ(tbl);
			if (const_save) PERM(init);
			nn->assign();
			const_save = const_old;

			switch (init->base) {
			case ILIST:
				new_list(init);
				list_check(nn,nn->tp,0);
				if (next_elem()) error("IrL too long");
				break;
			case STRING:
				if (nn->tp->base == VEC) {
					Pvec v = (Pvec)nn->tp;
					if (v->typ->base == CHAR) {
					/*	error('w',"\"char[] = string\"");*/
						int sz = v->size;
						int isz = Pvec(init->tp)->size;
						if (sz == 0)
							v->size = isz;
						else if (sz < isz)
							error("Ir too long (%d characters) for%n[%d]",isz,nn,sz);
						break;
					}
				}
			default:
			{	Ptype nt = nn->tp;

				if (vec_seen) {
					error("badIr for vector%n",nn);
					break;
				}
			tlx:
				switch (nt->base) {
				case TYPE:
					nt = ((Pbase)nt)->b_name->tp;
					goto tlx;
				case INT:
				case CHAR:
				case SHORT:
					if (init->base==ICON && init->tp==long_type)
						error('w',"longIr constant for%k%n",nn->tp->base,nn);
				case LONG:
					if (Pbase(nt)->b_unsigned
					&& init->base==UMINUS
					&& init->e2->base==ICON)
						error('w',"negativeIr for unsigned%n",nn);
					if (Pbase(nt)->b_const) {
						int i;
						Neval = 0;
						i = init->eval();
						if (Neval == 0) {
							DEL(init);
							nn->n_evaluated = n_evaluated = 1;
							nn->n_val = n_val = i;
							nn->n_initializer = n_initializer = 0;
						}
					}
					goto cvcv;
		case PTR:
		{	Pfct ef = Pfct(Pptr(nt)->typ);
			if (ef->base == FCT) {
				Pfct f;
				Pname n = 0;
				switch (init->base) {
				case NAME:
					f = (Pfct)init->tp;
					n = Pname(init);
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						init = new expr(G_ADDROF,0,init);
						init->tp = f;
					}
					goto ad;
				case DOT:
				case REF:
					f = (Pfct) init->mem->tp;
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						n = Pname(init->mem);
						init = new expr(G_ADDROF,0,init);
						init = init->typ(tbl);
					}
					goto ad;
				case ADDROF:
				case G_ADDROF:
					f = (Pfct)init->e2->tp;
				ad:
					if (f->base == OVERLOAD) {
						Pgen g = (Pgen)f;
						n = g->find(ef);
						if (n == 0) {
							error("cannot deduceT for &overloaded %s()",g->string);
						}
						init->e2 = n;
						n_initializer = init;
						n->lval(ADDROF);
						goto stgg;
					}
					if (n) n->lval(ADDROF);
				}
			}
		}
				} 
	cvcv:
		{	Pname cn;
			int i;
			if ((cn=init->tp->is_cl_obj())
			&& (i=can_coerce(nt,init->tp))
			&& Ncoerce) {
				if (1 < i) error("%d possible conversions forIr",i);
/*error('d',"dcl %t<-%t",nt,init->tp);*/
				Pclass cl = (Pclass)cn->tp;
				Pref r = new ref(DOT,init,Ncoerce);
				Pexpr c = new expr(G_CALL,r,0);
				c->fct_name = Ncoerce;
				c->tp = nt;
				n_initializer = c;
				goto stgg;
			}
		}
				if (nt->check(init->tp,ASSIGN))
					error("badIrT%t for%n (%tX)",init->tp,this,nn->tp);
			else {
			stgg:
				if (init && n_stclass== STATIC) {
					/* check if non-static variables are used */
					/* INCOMPLETE */
					switch (init->base) {
					case NAME:
						if (init->tp->tconst()==0) error("V%n used inIr for%n",init,nn);
						break;
					case DEREF:
					case DOT:
					case REF:
					case CALL:
					case G_CALL:
						error("%k inIr of static%n",init->base,nn);
					}
			}
			}
		}
		} /* switch */
	} /* block */
	} /* default */

	} /* switch */
ggg:
	PERM(nn);
	switch (n_scope) {
	case FCT:
		nn->n_initializer = n_initializer;
		break;
	default:
	{/*	Pexpr ii = nn->n_initializer;*/
		Ptype t = nn->tp;
	/*	if (ii) PERM(ii);*/
	px:
		PERM(t);
		switch (t->base) {
		case PTR:
		case RPTR:	t = Pptr(t)->typ; goto px;
		case VEC:	t = Pvec(t)->typ; goto px;
		case TYPE:	t = Pbase(t)->b_name->tp; goto px;
		case FCT:	t = Pfct(t)->returns; goto px; /* args? */
		} 
	}
	}
	
	Cdcl = odcl;
	return nn;
}


int inline_restr;	/* report use of constructs that the inline expanded
			   cannot handle here
			*/

void fct.dcl(Pname n)
{
	int nmem = TBLSIZE;
	Pname a;
	Pname ll;
	Ptable ftbl;

	Pptr cct = 0;
	int const_old = const_save;

	int bit_old = bit_offset;
	int byte_old = byte_offset;
	int max_old = max_align;
	int stack_old = stack_size;

	if (base != FCT) error('i',"fct.dcl(%d)",base);
	if (body == 0) error('i',"fct.dcl(body=%d)",body);
	if (n==0 || n->base!=NAME) error('i',"fct.dcl(name=%d %d)",n,(n)?n->base:0);

	if (body->memtbl == 0) body->memtbl = new table(nmem+3,n->n_table,0);
	ftbl = body->memtbl;
	body->own_tbl = 1;
	ftbl->real_block = body;

	max_align = AL_FRAME;
	stack_size = byte_offset = SZ_BOTTOM;
	bit_offset = 0;

	cc->stack();
	cc->nof = n;
	cc->ftbl = ftbl;

	switch (n->n_scope) {
	case 0:
	case PUBLIC:
		cc->not = n->n_table->t_name;
		cc->cot = (Pclass)cc->not->tp;
		cc->tot = cc->cot->this_type;
		if (f_this==0 || cc->tot==0) error('i',"fct.dcl(%n): f_this=%d cc->tot=%d",n,f_this,cc->tot);
		f_this->n_table = ftbl;		/* fake for inline printout */
		cc->c_this = f_this;
	
	}

	Pname ax;
	for (a=argtype, ll=0; a; a=ax) {
		ax = a->n_list;
		Pname nn = a->dcl(ftbl,ARG);
		nn->n_assigned_to = nn->n_used = nn->n_addr_taken = 0;
		nn->n_list = 0;
		switch (a->tp->base) {
		case CLASS:
		case ENUM:	/* unlink types declared in arg list */
			a->n_list = dcl_list;
			dcl_list = a;
			break;
		default:
			if (ll)
				ll->n_list = nn;
			else {
				argtype = nn;
				if (f_this) f_this->n_list = argtype;
	 		}
			ll = nn;
			delete a;
		}
	}


	/*
		handle initializers for base class and member classes
		this->f_init == list of names of classes to be initialized
		no name		=> base class
				=> constructor call in f_init->n_initializer
		name "m"	=> member object
				=> constructor call in m->n_initializer
	*/
	if (n->n_oper != CTOR) {
		if (f_init) error(0,"unXAL: not a constructor");
	}
	else {
//error('d',"%n:f_init %d %d",n,f_init,f_init?f_init->base:0);
		if (f_init) {				// explicit initializers
			Pname  bn  = cc->cot->clbase;
			Ptable tbl = cc->cot->memtbl;
			Pexpr binit = 0;
			Pname nx;
			const_save = 1;
			for ( Pname nn=f_init; nn; nn=nx) {
				nx = nn->n_list;
				Pexpr i = nn->n_initializer;

				if (nn->string) { // class member initializer
					Pname m = tbl->look(nn->string, 0);
					if (m && m->n_table == tbl)
						nn->n_initializer = mem_init(m,i,ftbl);
					else {
						error("%n not inC%n",m,n);
						nn->n_initializer = 0;
					}
				}
				else if (bn) {  // base class initializer
					binit = base_init(bn,i,ftbl);
					nn->n_initializer = 0;
				}
				else
					error( "unXAL: noBC" );
			} // for
			const_save = const_old;
			b_init = binit;
		}

		if (b_init == 0) { // try default initialization of base class
			Pname  bn  = cc->cot->clbase;
			if (bn && Pclass(bn->tp)->has_ctor())
				b_init = base_init(bn,0,ftbl);
		}
	}


	PERM(returns);
	if (returns->base != VOID) {
		Pname rv = new name("_result");
		rv->tp  = returns;
		ftbl->insert(rv,0);
		delete rv;
	}	

	const_save = f_inline?1:0;
	inline_restr = 0;
	body->dcl(ftbl);
	if( f_inline && inline_restr && returns->base!=VOID) {
		f_inline = 0;
		error( 'w', "\"inline\" ignored, %n contains%s%s%s%s",n,
			(inline_restr & 8) ? " loop"	: "",
			(inline_restr & 4) ? " switch"	: "",
			(inline_restr & 2) ? " goto"	: "",
			(inline_restr & 1) ? " label"	: "" );
	}
	const_save = const_old;

	if (f_inline) isf_list = new name_list(n,isf_list);

	defined |= DEFINED;

	frame_size = stack_size + SZ_TOP;
	frame_size = ((frame_size-1)/AL_FRAME)*AL_FRAME+AL_FRAME;
	bit_offset = bit_old;
	byte_offset = byte_old;
	max_align = max_old;
	stack_size = stack_old;

	cc->unstack();
}


Pexpr fct.base_init(Pname bn, Pexpr i, Ptable ftbl)
/*
	have base class bn and expr list i
	return "( *(base*)this ) . ctor( i )"
	ctor call generated in expr.typ()
*/
{
	Pclass bcl = (Pclass)bn->tp;
	Pname bnw = bcl->has_ctor();
//error('d',"base_init%n %d i %d %d bcl %d %d",bn,bnw,i,i?i->base:0,bcl,bcl?bcl->base:0);
	if (bnw) {
		Ptype t = bnw->tp;
		Pfct f  = Pfct((t->base==FCT) ? t : Pgen(t)->fct_list->f->tp);
		Ptype ty = f->f_this->tp;		// this
		Pexpr th = new texpr(CAST,ty,f_this);	// (base*)this
		Pexpr v  = new texpr(VALUE,bcl,i);	// ?.base(i)
		v->e2    = new expr(DEREF,th,0);	// (*(base*)this).base(i)
		v = v->typ(ftbl);			// *base(&*(base*)this,i)
//error('d',"v %d %k",v,v->base);
		switch (v->base) {
		case DEREF:
			Pexpr vv = v;
			v = v->e1;			// base(&*(base*)this,i)
			delete vv;
			break;
		case ASSIGN:		// degenerate base(base&): *(base*)this=i
			th = new texpr(CAST,ty,f_this);
			v = new expr(CM,v,th);	// (*(base*)this=i,(base*)this);
			v = v->typ(ftbl);
			break;
		default:
			error('i',"fct.base_init: unX%k",v->base);
		}
		return v;
	} else
		error(0,"unXAL: noBC constructor");
	return 0;
}


Pexpr fct.mem_init(Pname member, Pexpr i, Ptable ftbl)
/*
	return "member_ctor( m, i )"
*/
{
//error('d',"mem_init(%n)",member);
	if (member->n_stclass == STATIC) error('s',"MIr for static%n",member);
	Pname cn = member->tp->is_cl_obj();	// first find the class name
	if (cn) {
		Pclass mcl = Pclass(cn->tp);	// then find the classdef
		Pname ctor = mcl->has_ctor();
//error('d',"cn%n ctor %d",cn,ctor);
		if (ctor) {	// generate: this->member.cn::cn(args)
			Pref tn = new ref(REF,f_this,member);
			Pref ct = new ref(DOT,tn,ctor);
			Pexpr c = new expr(G_CALL,ct,i);
			return c->typ(ftbl);
		} else
			error("init of member %m with no ctor",member);
	} else if (cl_obj_vec)
		error('s', "init of Cmember vector with ctor");
	else if (member->tp->tconst()) {
		TOK t = member->tp->set_const(0);
		switch (t) {
		case ANY:
		case VEC:
		case RPTR:
			error("MIr for%kM%n",member);
			return 0;
		}
		Pref tn = new ref(REF,f_this,member);
		Pexpr init = new expr(ASSIGN,tn,i);
		init = init->typ(ftbl);
		member->tp->set_const(1);
		return init;
	}
	else if (member->tp->is_ref()) {
		Pexpr init = i->typ(ftbl);
		init = ref_init(Pptr(member->tp),init,ftbl);
		member->assign();
		return init;
	}
	else {
		Pref tn = new ref (REF,f_this,member);
		Pexpr init = new expr(ASSIGN,tn,i);
		return init->typ(ftbl);
	}
	return 0;
}
