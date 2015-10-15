/* @(#) expr2.c 1.4 1/27/86 17:48:56 */ 
/*ident	"@(#)cfront:src/expr2.c	1.4" */
/***************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


expr2.c:

	type check expressions

************************************************************************/

#include "cfront.h"
#include "size.h"

void name.assign()
{
	if (n_assigned_to++ == 0) {
		switch (n_scope) {
		case FCT:
			if (n_used && n_addr_taken==0)  {
				Ptype t = tp;
			ll:
				switch (t->base) {
				case TYPE:
					t=Pbase(t)->b_name->tp; goto ll;
				case VEC:
					break;
				default:
					if (curr_loop)
						error('w',"%n may have been used before set",this);
					else
						error('w',"%n used before set",this);
				}
			}
		}
	}
}

int expr.lval(TOK oper)
{
	register Pexpr ee = this;
	register Pname n;
	int deref = 0;
	char* es;

	if (this==0 || tp==0) error('i',"%d->lval(0)",this);

	switch (oper) {
	case ADDROF:
	case G_ADDROF:
		es = "address of";
		break;
	case INCR:
	case DECR:
		es = "increment of";
		goto def;
	case DEREF:
		es = "dereference of";
		break;
	default:
		es = "assignment to";
	def:
		if (tp->tconst()) {
			if (oper) {
				if (base == NAME)
					error("%s constant%n",es,this);
				else
					error("%s constant",es);
			}
			return 0;
		}
	}
//error('d',"lval %s",es);
	forever {
//error('d',"ee %d %k",ee->base,ee->base);
		switch (ee->base) {
		case G_CALL:
		case CALL:
			if (deref == 0) {
				switch (oper) {
				case ADDROF:
				case G_ADDROF:
				case 0:
					if (ee->fct_name
					&& Pfct(ee->fct_name->tp)->f_inline) return 1;
				}
			}
		default:
			if (deref == 0) {
				if (oper) error("%s %k (not an lvalue)",es,ee->base);
				return 0;
			}
			return 1;
		case ZERO:
		case CCON:
		case ICON:
		case FCON:
			if (oper) error("%s numeric constant",es);
			return 0;
		case STRING:
			if (oper) error('w',"%s string constant",es);
			return 1;

		case DEREF:
		{	Pexpr ee1 = ee->e1;
			if (ee1->base == ADDROF) /* *& vanishes */
				ee = ee1->e2;
			else {
				ee = ee1;
				deref = 1;
			}
			break;
		}
	// OK, except I cannot generate old C for (i?a:b) = c
	//	case QUEST:
	//		return e1->lval(oper) && e2->lval(oper);
	//	case INCR:
	//	case DECR:
	//		ee = (ee->e1) ? ee->e1 : ee->e2;
	//		break;

		case DOT:
//error('d',"lval dot: %k",ee->e1->base);
			switch (ee->e1->base) {		// update use counts, etc.
			case NAME:
//error('d',"lval dot: %n (oper %d)",Pname(ee->e1),oper);
				switch (oper) {
				case ADDROF:
				case G_ADDROF:	Pname(ee->e1)->take_addr();
				case 0:		break;
				case ASSIGN:	Pname(ee->e1)->n_used--;
				default:	Pname(ee->e1)->assign(); // asop
				}
			case DOT:
				Pexpr e = ee->e1;
				do e=e->e1; while(e->base==DOT);
				if (e->base == NAME) {
//error('d',"lval dot.dot: %n (oper %d)",Pname(e),oper);
					switch (oper) {
					case ADDROF:
					case G_ADDROF:	Pname(e)->take_addr();
					case 0:		break;
					case ASSIGN:	Pname(e)->n_used--;
					default:	Pname(e)->assign(); // asop
					}
				}
			}
			n = ee->mem;
			if (deref==0 && ee->e1->tp->tconst()) {
				if (oper) error("%sM%n of%t",es,n,ee->e1->tp);
				return 0;
			}
			goto xx;

		case REF:
			n = ee->mem;
			if (deref==0) {
				Ptype p = ee->e1->tp;
			zxc:
				switch (p->base) {
				case TYPE:	p = Pbase(p)->b_name->tp; goto zxc;
				case PTR:	break;
				default:	error('i',"%t->%n",p,n);
				}
			 	if (Pptr(p)->typ->tconst()) {
					if (oper) error("%sM%n of%t",es,n,Pptr(p)->typ);
					return 0;
				}
			}
			goto xx;
		case NAME:
			n = (Pname)ee;
		xx:
			if (deref || oper==0) return 1;

			if (n->tp->base==FIELD && Pbase(n->tp)->b_bits==0) {
				error("%s 0-length field%n",es,n);
				return 0;
			}
			switch (oper) {
			case ADDROF:
			case G_ADDROF:
			{	Pfct f = (Pfct)n->tp;
				if (n->n_sto == REGISTER) {
					error("& register%n",n);
					return 0;
				}
				if (f == 0) {
					error("& label%n",n);
					return 0;
				}
				if (n->n_stclass == ENUM) {
					error("& enumerator%n",n);
					return 0;
				}
				if (n->tp->base==FIELD) {
					error("& field%n",es,n);
					return 0;
				}
				n->n_used--;
				n->take_addr();
				if ( (n->n_evaluated && n->n_scope!=ARG)
				|| (f->base==FCT && f->f_inline) ) {
					/* address of const or inline: allocate it */
					Pname nn = new name;
					if (n->n_evaluated && n->n_scope!=ARG) {
						n->n_evaluated = 0;	/* use allocated version */
						n->n_initializer = new expr(IVAL,(Pexpr)n->n_val,0);
					}
					*nn = *n;
					nn->n_sto = STATIC;
					nn->n_list = dcl_list;
					dcl_list = nn;
				}
				break;
			}
			case ASSIGN:
				n->n_used--;
				n->assign();
				break;
			default:	/* incr ops, and asops */
				if (cc->tot && n==cc->c_this) {
					error("%n%k",n,oper);
					return 0;
				}
				n->assign();
			}
			return 1;
		}
	}
}

