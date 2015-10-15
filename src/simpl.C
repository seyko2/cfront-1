/* @(#) simpl.c 1.7 1/27/86 17:49:27 */ 
/*ident	"@(#)cfront:src/simpl.c	1.7" */
/*******************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.

simpl.c:

	simplify the typechecked function
	remove:		classes:
				class fct-calls
				operators
				value constructors and destructors
			new and delete operators (replace with function calls)
			initializers		(turn them into statements)
			constant expressions		(evaluate them)
			inline functions		(expand the calls)
			enums				(make const ints)
			unreachable code		(delete it)
	make implicit coersions explicit

	in general you cannot simplify something twice

*******************************************************************/

#include "cfront.h"
#include "size.h"
#include <ctype.h>

Pname new_fct;
Pname del_fct;
Pname vec_new_fct;
Pname vec_del_fct;
Pstmt del_list;
Pstmt block_del_list;
Pname ret_var;
bit not_inl;	// is the current function an inline?
Pname curr_fct;	// current function
Pexpr init_list;
Pexpr one;


void simpl_init()
{
	Pname nw = new name(oper_name(NEW));
	Pname dl = new name(oper_name(DELETE));
	Pname vn = new name("_vec_new");
	Pname vd = new name("_vec_delete");

	new_fct = gtbl->insert(nw,0);	/* void* operator new(long); */
	delete nw;
	Pname a = new name;
	a->tp = long_type;
	new_fct->tp = new fct(Pvoid_type,a,1);
	new_fct->n_scope = EXTERN;
	PERM(new_fct);
	PERM(new_fct->tp);
	new_fct->use();
	new_fct->dcl_print(0);

	del_fct = gtbl->insert(dl,0);	/* void operator delete(void*); */
	delete dl;
	a = new name;
	a->tp = Pvoid_type;
	del_fct->tp = new fct(void_type,a,1);
	del_fct->n_scope = EXTERN;
	PERM(del_fct);
	PERM(del_fct->tp);
	del_fct->use();
	del_fct->dcl_print(0);

	a = new name;
	a->tp = Pvoid_type;
	Pname al = a;
	a = new name;
	a->tp = int_type;
	a->n_list = al;
	al = a;
	a = new name;
	a->tp = int_type;
	a->n_list = al;
	al = a;
	a = new name;	
	a->tp = Pvoid_type;
	a->n_list = al;
	al = a;				/* (Pvoid, int, int, Pvoid) */

	vec_new_fct = gtbl->insert(vn,0);
	delete vn;
	vec_new_fct->tp = new fct(Pvoid_type,al,1);
	vec_new_fct->n_scope = EXTERN;
	PERM(vec_new_fct);
	PERM(vec_new_fct->tp);
	vec_new_fct->use();
	vec_new_fct->dcl_print(0);

	a = new name;
	a->tp = int_type;
	al = a;
	a = new name;
	a->tp = Pvoid_type;
	a->n_list = al;
	al = a;
	a = new name;
	a->tp = int_type;
	a->n_list = al;
	al = a;
	a = new name;
	a->tp = int_type;
	a->n_list = al;
	al = a;
	a = new name;	
	a->tp = Pvoid_type;
	a->n_list = al;
	al = a;				/* (Pvoid, int, int, Pvoid, int) */

	vec_del_fct = gtbl->insert(vd,0);
	delete vd;
	vec_del_fct->tp = new fct(void_type,al,1);
	vec_del_fct->n_scope = EXTERN;
	PERM(vec_del_fct);
	PERM(vec_del_fct->tp);
	vec_del_fct->use();
	vec_del_fct->dcl_print(0);

	one = new expr(IVAL,(Pexpr)1,0);
	one->tp = int_type;
	PERM(one);
}

Ptable scope;		/* current scope for simpl() */
Pname expand_fn;	/* name of function being expanded or 0 */
Ptable expand_tbl;	/* scope for inline function variables */

Pname classdef.has_oper(TOK op)
{
	char* s = oper_name(op);
	Pname n;
	if (this == 0) error('i',"0->has_oper(%s)",s);
	n = memtbl->lookc(s,0);
	if (n == 0) return 0;
	switch (n->n_scope) {
	case 0:
	case PUBLIC:	return n;
	default:	return 0;
	}
}

int no_of_returns;

void name.simpl()
{
	if (base == PUBLIC) return;

	if (tp == 0) error('i',"%n->name.simple(tp==0)",this);

	switch (tp->base) {
	case 0:
		error('i',"%n->name.simpl(tp->base==0)",this);

	case OVERLOAD:
	{	Plist gl;
		for (gl = Pgen(tp)->fct_list; gl; gl=gl->l) gl->f->simpl();
		break;
	}

	case FCT:
	{	Pfct f = (Pfct)tp;
		Pname n;
		Pname th = f->f_this;
//error('d',"simpl%n tp=%t def=%d th=%d n_oper%k",this,tp,tp->defined,th,n_oper);
		if (th) {
			th->n_list = f->argtype;
			if (n_oper == CTOR) f->s_returns = th->tp;
		}

		if (tp->defined & (SIMPLIFIED | ~DEFINED) ) return;
	//	tp->defined |= SIMPLIFIED;

		for (n=(th)?th:f->argtype; n; n=n->n_list) n->simpl();

		if (f->body) {
			Ptable oscope = scope;
			scope = f->body->memtbl;
			if (scope == 0) error('i',"%n memtbl missing",this);
			curr_fct = this;
			f->simpl();
			if (f->f_inline && debug==0) {
				if (MIA<=f->nargs) {
					error('w',"too many arguments for inline%n (inline ignored)",this);
					f->f_inline = 0;
					scope = oscope;
					break;
				}
				int i = 0;
				for (n=(th)?th:f->argtype; n; n=n->n_list) {
					n->base = ANAME;
					n->n_val = i++;
					if (n->n_table != scope) error('i',"%s %d %d\n",n->string,n->n_table,scope);
				}
				expand_tbl = (f->returns->base!=VOID || n_oper==CTOR) ? scope : 0;
				expand_fn = this;
				if (expand_tbl) {
					// value returning: generate expression
					Pexpr ee = (Pexpr)f->body->expand();
					/* the body still holds the memtbl */
					f->f_expr = (ee->base==CM) ? ee : new expr(CM,zero,ee);
					/* print.c assumes expansion into comma expression */
				}
				else {	// not value return: can generate block
					f->f_expr = 0;
					f->body = (Pblock)f->body->expand();
				}
				expand_fn = 0;
				expand_tbl = 0;
			}
			scope = oscope;
		}
		break;
	}

	case CLASS:
		Pclass(tp)->simpl();
		break;
/*
	case EOBJ:
		tp->base = INT;
		break;
*/
	default:
//error('d',"%n tp %t n_init %d",this,tp, n_initializer);
		break;
	}

	if (n_initializer) n_initializer->simpl();
	tp->defined |= SIMPLIFIED;
}

