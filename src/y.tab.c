
# line 43 "gram.y"
#include "size.h"
#include "cfront.h"

#define YYMAXDEPTH 300
extern int yyparse();

Pbase defa_type;
Pbase moe_type;
Pexpr dummy;
Pexpr zero;

Pclass ccl;
int cdi = 0;
static Pname cd = 0, cd_vec[BLMAX];
static char stmt_seen = 0, stmt_vec[BLMAX];
Plist modified_tn = 0;
static Plist tn_vec[BLMAX];

Pname sta_name = (Pname)&sta_name;

extern TOK back;
TOK back;
#define lex_unget(x) back = x

#define Ndata(a,b)	Pname(b)->normalize((Pbase)a,0,0)
#define Ncast(a,b)	Pname(b)->normalize((Pbase)a,0,1)
#define Nfct(a,b,c)	Pname(b)->normalize((Pbase)a,(Pblock)c,0)
#define Ntype(p)	Pname(p)->tp
#define Nstclass(p)	Pname(p)->n_stclass
#define Nlist(p)	Pname(p)->n_list
#define Ncopy(n)	(Pname(n)->base==TNAME)?new name(Pname(n)->string):Pname(n)
#define Nhide(n)	Pname(n)->hide()

#define fieldN(e)	new basetype(FIELD,(Pname)e)
#define enumdefN(m)	new enumdef(m)
#define Fargtype(p)	Pfct(p)->argtype
#define Finit(p)	Pfct(p)->f_init
#define Finline(p)	Pfct(p)->f_inline = 1
#define Fargdcl(p,q,r)	Pfct(p)->argdcl(q,r)
#define Freturns(p)	Pfct(p)->returns
#define fctN(t,a,k)	new fct(t,a,k)
#define vecN(e)		new vec(0,e)
#define Vtype(v)	Pvec(v)->typ
#define Ptyp(p)		Pptr(p)->typ

#define conN(t,v)	new expr(t,(Pexpr)v,0)

#define nlistN(n)	(PP)new nlist((Pname)n)
#define Nadd(l,n)	((class nlist *)l)->add((Pname)n)
#define Nadd_list(l,n)  ((class nlist *)l)->add_list((Pname)n)
#define Nunlist(l)	name_unlist((nlist*)l)
#define slistN(s)	(PP)new slist((Pstmt)s)
#define Sadd(l,s)	((slist*)l)->add((Pstmt)s)
#define Sunlist(l)	stmt_unlist((slist*)l)
#define Eadd(l,e)	((elist*)l)->add((Pexpr)e)
#define Eunlist(l)	expr_unlist((elist*)l)

		/* avoid redefinitions */
#undef EOFTOK
#undef ASM
#undef BREAK
#undef CASE
#undef CONTINUE
#undef DEFAULT
#undef DELETE
#undef DO
#undef ELSE
#undef ENUM
#undef FOR
#undef FORTRAN
#undef GOTO
#undef IF
#undef NEW
#undef OPERATOR
#undef PUBLIC
#undef RETURN
#undef SIZEOF
#undef SWITCH
#undef THIS
#undef WHILE
#undef LP
#undef RP
#undef LB
#undef RB
#undef REF
#undef DOT	
#undef NOT	
#undef COMPL	
#undef MUL	
#undef AND	
#undef PLUS	
#undef MINUS	
#undef ER	
#undef OR	
#undef ANDAND
#undef OROR
#undef QUEST
#undef COLON
#undef ASSIGN
#undef CM
#undef SM	
#undef LC	
#undef RC
#undef ID
#undef STRING
#undef ICON
#undef FCON	
#undef CCON	
#undef ZERO
#undef ASOP
#undef RELOP
#undef EQUOP
#undef DIVOP
#undef SHIFTOP
#undef ICOP
#undef TYPE
#undef TNAME
#undef EMPTY
#undef NO_ID
#undef NO_EXPR
#undef ELLIPSIS
#undef AGGR
#undef MEM
#undef CAST
#undef ENDCAST

Pname syn()
{
	return (Pname) yyparse();
}


# line 176 "gram.y"
typedef union  {
	char*	s;
	TOK	t;
	int	i;
	loc	l;
	Pname	pn;
	Ptype	pt;
	Pexpr	pe;
	Pstmt	ps;
	Pbase	pb;
	PP	p;	/* fudge: pointer to all class node objects
				neccessary only because unions of class
				pointers are not implemented by cpre
			*/
} YYSTYPE;

# line 192 "gram.y"
extern YYSTYPE yylval;
# define EOFTOK 0
# define ASM 1
# define BREAK 3
# define CASE 4
# define CONTINUE 7
# define DEFAULT 8
# define DELETE 9
# define DO 10
# define ELSE 12
# define ENUM 13
# define FOR 16
# define FORTRAN 17
# define GOTO 19
# define IF 20
# define NEW 23
# define OPERATOR 24
# define PUBLIC 25
# define RETURN 28
# define SIZEOF 30
# define SWITCH 33
# define THIS 34
# define WHILE 39
# define LP 40
# define RP 41
# define LB 42
# define RB 43
# define REF 44
# define DOT 45
# define NOT 46
# define COMPL 47
# define MUL 50
# define AND 52
# define PLUS 54
# define MINUS 55
# define ER 64
# define OR 65
# define ANDAND 66
# define OROR 67
# define QUEST 68
# define COLON 69
# define ASSIGN 70
# define CM 71
# define SM 72
# define LC 73
# define RC 74
# define CAST 113
# define ENDCAST 122
# define ID 80
# define STRING 81
# define ICON 82
# define FCON 83
# define CCON 84
# define ZERO 86
# define ASOP 90
# define RELOP 91
# define EQUOP 92
# define DIVOP 93
# define SHIFTOP 94
# define ICOP 95
# define TYPE 97
# define TNAME 123
# define EMPTY 124
# define NO_ID 125
# define NO_EXPR 126
# define ELLIPSIS 155
# define AGGR 156
# define MEM 160
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
YYSTYPE yylval, yyval;
typedef int yytabelem;
# define YYERRCODE 256

# line 1256 "gram.y"


yytabelem yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
-1, 30,
	71, 20,
	72, 20,
	-2, 19,
-1, 43,
	155, 231,
	-2, 178,
-1, 49,
	155, 231,
	-2, 178,
-1, 221,
	1, 126,
	3, 126,
	4, 126,
	7, 126,
	8, 126,
	9, 126,
	10, 126,
	13, 126,
	16, 126,
	19, 126,
	20, 126,
	23, 126,
	24, 126,
	28, 126,
	30, 126,
	33, 126,
	34, 126,
	39, 126,
	40, 126,
	46, 126,
	47, 126,
	50, 126,
	52, 126,
	54, 126,
	55, 126,
	64, 126,
	65, 126,
	66, 126,
	67, 126,
	68, 126,
	70, 126,
	71, 126,
	72, 126,
	73, 126,
	113, 126,
	80, 126,
	81, 126,
	82, 126,
	83, 126,
	84, 126,
	86, 126,
	90, 126,
	91, 126,
	92, 126,
	93, 126,
	94, 126,
	95, 126,
	97, 126,
	123, 126,
	156, 126,
	160, 126,
	-2, 0,
-1, 249,
	72, 51,
	-2, 100,
-1, 250,
	72, 50,
	-2, 64,
	};