Pexpr Ninit;	// default argument used;
int Nstd;	// standard coercion used (derived* =>base* or int=>long or ...)

bit gen_match(Pname n, Pexpr arg)
/*
	look for an exact match between "n" and the argument list "arg" 
*/
{
	Pfct f = Pfct(n->tp);
	register Pexpr e;
	register Pname nn;

	for (e=arg, nn=f->argtype; e; e=e->e2, nn=nn->n_list) {
		Pexpr a = e->e1;
		Ptype at = a->tp;
		if (at->base == ANY) return 0;
		if (nn == 0) return f->nargs_known==ELLIPSIS;

		Ptype nt = nn->tp;

//error('d',"nt %t at %t",nt,at);
		switch (nt->base) {
		case RPTR:
			if (at == zero_type) return 0; //break;
			if (nt->check(at,COERCE)) {
				Pptr pt = at->addrof();
				nt->base = PTR;		// handle derived classes
//error('d',"ptr nt %t pt %t",nt,pt);
				if (nt->check(pt,COERCE)) {
					nt->base = RPTR;
					delete pt;
					return 0;
				}
				nt->base = RPTR;
				delete pt;
			}
			break;
		default:
			if (nt->check(at,COERCE)) return 0;
		}
	}
//error('d',"nn %d init %d",nn,nn?nn->n_initializer:0);
	if (nn) {
		Ninit = nn->n_initializer;
		return Ninit!=0;
	}

	return 1;
}

Pname Ncoerce;

