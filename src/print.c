/* @(#) print.c 1.7 1/27/86 17:49:19 */ 
/*ident	"@(#)cfront:src/print.c	1.7" */
/**************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


print.c:

	print the output of simpl, typ, or syn in a form suitable for cc input

****************************************************************************/

#include "cfront.h"

extern FILE* out_file;

/*
	print the declaration tree
*/

bit print_mode = 0;
extern int ntok; 
int ntok = 0;
int forced_sm = 0;
bit Cast = 0;
Pin curr_icall;

int MAIN = 0;	// fudge to get _main() called by main()

void puttok(TOK t)
/*
	print the output representation of "t"
*/
{
	char * s;
	if (t<=0 || MAXTOK<=t) error("illegal token %d",t);
	s = keys[t];
	if (s == 0) error("V representation token %d",t);
	putst(s);
	if (12<ntok++) {
		forced_sm = 1;
		ntok = 0;
	/*	putch('\n');*/
		last_line.putline();
	}
	else if (t == SM) {
		forced_sm = 1;
		ntok = 0;
		putch('\n');
		last_line.line++;
	}
}

#define MX	20
#define NTBUF	10
class dcl_buf {
	/*
		buffer for assembling declaration (or cast)
		left contains CONST_PTR	=> *CONST
			     CONST_RPTR => &CONST
				PTR	=> *
				RPTR	=> &
				LP	=> (
		right contains	RP	=> )
				VEC	=> [ rnode ]
				FCT	=> ( rnode )
				FIELD	=> : rnode
	*/
	Pbase b;
	Pname n;
	TOK left[MX], right[MX];
	Pnode  rnode[MX];
	int li, ri;
public:
	void	init(Pname nn)		{ b=0; n=nn; li=ri=0; };
	void	base(Pbase bb)		{ b = bb; };
	void	front(TOK t)		{ left[++li] = t; };
	void	back(TOK t, Pnode nod)	{ right[++ri] = t; rnode[ri] = nod; };
	void	paran() 		{ front(LP); back(RP,0); };
	void	put();
} *tbufvec[NTBUF] = {0}, *tbuf = 0;

int freetbuf = 0;

void dcl_buf.put()
{
	int i;

	if (MX<=li || MX<=ri) error('i',"T buffer overflow");
	if (b == 0) error('i',"noBT%s",Cast?" in cast":"");

	if (n && n->n_sto) puttok(n->n_sto);

	b->dcl_print();
	
	for( ; li; li--) 
		switch (left[li]) {
		case LP:
			puttok(LP);
			break;
		case CONST_PTR:
			puttok(MUL);
			if (print_mode != SIMPL) puttok(CONST);
			break;
		case CONST_RPTR:
			if (print_mode == SIMPL)
				puttok(MUL);
			else
				puttok(ADDROF);
			if (print_mode != SIMPL) puttok(CONST);
			break;
		case PTR:
			puttok(MUL);
			break;
		case RPTR:
			if (print_mode == SIMPL)
				puttok(MUL);
			else
				puttok(ADDROF);
		}

	if (n) n->print();

	for(i=1; i<=ri; i++)
		switch (right[i]) {
		case RP:
			puttok(RP);
			break;
		case VEC:
			puttok(LB);
			{	Pvec v = (Pvec) rnode[i];
				Pexpr d = v->dim;
				int s = v->size;
				if (d) d->print();
				if (s) fprintf(out_file,"%d",s);
			}
			puttok(RB);
			break;
		case FCT:
			{	Pfct f = (Pfct) rnode[i];
				f->dcl_print();
			}
			break;
		case FIELD:
			{	Pbase f = (Pbase) rnode[i];
				Pexpr d = (Pexpr)f->b_name;
				int s = f->b_bits;
				puttok(COLON);
				if (d) d->print();
				if (s) fprintf(out_file,"%d",s);
			}
			break;
		}
}

#define eprint(e) if (e) Eprint(e)

void Eprint(Pexpr e)
{
	switch (e->base) {
	case DUMMY:
		break;
	case NAME:
	case ID:
	case ZERO:
	case ICON:
	case CCON:
	case FCON:
	case STRING:
	case IVAL:
	case TEXT:
	case CM:
	case ELIST:
	case COLON:
	case ILIST:
	case DOT:
	case REF:
	case THIS:
	case CALL:
	case G_CALL:
	case ICALL:
	case ANAME:
		e->print();
		break;
	default:
		puttok(LP);
		e->print();
		puttok(RP);
		break;
	}
}

