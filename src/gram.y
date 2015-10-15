/* @(#) gram.y 1.3 1/27/86 17:49:00 */ 
/*ident	"@(#)cfront:src/gram.y	1.3" */
/*************************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.

gram.y:
	
	This is the syntax analyser.

	Old C features not recognized:
	(1) "+ =" as the operator "+="
	(2) any construct using one of the new keywords as an identifier
	(3) initializers without "=" operator
	(4) structure tags used as identifier names

	Additions:
	(1) Classes (keywords: CLASS THIS PUBLIC FRIEND and VIRTUAL)
		(classes incorporate STRUCT and UNION)
	(2) the new and delete operators (keywords: NEW DELETE)
	(3) inline functions (keyword INLINE)
	(4) overloaded function names (keyword OVERLOAD) 
	(5) overloaded operators (keyword OPERATOR)
	(6) constructors and destructors
	(7) constant types (keyword: CONST)
	(8) argument types part of function function type (token: ...)
	(9) new argument syntax ( e.g. char f(int a, char b) { ... })
	(10) names can be left out of argument lists

	Syntax extensions for error handling:
	(1) nested functions
	(2) any expression can be empty
	(3) any expression can be a constant_expression

	note that a call to error() does not change the parser's state
*/

%{
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

%}

%union {
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
}
%{
extern YYSTYPE yylval;
%}
/*
	the token definitions are copied from token.h,
	and all %token replaced by %token
*/
			/* keywords in alphabetical order */
%token EOFTOK		0
%token ASM		1
%token BREAK		3
%token CASE		4
%token CONTINUE		7
%token DEFAULT		8
%token DELETE		9
%token DO		10
%token ELSE		12
%token ENUM		13
%token FOR		16
%token FORTRAN		17
%token GOTO		19
%token IF		20
%token NEW		23
%token OPERATOR		24
%token PUBLIC		25
%token RETURN		28
%token SIZEOF		30
%token SWITCH		33
%token THIS		34
%token WHILE		39

			/* operators in priority order (sort of) */
%token LP		40
%token RP		41
%token LB		42
%token RB		43
%token REF		44
%token DOT		45
%token NOT		46
%token COMPL		47
%token MUL		50
%token AND		52
%token PLUS		54
%token MINUS		55
%token ER		64
%token OR		65
%token ANDAND		66
%token OROR		67
%token QUEST		68
%token COLON		69
%token ASSIGN		70
%token CM		71
%token SM		72
%token LC		73
%token RC		74
%token CAST		113
%token ENDCAST		122

			/* constants etc. */
%token ID		80
%token STRING		81
%token ICON		82
%token FCON		83
%token CCON		84

%token ZERO		86

			/* groups of tokens */
%token ASOP		90	/* op= */
%token RELOP		91	/* LE GE LT GT */
%token EQUOP		92	/* EQ NE */
%token DIVOP		93	/* DIV MOD */
%token SHIFTOP		94	/* LS RS */
%token ICOP		95	/* INCR DECR */

%token TYPE		97	/*	INT FLOAT CHAR DOUBLE
					REGISTER STATIC EXTERN AUTO
					CONST INLINE VIRTUAL FRIEND
					LONG SHORT UNSIGNED
					TYPEDEF */
%token TNAME		123
%token EMPTY		124
%token NO_ID		125
%token NO_EXPR		126
%token ELLIPSIS		155	/* ... */
%token AGGR		156	/* CLASS STRUCT UNION */
%token MEM		160	/* :: */


%type <p>	external_def fct_dcl fct_def att_fct_def arg_dcl_list 
		base_init init_list binit
		data_dcl ext_def vec ptr
		type tp enum_dcl moe_list
		moe 
		tag class_head class_dcl mem_list cl_mem_list 
		cl_mem dl decl_list 
		fname decl initializer stmt_list
		block statement simple ex_list elist e  term prim
		cast_decl cast_type c_decl c_type c_tp
		arg_decl at arg_type arg_list arg_type_list
		new_decl new_type
		condition
		TNAME tn_list
%type <l>	LC RC SWITCH CASE DEFAULT FOR IF DO WHILE GOTO RETURN DELETE
		BREAK CONTINUE
