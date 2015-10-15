/* @(#) expr.c 1.6 1/27/86 17:48:51 */ 
/*ident	"@(#)cfront:src/expr.c	1.6" */
/***************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


expr.c:

	type check expressions

************************************************************************/

#include "cfront.h"
#include "size.h"

int const_save;

Pexpr expr.address()
{
	if (base==DEREF && e2==0) return e1;	/* &* */
	if (base == CM) {
		e2 = e2->address();
		return this;
	}
	register Pexpr ee = new expr(G_ADDROF,0,this);
	ee->tp = new ptr(PTR,tp,0);
	if (base == NAME) Pname(this)->take_addr();
	return ee;
}

Pexpr expr.contents()
{
	if (base==ADDROF || base==G_ADDROF) return e2;		/* *& */
	register Pexpr ee = new expr(DEREF,this,0);
	if (tp) ee->tp = Pptr(tp)->typ;		/* tp==0 ??? */
	return ee;
}

Pexpr table.find_name(register Pname n, bit f, Pexpr/* args*/)
/*
	find the true name for "n", implicitly define if undefined
	if "n" was called f==1 and "args" were its argument list
	if n was qualified r->n or o.n  f==2
*/
{
	Pname q = n->n_qualifier;
	register Pname qn = 0;
	register Pname nn;
	Pclass cl;	/* class specified by q */

	if (n->n_table) {
		nn = n;
		n = 0;
		goto xx;
	}

	if (q) {
		Ptable tbl;
//error('d',"qq %n %n",q,n);
		if (q == sta_name)
			tbl = gtbl;
		else {
			Ptype t = Pclass(q->tp);
			if (t == 0) error('i',"Qr%n'sT missing",q);

			if (q->base == TNAME) {
				if (t->base != COBJ) {
					error("badT%k forQr%n",t->base,q);
					goto nq;
				}
				t = Pbase(t)->b_name->tp;
			}
			if (t->base != CLASS) {
				error("badQr%n(%k)",q,t->base);
				goto nq;
			}
			cl = Pclass(t);
			tbl = cl->memtbl;
		}

		qn = tbl->look(n->string,0);
//error('d',"qn == %d",qn);
		if (qn == 0) {
			n->n_qualifier = 0;
			nn = 0;
			goto def;
		}

		if (q == sta_name) {	/* explicitly global */
			qn->use();
			delete n;
			return qn;
		}
		/* else check visibility */
	}

nq:
	if (cc->tot) {
	{	for (Ptable tbl = this;;) {	// loop necessary to get past
						// local re-definitions
			nn = tbl->lookc(n->string,0);
//error('d',"cc->tot:%n nn=%n sto%k sco%k tbl=%d",n,nn,nn->n_stclass,nn->n_scope,tbl);
			if (nn == 0) goto qq;	/* try for friend */

			switch (nn->n_scope) {
			case 0:
			case PUBLIC:
				if (nn->n_stclass == ENUM) break;

				if (nn->tp->base == OVERLOAD) break;

				if (Ebase
				&& cc->cot->clbase
				&& Ebase!=cc->cot->clbase->tp
				&& !Ebase->has_friend(cc->nof))
					error("%n is from a privateBC",n);

				if (Epriv
				&& Epriv!=cc->cot
				&& !Epriv->has_friend(cc->nof))
					error("%n is private",n);
			}

			if (qn==0 || qn==nn) break;

			if ((tbl=tbl->next) == 0) {	/* qn/cl test necessary? */
				if (/* (qn->n_stclass==STATIC
					|| qn->tp->base==FCT
					|| qn->tp->base==OVERLOAD)
				&&  */ (	qn->n_scope==PUBLIC
					|| cl->has_friend(cc->nof)) ) {
					/*qn->use();
					delete n;
					return qn;
					*/
					nn = qn;
					break;
				}
				else {
					error("QdN%n not in scope",n);
					goto def;
				}
			}
		}
	}
	xx:
//error('d',"xx: nn=%n qn=%n n=%n f=%d",nn,qn,n,f);
		if (nn == 0) goto def;
		nn->use();
		if (f == 2) {
			if (qn && nn->n_stclass==0)
				switch (nn->n_scope) {
				case 0:
				case PUBLIC:	/* suppress virtual */
					switch (qn->tp->base) {
					case FCT:
					case OVERLOAD:
						*n = *qn;
						n->n_qualifier = q;
						return n;
					}
				}
			if (nn->n_table == gtbl) error("MF%n not found",n);
			if (n) delete n;
			return nn;
		}

		switch (nn->n_scope) {
		case 0:
		case PUBLIC:
//error('d',"st %d th %d",nn->n_stclass,cc->c_this);
			if (nn->n_stclass == 0) {
				if (qn)	{	/* suppress virtual */
					switch (qn->tp->base) {
					case FCT:
					case OVERLOAD:
						*n = *qn;
						n->n_qualifier = q;
						/*return n; */
						nn = n;
						n = 0;
					}
				}

				if (cc->c_this == 0) {
					switch (nn->n_oper) {
					case CTOR:
					case DTOR:
						break;
					default:
						/* in static member initializer */
						error("%n cannot be used here",nn);
						return nn;
					}
				}

				Pref r = new ref(REF,cc->c_this,nn);
				cc->c_this->use();
				r->tp = nn->tp;
				if (n) delete n;
				return r;
			}
		default:
			if (n) delete n;
			return nn;
		}
	}
qq:
//error('d',"qq: n%n qn%d",n,qn);
	if (qn) {
		// check for p->base::mem :
			// nasty where derived::mem is public
			// and base::mem is private
		// NOT DONE

	/* static member? */
		if (qn->n_scope==0  && !cl->has_friend(cc->nof) ) {
			error("%n is private",qn);
			if (n) delete n;
			return qn;
		}

		switch (qn->n_stclass) {
		case STATIC:
			break;
		default:
			switch (qn->tp->base) {
			case FCT:
			case OVERLOAD:	/* suppress virtual */
				if (f == 1) error("O missing for%n",qn);
				*n = *qn;
				n->n_qualifier = q;
				return n;
			default:
				if (f != 2) error("O missing for%n",qn);
			}
		}

		if (n) delete n;
		return qn;
	}

	if ( nn = lookc(n->string,0) ) {
		switch (nn->n_scope) {
		case 0:
		case PUBLIC:
			if (nn->n_stclass == ENUM) break;

			if (nn->tp->base == OVERLOAD) break;
			if (Ebase && !Ebase->has_friend(cc->nof) )
				error("%n is from privateBC",n);

			if (Epriv && !Epriv->has_friend(cc->nof) )
				error("%n is private",n);
		}
	}

	if (nn) {
//error('d',"found %n",nn);
		if (f==2 && nn->n_table==gtbl) error("MF%n not found",n);
		nn->use();
		if (n) delete n;
		return nn;
	}

def:	/* implicit declaration */
//error('d',"implicit f %d",f);
	n->n_qualifier = 0;
	if (f == 1) {	/* function */
		if (n->tp) error('i',"find_name(fct_type?)");
		n->tp = new fct(defa_type,0,0);
		n->n_sto = EXTERN;
	/*	if (fct_void) {
			n->tp = new fct(defa_type,0,0);
		}
		else {
			Pexpr e;
			Pname at = 0;
			Pname att;
			
			for (e=args; e; e=e->e2) {
				Pname ar = new name;
				if (e->base != ELIST) error('i',"badA %k",e->base);
				e->e1 = e->e1->typ(this);
				ar->tp = e->e1->base==STRING ? Pchar_type : e->e1->tp;
				switch (ar->tp->base) {
				case ZTYPE:
					ar->tp = defa_type;
					break;
				case FIELD:
					ar->tp = int_type;
					break;
				case ANY:
				default:
					PERM(ar->tp);
				}
				if (at)
					att->n_list = ar;
				else
					at = ar;
				att = ar;
			}
			n->tp = new fct(defa_type,at,1);

		}
	*/
	}
	else {
		n->tp = any_type;
		if (this != any_tbl)
			if (cc->not
			&&  (cc->cot->defined&(DEFINED|SIMPLIFIED)) == 0)
				error("C%n isU",cc->not);
			else
				error("%n isU",n);
	}

	nn = n->dcl(gtbl,EXTERN);
	nn->n_list = 0;
	nn->use();
	nn->use();	/* twice to cope with "undef = 1;" */
	if (n) delete n;

	if (f==1)
		if (fct_void) {
			if  (no_of_undcl++ == 0) undcl = nn;
		}
		else
			error('w',"undeclaredF%n called",nn);

	return nn;
}