void name.dcl_print(TOK list)
/*
	Print the declaration for a name (list==0) or a name list (list!=0):
		For each name
		(1) print storage class
		(2) print base type
		(3) print the name with its declarators
	Avoid (illegal) repetition of basetypes which are class or enum declarations
	(A name list may contain names with different base types)
	list == SM :	terminator SM
	list == 0:	single declaration with terminator SM
	list == CM :	separator CM
*/
{
	Pname n;

	if (this == 0) error("0->name.dcl_print()");

	for (n=this; n; n=n->n_list) {
		Ptype t = n->tp;
		int sm = 0;

		if (t == 0) error('i',"name.dcl_print(%n)T missing",n);
		if (print_mode==SIMPL && n->n_stclass==ENUM) continue;
	
		if (n->n_stclass == STATIC) n->where.putline();

		switch (t->base) {
		case CLASS:
		{	Pclass cl = (Pclass)t;
			if (n->base == TNAME) break;
			cl->dcl_print(n);
			sm = 1;
			break;
		}

		case ENUM:
			Penum(t)->dcl_print(n);
			sm = 1;
			break;

		case FCT:
		{	Pfct f = (Pfct) t;
			if (n->base == TNAME) puttok(TYPEDEF);
			if (debug==0 && f->f_inline) {
				if (print_mode==SIMPL) {
					if (f->f_virtual || n->n_addr_taken) {
						TOK st = n->n_sto;
						Pblock b = f->body;
						f->body = 0;
					/*	n->n_sto = 0;	*/
						t->dcl_print(n);
						n->n_sto = st;
						f->body = b;
					}
				}
				else {
					if (print_mode != SIMPL)
						puttok(INLINE);
					else
						putst("/* inline */");
					t->dcl_print(n);
				}
			}
			else {
				if (n->n_table==gtbl && strcmp(n->string,"main")==0) {
					MAIN = 1;
					gtbl->look("main",0)->use();
					t->dcl_print(n);
					MAIN = 0;
				}
				else
					t->dcl_print(n);
			}
			break;
		}

		case OVERLOAD:
		{	Pgen g = (Pgen) t;
			Plist gl;
			fprintf(out_file,"\t/* overload %s: */\n",g->string);
			for (gl=g->fct_list; gl; gl=gl->l) {
				Pname nn = gl->f;
				nn->dcl_print(0);
				sm = 1;
			}
			break;
		}

		case ASM:
			fprintf(out_file,"asm(\"%s\")\n",(char*)Pbase(t)->b_name);
			break;

		case INT:
		case CHAR:
		case LONG:
		case SHORT: // do not allocate space for constants unless necessary
			if (print_mode==SIMPL
			&& Pbase(t)->b_const
			&& n->n_sto!=EXTERN	// extern const one;
						// const one = 1;
						// allocates storage
			&& (n->n_scope==EXTERN	// FUDGE const one = 1;
						// is treated as static
						// need loader support
				|| n->n_scope==STATIC
				|| n->n_scope==FCT)
			) {
				
				if (n->n_evaluated) {
					sm = 1;	/* no ; */
					break;
				}
			}

		default:
		{	Pexpr i = n->n_initializer;
			if (n->base == TNAME) puttok(TYPEDEF);
//error('d',"%s: init %d %d tbl %d %d sto %d sc %d scope %d\n",n->string?n->string:"",i,i?i->base:0,n->n_table,gtbl,n->n_sto,n->n_stclass,n->n_scope);
			if (i) {
				if (n->n_sto==EXTERN && n->n_stclass==STATIC) {
					n->n_initializer = 0;
					t->dcl_print(n);
					puttok(SM);
					n->n_initializer = i;
					n->n_sto = 0;
					t->dcl_print(n);
					n->n_sto = EXTERN;
				}
				else
					t->dcl_print(n);
			}
			else {
				if (fct_void==0
				&& n->n_sto==0
				&& n_stclass==STATIC
				&& n->n_table==gtbl) {
					switch (t->base) {
					case CHAR:
					case SHORT:
					case INT:
					case LONG:
					case FLOAT:
					case DOUBLE:
					case EOBJ:
					case PTR:
						// "int a;" == "int a = 0;"
						n->n_initializer = i = zero;
					}
				}
				t->dcl_print(n);
			}

			if (n->n_scope!=ARG) {
				if (i) {
					puttok(ASSIGN);
					if (t!=i->tp
					&& i->base!=ZERO
					&& i->base!=ILIST /*&& i->tp!=Pchar_type*/) {
						Ptype t1 = n->tp;
					cmp:
//error('d',"t1%t",t1);
						switch (t1->base) {
						default:
							i->print();
							break;
						case TYPE:	
							t1 = Pbase(t1)->b_name->tp;
							goto cmp;
						case VEC:
							if (Pvec(t1)->typ->base==CHAR) {
								i->print();
								break;
							}
						case PTR:
						case RPTR:
							puttok(LP);
							{	bit oc = Cast;
								Cast = 1;
								t->print();
								Cast = oc;
							}
							puttok(RP);
							eprint(i);
						}
					}
					else
						i->print();
				}
				else if (n->n_evaluated) {
					puttok(ASSIGN);
					if (n->tp->base != INT) {
						puttok(LP);
						puttok(LP);
						{	bit oc = Cast;
							Cast = 1;
							n->tp->print();
							Cast = oc;
						}
						fprintf(out_file,")%d)",n->n_val);
					}
					else
						fprintf(out_file,"%d",n->n_val);
				}
			}
		}
		}

		switch (list) {
		case SM:
			if (sm==0) puttok(SM);
			break;
		case 0:
			if (sm==0) puttok(SM);
			return;
		case CM:
			if (n->n_list) puttok(CM);
			break;
		}
	}
} 

void name.print()
/*
	print just the name itself
*/
{
	if (this == 0) error('i',"0->name.print()");

	if (string == 0) {
		if (print_mode == ERROR) putst(" ?");
		return;
	}

	switch (base) {
	default:
		error('i',"%d->name.print() base=%d",this,base);
	case TNAME:
		putst(string);
		return;
	case NAME:
	case ANAME:
		break;
	}

	switch (print_mode) {
	case SIMPL:
	{	Ptable tbl;
		int i = n_union;
		if (tp) {
			switch (tp->base) {
			default:
				if (tbl=n_table) {
					Pname tn;
//fprintf(stderr,"%s: tbl %d gtbl %d\n",string,tbl,gtbl);
					if (tbl == gtbl) break;
					if (tn=tbl->t_name) {
						if (i)
							fprintf(out_file,"_%s__O%d.__C%d_",tn->string,i,i);
						else
							fprintf(out_file,"_%s_",tn->string);
						break;
					}
				}
//fprintf(stderr,"%s: stc %d\n",string,n_stclass);
				switch (n_stclass) {
				case STATIC:
				case EXTERN:
					if (i)
						fprintf(out_file,"_O%d.__C%d_",i,i);
					else if (n_sto==STATIC && tp->base!=FCT)
						fprintf(out_file,"_static_");
					break;
				default:
					if (i)
						fprintf(out_file,"_auto__O%d.__C%d_",i,i);
					else
						fprintf(out_file,"_auto_");
				}
				break;
			case CLASS:
			case ENUM:
				break;
			}
		}
		break;
	}
	case ERROR:
	{	Ptable tbl;
		char* cs = 0;
		bit f = 0;
		if (tp) {
			switch (tp->base) {
			case OVERLOAD:
			case FCT:
				f = 1;
			default:
				if (tbl=n_table) {
					if (tbl == gtbl) {
						if (f == 0) putstring("::");
					}
					else {
						if (tbl->t_name) {
							cs = tbl->t_name->string;
							fprintf(out_file,"%s::",cs);
						}
					}
				}
				if (n_sto==REGISTER
				&& n_scope==ARG
				&& strcmp(string,"this")==0) {
					Ptype tt = Pptr(tp)->typ;
					Pname cn = Pbase(tt)->b_name;
					fprintf(out_file,"%s::",cn->string);
				}
				break;
			case CLASS:
			case ENUM:
		//	case TYPE:
				break;
			}

			switch (n_oper) {
			case TYPE:
				putstring("operator ");
				Pfct(tp)->returns->dcl_print(0);
				break;
			case 0:
				putstring(string);
				break;
			case DTOR:
				puttok(COMPL);
			case CTOR:
				if (cs)
					putstring(cs);
				else {
					putstring("constructor");
					f = 0;
				}
				break;

			default:
				putstring("operator ");
				putstring(keys[n_oper]);
				break;
			}
			if (f) putstring("()");
		}
		else
			if (string) putstring(string);
		return;
	}
	default:
		if (n_qualifier) {
			n_qualifier->print();
			puttok(DOT);
		}
	}

	if (string) putst(string);
}