void fct.simpl()
/*
	call only for the function definition (body != 0)

	simplify argument initializers, and base class initializer, if any
	then simplify the body, if any

	for constructor:call allocator if this==0 and this not assigned to
			(auto and static objects call constructor with this!=0,
			the new operator generates calls with this==0)
			call base & member constructors
	for destructor:	call deallocator (no effect if this==0)
			case base & member destructors

	for arguments  and function return values look for class objects
	that must be passed by constructor "operator X(X&)".

	Allocate temporaries for class object expressions, and see if
	class object return values can be passed as pointers.

	call constructor and destructor for local class variables.
*/
{
	Pexpr th = f_this;
	Ptable tbl = body->memtbl;
	Pstmt ss = 0;
	Pstmt tail;
	Pname cln; 
	Pclass cl;
	Pstmt dtail = 0;

	not_inl = debug || f_inline==0;
	ret_var = tbl->look("_result",0);
	if (ret_var && not_inl==0) /* "_result" not used in inlines */
		ret_var->n_used = ret_var->n_assigned_to = ret_var->n_addr_taken = 0;
	del_list = 0;
	block_del_list = 0;
	scope = tbl;
	if (scope == 0) error('i',"fct.simpl()");

	if (th) {
		Pptr p = (Pptr)th->tp;
		cln = Pbase(p->typ)->b_name;
		cl = (Pclass)cln->tp;
	}

	if (curr_fct->n_oper == DTOR) {		/* initialize del_list */
		Pexpr ee;
		Pstmt es;
		class ifstmt * ifs;
		Pname bcln = cl->clbase;
		Pclass bcl;
		Pname d;

		Pname fa = new name("_free");	/* fake argument for dtor */
		fa->tp = int_type;
		Pname free_arg = fa->dcl(body->memtbl,ARG);
		delete fa;
		f_this->n_list = free_arg;

		Ptable tbl = cl->memtbl;
		int i;
		Pname m;

		/* generate calls to destructors for all members of class cl */
		for (m=tbl->get_mem(i=1); m; m=tbl->get_mem(++i) ) {
			Ptype t = m->tp;
			Pname cn;
			Pclass cl;
			Pname dtor;
			if (m->n_stclass == STATIC) continue;

			if (cn = t->is_cl_obj()) {
				cl = (Pclass)cn->tp;
				if (dtor = cl->has_dtor()) {
					/*	dtor(this,0);	*/
					Pexpr aa = new expr(ELIST,zero,0);
					ee = new ref(REF,th,m);
					ee = new ref(DOT,ee,dtor);
					ee = new call(ee,aa);
					ee->fct_name = dtor;
					ee->base = G_CALL;
					es = new estmt(SM,curloc,ee,0);
					if (dtail)
						dtail->s_list = es;
					else
						del_list = es;
					dtail = es;	
				}
			}
			else if (cl_obj_vec) {
				cl = Pclass(cl_obj_vec->tp);
				if (dtor = cl->has_dtor()) {
					int esz = cl->tsizeof();
					Pexpr noe = new expr(IVAL,Pexpr(t->tsizeof()/esz),0);
					Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
					Pexpr mm = new ref(REF,th,m);
					Pexpr arg = new expr(ELIST,dtor,zero);
					dtor->lval(ADDROF);
					arg = new expr(ELIST,sz,arg);
					arg = new expr(ELIST,noe,arg);
					arg = new expr(ELIST,mm,arg);
					ee = new call(vec_del_fct,arg);
					ee->base = G_CALL;								es = new estmt(SM,curloc,ee,0);
					if (dtail)
						dtail->s_list = es;
					else
						del_list = es;
					dtail = es;
				}
			}
		}

		// delete base
		if (bcln
		&& (bcl=(Pclass)bcln->tp)
		&& (d=bcl->has_dtor()) ) {	// base.dtor(this,_free);
			Pexpr aa = new expr(ELIST,free_arg,0);
			ee = new ref(REF,th,d);
			ee = new call(ee,aa);
			/*ee->fct_name = d; NO would suppress virtual */
			ee->base = G_CALL;
			es = new estmt(SM,curloc,ee,0);
		}
		else {				// if (_free) _delete(this);
			Pexpr aa  = new expr(ELIST,th,0);
			ee = new call(del_fct,aa);
			ee->fct_name = del_fct;
			ee->base = G_CALL;
			es = new estmt(SM,curloc,ee,0);
			es = new ifstmt(curloc,free_arg,es,0);
		}
		free_arg->use();
		Pname(th)->use();
		if (dtail)
			dtail->s_list = es;
		else
			del_list = es;
		ifs = new ifstmt(curloc,th,del_list,0);
/*
		ifs = new ifstmt(curloc,cc,es,0);
		if (dtail)
			dtail->s_list = ifs;
		else
			del_list = ifs;
		dtail = ifs;
*/
		del_list = ifs;

		if (del_list) del_list->simpl();
	}

int ass_count;
	if (curr_fct->n_oper == CTOR) {
		Pexpr ee;
		Ptable tbl = cl->memtbl;
		Pname m;
		int i;

		/*
			generate: this=base::base(args)
			this->b_init == base::base(args) or 0
		*/
		if (b_init) {
//error('d',"b_init %k",b_init->base);
			switch (b_init->base) {
			case ASSIGN:
			case CM:
				break;
			default:
			{	Pcall cc = (Pcall)b_init;
				Pname bn = cc->fct_name;
				Pname tt = Pfct(bn->tp)->f_this;
				ass_count = tt->n_assigned_to;
				cc->simpl();
				init_list = new expr(ASSIGN,th,cc);
			}
			}
		}
		else {
			ass_count = 0;
			init_list = 0;
		}

		if (cl->virt_count) {	/* generate: this->_vptr=virt_init; */
			Pname vp = cl->memtbl->look("_vptr",0);
			Pexpr vtbl = new text_expr(cl->string,"_vtbl");
			ee = new ref(REF,th,vp);
			ee = new expr(ASSIGN,ee,vtbl);
			init_list =  (init_list) ? new expr(CM,init_list,ee) : ee;
		}
for (Pname nn = f_init; nn; nn=nn->n_list) {
	if (nn->n_initializer == 0) continue;
	Pname m = tbl->look(nn->string, 0);
	if (m && m->n_table == tbl) m->n_initializer = nn->n_initializer;
}
		/* generate cl.new(args) for all members of cl */
		for (m=tbl->get_mem(i=1); m; m=tbl->get_mem(++i) ) {
			Ptype t = m->tp;
			Pname cn;
			Pclass cl;
			Pname ctor;

			switch (m->n_stclass) {
			case STATIC:
			case ENUM:
				continue;
			}
			switch (t->base) {
			case FCT:
			case OVERLOAD:
			case CLASS:
			case ENUM:
				continue;
			}
			if (m->base == PUBLIC) continue;

			if (cn=t->is_cl_obj()) {
		 		Pexpr ee = m->n_initializer;
				m->n_initializer = 0;	// from fct must not persist until next fct

				if (ee == 0) {		// try default
					cl = (Pclass)cn->tp;
					if (ctor = cl->has_ictor()) {
						ee = new ref(REF,th,m);
						ee = new ref(DOT,ee,ctor);
						ee = new call(ee,0);
						ee->fct_name = ctor;
						ee->base = G_CALL;
						ee = ee->typ(tbl);	// look for default arguments
					} else if (cl->has_ctor()) {
					   error("M%n needsIr (no default constructor forC %s)",m,cl->string);
					}
				}

				if (ee) {
					ee->simpl();
					if (init_list)
						init_list = new expr(CM,init_list,ee);
					else
						init_list = ee;
				} 
			}
			else if (cl_obj_vec) {
				cl = (Pclass)cl_obj_vec->tp;
				if (ctor = cl->has_ictor()) {	/*  _new_vec(vec,noe,sz,ctor); */
					int esz = cl->tsizeof();
					Pexpr noe = new expr(IVAL,(Pexpr)(t->tsizeof()/esz),0);
					Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
					Pexpr mm = new ref(REF,th,m);
					Pexpr arg = new expr(ELIST,ctor,0);
					/*ctor->take_addr();*/
					ctor->lval(ADDROF);
					arg = new expr(ELIST,sz,arg);
					arg = new expr(ELIST,noe,arg);
					arg = new expr(ELIST,mm,arg);
					ee = new call(vec_new_fct,arg);
					ee->fct_name = vec_new_fct;
					ee->base = G_CALL;
				/*	ee = ee->typ(tbl);	 look for default arguments */
					ee->simpl();
					if (init_list)
						init_list = new expr(CM,
								init_list,ee);
					else
						init_list = ee;
				}
				else if (cl->has_ctor()) {
					error("M%n[] needsIr (no default constructor forC %s)",m,cl->string);
				}
			}
			else if (m->n_initializer) {
				// init of non-class mem
				// set in fct.mem_init()
				if (init_list)
					init_list = new expr(CM,init_list,m->n_initializer);
				else
					init_list = m->n_initializer;
				m->n_initializer = 0;	// from fct must not persist until next fct
			}
			else if (t->is_ref()) {
				error("referenceM%n needsIr",m);
			}
			else if (t->tconst() && vec_const==0) {
				error("constM%n needsIr",m);
			}
		} // for m
	}

	no_of_returns = 0;

	tail = body->simpl();
	if (body->s == 0) body->empty = 1;	// null function

	if (returns->base != VOID) {	/* return must have been seen */
		if (no_of_returns) {
			switch (tail->base) {
			case SM:
				switch (tail->e->base) {
				case ICALL:
				case G_CALL:		/* not good enough */
					goto dontknow;
				};
			default:
/*fprintf(stderr,"t %d %d\n",tail->base,tail->e->base);*/
				if (strcmp(curr_fct->string,"main"))	
					error('w',"maybe no value returned from%n",curr_fct);
				if (del_list) goto zaq;
				break;
			case RETURN:
			case IF:
			case SWITCH:
			case DO:
			case FOR:
			case LABEL:
			case BLOCK:
			case PAIR:
			case GOTO:
			dontknow:
				break;
			}
		}
		else {
			if (strcmp(curr_fct->string,"main"))	
				error('w',"no value returned from%n",curr_fct);
			if (del_list) goto zaq;
		}
	}
	else if (del_list) {	/* return may not have been seen */
	zaq:
		if (tail)
			tail->s_list = del_list;
		else
			body->s = del_list;
		tail = dtail;
	}
	
	if (curr_fct->n_oper == CTOR) {

		if  ( Pname(th)->n_assigned_to == 0 ) {
		/* generate:	if (this==0) this=_new( sizeof(class cl) );
				init_list ;
		*/
			Pname(th)->n_assigned_to = ass_count ? ass_count : FUDGE111;
			Pexpr sz = new expr(IVAL,Pexpr(cl->tsizeof()),0);
			Pexpr ee = new expr(ELIST,sz,0);
			ee = new call(new_fct,ee);
			ee->fct_name = new_fct;
			ee->base = G_CALL;
			ee->simpl();
			ee = new expr(ASSIGN,th,ee);
			Pstmt es = new estmt(SM,curloc,ee,0);
			ee = new expr(EQ,th,zero);
			ifstmt* ifs = new ifstmt(curloc,ee,es,0);
			/*ifs->simpl();
				do not simplify
				or "this = " will cause an extra call of base.base
			*/
			if (init_list) {
				es = new estmt(SM,curloc,init_list,0);
				es->s_list = body->s;
				body->s = es;
				if (tail == 0) tail = es;
			}
			ifs->s_list = body->s;
			body->s = ifs;
			if (tail == 0) tail = ifs;
		}

		Pstmt st = new estmt(RETURN,curloc,th,0);
		if (tail)
			tail->s_list = st;
		else
			body->s = st;
		tail = st;
	}
}

