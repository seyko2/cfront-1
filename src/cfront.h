/* @(#) cfront.h 1.4 1/27/86 17:48:33 */ 
/*ident	"@(#)cfront:src/cfront.h	1.4" */
/***********************************************************************

	C++ source for cfront, the C++ compiler front-end
	written in the computer science research center of Bell Labs

	Copyright (c) 1984 AT&T, Inc. All Rights Reserved
	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T, INC.


	When reading cfront code please remember that C++ was not available
	when it was originally written. Out of necessity cfront is written
	in a style that takes advantage of only few of C++'s more advanced
	features.

cfront.h:

	Here is all the class definitions for cfront, and most of the externs

***********************************************************************/

/*	WARNING:
	This program relies on non-initialized class members being ZERO.
	This will be true as long as they are allocated using the "new" operator
*/

#include "token.h"
#include "typedef.h"

extern char* prog_name;		/* compiler name and version */
extern bit old_fct_accepted;	/* if set:
					old style function definitions are legal,
					implicit declarations are legal
				*/
extern bit fct_void;		/* if set:
					int f(); ... f(1); gives a warning per file
					undeclared(); gives a warning per file
				   if not:
					int f(); ... f(1); is an error
					undeclared(); is an error								(currently only a warning)
					
				*/
extern int inline_restr;	/* inline expansion restrictions */ 
/*	free lists */
extern Pname name_free;
extern Pexpr expr_free;
extern Pstmt stmt_free;

extern int Nspy, Nn, Nbt, Nt, Ne, Ns, Nstr, Nc, Nl;

extern TOK	lex();
extern Pname	syn();
extern bit	print_mode;

	/* stage initializers: */
extern void	init_print();
extern void	init_lex();
extern void	int_syn();
extern void	ext(int);

extern char* 	make_name(TOK);



class loc	/* a source file location */
{
public:
	short	file;	/* index into file_name[], or zero */
	short	line;

	void	put(FILE*);
	void	putline();
};

extern Loc curloc;
extern int curr_file;

overload error;
extern int error(int, loc*, char* ...);
extern int error(int, char* ...);
extern int error(loc*, char* ...);
extern int error(char* ...);
extern int error_count;
extern bit debug;
extern Ptype outlined;

extern FILE* in_file;
extern FILE* out_file;
extern char scan_started;
extern bit warn;
extern int br_level;
extern int bl_level;
extern Ptable ktbl;		/* keywords and typedef names */
extern char*	oper_name(TOK);
extern Ptable gtbl;		/* global names */
extern Pclass ccl;
extern Pbase defa_type;
extern Pbase moe_type;

extern Pstmt Cstmt;	/* current statement, or 0 */
extern Pname Cdcl;	/* name currently being declared, or 0 */
extern void put_dcl_context();

extern Ptable any_tbl;	/* table of undefined struct members */
extern Pbase any_type;
extern Pbase int_type;
extern Pbase char_type;
extern Pbase short_type;
extern Pbase long_type;
extern Pbase uchar_type;
extern Pbase ushort_type;
extern Pbase uint_type;
extern Pbase ulong_type;
extern Ptype Pchar_type;
extern Ptype Pint_type;
extern Ptype Pfctvec_type;
extern Pbase float_type;
extern Pbase double_type;
extern Pbase void_type;
extern Ptype Pvoid_type;
extern Pbase zero_type;

extern int byte_offset;
extern int bit_offset;
extern int max_align;
extern int stack_size;
extern int enum_count;
extern int const_save;

extern Pname class_name(Ptable,char*,bit);
extern Pname gen_find(Pname,Pfct);
extern char* gen_name(char*,char);

extern Pexpr dummy;	/* the empty expression */
extern Pexpr zero;
extern Pexpr one;
extern Pname sta_name;	/* qualifier for unary :: */

#define DEL(p) if (p && (p->permanent==0)) p->del()
#define PERM(p) p->permanent=1
#define UNPERM(p) p->permanent=0