bit can_coerce(Ptype t1, Ptype t2)
/*	return number of possible coercions of t2 into t1,
	Ncoerce holds a coercion function (not constructor), if found
*/
{
//error('d',"can_coerce %t<-%t",t1,t2);
	Ncoerce = 0;
	if (t2->base == ANY) return 0;
	switch (t1->base) {
	case RPTR:
	rloop:
		switch (t2->base) {
		case TYPE:
			t2 = Pbase(t2)->b_name->tp;
			goto rloop;
	//	case VEC:
	//	case PTR:
	//	case RPTR:
	//		if (t1->check(t2,COERCE) == 0) return 1;
		default:	
		{	Ptype tt2 = t2->addrof();
//error('d',"t1%t tt2%t =>%d",t1,tt2,t1->check(tt2,COERCE));
			if (t1->check(tt2,COERCE) == 0) return 1;
			Ptype tt1 = Pptr(t1)->typ;
			int i = can_coerce(tt1,t2);
			return i;
		}
		}
	}

	Pname c1 = t1->is_cl_obj();
	Pname c2 = t2->is_cl_obj();
	int val = 0;
//error('d',"c1 %s c2 %s",c1?c1->string:"0",c2?c2->string:"0");
	if (c1) {
		Pclass cl = (Pclass)c1->tp;
		if (c2 && c2->tp==cl) return 1;

		/*	look for constructor
				with one argument
				or with default for second argument
			of acceptable type
		*/
		Pname ctor = cl->has_ctor();
		if (ctor == 0) goto oper_coerce;
		register Pfct f = (Pfct)ctor->tp;
//error('d',"f %k",f->base);
		switch (f->base) {
		case FCT:
			switch (f->nargs) {
			case 1:
			one:
			{	Ptype tt = f->argtype->tp;
//error('d',"one: f->argtype->tp %t t2 %t",tt,t2);
				if (tt->check(t2,COERCE)==0) val = 1;
				if (tt->base == RPTR) {
					Pptr pt = t2->addrof();	// handle derived classed
					tt->base = PTR;
					if (tt->check(pt,COERCE) == 0) val = 1;
					tt->base = RPTR;
					delete pt;
				}
				goto oper_coerce;
			}
			default:
				if (f->argtype->n_list->n_initializer) goto one;
			case 0:
				goto oper_coerce;
			}
		case OVERLOAD:
		{	register Plist gl;

			for (gl=Pgen(f)->fct_list; gl; gl=gl->l) { // look for match
				Pname nn = gl->f;
				Pfct ff = (Pfct)nn->tp;
				switch (ff->nargs) {
				case 0:
					break;
				case 1:
				over_one:
				{	Ptype tt = ff->argtype->tp;
//error('d',"over_one: ff->argtype->tp %t t2 %t",tt,t2);
					if (tt->check(t2,COERCE) == 0) val = 1;
					if (tt->base == RPTR) {
						Pptr pt = t2->addrof();	// handle derived classed
						tt->base = PTR;
						if (tt->check(pt,COERCE) == 0) {
							tt->base = RPTR;
							delete pt;
							val = 1;
							goto oper_coerce;
						}
						tt->base = RPTR;
						delete pt;
					}
					break;
				}
				default:
					if (ff->argtype->n_list->n_initializer) goto over_one;
				}
			}
			goto oper_coerce;
		}
		default:
			error('i',"cannot_coerce(%k)\n",f->base);
		}
	}
oper_coerce:
	if (c2) {	
		Pclass cl = (Pclass)c2->tp;
		int std = 0;
		for (register Pname on=cl->conv; on; on=on->n_list) {
//error('d',"oper_coerce%n %t %d",on,(on)?on->tp:0,on);
			Pfct f = (Pfct)on->tp;
			Nstd = 0;
			if (t1->check(f->returns,COERCE) == 0) {
//error('d',"nstd %d std %d",Nstd,std);
				if (Nstd==0) {	// forget solutions involving standard conversions
					if (std) {	// forget
						val = 1;
						std = 0;
					}
					else
						val++;
					Ncoerce = on;
				}
				else {	// take note only if no exact match seen
					if (val==0 || std) {
						Ncoerce = on;
						val++;
						std = 1;
					}
				}
			}
		}
	}
//error('d',"val %d",val);
	if (val) return val;
	if (c1 && Pclass(c1->tp)->has_itor()) return 0;
	if (t1->check(t2,COERCE)) return 0;
	return 1;
}

int gen_coerce(Pname n, Pexpr arg)
/*
	look to see if the argument list "arg" can be coerced into a call of "n"
	1: it can
	0: it cannot or it can be done in more than one way
*/
{
	Pfct f = (Pfct) n->tp;
	register Pexpr e;
	register Pname nn;
//error('d',"gen_coerce%n %d",n,arg);
	for (e=arg, nn=f->argtype; e; e=e->e2, nn=nn->n_list) {
		if (nn == 0) return f->nargs_known==ELLIPSIS;
		Pexpr a = e->e1;
		Ptype at = a->tp;
		int i = can_coerce(nn->tp,at);
//error('d',"a1 %k at%t argt%t -> %d",a->base,at,nn->tp,i);
		if (i != 1) return 0;
	}
	if (nn && nn->n_initializer==0) return 0;
	return 1;
}


Pname Nover;
int Nover_coerce;

int over_call(Pname n, Pexpr arg)
/*	
	return 2 if n(arg) can be performed without user defined coercion of arg
	return 1 if n(arg) can be performed only with user defined coercion of arg
	return 0 if n(arg) is an error
	Nover is the function found, if any
*/
{	
	register Plist gl;
	Pgen g = (Pgen) n->tp;
	if (arg && arg->base!= ELIST) error('i',"ALX");
//error('d',"over_call%n base%k arg %d%k", n, g->base, arg, arg?arg->tp->base:0);
	Nover_coerce = 0;
	switch (g->base) {
	default:	error('i',"over_call(%t)\n",g);
	case OVERLOAD:	break;
	case FCT:
		Nover = n;
		Ninit = 0;
		if (gen_match(n,arg) && Ninit==0) return 2;
		if (gen_coerce(n,arg)) return 1;
		return 0;
	}

	Pname exact = 0;
	int no_exact = 0;
	for (gl=g->fct_list; gl; gl=gl->l) {		/* look for match */
		Nover = gl->f;
		Ninit = 0;
		Nstd = 0;
//error('d',"exact? %n",Nover);
		if (gen_match(Nover,arg) && Ninit==0) {
//error('d',"%n: nstd %d",Nover,Nstd);
			if (Nstd == 0) return 2;
			if (exact)
				no_exact++;
			else
				exact = Nover;
		}
			
	}

	if (exact) {
//error('d',"exact%n %d",exact,no_exact);
		if (no_exact) error('w',"more than one standard conversion possible for%n",n);
		Nover = exact;
		return 2;
	}
//error('d',"exact == 0");
	Nover = 0;
	for (gl=g->fct_list; gl; gl=gl->l) {		/* look for coercion */
		Pname nn = gl->f;
//error('d',"over_call: gen_coerce(%n,%k) %d",nn,arg->e1->base,gen_coerce(nn,arg));
		if (gen_coerce(nn,arg)) {
			if (Nover) {
				Nover_coerce = 2;
				return 0;		/* ambiguous */
			}
			Nover = nn;
		}
	}

	return Nover ? 1 : 0;
}