void type.print()
{
/*fprintf(stderr,"type %d %d\n",this,base); fflush(stderr);*/
	switch (base) {
	case PTR:
	case RPTR:
		Pptr(this)->dcl_print(0);
		break;
	case FCT:
		Pfct(this)->dcl_print();
		break;
	case VEC:
		Pvec(this)->dcl_print(0);
		break;
	case CLASS:
	case ENUM:
		if (print_mode == ERROR)
			fprintf(out_file,"%s",base==CLASS?"class":"enum");
		else
			error('i',"%d->T.print(%k)",this,base);
		break;
	case TYPE:
		if (Cast) {
			Pbase(this)->b_name->tp->print();
			break;
		}
	default:
		Pbase(this)->dcl_print();
	}
}

char* type.signature(register char* p)
/*
	take a signature suitable for argument types for overloaded
	function names
*/
{
#define SDEL	'_'

	Ptype t = this;
	int pp = 0;


xx:
	switch (t->base) {
	case TYPE:	t = Pbase(t)->b_name->tp;	goto xx;
	case PTR: 	*p++ = 'P';	t = Pptr(t)->typ;	pp=1;	goto xx;
	case RPTR:	*p++ = 'R';	t = Pptr(t)->typ;	pp=1;	goto xx;
	case VEC:	*p++ = 'V';	t = Pvec(t)->typ;	pp=1;	goto xx;
	case FCT:
	{	Pfct f = (Pfct)this;
		Pname n;
		t = (f->s_returns) ? f->s_returns : f->returns;
		*p++ = 'F';
		for (n=f->argtype; n; n=n->n_list) {
			p = n->tp->signature(p);
			*p++ = SDEL;
		}
		*p++ = SDEL;
		if (f->nargs_known == ELLIPSIS) *p++ = 'E';
		*p =0;
		return p;
	}
	}

	if ( Pbase(t)->b_unsigned ) *p++ = 'U';

	switch (t->base) {
	case ANY:	*p++ = 'A';	break;
	case ZTYPE:	*p++ = 'Z';	break;
	case VOID:	*p++ = 'V';	break;
	case CHAR:	*p++ = (pp)?'C':'I';	break;
	case SHORT:	*p++ = (pp)?'S':'I';	break;
	case EOBJ:
	case INT:	*p++ = 'I';	break;
	case LONG:	*p++ = 'L';	break;
	case FLOAT:	*p++ = 'F';	break;
	case DOUBLE:	*p++ = 'D';	break;
	case COBJ:	*p++ = 'C';
			strcpy(p,Pbase(t)->b_name->string);
			while (*p++) ;
			*(p-1) = SDEL;
			break;
	case FIELD:
	default:
		error('i',"signature of %k",t->base);
	}

	*p = 0;
	return p;
}

void basetype.dcl_print()
{
	Pname nn;
	Pclass cl;

	if (print_mode != SIMPL) {
		if (b_virtual) puttok(VIRTUAL);
		if (b_inline) puttok(INLINE);
		if (b_const) puttok(CONST);
	}
	if (b_unsigned) puttok(UNSIGNED);

	switch (base) {
	case ANY:
		putst("any");
		break;

	case ZTYPE:
		putst("zero");
		break;

	case VOID:
		if (print_mode == SIMPL) {
			puttok(INT);
			break;
		}
	case CHAR:
	case SHORT:
	case INT:
	case LONG:
	case FLOAT:
	case DOUBLE:
		puttok(base);
		break;

	case EOBJ:
		nn = b_name;
	eob:
		if (print_mode == SIMPL)
			puttok(INT);
		else {
			puttok(ENUM);
			nn->print();
		}
		break;

	case COBJ:
		nn = b_name;
	cob:
		cl = (Pclass)nn->tp;
		switch (cl->csu) {
		case UNION:
		case ANON:	puttok(UNION); break;
		default:	puttok(STRUCT);
		}
		putst(cl->string);
		break;

	case TYPE:
		if (print_mode == SIMPL) {
			switch (b_name->tp->base) {
			case COBJ:
				nn = Pbase(b_name->tp)->b_name;
				goto cob;
			case EOBJ:
				nn = Pbase(b_name->tp)->b_name;
				goto eob;
			}
		}
		b_name->print();
		break;

	default:
		if (print_mode == ERROR) {
			if (0<base && base<MAXTOK && keys[base])
				fprintf(out_file," %s",keys[base]);
			else
				fprintf(out_file,"?");
		}
		else
			error('i',"%d->basetype.print(%d)",this,base);
	}
}