Pstmt block.simpl()
{
	int i;
	Pname n;
	Pstmt ss=0, sst;
	Pstmt dd=0, ddt;
	Pstmt stail;
	Ptable old_scope = scope;

	if (own_tbl == 0) {
		Pstmt obd = block_del_list;
		block_del_list = 0;
		ss = (s) ? s->simpl() : 0;
		block_del_list = obd;
		return ss;
	}

	scope = memtbl;
	if(scope->init_stat == 0) scope->init_stat = 1; /* table is simplified. */

	for (n=scope->get_mem(i=1); n; n=scope->get_mem(++i)) {
		Pstmt st = 0;
		Pname cln;
		Pexpr in = n->n_initializer;
//error('d',"auto %n",n);
		if (in) scope->init_stat = 2; /* initializer in this scope */

		switch (n->n_scope) {
		case ARG:
		case 0:
		case PUBLIC:
			 continue;
		}

		if (n->n_stclass == STATIC) continue;

		if (in && in->base==ILIST)
			error('s',"initialization of automatic aggregates");

		if (n->tp == 0) continue; /* label */

		if (n->n_evaluated) continue;

		/* construction and destruction of temporaries is handled locally */
		{	char* s = n->string;
			register char c3 = s[3];
			if (s[0]=='_' && s[1]=='D' && isdigit(c3)) continue;
		}
//error('d',"cln %d",n->tp->is_cl_obj());
		if ( cln=n->tp->is_cl_obj() ) {
			Pclass cl = (Pclass)cln->tp;
			Pname d = cl->has_dtor();

			if (d) {			// n->cl.dtor(0);
				Pref r = new ref(DOT,n,d);
				Pexpr ee = new expr(ELIST,zero,0);
				Pcall dl = new call(r,ee);
				Pstmt dls = new estmt(SM,n->where,dl,0);
				dl->base = G_CALL;
				dl->fct_name = d;
				if (dd)
					ddt->s_list = dls;
				else
					dd = dls;
				ddt = dls;
			}
//error('d',"in %d %k %n",in,in?in->base:0,cln);
			if (in) {
				switch (in->base) {
				case DEREF:		// *constructor?	
					if (in->e1->base == G_CALL) {
						Pname fn = in->e1->fct_name;
						if (fn==0 || fn->n_oper!=CTOR) goto ddd;
						st = new estmt(SM,n->where,in->e1,0);
						n->n_initializer = 0;
						break;
					}
					goto ddd;
				case ASSIGN:		// assignment to "n"?
					if (in->e1 == n) {
						st = new estmt(SM,n->where,in,0);
						n->n_initializer = 0;
						break;
					}
				default:
					goto ddd;
				}
			}
		}
		else if (cl_obj_vec) {
			Pclass cl = (Pclass)cl_obj_vec->tp;
			Pname d = cl->has_dtor();
			Pname c = cl->has_ictor();

			if (in) {
				if (c) {	/*  _vec_new(vec,noe,sz,ctor); */
					Pfct f = Pfct(c->tp);	// null constructor?
					Pblock b = f->body;
					if (f->f_inline && f->body->empty) {
						n->n_initializer = 0;
						goto skip;
					}
					int esz = cl->tsizeof();
					Pexpr noe = new expr(IVAL,Pexpr(n->tp->tsizeof()/esz),0);
					Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
					Pexpr arg = new expr(ELIST,c,0);
					/*c->take_addr();*/
					c->lval(ADDROF);
					arg = new expr(ELIST,sz,arg);
					arg = new expr(ELIST,noe,arg);
					arg = new expr(ELIST,n,arg);
					arg = new call(vec_new_fct,arg);
					arg->base = G_CALL;
					arg->fct_name = vec_new_fct;
					st = new estmt(SM,n->where,arg,0);
					n->n_initializer = 0;
				}
				else
					goto ddd;
			skip:;
			}
			if (d) {	/*  _vec_delete(vec,noe,sz,dtor,0); */
				Pstmt dls;
				int esz = cl->tsizeof();
				Pexpr noe = new expr(IVAL, Pexpr(n->tp->tsizeof()/esz),0);
				Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
				Pexpr arg = new expr(ELIST,d,zero);
				/*c->take_addr();*/
				d->lval(ADDROF);
				arg = new expr(ELIST,sz,arg);
				arg = new expr(ELIST,noe,arg);
				arg = new expr(ELIST,n,arg);
				arg = new call(vec_del_fct,arg);
				arg->base = G_CALL;
				arg->fct_name = vec_del_fct;
				dls = new estmt(SM,n->where,arg,0);
				if (dd)
					ddt->s_list = dls;
				else
					dd = dls;
				ddt = dls;
			}
		}
		else if (in /*&& n->n_scope==FCT*/) {
			switch (in->base) {
			case ILIST:
				switch (n->n_scope) {
				case FCT:
				case ARG:
					error('s',"Ir list for localV%n",n);
				}
				break;
			case STRING:
				if (n->tp->base==VEC) break; /* BUG char vec only */
			default:
			ddd:
			{	Pexpr ee = new expr(ASSIGN,n,in);
				st = new estmt(SM,n->where,ee,0);
				n->n_initializer = 0;
			}
			}
		}
 
		if (st) {
			if (ss)
				sst->s_list = st;
			else
				ss = st;
			sst = st;
		}
	}

	if (dd) {
		Pstmt od = del_list;
		Pstmt obd = block_del_list;

		dd->simpl();
		/*PERM(dd);
*/
		if (od)
			del_list = new pair(curloc,dd,od);
		else
			del_list = dd;
		block_del_list = dd;

		stail  = (s) ? s->simpl() : 0;

		Pfct f = (Pfct)curr_fct->tp;
		if (this!=f->body
		|| f->returns->base==VOID
		|| strcmp(curr_fct->string,"main")==0 ) {
		// not dropping through the bottom of a value returning function
			if (stail)
				stail->s_list = dd;
			else
				s = dd;
			stail = ddt;
		}

		del_list = od;
		block_del_list = obd;
	}
	else
		stail  = (s) ? s->simpl() : 0;

	if (ss) {	/* place constructor calls */
		ss->simpl();
		sst->s_list = s;
		s = ss;
		if (stail == 0) stail = sst;
	}
	
	scope = old_scope;

	return stail;
}