%type <t>	oper
		EQUOP DIVOP SHIFTOP ICOP RELOP ASOP
		ANDAND OROR PLUS MINUS MUL ASSIGN OR ER AND 
		LP LB NOT COMPL AGGR
		TYPE
%type <s>	CCON ZERO ICON FCON STRING
%type <pn>	ID 

%left	EMPTY
%left	NO_ID
%left	RC LC ID BREAK CONTINUE RETURN GOTO DELETE DO IF WHILE FOR CASE DEFAULT
	AGGR ENUM TYPE
%left	NO_EXPR

%left	CM
%right	ASOP ASSIGN
%right	QUEST COLON
%left	OROR
%left	ANDAND
%left	OR
%left	ER
%left	AND
%left	EQUOP
%left	RELOP
%left	SHIFTOP
%left	PLUS MINUS
%left	MUL DIVOP
%right	NOT COMPL NEW
%right	CAST ICOP SIZEOF
%left	LB LP DOT REF MEM

%start ext_def

%%
/*
	this parser handles declarations one by one,
	NOT a complete .c file
*/






/************** DECLARATIONS in the outermost scope: returns Pname *******/

ext_def		:  external_def
			{	return $<i>1; }
		|  SM
			{	return 1; }
		|  EOFTOK
			{	return 0; }
		;

external_def	:  data_dcl
			{	modified_tn = 0; if ($<pn>1==0) $<i>$ = 1; }
		|  att_fct_def
			{	goto mod; }
		|  fct_def
			{	goto mod; }
		|  fct_dcl
			{ mod:	if (modified_tn) {
					restore();
					modified_tn = 0;
				}
			}
		|  ASM LP STRING RP SM
			{	Pname n = new name(make_name('A'));
				n->tp = new basetype(ASM,0);
				Pbase(n->tp)->b_name = Pname($<s>3);
				$$ = n;
			}
		;

fct_dcl		:  decl SM
			{	Pname n = $<pn>1;
				if (n==0 || n->tp==0) {
					error("TX for%n",n);
					$$ = Ndata(defa_type,$1);
				}
				switch (n->tp->base) {
				case FCT:
					$$ = Nfct(defa_type,n,0);
					break;
				default:
					error("TX for%n",n);
					$$ = Ndata(defa_type,$1);
				}
			}
		;


att_fct_def	:  type decl arg_dcl_list base_init block
			{	Pname n = Nfct($1,$2,$5);
				Fargdcl(n->tp,Nunlist($3),n);
				Finit(n->tp) = $<pn>4;
				$$ = n;
			} 
		;

fct_def		:  decl arg_dcl_list base_init block
			{	Pname n = Nfct(defa_type,$1,$4);
				Fargdcl(n->tp,Nunlist($2),n);
				Finit(n->tp) = $<pn>3;
				$$ = n;
			}
		;

base_init	:  COLON init_list
			{	$$ = $2; }
		|  %prec EMPTY
			{	$$ = 0; }
		;

init_list	:  binit
		|  init_list CM binit
			{	$<pn>$ = $<pn>3;  $<pn>$->n_list = $<pn>1; }
		;

binit		:  LP elist RP
			{	$<pn>$ = new name;
				$<pn>$->n_initializer = $<pe>2;
			}
		|  ID LP elist RP
			{	$<pn>$ = $1;
				$<pn>$->n_initializer = $<pe>3;
			}
		;




/*************** declarations: returns Pname ********************/

arg_dcl_list	:  arg_dcl_list data_dcl
			{	if ($<pn>2 == 0)
					error("badAD");
				else if ($<pn>2->tp->base == FCT)
					error("FD inAL (%n)",$<pn>2);
				else if ($1)
					Nadd_list($1,$2);
				else
					$$ = nlistN($2);
			}
		|  %prec EMPTY
			{	$$ = 0; }
		;

dl		:  decl
		|  ID COLON e		%prec CM
			{	$$ = $<pn>1;
				Ntype($$) = fieldN($<pe>3);
		 	}
		|  COLON e		%prec CM
			{	$$ = new name;
				Ntype($$) = fieldN($<pe>2);
			}
		|  decl ASSIGN initializer
			{	$<pn>1->n_initializer = $<pe>3; }
		;

