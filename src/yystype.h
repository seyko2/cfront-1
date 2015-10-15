/* @(#) yystype.h 1.3 1/27/86 17:49:37 */ 
/*ident	"@(#)cfront:src/yystype.h	1.3" */
typedef union {
	char*	s;
	TOK	t;
	int	i;
	loc	l;
	Pname	pn;
	Ptype	pt;
	Pexpr	pe;
	Pstmt	ps;
	PP	p;
} YYSTYPE;
extern YYSTYPE yylval;