# define YYNPROD 237
# define YYLAST 1502
yytabelem yyact[]={

   351,    44,   372,   338,    42,   341,     5,   137,   342,     6,
    16,   104,   133,   223,   290,    50,   298,   164,    48,    60,
   287,   233,    61,   201,   204,   118,   136,   163,    49,   199,
    45,    10,   200,    46,   343,    89,    50,   217,    14,    48,
   102,    91,   377,    92,   139,    23,   144,   129,   318,    59,
   139,   153,   296,   227,   334,    54,   256,    23,    50,    94,
    50,    48,   145,    48,    38,    20,    92,   289,    22,    87,
    95,    21,    86,   131,   285,   141,    35,   388,   224,    96,
    22,   141,    36,   229,    90,   381,    93,   165,   357,   178,
   146,    92,   307,   176,   177,   158,   155,   364,   159,   139,
   162,   250,   174,   129,   379,   317,   171,   221,    92,    93,
   127,   300,   128,    53,   178,   191,   166,   406,   225,   127,
   216,   206,   207,   208,   209,   210,   211,   212,   213,   131,
    92,    27,   184,   217,    93,    27,   230,    27,   168,   203,
   205,   139,   167,   370,   249,    17,    23,   218,    47,   200,
   219,    93,   240,   231,   255,   239,    52,   184,   292,   215,
    99,   100,    18,   220,   172,   313,   126,   228,    24,    22,
    25,   257,    24,    93,    25,   126,   259,   260,   261,   262,
   263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
   273,   274,   244,   275,   254,   276,   139,    35,   299,   139,
   139,    54,    15,    36,   248,   258,   242,    35,   277,   281,
   170,   282,   283,    36,    27,    33,   247,   246,   279,    19,
   236,    19,   278,   280,    45,   139,   286,    27,    23,   154,
    24,   139,    25,   252,   203,   308,   316,   301,   306,   293,
   252,   232,   284,   251,   253,    13,   205,   132,    51,    27,
   158,    22,   309,   159,   315,   162,   305,   310,   311,   295,
   234,   141,   245,    43,    24,    45,    25,   149,   152,    35,
   314,    35,   101,   141,    28,    36,   202,    36,    28,   304,
    28,   312,   148,    27,   147,    51,    45,   235,    24,   328,
    25,   241,   331,    45,    43,    40,    45,    43,    19,    45,
   154,   330,   398,   139,   383,   325,   332,   333,   326,   329,
   139,    33,   308,   308,   358,   360,   335,   362,   158,   336,
   365,   159,   361,   162,   132,   359,   292,    98,    43,   150,
    45,   328,   366,    19,   331,   331,    24,   232,    25,   130,
   195,   368,   194,   327,   196,   197,   330,   324,   374,   288,
   376,   291,   367,    45,   323,   380,   322,    28,   303,   132,
   363,    45,   238,   226,   169,   385,   151,    19,   384,   387,
    28,   373,   386,   375,   390,   371,   389,   302,   391,   395,
   393,   235,   235,   198,    29,   405,   397,    41,   399,   160,
     7,   396,    28,   132,   378,   193,   401,   394,   402,   392,
   404,   382,   408,   407,   161,     8,   178,   409,   410,   297,
   176,   177,   412,   340,   134,   352,   349,   414,    97,   353,
   350,   103,   356,   138,    83,    27,    28,   135,   346,   339,
   337,   355,   344,    31,   288,   107,   127,   291,   291,   157,
   354,    88,   116,    27,    26,   347,   125,   185,   183,   184,
   182,   345,   119,    12,    23,     1,   222,     2,   113,   114,
     0,     0,   109,     0,   110,     0,   112,   111,     0,     0,
    18,     0,     0,     0,     0,     0,     0,    22,     0,     0,
    24,     0,    25,     0,     0,   221,   369,     0,     0,     0,
     0,     0,   348,   123,   121,   122,   124,    11,   120,    39,
     0,     0,    32,     0,     0,     0,     0,   115,    30,   142,
    37,   340,     0,   352,   349,    55,    57,   353,   350,   103,
   356,     0,     0,    27,     0,   108,   346,    33,     0,   355,
   344,     0,   178,   107,   127,   143,   176,   177,   354,     0,
   116,   178,    27,   347,   125,   176,   177,     0,     0,   345,
   119,     0,     0,    34,    23,     0,   113,   114,     0,     0,
   109,     0,   110,     0,   112,   111,     0,     0,    28,   236,
    18,     0,   117,   185,     0,   184,   182,    22,     0,    24,
    24,    25,    25,   221,   184,   182,    28,     0,     0,     0,
   348,   123,   121,   122,   124,     0,   120,   173,     0,    39,
   103,     0,     0,     0,    27,   115,     0,   142,     0,   234,
    37,     0,     0,     0,   107,   127,     0,     0,     0,     0,
     0,   116,     0,   108,     0,   125,    33,     0,     0,   173,
     0,   119,     0,   143,    23,    23,     0,   113,   114,     0,
     0,   109,     0,   110,     0,   112,   111,     0,     0,     0,
    18,    18,   232,    58,     0,     0,     0,    22,    22,     0,
    24,    24,    25,    25,   140,     0,    28,     0,     0,     0,
   117,   126,   123,   121,   122,   124,     0,   120,     0,     0,
     0,   103,     0,     0,     0,    28,   115,     0,   142,     0,
    15,    15,     0,     0,     0,   107,   127,     0,     0,     0,
     0,     0,   116,     0,   108,     0,   125,     0,     0,     0,
     0,     0,   119,     0,   143,     0,     0,     0,   113,   114,
     0,     0,   109,     0,   110,     0,   112,   111,     0,     0,
     0,     0,     0,    58,    56,     0,     0,   178,     0,   179,
     0,   176,   177,     0,     0,   140,     0,    28,     0,     0,
     0,   117,   126,   123,   121,   122,   124,     0,   120,     0,
     0,     0,   103,     0,     0,     0,     0,   115,     0,   105,
     0,     0,     0,     4,     9,     0,   107,   127,   185,   183,
   184,   182,     0,   116,     0,   108,    27,   125,     0,     0,
     0,     0,     0,   119,     0,   106,     0,    23,     0,   113,
   114,     0,     0,   109,     0,   110,     0,   112,   111,     0,
     0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
    22,     0,     0,    24,     0,    25,     0,     0,     0,     0,
     0,     0,   117,   126,   123,   121,   122,   124,     0,   120,
   107,   127,     0,     0,     0,     3,     0,   116,   115,     0,
   105,   125,     0,    15,     0,     0,     0,   119,     0,   192,
     0,     0,     0,   113,   114,     0,   108,   109,     0,   110,
    19,   112,   111,     0,     0,   178,   106,   179,     0,   176,
   177,   178,     0,   179,     0,   176,   177,     0,     0,   181,
   180,   186,   187,   190,     0,   181,    13,   126,   123,   121,
   122,   124,     0,   120,   107,   127,     0,     0,     0,     0,
     0,   116,   115,   117,   105,   125,   185,   183,   184,   182,
     0,   119,   185,   183,   184,   182,     0,   113,   114,    28,
   108,   109,     0,   110,     0,   112,   111,     0,     0,   178,
   106,   179,     0,   176,   177,     0,     0,     0,     0,   107,
   127,     0,     0,   181,   180,   186,   116,     0,     0,     0,
   125,   126,   123,   121,   122,   124,   119,   120,   107,   127,
     0,     0,   113,   114,     0,   116,   115,   117,   105,   125,
   185,   183,   184,   182,     0,   119,     0,     0,     0,     0,
     0,   113,   114,     0,   108,   109,     0,   110,     0,   112,
   111,     0,     0,     0,   106,     0,   126,   123,   121,   122,
   124,     0,   120,     0,     0,     0,     0,     0,     0,     0,
     0,   115,     0,   105,     0,   126,   123,   121,   122,   124,
     0,   120,    27,     0,     0,     0,     0,     0,     0,   108,
   115,   117,   105,    23,   156,     0,    82,     0,     0,   106,
     0,     0,     0,     0,     0,     0,     0,     0,   214,    18,
    81,     0,     0,     0,     0,     0,    22,     0,   106,    24,
     0,    25,     0,     0,     0,     0,     0,    74,     0,    75,
     0,     0,     0,    76,    77,     0,   117,    64,     0,    65,
     0,    62,    63,     0,     0,     0,     0,     0,     0,    15,
     0,    67,    66,    72,    73,   117,     0,    80,     0,     0,
     0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    79,    71,    69,
    70,    68,    78,     0,    84,     0,     0,     0,   413,     0,
     0,     0,    13,     0,     0,     0,     0,   178,     0,   179,
     0,   176,   177,     0,     0,     0,     0,     0,     0,     0,
    85,   181,   180,   186,   187,   190,     0,   175,   189,     0,
     0,     0,     0,     0,     0,    28,     0,     0,   178,     0,
   179,     0,   176,   177,     0,     0,     0,   188,   185,   183,
   184,   182,   181,   180,   186,   187,   190,     0,   175,   189,
   411,     0,     0,     0,     0,     0,     0,     0,     0,   178,
     0,   179,     0,   176,   177,     0,     0,     0,   188,   185,
   183,   184,   182,   181,   180,   186,   187,   190,   403,   175,
   189,   400,     0,     0,     0,     0,     0,     0,     0,     0,
   178,     0,   179,     0,   176,   177,     0,     0,     0,   188,
   185,   183,   184,   182,   181,   180,   186,   187,   190,     0,
   175,   189,     0,     0,   321,     0,     0,     0,     0,     0,
     0,   178,     0,   179,     0,   176,   177,     0,     0,     0,
   188,   185,   183,   184,   182,   181,   180,   186,   187,   190,
     0,   175,   189,     0,     0,   320,     0,     0,     0,     0,
     0,     0,   178,     0,   179,     0,   176,   177,     0,     0,
     0,   188,   185,   183,   184,   182,   181,   180,   186,   187,
   190,     0,   175,   189,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   178,     0,   179,     0,   176,   177,     0,
     0,     0,   188,   185,   183,   184,   182,   181,   180,   186,
   187,   190,   319,   175,   189,   294,     0,     0,     0,     0,
     0,     0,     0,     0,   178,     0,   179,     0,   176,   177,
     0,     0,     0,   188,   185,   183,   184,   182,   181,   180,
   186,   187,   190,     0,   175,   189,     0,     0,   237,     0,
     0,     0,     0,     0,     0,   178,     0,   179,     0,   176,
   177,     0,     0,     0,   188,   185,   183,   184,   182,   181,
   180,   186,   187,   190,     0,   175,   189,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   178,     0,   179,     0,
   176,   177,     0,     0,     0,   188,   185,   183,   184,   182,
   181,   180,   186,   187,   190,     0,   175,   189,     0,   178,
     0,   179,     0,   176,   177,     0,     0,   178,     0,   179,
     0,   176,   177,   181,   180,     0,   188,   185,   183,   184,
   182,   181,   180,   186,   187,   190,     0,   175,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   185,   183,   184,   182,     0,     0,     0,   188,   185,   183,
   184,   182 };
yytabelem yypact[]={

   773, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,   344,
   430,   223, -1000,   -12, -1000,   240,    33,   611,   610, -1000,
 -1000, -1000,   -74,  1037,   -25,   -28, -1000,    11,   -14,    -2,
   257,    89, -1000, -1000,   -12, -1000, -1000,   203, -1000,   753,
 -1000,   270, -1000,   591, -1000,   753, -1000, -1000, -1000,   591,
 -1000,   204,   237,   222, -1000,   254,   -12,   288,   -12, -1000,
 -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
 -1000, -1000, -1000, -1000,   325,   225, -1000, -1000, -1000, -1000,
 -1000, -1000, -1000,   238, -1000, -1000, -1000, -1000,    22,  1019,
     7,    43, -1000, -1000, -1000,    69,   323,   270,   672,   530,
 -1000,   753,  1407,   817,   300,   343,   -11,   236,   201,   881,
   881,   881,   881,   881,   881,   881,   945,   -37, -1000,   753,
 -1000, -1000, -1000, -1000, -1000, -1000,  -123,  1037,    34, -1000,
    38,   430, -1000,   322,    12,    65, -1000, -1000, -1000,  1407,
   672,   529,   343,   -11,  1345,   321, -1000, -1000, -1000, -1000,
   251, -1000, -1000, -1000,   238, -1000,   193, -1000, -1000,   145,
   144, -1000,    21,   169, -1000,   174,     7, -1000,    31,    99,
    34, -1000, -1000,   257,  1407,   753,   753,   753,   753,   753,
   753,   753,   753,   753,   753,   753,   753,   753,   753,   753,
   753,   300,   753, -1000,   753,   672,    95,    86,   672,   672,
    50, -1000,   201,   214,   -55,   118,   300,   300,   300,   300,
   300,   300,   300,   300,   201, -1000,  1314,    28, -1000, -1000,
 -1000,   -58,    40, -1000,   672,   337, -1000, -1000,   317,   124,
   672,    18, -1000,   182, -1000,   180,   180, -1000, -1000, -1000,
 -1000,   201, -1000, -1000,   122, -1000, -1000, -1000,    93,   237,
   222, -1000,     7,   753,   162,    32,   -75, -1000, -1000,  1407,
    64,    64, -1000,   356,   831,   687,    39,   482, -1000,   491,
  1399,   889,  1407,  1407,  1283,  1252,  1221,   315, -1000,  -128,
 -1000,  -128,   313,   306, -1000,  1037,   302,   244,   238,   881,
   244,   286,   286,   -68, -1000, -1000,  1037,   510, -1000,    14,
    38,   284,   672, -1000,   281, -1000, -1000, -1000, -1000,   672,
   244,   319,   122, -1000, -1000,  1407, -1000, -1000,    24,   753,
   881, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,   244,
   300, -1000,   244,   311,   926, -1000, -1000,   412, -1000,    71,
   335, -1000, -1000, -1000,   331,   331,   333,   331,   -27, -1000,
    35,  1376, -1000, -1000,   753,     5, -1000, -1000, -1000, -1000,
   263, -1000, -1000,   251, -1000,   825,   300,   251, -1000, -1000,
 -1000,    -4,   510,   753,   510, -1000,   510, -1000,   753, -1000,
  1376, -1000,   510, -1000, -1000, -1000, -1000, -1000,   261,   376,
  1190, -1000,   510, -1000,   510,  1159,   510,   346,    45,   510,
 -1000,   753, -1000,   510, -1000,   331, -1000, -1000,  1128, -1000,
 -1000,   753,  1097,   510, -1000 };