decl_list	:  dl
			{	if ($1) $$ = nlistN($1); }
		|  decl_list CM dl
			{	if ($1)
					if ($3)
						Nadd($1,$3);
					else
						error("DL syntax");
				else {
					if ($3) $$ = nlistN($3);
					error("DL syntax");
				}
			}
		;

data_dcl	:  type decl_list SM
			{	$$ = Ndata($1,Nunlist($2)); }
		|  type SM
			{	$$ = $<pb>1->aggr(); }
		
		;

tp		:  TYPE	
			{	$$ = new basetype($<t>1,0); }
		|  TNAME
			{	$$ = new basetype(TYPE,$<pn>1); }
		|  class_dcl
		|  enum_dcl
		;

type		:  tp
		|  type TYPE
			{	$$ = $<pb>1->type_adj($<t>2); }
		|  type TNAME
			{	$$ = $<pb>1->name_adj($<pn>2); }
		|  type class_dcl
			{	$$ = $<pb>1->base_adj($<pb>2); }
		|  type enum_dcl
			{	$$ = $<pb>1->base_adj($<pb>2); }
		;




/***************** aggregate: returns Pname *****************/


enum_dcl	:  ENUM LC moe_list RC
			{	$$ = end_enum(0,$<pn>3); }
		|  ENUM tag LC moe_list RC
			{	$$ = end_enum($<pn>2,$<pn>4); }
		;

moe_list	:  moe
			{	if ($1) $$ = nlistN($1); }
		|  moe_list CM moe
			{	if( $3) if ($1) Nadd($1,$3); else $$ = nlistN($3); }
		;

moe		:  ID
			{	$$ = $<pn>1; Ntype($$) = moe_type; }
		|  ID ASSIGN e
			{	$$ = $<pn>1;
				Ntype($$) = moe_type;
				$<pn>$->n_initializer = $<pe>3;
			}
		|  /* empty */
			{	$$ = 0; }
		;


class_dcl	:  class_head mem_list RC
			{	end_cl(); }
		|  class_head mem_list RC TYPE
			{	end_cl();
				error("`;' or declaratorX afterCD");
				lex_unget($4);
				/* lex_unget($4); but only one unget, sorry */
			 }
		;

class_head	:  AGGR LC
			{	$$ = start_cl($<t>1,0,0); }
		|  AGGR tag LC
			{	$$ = start_cl($<t>1,$<pn>2,0); }
		|  AGGR tag COLON TNAME LC
			{	$$ = start_cl($<t>1,$<pn>2,$<pn>4);
				if ($<t>1 == STRUCT) ccl->pubbase = 1;
			}
		|  AGGR tag COLON PUBLIC TNAME LC
			{	$$ = start_cl($<t>1,$<pn>2,$<pn>5);
				ccl->pubbase = 1;
			}
		;

tag		:  ID
			{ $$ = $1; }
		|  TNAME
		;

mem_list        :  cl_mem_list
			{	Pname n = Nunlist($1);
				if (ccl->is_simple())
					ccl->pubmem = n;
				else
					ccl->privmem = n;
				$$ = 0;
			}
		|  cl_mem_list PUBLIC cl_mem_list
			{	error("``:'' missing after ``public''");
				ccl->pubmem = Nunlist($3);
				TOK t = ccl->is_simple();
				if (t) error("public in%k",t);
				ccl->privmem = Nunlist($1);
				$$ = 0;
			} 
		|  cl_mem_list PUBLIC COLON cl_mem_list 
			{	ccl->pubmem = Nunlist($4);
				TOK t = ccl->is_simple();
				if (t) error("public in%k",t);
				ccl->privmem = Nunlist($1);
				$$ = 0;
			 }
		;

cl_mem_list	:  cl_mem_list cl_mem
			{	if ($2) if ($1) Nadd_list($1,$2); else $$ = nlistN($2); }
		|  %prec EMPTY
			{	$$ = 0; }
		;

