/* @(#) error.c 1.3 1/27/86 17:48:46 */ 
/*ident	"@(#)cfront:src/error.c	1.3" */
/**************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


error.c :

	write error messages

	Until scan_started != 0 no context can be assumed

***************************************************************************/

#include "size.h"
#include "cfront.h"

int error_count;
static int no_of_warnings;
char scan_started;

#define ERRTRACE    20

static char * abbrev_tbl['Z'+1];	

extern void error_init();
void error_init()
{
	static char errbuf[BUFSIZ];
	setbuf(stderr,errbuf);

	abbrev_tbl['A'] = " argument";
	abbrev_tbl['B'] = " base";
	abbrev_tbl['C'] = " class";
	abbrev_tbl['D'] = " declaration";
	abbrev_tbl['E'] = " expression";
	abbrev_tbl['F'] = " function";
	abbrev_tbl['I'] = " initialize";
	abbrev_tbl['J'] = " J";
	abbrev_tbl['K'] = " K";
	abbrev_tbl['L'] = " list";
	abbrev_tbl['M'] = " member";
	abbrev_tbl['N'] = " name";
	abbrev_tbl['O'] = " object";
	abbrev_tbl['P'] = " pointer";
	abbrev_tbl['Q'] = " qualifie";
	abbrev_tbl['R'] = " R";
	abbrev_tbl['S'] = " statement";
	abbrev_tbl['T'] = " type";
	abbrev_tbl['U'] = " undefined";
	abbrev_tbl['V'] = " variable";
	abbrev_tbl['W'] = " W";
	abbrev_tbl['X'] = " expected";
	abbrev_tbl['Y'] = " Y";
	abbrev_tbl['Z'] = " Z";

}

#define INTERNAL 127

void ext(int/* n */)
/*
	remove temp_file and exit
*/
{
/*	if (n==INTERNAL) abort();*/
	if (error_count==0) error_count = 1;
	exit(error_count);
}

static void print_loc()
{
	loc* sl = (Cstmt) ? &Cstmt->where : 0;
	loc* dl = (Cdcl) ? &Cdcl->where : 0;

	if (sl && dl && sl->file==dl->file)	// Cstmt and Cdcl in same file
		if (sl->line<=dl->line)
			dl->put(out_file);
		else
			sl->put(out_file);
	else if (sl && sl->file == curr_file)	// Cstmt in current file
		sl->put(out_file);
	else if (dl && dl->file== curr_file)	// Cdcl in current file
		dl->put(out_file);
	else
		curloc.put(out_file);
}

static void print_context()
{
	putc('\n',out_file);
}

static char in_error = 0;
loc dummy_loc;

void yyerror(char* s)
{
	error(0,&dummy_loc,s);
}

int error(char* s ...)
{
	register* a = (int*)&s;
	return error(0,&dummy_loc, s, a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
}

int error(int t, char* s ...)
{
	register* a = (int*)&s;
	return error(t,&dummy_loc, s, a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8] );
}

int error(loc* l, char* s ...)
{
	register* a = (int*)&s;
	return error(0, l, s, a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8] );
}

int error(int t, loc* lc, char* s ...)
/*
	"int" not "void" because of "pch" in lex.c
	subsequent arguments fill in %mumble fields 

	legal error types are:
		'w'		warning	 (not counted in error count)
		'd'		debug
		's'		"not implemented" message
    		0		error 
    		'i'		internal error (causes abort)
		't'		error while printing error message
*/
{
	FILE * of = out_file;
	int c;
	char format[3];	/* used for "% mumble" sequences */
	int * a = &t;
	int argn = 3;

	/* check variable argument passing mechanism */
	int si = sizeof(int);
	int scp = sizeof(char*);
	int ssp = sizeof(Pname);

	if (si!=ssp || si!=scp || ssp!=scp || &a[2]!=(int*)&s) {
		fprintf(stderr,
			"\n%s: this c can't handle varargs (%d,%d,%d -- %d %d)\n",
			prog_name, si, scp, ssp, &a[1], &s);
		ext(12);
	}

	if (t == 'w' && warn==0) return 0;

	if (in_error++)
		if (t!='t' || 4<in_error) {
			fprintf(stderr,"\nUPS!, error while handling error\n");
			ext(13);
		}
	else if (t == 't')
		t = 'i';

	out_file = stderr;
	if (!scan_started)
		/*fprintf(out_file,"error during %s initializing: ",prog_name);*/
		putch('\n');
	else if (t=='t')
		putch('\n');
	else if (lc != &dummy_loc)
		lc->put(out_file);
	else
		print_loc();

    switch (t) {
    	case 0:
		fprintf(out_file,"error: ");
		break;
        case 'w':
		no_of_warnings++;
		fprintf(out_file,"warning: ");
		break;
        case 's':
		fprintf(out_file,"sorry, not implemented: ");
		break;
        case 'i':
		if (error_count++) {
			fprintf(out_file,"sorry, %s cannot recover from earlier errors\n",prog_name);
			ext(INTERNAL);
		}
		else
			fprintf(out_file,"internal %s error: ",prog_name);
		break;
        }

    while (c = *s++) {
	if ('A'<=c && c<='Z' && abbrev_tbl['A'])
		putstring(abbrev_tbl[c]);
	else if (c == '%')
		switch (c = *s++) {
		case 'k':
		{	TOK x = a[argn];
			if (0<x && x<MAXTOK && keys[x])
				fprintf(out_file," %s",keys[x]);
			else
				fprintf(out_file," token(%d)",x);
			argn++;
			break;
		}
		case 't':	/* Ptype */
		{	Ptype tt = (Ptype)a[argn];
			if (tt) {
				TOK pm = print_mode;
				extern int ntok;
				int nt = ntok;
				print_mode = ERROR;
				fprintf(out_file," ");
				tt->dcl_print(0);
				print_mode = pm;
				ntok = nt;
				argn++;
			}
			break;
		}
		case 'n':	/* Pname */
		{	Pname nn = (Pname)a[argn];
			if (nn) {
				TOK pm = print_mode;
				print_mode = ERROR;
				fprintf(out_file," ");
				nn->print();
				print_mode = pm;
			}
			else
				fprintf(out_file," ?");
			argn++;
			break;
		}
		default:
			format[0] = '%';
			format[1] = c;
			format[2] = '\0';
			fprintf(out_file,format,a[argn++]);
			break;
		}
		else
			putch(c);
	}

	if (!scan_started) ext(4);

	switch (t) {
	case 'd':
	case 't':
	case 'w':
		putch('\n');
		break;
	default:
		print_context();
	}
	fflush(stderr);
    /* now we may want to carry on */

	out_file = of;

	switch (t) {
	case 't':
		if (--in_error) return 0;
	case 'i': 
		ext(INTERNAL);
	case 0:
	case 's':
		if (MAXERR<++error_count) {
			fprintf(stderr,"Sorry, too many errors\n");
			ext(7);
		}
	}

	in_error = 0;
	return 0;
}