yytabelem yypgo[]={

     0,   457,   404,   389,     8,   387,   112,   456,    13,     5,
   455,     1,   145,    31,   453,    71,    27,    17,    41,   444,
    65,   441,    35,   439,    64,   433,    38,   497,     7,   430,
    34,     3,   429,   427,    12,     0,    11,    25,    14,    24,
    51,    22,   424,    21,    26,   423,     4,   414,    20,    23,
     2,    10,    19,   409,   401,   399,   397,   394,   391 };
yytabelem yyr1[]={

     0,    10,    10,    10,     1,     1,     1,     1,     1,     2,
     4,     3,     6,     6,     7,     7,     8,     8,     5,     5,
    24,    24,    24,    24,    25,    25,     9,     9,    14,    14,
    14,    14,    13,    13,    13,    13,    13,    15,    15,    16,
    16,    17,    17,    17,    20,    20,    19,    19,    19,    19,
    18,    18,    21,    21,    21,    22,    22,    23,    23,    23,
    23,    23,    23,    23,    26,    26,    26,    26,    52,    52,
    52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
    52,    52,    52,    52,    52,    52,    52,    52,    52,    51,
    51,    51,    51,    27,    27,    27,    27,    27,    27,    27,
    27,    27,    27,    27,    27,    27,    27,    43,    43,    43,
    43,    43,    43,    48,    48,    48,    38,    38,    38,    38,
    38,    40,    40,    29,    29,    50,    53,    30,    30,    30,
    32,    32,    32,    32,    32,    54,    32,    31,    31,    31,
    31,    31,    31,    31,    31,    55,    31,    31,    56,    31,
    57,    31,    58,    31,    34,    33,    33,    28,    28,    35,
    35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
    35,    35,    35,    35,    35,    35,    35,    35,    35,    36,
    36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
    36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
    36,    36,    36,    36,    36,    36,    36,    36,    36,    37,
    37,    37,    37,    37,    37,    37,    37,    37,    39,    42,
    42,    41,    49,    45,    45,    46,    46,    46,    47,    47,
    44,    44,    12,    12,    12,    12,    11 };
yytabelem yyr2[]={

     0,     3,     3,     3,     3,     3,     3,     3,    11,     5,
    11,     9,     5,     1,     2,     7,     7,     9,     5,     1,
     2,     7,     5,     7,     3,     7,     7,     5,     3,     3,
     2,     2,     2,     5,     5,     5,     5,     9,    11,     3,
     7,     3,     7,     1,     7,     9,     5,     7,    11,    13,
     3,     2,     3,     7,     9,     5,     1,     2,     4,     2,
     4,     2,     2,     7,     3,     5,     5,     5,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     5,     5,     2,     2,     2,     2,     2,     3,     3,     4,
     4,     7,     7,     5,     5,     9,     9,     2,     7,     5,
     5,     5,     5,     5,     5,     9,     9,     3,     1,     5,
     5,     9,     9,     1,     5,     5,     1,     5,     5,     9,
     9,     1,     5,     5,     3,     7,     1,     9,     5,     7,
     3,     3,     3,     5,     5,     1,    11,     4,    11,     3,
     3,     2,     7,    11,     7,     1,    19,     7,     1,     9,
     1,    11,     1,     9,     3,     3,     7,     2,     7,     7,
     7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     7,     7,     7,     7,    11,     5,    11,     2,     1,     9,
     9,     5,     9,     5,     9,     5,     5,     5,     5,     5,
     5,     5,     5,     9,     9,     9,     7,     7,     7,     7,
     5,     2,     7,     3,     3,     3,     3,     3,     3,     3,
     7,     7,     5,     9,     9,     5,     9,     9,     5,     3,
     3,     5,     5,     5,     9,     7,     9,    11,     7,     3,
     2,     1,     3,     3,     5,     5,     7 };
yytabelem yychk[]={

 -1000,   -10,    -1,    72,     0,    -9,    -4,    -3,    -2,     1,
   -13,   -27,   -14,   123,   -26,    80,   -51,   -12,    40,    97,
   -20,   -15,    47,    24,    50,    52,   -19,    13,   156,    40,
   -27,   -25,    72,    97,   123,   -20,   -15,    80,   -24,    69,
    72,    -5,   -46,    40,   -11,    42,    45,   160,   -46,    40,
   -11,    45,   123,    80,   -26,   -27,   123,   -27,   123,   123,
   -52,   -41,    54,    55,    50,    52,    65,    64,    94,    92,
    93,    91,    66,    67,    40,    42,    46,    47,    95,    90,
    70,    23,     9,   -42,    97,   123,    97,    97,   -21,   -22,
    73,   -18,    80,   123,    73,   -18,    81,    -5,    70,    71,
    72,    69,   -35,     9,   -36,    97,   123,    23,   113,    50,
    52,    55,    54,    46,    47,    95,    30,   160,   -37,    40,
    86,    82,    83,    81,    84,    34,    80,    24,    -6,    -9,
    69,   -13,   123,   -34,   -47,   -33,   -44,   -28,   -45,   -35,
    73,   -13,    97,   123,   -35,   -34,   -26,    80,    45,    45,
    41,    41,    43,   -40,   -12,    74,    25,   -23,    -9,    -4,
    -3,    -2,   -51,   -16,   -17,    80,    73,    73,    69,    41,
    -6,   -28,   -24,   -27,   -35,    70,    54,    55,    50,    52,
    65,    64,    94,    92,    93,    91,    66,    67,    90,    71,
    68,   -36,    42,    95,    42,    40,    44,    45,    40,    40,
   160,   -49,    40,   -13,   -39,   -13,   -36,   -36,   -36,   -36,
   -36,   -36,   -36,   -36,   113,   -18,   -35,   160,   -52,   -41,
   -30,    73,    -7,    -8,    40,    80,    41,    41,   155,    71,
    71,   -34,   123,   -43,    80,   -12,    40,    43,    41,   -46,
   -11,    40,   -40,    97,   -22,    69,    72,    72,   -18,   123,
    80,    74,    71,    70,   -16,   123,    25,    72,   -30,   -35,
   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -34,   -37,   123,
   -37,   123,   -34,   -34,   -18,    24,   -49,   -48,   -12,   122,
   -38,   -12,    40,   -39,    41,   -18,    24,   -53,    74,   256,
    71,   -34,    40,    41,   155,   -44,   -28,    74,   -11,    70,
   -43,   -43,   -22,    72,   -17,   -35,    74,    73,   123,    69,
    43,    43,    41,    41,    41,   -52,   -41,    41,   -11,   -48,
   -36,   -11,   -38,   -38,   122,   -52,   -41,   -29,   -31,   -32,
     1,    -9,    -4,   -30,    20,    39,    16,    33,    80,     4,
     8,   -35,     3,     7,    28,    19,    10,    74,    -8,    41,
   -34,    41,   -28,    41,    73,   -35,   -36,    41,   -31,    74,
    72,    40,   -50,    40,   -50,    40,   -50,    69,   -57,    69,
   -35,    80,   -54,    41,   -46,   -11,   -46,   -11,    81,   -31,
   -35,   -31,   -55,   -31,   -56,   -35,   -58,   -31,    41,    12,
    41,   -31,   -31,    69,   -31,    39,    72,   -31,   -35,   -31,
   -50,    72,   -35,    41,   -31 };
yytabelem yydef[]={

     0,    -2,     1,     2,     3,     4,     5,     6,     7,     0,
     0,    19,    32,    29,    97,    64,     0,     0,     0,    28,
    30,    31,     0,     0,   232,   233,    56,     0,     0,     0,
    -2,     0,    27,    33,    34,    35,    36,    64,    24,   178,
     9,    13,    93,    -2,   104,   178,    89,    90,    94,    -2,
   103,     0,   100,    64,    99,   101,   102,     0,     0,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,     0,     0,    82,    83,    84,    85,
    86,    87,    88,   121,   219,   220,   234,   235,     0,    52,
    43,     0,    50,    51,    46,     0,     0,    13,   178,     0,
    26,   178,    22,     0,   177,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   201,   178,
   203,   204,   205,   206,   207,   208,   209,     0,     0,    18,
     0,     0,    29,     0,     0,   154,   229,   155,   230,   157,
   178,   108,    28,    29,     0,     0,    98,    64,    91,    92,
     0,    80,    81,   221,   121,    44,    56,    55,    57,    59,
    61,    62,     0,     0,    39,    41,    43,    47,     0,     0,
     0,    23,    25,    20,    21,   178,   178,   178,   178,   178,
   178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
   178,   175,   178,   183,   178,   178,     0,     0,   178,   178,
     0,   181,     0,   113,     0,   116,   185,   186,   187,   188,
   189,   190,   191,   192,     0,   200,     0,     0,   212,   215,
    11,    -2,    12,    14,   178,     0,    95,   225,     0,   231,
   178,     0,    34,   223,   107,   108,   108,   236,    96,   105,
   106,   231,   122,    45,    53,    56,    58,    60,     0,    -2,
    -2,    37,    43,   178,     0,     0,     0,     8,    10,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,     0,     0,     0,     0,   196,   197,
   198,   199,     0,     0,   210,     0,     0,   222,   113,     0,
   218,   116,   116,     0,   202,   211,     0,   178,   128,     0,
     0,     0,   178,   226,     0,   228,   156,   158,   110,   178,
   109,     0,    54,    63,    40,    42,    38,    48,     0,   178,
     0,   194,   195,   179,   180,   213,   216,   182,   115,   114,
   184,   118,   117,     0,   193,   214,   217,   178,   124,     0,
     0,   139,   140,   141,     0,     0,     0,     0,   209,   150,
     0,   130,   131,   132,   178,     0,   135,   129,    15,    16,
     0,   227,   224,     0,    49,   174,   176,     0,   123,   127,
   137,     0,   178,   178,   178,   145,   178,   148,   178,   152,
   133,   134,   178,    17,   111,   112,   119,   120,     0,   142,
     0,   144,   178,   147,   178,     0,   178,     0,     0,   178,
   125,   178,   149,   178,   153,     0,   138,   143,     0,   151,
   136,   178,     0,   178,   146 };