void type.dcl_print(Pname n)
/*
	"this" type is the type of "n". Print the declaration
*/
{
	Ptype t = this;
	Pfct f;
	Pvec v;
	Pptr p;
	TOK pre = 0;

	if (t == 0) error('i',"0->dcl_print()");
	if (n && n->tp!=t) error('i',"not %n'sT (%d)",n,t);

	if (base == OVERLOAD) {
		if (print_mode == ERROR) {
			puttok(OVERLOAD);
			return;
		}
		Pgen g = (Pgen) this;
		Plist gl;
		fprintf(out_file,"\t/* overload %s: */\n",g->string);
		for (gl=g->fct_list; gl; gl=gl->l) {
			Pname nn = gl->f;
			nn->tp->dcl_print(nn);
			if (gl->l) puttok(SM);
		}
		return;
	}

	tbuf = tbufvec[freetbuf];
	if (tbuf == 0) {
		if (freetbuf == NTBUF-1) error('i',"AT nesting overflow");
		tbufvec[freetbuf] = tbuf = new class dcl_buf;
	}
	freetbuf++;
	tbuf->init(n);

	while (t) {
		TOK k;

		switch (t->base) {
		case PTR:
			p = (Pptr)t;
			k = (p->rdo) ? CONST_PTR : PTR;
			goto ppp;
		case RPTR:
			p = (Pptr)t;
			k = (p->rdo) ? CONST_RPTR : RPTR;
		ppp:
			tbuf->front(k);
			pre = PTR;
			t = p->typ;
			break;
		case VEC:
			v = (Pvec)t;
			if (Cast) {
				tbuf->front(PTR);
				pre = PTR;
			}
			else {
				if (pre == PTR) tbuf->paran();
				tbuf->back(VEC,v);
				pre = VEC;
			}
			t = v->typ;
			break;
		case FCT:
			f = (Pfct)t;
			if (pre == PTR) tbuf->paran();
			tbuf->back(FCT,f);
			pre = FCT;
			t = (f->s_returns) ? f->s_returns : f->returns;
			break;
		case FIELD:
			tbuf->back(FIELD,t);
			tbuf->base( Pbase(Pbase(t)->b_fieldtype) );
			t = 0;
			break;
		case CLASS:
		case ENUM:
			error('i',"unX%k asBT",t->base);
		case 0:
			error('i',"noBT(B=0)%s",Cast?" in cast":"");
		case TYPE:
			if (Cast) { // unravel type in case it contains vectors
				t = Pbase(t)->b_name->tp;
				break;
			}
		default: // the base has been reached
			tbuf->base( Pbase(t) );
			t = 0;
			break;
		} // switch
	} // while

	tbuf->put();
	freetbuf--;
}

void fct.dcl_print()
{
	Pname nn;

	if (print_mode == ERROR) {
		puttok(LP);
		for (nn=argtype; nn;) {
			nn->tp->dcl_print(0);
			if (nn=nn->n_list) puttok(CM); else break;
		}
		switch (nargs_known) {
		case 0:		//	putst("?"); break;
		case ELLIPSIS:	puttok(ELLIPSIS); break;
		}
		puttok(RP);
		return;
	}

	Pname at = (f_this) ? f_this : argtype;
//fprintf(stderr,"f_this %d argtype %d body %d\n",f_this,argtype,body); fflush(stderr);
	puttok(LP);
	if (body && Cast==0) {

		for (nn=at; nn;) {
			nn->print();
			if (nn=nn->n_list) puttok(CM); else break;
		}
		puttok(RP);
	
		if (at) at->dcl_print(SM);

		if (b_init && print_mode!=SIMPL) {
			puttok(COLON);
			puttok(LP);
			b_init->print();
			puttok(RP);
		}

		if (MAIN) {
			putst("{ _main();");
			body->print();
			putst("}");
		}
		else
			body->print();
	}
	else
		puttok(RP);
}

void classdef.print_members()
{
	int i;
	Pname nn;

	if (clbase) {
		Pclass bcl = (Pclass)clbase->tp;
		bcl->print_members();
	}
	for (nn=memtbl->get_mem(i=1); nn; nn=memtbl->get_mem(++i)) {
//error('d',"mem %n: base(%d %d) union=%d tp=%d stc(%d %k)",nn,nn->base,nn->base,nn->n_union,nn->tp->base,nn->n_stclass,nn->n_stclass);
		if (nn->base==NAME
		&& nn->n_union==0
		&& nn->tp->base!=FCT
		&& nn->tp->base!=OVERLOAD
		&& nn->tp->base!=CLASS
		&& nn->tp->base!=ENUM
		&& nn->n_stclass != STATIC) {
			Pexpr i = nn->n_initializer;
			nn->n_initializer = 0;
			nn->dcl_print(0);
			nn->n_initializer = i;
		}
	}
}
	