Ptype expr.fct_call(Ptable tbl)
/*
	check "this" call:
		 e1(e2)
	e1->typ() and e2->typ() has been done
*/
{
	Pfct f;
	Pname fn;
	int x;
	int k;
	Pname nn;
	Pexpr e;
	Ptype t;
	Pexpr arg = e2;
	Ptype t1;
	int argno;
	Pexpr etail = 0;
	Pname no_virt;	// set if explicit qualifier was used: c::f()
//error('d',"fct_call");
	switch (base) {
	case CALL:
	case G_CALL:	break;
	default:	error('i',"fct_call(%k)",base);
	}

	if (e1==0 || (t1=e1->tp)==0) error('i',"fct_call(e1=%d,e1->tp=%t)",e1,t1);
	if (arg && arg->base!=ELIST) error('i',"badAL%d%k",arg,arg->base);

	switch (e1->base) {
	case NAME:
		fn = (Pname)e1;
		no_virt = fn->n_qualifier;
		break;
	case REF:
	case DOT:
		fn = e1->mem;
		no_virt = fn->n_qualifier;
		break;
	default:
		fn = 0;
		no_virt = 0;
	};
//error('d',"fn%n t1%k",fn,t1->base);
lll:
	switch (t1->base) {
	case TYPE:
		t1 = Pbase(t1)->b_name->tp;
		goto lll;

	case PTR:	// pf() allowed as shorthand for (*pf)()
		if (Pptr(t1)->typ->base == FCT) {
			t1 = Pptr(t1)->typ;
			fn = 0;
			goto case_fct;
		}

	default:
		error("call of%n;%n is a%t",fn,fn,e1->tp);

	case ANY:
		return any_type;
	
	case OVERLOAD:
	{	register Plist gl;
		Pgen g = (Pgen) t1;
		Pname found = 0;

//		for (gl=g->fct_list; gl; gl=gl->l) {	/* look for match */
//			register Pname nn = gl->f;
//error('d',"gen_match %s %d",nn->string?nn->string:"?",arg->base);
//			if (gen_match(nn,arg)) {
//				found = nn;
//				goto fnd;
//			}
//		}
	Pname exact = 0;
	int no_exact = 0;
	for (gl=g->fct_list; gl; gl=gl->l) {		/* look for match */
		register Pname nn = gl->f;
		Ninit = 0;
		Nstd = 0;

		if (gen_match(nn,arg)) {
			if (Nstd == 0)  {
				found = nn;
				goto fnd;
			}
			if (exact)
				no_exact++;
			else
				exact = nn;
		}
			
	}
	if (exact) {
		if (no_exact) error('w',"more than one standard conversion possible for%n",fn);
		found = exact;
		goto fnd;
	}
//error('d',"exact == 0");
		for (gl=g->fct_list; gl; gl=gl->l) {	/* look for coercion */
			register Pname nn = gl->f;
//error('d',"gen_coerce %s %d\n",nn->string?nn->string:"?",arg->base);
			if (gen_coerce(nn,arg)) {
				if (found) {
					error("ambiguousA for overloaded%n",fn);
					goto fnd;
				}
				found = nn;
			}
		}
	
	fnd:
//error('d',"found%n",found);
		if (found) {
			Pbase b;
			Ptable tblx;

			f = (Pfct)found->tp;
			fct_name = found;

			/* is fct_name visible? */
//error('d',"e1 %d%k",e1,e1?e1->base:0);
			switch (e1->base) {
			default:
				if (no_virt) e1 = found;	// instead of using fct_name
				break;
			case REF:
				if (no_virt) e1->mem = found;	// instead of using fct_name
				if (e1->e1 == 0) break;		// constructor: this==0
				for (Ptype pt=e1->e1->tp; pt->base==TYPE; pt=Pbase(pt)->b_name->tp);
				b = Pbase(Pptr(pt)->typ);
				goto xxxx;
			case DOT:
				if (no_virt) e1->mem = found;	// instead of using fct_name
				b = Pbase(e1->e1->tp);
			xxxx:
				switch (b->base) {
				case TYPE:
					b = Pbase(b->b_name->tp);
					goto xxxx;
				case ANY:
					break;
				case COBJ:
					tblx = b->b_table;
					if (tblx->base!=TABLE) error('i',"tblx %d %d",tblx,tblx->base);
					break;
				default:
					error('i',"no tblx %d",b);
				}

				if (tblx->lookc(g->string,0) == 0)
					error('i',"fct_call overload check");
//error('d',"scope %d epriv %d ebase %d cc %d",found->n_scope,Epriv,Ebase,cc);
				switch (found->n_scope) {
				case 0:
					if (Epriv
					&& Epriv!=cc->cot
					&& !Epriv->has_friend(cc->nof)) {
						error("%n is private",found);
						break;
					}
					/* no break */
				case PUBLIC:
					if (Ebase
					&& (cc->cot==0
						|| ( Ebase!=cc->cot->clbase->tp
						&& !Ebase->has_friend(cc->nof)))
					) {
					  error("%n is from a privateBC",found);
					}
				}
			}
		}
		else {
			error("badAL for overloaded%n",fn);
			return any_type;
		}
		break;
	}
	case FCT:
	case_fct:
		f = (Pfct)t1;
		if (fn)	fct_name = fn;
		break;
	}

	if (no_virt) fct_name = 0;

	t = f->returns;
	x = f->nargs;
	k = f->nargs_known;
//error('d',"fct_name%n",fct_name);

	if (k == 0) {
		if (fct_void && fn && x==0 && arg)
			if (no_of_badcall++ == 0) badcall = fn;
		return t;
	}

	for (e=arg, nn=f->argtype, argno=1; e||nn; nn=nn->n_list, e=etail->e2, argno++) {
		Pexpr a;

		if (e) {
			a = e->e1;
//error('d',"e %d%k a %d%k e2 %d",e,e->base,a,a->base,e->e2);
			etail = e;

			if (nn) {	/* type check */
				Ptype t1 = nn->tp;
//error('d',"argname %n (%t)",nn,nn->tp);
			lx:
/*error('d',"lx: t1%t a->tp%t",t1,a->tp);*/
				switch (t1->base) {
				case TYPE:
					t1 = Pbase(t1)->b_name->tp;
					goto lx;
				case RPTR:
					e->e1 = ref_init(Pptr(t1),a,tbl);
					break;
				case COBJ:
					e->e1 = class_init(0,t1,a,tbl);
					break;
				case ANY:
					return t;
		case PTR:
		{	Pfct ef = (Pfct)Pptr(t1)->typ;
			if (ef->base == FCT) {
				Pfct f;
				Pname n = 0;
				switch (a->base) {
				case NAME:
					f = (Pfct)a->tp;
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						e->e1 = new expr(G_ADDROF,0,a);
						e->e1->tp = f;
					}
					n = Pname(a);
					goto ad;
				case DOT:
				case REF:
					f = (Pfct)a->mem->tp;
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						n = Pname(a->mem);
						a = new expr(G_ADDROF,0,a);
						e->e1 = a->typ(tbl);
					}
					goto ad;
				case ADDROF:
				case G_ADDROF:
					f = (Pfct)a->e2->tp;
				ad:
					if (f->base == OVERLOAD) {
						Pgen g = (Pgen)f;
						n = g->find(ef);
						if (n == 0) {
							error("cannot deduceT for &overloaded %s()",g->string);
							return any_type;
						}
						e->e1->e2 = n;
					}
					if (n) n->lval(ADDROF);
				}
				break;
				
			}
			goto def;
		}
				case CHAR:
				case SHORT:
				case INT:
					if (a->base==ICON && a->tp==long_type)
						error('w',"long constantA for%n,%kX",fn,t1->base);
				case LONG:
					if (((Pbase)t1)->b_unsigned
					&& a->base==UMINUS
					&& a->e2->base==ICON)
						error('w',"negativeA for%n, unsignedX",fn);
				default:
				def:
					{	Pname cn;
						int i;
						if ((cn=a->tp->is_cl_obj())
						&& (i=can_coerce(t1,a->tp))
						&& Ncoerce) {
							if (1 < i) error("%d possible conversions for%nA%d",i,fn,argno);
//error('d',"%t<-%t",t1,a->tp);
							Pclass cl = (Pclass)cn->tp;
							Pref r = new ref(DOT,a,Ncoerce);
							Pexpr rr = r->typ(tbl);
							Pexpr c = new expr(G_CALL,rr,0);
							c->fct_name = Ncoerce;
							c->tp = t1;
							e->e1 = c;		
							break;
						}
					}
					if (t1->check(a->tp,ARG)) {
						if (arg_err_suppress==0) error("badA %dT for%n:%t (%tX)",argno,fn,a->tp,nn->tp);
						return any_type;
					}
				}
			}
			else {
				if (k != ELLIPSIS) {
					if (arg_err_suppress==0) error("unX %dA for%n",argno,fn);
					return any_type;
				}
				return t;
			}
		}
		else {	/* default argument? */
			a = nn->n_initializer;
//error('d',"arg missing: %n %d as %d",nn,a,arg_err_suppress);
			if (a == 0) {
				if (arg_err_suppress==0) error("A %d ofT%tX for%n",argno,nn->tp,fn);
				return any_type;
			}
//error('d',"%n: perm=%d",nn,a->permanent);
			a->permanent = 2;	// ought not be necessary, but it is
			e = new expr(ELIST,a,0);
			if (etail)
				etail->e2 = e;
			else
				e2 = e;
			etail = e;
		}
	}

	return t;
}