typedef struct { char *t_name; int t_val; } yytoktype;
#ifndef YYDEBUG
#	define YYDEBUG	0	/* don't allow debugging */
#endif

#if YYDEBUG

yytoktype yytoks[] =
{
	"EOFTOK",	0,
	"ASM",	1,
	"BREAK",	3,
	"CASE",	4,
	"CONTINUE",	7,
	"DEFAULT",	8,
	"DELETE",	9,
	"DO",	10,
	"ELSE",	12,
	"ENUM",	13,
	"FOR",	16,
	"FORTRAN",	17,
	"GOTO",	19,
	"IF",	20,
	"NEW",	23,
	"OPERATOR",	24,
	"PUBLIC",	25,
	"RETURN",	28,
	"SIZEOF",	30,
	"SWITCH",	33,
	"THIS",	34,
	"WHILE",	39,
	"LP",	40,
	"RP",	41,
	"LB",	42,
	"RB",	43,
	"REF",	44,
	"DOT",	45,
	"NOT",	46,
	"COMPL",	47,
	"MUL",	50,
	"AND",	52,
	"PLUS",	54,
	"MINUS",	55,
	"ER",	64,
	"OR",	65,
	"ANDAND",	66,
	"OROR",	67,
	"QUEST",	68,
	"COLON",	69,
	"ASSIGN",	70,
	"CM",	71,
	"SM",	72,
	"LC",	73,
	"RC",	74,
	"CAST",	113,
	"ENDCAST",	122,
	"ID",	80,
	"STRING",	81,
	"ICON",	82,
	"FCON",	83,
	"CCON",	84,
	"ZERO",	86,
	"ASOP",	90,
	"RELOP",	91,
	"EQUOP",	92,
	"DIVOP",	93,
	"SHIFTOP",	94,
	"ICOP",	95,
	"TYPE",	97,
	"TNAME",	123,
	"EMPTY",	124,
	"NO_ID",	125,
	"NO_EXPR",	126,
	"ELLIPSIS",	155,
	"AGGR",	156,
	"MEM",	160,
	"-unknown-",	-1	/* ends search */
};

char * yyreds[] =
{
	"-no such reduction-",
	"ext_def : external_def",
	"ext_def : SM",
	"ext_def : EOFTOK",
	"external_def : data_dcl",
	"external_def : att_fct_def",
	"external_def : fct_def",
	"external_def : fct_dcl",
	"external_def : ASM LP STRING RP SM",
	"fct_dcl : decl SM",
	"att_fct_def : type decl arg_dcl_list base_init block",
	"fct_def : decl arg_dcl_list base_init block",
	"base_init : COLON init_list",
	"base_init : /* empty */",
	"init_list : binit",
	"init_list : init_list CM binit",
	"binit : LP elist RP",
	"binit : ID LP elist RP",
	"arg_dcl_list : arg_dcl_list data_dcl",
	"arg_dcl_list : /* empty */",
	"dl : decl",
	"dl : ID COLON e",
	"dl : COLON e",
	"dl : decl ASSIGN initializer",
	"decl_list : dl",
	"decl_list : decl_list CM dl",
	"data_dcl : type decl_list SM",
	"data_dcl : type SM",
	"tp : TYPE",
	"tp : TNAME",
	"tp : class_dcl",
	"tp : enum_dcl",
	"type : tp",
	"type : type TYPE",
	"type : type TNAME",
	"type : type class_dcl",
	"type : type enum_dcl",
	"enum_dcl : ENUM LC moe_list RC",
	"enum_dcl : ENUM tag LC moe_list RC",
	"moe_list : moe",
	"moe_list : moe_list CM moe",
	"moe : ID",
	"moe : ID ASSIGN e",
	"moe : /* empty */",
	"class_dcl : class_head mem_list RC",
	"class_dcl : class_head mem_list RC TYPE",
	"class_head : AGGR LC",
	"class_head : AGGR tag LC",
	"class_head : AGGR tag COLON TNAME LC",
	"class_head : AGGR tag COLON PUBLIC TNAME LC",
	"tag : ID",
	"tag : TNAME",
	"mem_list : cl_mem_list",
	"mem_list : cl_mem_list PUBLIC cl_mem_list",
	"mem_list : cl_mem_list PUBLIC COLON cl_mem_list",
	"cl_mem_list : cl_mem_list cl_mem",
	"cl_mem_list : /* empty */",
	"cl_mem : data_dcl",
	"cl_mem : att_fct_def SM",
	"cl_mem : att_fct_def",
	"cl_mem : fct_def SM",
	"cl_mem : fct_def",
	"cl_mem : fct_dcl",
	"cl_mem : tn_list tag SM",
	"fname : ID",
	"fname : COMPL TNAME",
	"fname : OPERATOR oper",
	"fname : OPERATOR c_type",
	"oper : PLUS",
	"oper : MINUS",
	"oper : MUL",
	"oper : AND",
	"oper : OR",
	"oper : ER",
	"oper : SHIFTOP",
	"oper : EQUOP",
	"oper : DIVOP",
	"oper : RELOP",
	"oper : ANDAND",
	"oper : OROR",
	"oper : LP RP",
	"oper : LB RB",
	"oper : NOT",
	"oper : COMPL",
	"oper : ICOP",
	"oper : ASOP",
	"oper : ASSIGN",
	"oper : NEW",
	"oper : DELETE",
	"tn_list : TNAME DOT",
	"tn_list : TNAME MEM",
	"tn_list : tn_list TNAME DOT",
	"tn_list : tn_list ID DOT",
	"decl : decl arg_list",
	"decl : TNAME arg_list",
	"decl : decl LP elist RP",
	"decl : TNAME LP elist RP",
	"decl : fname",
	"decl : ID DOT fname",
	"decl : tn_list fname",
	"decl : tn_list TNAME",
	"decl : ptr decl",
	"decl : ptr TNAME",
	"decl : TNAME vec",
	"decl : decl vec",
	"decl : LP decl RP arg_list",
	"decl : LP decl RP vec",
	"arg_decl : ID",
	"arg_decl : /* empty */",
	"arg_decl : ptr arg_decl",
	"arg_decl : arg_decl vec",
	"arg_decl : LP arg_decl RP arg_list",
	"arg_decl : LP arg_decl RP vec",
	"new_decl : /* empty */",
	"new_decl : ptr new_decl",
	"new_decl : new_decl vec",
	"cast_decl : /* empty */",
	"cast_decl : ptr cast_decl",
	"cast_decl : cast_decl vec",
	"cast_decl : LP cast_decl RP arg_list",
	"cast_decl : LP cast_decl RP vec",
	"c_decl : /* empty */",
	"c_decl : ptr c_decl",
	"stmt_list : stmt_list statement",
	"stmt_list : statement",
	"condition : LP e RP",
	"block : LC",
	"block : LC stmt_list RC",
	"block : LC RC",
	"block : LC error RC",
	"simple : e",
	"simple : BREAK",
	"simple : CONTINUE",
	"simple : RETURN e",
	"simple : GOTO ID",
	"simple : DO",
	"simple : DO statement WHILE condition",
	"statement : simple SM",
	"statement : ASM LP STRING RP SM",
	"statement : data_dcl",
	"statement : att_fct_def",
	"statement : block",
	"statement : IF condition statement",
	"statement : IF condition statement ELSE statement",
	"statement : WHILE condition statement",
	"statement : FOR LP",
	"statement : FOR LP statement e SM e RP statement",
	"statement : SWITCH condition statement",
	"statement : ID COLON",
	"statement : ID COLON statement",
	"statement : CASE",
	"statement : CASE e COLON statement",
	"statement : DEFAULT COLON",
	"statement : DEFAULT COLON statement",
	"elist : ex_list",
	"ex_list : initializer",
	"ex_list : ex_list CM initializer",
	"initializer : e",
	"initializer : LC elist RC",
	"e : e ASSIGN e",
	"e : e PLUS e",
	"e : e MINUS e",
	"e : e MUL e",
	"e : e AND e",
	"e : e OR e",
	"e : e ER e",
	"e : e SHIFTOP e",
	"e : e EQUOP e",
	"e : e DIVOP e",
	"e : e RELOP e",
	"e : e ANDAND e",
	"e : e OROR e",
	"e : e ASOP e",
	"e : e CM e",
	"e : e QUEST e COLON e",
	"e : DELETE term",
	"e : DELETE LB e RB term",
	"e : term",
	"e : /* empty */",
	"term : TYPE LP elist RP",
	"term : TNAME LP elist RP",
	"term : NEW new_type",
	"term : NEW LP new_type RP",
	"term : term ICOP",
	"term : CAST cast_type ENDCAST term",
	"term : MUL term",
	"term : AND term",
	"term : MINUS term",
	"term : PLUS term",
	"term : NOT term",
	"term : COMPL term",
	"term : ICOP term",
	"term : SIZEOF term",
	"term : SIZEOF CAST cast_type ENDCAST",
	"term : term LB e RB",
	"term : term LP elist RP",
	"term : term REF prim",
	"term : term REF TNAME",
	"term : term DOT prim",
	"term : term DOT TNAME",
	"term : MEM tag",
	"term : prim",
	"term : LP e RP",
	"term : ZERO",
	"term : ICON",
	"term : FCON",
	"term : STRING",
	"term : CCON",
	"term : THIS",
	"prim : ID",
	"prim : TNAME MEM tag",
	"prim : ID MEM tag",
	"prim : OPERATOR oper",
	"prim : TNAME MEM OPERATOR oper",
	"prim : ID MEM OPERATOR oper",
	"prim : OPERATOR c_type",
	"prim : TNAME MEM OPERATOR c_type",
	"prim : ID MEM OPERATOR c_type",
	"cast_type : type cast_decl",
	"c_tp : TYPE",
	"c_tp : TNAME",
	"c_type : c_tp c_decl",
	"new_type : type new_decl",
	"arg_type : type arg_decl",
	"arg_type : type arg_decl ASSIGN initializer",
	"arg_list : LP arg_type_list RP",
	"arg_list : LP arg_type_list ELLIPSIS RP",
	"arg_list : LP arg_type_list CM ELLIPSIS RP",
	"arg_type_list : arg_type_list CM at",
	"arg_type_list : at",
	"at : arg_type",
	"at : /* empty */",
	"ptr : MUL",
	"ptr : AND",
	"ptr : MUL TYPE",
	"ptr : AND TYPE",
	"vec : LB e RB",
};
#endif /* YYDEBUG */
/*	@(#)yaccpar	1.9	*/