void classdef.dcl_print(Pname)
{ 
	Plist l;
	TOK c = csu;
	if (c==CLASS && print_mode==SIMPL) c = STRUCT;

	if (print_mode == SIMPL) {	/* cope with nested classes */
		int i;
		Pname nn;

		for ( nn=memtbl->get_mem(i=1); nn; nn=memtbl->get_mem(++i) ) {
/*fprintf(stderr, "mem %d %s %d union %d tp %d %d\n", nn, nn->string, nn->base, nn->n_union, nn->tp, nn->tp->base);*/
			if (nn->base==NAME && nn->n_union==0) {
				if (nn->tp->base == CLASS) Pclass(nn->tp)->dcl_print(nn);
			}
		}
	}

	puttok(c);
	putst(string);

	if (c_body == 0) return;
	c_body = 0;

	if (print_mode == SIMPL) {
		int i;
		int sm = 0;
		Pname nn;
		int sz = tsizeof();

		puttok(LC);
		fprintf(out_file,"/* sizeof = %d */\n",sz);
		if (real_size)
			print_members();
		else
			putst("char _dummy;");
		puttok(RC);
		puttok(SM);

	
		if (virt_count) {	/* print initialized jump-table */

			for (nn=memtbl->get_mem(i=1); nn; nn=memtbl->get_mem(++i) ) {
				if (nn->base==NAME && nn->n_union==0) {	/* declare function names */
					Ptype t = nn->tp;
					switch (t->base) {
					case FCT:
					{	Pfct f =(Pfct) t;
//error('d',"%n i==%d v==%d returns (%d %d)%t",nn,f->f_inline,f->f_virtual,f->s_returns,f->returns,f->s_returns?f->s_returns:f->returns);
						if (f->f_virtual == 0) break;
						if (f->f_inline) puttok(STATIC);
						f->returns->print();
						nn->print();
						putst("()");
						puttok(SM);
						break;
					}
					case OVERLOAD:
					{	Pgen g = (Pgen)t;
						Plist gl;
						for (gl=g->fct_list; gl; gl=gl->l) {
							Pfct f = (Pfct) gl->f->tp;
							if (f->f_virtual == 0) break;
							if (f->f_inline) puttok(STATIC);
							f->returns->print();
							gl->f->print();
							putst("()");
							puttok(SM);
						}
					}
					}
				}
			}

			fprintf(out_file,"static int (*%s__vtbl[])() =",string);
			puttok(LC);
			for (i=0; i<virt_count; i++) {
				fprintf(out_file," (int(*)()) ");
				virt_init[i]->print();
				puttok(CM);
			}
			puttok(ZERO);
			puttok(RC);
			puttok(SM);
		}

		for (nn=memtbl->get_mem(i=1); nn; nn=memtbl->get_mem(++i) ) {
			if (nn->base==NAME && nn->n_union==0) {
				Ptype t = nn->tp;
				switch (t->base) {
				case FCT:
				case OVERLOAD:
					break;
				default:
					if (nn->n_stclass == STATIC) {
					//	nn->n_sto = 0;
						nn->dcl_print(0);
					}
				}
			}
		}

		for (nn=memtbl->get_mem(i=1); nn; nn=memtbl->get_mem(++i) ) {
			if (nn->base==NAME && nn->n_union==0) {
				Pfct f = (Pfct)nn->tp;
				switch (f->base) {
				case FCT:
					/* suppress duplicate or spurious declaration */
					if (debug==0 && f->f_virtual) break;
					if (debug==0 && f->f_inline) break;
					nn->dcl_print(0);
					break;
				case OVERLOAD:
					nn->dcl_print(0);
					break;
				}
			}
		}

		for (l=friend_list; l; l=l->l) {
			Pname nn = l->f;
//error('d',"friend%n %d%k",nn,nn->tp,nn->tp->base);
			switch (nn->tp->base) {
			case FCT:
				putst("/* friend */");
				Cast = 1;
				nn->dcl_print(0);
				Cast = 0;
				break;
			case OVERLOAD: /* first fct */
				l->f = nn = Pgen(nn->tp)->fct_list->f;
				putst("/* friend */");
				nn->dcl_print(0);
				break;
			}
		}
		return;
	}

	if (clbase) {
		puttok(COLON);
		if (pubbase) puttok(PUBLIC);
		clbase->print();
	}
	puttok(LC);

		for (l=friend_list; l; l=l->l) {
			Pname fr = l->f;
			puttok(FRIEND);
			switch (fr->tp->base) {
			case FCT:
			default:
				fr->print();
				puttok(SM);
			}
		}

	if (privmem) privmem->dcl_print(SM);
	if (memtbl) memtbl->dcl_print(NE,PUBLIC);
	puttok(PUBLIC);
	puttok(COLON);
	if (pubmem) pubmem->dcl_print(SM);
	if (memtbl) memtbl->dcl_print(EQ,PUBLIC);

	if (pubdef) {
		puttok(PUBLIC);
		puttok(COLON);
		pubdef->print();
		puttok(SM);
	}

	puttok(RC);
}

void enumdef.dcl_print(Pname n)
{
	if (print_mode == SIMPL) {
		if (mem) {
			fprintf(out_file,"/* enum %s */\n",n->string);
			mem->dcl_print(SM);
		}
	}
	else {
		puttok(ENUM);
		if (n) n->print();
		puttok(LC);
		if (mem) mem->dcl_print(SM);
		puttok(RC);
	}
}

int addrof_cm = 0;

