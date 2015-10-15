/* @(#) table.c 1.3 1/27/86 17:49:32 */ 
/*ident	"@(#)cfront:src/table.c	1.3" */
#include "cfront.h"

char * keys[MAXTOK];
/*
	keys[]  holds the external form for tokens with fixed representation 
	illegal tokens and those with variable representation have 0 entries
*/

/*
	the class table functions assume that new initializes store to 0
*/

table.table(short sz, Ptable nx, Pname n)
/*
	create a symbol table with "size" entries
	the scope of table is enclosed in the scope of "nx"

	both the vector of class name pointers and the hash table
	are initialized containing all zeroes
	
	to simplify hashed lookup entries[0] is never used
	so the size of "entries" must be "size+1" to hold "size" entries
*/
{
	base = TABLE;
	t_name = n;
	size = sz = (sz<=0) ? 2 : sz+1;
	entries = new Pname[sz];
	hashsize = sz = (sz*3)/2;
	hashtbl = new short[sz];
	next = nx;
	free_slot = 1;
/* fprintf(stderr,"table.table %d %s %d\n", this, (n)?n->string:"?", size); fflush(stderr);*/
} 


Pname table.look(char* s, TOK k)
/*
	look for "s" in table, ignore entries which are not of "k" type
	look and insert MUST be the same lookup algorithm
*/
{
	Ptable t;
	register char * p;
	register char * q;
	register int i;
	Pname n;
	int rr;

	if (s == 0) error('i',"%d->look(0)",this);
	if (this == 0) error('i',"0->look(%s)",s);
	if (base != TABLE) error('i',"(%d,%d)->look(%s)",this,base,s);

	/* use simple hashing with linear search for overflow */

	p = s;
	i = 0;
	while (*p) i += (i + *p++); /* i<<1 ^ *p++ better?*/
	rr = (0<=i) ? i : -i;

	for (t=this; t; t=t->next) {	
		/* in this and all enclosing scopes look for name "s" */
		Pname* np = t->entries;
		int mx = t->hashsize;
		short* hash = t->hashtbl;
		int firsti = i = rr%mx;

		do {			
			if (hash[i] == 0) goto not_found;
			n = np[hash[i]];
			if (n == 0) error('i',"hashed lookup");
			p = n->string;		/* strcmp(n->n_string,s) */
			q = s;
			while (*p && *q)
				if (*p++ != *q++) goto nxt;
			if (*p == *q) goto found;
		nxt:
			if (mx <= ++i) i = 0;		/* wrap around */
		} while (i != firsti);

	found:
		for (; n; n=n->n_tbl_list){	/* for  all name "s"s look for a key match */
			if (n->n_key == k) return n;
		}

	not_found:;
	}

	return 0;	/* not found && no enclosing scope */
}

bit Nold;	/* non-zero if last insert() failed */

Pname table.insert(Pname nx, TOK k)
/*
	the lookup algorithm MUST be the same as look
	if nx is found return the older entry otherwise a copy of nx;
	Nold = (nx found) ? 1 : 0;
*/
{
	register char * p;
	register int i;
	Pname n;
	Pname* np = entries;
	Pname* link;
	int firsti;
	int mx = hashsize;
	short* hash = hashtbl;
	char* s = nx->string;

	if (s==0) error('i',"%d->insert(0,%d)",this,k);
	nx->n_key = k;
	if (nx->n_tbl_list || nx->n_table) error('i',"%n in two tables",nx);
	/* use simple hashing with linear search for overflow */

	p = s;
	i = 0;
	while (*p) i += (i + *p++);
	if (i<0) i = -i;
	firsti = i = i%mx;

	do {	/* look for name "s" */
		if (hash[i] == 0) {
			hash[i] = free_slot;
			goto add_np;
		}
		n = np[hash[i]];
		if (n == 0) error('i',"hashed lookup");
		if (strcmp(n->string,s) == 0) goto found;
/*
		p = n->string;
		q = s;
		while (*p && *q) if (*p++ != *q++) goto nxt;
		if (*p == *q) goto found;
	nxt:
*/
		if (mx <= ++i) i = 0;	/* wrap around */
	} while (i != firsti);

	error("N table full");

found:	


	forever {
		if (n->n_key == k) { Nold = 1; return n; }

		if (n->n_tbl_list)
			n = n->n_tbl_list;
		else {
			link = &(n->n_tbl_list);
			goto re_allocate;
		}
	}

add_np:
	if (size <= free_slot) {
		grow(2*size);
		return insert(nx,k);
	}

	link = &(np[free_slot++]);

re_allocate:
	{	
		Pname nw = new class name(0);
		*nw = *nx;

		{
			int ll = strlen(s)+1;
			char *ps = new char[ll];
/*fprintf(stderr,"tbl.cpy %s sz=%d %d->%d\n", s, ll, s, ps); fflush(stderr);*/
			strcpy(ps,s);	/*	copy string to safer store */
			Nstr++;
			nw->string = ps;
		}

		nw->n_table = this;
		*link = nw;
		Nold = 0;
		Nname++;
		return nw;
	}
}