/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#define YYERROR		goto yyerrlab
#define YYACCEPT	return(0)
#define YYABORT		return(1)
#define YYBACKUP( newtoken, newvalue )\
{\
	if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
	{\
		yyerror( "syntax error - cannot backup" );\
		goto yyerrlab;\
	}\
	yychar = newtoken;\
	yystate = *yyps;\
	yylval = newvalue;\
	goto yynewstate;\
}
#define YYRECOVERING()	(!!yyerrflag)
#ifndef YYDEBUG
#	define YYDEBUG	1	/* make debugging available */
#endif

/*
** user known globals
*/
int yydebug;			/* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG		(-1000)

/*
** global variables used by the parser
*/
YYSTYPE yyv[ YYMAXDEPTH ];	/* value stack */
int yys[ YYMAXDEPTH ];		/* state stack */

YYSTYPE *yypv;			/* top of value stack */
int *yyps;			/* top of state stack */

int yystate;			/* current state */
int yytmp;			/* extra var (lasts between blocks) */

int yynerrs;			/* number of errors */
int yyerrflag;			/* error recovery flag */
int yychar;			/* current input token number */



/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
int
yyparse()
{
	register YYSTYPE *yypvt;	/* top of value stack for $vars */

	/*
	** Initialize externals - yyparse may be called more than once
	*/
	yypv = &yyv[-1];
	yyps = &yys[-1];
	yystate = 0;
	yytmp = 0;
	yynerrs = 0;
	yyerrflag = 0;
	yychar = -1;

	goto yystack;
	{
		register YYSTYPE *yy_pv;	/* top of value stack */
		register int *yy_ps;		/* top of state stack */
		register int yy_state;		/* current state */
		register int  yy_n;		/* internal state number info */

		/*
		** get globals into registers.
		** branch to here only if YYBACKUP was called.
		*/
	yynewstate:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;
		goto yy_newstate;

		/*
		** get globals into registers.
		** either we just started, or we just finished a reduction
		*/
	yystack:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;

		/*
		** top of for (;;) loop while no reductions done
		*/
	yy_stack:
		/*
		** put a state and value onto the stacks
		*/
#if YYDEBUG
		/*
		** if debugging, look up token value in list of value vs.
		** name pairs.  0 and negative (-1) are special values.
		** Note: linear search is used since time is not a real
		** consideration while debugging.
		*/
		if ( yydebug )
		{
			register int yy_i;

			printf( "State %d, token ", yy_state );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ++yy_ps >= &yys[ YYMAXDEPTH ] )	/* room on stack? */
		{
			yyerror( "yacc stack overflow" );
			YYABORT;
		}
		*yy_ps = yy_state;
		*++yy_pv = yyval;

		/*
		** we have a new state - find out what to do
		*/
	yy_newstate:
		if ( ( yy_n = yypact[ yy_state ] ) <= YYFLAG )
			goto yydefault;		/* simple state */
#if YYDEBUG
		/*
		** if debugging, need to mark whether new token grabbed
		*/
		yytmp = yychar < 0;
#endif
		if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
			yychar = 0;		/* reached EOF */
#if YYDEBUG
		if ( yydebug && yytmp )
		{
			register int yy_i;

			printf( "Received token " );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ( ( yy_n += yychar ) < 0 ) || ( yy_n >= YYLAST ) )
			goto yydefault;
		if ( yychk[ yy_n = yyact[ yy_n ] ] == yychar )	/*valid shift*/
		{
			yychar = -1;
			yyval = yylval;
			yy_state = yy_n;
			if ( yyerrflag > 0 )
				yyerrflag--;
			goto yy_stack;
		}

	yydefault:
		if ( ( yy_n = yydef[ yy_state ] ) == -2 )
		{
#if YYDEBUG
			yytmp = yychar < 0;
#endif
			if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
				yychar = 0;		/* reached EOF */
#if YYDEBUG
			if ( yydebug && yytmp )
			{
				register int yy_i;

				printf( "Received token " );
				if ( yychar == 0 )
					printf( "end-of-file\n" );
				else if ( yychar < 0 )
					printf( "-none-\n" );
				else
				{
					for ( yy_i = 0;
						yytoks[yy_i].t_val >= 0;
						yy_i++ )
					{
						if ( yytoks[yy_i].t_val
							== yychar )
						{
							break;
						}
					}
					printf( "%s\n", yytoks[yy_i].t_name );
				}
			}
#endif /* YYDEBUG */
			/*
			** look through exception table
			*/
			{
				register int *yyxi = yyexca;

				while ( ( *yyxi != -1 ) ||
					( yyxi[1] != yy_state ) )
				{
					yyxi += 2;
				}
				while ( ( *(yyxi += 2) >= 0 ) &&
					( *yyxi != yychar ) )
					;
				if ( ( yy_n = yyxi[1] ) < 0 )
					YYACCEPT;
			}
		}

		/*
		** check for syntax error
		*/
		if ( yy_n == 0 )	/* have an error */
		{
			/* no worry about speed here! */
			switch ( yyerrflag )
			{
			case 0:		/* new error */
				yyerror( "syntax error" );
				goto skip_init;
			yyerrlab:
				/*
				** get globals into registers.
				** we have a user generated syntax type error
				*/
				yy_pv = yypv;
				yy_ps = yyps;
				yy_state = yystate;
				yynerrs++;
			skip_init:
			case 1:
			case 2:		/* incompletely recovered error */
					/* try again... */
				yyerrflag = 3;
				/*
				** find state where "error" is a legal
				** shift action
				*/
				while ( yy_ps >= yys )
				{
					yy_n = yypact[ *yy_ps ] + YYERRCODE;
					if ( yy_n >= 0 && yy_n < YYLAST &&
						yychk[yyact[yy_n]] == YYERRCODE)					{
						/*
						** simulate shift of "error"
						*/
						yy_state = yyact[ yy_n ];
						goto yy_stack;
					}
					/*
					** current state has no shift on
					** "error", pop stack
					*/
#if YYDEBUG
#	define _POP_ "Error recovery pops state %d, uncovers state %d\n"
					if ( yydebug )
						printf( _POP_, *yy_ps,
							yy_ps[-1] );
#	undef _POP_
#endif
					yy_ps--;
					yy_pv--;
				}
				/*
				** there is no state on stack with "error" as
				** a valid shift.  give up.
				*/
				YYABORT;
			case 3:		/* no shift yet; eat a token */
#if YYDEBUG
				/*
				** if debugging, look up token in list of
				** pairs.  0 and negative shouldn't occur,
				** but since timing doesn't matter when
				** debugging, it doesn't hurt to leave the
				** tests here.
				*/
				if ( yydebug )
				{
					register int yy_i;

					printf( "Error recovery discards " );
					if ( yychar == 0 )
						printf( "token end-of-file\n" );
					else if ( yychar < 0 )
						printf( "token -none-\n" );
					else
					{
						for ( yy_i = 0;
							yytoks[yy_i].t_val >= 0;
							yy_i++ )
						{
							if ( yytoks[yy_i].t_val
								== yychar )
							{
								break;
							}
						}
						printf( "token %s\n",
							yytoks[yy_i].t_name );
					}
				}
#endif /* YYDEBUG */
				if ( yychar == 0 )	/* reached EOF. quit */
					YYABORT;
				yychar = -1;
				goto yy_newstate;
			}
		}/* end if ( yy_n == 0 ) */
		/*
		** reduction by production yy_n
		** put stack tops, etc. so things right after switch
		*/
#if YYDEBUG
		/*
		** if debugging, print the string that is the user's
		** specification of the reduction which is just about
		** to be done.
		*/
		if ( yydebug )
			printf( "Reduce by (%d) \"%s\"\n",
				yy_n, yyreds[ yy_n ] );
#endif
		yytmp = yy_n;			/* value to switch over */
		yypvt = yy_pv;			/* $vars top of value stack */
		/*
		** Look in goto table for next state
		** Sorry about using yy_state here as temporary
		** register variable, but why not, if it works...
		** If yyr2[ yy_n ] doesn't have the low order bit
		** set, then there is no action to be done for
		** this reduction.  So, no saving & unsaving of
		** registers done.  The only difference between the
		** code just after the if and the body of the if is
		** the goto yy_stack in the body.  This way the test
		** can be made before the choice of what to do is needed.
		*/
		{
			/* length of production doubled with extra bit */
			register int yy_len = yyr2[ yy_n ];

			if ( !( yy_len & 01 ) )
			{
				yy_len >>= 1;
				yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
				yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
					*( yy_ps -= yy_len ) + 1;
				if ( yy_state >= YYLAST ||
					yychk[ yy_state =
					yyact[ yy_state ] ] != -yy_n )
				{
					yy_state = yyact[ yypgo[ yy_n ] ];
				}
				goto yy_stack;
			}
			yy_len >>= 1;
			yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
			yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
				*( yy_ps -= yy_len ) + 1;
			if ( yy_state >= YYLAST ||
				yychk[ yy_state = yyact[ yy_state ] ] != -yy_n )
			{
				yy_state = yyact[ yypgo[ yy_n ] ];
			}
		}
					/* save until reenter driver code */
		yystate = yy_state;
		yyps = yy_ps;
		yypv = yy_pv;
	}
	/*
	** code supplied by user is placed in this switch
	*/
	switch( yytmp )
	{
		
case 1:
# line 343 "gram.y"
{	return yypvt[-0].i; } break;
case 2:
# line 345 "gram.y"
{	return 1; } break;
case 3:
# line 347 "gram.y"
{	return 0; } break;
case 4:
# line 351 "gram.y"
{	modified_tn = 0; if (yypvt[-0].pn==0) yyval.i = 1; } break;
case 5:
# line 353 "gram.y"
{	goto mod; } break;
case 6:
# line 355 "gram.y"
{	goto mod; } break;
case 7:
# line 357 "gram.y"
{ mod:	if (modified_tn) {
					restore();
					modified_tn = 0;
				}
			} break;
case 8:
# line 363 "gram.y"
{	Pname n = new name(make_name('A'));
				n->tp = new basetype(ASM,0);
				Pbase(n->tp)->b_name = Pname(yypvt[-2].s);
				yyval.p = n;
			} break;
case 9:
# line 371 "gram.y"
{	Pname n = yypvt[-1].pn;
				if (n==0 || n->tp==0) {
					error("TX for%n",n);
					yyval.p = Ndata(defa_type,yypvt[-1].p);
				}
				switch (n->tp->base) {
				case FCT:
					yyval.p = Nfct(defa_type,n,0);
					break;
				default:
					error("TX for%n",n);
					yyval.p = Ndata(defa_type,yypvt[-1].p);
				}
			} break;
case 10:
# line 389 "gram.y"
{	Pname n = Nfct(yypvt[-4].p,yypvt[-3].p,yypvt[-0].p);
				Fargdcl(n->tp,Nunlist(yypvt[-2].p),n);
				Finit(n->tp) = yypvt[-1].pn;
				yyval.p = n;
			} break;
case 11:
# line 397 "gram.y"
{	Pname n = Nfct(defa_type,yypvt[-3].p,yypvt[-0].p);
				Fargdcl(n->tp,Nunlist(yypvt[-2].p),n);
				Finit(n->tp) = yypvt[-1].pn;
				yyval.p = n;
			} break;
case 12:
# line 405 "gram.y"
{	yyval.p = yypvt[-0].p; } break;
case 13:
# line 407 "gram.y"
{	yyval.p = 0; } break;
case 15:
# line 412 "gram.y"
{	yyval.pn = yypvt[-0].pn;  yyval.pn->n_list = yypvt[-2].pn; } break;
case 16:
# line 416 "gram.y"
{	yyval.pn = new name;
				yyval.pn->n_initializer = yypvt[-1].pe;
			} break;
case 17:
# line 420 "gram.y"
{	yyval.pn = yypvt[-3].pn;
				yyval.pn->n_initializer = yypvt[-1].pe;
			} break;
case 18:
# line 431 "gram.y"
{	if (yypvt[-0].pn == 0)
					error("badAD");
				else if (yypvt[-0].pn->tp->base == FCT)
					error("FD inAL (%n)",yypvt[-0].pn);
				else if (yypvt[-1].p)
					Nadd_list(yypvt[-1].p,yypvt[-0].p);
				else
					yyval.p = nlistN(yypvt[-0].p);
			} break;
case 19:
# line 441 "gram.y"
{	yyval.p = 0; } break;
case 21:
# line 446 "gram.y"
{	yyval.p = yypvt[-2].pn;
				Ntype(yyval.p) = fieldN(yypvt[-0].pe);
		 	} break;
case 22:
# line 450 "gram.y"
{	yyval.p = new name;
				Ntype(yyval.p) = fieldN(yypvt[-0].pe);
			} break;
case 23:
# line 454 "gram.y"
{	yypvt[-2].pn->n_initializer = yypvt[-0].pe; } break;
case 24:
# line 458 "gram.y"
{	if (yypvt[-0].p) yyval.p = nlistN(yypvt[-0].p); } break;
case 25:
# line 460 "gram.y"
{	if (yypvt[-2].p)
					if (yypvt[-0].p)
						Nadd(yypvt[-2].p,yypvt[-0].p);
					else
						error("DL syntax");
				else {
					if (yypvt[-0].p) yyval.p = nlistN(yypvt[-0].p);
					error("DL syntax");
				}
			} break;
case 26:
# line 473 "gram.y"
{	yyval.p = Ndata(yypvt[-2].p,Nunlist(yypvt[-1].p)); } break;
case 27:
# line 475 "gram.y"
{	yyval.p = yypvt[-1].pb->aggr(); } break;
case 28:
# line 480 "gram.y"
{	yyval.p = new basetype(yypvt[-0].t,0); } break;
case 29:
# line 482 "gram.y"
{	yyval.p = new basetype(TYPE,yypvt[-0].pn); } break;
case 33:
# line 489 "gram.y"
{	yyval.p = yypvt[-1].pb->type_adj(yypvt[-0].t); } break;
case 34:
# line 491 "gram.y"
{	yyval.p = yypvt[-1].pb->name_adj(yypvt[-0].pn); } break;
case 35:
# line 493 "gram.y"
{	yyval.p = yypvt[-1].pb->base_adj(yypvt[-0].pb); } break;
case 36:
# line 495 "gram.y"
{	yyval.p = yypvt[-1].pb->base_adj(yypvt[-0].pb); } break;
case 37:
# line 505 "gram.y"
{	yyval.p = end_enum(0,yypvt[-1].pn); } break;
case 38:
# line 507 "gram.y"
{	yyval.p = end_enum(yypvt[-3].pn,yypvt[-1].pn); } break;
case 39:
# line 511 "gram.y"
{	if (yypvt[-0].p) yyval.p = nlistN(yypvt[-0].p); } break;
case 40:
# line 513 "gram.y"
{	if( yypvt[-0].p) if (yypvt[-2].p) Nadd(yypvt[-2].p,yypvt[-0].p); else yyval.p = nlistN(yypvt[-0].p); } break;
case 41:
# line 517 "gram.y"
{	yyval.p = yypvt[-0].pn; Ntype(yyval.p) = moe_type; } break;
case 42:
# line 519 "gram.y"
{	yyval.p = yypvt[-2].pn;
				Ntype(yyval.p) = moe_type;
				yyval.pn->n_initializer = yypvt[-0].pe;
			} break;
case 43:
# line 524 "gram.y"
{	yyval.p = 0; } break;
case 44:
# line 529 "gram.y"
{	end_cl(); } break;
case 45:
# line 531 "gram.y"
{	end_cl();
				error("`;' or declaratorX afterCD");
				lex_unget(yypvt[-0].t);
				/* lex_unget($4); but only one unget, sorry */
			 } break;
case 46:
# line 539 "gram.y"
{	yyval.p = start_cl(yypvt[-1].t,0,0); } break;
case 47:
# line 541 "gram.y"
{	yyval.p = start_cl(yypvt[-2].t,yypvt[-1].pn,0); } break;
case 48:
# line 543 "gram.y"
{	yyval.p = start_cl(yypvt[-4].t,yypvt[-3].pn,yypvt[-1].pn);
				if (yypvt[-4].t == STRUCT) ccl->pubbase = 1;
			} break;
case 49:
# line 547 "gram.y"
{	yyval.p = start_cl(yypvt[-5].t,yypvt[-4].pn,yypvt[-1].pn);
				ccl->pubbase = 1;
			} break;
case 50:
# line 553 "gram.y"
{ yyval.p = yypvt[-0].pn; } break;
case 52:
# line 558 "gram.y"
{	Pname n = Nunlist(yypvt[-0].p);
				if (ccl->is_simple())
					ccl->pubmem = n;
				else
					ccl->privmem = n;
				yyval.p = 0;
			} break;
case 53:
# line 566 "gram.y"
{	error("``:'' missing after ``public''");
				ccl->pubmem = Nunlist(yypvt[-0].p);
				TOK t = ccl->is_simple();
				if (t) error("public in%k",t);
				ccl->privmem = Nunlist(yypvt[-2].p);
				yyval.p = 0;
			} break;
case 54:
# line 574 "gram.y"
{	ccl->pubmem = Nunlist(yypvt[-0].p);
				TOK t = ccl->is_simple();
				if (t) error("public in%k",t);
				ccl->privmem = Nunlist(yypvt[-3].p);
				yyval.p = 0;
			 } break;
case 55:
# line 583 "gram.y"
{	if (yypvt[-0].p) if (yypvt[-1].p) Nadd_list(yypvt[-1].p,yypvt[-0].p); else yyval.p = nlistN(yypvt[-0].p); } break;
case 56:
# line 585 "gram.y"
{	yyval.p = 0; } break;
case 63:
# line 595 "gram.y"
{	Pname n = Ncopy(yypvt[-1].p);
				n->n_qualifier = (Pname)yypvt[-2].p;
				n->n_list = ccl->pubdef;
				ccl->pubdef = n;
				yyval.p = 0;
			} break;
case 64:
# line 619 "gram.y"
{	yyval.p = yypvt[-0].pn; } break;
case 65:
# line 621 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p); yyval.pn->n_oper = DTOR; } break;
case 66:
# line 623 "gram.y"
{	yyval.p = new name(oper_name(yypvt[-0].t));
				yyval.pn->n_oper = yypvt[-0].t;
			} break;
case 67:
# line 627 "gram.y"
{	Pname n = yypvt[-0].pn;
				n->string = "_type";
				n->n_oper = TYPE;
				n->n_initializer = (Pexpr)n->tp;
				n->tp = 0;
				yyval.p = n;
			} break;
case 80:
# line 648 "gram.y"
{	yyval.t = CALL; } break;
case 81:
# line 649 "gram.y"
{	yyval.t = DEREF; } break;
case 87:
# line 655 "gram.y"
{	yyval.t = NEW; } break;
case 88:
# line 656 "gram.y"
{	yyval.t = DELETE; } break;
case 91:
# line 662 "gram.y"
{	error("CNs do not nest"); } break;
case 92:
# line 664 "gram.y"
{	error("CNs do not nest"); } break;
case 93:
# line 668 "gram.y"
{	Freturns(yypvt[-0].p) = Ntype(yypvt[-1].p);
				Ntype(yypvt[-1].p) = (Ptype)yypvt[-0].p;
			} break;
case 94:
# line 672 "gram.y"
{	Pname n = (Pname)yypvt[-1].p;
				yyval.p = Ncopy(n);
				if (ccl && strcmp(n->string,ccl->string)) Nhide(n);
				yyval.pn->n_oper = TNAME;
				Freturns(yypvt[-0].p) = Ntype(yyval.p);
				Ntype(yyval.p) = (Ptype)yypvt[-0].p;
			} break;
case 95:
# line 684 "gram.y"
{	TOK k = 1;
				Pname l = yypvt[-1].pn;
				if (fct_void && l==0) k = 0;
				Ntype(yypvt[-3].p) = fctN(Ntype(yypvt[-3].p),l,k);
			} break;
case 96:
# line 690 "gram.y"
{	TOK k = 1;
				Pname l = yypvt[-1].pn;
				if (fct_void && l==0) k = 0;
				yyval.p = Ncopy(yypvt[-3].p);
				yyval.pn->n_oper = TNAME;
				Ntype(yyval.p) = fctN(0,l,k);
			} break;
case 98:
# line 699 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p);
				yyval.pn->n_qualifier = yypvt[-2].pn;
			} break;
case 99:
# line 703 "gram.y"
{	yyval.p = yypvt[-0].p;
				set_scope(yypvt[-1].pn);
				yyval.pn->n_qualifier = yypvt[-1].pn;
			} break;
case 100:
# line 708 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p);
				set_scope(yypvt[-1].pn);
				yyval.pn->n_oper = TNAME;
				yyval.pn->n_qualifier = yypvt[-1].pn;
			} break;