int refd;

Pexpr ref_init(Pptr p, Pexpr init, Ptable tbl)
/*
	initialize the "p" with the "init"
*/
{
	register Ptype it = init->tp;
	Ptype p1 = p->typ;
	Pname c1;
	Pexpr a;
//error('d',"init %d",it->tconst());
rloop:
//error('d',"rloop: %d%k",it,it->base);
	switch (it->base) {
	case TYPE:
		it = Pbase(it)->b_name->tp; goto rloop;
	default:
		{	Ptype tt = it->addrof();
			p->base = PTR;	// allow &x for y& when y : public x
					// but not &char for int&
			int x = p->check(tt,COERCE);
			p->base = RPTR;
//error('d',"p%t tt%t => %d (nstd %d)",p,tt,x,Nstd);
			if (x == 0) {
				if (init->lval(0)) return init->address();
				if (init->base==G_CALL	// &inline function call?
				&& init->fct_name
				&& Pfct(init->fct_name->tp)->f_inline )
					return init->address();
				p1 = p->typ;
				goto xxx;
			}
		}
	}

	c1 = p1->is_cl_obj();

	if (c1) {
//error('d',"c1%n",c1);
		refd = 1;	/* disable itor */
		a = class_init(0,p1,init,tbl);
		refd = 0;
//error('d',"a %d init %d",a,init);
		if (a==init && init->tp!=any_type) goto xxx;
		switch (a->base) {
		case G_CALL:
		case CM:
			init = a;
			goto xxx;
		}
		return a->address();
	}

	if (p1->check(it,0)) {
		error("badIrT:%t (%tX)",it,p);
		if (init->base != NAME) init->tp = any_type;
		return init;
	}

xxx:
//error('d',"xxx: %k",init->base);
	switch (init->base) {
	case NAME:
	case DEREF:
	case REF:
	case DOT:	// init => &init
		if (it->tconst() && vec_const==0) goto def;
		init->lval(ADDROF);
		return init->address();
	case CM:
/*error('d',"cm%k",init->e2->base);*/
		switch (init->e2->base) {	/* (a, b) => (a, &b) */
		case NAME:
		case DEREF:
			return init->address();
		}
	default:
	def:			/* init = > ( temp=init, &temp) */
	{	Ptable otbl = tbl;
		if (Cstmt) {	/*	make Cstmt into a block */
			if (Cstmt->memtbl == 0) Cstmt->memtbl = new table(4,tbl,0);
			tbl = Cstmt->memtbl;
		}
		char* s = make_name('I');
		Pname n = new class name(s);

//error('d',"ref_init tmp %s n=%d tbl %d init=%d%k",s,n,tbl,init,init->base);
		if (tbl == gtbl) error('s',"Ir for static reference not an lvaue");		
		n->tp = p1;
		n = n->dcl(tbl,ARG); /* no initialization! */
		n->n_scope = FCT;
		n->assign();
		a = n->address();
//error('d',"tp %t init->tp %t",n->tp,init->tp);
		Pexpr as = new class expr(ASSIGN,n,init);
		a = new class expr(CM,as,a);
		a->tp = a->e2->tp;
		tbl = otbl;
		return a;
	}
	}
}