cl_mem		:  data_dcl
		|  att_fct_def SM
		|  att_fct_def
		|  fct_def SM
		|  fct_def
		|  fct_dcl
		|  tn_list tag SM	/* public declaration */
			{	Pname n = Ncopy($2);
				n->n_qualifier = (Pname)$1;
				n->n_list = ccl->pubdef;
				ccl->pubdef = n;
				$$ = 0;
			}
		;



/************* declarators:	returns Pname **********************/

/*	a ``decl'' is used for function and data declarations,
		and for member declarations
		(it has a name)
	an ``arg_decl'' is used for argument declarations
		(it may or may not have a name)
	an ``cast_decl'' is used for casts
		(it does not have a name)
	a ``new_decl'' is used for type specifiers for the NEW operator
		(it does not have a name, and PtoF and PtoV cannot be expressed)
*/

fname		:  ID
			{	$$ = $<pn>1; }
		|  COMPL TNAME
			{	$$ = Ncopy($2); $<pn>$->n_oper = DTOR; }
		|  OPERATOR oper
			{	$$ = new name(oper_name($2));
				$<pn>$->n_oper = $<t>2;
			}
		|  OPERATOR c_type
			{	Pname n = $<pn>2;
				n->string = "_type";
				n->n_oper = TYPE;
				n->n_initializer = (Pexpr)n->tp;
				n->tp = 0;
				$$ = n;
			}
		;

oper		:  PLUS
		|  MINUS
		|  MUL
		|  AND
		|  OR
		|  ER
		|  SHIFTOP
		|  EQUOP
		|  DIVOP
		|  RELOP
		|  ANDAND
		|  OROR
		|  LP RP	{	$$ = CALL; }
		|  LB RB	{	$$ = DEREF; }
		|  NOT
		|  COMPL
		|  ICOP
		|  ASOP
		|  ASSIGN
		|  NEW		{	$$ = NEW; }
		|  DELETE	{	$$ = DELETE; }
		;

tn_list		:  TNAME DOT
		|  TNAME MEM
		|  tn_list TNAME DOT
			{	error("CNs do not nest"); }
		|  tn_list ID DOT
			{	error("CNs do not nest"); }
		;

decl		:  decl arg_list
			{	Freturns($2) = Ntype($1);
				Ntype($1) = (Ptype)$2;
			}
		|  TNAME arg_list
			{	Pname n = (Pname)$1;
				$$ = Ncopy(n);
				if (ccl && strcmp(n->string,ccl->string)) Nhide(n);
				$<pn>$->n_oper = TNAME;
				Freturns($2) = Ntype($$);
				Ntype($$) = (Ptype)$2;
			}
		|  decl LP elist RP
			/*	may be class object initializer,
				class object vector initializer,
				if not elist will be a CM or an ID
			*/
			{	TOK k = 1;
				Pname l = $<pn>3;
				if (fct_void && l==0) k = 0;
				Ntype($1) = fctN(Ntype($1),l,k);
			}
		|  TNAME LP elist RP
			{	TOK k = 1;
				Pname l = $<pn>3;
				if (fct_void && l==0) k = 0;
				$$ = Ncopy($1);
				$<pn>$->n_oper = TNAME;
				Ntype($$) = fctN(0,l,k);
			}
		|  fname
		|  ID DOT fname
			{	$$ = Ncopy($3);
				$<pn>$->n_qualifier = $1;
			}
		|  tn_list fname
			{	$$ = $2;
				set_scope($<pn>1);
				$<pn>$->n_qualifier = $<pn>1;
			}
		|  tn_list TNAME
			{	$$ = Ncopy($2);
				set_scope($<pn>1);
				$<pn>$->n_oper = TNAME;
				$<pn>$->n_qualifier = $<pn>1;
			}
		|  ptr decl	%prec MUL
			{	Ptyp($1) = Ntype($2);
				Ntype($2) = (Ptype)$1;
				$$ = $2;
			}
		|  ptr TNAME	%prec MUL
			{	$$ = Ncopy($2);
				$<pn>$->n_oper = TNAME;
				Nhide($2);
				Ntype($$) = (Ptype)$1;
			}
		|  TNAME vec	%prec LB
			{	$$ = Ncopy($1);
				$<pn>$->n_oper = TNAME;
				Nhide($1);
				Ntype($$) = (Ptype)$2;
			}
		|  decl vec	%prec LB	
			{	Vtype($2) = Ntype($1);
				Ntype($1) = (Ptype)$2;
			}
		|  LP decl RP arg_list
			{	Freturns($4) = Ntype($2);
				Ntype($2) = (Ptype)$4;
				$$ = $2;
			}
		|  LP decl RP vec
			{	Vtype($4) = Ntype($2);
				Ntype($2) = (Ptype)$4;
				$$ = $2;
			}
		;

