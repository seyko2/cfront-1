/* @(#) del.c 1.3 1/27/86 17:48:46 */ 
/*ident	"@(#)cfront:src/del.c	1.3" */
/************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T Technologies, Inc. All rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.

	
del.c:

	walk the trees to reclaim storage

**************************************************************/

#include "cfront.h"

void name.del()
{
/*fprintf(stderr,"%d->name.del: %s %d\n",this,(string)?string:"?",base);fflush(stderr);*/
	Pexpr i = n_initializer;

	NFn++;
	DEL(tp);
	if(i && i!=(Pexpr)1) DEL(i);
	n_tbl_list = name_free;
	name_free = this;
}

void type.del()
{
//fprintf(stderr,"DEL(type=%d %d)\n",this,base);
	permanent = 3;	/* do not delete twice */
	switch (base) {
	case TNAME:
	case NAME:
		error('i',"%d->T.del():N %s %d",this,((Pname)this)->string,base);
	case TYPE:
	{	Pbase b = (Pbase)this;
		break;
	}
	case FCT:
	{	Pfct f = (Pfct) this;
		DEL(f->returns);
		/*DEL(f->argtype);
*/
		break;
	}
	case VEC:
	{	Pvec v = (Pvec) this;
		DEL(v->dim);
		DEL(v->typ);
		break;
	}
	case PTR:
	case RPTR:
	{	Pptr p = (Pptr) this;
		DEL(p->typ);
		break;
	}
/*	case CLASS:
	{	Pclass cl = (Pclass)this;
		memtbl.del();
		break;
	}
	case ENUM:
	case OVERLOAD:
		break;*/
	}

	delete this;
}

void expr.del()
{
//fprintf(stderr,"DEL(expr=%d: %d %d %d)\n",this,base,e1,e2); fflush(stderr);
	permanent = 3;
	switch (base) {
	case IVAL:
		if (this == one) return;
	case ICON:
	case FCON:
	case CCON:
	case THIS:
	case STRING:
	case TEXT:
	case FVAL:
		goto dd;
	case DUMMY:
	case ZERO:
	case NAME:
		return;
	case CAST:
	case SIZEOF:
	case NEW:
	case VALUE:
		DEL(tp2);
		break;
	case REF:
	case DOT:
		DEL(e1);
		DEL(mem);
		goto dd;
	case QUEST:
		DEL(cond);
		break;
	case ICALL:
		delete il;
		goto dd;
	}

	DEL(e1);
	DEL(e2);
/*	DEL(tp);*/
dd:
	e1 = expr_free;
	expr_free = this;
	NFe++;
}

void stmt.del()
{
//fprintf(stderr,"DEL(stmt %d %s)\n",this,keys[base]); fflush(stderr);
	permanent = 3;
	switch (base) {
	case SM:
	case WHILE:
	case DO:
	case RETURN:
	case CASE:
	case SWITCH:
		DEL(e);
		break;
	case PAIR:
		DEL(s2);
		break;
	case BLOCK:
		DEL(d);
		DEL(s);
		if (own_tbl) DEL(memtbl);
		DEL(s_list);
		goto dd;
	case FOR:
		DEL(e);
		DEL(e2);
		DEL(for_init);
		break;
	case IF:
		DEL(e);
		DEL(else_stmt);
		break;
	}

	DEL(s);
	DEL(s_list);
dd:
	s_list = stmt_free;
	stmt_free = this;
	NFs++;
}

void table.del()
{
	register i;
/*fprintf(stderr,"tbl.del %s %d size=%d used=%d)\n", (t_name)?t_name->string:"?", this, size, free_slot-1); fflush(stderr);*/

	for (i=1; i<free_slot; i++) {
		Pname n = entries[i];
		if (n==0) error('i',"table.del(0)");
		if (n->n_stclass == STATIC) continue;
		switch (n->n_scope) {
		case ARG:
		case ARGT:
			break;
		default:
		{	char* s = n->string;
			if (s && (s[0]!='_' || s[1]!='X')) delete s;
			/* delete n; */
			n->del();
		}
		}
	}
	delete entries;
	delete hashtbl;
	delete this;
}