Pexpr class_init(Pexpr nn, Ptype tt, Pexpr init, Ptable tbl)
/*
	initialize "nn" of type "tt" with "init"
	if nn==0 make a temporary,
	nn may not be a name
*/
{	Pname c1 = tt->is_cl_obj();
	Pname c2 = init->tp->is_cl_obj();

//error('d',"class_init%n%n%n refd=%d",nn,c1,c2,refd);
	if (c1) {
		if (c1!=c2
		|| (refd==0 && Pclass(c1->tp)->has_itor())) {
			/*	really ought to make a temp if refd,
				but ref_init can do that
			*/
			int i = can_coerce(tt,init->tp);
//error('d',"i %d Ncoerce %d",i,Ncoerce);
			switch (i) {
			default:
				error("%d ways of making a%n from a%t",i,c1,init->tp);
				init->tp = any_type;
				return init;
			case 0:
				error("cannot make a%n from a%t",c1,init->tp);
				init->tp = any_type;
				return init;
			case 1:
				if (Ncoerce == 0) {
					Pexpr a = new class expr(ELIST,init,0);
					a = new texpr(VALUE,tt,a);
					a->e2 = nn;
					return a->typ(tbl);
				}
				switch (init->base) {
#ifdef BSD
				case CALL:
				case G_CALL:
#endif
				case CM:
				case NAME:	/* init.coerce() */	
				{	Pref r = new ref(DOT,init,Ncoerce);
					Pexpr rr = r->typ(tbl);
					Pexpr c = new expr(G_CALL,rr,0);
					c->fct_name = Ncoerce;
					init = c;
					break;
				}
				default:	/* (temp=init,temp.coerce()) */
				{	Ptable otbl = tbl;
					if (Cstmt) { /*	make Cstmt into a block */
						if (Cstmt->memtbl == 0) Cstmt->memtbl = new table(4,tbl,0);
						tbl = Cstmt->memtbl;
					}
					char* s = make_name('U');
					Pname tmp = new name(s);
					tmp->tp = init->tp;
					tmp = tmp->dcl(tbl,ARG); /* no init! */
					tmp->n_scope = FCT;
					Pexpr ass = new expr(ASSIGN,tmp,init);
					ass->tp = tt;
					Pref r = new ref(DOT,tmp,Ncoerce);
					Pexpr rr = r->typ(tbl);
					Pexpr c = new expr(G_CALL,rr,0);
					c->fct_name = Ncoerce;
					init = new expr(CM,ass,c);
					tbl = otbl;	
				}
				}
			}
			return init->typ(tbl);
		}
		else if (refd==0) {	// bitwise copy, check for dtor & operator=
			Pclass cl = Pclass(c1->tp);
			if (cl->itor==0) {
				if (cl->bit_ass == 0)
					error('w',"bitwise copy: %s has a member with operator=()",cl->string);
				else if (cl->has_dtor() && cl->has_oper(ASSIGN))
					error('w',"bitwise copy: %s has assignment and destructor but not %s(%s&)",cl->string,cl->string,cl->string);
			}
		}
//error('d',"class_init%n: init %d %d:%t",nn,init->tp,init->tp->base,init->tp);
		return init;
	}

	if (tt->check(init->tp,ASSIGN) && refd==0) {
		error("badIrT:%t (%tX)",init->tp,tt);
		init->tp = any_type;
	}
	return init;
}