void classdef.simpl()
{
	int i;
	Pname m;
	Pclass oc = in_class;

	in_class = this;
	for (m=memtbl->get_mem(i=1); m; m=memtbl->get_mem(++i) ) {
		Pexpr i = m->n_initializer;
		m->n_initializer = 0;
		m->simpl();
		m->n_initializer = i;
	}
	in_class = oc;

	Plist fl;				/* simplify friends */
	for (fl=friend_list; fl; fl=fl->l) {
		Pname p = fl->f;
		switch (p->tp->base) {
		case FCT:
		case OVERLOAD:
			p->simpl();
		}
	}
}

void expr.simpl()
{
//error('d',"expr.simpl (%d) %d%k e1=%d e2=%d tp2=%d cf%n",permanent,this,base,e1,e2,tp2,curr_fct);
	if (this==0 || permanent==2) return;

	switch (base) {
	case BLOCK:
	case SM:
	case IF:
	case FOR:
	case WHILE:
	case SWITCH:
		error('i',"%k inE",base);

	case VALUE:
		error('i',"expr.simpl(value)");

	case DELETE:
	/*	delete p => _delete(p);
			    or  cl.~cl(p,1);
		delete[s]p => _delete(p);
				or vec_del_fct(p,vec_sz,elem_sz,~cl,1);
	*/		 
	{	Pname cln;
		Pclass cl;
		Pname n;
		Ptype tt = e1->tp;
	ttloop:
		switch (tt->base) {
		case TYPE:	tt = Pbase(tt)->b_name->tp; goto ttloop;
		case VEC:
		case PTR:	tt = Pptr(tt)->typ; break;
		}

		cln = tt->is_cl_obj();
		if (cln) cl = (Pclass)cln->tp;
		if ( cln && (n=cl->has_dtor()) ) {	// ~cl() might be virtual
//error('d',"%n %d",n,Pfct(n->tp)->f_virtual);
			if (e2 == 0) {		// e1->cl::~cl(1)
				base = G_CALL;
				e1 = new ref(REF,e1,n);
				e2 = new expr(ELIST,one,0);
				fct_name = n;
			}
			else {		// del_cl_vec(e1,e2,elem_size,~cl,1);
				int esz = cl->tsizeof();
				Pexpr sz = new expr(IVAL,Pexpr(esz),0);
				Pexpr arg = one;
				if (Pfct(n->tp)->f_virtual) {
					// beware of sideeffects in expression e1
					if (e1->base != NAME) error('s',"PE too complicated for delete[]");
					Pexpr a = new ref(REF,e1,n);
					a = a->address();
					arg = new expr(ELIST,a,arg);
				}
				else {
					arg = new expr(ELIST,n,arg);
					n->lval(ADDROF);	// n->take_addr();
				}
				arg = new expr(ELIST,sz,arg);
				arg = new expr(ELIST,e2,arg);
				arg = new expr(ELIST,e1,arg);
				base = G_CALL;
				e1 = vec_del_fct;
				e2 = arg;
				fct_name = vec_del_fct;
			}
		}
		else if (cl_obj_vec) {
			error('i',"expr.simpl: delete vector");
		}
		else {					// _delete(e1)
			base = G_CALL;
			e2 = new expr(ELIST,e1,0);
			e1 = fct_name = del_fct;
		}
	//	*this = *typ(gtbl);
		Pcall(this)->simpl();
		break;
	}

	case G_ADDROF:
	case ADDROF:
		e2->simpl();
		switch (e2->base) {
		case DOT:
		case REF:
		{	Pref r = (Pref)e2;
			Pname m = r->mem;
			if (m->n_stclass == STATIC) {	/* & static member */
				Pexpr x;
			delp:
				x = e2;
				e2 = m;
				r->mem = 0;
				DEL(x);
			}
			else if (m->tp->base == FCT) {	/* & member fct */
				Pfct f = (Pfct)m->tp;
				if (f->f_virtual) {
					/* &p->f ==> p->vtbl[fi] */
					int index = f->f_virtual;
					Pexpr ie = (1<index) ? new expr(IVAL, (Pexpr)(index-1),0) : 0;
					Pname vp = m->n_table->look("_vptr",0);
					r->mem = vp;
					base = DEREF;
					e1 = e2;
					e2 = ie;
				}
				else {
					goto delp;
				}
			}
		}
		}
		break;

	default:
		if (e1) e1->simpl();
		if (e2) e2->simpl();
		break;

	case NAME:
	case DUMMY:
	case ICON:
	case FCON:
	case CCON:
	case IVAL:
	case FVAL:
	case LVAL:
	case STRING:
	case ZERO:
	case ILIST:
		return;

	case SIZEOF:
		base = IVAL;
		e1 = (Pexpr)tp2->tsizeof();
		DEL(tp2);
		tp2 = 0;
		break;

	case G_CALL:
	case CALL:
		Pcall(this)->simpl();
		break;

	case QUEST:
		cond->simpl();
		e1->simpl();
		e2->simpl();
		break;

	case NEW:	/* change NEW node to CALL node */
	{	Pname cln;
		Pname ctor;
		int sz = 1;
		int esz;
		Pexpr var_expr = 0;
		Pexpr const_expr;
		Ptype tt = tp2;
		Pexpr arg;

		if ( cln=tt->is_cl_obj() ) {
			Pclass cl = (Pclass)cln->tp;
			if ( ctor=cl->has_ctor() ) {	/* 0->cl_ctor(args) */
				Pexpr p = zero;
				if (ctor->n_table != cl->memtbl) {
				/*	no derived constructor: pre-allocate */
					int dsz = cl->tsizeof();
					Pexpr ce = new expr(IVAL,(Pexpr)dsz,0);
					ce = new expr(ELIST,ce,0);
					p = new expr(G_CALL,new_fct,ce);
					p->fct_name = new_fct;
				}
				Pcall c = (Pcall)e1;
				c->e1 = new ref(REF,p,(Pname)c->e1);
			/*	c->set_fct_name(ctor);*/
				c->simpl();
				*this = *Pexpr(c);
				return;
			}
		}
		else if (cl_obj_vec) {
			Pclass cl = (Pclass)cl_obj_vec->tp;
			ctor = cl->has_ictor();
			if (ctor == 0) {
				if (cl->has_ctor()) error("new %s[], no default constructor",cl->string);
				cl_obj_vec = 0;
			}
		}

	xxx:
		switch (tt->base) {
		case TYPE:
			tt = Pbase(tt)->b_name->tp;
			goto xxx;
		default:
			esz = tt->tsizeof();
			break;
		case VEC:
		{	Pvec v = (Pvec)tt;
			if (v->size)
				sz *= v->size;
			else if (v->dim)
				var_expr = (var_expr) ? new expr(MUL,var_expr,v->dim) : v->dim;
			else {
				sz = SZ_WPTR;
				break;
			}
			tt = v->typ;
			goto xxx;
		}
		}

		if (cl_obj_vec) { // _vec_new(0,no_of_elements,element_size,ctor)
			Pfct f = Pfct(cl_obj_vec->tp); // null constructor?
			Pblock b = f->body;
			if (f->f_inline && b->empty) goto skip2;
			const_expr = new expr(IVAL,(Pexpr)sz,0);
			Pexpr noe = (var_expr) ? (sz!=1) ? new expr(MUL,const_expr,var_expr) : var_expr : const_expr;
			const_expr = new expr(IVAL,(Pexpr)esz,0);
			base = CALL;
			arg = new expr(ELIST,ctor,0);
			/*ctor->take_addr();*/
			ctor->lval(ADDROF);
			arg = new expr(ELIST,const_expr,arg);
			arg = new expr(ELIST,noe,arg);
			e2 = new expr(ELIST,zero,arg);
			e1 = vec_new_fct;
			fct_name = vec_new_fct;
			break;
		}
	skip2:;
		/* call _new(element_size*no_of_elements) */
		sz *= esz;
		const_expr = new expr(IVAL,(Pexpr)sz,0);
		arg = (var_expr) ? (sz!=1) ? new expr(MUL,const_expr,var_expr) :var_expr : const_expr;
//error('d',"new: (%t)_new(...)",tp);
		base = CAST;
		tp2 = tp;
		e1 = new expr(G_CALL,new_fct,new expr(ELIST,arg,0));
		e1->fct_name = new_fct;
		simpl();
		break;
	}
	case CAST:
		e1->simpl();
		break;

	case REF:
		e1->simpl();
		break;
	case DOT:
		e1->simpl();
		if (e1->base == CM) {	/* &( , name). => ( ... , &name)-> */
			Pexpr ex = e1;
			cfr:
			switch (ex->e2->base) {
			case NAME:
				base = REF;
				ex->e2 = ex->e2->address();
				break;
			case CM:
				ex = ex->e2;
				goto cfr;
			}
		}
		break;

	case ASSIGN:
	{	Pfct f = (Pfct)curr_fct->tp;
		Pexpr th = f->f_this;

		if (e1) e1->simpl();
		if (e2) e2->simpl();

		if (th && th==e1) {
			if (curr_fct->n_oper == CTOR) {
				if (init_list) {
					/* this=e2 => (this=e2,init_list) */
					base = CM;
					e1 = new expr(ASSIGN,e1,e2);
					e2 = init_list;
				}
			}
		}
		break;
	}
	}
	
	if (tp && tp->base==INT) {
		Neval = 0;
		int i = eval();
		if (Neval == 0) {
			base = IVAL;
			e1 = (Pexpr)i;
		}
	}
}