struct node {
	TOK	base;
	TOK	n_key;	/* for names in table: class */
	bit	permanent;
};

extern Pclass Ebase, Epriv;	/* lookc return values */

class table : public node {
/*	a table is a node only to give it a "base" for debugging */
	short	size;
	short	hashsize;
	Pname*	entries;
	short*	hashtbl;
	short	free_slot;	/* next free slot in entries */
public:
	short	init_stat;	/* ==0 if block(s) of table not simplified,
				   ==1 if simplified but had no initializers,
				   ==2 if simplified and had initializers.
				*/
	Pstmt	real_block;	/* the last block the user wrote,
				   not one of the ones cfront created
				*/
		table(short, Ptable, Pname);
	Ptable	next;		/* table for enclosing scope */
	Pname	t_name;		/* name of the table */

	Pname	look(char*, TOK);
	Pname	insert(Pname, TOK);
	void	grow(int);
	void	set_scope(Ptable t)	{ next = t; };
	void	set_name(Pname n)	{ t_name = n; };
	Pname	get_mem(int);
		int	max()		{ return free_slot-1; };
	void	dcl_print(TOK,TOK);
	Pname	lookc(char*, TOK);
	Pexpr	find_name(Pname, bit, Pexpr);
	void	del();
};

extern bit Nold;
extern bit vec_const;
extern void restore();
extern void set_scope(Pname);
extern Plist modified_tn;
extern Pbase start_cl(TOK, Pname, Pname);
extern void end_cl();
extern Pbase end_enum(Pname, Pname);

/************ types : basic types, aggregates, declarators ************/

extern bit new_type;
extern Pname cl_obj_vec;
extern Pname eobj;


#define DEFINED 01	/* definition fed through .dcl() */
#define SIMPLIFIED 02	/* in .simpl() */
#define DEF_SEEN 04	/* definition seen, but not processed */
			/*   used for class members in norm.c */
#define IN_ERROR 010

struct type : public node {
	bit	defined;	/* flags DEF_SEEN, DEFINED, SIMPLIFIED, IN_ERROR
					not used systematically yet
				*/
	void	print();
	void	dcl_print(Pname);
	void	base_print();
	void	del();

	Pname	is_cl_obj();	/* sets cl_obj_vec */
	int	is_ref();
	void	dcl(Ptable);
	int	tsizeof();
	bit	tconst();
	TOK	set_const(bit);
	int	align();
	TOK	kind(TOK,TOK);
	TOK	integral(TOK oo)	{ return kind(oo,I); };
	TOK	numeric(TOK oo)		{ return kind(oo,N); };
	TOK	num_ptr(TOK oo)		{ return kind(oo,P); };
	bit	fct_type();
	bit	vec_type();
	bit	check(Ptype, TOK);
	Ptype	deref();
	inline Pptr addrof();

	char*	signature(char*);
};

extern bit vrp_equiv;

class enumdef : public type {	/* ENUM */
public:
	Pname	mem;
	bit	e_body;
	int	no_of_enumerators;
		enumdef(Pname n)	{ base=ENUM; mem=n; };
	void	print();
	void	dcl_print(Pname);
	void	dcl(Pname, Ptable);
	void	simpl();
};

class classdef : public type {	/* CLASS */
public:
	Pname	clbase;
	bit	pubbase;
	bit	c_body;		/* print definition only once */
	TOK	csu;		/* CLASS, STRUCT, UNION, or ANON */
	char*	string;		/* name of class */
	Pname	privmem;
	Pname	pubmem;
	Ptable	memtbl;
	short	obj_size;
	short	real_size;	/* obj_size - alignment waste */
	char	obj_align;
	char	bit_ass;	// 1 if no member has operator=()

		classdef(TOK, Pname);

	void	print();
	void	dcl_print(Pname);
	void	simpl();