int char_to_int(char* s)
/*	assume s points to a string:
		'c'
	or	'\c'
	or	'\0'
	or	'\ddd'
	or multi-character versions of the above
	(hex constants have been converted to octal by the parser)
*/
{
	register int i = 0;
	register char c, d, e;

	switch (*s) {
	default:
		error('i',"char constant store corrupted");
	case '`':
		error('s',"bcd constant");
		return 0;
	case '\'':
		break;
	}

	forever			/* also handle multi-character constants */
	switch (c = *++s) {
	case '\'':
		return i;
	case '\\':			/* special character */
		switch (c = *++s) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7':	/* octal representation */
			c -= '0';
			switch (d = *++s) {		/* try for 2 */
				
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7':
				d -= '0';
				switch (e = *++s) {	/* try for 3 */
					
				case '0': case '1': case '2': case '3': case '4':
				case '5': case '6': case '7':
					c = c*64+d*8+e-'0';
					break;
				default:
					c = c*8+d;
					s--;
				}
				break;
			default:
				s--;
			}
			break;
		case 'b':
			c = '\b';
			break;
		case 'f':
			c = '\f';
			break;
		case 'n':
			c = '\n';
			break;
		case 'r':
			c = '\r';
			break;
		case 't':
			c = '\t';
			break;
		case '\\':
			c = '\\';
			break;
		case '\'':
			c = '\'';
			break;
		}
		/* no break */
	default:
		if (i) i <<= BI_IN_BYTE;
		i += c;
	}
}

const A10 = 'A'-10;
const a10 = 'a'-10;

int str_to_int(register char* p)
/*
	read decimal, octal, or hexadecimal integer
*/
{
	register c;
	register i = 0;

	if ((c=*p++) == '0') {
		switch (c = *p++) {
		case 0:
			return 0;

		case 'l':
		case 'L':	/* long zero */
			return 0;

		case 'x':
		case 'X':	/* hexadecimal */
			while (c=*p++)
				switch (c) {
				case 'l':
				case 'L':
					return i;
				case 'A':
				case 'B':
				case 'C':
				case 'D':
				case 'E':
				case 'F':
					i = i*16 + c-A10;
					break;
				case 'a':
				case 'b':
				case 'c':
				case 'd':
				case 'e':
				case 'f':
					i = i*16 + c-a10;
					break;
				default:
					i = i*16 + c-'0';
				}
			return i;

		default:	/* octal */
			do 
				switch (c) {
				case 'l':
				case 'L':
					return i;
				default:
					i = i*8 + c-'0';
				}
			while (c=*p++);
			return i;
		}
	}	
				/* decimal */
	i = c-'0';
	while (c=*p++)
		switch (c) {
		case 'l':
		case 'L':
			return i;
		default:
			i = i*10 + c-'0';
		}
	return i;
	
		
}

