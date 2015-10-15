/* @(#) norm2.c 1.3 1/27/86 17:49:18 */ 
/*ident	"@(#)cfront:src/norm2.c	1.3" */
/************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


norm2.c:

	"normalization" handles problems which could have been handled
	by the syntax analyser; but has not been done. The idea is
	to simplify the grammar and the actions accociated with it,
	and to get a more robust error handling

****************************************************************************/

#include "cfront.h"
#include "size.h"
extern char* malloc(int);

fct.fct(Ptype t, Pname arg, TOK known)
{
	Nt++;
	base = FCT;
	nargs_known = known;
	returns = t;
	argtype = arg; 
/*fprintf(stderr,"fct t %d %d arg %d %d -> %d\n",t, t?t->base:0, arg, arg?arg->base:0, this);*/

	if (arg==0 || arg->base==ELIST) return;

	register Pname n;
	for (n=arg; n; n=n->n_list) {
		switch (n->tp->base) {
		case VOID:
			argtype = 0;
			nargs = 0;
			nargs_known = 1;
			if (n->string)
				error("voidFA%n",n);
			else if (nargs || n->n_list) {
				error("voidFA");
				nargs_known = 0;
			}
			break;
		case CLASS:
		case ENUM:
			break;
		default:
			nargs++;
		}
	}
}

Pexpr expr_free;
#define EBITE 250

expr.expr(TOK ba, Pexpr a, Pexpr b)
{
	register Pexpr p;

	if (this) goto ret;

	if ( (p=expr_free) == 0 ) {
		register Pexpr q = (Pexpr) malloc(EBITE*sizeof(class expr));
		for (p=expr_free=&q[EBITE-1]; q<p; p--) p->e1 = p-1;
		(p+1)->e1 = 0;
/*fprintf(stderr, "malloc %d expr_free=%d p+1=%d\n", EBITE*sizeof(class expr), expr_free, p+1);*/
	}
	else
		expr_free = p->e1;

	/* beware of alignment differences */
	if ( sizeof(expr)&1 ) {
		register char* pp = (char*)(p+1);
		while ( (char*)p<pp) *--pp = 0;
	}
	else if (sizeof(expr)&2 ) {
		register short* pp = (short*)(p+1);
		while ( (short*)p<pp ) *--pp = 0;
	}
	else {
		register int* pp = (int*)(p+1);
		while ( (int*)p<pp ) *--pp = 0;
	}

	this = p;
/*fprintf(stderr,"expr.ctor(%d,%d,%d)->%d\n",ba,a,b,this); fflush(stderr);*/

ret:
	Ne++;
	base = ba;
	e1 = a;
	e2 = b;
}

expr.~expr()
{
	NFe++;
/*fprintf(stderr,"%d->expr.dtor(%d %d %d)\n",this,base,e1,e2); */
	e1 = expr_free;
	expr_free = this;
	this = 0;
}

Pstmt stmt_free;
#define SBITE 250

stmt.stmt(TOK ba, loc ll, Pstmt a)
{
	register Pstmt p;

	if ( (p=stmt_free) == 0 ) {
		register Pstmt q = (Pstmt) malloc(SBITE*sizeof(class stmt));
		for (p=stmt_free=&q[SBITE-1]; q<p; p--) p->s_list = p-1;
		(p+1)->s_list = 0;
	}
	else
		stmt_free = p->s_list;

	/* beware of alignment differences */
	if ( sizeof(stmt)&1 ) {
		register char* pp = (char*)(p+1);
		while ( (char*)p<pp) *--pp = 0;
	}
	else if (sizeof(stmt)&2 ) {
		register short* pp = (short*)(p+1);
		while ( (short*)p<pp ) *--pp = 0;
	}
	else {
		register int* pp = (int*)(p+1);
		while ( (int*)p<pp ) *--pp = 0;
	}

	this = p;

	Ns++;
	base=ba;
	where = ll;
	s=a;
}