case 101:
# line 714 "gram.y"
{	Ptyp(yypvt[-1].p) = Ntype(yypvt[-0].p);
				Ntype(yypvt[-0].p) = (Ptype)yypvt[-1].p;
				yyval.p = yypvt[-0].p;
			} break;
case 102:
# line 719 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p);
				yyval.pn->n_oper = TNAME;
				Nhide(yypvt[-0].p);
				Ntype(yyval.p) = (Ptype)yypvt[-1].p;
			} break;
case 103:
# line 725 "gram.y"
{	yyval.p = Ncopy(yypvt[-1].p);
				yyval.pn->n_oper = TNAME;
				Nhide(yypvt[-1].p);
				Ntype(yyval.p) = (Ptype)yypvt[-0].p;
			} break;
case 104:
# line 731 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-1].p);
				Ntype(yypvt[-1].p) = (Ptype)yypvt[-0].p;
			} break;
case 105:
# line 735 "gram.y"
{	Freturns(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = (Ptype)yypvt[-0].p;
				yyval.p = yypvt[-2].p;
			} break;
case 106:
# line 740 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = (Ptype)yypvt[-0].p;
				yyval.p = yypvt[-2].p;
			} break;
case 107:
# line 747 "gram.y"
{	yyval.p = yypvt[-0].pn; } break;
case 108:
# line 749 "gram.y"
{	yyval.p = new name; } break;
case 109:
# line 751 "gram.y"
{	Ptyp(yypvt[-1].p) = Ntype(yypvt[-0].p);
				Ntype(yypvt[-0].p) = (Ptype)yypvt[-1].p;
				yyval.p = yypvt[-0].p;
			} break;