	Plist	friend_list;
	Pname	pubdef;
	Plist	tn_list;	// list of member names hiding type names
	Pclass	in_class;	/* enclosing class, or 0 */
	Ptype	this_type;
	char	virt_count;	/* number of virtual functions
					incl. virtuals in base classes
				*/
	Pname*	virt_init;	/* vector of jump table initializers */
	Pname	itor;		/* constructor X(X&) */
	Pname	conv;		/* operator T() chain */
	void	print_members();
	void	dcl(Pname, Ptable);
	bit	has_friend(Pname);
	TOK	is_simple()	{ return (csu==CLASS)?0:csu; };
	Pname	has_oper(TOK);
	Pname	has_ctor()	{ return memtbl->look("_ctor",0); }
	Pname	has_dtor()	{ return memtbl->look("_dtor",0); }
	Pname	has_itor()	{ return itor; }
	Pname	has_ictor();
};



class basetype : public type
	/*	ZTYPE CHAR SHORT INT LONG FLOAT DOUBLE
		FIELD EOBJ COBJ TYPE ANY
	*/
	/*	used for gathering all the attributes
		for a list of declarators

		ZTYPE is the (generic) type of ZERO
		ANY is the generic type of an undeclared name
	*/
{
public:
	bit	b_unsigned;
	bit	b_const;

	bit	b_typedef;
	bit	b_inline;
	bit	b_virtual;
	bit	b_short;
	bit	b_long;

	char	b_offset;
	TOK	b_sto;		/* AUTO STATIC EXTERN REGISTER 0 */
	Pname	b_name;		/* name of non-basic type */
	Pexpr	b_field; 	/* field size expression for a field */
	char	b_bits;		/* number of bits in field */
	Ptable	b_table;	/* memtbl for b_name, or 0 */
	union {
	Pname	b_xname;	/* extra name */
	Ptype	b_fieldtype;
	};

		basetype(TOK, Pname);

	Pbase	type_adj(TOK);
	Pbase	base_adj(Pbase);
	Pbase	name_adj(Pname);
	Pbase	check(Pname);
	Pname   aggr();
	void	normalize();
	void	dcl_print();
 	Pbase	arit_conv(Pbase);
};


struct fct : public type		/* FCT */
{
	Ptype	returns;
	Pname	argtype;
	Ptype	s_returns;
	Pname	f_this;
	Pblock	body;
	Pname	f_init;		/* base/member initializers
				   null name => base class init;
				   ids => member classes (with ctors)
				*/
	Pexpr	b_init;		/* base class initializer
				   ctor call after fct.dcl()
				*/
	short	frame_size;
	TOK	nargs;
	TOK	nargs_known;	/* KNOWN, ELLIPSIS, or 0 */
	char	f_virtual;	/* 1+index in virtual table, or 0 */
	char	f_inline;	/* 1 if inline, 2 if being expanded, else 0 */
	Pexpr	f_expr;		/* body expanded into an expression */
	Pexpr	last_expanded;
		fct(Ptype, Pname, TOK);

	void	argdcl(Pname,Pname);
	Ptype	normalize(Ptype);
	void	dcl_print();
	void	dcl(Pname);
	Pexpr	base_init(Pname, Pexpr, Ptable);
	Pexpr	mem_init(Pname, Pexpr, Ptable);
	bit	declared() { return nargs_known; };
	void	simpl();
	Pexpr	expand(Pname,Ptable,Pexpr);
};


struct name_list {
	Pname	f;
	Plist	l;
		name_list(Pname ff, Plist ll) { f=ff; l=ll; };
};

struct gen: public type		/* OVERLOAD */
{
	Plist	fct_list;
	char*	string;
		gen(char*);
	Pname	add(Pname, int);
	Pname  	find(Pfct);
};

