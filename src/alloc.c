/* @(#) alloc.c 1.3 1/27/86 17:48:32 */ 
/*ident	"@(#)cfront:src/alloc.c	1.3" */
#include "cfront.h"

extern void free(char*);
extern char *malloc(unsigned);
extern void print_free();

typedef class header HEADER;

static HEADER *morecore(unsigned);

int maxalloc = 0;	// largest object allocated

class header {	/* free block header */
public:
	HEADER	*next;	/* next free block */
	unsigned size;	/* size of this free block */
};

static HEADER base;	/* empty list to get started */
HEADER *allocp = NULL;	/* last allocated block */

void print_free()
{
	register HEADER* p, *q = 0;
	register int amount = 0;
	register int number = 0;

	for (p=allocp; q!=allocp; q=p=p->next) {
		number++;
		amount += p->size;
	}
	fprintf(stderr,"print_free: %d %d\n",number,amount*sizeof(HEADER) );
}

char *malloc(unsigned nbytes)	/* general-purpose storage allocator */
{
	register HEADER *p, *q;
	register int nunits;

	Nalloc++;
	nunits = 1+(nbytes+sizeof(HEADER)-1)/sizeof(HEADER);
	if ((q = allocp) == NULL) {	/* no free list yet */
		base.next = allocp = q = &base;
		base.size = 0;
	}
	for (p=q->next; ; q=p, p=p->next) {
		if (p->size >= nunits) {	/* big enough */
			if (p->size == nunits)	/* exactly */
				q->next = p->next;
			else {	/* allocate tail end */
				p->size -= nunits;
				p += (int)p->size;
				p->size = nunits;
			}
			allocp = q;

//error('d',"malloc(%d %d)->%d %d\n",nbytes,nunits*sizeof(HEADER),p+1,p+nunits);
			if (maxalloc < nunits) maxalloc = nunits;

			register int* x = (int*)(p+1);
	 		register int* y = (int*)(p+nunits);
			while (x < y) *--y = 0;
			return (char*) x;
		}
		if (p == allocp)  /* wrapped around free list */
			if ((p = morecore(nunits)) == NULL)
				return(NULL);	/* none left */
	}
}

#define	NALLOC	1024	/* #units to allocate at once */

static HEADER *morecore(unsigned nu)	/* ask system for memory */
{
	extern char *sbrk(int);
	register HEADER *up;
	register int rnu2;
	
	register int rnu = NALLOC * ((nu+NALLOC-1) / NALLOC);
	register char* cp = sbrk(rnu2 = rnu*sizeof(HEADER));
	Nfree_store += rnu2;
	if ((int)cp == -1) error('i',"free store exhausted");	// no space at all
	up = (HEADER*)cp;
	up->size = rnu;
	int ma = maxalloc;
	maxalloc = rnu;
	free((char*)(up+1));	// put it on the free list
	maxalloc = ma;
	return allocp;
}

int NFn, NFtn, NFbt, NFpv, NFf, NFe, NFs, NFc;

void free(char* ap)		/* put block on free list */
{
	if (ap == 0) return;

	register HEADER* p = (HEADER*)ap - 1;	/* point to header */

	if (maxalloc < p->size) error('i',"free store corrupted (%d)",ap);

	Nfree++;

if (Nspy) {
	Pname pp = (Pname) ap;
	TOK t = pp->base;
	char* s = 0;

	switch (t) {

	case INT: case CHAR: case TYPE: case VOID: case SHORT: case LONG:
	case FLOAT: case DOUBLE: case COBJ: case EOBJ: case FIELD:
			NFbt++; break;

	case PTR: case VEC:
			NFpv++; break;

	case FCT:	NFf++; break;

	case ICON: case CCON: case STRING: case FCON: case THIS:
			NFc++; break;
	}
}
	for ( register HEADER* q=allocp; !(p > q && p < q->next); q=q->next)
		if (q >= q->next && (p > q || p < q->next))
			break;	/* at one end or other */

	if (p+p->size == q->next) { /* join to upper nbr */
		p->size += q->next->size;
		p->next = q->next->next;
	} else
		p->next = q->next;
	if (q+q->size == p) {	/* join to lower nbr */
		q->size += p->size;
		q->next = p->next;
	} else
		q->next = p;
	allocp = q;
}