case 110:
# line 756 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-1].p);
				Ntype(yypvt[-1].p) = (Ptype)yypvt[-0].p;
			} break;
case 111:
# line 760 "gram.y"
{	Freturns(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = (Ptype)yypvt[-0].p;
				yyval.p = yypvt[-2].p;
			} break;
case 112:
# line 765 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = (Ptype)yypvt[-0].p;
				yyval.p = yypvt[-2].p;
			} break;
case 113:
# line 772 "gram.y"
{	yyval.p = new name; } break;
case 114:
# line 774 "gram.y"
{	Ptyp(yypvt[-1].p) = Ntype(yypvt[-0].p);
				Ntype(yypvt[-0].p) = (Ptype)yypvt[-1].p;
				yyval.p = yypvt[-0].p;
			} break;
case 115:
# line 779 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-1].p);
				Ntype(yypvt[-1].p) = (Ptype)yypvt[-0].p;
			} break;
case 116:
# line 785 "gram.y"
{	yyval.p = new name; } break;
case 117:
# line 787 "gram.y"
{	Ptyp(yypvt[-1].p) = Ntype(yypvt[-0].p);
				Ntype(yypvt[-0].p) = (Ptype)yypvt[-1].p;
				yyval.p = yypvt[-0].p;
			} break;
case 118:
# line 792 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-1].p);
				Ntype(yypvt[-1].p) = (Ptype)yypvt[-0].p;
			} break;
case 119:
# line 796 "gram.y"
{	Freturns(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = yypvt[-0].pt;
				yyval.p = yypvt[-2].p;
			} break;
case 120:
# line 801 "gram.y"
{	Vtype(yypvt[-0].p) = Ntype(yypvt[-2].p);
				Ntype(yypvt[-2].p) = yypvt[-0].pt;
				yyval.p = yypvt[-2].p;
			} break;
case 121:
# line 808 "gram.y"
{	yyval.p = new name; } break;
case 122:
# line 810 "gram.y"
{	Ptyp(yypvt[-1].p) = Ntype(yypvt[-0].p);
				Ntype(yypvt[-0].p) = (Ptype)yypvt[-1].p;
				yyval.p = yypvt[-0].p;
			} break;
case 123:
# line 821 "gram.y"
{	if (yypvt[-0].p)
					if (yypvt[-1].p)
						Sadd(yypvt[-1].p,yypvt[-0].p);
					else {
						yyval.p = slistN(yypvt[-0].p);
						stmt_seen = 1;
					}
			} break;
case 124:
# line 830 "gram.y"
{	if (yypvt[-0].p) {
					yyval.p = slistN(yypvt[-0].p);
					stmt_seen = 1;
				}
			} break;
case 125:
# line 838 "gram.y"
{	yyval.p = yypvt[-1].p;
				if (yyval.pe == dummy) error("empty condition");
				stmt_seen = 1;
			} break;
case 126:
# line 845 "gram.y"
{	cd_vec[cdi] = cd;
				stmt_vec[cdi] = stmt_seen;
				tn_vec[cdi++] = modified_tn;
				cd = 0;
				stmt_seen = 0;
				modified_tn = 0;
			} break;
case 127:
# line 853 "gram.y"
{	Pname n = Nunlist(cd);
				Pstmt ss = Sunlist(yypvt[-1].p);
				yyval.p = new block(yypvt[-3].l,n,ss);
				if (modified_tn) restore();
				cd = cd_vec[--cdi];
				stmt_seen = stmt_vec[cdi];
				modified_tn = tn_vec[cdi];
				if (cdi < 0) error('i',"block level(%d)",cdi);
			} break;
case 128:
# line 863 "gram.y"
{	yyval.p = new block(yypvt[-1].l,0,0); } break;
case 129:
# line 865 "gram.y"
{	yyval.p = new block(yypvt[-2].l,0,0); } break;
case 130:
# line 869 "gram.y"
{	yyval.p = new estmt(SM,curloc,yypvt[-0].pe,0);	} break;
case 131:
# line 871 "gram.y"
{	yyval.p = new stmt(BREAK,yypvt[-0].l,0); } break;
case 132:
# line 873 "gram.y"
{	yyval.p = new stmt(CONTINUE,yypvt[-0].l,0); } break;
case 133:
# line 875 "gram.y"
{	yyval.p = new estmt(RETURN,yypvt[-1].l,yypvt[-0].pe,0); } break;
case 134:
# line 877 "gram.y"
{	yyval.p = new lstmt(GOTO,yypvt[-1].l,yypvt[-0].pn,0); } break;
case 135:
# line 878 "gram.y"
{ stmt_seen=1; } break;
case 136:
# line 879 "gram.y"
{	yyval.p = new estmt(DO,yypvt[-4].l,yypvt[-0].pe,yypvt[-2].ps); } break;
case 138:
# line 884 "gram.y"
{	
				if (stmt_seen)
					yyval.p = new estmt(ASM,curloc,(Pexpr)yypvt[-2].s,0);
				else {
					Pname n = new name(make_name('A'));
					n->tp = new basetype(ASM,(Pname)yypvt[-2].s);
					if (cd) Nadd_list(cd,n); else cd=(Pname)nlistN(n);
					yyval.p = 0;
				}
			} break;
case 139:
# line 897 "gram.y"
{
				if (yypvt[-0].pn)
				if (stmt_seen) {
					Pname n = yypvt[-0].pn;
					yyval.p = new block(n->where,n,0);
					yyval.ps->base = DCL;
				}
				else {
					if (cd) Nadd_list(cd,yypvt[-0].p); else cd = (Pname)nlistN(yypvt[-0].p);
					yyval.p = 0;
				}
			} break;
case 140:
# line 910 "gram.y"
{	Pname n = Pname(yypvt[-0].p);
				lex_unget(RC);
				error(&n->where,"%n's definition is nested (did you forget a ``}''?)",n);
				if (cd) Nadd_list(cd,yypvt[-0].p); else cd = (Pname)nlistN(yypvt[-0].p);
				yyval.p = 0;
			} break;
case 142:
# line 918 "gram.y"
{	yyval.p = new ifstmt(yypvt[-2].l,yypvt[-1].pe,yypvt[-0].ps,0); } break;
case 143:
# line 920 "gram.y"
{	yyval.p = new ifstmt(yypvt[-4].l,yypvt[-3].pe,yypvt[-2].ps,yypvt[-0].ps); } break;
case 144:
# line 922 "gram.y"
{	yyval.p = new estmt(WHILE,yypvt[-2].l,yypvt[-1].pe,yypvt[-0].ps); } break;
case 145:
# line 923 "gram.y"
{ stmt_seen=1; } break;
case 146:
# line 924 "gram.y"
{	yyval.p = new forstmt(yypvt[-8].l,yypvt[-5].ps,yypvt[-4].pe,yypvt[-2].pe,yypvt[-0].ps); } break;
case 147:
# line 926 "gram.y"
{	yyval.p = new estmt(SWITCH,yypvt[-2].l,yypvt[-1].pe,yypvt[-0].ps); } break;
case 148:
# line 927 "gram.y"
{ yyval.p = yypvt[-1].pn; stmt_seen=1; } break;
case 149:
# line 928 "gram.y"
{	Pname n = yypvt[-1].pn;
				yyval.p = new lstmt(LABEL,n->where,n,yypvt[-0].ps);
			} break;
case 150:
# line 931 "gram.y"
{ stmt_seen=1; } break;
case 151:
# line 932 "gram.y"
{	if (yypvt[-2].pe == dummy) error("empty case label");
				yyval.p = new estmt(CASE,yypvt[-4].l,yypvt[-2].pe,yypvt[-0].ps);
			} break;
case 152:
# line 935 "gram.y"
{ stmt_seen=1; } break;
case 153:
# line 936 "gram.y"
{	yyval.p = new stmt(DEFAULT,yypvt[-3].l,yypvt[-0].ps); } break;
case 154:
# line 945 "gram.y"
{	Pexpr e = Eunlist(yypvt[-0].p);
				while (e && e->e1==dummy) {
					if (e->e2) error("EX inEL");
					delete e;
					e = e->e2;
				}
				yyval.p = e;
			} break;
case 155:
# line 955 "gram.y"
{	Pexpr e = new expr(ELIST,yypvt[-0].pe,0);
				yyval.p = (PP)new elist(e);
		} break;
case 156:
# line 959 "gram.y"
{	Pexpr e = new expr(ELIST,yypvt[-0].pe,0);
				Eadd(yypvt[-2].p,e);
			} break;
case 158:
# line 966 "gram.y"
{	Pexpr e;
				if (yypvt[-1].p)
					e = yypvt[-1].pe;
				else
					e = new expr(ELIST,dummy,0);
				yyval.p = new expr(ILIST,e,0);
			} break;
case 159:
# line 978 "gram.y"
{	binop:	yyval.p = new expr(yypvt[-1].t,yypvt[-2].pe,yypvt[-0].pe); } break;
case 160:
# line 979 "gram.y"
{	goto binop; } break;
case 161:
# line 980 "gram.y"
{	goto binop; } break;
case 162:
# line 981 "gram.y"
{	goto binop; } break;
case 163:
# line 982 "gram.y"
{	goto binop; } break;
case 164:
# line 983 "gram.y"
{	goto binop; } break;
case 165:
# line 984 "gram.y"
{	goto binop; } break;
case 166:
# line 985 "gram.y"
{ 	goto binop; } break;
case 167:
# line 986 "gram.y"
{	goto binop; } break;
case 168:
# line 987 "gram.y"
{	goto binop; } break;
case 169:
# line 988 "gram.y"
{	goto binop; } break;
case 170:
# line 989 "gram.y"
{	goto binop; } break;
case 171:
# line 990 "gram.y"
{	goto binop; } break;
case 172:
# line 991 "gram.y"
{	goto binop; } break;
case 173:
# line 992 "gram.y"
{	goto binop; } break;
case 174:
# line 994 "gram.y"
{	yyval.p = new qexpr(yypvt[-4].pe,yypvt[-2].pe,yypvt[-0].pe); } break;
case 175:
# line 996 "gram.y"
{	yyval.p = new expr(DELETE,yypvt[-0].pe,0); } break;
case 176:
# line 998 "gram.y"
{	yyval.p = new expr(DELETE,yypvt[-0].pe,yypvt[-2].pe); } break;
case 178:
# line 1001 "gram.y"
{	yyval.p = dummy; } break;
case 179:
# line 1005 "gram.y"
{	TOK b = yypvt[-3].t;
				Ptype t;
				switch (b) {
				case CHAR:	t = char_type; break;
				case SHORT:	t = short_type; break;
				case INT:	t = int_type; break;
				case LONG:	t = long_type; break;
				case UNSIGNED:	t = uint_type; break;
				case FLOAT:	t = float_type; break;
				case DOUBLE:	t = double_type; break;
				case VOID:	t = void_type; break;
				default:
					error("illegal constructor:%k",b);
					t = int_type;
				}
				yyval.p = new texpr(VALUE,t,yypvt[-1].pe);
			} break;
case 180:
# line 1023 "gram.y"
{	Ptype t = Ntype(yypvt[-3].p);
				yyval.p = new texpr(VALUE,t,yypvt[-1].pe);
			} break;
case 181:
# line 1027 "gram.y"
{	Ptype t = Ntype(yypvt[-0].p); yyval.p = new texpr(NEW,t,0); } break;
case 182:
# line 1029 "gram.y"
{	Ptype t = Ntype(yypvt[-1].p); yyval.p = new texpr(NEW,t,0); } break;
case 183:
# line 1031 "gram.y"
{	yyval.p = new expr(yypvt[-0].t,yypvt[-1].pe,0); } break;
case 184:
# line 1033 "gram.y"
{	yyval.p = new texpr(CAST,Ntype(yypvt[-2].p),yypvt[-0].pe); } break;
case 185:
# line 1035 "gram.y"
{	yyval.p = new expr(DEREF,yypvt[-0].pe,0); } break;
case 186:
# line 1037 "gram.y"
{	yyval.p = new expr(ADDROF,0,yypvt[-0].pe); } break;
case 187:
# line 1039 "gram.y"
{	yyval.p = new expr(UMINUS,0,yypvt[-0].pe); } break;
case 188:
# line 1041 "gram.y"
{	yyval.p = new expr(UPLUS,0,yypvt[-0].pe); } break;
case 189:
# line 1043 "gram.y"
{	yyval.p = new expr(NOT,0,yypvt[-0].pe); } break;
case 190:
# line 1045 "gram.y"
{	yyval.p = new expr(COMPL,0,yypvt[-0].pe); } break;
case 191:
# line 1047 "gram.y"
{	yyval.p = new expr(yypvt[-1].t,0,yypvt[-0].pe); } break;
case 192:
# line 1049 "gram.y"
{	yyval.p = new texpr(SIZEOF,0,yypvt[-0].pe); } break;
case 193:
# line 1051 "gram.y"
{	yyval.p = new texpr(SIZEOF,Ntype(yypvt[-1].p),0); } break;
case 194:
# line 1053 "gram.y"
{	yyval.p = new expr(DEREF,yypvt[-3].pe,yypvt[-1].pe); } break;
case 195:
# line 1055 "gram.y"
{	Pexpr ee = yypvt[-1].pe;
				Pexpr e = yypvt[-3].pe;
				if (e->base == NEW)
					e->e1 = ee;
				else
					yyval.p = new call(e,ee);
			} break;
case 196:
# line 1063 "gram.y"
{	yyval.p = new ref(REF,yypvt[-2].pe,yypvt[-0].pn); } break;
case 197:
# line 1065 "gram.y"
{	Pname n = Ncopy(yypvt[-0].p); yyval.p = new ref(REF,yypvt[-2].pe,n); } break;
case 198:
# line 1067 "gram.y"
{	yyval.p = new ref(DOT,yypvt[-2].pe,yypvt[-0].pn); } break;
case 199:
# line 1069 "gram.y"
{	Pname n = Ncopy(yypvt[-0].p); yyval.p = new ref(DOT,yypvt[-2].pe,n); } break;
case 200:
# line 1071 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p); yyval.pn->n_qualifier = sta_name; } break;
case 202:
# line 1074 "gram.y"
{	yyval.p = yypvt[-1].p; } break;
case 203:
# line 1076 "gram.y"
{	yyval.p = zero; } break;
case 204:
# line 1078 "gram.y"
{	yyval.p = conN(ICON,yypvt[-0].s); } break;
case 205:
# line 1080 "gram.y"
{	yyval.p = conN(FCON,yypvt[-0].s); } break;
case 206:
# line 1082 "gram.y"
{	yyval.p = conN(STRING,yypvt[-0].s); } break;
case 207:
# line 1084 "gram.y"
{	yyval.p = conN(CCON,yypvt[-0].s); } break;
case 208:
# line 1086 "gram.y"
{	yyval.p = conN(THIS,0); } break;
case 209:
# line 1094 "gram.y"
{	yyval.p = yypvt[-0].pn; } break;
case 210:
# line 1096 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p);
				yyval.pn->n_qualifier = yypvt[-2].pn;
			} break;