arg_decl	:  ID
			{	$$ = $<pn>1; }
		|  %prec NO_ID
			{	$$ = new name; }
		|  ptr arg_decl		%prec MUL
			{	Ptyp($1) = Ntype($2);
				Ntype($2) = (Ptype)$1;
				$$ = $2;
			}
		|  arg_decl vec		%prec LB
			{	Vtype($2) = Ntype($1);
				Ntype($1) = (Ptype)$2;
			}
		|  LP arg_decl RP arg_list
			{	Freturns($4) = Ntype($2);
				Ntype($2) = (Ptype)$4;
				$$ = $2;
			}
		|  LP arg_decl RP vec
			{	Vtype($4) = Ntype($2);
				Ntype($2) = (Ptype)$4;
				$$ = $2;
			}
		;

new_decl	: %prec NO_ID
			{	$$ = new name; }
		|  ptr new_decl		%prec MUL
			{	Ptyp($1) = Ntype($2);
				Ntype($2) = (Ptype)$1;
				$$ = $2;
			}
		|  new_decl vec		%prec LB
			{	Vtype($2) = Ntype($1);
				Ntype($1) = (Ptype)$2;
			}
		;

cast_decl	:  %prec NO_ID
			{	$$ = new name; }
		|  ptr cast_decl			%prec MUL
			{	Ptyp($1) = Ntype($2);
				Ntype($2) = (Ptype)$1;
				$$ = $2;
			}
		|  cast_decl vec			%prec LB
			{	Vtype($2) = Ntype($1);
				Ntype($1) = (Ptype)$2;
			}
		|  LP cast_decl RP arg_list
			{	Freturns($4) = Ntype($2);
				Ntype($2) = $<pt>4;
				$$ = $2;
			}
		|  LP cast_decl RP vec
			{	Vtype($4) = Ntype($2);
				Ntype($2) = $<pt>4;
				$$ = $2;
			}
		;

c_decl		:  %prec NO_ID
			{	$$ = new name; }
		|  ptr c_decl				%prec MUL
			{	Ptyp($1) = Ntype($2);
				Ntype($2) = (Ptype)$1;
				$$ = $2;
			}
		;



/***************** statements: returns Pstmt *****************/

stmt_list	:  stmt_list statement
			{	if ($2)
					if ($1)
						Sadd($1,$2);
					else {
						$$ = slistN($2);
						stmt_seen = 1;
					}
			}
		|  statement
			{	if ($1) {
					$$ = slistN($1);
					stmt_seen = 1;
				}
			}
		;

condition	:  LP e RP
			{	$$ = $2;
				if ($<pe>$ == dummy) error("empty condition");
				stmt_seen = 1;
			}
		;

block		:  LC
			{	cd_vec[cdi] = cd;
				stmt_vec[cdi] = stmt_seen;
				tn_vec[cdi++] = modified_tn;
				cd = 0;
				stmt_seen = 0;
				modified_tn = 0;
			}
			stmt_list RC
			{	Pname n = Nunlist(cd);
				Pstmt ss = Sunlist($3);
				$$ = new block($<l>1,n,ss);
				if (modified_tn) restore();
				cd = cd_vec[--cdi];
				stmt_seen = stmt_vec[cdi];
				modified_tn = tn_vec[cdi];
				if (cdi < 0) error('i',"block level(%d)",cdi);
			}
		|  LC RC
			{	$$ = new block($<l>1,0,0); }
		|  LC error RC
			{	$$ = new block($<l>1,0,0); }
		;