void call.simpl()
/*
	fix member function calls:
		p->f(x) becomes f(p,x)
		o.f(x)  becomes f(&o,x)
	or if f is virtual:
		p->f(x) becomes ( *p->_vptr[ type_of(p).index(f)-1 ] )(p,x)
	replace calls to inline functions by the expanded code
*/
{
	Pname fn = fct_name;
	Pfct f = (fn) ? (Pfct)fn->tp : 0;

	if (fn == 0) e1->simpl();

	if (f) {
		switch(f->base) {
		case ANY:
			return;
		case FCT:
			break;
		case OVERLOAD:
		{	Pgen g = (Pgen)f;
			fct_name = fn = g->fct_list->f;
			f = (Pfct)fn->tp;
		}
		}
	}

	if (f && curr_expr==this) {	/* check for class object returning fct */
		Pname cln = f->returns->is_cl_obj();
		if (cln && Pclass(cln->tp)->has_dtor()) error('s',"%n returned by%n is not used (%n has destructor)",cln,fn,cln);
	}
//error('d',"simpl call%n e1: %d%k",fn,e1,e1->base);
	switch (e1->base) {
	case DOT:
	case REF:
	{	Pref r = (Pref)e1;
		Pexpr a1 = r->e1;
//error('d',"simpl fn %s f %d fv %d",fn?fn->string:"?",f,f?f->f_virtual:0);
		if (f && f->f_virtual) {
			Pexpr a11 = 0;

			switch(a1->base) {	// see if temporary might be needed
			case NAME:
				a11 = a1;
				break;
			case ADDROF:
			case G_ADDROF:
				if (a1->e2->base == NAME) a11 = a1;
				break;
			}

			if (e1->base == DOT) {
				if (a11) a11 = a11->address();
				a1 = a1->address();
			}
			
			if (a11 == 0) {
				/* temporary (maybe) needed
				   e->f() => (t=e,t->f(t))
				*/
				char* s = make_name('K');
				Pname n = new name(s);
				n->tp = a1->tp;
				n = n->dcl(scope,ARG); /* no init! */
				n->n_scope = FCT;
				n->assign();
				a11 = n;
				a1 = new expr(ASSIGN,n,a1);
				a1->tp = n->tp;
				a1->simpl();
				Pcall cc = new call(0,0);
				*cc = *this;
				base = CM;
				e1 = a1;
				e2 = cc;
				this = cc;
			}
			e2 = new expr(ELIST,a11,e2);
			int index = f->f_virtual;
			Pexpr ie = (1<index) ? new expr(IVAL,(Pexpr)(index-1),0) : 0;
			Pname vp = fn->n_table->look("_vptr",0);
			Pexpr vptr = new ref(REF,a11,vp);	/* p->vptr */
			Pexpr ee = new expr(DEREF,vptr,ie);	/* p->vptr[i] */
			Ptype pft = new ptr(PTR,f);
			ee = new texpr(CAST,pft,ee);		/* (T)p->vptr[i] */
			ee->tp = (Ptype)f->f_this;		/* encode argtype */
			e1 = new expr(DEREF,ee,0);		/* *(T)p->vptr[i] */
								/* e1->tp must be 0, means "argtype encoded" */
			fct_name = 0;
			fn = 0;
			e2->simpl();
			return;				/* (*(T)p->vptr[i])(e2) */
		}
		else {
//error('d',"a1 %k%k%n",a1->base,e1->base,r->mem);
			if (e1->base == DOT) a1 = a1->address();
			e2 = new expr(ELIST,a1,e2);
			e1 = r->mem;
		}
	}
	}

//error('d',"ex1 %d %d %d",fn,f->f_inline,debug);
	e2->simpl();
//error('d',"ex2 %d %d %d",fn,f->f_inline,debug);
	if (e1->base==NAME && e1->tp->base==FCT) {
		/* reconstitute fn destroyed to suppress "virtual" */
		fct_name = fn = (Pname)e1;
		f = (Pfct)fn->tp;
	}
//error('d',"ex3 %d %d %d",fn,f->f_inline,debug);
	if (fn && f->f_inline && debug==0) {
//error('d',"expand%n",fn);
		Pexpr ee = f->expand(fn,scope,e2);
//error('d',"expanded %d %d",fn,ee);
		if (ee) *Pexpr(this) = *ee;
	}
}