case 211:
# line 1100 "gram.y"
{	yyval.p = Ncopy(yypvt[-0].p);
				Pname nx = ktbl->look(yypvt[-2].pn->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",yyval.p);
				yyval.pn->n_qualifier = nx;
			} break;
case 212:
# line 1106 "gram.y"
{	yyval.p = new name(oper_name(yypvt[-0].t));
				yyval.pn->n_oper = yypvt[-0].t;
			} break;
case 213:
# line 1110 "gram.y"
{	yyval.p = new name(oper_name(yypvt[-0].t));
				yyval.pn->n_oper = yypvt[-0].t;
				yyval.pn->n_qualifier = yypvt[-3].pn;
			} break;
case 214:
# line 1115 "gram.y"
{	yyval.p = new name(oper_name(yypvt[-0].t));
				yyval.pn->n_oper = yypvt[-0].t;
				Pname nx = ktbl->look(yypvt[-3].pn->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",yyval.p);
				yyval.pn->n_qualifier = nx;
			} break;
case 215:
# line 1122 "gram.y"
{	Pname n = yypvt[-0].pn;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				yyval.p = n;
			} break;
case 216:
# line 1132 "gram.y"
{	Pname n = yypvt[-0].pn;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				n->n_qualifier = yypvt[-3].pn;
				yyval.p = n;
			} break;
case 217:
# line 1143 "gram.y"
{	Pname n = yypvt[-0].pn;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				Pname nx = ktbl->look(yypvt[-3].pn->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",yyval.p);
				n->n_qualifier = nx;
				yyval.p = n;
			} break;
case 218:
# line 1162 "gram.y"
{	yyval.p = Ncast(yypvt[-1].p,yypvt[-0].p); } break;
case 219:
# line 1166 "gram.y"
{	yyval.p = new basetype(yypvt[-0].t,0); } break;
case 220:
# line 1168 "gram.y"
{	yyval.p = new basetype(TYPE,yypvt[-0].pn); } break;
case 221:
# line 1172 "gram.y"
{	yyval.p = Ncast(yypvt[-1].p,yypvt[-0].p); } break;
case 222:
# line 1176 "gram.y"
{	yyval.p = Ncast(yypvt[-1].p,yypvt[-0].p); } break;
case 223:
# line 1180 "gram.y"
{	yyval.p = Ndata(yypvt[-1].p,yypvt[-0].p); } break;
case 224:
# line 1182 "gram.y"
{	yyval.p = Ndata(yypvt[-3].p,yypvt[-2].p);
				yyval.pn->n_initializer = yypvt[-0].pe;
			} break;
case 225:
# line 1188 "gram.y"
{	TOK k = 1;
				Pname l = yypvt[-1].pn;
			//	if (fct_void && l==0) k = 0;
				yyval.p = fctN(0,Nunlist(l),k);
			} break;
case 226:
# line 1194 "gram.y"
{	TOK k = ELLIPSIS;
				Pname l = yypvt[-2].pn;
			//	if (fct_void && l==0) k = 0;
				yyval.p = fctN(0,Nunlist(l),k);
			} break;
case 227:
# line 1200 "gram.y"
{	TOK k = ELLIPSIS;
				Pname l = yypvt[-3].pn;
			//	if (fct_void && l==0) k = 0;
				yyval.p = fctN(0,Nunlist(l),k);
			} break;
case 228:
# line 1208 "gram.y"
{	if (yypvt[-0].p)
					if (yypvt[-2].p)
						Nadd(yypvt[-2].p,yypvt[-0].p);
					else {
						error("AD syntax");
						yyval.p = nlistN(yypvt[-0].p); 
					}
				else
					error("AD syntax");
			} break;
case 229:
# line 1219 "gram.y"
{	if (yypvt[-0].p) yyval.p = nlistN(yypvt[-0].p); } break;
case 231:
# line 1224 "gram.y"
{	yyval.p = 0; } break;
case 232:
# line 1227 "gram.y"
{	yyval.p = new ptr(PTR,0); } break;
case 233:
# line 1229 "gram.y"
{	yyval.p = new ptr(RPTR,0); } break;
case 234:
# line 1231 "gram.y"
{	TOK c = yypvt[-0].t;
				if (c == CONST)
					yyval.p = new ptr(PTR,0,1);
				else {
					yyval.p = new ptr(PTR,0);
					error("syntax error: *%k",c);
				}
			} break;
case 235:
# line 1240 "gram.y"
{	TOK c = yypvt[-0].t;
				if (c == CONST)
					yyval.p = new ptr(RPTR,0,1);
				else {
					yyval.p = new ptr(RPTR,0);
					error("syntax error: &%k",c);
				}
			} break;
case 236:
# line 1251 "gram.y"
{	Pexpr d = yypvt[-1].pe;
				yyval.p = vecN( (d!=dummy)?d:0 );
			} break;
	}
	goto yystack;		/* reset registers in driver code */
}