simple		:  e
			{	$$ = new estmt(SM,curloc,$<pe>1,0);	}
		|  BREAK
			{	$$ = new stmt(BREAK,$<l>1,0); }
		|  CONTINUE
			{	$$ = new stmt(CONTINUE,$<l>1,0); }
		|  RETURN e
			{	$$ = new estmt(RETURN,$<l>1,$<pe>2,0); }
		|  GOTO ID
			{	$$ = new lstmt(GOTO,$<l>1,$<pn>2,0); }
		|  DO { stmt_seen=1; } statement WHILE condition
			{	$$ = new estmt(DO,$<l>1,$<pe>5,$<ps>3); }
		;

statement	:  simple SM
		|  ASM LP STRING RP SM
			{	
				if (stmt_seen)
					$$ = new estmt(ASM,curloc,(Pexpr)$<s>3,0);
				else {
					Pname n = new name(make_name('A'));
					n->tp = new basetype(ASM,(Pname)$<s>3);
					if (cd) Nadd_list(cd,n); else cd=(Pname)nlistN(n);
					$$ = 0;
				}
			}
	/*	|  simple
			{	error("';' missing after simpleS"); }*/
		|  data_dcl
			{
				if ($<pn>1)
				if (stmt_seen) {
					Pname n = $<pn>1;
					$$ = new block(n->where,n,0);
					$<ps>$->base = DCL;
				}
				else {
					if (cd) Nadd_list(cd,$1); else cd = (Pname)nlistN($1);
					$$ = 0;
				}
			}
		|  att_fct_def
			{	Pname n = Pname($1);
				lex_unget(RC);
				error(&n->where,"%n's definition is nested (did you forget a ``}''?)",n);
				if (cd) Nadd_list(cd,$1); else cd = (Pname)nlistN($1);
				$$ = 0;
			}
		|  block
		|  IF condition statement
			{	$$ = new ifstmt($<l>1,$<pe>2,$<ps>3,0); }
		|  IF condition statement ELSE statement
			{	$$ = new ifstmt($<l>1,$<pe>2,$<ps>3,$<ps>5); }
		|  WHILE condition statement
			{	$$ = new estmt(WHILE,$<l>1,$<pe>2,$<ps>3); }
		|  FOR LP { stmt_seen=1; } statement e SM e RP statement
			{	$$ = new forstmt($<l>1,$<ps>4,$<pe>5,$<pe>7,$<ps>9); }
		|  SWITCH condition statement
			{	$$ = new estmt(SWITCH,$<l>1,$<pe>2,$<ps>3); }
		|  ID COLON { $$ = $1; stmt_seen=1; } statement
			{	Pname n = $<pn>3;
				$$ = new lstmt(LABEL,n->where,n,$<ps>4);
			}
		|  CASE { stmt_seen=1; } e COLON statement
			{	if ($<pe>3 == dummy) error("empty case label");
				$$ = new estmt(CASE,$<l>1,$<pe>3,$<ps>5);
			}
		|  DEFAULT COLON { stmt_seen=1; } statement
			{	$$ = new stmt(DEFAULT,$<l>1,$<ps>4); }
		;



/********************* expressions: returns Pexpr **************/


elist		: ex_list
			{	Pexpr e = Eunlist($1);
				while (e && e->e1==dummy) {
					if (e->e2) error("EX inEL");
					delete e;
					e = e->e2;
				}
				$$ = e;
			}

ex_list		:  initializer		%prec CM
			{	Pexpr e = new expr(ELIST,$<pe>1,0);
				$$ = (PP)new elist(e);
			}
		|  ex_list CM initializer
			{	Pexpr e = new expr(ELIST,$<pe>3,0);
				Eadd($1,e);
			}
		;

initializer	:  e				%prec CM
		|  LC elist RC
			{	Pexpr e;
				if ($2)
					e = $<pe>2;
				else
					e = new expr(ELIST,dummy,0);
				$$ = new expr(ILIST,e,0);
			}
		;