void expr.print()
{
	if (this == 0) error('i',"0->expr.print()");
	if (this==e1 || this==e2) error('i',"(%d%k)->expr.print(%d %d)",this,base,e1,e2);
/*error('d',"expr %d%k e1=%d e2=%d tp2=%d",this,base,e1,e2,tp2);*/
	switch (base) {
	case NAME:
	{	Pname n = (Pname) this;
		if (n->n_evaluated && n->n_scope!=ARG) {
			if (n->tp->base != INT) {
				puttok(LP);
				puttok(LP);
				bit oc = Cast;
				Cast = 1;
				n->tp->print();
				Cast = oc;
				fprintf(out_file,")%d)",n->n_val);
			}
			else
				fprintf(out_file,"%d",n->n_val);
		}
		else
			n->print();
		break;
	}
	case ANAME:
		if (curr_icall) {	/*in expansion: look it up */
			Pname n = (Pname)this;
			int argno = n->n_val;
			Pin il;
			for (il=curr_icall; il; il=il->i_next)
				if (n->n_table == il->i_table) goto aok;
			goto bok;
		aok:
			if (n = il->local[argno]) {
//error('d',"n   %d %s",n,n->string);
				n->print();
			}
			else {
				Pexpr ee = il->arg[argno];
				Ptype t = il->tp[argno];
				if (ee==0 || ee==this) error('i',"%d->expr.print(A %d)",this,ee);
//error('d',"ee  %d %d",ee,ee->base);
				if (t!=ee->tp && t->is_cl_obj()==0 && eobj==0) {
					puttok(LP);
					puttok(LP);
					{	bit oc = Cast;
						Cast = 1;
						t->print();
						Cast = oc;
					}
					puttok(RP);
					eprint(ee);
					puttok(RP);
				}
				else
					eprint(ee);
			}
		}
		else {
		bok:	/* in body: print it: */
//error('d',"bok %d %d",this,base);
			Pname(this)->print();
		}
		break;

	case ICALL:
	{	il->i_next = curr_icall;
		curr_icall = il;
		if (il == 0) error('i',"expr.print: iline missing");
		Pexpr a0 = il->arg[0];
		int val = QUEST;
		if (il->fct_name->n_oper != CTOR) goto dumb;

		/*
			find the value of "this"
	   		if the argument is a "this" NOT assigned to
			by the programmer, it was initliazed
		*/

		switch (a0->base) {
		case ZERO:
			val = 0;
			break;
		case ADDROF:
		case G_ADDROF:
			val = 1;
			break;
		case CAST:
			if (a0->e1->base == ANAME) {
				Pname a = (Pname)a0->e1;
				if (a->n_assigned_to == FUDGE111) val = FUDGE111;
			}
		}
		if (val==QUEST) goto dumb;
//error('d',"%n's this == %d",il->fct_name,val);
		/*
			now find the test:  "(this==0) ? _new(sizeof(X)) : 0"

			e1 is a comma expression,
			the test is either the first sub-expression
				or the first sub-expression after the assignments
					initializing temporary variables
		 */

	{	Pexpr e = e1;
	lx:
		switch (e->base) {
		case CM:
		/*	if (val==1 && e->e1->base==ASSIGN) {
				Pexpr ass = e->e1;
				Pname a = e->e1->e1;
				if (a->base==ANAME && 1) {
				}
			}
		*/
			e = (e->e2->base==QUEST || e->e1->base==ASSIGN) ? e->e2 : e->e1;
			goto lx;

		case QUEST:
		{	Pexpr q = e->cond;
			if (q->base==EQ && q->e1->base==ANAME && q->e2==zero) {
				Pname a = (Pname)q->e1;
				Pexpr saved = new expr(0,0,0);
				*saved = *e;
				*e = (val==0) ? *e->e1 : *e->e2;
				eprint(e1);
				*e = *saved;
				delete saved;
				curr_icall = il->i_next;
				return;
			}
		}
		}
	}
	dumb:
//error('d',"dumb%n",il->fct_name);
		eprint(e1);
		if (e2) Pstmt(e2)->print();
		curr_icall = il->i_next;
//error('d',"end%n",il->fct_name);
		break;
	}
	case REF:
	case DOT:
		eprint(e1);
		puttok(base);
		mem->print();
		break;

	case VALUE:
		tp2->print();
		puttok(LP);
		if (e2) {
			putst("/* &");
			e2->print();
			putst(", */");
		}
		if (e1) e1->print();
		puttok(RP);
		break;

	case SIZEOF:
		puttok(SIZEOF);
		if (e1 && e1 != dummy) {
			eprint(e1);
		}
		else if (tp2) {
			puttok(LP);
			tp2->print();
			puttok(RP);
		}
		break;

	case NEW:
		puttok(NEW);
		tp2->print();
		if (e1) {
			puttok(LP);
			e1->print();
			puttok(RP);
		}
		break;

	case DELETE:
		puttok(DELETE);
		e1->print();
		break;

	case CAST:
		puttok(LP);
		if (tp2->base != VOID) {
			puttok(LP);
			bit oc = Cast;
			Cast = 1;
			tp2->print();
			Cast = oc;
			puttok(RP);
		}
		puttok(LP);
		e1->print();
		puttok(RP);
		puttok(RP);
		break;

	case ICON:
	case FCON:
	case CCON:
	case ID:
		if (string) putst(string);
		break;

	case STRING:
		fprintf(out_file,"\"%s\"",string);
		break;

	case THIS:
	case ZERO:
		puttok(base);
		break;

	case IVAL:
		fprintf(out_file,"%d",(int)e1);
		break;

	case TEXT:
		if (string2)
			fprintf(out_file, " %s_%s", string, string2);
		else
			fprintf(out_file, " %s", string);
		break;

	case DUMMY:
		break;

	case G_CALL:
	case CALL:
	{	Pname fn = fct_name;
		Pname at;
		if (fn && print_mode==SIMPL) {
			Pfct f = (Pfct)fn->tp;
//error('d',"call%n: %t",fn,f);
			if (f->base==OVERLOAD) { /* overloaded after call */
				Pgen g = (Pgen)f;
				fct_name = fn = g->fct_list->f;
				f = (Pfct)fn->tp;
			}
			fn->print();
			at = (f->f_this) ? f->f_this : f->argtype;
		}
		else {
//error('d',"e1%k e1->tp %d %d%t",e1->base,e1->tp,e1->tp->base,e1->tp);
			eprint(e1);
			if (e1->tp) {	/* pointer to fct */
				at = Pfct(e1->tp)->argtype;
			}
			else {		/* virtual: argtype encoded */
				at = (Pname)e1->e1->tp;
			}
		}
		puttok(LP);
		if (e2) {
			if (at && print_mode==SIMPL) {
				Pexpr e = e2;
				while (at) {
					Pexpr ex;
					Ptype t = at->tp;

					if (e == 0) error('i',"A missing for %s()",(fn)?fn->string:"??");
					if (e->base == ELIST) {
						ex = e->e1;
						e =  e->e2;
					}
					else
						ex = e;

					if (ex==0) error('i',"A ofT%t missing",t);

					if (t!=ex->tp
					&& t->is_cl_obj()==0
					&& eobj==0) {
						puttok(LP);
						{	bit oc = Cast;
							Cast = 1;
							t->print();
							Cast = oc;
						}
						puttok(RP);
if (ex->base == DIV) { // defend against perverse SUN cc bug
	putst("(0+");
	eprint(ex);
	putst(")");
}
else
						eprint(ex);
					}
					else
						ex->print();
					at = at->n_list;
					if (at) puttok(CM);
				}
				if (e) {
					puttok(CM);
					e->print();
				}		 
			}
			else
				e2->print();
		}
		puttok(RP);
		break;
	}
	case ASSIGN:
		if (e1->base==ANAME && Pname(e1)->n_assigned_to==FUDGE111) {
			/* suppress assignment to "this" that has been optimized away */
			Pname n = (Pname)e1;
			int argno = n->n_val;
			Pin il;
			for (il=curr_icall; il; il=il->i_next)
				if (il->i_table == n->n_table) goto akk;
			goto bkk;
		akk:
			if (il->local[argno] == 0) {
				e2->print();
				break;
			}
		}
	case EQ:
	case NE:
	case GT:
	case GE:
	case LE:
	case LT:
	bkk:
		eprint(e1);
		puttok(base);
		if (e1->tp!=e2->tp && e2->base!=ZERO) {	/* cast, but beware of int!=long etc */
			Ptype t1 = e1->tp;
		cmp:
			switch (t1->base) {
			default:	break;
			case TYPE:	t1 = Pbase(t1)->b_name->tp; goto cmp;
			case PTR:
			case RPTR:
			case VEC:
				if (Pptr(t1)->typ != Pptr(e2->tp)->typ) {
					puttok(LP);
					bit oc = Cast;
					Cast = 1;
					e1->tp->print();
					Cast = oc;
					puttok(RP);
				}
			}
		}
		eprint(e2);
		break;

	case DEREF:
		if (e2) {
			eprint(e1);
			puttok(LB);
			e2->print();
			puttok(RB);
		}
		else {
			puttok(MUL);
			eprint(e1);
		}
		break;

	case ILIST:
		puttok(LC);
		if (e1) e1->print();
		puttok(RC);
		break;

	case ELIST:
	{	Pexpr e = this;
		forever {
			if (e->base == ELIST) {
				e->e1->print();
				if (e = e->e2)
					puttok(CM);
				else
					return;
			}
			else {
				e->print();
				return;
			}
		}
	}
	case QUEST:
		eprint(cond);
		puttok(QUEST);
		eprint(e1);
		puttok(COLON);
		eprint(e2);
		break;

	case CM:	/* do &(a,b) => (a,&b) for previously checked inlines */
		switch (e1->base) {
		case ZERO:
		case IVAL:
		case ICON:
		case NAME:
		case DOT:
		case REF:
		case FCON:
		case FVAL:
		case STRING:
			puttok(LP);
			goto le2;
		default:
			puttok(LP);
			{	int oo = addrof_cm;	// &(a,b) does not affect a
				addrof_cm = 0;
				eprint(e1);
				addrof_cm = oo;
			}
			puttok(CM);
		le2:
//error('d',"le2 %k(%k,%k) addrof_cm %d",base,e1->base,e2->base,addrof_cm);
			if (addrof_cm) {
				switch (e2->base) {
				case CAST:
					switch (e2->e2->base) {
					case CM:
					case ICALL:	goto ec;
					}
				case NAME:
				case DOT:
				case DEREF:
				case REF:
				case ANAME:
					puttok(ADDROF);
					addrof_cm--;
					eprint(e2);
					addrof_cm++;
					break;
				case ICALL:
				case CM:
				ec:
					eprint(e2);
					break;
				case G_CALL:
					/* & ( e, ctor() ) with temporary optimized away */
					if (e2->fct_name
					&& e2->fct_name->n_oper==CTOR) {
						addrof_cm--;
						eprint(e2);
						addrof_cm++;
						break;
					}
				default:
					error('i',"& inlineF call (%k)",e2->base);
				}
			}
			else {
				eprint(e2);
			}
			puttok(RP);
		}
		break;

	case UMINUS:
	case NOT:
	case COMPL:
		puttok(base);
		eprint(e2);
		break;
	case ADDROF:
	case G_ADDROF:
//error('d',"&%k",e2->base);
		switch (e2->base) {
		case DEREF:
			if (e2->e2 == 0) {
				e2->e1->print();
				return;
			}
			break;
		case ICALL:
			addrof_cm++;	// assumes inline expanded into ,-expression
			eprint(e2);
			addrof_cm--;
			return;
		}

		// suppress cc warning on &fct
		if (e2->tp==0 || e2->tp->base!=FCT) puttok(ADDROF);

		eprint(e2);
		break;

	case PLUS:
	case MINUS:
	case MUL:
	case DIV:
	case MOD:
	case LS:
	case RS:
	case AND:
	case OR:
	case ER:
	case ANDAND:
	case OROR:
	case ASPLUS:
	case ASMINUS:
	case ASMUL:
	case ASMOD:
	case ASDIV:
	case ASLS:
	case ASRS:
	case ASOR:
	case ASER:
	case ASAND:
	case DECR:
	case INCR:
		eprint(e1);
		puttok(base);
		eprint(e2);
		break;

	default:
		error('i',"%d->expr.print%k",this,base);
	}
}