struct vec : public type		/* VEC */
	/*	typ [ dim ] */
{
	Ptype	typ;
	Pexpr	dim;
	int	size;	

		vec(Ptype t, Pexpr e) { Nt++; base=VEC; typ=t; dim=e; };

	Ptype	normalize(Ptype);
	void	print();
};

struct ptr : public type		/* PTR RPTR*/
{
	Ptype	typ;
	bit	rdo;	// for "*const"

		ptr(TOK b, Ptype t, bit r = 0) { Nt++; base=b; typ=t; rdo=r; };
	Ptype	normalize(Ptype);
};

inline Pptr type.addrof() { return new ptr(PTR,this,0); }



/****************************** constants ********************************/

		/* STRING ZERO ICON FCON CCON ID */
		/* IVAL FVAL LVAL */

/***************************** expressions ********************************/


extern Pexpr next_elem();
extern void new_list(Pexpr);
extern void list_check(Pname, Ptype, Pexpr);
extern Pexpr ref_init(Pptr,Pexpr,Ptable);
extern Pexpr class_init(Pexpr,Ptype,Pexpr,Ptable);
extern Pexpr check_cond(Pexpr, TOK, Ptable);

	class expr : public node	/* PLUS, MINUS, etc. */
		/* IMPORTANT:	all expressions are of sizeof(expr) */
		/*	DEREF		=>	*e1 (e2==0) OR e1[e2]
	   		UMINUS		=>	-e2
	   		INCR (e1==0)	=>	++e2
	   		INCR (e2==0)	=>	e1++
	   		CM		=>	e1 , e2
	   		ILIST		=>	LC e1 RC   (an initializer list)
	   		a Pexpr may denote a name
		*/
	{
	public:
		union {
		Ptype	tp;
		int	syn_class;
		};
		union {
		Pexpr e1;
		char* string;
		};
		union {
		Pexpr	e2;
		Pexpr	n_initializer;
		char* string2;
		};
		union {			/* used by the derived classes */
		Ptype	tp2;
		Pname	fct_name;
		Pexpr	cond;
		Pname	mem;
		Ptype	as_type;
		Ptable	n_table;
		Pin	il;
		};

			expr(TOK, Pexpr, Pexpr);
			~expr();

		void	del();
		void	print();
		Pexpr	typ(Ptable);
		int	eval();
		int	lval(TOK);
		Ptype	fct_call(Ptable);
		Pexpr	address();
		Pexpr	contents();
		void	simpl();
		Pexpr	expand();
		bit	not_simple();
	};

	extern char* Neval;

	struct typed_obj : expr {
		typed_obj(TOK t, char* s) : (t,(Pexpr)s,0) { this=0; }
	};

	struct texpr : expr		// NEW CAST VALUE
	{
		texpr(TOK bb, Ptype tt, Pexpr ee) : (bb,ee,0) {this=0; tp2=tt;}
	};

	struct call : expr		// CALL
	{
		call(Pexpr aa, Pexpr bb) : (CALL,aa,bb) { this=0; }

		void	simpl();
		Pexpr	expand(Ptable);
	};

	struct qexpr : expr		// QUEST
	/* cond ? e1 : e2 */
	{
		qexpr(Pexpr ee, Pexpr ee1, Pexpr ee2) : (QUEST,ee1,ee2) { this=0; cond=ee; }
	};

	struct ref : expr		// REF DOT
	/* e1->mem OR e1.mem */
	{
		ref(TOK ba, Pexpr a, Pname b) : (ba,a,0) { this=0; mem=b; }
	};


	struct text_expr : expr		// TEXT
	{
		text_expr(char* a, char* b) : (TEXT,0,0) { string=a; string2=b; }
	};