e		:  e ASSIGN e
			{	binop:	$$ = new expr($<t>2,$<pe>1,$<pe>3); }
		|  e PLUS e	{	goto binop; }
		|  e MINUS e	{	goto binop; }
		|  e MUL e	{	goto binop; }
		|  e AND e	{	goto binop; }
		|  e OR e	{	goto binop; }
		|  e ER e	{	goto binop; }
		|  e SHIFTOP e	{ 	goto binop; }
		|  e EQUOP e	{	goto binop; }
		|  e DIVOP e	{	goto binop; }
		|  e RELOP e	{	goto binop; }
		|  e ANDAND e	{	goto binop; }
		|  e OROR e	{	goto binop; }
		|  e ASOP e	{	goto binop; }
		|  e CM e	{	goto binop; }
		|  e QUEST e COLON e
			{	$$ = new qexpr($<pe>1,$<pe>3,$<pe>5); }
		|  DELETE term 
			{	$$ = new expr(DELETE,$<pe>2,0); }
		|  DELETE LB e RB term
			{	$$ = new expr(DELETE,$<pe>5,$<pe>3); }
		|  term
		|  %prec NO_EXPR
			{	$$ = dummy; }
		;

term		:  TYPE LP elist RP
			{	TOK b = $<t>1;
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
				$$ = new texpr(VALUE,t,$<pe>3);
			}
		|  TNAME LP elist RP
			{	Ptype t = Ntype($1);
				$$ = new texpr(VALUE,t,$<pe>3);
			}
		|  NEW new_type
			{	Ptype t = Ntype($2); $$ = new texpr(NEW,t,0); }
		|  NEW LP new_type RP
			{	Ptype t = Ntype($3); $$ = new texpr(NEW,t,0); }
		|  term ICOP
			{	$$ = new expr($<t>2,$<pe>1,0); }
		|  CAST cast_type ENDCAST term %prec ICOP
			{	$$ = new texpr(CAST,Ntype($2),$<pe>4); }
		|  MUL term
			{	$$ = new expr(DEREF,$<pe>2,0); }
		|  AND term
			{	$$ = new expr(ADDROF,0,$<pe>2); }
		|  MINUS term
			{	$$ = new expr(UMINUS,0,$<pe>2); }
		|  PLUS term
			{	$$ = new expr(UPLUS,0,$<pe>2); }
		|  NOT term
			{	$$ = new expr(NOT,0,$<pe>2); }
		|  COMPL term
			{	$$ = new expr(COMPL,0,$<pe>2); }
		|  ICOP term
			{	$$ = new expr($<t>1,0,$<pe>2); }
		|  SIZEOF term
			{	$$ = new texpr(SIZEOF,0,$<pe>2); }
		|  SIZEOF CAST cast_type ENDCAST %prec SIZEOF
			{	$$ = new texpr(SIZEOF,Ntype($3),0); }
		|  term LB e RB
			{	$$ = new expr(DEREF,$<pe>1,$<pe>3); }
		|  term LP elist RP
			{	Pexpr ee = $<pe>3;
				Pexpr e = $<pe>1;
				if (e->base == NEW)
					e->e1 = ee;
				else
					$$ = new call(e,ee);
			}
		|  term REF prim
			{	$$ = new ref(REF,$<pe>1,$<pn>3); }
		|  term REF TNAME
			{	Pname n = Ncopy($3); $$ = new ref(REF,$<pe>1,n); }
		|  term DOT prim
			{	$$ = new ref(DOT,$<pe>1,$<pn>3); }
		|  term DOT TNAME
			{	Pname n = Ncopy($3); $$ = new ref(DOT,$<pe>1,n); }
		|  MEM tag
			{	$$ = Ncopy($2); $<pn>$->n_qualifier = sta_name; }
		|  prim
		|  LP e RP
			{	$$ = $2; }
		|  ZERO
			{	$$ = zero; }
		|  ICON
			{	$$ = conN(ICON,$1); }
		|  FCON
			{	$$ = conN(FCON,$1); }
		|  STRING
			{	$$ = conN(STRING,$1); }
		|  CCON
			{	$$ = conN(CCON,$1); }
		|  THIS
			{	$$ = conN(THIS,0); }
/*
		|  %prec NO_EXPR
			{	$$ = dummy; }
*/
		;