Pexpr curr_expr;	/* to protect against an inline being expanded twice
			   in a simple expression keep track of expressions
			   being simplified
			*/

Pstmt stmt.simpl()
/*
	return a pointer to the last statement in the list, or 0
*/
{
	if (this == 0) error('i',"0->stmt.simpl()");
/*error('d',"stmt.simpl %d%k e %d%k s %d%k sl %d%k\n",this,base,e,e?e->base:0,s,s?s->base:0,s_list,s_list?s_list->base:0); fflush(stderr);*/

	curr_expr = e;

	switch (base) {
	default:
		error('i',"stmt.simpl(%k)",base);

	case ASM:
		break;

	case BREAK:
	case CONTINUE:
		if (block_del_list) {
		/*	break		=>	{ _dtor()s; break; }
			continue	=>	{ _dtor()s; continue; }
		*/
			Pstmt bs = new stmt(base,where,0);
			Pstmt dl = block_del_list->copy();
			base = BLOCK;
			s = new pair(where,dl,bs);
			break;
		}
		break;

	case DEFAULT:
		s->simpl();
		break;

	case SM:
		if (e) e->simpl();
		break;

	case RETURN:
	{	/*	return x;	=>
				{ _ret_var = x; _dtor()s;  return _ret_var; }
			return ctor(x);	=>
				{ ctor(&_result,x); _dtor()s;  return _ret_var; }
			return;		=>
				{ _dtor()s; return; } OR (in constructors)
				{ _dtor()s; return _this; }
		*/

		no_of_returns++;

		if (not_inl) {
			Pstmt as;
			if (e && e!=dummy) {
				Pexpr ee;
				if (e->base==G_CALL
				&& e->fct_name
				&& e->fct_name->n_oper==CTOR
				&& e->e1->base==DOT ) {
					Pref r = (Pref)e->e1;
					r->e1 = ret_var;
					ee = e;
				}
				else {
					ee = new expr(ASSIGN,ret_var,e);
				}
				ee->simpl();
				as = new estmt(SM,where,ee,0);
			}
			else
				as = 0;

			base = BLOCK;
			s = 0;
			d = 0;
			own_tbl = (memtbl) ? 1 : 0;
			Pblock(this)->simpl();

			Pstmt dl = (del_list) ? del_list->copy() : 0;
			if (s) dl = (dl) ? new pair(where,s,dl) : s;
				
			Pstmt rs = new estmt(RETURN,where,(ret_var)?(Pexpr)ret_var:0,0);
			if (as) {
				if (dl) as = new pair(where,as,dl);
				s = new pair(where,as,rs);
			}
			else {
				if (curr_fct->n_oper == CTOR) {
					rs->e = Pfct(curr_fct->tp)->f_this;
				}
				s = (dl) ? new pair(where,dl,rs) : rs;
			}
		}
		else {
			if (e->base == VALUE) error('s',"inlineF returns constructor");
			e->simpl();
		}
		break;
	}

	case WHILE:
	case DO:
		e->simpl();
		s->simpl();
		break;
	case SWITCH:
		e->simpl();
		s->simpl();
		switch (s->base) {
		case DEFAULT:
		case LABEL:
		case CASE:
			break;
		case BLOCK:
			if (s->s)
			switch (s->s->base) {
			case BREAK:	/* to cope with the "break; case" macro */
			case CASE:
			case LABEL:
			case DEFAULT:
				break;
			default:
				goto df;
			}
			break;
		default:
		df:
			error('w',&s->where,"statement not reached: case label missing");
		}
		break;
	case CASE:
		e->simpl();
		s->simpl();
		break;
	case LABEL:
		if (del_list) error('s',"label in block with destructors");
		s->simpl();
		break;
	case GOTO:
		/* If the goto is going to a different (effective) scope,
		 * then it is necessary to activate all relevant destructors
		 * on the way out of nested scopes, and issue errors if there
		 * are any constructors on the way into the target. */

		/* Only bother if the goto and label have different effective
		 * scopes. (If mem table of goto == mem table of label, then
		 * they're in the same scope for all practical purposes. */

		{
		Pname n = scope->look( d->string, LABEL );
		if (n == 0) error('i',&where,"label%n missing",d);
		if( n->n_realscope != scope ) {

			/* Find the root of the smallest subtree containing
			 * the path of the goto.  This algorithm is quadratic
			 * only if the goto is to an inner or unrelated scope. */

			Ptable r = 0;

			for(Ptable q=n->n_realscope; q!=gtbl; q=q->next) {
				for( Ptable p = scope; p != gtbl; p = p->next ) {
					if( p==q ) {
						r = p; /* found root of subtree! */
						goto xyzzy;
					}
				}
			}

xyzzy:			if( r==0 ) error( 'i',&where,"finding root of subtree" );

			/* At this point, r = root of subtree, n->n_realscope
			 * = mem table of label, and scope = mem table of goto. */

			/* Climb the tree from the label mem table to the table
			 * preceding the root of the subtree, looking for
			 * initializers and ctors.  If the mem table "belongs"
			 * to an unsimplified block(s), the n_initializer field
			 * indicates presence of initializer, otherwise initializer
			 * information is recorded in the init_stat field of
			 * mem table. */

			for( Ptable p=n->n_realscope; p!=r; p=p->next )
				if( p->init_stat == 2 ) {
					error(&where,"goto%n pastD withIr",d);
					goto plugh; /* avoid multiple error msgs */
				}
				else if( p->init_stat == 0 ) {
					int i;
					for(Pname nn=p->get_mem(i=1);nn;nn=p->get_mem(++i))
						if(nn->n_initializer||nn->n_evaluated){
							error(&nn->where,"goto%n pastId%n",d,nn);
							goto plugh;
						}
				}
plugh:

			/* Proceed in a similar manner from the point of the goto,
			 * generating the code to activate dtors before the goto. */
			/* There is a bug in this code.  If there are class objects
			 * of the same name and type in (of course) different mem
			 * tables on the path to the root of the subtree from the
			 * goto, then the innermost object's dtor will be activated
			 * more than once. */

			{
			Pstmt dd = 0, ddt;

			for( Ptable p=scope; p!=r; p=p->next ) {
				int i;
				for(Pname n=p->get_mem(i=1);n;n=p->get_mem(++i)) {
		Pname cln;
		if (n->tp == 0) continue; /* label */

		if ( cln=n->tp->is_cl_obj() ) {
			Pclass cl = (Pclass)cln->tp;
			Pname d = cl->has_dtor();

			if (d) {	/* n->cl.delete(0); */
				Pref r = new ref(DOT,n,d);
				Pexpr ee = new expr(ELIST,zero,0);
				Pcall dl = new call(r,ee);
				Pstmt dls = new estmt(SM,n->where,dl,0);
				dl->base = G_CALL;
				dl->fct_name = d;
				if (dd)
					ddt->s_list = dls;
				else
					dd = dls;
				ddt = dls;
			}

		}
		else if (cl_obj_vec) {	/* never "new x" is a pointer */
			Pclass cl = (Pclass)cl_obj_vec->tp;
			Pname c = cl->has_ictor();
			Pname d = cl->has_dtor();

			if (d) {	/*  _vec_delete(vec,noe,sz,dtor,0); */
				Pstmt dls;
				int esz = cl->tsizeof();
				Pexpr noe = new expr(IVAL, (Pexpr)(n->tp->tsizeof()/esz),0);
				Pexpr sz = new expr(IVAL,(Pexpr)esz,0);
				Pexpr arg = new expr(ELIST,d,zero);
				d->lval(ADDROF);
				arg = new expr(ELIST,sz,arg);
				arg = new expr(ELIST,noe,arg);
				arg = new expr(ELIST,n,arg);
				arg = new call(vec_del_fct,arg);
				arg->base = G_CALL;
				arg->fct_name = vec_del_fct;
				dls = new estmt(SM,n->where,arg,0);
				if (dd)
					ddt->s_list = dls;
				else
					dd = dls;
				ddt = dls;
			}
		}
				} /* end mem table scan */
			} /* end dtor loop */

			/* "activate" the list of dtors obtained. */

			if( dd ) {
				dd->simpl();
				Pstmt bs = new stmt( base, where, 0 );
				*bs = *this;
				base = PAIR;
				s = dd;
				s2 = bs;
			}
			}
		} /* end special case for non-local goto */
		}
		break;

	case IF:
		e->simpl();
		s->simpl();
		if (else_stmt) else_stmt->simpl();
		break;
	case FOR:
		/* "for (s;e;e2) s2; => s; while(e) {s2;e3}" */
		if (for_init) {
			for_init->simpl();
			if (for_init->base==SM && for_init->e->tp==void_type)
				error('s',"call of inline voidF in for-expression");
		}
		if (e) e->simpl();
		if (e2) {
			curr_expr = e2;
			e2->simpl();
 			if (e2->base==ICALL && e2->tp==void_type)
				error('s',"call of inline voidF in for-expression");
		}
		s->simpl();
		break;
	case BLOCK:
		Pblock(this)->simpl();
		break;
	case PAIR:
		break;
	}

	/*if (s) s->simpl();*/
	if (base!=BLOCK && memtbl) {
		int i;
		Pstmt t1 = (s_list) ? s_list->simpl() : 0;
		Pstmt ss = 0;
		Pname cln;
		for (Pname tn = memtbl->get_mem(i=1); tn; tn=memtbl->get_mem(++i)) {
/*fprintf(stderr,"tmp %s tbl %d\n",tn->string,memtbl);*/
			if ( cln=tn->tp->is_cl_obj() ) {
				Pclass cl = (Pclass)cln->tp;
				Pname d = cl->has_dtor();
				if (d) {	/* n->cl.delete(0); */
					Pref r = new ref(DOT,tn,d);
					Pexpr ee = new expr(ELIST,zero,0);
					Pcall dl = new call(r,ee);
					Pstmt dls = new estmt(SM,tn->where,dl,0);
					dl->base = G_CALL;
					dl->fct_name = d;
					dls->s_list = ss;
					ss = dls;
/*error('d',"%d (tbl=%d): %n.%n %d->%d",this,memtbl,tn,d,ss,ss->s_list);*/ 
				}
			}
		}
		if (ss) {
			Pstmt t2 = ss->simpl();
			switch (base) {
			case IF:
				Pstmt es = ss->copy();
				if (else_stmt) {
					for (Pstmt t=es; t->s_list; t=t->s_list);
					t->s_list = else_stmt;
				}
				else_stmt = es;
				t2->s_list = s;
				s = ss;
				break;
			case RETURN:
			case WHILE:
			case FOR:
			case DO:
			case SWITCH:
				error('s',"E in%kS needs temporary ofC%n with destructor",base,cln);
				break;
			default:
				if (t1) {
					t2->s_list = s_list;
					s_list = ss;
					return t1;
				}
				s_list = ss;
				return t2;
			}
		}
		return (t1) ? t1 : this;
	}

	return (s_list) ? s_list->simpl() : this;
}

Pstmt stmt.copy()
// now handles dtors in the expression of an IF stmt
// not general!
{
	Pstmt ns = new stmt(0,curloc,0);

	*ns = *this;
	if (s) ns->s = s->copy();
	if (s_list) ns->s_list = s_list->copy();

	switch (base) {
	case PAIR:
		ns->s2 = s2->copy();
		break;
	}

	return ns;
}