Pexpr aval(Pname a)
{
	int argno = a->n_val;
	Pin il;
	for (il=curr_icall; il; il=il->i_next)
		if (il->i_table == a->n_table) goto aok;
	return 0;
aok:
	Pexpr aa = il->arg[argno];
/*error('d',"aval(%n) -> %k",a,aa->base);*/
ll:
	switch (aa->base) {
	case CAST:	aa = aa->e1; goto ll;
	case ANAME:	return aval(Pname(aa));
	default:	return aa;
	}
}

#define putcond()	puttok(LP); e->print(); puttok(RP)

void stmt.print()
{
	if (forced_sm) {
		forced_sm = 0;
		where.putline();
	}
/*error('d',&where,"stmt.print %d:%k s %d s_list %d",this,base,s,s_list);*/

	if (memtbl && base!=BLOCK) { /* also print declarations of temporaries */
		puttok(LC);
		Ptable tbl = memtbl;
		memtbl = 0;
		Pname n;
		int i;
		int bl = 1;
		for (n=tbl->get_mem(i=1); n; n=tbl->get_mem(++i)){
			/* avoid double declarartion of temporaries from inlines */
			char* s = n->string;
			if (s[0]!='_' || s[1]!='X') {
				n->dcl_print(0);
				bl = 0;
			}
			Pname cn;
			if (bl && (cn=n->tp->is_cl_obj()) && Pclass(cn->tp)->has_dtor()) bl = 0;
		}
/*error('d',"%d (tbl=%d) list %d",this,tbl,s_list);*/
		if (bl) {
			Pstmt sl = s_list;
			s_list = 0;
			print();
			memtbl = tbl;
			puttok(RC);
			if (sl) {
				s_list = sl;
				sl->print();
			}
		}
		else {
			print();
			memtbl = tbl;
			puttok(RC);
		}
		return;
	}

	switch (base) {
	default:
		error('i',"stmt.print(base=%k)",base);
	case ASM:
		fprintf(out_file,"asm(\"%s\");\n",(char*)e);
		break;
	case DCL:
		d->dcl_print(SM);
		break;
	case BREAK:
	case CONTINUE:
		puttok(base);
		puttok(SM);
		break;
	case DEFAULT:
		puttok(base);
		puttok(COLON);
		s->print();
		break;
	case SM:
/*if (e->base==CALL || e->base==G_CALL) error('d',"%n",(Pname)e->e1);*/
		if (e) {
			e->print();
			if (e->base==ICALL && e->e2) break;	/* a block: no SM */
		}
		puttok(SM);
		break;
	case WHILE:
		puttok(WHILE);
		putcond();
		s->print();
		break;
	case DO:
		puttok(DO);
		s->print();
		puttok(WHILE);
		putcond();
		puttok(SM);
		break;
	case SWITCH:
		puttok(SWITCH);
		putcond();
		s->print();
		break;
	case RETURN:
		if (outlined) {	// FUDGE, handle return statement of outlined inline
				// it has been simplified as an inline, that is
				// ignoring _return;
			if (e && e!=dummy) {
//error('d',"outlined %t %t => %d",outlined,e->tp,outlined != e->tp);
				if (outlined != e->tp) {
					switch (outlined->base) {
					case RPTR:
					case PTR:
						if (Pptr(outlined)->typ == Pptr(e->tp)->typ) break;
					default:
						e = new texpr(CAST,outlined,e);
					}
				}
			}
		}
		puttok(RETURN);
		if (e) e->print();
		puttok(SM);
		while (s_list && s_list->base==SM) s_list = s_list->s_list; // FUDGE!!
		break;
	case CASE:
		puttok(CASE);
		eprint(e);
		puttok(COLON);
		s->print();
		break;
	case GOTO:
		puttok(GOTO);
		d->print();
		puttok(SM);
		break;
	case LABEL:
		d->print();
		puttok(COLON);
		s->print();
		break;
	case IF:
	{	int val = QUEST;
		if (e->base == ANAME) {
			Pname a = (Pname)e;
			Pexpr arg = aval(a);
//error('d',"arg %d%k %d (%d)",arg,arg?arg->base:0,arg?arg->base:0,arg?arg->e1:0);
			if (arg)
				switch (arg->base) {
				case ZERO:	val = 0; break;
				case ADDROF:
				case G_ADDROF:	val = 1; break;
				case IVAL:	val = int(arg->e1)!=0;
			}
		}
//error('d',"val %d",val);
		switch (val) {
		case 1:
			s->print();
			break;
		case 0:
			if (else_stmt)
				else_stmt->print();
			else
				puttok(SM);	/* null statement */
			break;
		default:
			puttok(IF);
			putcond();
			if (s->s_list) {
				puttok(LC);
				s->print();
				puttok(RC);
			}
			else
				s->print();
			if (else_stmt) {
				puttok(ELSE);
				if (else_stmt->s_list) {
					puttok(LC);
					else_stmt->print();
					puttok(RC);
				}
				else
					else_stmt->print();
			}
		}
		break;
	}
	case FOR:
	{	int fi = for_init && (for_init->base!=SM || for_init->memtbl || for_init->s_list);
//error('d',"fi %d for_init %d base %d tbl %d slist %d",fi,for_init,for_init->base,for_init->memtbl,for_init->s_list);
		if (fi) {
			puttok(LC);
			for_init->print();
		}
		puttok(FOR);
		puttok(LP);
		if (fi==0 && for_init) for_init->e->print();
		putch(';');	/* to avoid newline: not puttok(SM) */
		eprint(e);
		putch(';');
		eprint(e2);
		puttok(RP);
		s->print();
	/*	if (for_init) {
		*	if (s_list) s_list->print();
			puttok(RC);
			return;*
			puttok(RC);
		}*/
		if (fi) puttok(RC);
		break;
	}
	case PAIR:
		if (s&&s2) {
			puttok(LC);
			s->print();
			s2->print();
			puttok(RC);
		}
		else {
			if (s) s->print();
			if (s2) s2->print();
		}
		break;
	case BLOCK:
		puttok(LC);
		where.putline();
		if (d) d->dcl_print(SM);
		if (memtbl && own_tbl) {
			Pname n;
			int i;
			for (n=memtbl->get_mem(i=1); n; n=memtbl->get_mem(++i)) {
				if (n->tp && n->n_union==0)
					switch (n->n_scope) {
					case ARGT:
					case ARG:
						break;
					default:
						n->dcl_print(0);
					}
			}
		}
		if (s) s->print();
		puttok(RC);
	}
	if (s_list) s_list->print();
}

void table.dcl_print(TOK s, TOK pub)
/*
	print the declarations of the entries in the order they were inserted
	ignore labels (tp==0)
*/
{
	register Pname* np;
	register int i;

	if (this == 0) return;

	np = entries;
	for (i=1; i<free_slot; i++) {
		register Pname n = np[i];
		switch (s) {
		case 0:
			n->dcl_print(0);
			break;
		case EQ:
			if (n->tp && n->n_scope == pub) n->dcl_print(0);
			break;
		case NE:
			if (n->tp && n->n_scope != pub) n->dcl_print(0);
			break;
		}
	}
}
