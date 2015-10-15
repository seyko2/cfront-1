/* @(#) munch.c 1.5 1/27/86 17:47:58 */
/*ident	"@(#)cfront:lib/static/munch.c	1.5"*/
/*
	scan nm output and detect constructors and destructors for static objects.
	the name on an nm output line is expected to be in the right hand margin.
	the name is expected to be on the form __STD*_ or __STI*_ and less than
	100 characters long.
	nm output lines are assumed to be less than 256 characters long.
	constructors found are called by _main() called from main().
	destructors found is called by exit().
	return 0 if no constructor or destructor is found otherwise.
	The output is ?
	
*/

#include <stdio.h>
extern int strcpy(char*, char*);
extern char * strtok(char*, char*);

struct sbuf {
	sbuf* next;
	char str[100];
	sbuf(sbuf* l, char* p) {
		next=l;
#ifdef BSD
		strcpy(str,p);
#else
		strcpy(str,strtok(p," |"));
#endif
	}
};

sbuf* dtor;	// list of constructors
sbuf* ctor;	// list of destructors
main (int argc, char* argv[])
{
	char buf[256];
	register char* p;
//	int monitor = argc-1;	// -p or no argument

newline:
	p = buf;
	for(;;) {
		register char* st;
		int c;
		switch (c=getchar()) {
		case EOF:
			goto done;
		case '\n':
#ifdef BSD
			if (p[-1] != '_') goto newline;
#endif
			*p = 0;		// terminate string
			p = buf;
			while (*p++!='_') {
				if ( *p == '\0') goto newline;
			}
			for (p--; *p == '_'; p++) ;
			p--;
			st = p;
			if (st[0]!='_') goto newline;
			if (st[1]!='S') goto newline;
			if (st[2]!='T') goto newline;
			switch (st[3]) {
			case 'D':
				dtor = new sbuf(dtor,st);
				goto newline;
			case 'I':
				ctor = new sbuf(ctor,st);
				goto newline;
			default:
				goto newline;
			}
		default:
			*p++ = c;
		}
	}

done:
	int cond = dtor||ctor;

	if (cond == 0) return 0;

	printf("typedef int (*PFV)();\n");	// "int" to dodge bsd4.2 bug
	if (ctor) {
		for (sbuf* p = ctor; p; p=p->next) printf("int %s();\n",p->str);
		printf("extern PFV _ctors[];\nPFV _ctors[] = {\n");
		for (sbuf* q = ctor; q; q=q->next) printf("\t%s,\n",q->str);
		printf("\t0\n};\n");
	}

	if (dtor) {
		for (sbuf* p = dtor; p; p=p->next) printf("int %s();\n",p->str);
		printf("extern PFV _dtors[];\nPFV _dtors[] = {\n");
		for (sbuf* q = dtor; q; q=q->next) printf("\t%s,\n",q->str);
		printf("\t0\n};\n");
	}

	return 1;
}