prim		:  ID
			{	$$ = $<pn>1; }
		|  TNAME MEM tag
			{	$$ = Ncopy($3);
				$<pn>$->n_qualifier = $<pn>1;
			}
		|  ID MEM tag
			{	$$ = Ncopy($3);
				Pname nx = ktbl->look($<pn>1->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",$$);
				$<pn>$->n_qualifier = nx;
			}
		|  OPERATOR oper
			{	$$ = new name(oper_name($2));
				$<pn>$->n_oper = $<t>2;
			}
		|  TNAME MEM OPERATOR oper
			{	$$ = new name(oper_name($4));
				$<pn>$->n_oper = $<t>4;
				$<pn>$->n_qualifier = $<pn>1;
			}
		|  ID MEM OPERATOR oper
			{	$$ = new name(oper_name($4));
				$<pn>$->n_oper = $<t>4;
				Pname nx = ktbl->look($<pn>1->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",$$);
				$<pn>$->n_qualifier = nx;
			}
		| OPERATOR c_type
			{	Pname n = $<pn>2;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				$$ = n;
			}
		| TNAME MEM OPERATOR c_type
			{	Pname n = $<pn>4;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				n->n_qualifier = $<pn>1;
				$$ = n;
			}
		| ID MEM OPERATOR c_type
			{	Pname n = $<pn>4;
				static char buf[128];
				buf[0] = '_';
				buf[1] = 'O';
				n->tp->signature(buf+2);
				n->string = buf;
				n->tp = 0;
				Pname nx = ktbl->look($<pn>1->string,HIDDEN);
				if (nx == 0) error("non-typeN%n before ::",$$);
				n->n_qualifier = nx;
				$$ = n;
			}
		;



/****************** abstract types (return type Pname) *************/

cast_type	:  type cast_decl
			{	$$ = Ncast($1,$2); }
		;

c_tp		:  TYPE	
			{	$$ = new basetype($<t>1,0); }
		|  TNAME
			{	$$ = new basetype(TYPE,$<pn>1); }
		;

c_type		:  c_tp c_decl
			{	$$ = Ncast($1,$2); }
		;

new_type	:  type new_decl
			{	$$ = Ncast($1,$2); }
		;

arg_type	:  type arg_decl
			{	$$ = Ndata($1,$2); }
		|  type arg_decl ASSIGN initializer
			{	$$ = Ndata($1,$2);
				$<pn>$->n_initializer = $<pe>4;
			}
		;

arg_list	:  LP arg_type_list RP
			{	TOK k = 1;
				Pname l = $<pn>2;
			//	if (fct_void && l==0) k = 0;
				$$ = fctN(0,Nunlist(l),k);
			}
		|  LP arg_type_list ELLIPSIS RP
			{	TOK k = ELLIPSIS;
				Pname l = $<pn>2;
			//	if (fct_void && l==0) k = 0;
				$$ = fctN(0,Nunlist(l),k);
			}
		|  LP arg_type_list CM ELLIPSIS RP
			{	TOK k = ELLIPSIS;
				Pname l = $<pn>2;
			//	if (fct_void && l==0) k = 0;
				$$ = fctN(0,Nunlist(l),k);
			}
		;

arg_type_list	:  arg_type_list CM at
			{	if ($3)
					if ($1)
						Nadd($1,$3);
					else {
						error("AD syntax");
						$$ = nlistN($3); 
					}
				else
					error("AD syntax");
			}
		|  at	%prec CM
			{	if ($1) $$ = nlistN($1); }
		;

at		:  arg_type
		|  %prec EMPTY
			{	$$ = 0; }

ptr		:  MUL %prec NO_ID
			{	$$ = new ptr(PTR,0); }
		|  AND %prec NO_ID
			{	$$ = new ptr(RPTR,0); }
		|  MUL TYPE
			{	TOK c = $<t>2;
				if (c == CONST)
					$$ = new ptr(PTR,0,1);
				else {
					$$ = new ptr(PTR,0);
					error("syntax error: *%k",c);
				}
			}
		|  AND TYPE
			{	TOK c = $<t>2;
				if (c == CONST)
					$$ = new ptr(RPTR,0,1);
				else {
					$$ = new ptr(RPTR,0);
					error("syntax error: &%k",c);
				}
			}
		;

vec		:  LB e RB
			{	Pexpr d = $<pe>2;
				$$ = vecN( (d!=dummy)?d:0 );
			}
		;

%%