/************************* names (are expressions) ****************************/

	class name : public expr {
		/* NAME TNAME and the keywords in the ktbl */
	public:
	/*	Pexpr	n_initializer;	*/
		int	n_val;		/* the value of n_initializer */
		TOK	n_oper;		/* name of operator or 0 */
		TOK	n_sto;		/* STO keyword: EXTERN, STATIC, AUTO, REGISTER, ENUM */
		TOK	n_stclass;	/* STATIC AUTO REGISTER 0 */
		TOK	n_scope;	/* EXTERN STATIC FCT ARG PUBLIC 0 */
		short	n_offset;	/* byte offset in frame or struct */
		Pname	n_list;
		Pname	n_tbl_list;
	/*	Ptable	n_table;	*/
		short	n_used;
		short	n_addr_taken;
		short	n_assigned_to;
		char	n_union;	/* 0 or union index */
		bit	n_evaluated;	/* 0 or n_val holds the value */
		short	lex_level;
		Loc	where;
		union {
		Pname	n_qualifier;	/* name of containing class */
		Ptable	n_realscope;	/* for labels (always entered in
					   function table) the table for the
					   actual scope in which label occurred.
					*/
		};

			name(char* =0);
			~name();

		void	del();
		void	print();
		void	dcl_print(TOK);
		Pname	normalize(Pbase, Pblock, bit);
		Pname	tdef();
		Pname	tname(TOK);
		Pname	dcl(Ptable,TOK);
		int	no_of_names();
		void	hide();
		void	unhide()	{ n_key=0; n_list=0; };
		void	use()		{ n_used++; };
		void	assign();
		void	call()		{ n_used++; };
		void	take_addr()	{ n_addr_taken++; };
		void	check_oper(Pname);
		void	simpl();
	};



/******************** statements *********************************/

	class stmt : public node {	/* BREAK CONTINUE DEFAULT */
	/*	IMPORTANT: all statement nodes have sizeof(stmt) */
	public:
		Pstmt	s;
		Pstmt	s_list;
		Loc	where;
		union {
		Pname	d;
		Pexpr	e2;
		Pstmt	has_default;
		int	case_value;
		};
		union {
		Pexpr	e;
		bit	own_tbl;
		Pstmt	s2;
		};
		Ptable	memtbl;
		union {
		Pstmt	for_init;
		Pstmt	else_stmt;
		Pstmt	case_list;
		bit	empty;
		};

			stmt(TOK, loc, Pstmt);
			~stmt();

		void	del();
		void	print();
		void	dcl();
		void	reached();
		Pstmt	simpl();
		Pstmt	expand();
		Pstmt	copy();
	};

extern Pname dcl_temp(Ptable, Pname);
extern char* temp(char*, char*, char*);
extern Ptable scope;
extern Ptable expand_tbl;
extern Pname expand_fn;

	struct estmt : public stmt	/* SM WHILE DO SWITCH RETURN CASE */
		/* SM (e!=0)	=>	e;
	   	in particular assignments and function calls
	   	SM (e==0)	=>	;	(the null statement)

	   	CASE		=>	case e : s ;
		*/
	{
		estmt(TOK t, loc ll, Pexpr ee, Pstmt ss) : (t,ll,ss) { this=0; e=ee; }
	};

	struct ifstmt : public stmt	/* IF */
		// else_stme==0 =>	if (e) s
	   	// else_stmt!=0 =>	if (e) s else else_stmt
	{
		ifstmt(loc ll, Pexpr ee, Pstmt ss1, Pstmt ss2)
			: (IF,ll,ss1) { this=0; e=ee; else_stmt=ss2; };
	};

	struct lstmt : public stmt	/* LABEL GOTO */
		/*
			d : s
			goto d
		*/
	{
		lstmt(TOK bb, loc ll, Pname nn, Pstmt ss) : (bb,ll,ss) { this=0; d=nn; }
	};

	struct forstmt : public stmt	/* FOR */
	{
		forstmt(loc ll, Pstmt fss, Pexpr ee1, Pexpr ee2, Pstmt ss)
			: (FOR,ll,ss) { this=0; for_init=fss; e=ee1; e2=ee2; }
	};

	struct block : public stmt 	/* BLOCK */
		/* { d s } */
	{
		block(loc ll, Pname nn, Pstmt ss) : (BLOCK,ll,ss) { this=0; d=nn; }
		void	dcl(Ptable);
		Pstmt	simpl();
	};

	struct pair : public stmt	/* PAIR */
	{
		pair(loc ll, Pstmt a, Pstmt b) : (PAIR,ll,a) { this=0; s2 = b; }
	};