char* Neval;

int expr.eval()
{
	if (Neval) return 1;

	switch (base) {
	case ZERO:	return 0;
	case IVAL:	return (int)e1;
	case ICON:	return str_to_int(string);
	case CCON:	return char_to_int(string);
	case FCON:	Neval = "float in constant expression"; return 1;
	case STRING:	Neval = "string in constant expression"; return 1;
	case EOBJ:	return Pname(this)->n_val;
	case SIZEOF:	return tp2->tsizeof();
	case NAME:
	{	Pname n = (Pname)this; 
		if (n->n_evaluated && n->n_scope!=ARG) return n->n_val;
		Neval = "cannot evaluate constant";
		return 1;
	}
	case ICALL:
		if (e1) {
			il->i_next = curr_icall;
			curr_icall = il;
			int i = e1->eval();
			curr_icall = il->i_next;
			return i;
		}
		Neval = "void inlineF";
		return 1;
	case ANAME:
	{	Pname n = (Pname)this;
		int argno = n->n_val;
		Pin il;
		for (il=curr_icall; il; il=il->i_next)
			if (il->i_table == n->n_table) goto aok;
		goto bok;
	aok:
		if (il->local[argno]) {
	bok:
			Neval = "inlineF call too complicated for constant expression";
			return 1;
		}
		Pexpr aa = il->arg[argno];
		return aa->eval();
	}
	case CAST:
	{	int i = e1->eval();
		/*
			ignore cast and rely on error message from evaluation.
			this will allow redundant casts only.
			In, particular: case (int)0:
		*/
		// Neval = "cast in constant expression";
		return i;
	}
	case UMINUS:
	case UPLUS:
	case NOT:
	case COMPL:
	case PLUS:
	case MINUS:
	case MUL:
	case LS:
	case RS:
	case NE:
	case LT:
	case LE:
	case GT:
	case GE:
	case AND:
	case OR:
	case ER:
	case DIV:
	case MOD:
	case QUEST:
	case EQ:
	case ANDAND:
	case OROR:
		break;
	default:
		Neval = "bad operator in constant expression";
		return 1;
	}

	int i1 = (e1) ? e1->eval() : 0;
	int i2 = (e2) ? e2->eval() : 0;

	switch (base) {
	case UMINUS:	return -i2;
	case UPLUS:	return i2;
	case NOT:	return !i2;
	case COMPL:	return ~i2;
	case CAST:	return i1;
	case PLUS:	return i1+i2;
	case MINUS:	return i1-i2;
	case MUL:	return i1*i2;
	case LS:	return i1<<i2;
	case RS:	return i1>>i2;
	case NE:	return i1!=i2;
	case EQ:	return i1==i2;
	case LT:	return i1<i2;
	case LE:	return i1<=i2;
	case GT:	return i1>i2;
	case GE:	return i1>=i2;
	case AND:	return i1&i2;
	case OR:	return i1|i2;
	case OROR:	return i1||i2;
	case ER:	return i1^i2;
	case MOD:	return (i2==0) ? 1 : i1%i2;
	case QUEST:	return (cond->eval()) ? i1 : i2;
	case DIV:	if (i2==0) {
				Neval = "divide by zero";
				error('w',"divide by zero");
				return 1;
			}
			return i1/i2;
	}
}

bit classdef.has_friend(Pname f)
/*
	does this class have function "f" as its friend?
*/
{
	Plist l;
	Ptable ctbl = f->n_table;
/*fprintf(stderr,"(%d %s)->has_friend(%d %s)\n",this,string,f,(f)?f->string:""); fflush(stderr);*/
	for (l=friend_list; l; l=l->l) {
		Pname fr = l->f;
/*fprintf(stderr,"fr %d %d %d\n",fr,fr->tp,fr->tp->base); fflush(stderr);*/
		switch (fr->tp->base) {
		case CLASS:
			if (Pclass(fr->tp)->memtbl == ctbl) return 1;
			break;
		case COBJ:
			if (Pbase(fr->tp)->b_table == ctbl) return 1;
			break;
		case FCT:
			if (fr == f) return 1;
			break;
		case OVERLOAD:
		{/*	Pgen g = (Pgen)fr->tp;
			Plist ll;
			for (ll=g->fct_list; ll; ll=ll->l) {
				if (ll->f == f) return 1;
			}*/
			l->f = fr = ((Pgen)fr->tp)->fct_list->f; /* first fct */
			if (fr == f) return 1;
			break;
		}
		default:
			error('i',"bad friend %k",fr->tp->base);
		}
	}
	return 0;
}