stmt.~stmt()
{
	NFs++;
	s_list = stmt_free;
	stmt_free = this;
	this = 0;
}

classdef.classdef(TOK b, Pname n)
{
	base = CLASS;
	csu = b;
	pubmem = n;
	memtbl = new table(CTBLSIZE,0,0);
}

basetype.basetype(TOK b, Pname n)
{
/*fprintf(stderr,"%d->basetype.basetype(%d %d)\n",this,b,n);*/
	Nbt++;
	switch (b) {
	case 0:				break;
	case TYPEDEF:	b_typedef = 1;	break;
	case INLINE:	b_inline = 1;	break;
	case VIRTUAL:	b_virtual = 1;	break;
	case CONST:	b_const = 1;	break;
	case UNSIGNED:	b_unsigned = 1;	break;
	case FRIEND:
	case OVERLOAD:
	case EXTERN:
	case STATIC:
	case AUTO:
	case REGISTER:	b_sto = b;	break;
	case SHORT:	b_short = 1;	break;
	case LONG:	b_long = 1;	break;
	case ANY:
	case ZTYPE:
	case VOID:
	case CHAR:
	case INT:
	case FLOAT:
	case DOUBLE:	base = b; 	break;
	case TYPE:
	case COBJ:
	case EOBJ:
	case FIELD:
	case ASM:
		base = b;
		b_name = n;
		break;
	default:
		error('i',"badBT:%k",b);
	}
}

#define NBITE 250
Pname name_free;

name.name(char* s) : (NAME,0,0)
{
	register Pname p;

	if ( (p=name_free) == 0 ) {
		register Pname q = (Pname) malloc(NBITE*sizeof(class name));
		for (p=name_free=&q[NBITE-1]; q<p; p--) p->n_tbl_list = p-1;
		(p+1)->n_tbl_list = 0;
/*fprintf(stderr, "malloc %d name_free=%d p+1=%d\n", NBITE*sizeof(class name), name_free, p+1); */
	}
	else
		name_free = p->n_tbl_list;

	/* beware of alignment differences */
	if ( sizeof(name)&1 ) {
		register char* pp = (char*)(p+1);
		while ( (char*)p<pp) *--pp = 0;
	}
	else if (sizeof(name)&2 ) {
		register short* pp = (short*)(p+1);
		while ( (short*)p<pp ) *--pp = 0;
	}
	else {
		register int* pp = (int*)(p+1);
		while ( (int*)p<pp ) *--pp = 0;
	}

	this = p;
//fprintf(stderr,"%d: new name %s %d ll %d bl %d\n",this,s,base,lex_level,bl_level);

	Nn++;
	string = s;
	where = curloc;
	lex_level = bl_level;
}


name.~name()
{
	NFn++;
/*fprintf(stderr,"delete %d: %s %d\n",this,string,base);*/
	n_tbl_list = name_free;
	name_free = this;
	this = 0;
}


nlist.nlist(Pname n)
{
	Pname nn;

	if (n==0) error('i',"nlist.nlist(0)");

	head = n;
	for (nn=n; nn->n_list; nn=nn->n_list);
	tail = nn;
	Nl++;
}

void nlist.add_list(Pname n)
{
	if (n->tp->defined & IN_ERROR) return;
	Pname nn;

	tail->n_list = n;
	for (nn=n; nn->n_list; nn=nn->n_list);
	tail = nn;
}

int NFl;

Pname name_unlist(class nlist * l)
{
	Pname n;
	if (l == 0) return 0;
	n = l->head;
	NFl++;
	delete l;
	return n;
}

Pstmt stmt_unlist(class slist * l)
{
	Pstmt s;
	if (l == 0) return 0;
	s = l->head;
	NFl++;
	delete l;
	return s;
}

Pexpr expr_unlist(class elist * l)
{
	Pexpr e;
	if (l == 0) return 0;
	e = l->head;
	NFl++;
	delete l;
	return e;
}