class nlist {
public:
	Pname	head;
	Pname	tail;
		nlist(Pname);
	void	add(Pname n)	{ tail->n_list = n; tail = n; };
	void	add_list(Pname);
};

extern Pname name_unlist(nlist*);

class slist {
public:
	Pstmt	head;
	Pstmt	tail;
		slist(Pstmt s)	{ Nl++; head = tail = s; };
	void	add(Pstmt s)	{ tail->s_list = s; tail = s; };
};

extern Pstmt stmt_unlist(slist*);

class elist {
public:
	Pexpr	head;
	Pexpr	tail;
		elist(Pexpr e)	{ Nl++; head = tail = e; };
	void	add(Pexpr e)	{ tail->e2 = e; tail = e; };
};

extern Pexpr expr_unlist(elist*);

extern class dcl_context * cc;

class dcl_context {
public:
	Pname	c_this;	/* current fct's "this" */
	Ptype	tot;	/* type of "this" or 0 */
	Pname	not;	/* name of "this"'s class or 0 */
	Pclass	cot;	/* the definition of "this"'s class */
	Ptable	ftbl;	/* current fct's symbol table */
	Pname	nof;	/* current fct's name */

	void	stack()		{ cc++; *cc = *(cc-1); };
	void	unstack()	{ cc--; };
};

#define MAXCONT	20
extern dcl_context ccvec[MAXCONT];

extern bit can_coerce(Ptype, Ptype);
extern void yyerror(char*);
extern TOK back;

		/* "spy" counters: */
extern int Nspy;
extern int Nfile, Nline, Ntoken, Nname, Nfree_store, Nalloc, Nfree;
extern int NFn, NFtn, NFpv, NFbt, NFf, NFs, NFc, NFe, NFl;
extern char* line_format;

extern Plist isf_list;
extern Pstmt st_ilist;
extern Pstmt st_dlist;
extern Ptable sti_tbl;
extern Ptable std_tbl;

extern Ptype np_promote(TOK, TOK, TOK, Ptype, Ptype, TOK);
extern void new_key(char*, TOK, TOK);

extern Pname dcl_list;
extern int over_call(Pname, Pexpr);
extern Pname Nover;
extern Pname Ncoerce;
extern Nover_coerce;

const MIA = 8;
struct iline {
	Pname	fct_name;	/* fct called */
	Pin	i_next;
	Ptable	i_table;
	Pname	local[MIA];	/* local variable for arguments */
	Pexpr	arg[MIA];	/* actual arguments for call */
	Ptype	tp[MIA];	/* type of formal arguments */
};

extern Pexpr curr_expr;
extern Pin curr_icall;
#define FUDGE111 111

extern Pstmt curr_loop;
extern Pblock curr_block;
extern Pstmt curr_switch;
extern bit arg_err_suppress;
extern loc last_line;

extern no_of_undcl;
extern no_of_badcall;
extern Pname undcl, badcall;

extern int strlen(char*);
extern int strcpy(char*,char*);
extern int strcmp(char*,char*);
extern int str_to_int(char*);
extern int c_strlen(char* s);

extern Pname vec_new_fct;
extern Pname vec_del_fct;

#ifdef DEBUG
extern fprintf(FILE*, char* ...);
#define DB(a) fprintf a
#else
#define DB(a) /**/
#endif

extern Pname find_hidden(Pname);
extern TOK lalex();
extern int Nstd; // standard coercion used (derived* =>base* or int=>long or ...)

extern int stcount;	// number of names generated using make_name()
/* end */