void table.grow(int g)
{
	short* hash;
	register int j;
	int mx; 
	register Pname* np;
	Pname n;

	if (g <= free_slot) error('i',"table.grow(%d,%d)",g,free_slot);
	if (g <= size) return;
/* fprintf(stderr,"tbl.grow %d %s %d->%d\n", this, (t_name)?t_name->string:"?", size, g+1); fflush(stderr); */
	size = mx = g+1;

	np = new Pname[mx];
	for (j=0; j<free_slot; j++) np[j] = entries[j];
	delete entries;
	entries = np;

	delete hashtbl;
	hashsize = mx = (g*3)/2;;
	hash = hashtbl = new short[mx];

	for (j=1; j<free_slot; j++) {	/* rehash(np[j]); */
		char * s = np[j]->string;
		register char * p;
		char * q;
		register int i;
		int firsti;

		p = s;
		i = 0;
		while (*p) i += (i + *p++);
		if (i<0) i = -i;
		firsti = i = i%mx;

		do {	/* look for name "s" */
			if (hash[i] == 0) {
				hash[i] = j;
				goto add_np;
			}
			n = np[hash[i]];
			if (n == 0) error('i',"hashed lookup");
			p = n->string;	/* strcmp(n->n_string,s) */
			q = s;
			while (*p && *q) if (*p++ != *q++) goto nxt;
			if (*p == *q) goto found;
		nxt:
			if (mx <= ++i) i = 0;	/* wrap around */
		} while (i != firsti);

		error('i',"rehash??");

	found:
		error('i',"rehash failed");

	add_np:;
	}
}

Pclass Ebase;
Pclass Epriv;	/* extra return values from lookc() */

Pname table.lookc(char* s, TOK)
/*
	like look().

	look and insert MUST be the same lookup algorithm

*/
{
	Ptable t;
	register char * p;
	register char * q;
	register int i;
	Pname n;
	int rr;

	if (s == 0) error('i',"%d->look(0)",this);
	if (this == 0) error('i',"0->look(%s)",s);
	if (base != TABLE) error('i',"(%d,%d)->look(%s)",this,base,s);

	Ebase = 0;
	Epriv = 0;

	/* use simple hashing with linear search for overflow */

	p = s;
	i = 0;
	while (*p) i += (i + *p++);
	rr = (0<=i) ? i : -i;

	for (t=this; t; t=t->next) {	
		/* in this and all enclosing scopes look for name "s" */
		Pname* np = t->entries;
		int mx = t->hashsize;
		short* hash = t->hashtbl;
		int firsti = i = rr%mx;
		Pname tname = t->t_name;

		do {			
			if (hash[i] == 0) goto not_found;
			n = np[hash[i]];
			if (n == 0) error('i',"hashed lookup");
			p = n->string;		/* strcmp(n->n_string,s) */
			q = s;
			while (*p && *q)
				if (*p++ != *q++) goto nxt;
			if (*p == *q) goto found;
		nxt:
			if (mx <= ++i) i = 0;		/* wrap around */
		} while (i != firsti);

	found:
		do {	// for  all name "s"s look for a key match
			if (n->n_key == 0) {
				if (tname) {
					if (n->base == PUBLIC)
						n = n->n_qualifier;
					else if (n->n_scope == 0)
						Epriv = (Pclass)tname->tp;
				}
				return n;
			}
		} while (n=n->n_tbl_list);


	not_found:
		if (tname) {
			Pclass cl = (Pclass)tname->tp;
			if (cl && cl->clbase && cl->pubbase==0) Ebase = (Pclass)cl->clbase->tp;
		}
	}

	Ebase = Epriv = 0;
	return 0;	/* not found && no enclosing scope */
}


Pname table.get_mem(int i)
/*
	return a pointer to the i'th entry, or 0 if it does not exist
*/
{
	return (i<=0 || free_slot<=i) ? 0 : entries[i];
}

void new_key(char* s, TOK toknum, TOK yyclass)
/*
	make "s" a new keyword with the representation (token) "toknum"
	"yyclass" is the yacc token (for example new_key("int",INT,TYPE); )
	"yyclass==0" means yyclass=toknum;
*/
{
	Pname n = new class name(s);
	Pname nn = ktbl->insert(n,0);
	if (Nold) error("keyword %sD twice",s);
	nn->base = toknum;
	nn->syn_class = (yyclass) ? yyclass : toknum;
	keys[(toknum==LOC)?yyclass:toknum] = s;
	delete n;
}