Pexpr expr.typ(Ptable tbl)
/*
	find the type of "this" and place it in tp;
	return the typechecked version of the expression:
	"tbl" provides the scope for the names in "this"
*/
{
if (this == 0) error('i',"0->expr.typ");
	Pname n;
	Ptype t = 0;
	Ptype t1, t2;
	TOK b = base;
	TOK r1, r2;

#define nppromote(b)	t=np_promote(b,r1,r2,t1,t2,1)
#define npcheck(b)	(void)np_promote(b,r1,r2,t1,t2,0)
	if (tbl->base != TABLE) error('i',"expr.typ(%d)",tbl->base);
//if (b == NAME) error('d',"name %d %d %s",this,string,string?string:"?");
	if (tp) {
/*error('d',"expr.typ %d (checked) tbl=%d",this,tbl);*/
		if (b == NAME) Pname(this)->use();
		return this;
	}
//error('d',"expr.typ %d%k e1 %d%k e2 %d%k tbl %d\n",this,base,e1,e1?e1->base:0,e2,e2?e2->base:0,tbl);
	switch (b) {		/* is it a basic type */
	case DUMMY:
		error("emptyE");
		tp = any_type;
		return this;
	case ZERO:
		tp = zero_type;
		return this;
	case IVAL:
		tp = int_type;
		return this;
	case FVAL:
		tp = float_type;
		return this;
	case ICON:
		/*	is it long?
			explicit long?
			decimal larger than largest signed int
			octal or hexadecimal larger than largest unsigned int
		 */
	{	int ll = strlen(string);
		switch (string[ll-1]) {
		case 'l':
		case 'L':
		lng:
			tp = long_type;
			goto save;
		}

		if  (string[0] == '0') {	/* assume 8 bits in byte */
			switch (string[1]) {
			case 'x':
			case 'X':
				if (SZ_INT+SZ_INT < ll-2) goto lng;
				goto nrm;
			default:
				if (BI_IN_BYTE*SZ_INT < (ll-1)*3) goto lng;
				goto nrm;
			}
		}
		else {
			if (ll</*sizeof(LARGEST_INT)-1*/10) {
		nrm:
				tp = int_type;
				goto save;
			}
			if (ll>10) goto lng;
			char* p = string;
			char* q = LARGEST_INT;
			do if (*p++>*q++) goto lng; while (*p);
		}

		goto nrm;
	}
	case CCON:
		tp = char_type;
		goto save;
	case FCON:
		tp = double_type;
		goto save;
	case STRING:			// type of "as\tdf" is char[6]
					// c_strlen counts the terminating '\0'
	{	int ll = c_strlen(string);
		Pvec v = new vec(char_type,0);
		v->size = ll;
		tp = v;
		goto save;
	}
	save:
/*error('d',"%s const_save %d",string,const_save);*/
		if (const_save) {
			int ll = c_strlen(string);
			char* p = new char[ll];
			strcpy(p,string);
			string = p;
		}
		return this;

	case THIS:
		delete this;
		if (cc->tot) {
			cc->c_this->use();
			return cc->c_this;
		}
		error("this used in nonC context");
		n = new name("this");
		n->tp = any_type;
		return tbl->insert(n,0); 

	case NAME:
/*error('d',"name %s",string);*/
	{	Pexpr ee = tbl->find_name((Pname)this,0,0);
		if (ee->tp->base == RPTR) return ee->contents();
		return ee;
	}
	case SIZEOF:
		t = tp2;
		if (t) {
			t->dcl(tbl);
			if (e1 && e1!=dummy) {
				e1 = e1->typ(tbl);
				DEL(e1);
				e1 = dummy;
			}
		}
		else {
			e1 = e1->typ(tbl);
			tp2 = e1->tp;
		}
		tp = int_type;
		return this;

	case CAST:
	{	
		Ptype tt = t = tp2;
		tt->dcl(tbl);
	zaq:				/* is the cast legal? */
//error('d',"tt %d %d",tt,tt?tt->base:0);
		switch (tt->base) {
		case TYPE:
			tt = Pbase(tt)->b_name->tp;	goto zaq;
		case RPTR:	// necessary?
		case PTR:
			if (Pptr(tt)->rdo) error("*const in cast");
			tt = Pptr(tt)->typ;
			goto zaq;
		case VEC:
			tt = Pvec(tt)->typ;
			goto zaq;
		case FCT:
			tt = Pfct(tt)->returns;
			goto zaq;
		default:	
			if (Pbase(tt)->b_const) error("const in cast");
		}

		/* now check cast against value, INCOMPLETE */

//error('d',"cast e1 %d %k",e1,e1->base);
		tt = t;

		if (e1 == dummy) {
			error("expression missing for cast");
			tp = any_type;
			return this;
		}
		e1 = e1->typ(tbl);
		Ptype etp = e1->tp;
		while (etp->base == TYPE) etp = Pbase(etp)->b_name->tp;
		
		if (etp->base == COBJ) {
			int i = can_coerce(tt,etp);
//error('d',"cast%t->%t -- %d%n",tt,etp,i,Ncoerce);
			if (i==1 && Ncoerce) {
				Pname cn = Pbase(etp)->b_name;
				Pclass cl = Pclass(cn->tp);
				Pref r = new ref(DOT,e1,Ncoerce);
				Pexpr rr = r->typ(tbl);
				Pexpr c = new expr(G_CALL,rr,0);
				c->fct_name = Ncoerce;
				c->tp = tt;
				*this = *Pexpr(c);
				delete c;	
				return this;
			}
		}

		switch (etp->base) {
		case VOID:
			if (tt->base == VOID) {
				tp = t;
				return this;
			}
			error("cast of void value");
		case ANY:
			tp = any_type;
			return this;
		}

	legloop:
		switch (tt->base) {
		case TYPE:	
			tt = Pbase(tt)->b_name->tp; goto legloop;
		case VOID:
			switch (etp->base) {
			case COBJ:
				switch (e1->base) {
				case VALUE:
				case CALL:
				case G_CALL:
				{	Pname cln = etp->is_cl_obj();
					Pclass cl = (Pclass)cln->tp;
					if (cl->has_dtor()) error('s',"cannot castCO to void");
				}
				}
				break;
			} 
			break;
		case PTR:
			switch (etp->base) {
			case COBJ:
				error("cannot castCO toP");
				break;
			}
			break;

		case RPTR:		// (x&)e: pretend e is an x
			if ((e1->base==CALL || e1->base==G_CALL || e1->lval(0))
			&& Pptr(tt)->typ->tsizeof()<=etp->tsizeof()) {
//error('d',"%t(%t)",t,etp);
				e1 = e1->address();	// *(x*)&e
				tp = t;
				return contents();
			}
			else	
				error(0,"cannot cast%t to%t",etp,t);
			break;

		case COBJ:
//error('d',"%n ctor %d",cn,ctor);
			base = VALUE;	// (x)e => x(e): construct an x from e
			e1 = new expr(ELIST,e1,0);
			return typ(tbl);

		case CHAR:
		case INT:
		case SHORT:
		case LONG:
		case FLOAT:
		case DOUBLE:
			switch (etp->base) {
			case COBJ:
				error("cannot castCO to%k",tt->base);
				break;
			}	
			break;
		
		}
		tp = t;
		return this;
	}

	case VALUE:
	{	Ptype tt = tp2;
		Pclass cl;
		Pname cn;
//error('d',"value %d %d (%d %k)",tt,tt?tt->base:0,e1,e1?e1->base:0);
		
		tt->dcl(tbl);
	vv:
//error('d',"vv %d %d",tt,tt?tt->base:0);
		switch (tt->base) {
		case TYPE:
			tt = Pbase(tt)->b_name->tp;
			goto vv;
		case EOBJ:
		default:
			if (e1 == 0) {
				error("value missing in conversion to%t",tt);
				tp = any_type;
				return this;
			}
			base = CAST;
			e1 = e1->e1;	// strip ELIST
			return typ(tbl);
		case CLASS:
			cl = (Pclass)tt;
			goto nn;
		case COBJ:
			cn = Pbase(tt)->b_name;
			cl = Pclass(cn->tp);
		nn:
			if (e1 && e1->e2==0) {		/* single argument */
				e1->e1 = e1->e1->typ(tbl);
				Pname acn=e1->e1->tp->is_cl_obj();
//error('d',"acn%n itor%d",acn,acn?cl->itor:0);
				if (acn
				&& acn->tp==cl
				&& cl->has_itor()==0) {
					if (e2) {	// x(x_obj) => e2=x_obj
						base = ASSIGN;
						Pexpr ee = e1->e1;
						e1 = e2;
						e2 = ee;
						tp = tp2;
						return this;
					}
					else		// x(x_obj) => x_obj
						return e1->e1;
				}
			}

		{	/* x(a) => obj.ctor(a); where e1==obj */
			Pexpr ee;
			Pexpr a = e1;
			Pname ctor = cl->has_ctor();
			if (ctor == 0) {
				error("cannot make a%n",cn);
				base = SM;
				e1 = dummy;
				e2 = 0;
				return this;
			}
//error('d',"value %n.%n",e2,ctor);
			int tv = 0;
			if (e2 == 0) {	/*  x(a) => x temp; (temp.x(a),temp) */
				Ptable otbl = tbl;
				if (Cstmt) { /*	make Cstmt into a block */
					if (Cstmt->memtbl == 0) Cstmt->memtbl = new table(4,tbl,0);
					tbl = Cstmt->memtbl;
				}
				char* s = make_name('V');
//error('d',"%s: %d %d",s,otbl,tbl);
				Pname n = new name(s);
				n->tp = tp2;
				n = n->dcl(tbl,ARG); /* no init! */
				n->n_scope = FCT;
				n->assign();
				e2 = n;
				ee = new expr(CM,this,n);
				tbl = otbl;
				tv = 1;
			}
			else
				ee = this;

			base = G_CALL;
			e1 = new ref(DOT,e2,ctor);
			e2 = a;
			ee = ee->typ(tbl);
//error('d',"ee %t",ee->tp);
			if (tv == 0) {	// deref value returned by constructor
				ee = new expr(DEREF,ee,0);
				ee->tp = ee->e1->tp;
			}
			return ee;
		}
		}
	}

	case NEW:
	{	Ptype tt = tp2;
		Ptype tx = tt;
		bit v = 0;
		bit old = new_type;
		new_type = 1;
/*error('d',"new%t e1 %d %d",tt,e1,e1?e1->base:0);*/
		tt->dcl(tbl);
		new_type = old;
		if (e1) e1 = e1->typ(tbl);
	ll:
//error('d',"tt %d %d",tt,tt?tt->base:0);
		switch (tt->base) {
		default:
			if (e1) {
				error("Ir for nonCO created using \"new\"");
				e1 = 0;
			}
			break;
		case VEC:
			v = 1;
			tt = Pvec(tt)->typ;
			goto ll;
		case TYPE:
			tt = Pbase(tt)->b_name->tp;
			goto ll;
		case COBJ:
		{	Pname cn = Pbase(tt)->b_name;
			Pclass cl = (Pclass)cn->tp;
			
			if ((cl->defined&(DEFINED|SIMPLIFIED)) == 0) {
				error("new%n;%n isU",cn,cn);
			}
			else {
				Pname ctor = cl->has_ctor();
				TOK su;
				if (ctor) {
/*error('d',"cobj%n tp%t",ctor,ctor->tp);*/
					if (v) {
						Pname ic;
						if (e1)
							error('s',"Ir forvector ofCO created using \"new\"");
						else if ((ic = cl->has_ictor())==0)
							error("vector ofC%n that do not have a constructor taking noAs",cn);
						else if (Pfct(ic->tp)->nargs)
							error('s',"defaultAs for constructor for vector ofC%n",cn);
					}
					e1 = new call(ctor,e1);
					e1 = e1->typ(tbl);
					/*(void) e1->fct_call(tbl);*/
				}
				else if (su=cl->is_simple()) { 
/*error('d',"simple cobj%k",su);*/
					if (e1) error("new%n withIr",cn);
				}
				else {
/*error('d',"not simple and no constructor?");*/
				}
			}
		}
		}
//error('d',"v==%d",v);
		tp = (v) ? (Ptype)tx : (Ptype)new ptr(PTR,tx,0);
		return this;
	}

	case DELETE:	// delete e1 OR delete[e2] e1
	{	int i;
		if (e1->base == ADDROF) error('w',"delete &E");
		e1 = e1->typ(tbl);
		i = e1->tp->num_ptr(DELETE);
		if (i != P) error("nonP deleted");
		if (e2) {
			e2 = e2->typ(tbl);
			e2->tp->integral(DELETE);
		}
		tp = void_type;
		return this;
	}
	}


	if (e1==0 && e2==0) error('i',"no operands for%k",b);

	switch(b) {
	case ILIST:	/* an ILIST is pointer to an ELIST */
		e1 = e1->typ(tbl);
		tp = any_type;
		return this;

	case ELIST:
		{	Pexpr e;
			Pexpr ex;

			if (e1 == dummy && e2==0) {
				error("emptyIrL");
				tp = any_type;
				return this;
			}
				
			for (e=this; e; e=ex) {
				Pexpr ee = e->e1;
/*error('d',"e %d %d ee %d %d",e,e?e->base:0,ee,ee?ee->base:0);*/
				if (e->base != ELIST) error('i',"elist%k",e->base);
				if (ex = e->e2) {	/* look ahead for end of list */
					if (ee == dummy) error("EX in EL");
					if (ex->e1 == dummy && ex->e2 == 0) {
						/* { ... , } */
						DEL(ex);
						e->e2 = ex = 0;
					}
				}
				e->e1 = ee->typ(tbl);
				t = e->e1->tp;
				
			}
			tp = t;
			return this;
		}

	case DOT:
	case REF:
	{
		Pbase b;
		Ptable atbl;
		Pname nn;
		char* s;
		Pclass cl;

		e1 = e1->typ(tbl);
		t = e1->tp;

		if (base == REF) {
		xxx:
//error('d',"xxx %t",t);
			switch (t->base) {
			case TYPE:	t = Pbase(t)->b_name->tp;	goto xxx;
			default:	error("nonP ->%n",mem);
			case ANY:	atbl = any_tbl;			goto mm;
			case PTR:
			case VEC:	b = Pbase(Pptr(t)->typ);	break;
			}
		}
		else {
		qqq:
			switch (t->base) {
			case TYPE:	t = Pbase(t)->b_name->tp;	goto qqq;
			default:	error("nonO .%n",mem);
			case ANY:	atbl = any_tbl;			goto mm;
			case COBJ:	break;
			}
//error('d',"dot e1 %k %d",e1->base,e1->base);
			switch (e1->base) {	/* FUDGE, but cannot use lval (consts) */
			case CM:
				/* ( ... , x). => ( ... , &x)-> */
			{	Pexpr ex = e1;
			cfr:	switch (ex->e2->base) {
				case NAME:
					base = REF;
					ex->e2 = ex->e2->address();
					goto xde;
				case CM:
					ex = ex->e2;
					goto cfr;
				}
			}
			case CALL:
			case G_CALL:
//error('d',"call%d, %n %d %d",e1->fct_name,e1->fct_name,Pfct(e1->fct_name->tp)->f_inline,Pfct(e1->fct_name->tp)->f_virtual);
#ifdef BSD
				if (e1->fct_name
				&& Pfct(e1->fct_name->tp)->f_inline
				&& Pfct(e1->fct_name->tp)->f_virtual==0) break;
#else
			//	if (e1->fct_name==0
			//	|| Pfct(e1->fct_name->tp)->f_inline==0)
#endif
			{
					/* f(). => (tmp=f(),&tmp)-> */
					Ptable otbl = tbl;
					if (Cstmt) { /*	make Cstmt into a block */
						if (Cstmt->memtbl == 0) Cstmt->memtbl = new table(4,tbl,0);
						tbl = Cstmt->memtbl;
					}
					char* s = make_name('T');
					Pname tmp = new name(s);
					tmp->tp = e1->tp;
					tmp = tmp->dcl(tbl,ARG); /* no init! */
					tmp->n_scope = FCT;
					e1 = new expr(ASSIGN,tmp,e1);
					e1->tp = tmp->tp;
					Pexpr aa = tmp->address();
					e1 = new expr(CM,e1,aa);
					e1->tp = aa->tp;
					base = REF;
					tbl = otbl;
				}
				break;
		//	case QUEST:
		//		error("non-lvalue .%n",mem);
		//		break;
		//	case NAME:
		//		Pname(e1)->take_addr();
		//		Pname(e1)->use();
			}
		xde:
			b = Pbase(t);
		}

	xxxx:
		switch (b->base) {
		case TYPE:	b = (Pbase) b->b_name->tp;	goto xxxx;
		default:	error("(%t) before %k%n (%n not aM)",e1->tp,base,mem,mem);
		case ANY:	atbl = any_tbl;			goto mm;

		case COBJ:
			if (atbl = b->b_table) goto mm;
			s = b->b_name->string;	/* lookup the class name */
			if (s == 0) error('i',"%kN missing",CLASS);
//error('d',"lookup %s",s);
			nn = tbl->look(s,CLASS);
			if (nn == 0) error('i',"%k %sU",CLASS,s);
			if (nn != b->b_name) b->b_name = nn;
			cl = (Pclass) nn->tp;
			PERM(cl);
			if (cl == 0) error('i',"%k %s'sT missing",CLASS,s);
			b->b_table = atbl = cl->memtbl;
		mm:
			if (atbl->base != TABLE) error('i',"atbl(%d)",atbl->base);
			nn = (Pname)atbl->find_name(mem,2,0);
//error('d',"nn%n %d %d",nn,nn->n_stclass,nn->n_scope);
			switch (nn->n_stclass) {
			case 0:
				mem = nn;	
				tp = nn->tp;
				return this;
			case STATIC:
				return nn;
			}
		}
	}

	case CALL:	/* handle undefined function names */
		if (e1->base==NAME && e1->tp==0) {
//error('d',"call %d %s",e1,e1->string);
			e1 = tbl->find_name(Pname(e1),1,e2);
		}
		break;
	case QUEST:
		cond = cond->typ(tbl);
	}

	if (e1) {
		e1 = e1->typ(tbl);
		if (e1->tp->base == RPTR) e1 = e1->contents();
		t1 = e1->tp;
	}
	else
		t1 = 0;

	if (e2) {
		e2 = e2->typ(tbl);
		if (e2->tp->base == RPTR) e2 = e2->contents();
		t2 = e2->tp;
	}
	else 
		t2 = 0;

	TOK bb;
	switch (b) {			/* filter non-overloadable operators out */
	default:	bb = b; break;
	case DEREF:	bb = (e2) ? DEREF : MUL; break;
	case CM:
	case QUEST:
	case G_ADDROF:
	case G_CALL:	goto not_overloaded;
	}

	Pname n1;
	if (e1) {
		Ptype tx = t1;
		while (tx->base == TYPE) tx = Pbase(tx)->b_name->tp;
		n1 = tx->is_cl_obj();
	}
	else
		n1 = 0;

	Pname n2;
	if (e2) {
		Ptype tx = t2;
		while (tx->base == TYPE) tx = Pbase(tx)->b_name->tp;
		n2 = tx->is_cl_obj();
	}
	else
		n2 = 0;
//error('d',"overload %k: %s %s\n", bb, n1?n1->string:"1", n2?n2->string:"2");
	if (n1==0 && n2==0) goto not_overloaded;
{
	/* first try for non-member function:	op(e1,e2) or op(e2) or op(e1) */
	Pexpr oe2 = e2;
	Pexpr ee2 = (e2 && e2->base!=ELIST) ? e2 = new expr(ELIST,e2,0) : 0;
	Pexpr ee1 = (e1) ? new expr(ELIST,e1,e2) : ee2;
	char* obb = oper_name(bb);
	Pname gname = gtbl->look(obb,0);
	int go = gname ? over_call(gname,ee1) : 0;
	int nc = Nover_coerce;	// first look at member functions						// then if necessary check for ambiguities
	if (go) gname = Nover;
//error('d',"global%n go=%d nc=%d",gname,go,nc);

	if (n1) {				/* look for member of n1 */	
		Ptable ctbl = Pclass(n1->tp)->memtbl;
		Pname mname = ctbl->look(obb,0);
		if (mname == 0) goto glob;
		switch (mname->n_scope) {
		default:	goto glob;
		case 0:
		case PUBLIC:	break;		/* try e1.op(?) */
		}

		int mo = over_call(mname,e2);
//error('d',"n1%n %d",mname,mo);
		switch (mo) {
		case 0:	
			if (go == 2) goto glob;
			if (1 < Nover_coerce) goto am1;
			goto glob;
		case 1:	if (go == 2) goto glob;
			if (go == 1) {
			am1:
				error("ambiguous operandTs%n%t for%k",n1,t2,b);
				tp = any_type;
				return this;
			}
			else {
				Pclass cl = (Pclass)n1->tp;
				if (cl->conv) error('w',"overloaded%k may be ambiguous",bb);
			}
			break;
		case 2:
			if (go == 2) error("%k defined both as%n and%n",bb,gname,Nover);
		}
//error('d',"%k mtbl %d ctbl %d",bb,mname->n_table,ctbl);
		if (bb==ASSIGN && mname->n_table!=ctbl) {	/* inherited = */
			//if (n1->tsizeof()!=mname->?)
			error("assignment not defined for class%n",n1);
			tp = any_type;
			return this;
		}
//error('d',"Nover %n %k",Nover,Nover->tp->base);
		base = G_CALL;			/* e1.op(e2) or e1.op() */
		e1 = new ref(DOT,e1,Nover);
		if (ee1) delete ee1;
		return typ(tbl);
	}
	
	if (n2 && e1==0) {			/* look for unary operator */
		Ptable ctbl = Pclass(n2->tp)->memtbl;
		Pname mname = ctbl->look(obb,0);
		if (mname == 0) goto glob;
		switch (mname->n_scope) {
		default:	goto glob;
		case 0:
		case PUBLIC:	break;		/* try e2.op() */
		}
		
		int mo = over_call(mname,0);
/*error('d',"n2%n %d",mname,mo);*/
		switch (mo) {
		case 0:		
			if (1 < Nover_coerce) goto am2;
			goto glob;
		case 1:	if (go == 2) goto glob;
			if (go == 1) {
			am2:
				error("ambiguous operandT%n for%k",n2,b);
				tp = any_type;
				return this;
			}
			break;
		case 2:
			if (go == 2) error("%k defined both as%n and%n",bb,gname,Nover);
		}

		base = G_CALL;			/* e2.op() */
		e1 = new ref(DOT,oe2,Nover);
		e2 = 0;
		if (ee2) delete ee2;
		if (ee1 && ee1!=ee2) delete ee1;
		return typ(tbl);
		
	}
	
glob:
//error('d',"glob %d",nc);
	if (1 < nc) {
		error("ambiguous operandTs%t%t for%k",t1,t2,b);
		tp = any_type;
		return this;
	}
	if (go) {
		if (go == 1) {	/* conversion necessary => binary */
			if (n1) {
				Pclass cl = (Pclass)n1->tp;
				if (cl->conv) error('w',"overloaded%k may be ambiguous",bb);
//error('d',"go n1");
			}
			else if (n2) {
				Pclass cl = (Pclass)n2->tp;
				if (cl->conv) error('w',"overloaded%k may be ambiguous",bb);
//error('d',"bb%k go n2 %n",bb,gname);
			}
		}
		base = G_CALL;			/* op(e1,e2) or op(e1) or op(e2) */
		e1 = gname;
		e2 = ee1;
		return typ(tbl);
	}

	if (ee2) delete ee2;
	if (ee1 && ee1!=ee2) delete ee1;
	e2 = oe2;
//error('d',"bb%k",bb);
	switch(bb) {
	case ASSIGN:
	case ADDROF:
		break;
	case CALL:
	case DEREF:
		if (n1 == 0) break;
	default:	/* look for conversions to basic types */
	{	int found = 0;
		if (n1) {
			int val = 0;
			Pclass cl = (Pclass)n1->tp;
			for ( Pname on = cl->conv; on; on=on->n_list) {
//error('d',"oper_coerce n1%n %t",on,(on)?Pfct(on->tp)->returns:0);
				Pfct f = (Pfct)on->tp;
				if (bb==ANDAND || bb==OROR) {
					e1 = check_cond(e1,bb,tbl);
					goto not_overloaded;
				}
				if (n2 
				|| (t2 && f->returns->check(t2,ASSIGN)==0)
				|| (t2 && t2->check(f->returns,ASSIGN)==0)) {
					Ncoerce = on;
					val++;
				}
			}
			switch (val) {
			case 0:
				break;
			case 1:
			{	Pref r = new ref(DOT,e1,Ncoerce);
				Pexpr rr = e1->typ(tbl);
				e1 = new expr(G_CALL,rr,0);
				found = 1;
				break;
			}
			default:
				error('s',"ambiguous coercion of%n to basicT",n1);
			}
		}
		if (n2) {
			int val = 0;
			Pclass cl = (Pclass)n2->tp;
			for ( Pname on = cl->conv; on; on=on->n_list) {
//error('d',"oper_coerce n2%n %t",on,(on)?on->tp:0);
				Pfct f = (Pfct)on->tp;
				if (bb==ANDAND || bb==OROR || bb==NOT) {
					e2 = check_cond(e2,bb,tbl);
					goto not_overloaded;
				}
				if (n1 
				|| (t1 && f->returns->check(t1,ASSIGN)==0)
				|| (t1 && t1->check(f->returns,ASSIGN)==0)) {
					Ncoerce = on;
					val++;
				}
			}
			switch (val) {
			case 0:
				break;
			case 1:
			{	Pref r = new ref(DOT,e2,Ncoerce);
				Pexpr rr = r->typ(tbl);
				e2 = new expr(G_CALL,rr,0);
				found++;
				break;
			}
			default:
				error('s',"ambiguous coercion of%n to basicT",n2);
			}
		}
		if (found) {
		/*	if (found == 2) error('w',"coercions of operands of%k may be ambiguous",b);*/
			return typ(tbl);
		}
		if (t1 && t2)
			error("bad operandTs%t%t for%k",t1,t2,b);
		else
			error("bad operandT%t for%k",t1?t1:t2,b);
		tp = any_type;
		return this;
	}
	}
}
not_overloaded:
	t = (t1==0) ? t2 : (t2==0) ? t1 : 0;
/*fprintf(stderr,"%s: e1 %d %d e2 %d %d\n",oper_name(b),e1,e1?e1->base:0,e2,e2?e2->base:0);*/
	switch (b) {		/* are the operands of legal types */
	case G_CALL:
	case CALL:
		tp = fct_call(tbl);	/* two calls of use() for e1's names */
		if (tp->base == RPTR) return contents();
		return this;

	case DEREF:
//error('d',"deref %t",t?t:t1);
		if (e1 == dummy) error("O missing before []\n");
		if (t) {	/*	*t	*/
			t->vec_type();
			tp = t->deref();
		}
		else {					// e1[e2] that is *(e1+e2)
			if (t1->vec_type()) {		// e1[e2]
				t2->integral(b);
				tp = t1->deref();
			}
			else if (t2->vec_type()) {	// really e2[e1]
				t1->integral(b);
				tp = t2->deref();
			}
			else {
				error("[] applied to nonPT:%t[%t]",t1,t2);
				tp = any_type;
			}
		}
		if (tp->base == RPTR) return contents();
		return this;

	case G_ADDROF:
	case ADDROF:	
		if (e2->lval(b) == 0) {
			tp = any_type;
			return this;
		}
		tp = t->addrof();
			/* look for &p->member_function */
		switch (e2->base) {
		case DOT:
		case REF:
		{	Pname m = e2->mem;
			Pfct f = (Pfct)m->tp;
			if (f->base==FCT && (f->f_virtual==0 || m->n_qualifier)) {
				DEL(e2);
				e2 = m;
			}
		}
		}
		return this;

	case UMINUS:
		t->numeric(b);
		tp = t;
		return this;
	case UPLUS:
		t->num_ptr(b);
		error('s',"unary + (ignored)");
		tp = t;
		base = PLUS;
		e1 = zero;
		return this;
	case NOT:
		e2 = check_cond(e2,NOT,tbl);
		tp = int_type;
		return this;
	case COMPL:
		t->integral(b);
		tp = t;
		return this;

	case INCR:
	case DECR:
		if (e1) e1->lval(b);
		if (e2) e2->lval(b);
		r1 = t->num_ptr(b);
		tp = t;
		return this;
	
	}

	if (e1==dummy || e2==dummy || e1==0 || e2==0) error("operand missing for%k",b);
	switch (b) {
	case MUL:
	case DIV:
		r1 = t1->numeric(b);
		r2 = t2->numeric(b);
		nppromote(b);
		break;
	case MOD:
		r1 = t1->integral(b);
		r2 = t2->integral(b);
		nppromote(b);
		break;
	case PLUS:
		r2 = t2->num_ptr(b);
		r1 = t1->num_ptr(b);
		if (r1==P && r2==P) error("P +P");
		nppromote(b);
		tp = t;
		break;
	case MINUS:
		r2 = t2->num_ptr(b);
		r1 = t1->num_ptr(b);
		if (r2==P && r1!=P && r1!=A) error("P - nonP");
		nppromote(b);
		tp = t;
		break;
	case LS:
	case RS:
	case AND:
	case OR:
	case ER:
		switch (e1->base) {
		case LT:
		case LE:
		case GT:
		case GE:
		case EQ:
		case NE:
			error('w',"%kE as operand for%k",e1->base,b);
		}
		switch (e2->base) {
		case LT:
		case LE:
		case GT:
		case GE:
		case EQ:
		case NE:
			error('w',"%kE as operand for%k",e2->base,b);
		}
		r1 = t1->integral(b);
		r2 = t2->integral(b);
		nppromote(b);
		break;
	case LT:
	case LE:
	case GT:
	case GE:
	case EQ:
	case NE:
		r1 = t1->num_ptr(b);
		r2 = t2->num_ptr(b);
		npcheck(b);
		t = int_type;
		break;
	case ANDAND:
	case OROR:
		e1 = check_cond(e1,b,tbl);
		e2 = check_cond(e2,b,tbl);
//		if (st2 != st3) error('s',"needs temporaryV to evaluateE after \"%k\" (please use ifS)",b);
		t = int_type;
		break;
	case QUEST:
		{
		Pname c1, c2;
		cond = check_cond(cond,b,tbl);
//		if (st1 != st2) error('s',"needs temporaryV to evaluateE after \"?\" (please use ifS)");
//		if (st2 != st3) error('s',"needs temporaryV to evaluateE after \":\" (please use ifS)");
		// still doesn't do complete checking for possible conversions...
		if (t1==t2
		|| (	(c1=t1->is_cl_obj())
			&& (c2=t2->is_cl_obj())
			&& (c1->tp==c2->tp)
		))
			t = t1;
		else {
			r1 = t1->num_ptr(b);
			r2 = t2->num_ptr(b);
//error('d',"r1 %d r2 %d",r1,r2);
			if (r1==FCT && r2==FCT) {	// fudge
				if (t1->check(t2,ASSIGN)) error("badTs in ?:E: %t and %t",t1,t2);
				t = t1;
			}
			else
				nppromote(b);
//error('d',"t: %d %t   t1: %d %t   t2: %d %t",t,t,t1,t1,t2,t2);
			if (t!=t1 && t->check(t1,0)) {
				e1 = new texpr(CAST,t,e1);
				e1->tp = t;
			}
			if (t!=t2 && t->check(t2,0)) {
				e2 = new texpr(CAST,t,e2);
				e2->tp = t;
			}
			
		}
		}
		break;
	case ASPLUS:
		r1 = t1->num_ptr(b);
		r2 = t2->num_ptr(b);
		if (r1==P && r2==P) error("P +=P");
		nppromote(b);
		goto ass;
	case ASMINUS:
		r1 = t1->num_ptr(b);
		r2 = t2->num_ptr(b);
		if (r2==P && r1!=P && r1!=A) error("P -= nonP");
		nppromote(b);
		goto ass;
	case ASMUL:
	case ASDIV:
		r1 = t1->numeric(b);
		r2 = t1->numeric(b);
		nppromote(b);
		goto ass;
	case ASMOD:
		r1 = t1->integral(b);
		r2 = t2->integral(b);
		nppromote(b);
		goto ass;
	case ASAND:
	case ASOR:
	case ASER:
	case ASLS:
	case ASRS:
		r1 = t1->integral(b);
		r2 = t2->integral(b);
		npcheck(b);
		t = int_type;
		goto ass;
	ass:
		as_type = t;	/* the type of the rhs */
		t2 = t;
	case ASSIGN:
		if (e1->lval(b) == 0) {
			tp = any_type;
			return this;
		}
	lkj:
		switch (t1->base) {
		case INT:
		case CHAR:
		case SHORT:
			if (e2->base==ICON && e2->tp==long_type)
				error('w',"long constant assigned to%k",t1->base);
		case LONG:
			if (b==ASSIGN
			&& Pbase(t1)->b_unsigned
			&& e2->base==UMINUS
			&& e2->e2->base==ICON)
				error('w',"negative assigned to unsigned");
			break;
		case TYPE:
			t1 = Pbase(t1)->b_name->tp;
			goto lkj;
		case COBJ:
		{	Pname c1 = t1->is_cl_obj();

			if (c1) {
				Pname c2 = t2->is_cl_obj();
//error('d',"%t=%t %d %d",t1,t2,c1,c2);
				if (c1 != c2) {
					e2 = new expr(ELIST,e2,0);
					e2 = new texpr(VALUE,t1,e2);
					e2->e2 = e1;
					e2 = e2->typ(tbl);
					*this = *e2;
					tp = t1;
					return this;
				}
				else {	// check for bitwise copy
					Pclass cl = Pclass(c1->tp);
//error('d',"bit %d",cl->bit_ass);
					if (cl->bit_ass == 0)
						error('s',"bitwise copy: %s has a member with operator=()",cl->string);
					else if (cl->itor && cl->has_dtor())
						error('w',"bitwise copy: %s has destructor and %s(%s&) but not assignment",cl->string,cl->string,cl->string);	
				}
			}
			break;
		}
		case PTR:
/*error('d',"ptr %d %d",t1,t1?t1->base:0);*/
		{	Pfct ef = Pfct(Pptr(t1)->typ);
			if (ef->base == FCT) {
				Pfct f;
				Pname n = 0;
				switch (e2->base) {
				case NAME:
					f = (Pfct)e2->tp;
					n = Pname(e2);
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						e2 = new expr(G_ADDROF,0,e2);
						e2->tp = f;
					}
					goto ad;
				case DOT:
				case REF:
/*error('d',"dot %d %d",e2->mem->tp,e2->mem->tp?e2->mem->tp->base:0);*/
					f = (Pfct)e2->mem->tp;
					switch (f->base) {
					case FCT:
					case OVERLOAD:
						n = Pname(e2->mem);
						e2 = new expr(G_ADDROF,0,e2);
						e2 = e2->typ(tbl);
					}
					goto ad;
				case ADDROF:
				case G_ADDROF:
					f = (Pfct)e2->e2->tp;
				ad:
					if (f->base == OVERLOAD) {
						Pgen g = (Pgen)f;
						n = g->find(ef);
						if (n == 0) {
							error("cannot deduceT for &overloaded %s()",g->string);
							tp = any_type;
						}
						else
							tp = t1;
						e2->e2 = n;
						n->lval(ADDROF);
						return this;
					}
					if (n) n->lval(ADDROF);
				}
			}
			break;
		}
		}
		{	Pname cn;
			int i;
			if ((cn=t2->is_cl_obj())
			&& (i=can_coerce(t1,t2))
			&& Ncoerce) {
				if (1 < i) error("%d possible conversions for assignment",i);
//error('d',"%t =%t",t1,t2);
				Pclass cl = (Pclass)cn->tp;
				Pref r = new ref(DOT,e2,Ncoerce);
				Pexpr rr = r->typ(tbl);
				Pexpr c = new expr(G_CALL,rr,0);
				c->fct_name = Ncoerce;
				c->tp = t1;
				e2 = c;	
				tp = t1;	
				return this;
			}
		}
//error('d',"check(%t,%t)",e1->tp,t2);
		if (e1->tp->check(t2,ASSIGN)) error("bad assignmentT:%t =%t",e1->tp,t2);		
		t = e1->tp;				/* the type of the lhs */
		break;
	case CM:
		t = t2;
		break;
	default:
		error('i',"unknown operator%k",b);
	}

	tp = t;
	return this;
}

