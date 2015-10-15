#line 1 "../../src/main.c"

/* <<cfront 10/10/85>> */
/* < ../../src/main.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/main.c"

#line 3 "../../incl/time.h"
struct tm { /* sizeof = 36 */
int _tm_tm_sec ; 
int _tm_tm_min ; 
int _tm_tm_hour ; 
int _tm_tm_mday ; 
int _tm_tm_mon ; 
int _tm_tm_year ; 
int _tm_tm_wday ; 
int _tm_tm_yday ; 
int _tm_tm_isdst ; 
} ; 

#line 14 "../../incl/time.h"
extern long time ( ) ; 

#line 15 "../../incl/time.h"
extern long clock ( ) ; 

#line 16 "../../incl/time.h"
extern struct tm * gmtime ( ) ; 

#line 17 "../../incl/time.h"
extern struct tm * localtime ( ) ; 

#line 18 "../../incl/time.h"
extern char * ctime ( ) ; 

#line 19 "../../incl/time.h"
extern char * asctime ( ) ; 

#line 20 "../../incl/time.h"
extern int tzset ( ) ; 

#line 21 "../../incl/time.h"
extern long timezone ; 

#line 22 "../../incl/time.h"
extern int daylight ; 

#line 23 "../../incl/time.h"
extern char * tzname [ 2] ; 

#line 32 "../../incl/ctype.h"
extern int toupper ( ) ; 

#line 33 "../../incl/ctype.h"
extern int tolower ( ) ; 

#line 35 "../../incl/ctype.h"
int isalnum ( ) ; 

#line 36 "../../incl/ctype.h"
int isalpha ( ) ; 

#line 37 "../../incl/ctype.h"
int iscntrl ( ) ; 

#line 38 "../../incl/ctype.h"
int isdigit ( ) ; 

#line 39 "../../incl/ctype.h"
int isgraph ( ) ; 

#line 40 "../../incl/ctype.h"
int islower ( ) ; 

#line 41 "../../incl/ctype.h"
int isprint ( ) ; 

#line 42 "../../incl/ctype.h"
int ispunct ( ) ; 

#line 43 "../../incl/ctype.h"
int isspace ( ) ; 

#line 44 "../../incl/ctype.h"
int isupper ( ) ; 

#line 45 "../../incl/ctype.h"
int isxdigit ( ) ; 

#line 24 "../../src/main.c"
extern char * ctime ( ) ; 

#line 25 "../../src/main.c"
extern long time ( ) ; 

#line 26 "../../src/main.c"
long start_time = 0 ; 

#line 26 "../../src/main.c"
long stop_time = 0 ; 
typedef char * va_list ; 

#line 36 "../../incl/stdio.h"
extern int _flsbuf ( ) ; 

#line 37 "../../incl/stdio.h"
extern int _filbuf ( ) ; 

#line 50 "../../incl/stdio.h"
extern struct _iobuf * fopen ( ) ; 

#line 51 "../../incl/stdio.h"
extern struct _iobuf * fdopen ( ) ; 

#line 52 "../../incl/stdio.h"
extern struct _iobuf * freopen ( ) ; 

#line 53 "../../incl/stdio.h"
extern long ftell ( ) ; 

#line 54 "../../incl/stdio.h"
extern char * fgets ( ) ; 

#line 61 "../../incl/stdio.h"
extern char * gets ( ) ; 

#line 62 "../../incl/stdio.h"
extern int puts ( ) ; 

#line 63 "../../incl/stdio.h"
extern int fputs ( ) ; 

#line 64 "../../incl/stdio.h"
extern int printf ( ) ; 

#line 65 "../../incl/stdio.h"
extern int fprintf ( ) ; 

#line 66 "../../incl/stdio.h"
extern int sprintf ( ) ; 

#line 67 "../../incl/stdio.h"
extern int scanf ( ) ; 

#line 68 "../../incl/stdio.h"
extern int fscanf ( ) ; 

#line 69 "../../incl/stdio.h"
extern int sscanf ( ) ; 

#line 70 "../../incl/stdio.h"
extern int fread ( ) ; 

#line 71 "../../incl/stdio.h"
extern int fwrite ( ) ; 

#line 72 "../../incl/stdio.h"
extern int fclose ( ) ; 

#line 73 "../../incl/stdio.h"
extern int fflush ( ) ; 

#line 74 "../../incl/stdio.h"
extern int clearerr ( ) ; 

#line 75 "../../incl/stdio.h"
extern int fseek ( ) ; 

#line 76 "../../incl/stdio.h"
extern int rewind ( ) ; 

#line 77 "../../incl/stdio.h"
extern int getw ( ) ; 

#line 78 "../../incl/stdio.h"
extern int fgetc ( ) ; 

#line 79 "../../incl/stdio.h"
extern struct _iobuf * popen ( ) ; 

#line 80 "../../incl/stdio.h"
extern int pclose ( ) ; 

#line 81 "../../incl/stdio.h"
extern int putw ( ) ; 

#line 82 "../../incl/stdio.h"
extern int fputc ( ) ; 

#line 83 "../../incl/stdio.h"
extern int setbuf ( ) ; 

#line 84 "../../incl/stdio.h"
extern int ungetc ( ) ; 

#line 86 "../../incl/stdio.h"
extern int exit ( ) ; 

#line 87 "../../incl/stdio.h"
extern int abort ( ) ; 

#line 89 "../../incl/stdio.h"
extern int atoi ( ) ; 

#line 90 "../../incl/stdio.h"
extern double atof ( ) ; 

#line 91 "../../incl/stdio.h"
extern long atol ( ) ; 

#line 96 "../../incl/stdio.h"
extern struct _iobuf * tmpfile ( ) ; 

#line 97 "../../incl/stdio.h"
extern char * ctermid ( ) ; 

#line 98 "../../incl/stdio.h"
extern char * cuserid ( ) ; 

#line 99 "../../incl/stdio.h"
extern char * tempnam ( ) ; 

#line 100 "../../incl/stdio.h"
extern char * tmpnam ( ) ; 

#line 101 "../../incl/stdio.h"
extern int vprintf ( ) ; 

#line 102 "../../incl/stdio.h"
extern int vfprintf ( ) ; 

#line 103 "../../incl/stdio.h"
extern int vsprintf ( ) ; 

#line 104 "../../incl/stdio.h"
extern int setvbuf ( ) ; 

#line 106 "../../incl/stdio.h"
extern int perror ( ) ; 

#line 109 "../../incl/stdio.h"
extern char * sys_errlist [ ] ; 

#line 110 "../../incl/stdio.h"
extern int sys_nerr ; 

#line 111 "../../incl/stdio.h"
extern unsigned char * _bufendtab [ ] ; 

#line 113 "../../incl/stdio.h"
int feof ( ) ; 

#line 114 "../../incl/stdio.h"
int ferror ( ) ; 

#line 115 "../../incl/stdio.h"
int fileno ( ) ; 

#line 116 "../../incl/stdio.h"
char * strerror ( ) ; 

#line 118 "../../incl/stdio.h"
extern struct _iobuf * _get_stdin ( ) ; 

#line 119 "../../incl/stdio.h"
extern struct _iobuf * _get_stdout ( ) ; 

#line 120 "../../incl/stdio.h"
extern struct _iobuf * _get_stderr ( ) ; 

#line 132 "../../incl/stdio.h"
int _main ( ) ; 

#line 6 "../../src/token.h"
extern int lex_clear ( ) ; 

#line 7 "../../src/token.h"
extern int ktbl_init ( ) ; 

#line 8 "../../src/token.h"
extern int otbl_init ( ) ; 

#line 19 "../../src/token.h"
extern char * keys [ 256] ; 
typedef short TOK ; 
typedef struct node * PP ; 
typedef char bit ; 
typedef int ( * PFI ) ( ) ; 
typedef int ( * PFV ) ( ) ; 
typedef struct node * Pnode ; 
typedef struct key * Pkey ; 
typedef struct name * Pname ; 
typedef struct basetype * Pbase ; 
typedef struct type * Ptype ; 
typedef struct fct * Pfct ; 
typedef struct field * Pfield ; 
typedef struct expr * Pexpr ; 
typedef struct qexpr * Pqexpr ; 
typedef struct texpr * Ptexpr ; 
typedef struct classdef * Pclass ; 
typedef struct enumdef * Penum ; 
typedef struct stmt * Pstmt ; 
typedef struct estmt * Pestmt ; 
typedef struct tstmt * Ptstmt ; 
typedef struct vec * Pvec ; 
typedef struct ptr * Pptr ; 
typedef struct block * Pblock ; 
typedef struct table * Ptable ; 
typedef struct loc Loc ; 
typedef struct call * Pcall ; 
typedef struct gen * Pgen ; 
typedef struct ref * Pref ; 
typedef struct name_list * Plist ; 
typedef struct iline * Pin ; 

#line 31 "../../src/cfront.h"
extern char * prog_name ; 

#line 32 "../../src/cfront.h"
extern bit old_fct_accepted ; 

#line 36 "../../src/cfront.h"
extern bit fct_void ; 

#line 44 "../../src/cfront.h"
extern int inline_restr ; 

#line 46 "../../src/cfront.h"
extern Pname name_free ; 

#line 47 "../../src/cfront.h"
extern Pexpr expr_free ; 

#line 48 "../../src/cfront.h"
extern Pstmt stmt_free ; 

#line 50 "../../src/cfront.h"
extern int Nspy ; 

#line 50 "../../src/cfront.h"
extern int Nn ; 

#line 50 "../../src/cfront.h"
extern int Nbt ; 

#line 50 "../../src/cfront.h"
extern int Nt ; 

#line 50 "../../src/cfront.h"
extern int Ne ; 

#line 50 "../../src/cfront.h"
extern int Ns ; 

#line 50 "../../src/cfront.h"
extern int Nstr ; 

#line 50 "../../src/cfront.h"
extern int Nc ; 

#line 50 "../../src/cfront.h"
extern int Nl ; 

#line 52 "../../src/cfront.h"
extern TOK lex ( ) ; 

#line 53 "../../src/cfront.h"
extern Pname syn ( ) ; 

#line 54 "../../src/cfront.h"
extern bit print_mode ; 

#line 57 "../../src/cfront.h"
extern int init_print ( ) ; 

#line 58 "../../src/cfront.h"
extern int init_lex ( ) ; 

#line 59 "../../src/cfront.h"
extern int int_syn ( ) ; 

#line 60 "../../src/cfront.h"
extern int ext ( ) ; 

#line 62 "../../src/cfront.h"
extern char * make_name ( ) ; 

#line 67 "../../src/cfront.h"
struct loc { /* sizeof = 4 */
short _loc_file ; 
short _loc_line ; 
} ; 
int _loc_put ( ) ; 
int _loc_putline ( ) ; 

#line 76 "../../src/cfront.h"
extern Loc curloc ; 

#line 77 "../../src/cfront.h"
extern int curr_file ; 

#line 80 "../../src/cfront.h"
extern int error ( ) ; 

#line 81 "../../src/cfront.h"
extern int errorFI_PC__E ( ) ; 

#line 82 "../../src/cfront.h"
extern int errorFPCloc__PC__E ( ) ; 

#line 83 "../../src/cfront.h"
extern int errorFPC__E ( ) ; 

#line 84 "../../src/cfront.h"
extern int error_count ; 

#line 85 "../../src/cfront.h"
extern bit debug ; 

#line 86 "../../src/cfront.h"
extern Ptype outlined ; 

#line 88 "../../src/cfront.h"
extern struct _iobuf * in_file ; 

#line 89 "../../src/cfront.h"
extern struct _iobuf * out_file ; 

#line 90 "../../src/cfront.h"
extern char scan_started ; 

#line 91 "../../src/cfront.h"
extern bit warn ; 

#line 92 "../../src/cfront.h"
extern int br_level ; 

#line 93 "../../src/cfront.h"
extern int bl_level ; 

#line 94 "../../src/cfront.h"
extern Ptable ktbl ; 

#line 95 "../../src/cfront.h"
extern char * oper_name ( ) ; 

#line 96 "../../src/cfront.h"
extern Ptable gtbl ; 

#line 97 "../../src/cfront.h"
extern Pclass ccl ; 

#line 98 "../../src/cfront.h"
extern Pbase defa_type ; 

#line 99 "../../src/cfront.h"
extern Pbase moe_type ; 

#line 101 "../../src/cfront.h"
extern Pstmt Cstmt ; 

#line 102 "../../src/cfront.h"
extern Pname Cdcl ; 

#line 103 "../../src/cfront.h"
extern int put_dcl_context ( ) ; 

#line 105 "../../src/cfront.h"
extern Ptable any_tbl ; 

#line 106 "../../src/cfront.h"
extern Pbase any_type ; 

#line 107 "../../src/cfront.h"
extern Pbase int_type ; 

#line 108 "../../src/cfront.h"
extern Pbase char_type ; 

#line 109 "../../src/cfront.h"
extern Pbase short_type ; 

#line 110 "../../src/cfront.h"
extern Pbase long_type ; 

#line 111 "../../src/cfront.h"
extern Pbase uchar_type ; 

#line 112 "../../src/cfront.h"
extern Pbase ushort_type ; 

#line 113 "../../src/cfront.h"
extern Pbase uint_type ; 

#line 114 "../../src/cfront.h"
extern Pbase ulong_type ; 

#line 115 "../../src/cfront.h"
extern Ptype Pchar_type ; 

#line 116 "../../src/cfront.h"
extern Ptype Pint_type ; 

#line 117 "../../src/cfront.h"
extern Ptype Pfctvec_type ; 

#line 118 "../../src/cfront.h"
extern Pbase float_type ; 

#line 119 "../../src/cfront.h"
extern Pbase double_type ; 

#line 120 "../../src/cfront.h"
extern Pbase void_type ; 

#line 121 "../../src/cfront.h"
extern Ptype Pvoid_type ; 

#line 122 "../../src/cfront.h"
extern Pbase zero_type ; 

#line 124 "../../src/cfront.h"
extern int byte_offset ; 

#line 125 "../../src/cfront.h"
extern int bit_offset ; 

#line 126 "../../src/cfront.h"
extern int max_align ; 

#line 127 "../../src/cfront.h"
extern int stack_size ; 

#line 128 "../../src/cfront.h"
extern int enum_count ; 

#line 129 "../../src/cfront.h"
extern int const_save ; 

#line 131 "../../src/cfront.h"
extern Pname class_name ( ) ; 

#line 132 "../../src/cfront.h"
extern Pname gen_find ( ) ; 

#line 133 "../../src/cfront.h"
extern char * gen_name ( ) ; 

#line 135 "../../src/cfront.h"
extern Pexpr dummy ; 

#line 136 "../../src/cfront.h"
extern Pexpr zero ; 

#line 137 "../../src/cfront.h"
extern Pexpr one ; 

#line 138 "../../src/cfront.h"
extern Pname sta_name ; 

#line 144 "../../src/cfront.h"
struct node { /* sizeof = 8 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
} ; 

#line 150 "../../src/cfront.h"
extern Pclass Ebase ; 

#line 150 "../../src/cfront.h"
extern Pclass Epriv ; 

#line 152 "../../src/cfront.h"
struct table { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
short _table_size ; 
short _table_hashsize ; 
Pname * _table_entries ; 
short * _table_hashtbl ; 
short _table_free_slot ; 
short _table_init_stat ; 
Pstmt _table_real_block ; 
Ptable _table_next ; 
Pname _table_t_name ; 
} ; 
struct table * _table__ctor ( ) ; 
Pname _table_look ( ) ; 
Pname _table_insert ( ) ; 
int _table_grow ( ) ; 
Pname _table_get_mem ( ) ; 
int _table_dcl_print ( ) ; 
Pname _table_lookc ( ) ; 
Pexpr _table_find_name ( ) ; 
int _table_del ( ) ; 

#line 184 "../../src/cfront.h"
extern bit Nold ; 

#line 185 "../../src/cfront.h"
extern bit vec_const ; 

#line 186 "../../src/cfront.h"
extern int restore ( ) ; 

#line 187 "../../src/cfront.h"
extern int set_scope ( ) ; 

#line 188 "../../src/cfront.h"
extern Plist modified_tn ; 

#line 189 "../../src/cfront.h"
extern Pbase start_cl ( ) ; 

#line 190 "../../src/cfront.h"
extern int end_cl ( ) ; 

#line 191 "../../src/cfront.h"
extern Pbase end_enum ( ) ; 

#line 195 "../../src/cfront.h"
extern bit new_type ; 

#line 196 "../../src/cfront.h"
extern Pname cl_obj_vec ; 

#line 197 "../../src/cfront.h"
extern Pname eobj ; 

#line 206 "../../src/cfront.h"
struct type { /* sizeof = 8 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
} ; 
int _type_print ( ) ; 
int _type_dcl_print ( ) ; 
int _type_base_print ( ) ; 
int _type_del ( ) ; 
Pname _type_is_cl_obj ( ) ; 
int _type_is_ref ( ) ; 
int _type_dcl ( ) ; 
int _type_tsizeof ( ) ; 
bit _type_tconst ( ) ; 
TOK _type_set_const ( ) ; 
int _type_align ( ) ; 
TOK _type_kind ( ) ; 
bit _type_fct_type ( ) ; 
bit _type_vec_type ( ) ; 
bit _type_check ( ) ; 
Ptype _type_deref ( ) ; 
char * _type_signature ( ) ; 

#line 235 "../../src/cfront.h"
extern bit vrp_equiv ; 

#line 237 "../../src/cfront.h"
struct enumdef { /* sizeof = 20 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Pname _enumdef_mem ; 
bit _enumdef_e_body ; 
int _enumdef_no_of_enumerators ; 
} ; 
int _enumdef_print ( ) ; 
int _enumdef_dcl_print ( ) ; 
int _enumdef_dcl ( ) ; 
int _enumdef_simpl ( ) ; 

#line 249 "../../src/cfront.h"
struct classdef { /* sizeof = 76 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Pname _classdef_clbase ; 
bit _classdef_pubbase ; 
bit _classdef_c_body ; 
TOK _classdef_csu ; 
char * _classdef_string ; 
Pname _classdef_privmem ; 
Pname _classdef_pubmem ; 
Ptable _classdef_memtbl ; 
short _classdef_obj_size ; 
short _classdef_real_size ; 
char _classdef_obj_align ; 
char _classdef_bit_ass ; 
Plist _classdef_friend_list ; 
Pname _classdef_pubdef ; 
Plist _classdef_tn_list ; 
Pclass _classdef_in_class ; 
Ptype _classdef_this_type ; 
char _classdef_virt_count ; 
Pname * _classdef_virt_init ; 
Pname _classdef_itor ; 
Pname _classdef_conv ; 
} ; 
struct classdef * _classdef__ctor ( ) ; 
int _classdef_print ( ) ; 
int _classdef_dcl_print ( ) ; 
int _classdef_simpl ( ) ; 
int _classdef_print_members ( ) ; 
int _classdef_dcl ( ) ; 
bit _classdef_has_friend ( ) ; 
Pname _classdef_has_oper ( ) ; 
Pname _classdef_has_ictor ( ) ; 

#line 304 "../../src/cfront.h"
union _C1 { /* sizeof = 4 */
Pname __C1_b_xname ; 
Ptype __C1_b_fieldtype ; 
} ; 
struct basetype { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
bit _basetype_b_unsigned ; 
bit _basetype_b_const ; 
bit _basetype_b_typedef ; 
bit _basetype_b_inline ; 
bit _basetype_b_virtual ; 
bit _basetype_b_short ; 
bit _basetype_b_long ; 
char _basetype_b_offset ; 
TOK _basetype_b_sto ; 
Pname _basetype_b_name ; 
Pexpr _basetype_b_field ; 
char _basetype_b_bits ; 
Ptable _basetype_b_table ; 
union _C1 _basetype__O1 ; 
} ; 
struct basetype * _basetype__ctor ( ) ; 
Pbase _basetype_type_adj ( ) ; 
Pbase _basetype_base_adj ( ) ; 
Pbase _basetype_name_adj ( ) ; 
Pbase _basetype_check ( ) ; 
Pname _basetype_aggr ( ) ; 
int _basetype_normalize ( ) ; 
int _basetype_dcl_print ( ) ; 
Pbase _basetype_arit_conv ( ) ; 

#line 340 "../../src/cfront.h"
struct fct { /* sizeof = 52 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Ptype _fct_returns ; 
Pname _fct_argtype ; 
Ptype _fct_s_returns ; 
Pname _fct_f_this ; 
Pblock _fct_body ; 
Pname _fct_f_init ; 
Pexpr _fct_b_init ; 
short _fct_frame_size ; 
TOK _fct_nargs ; 
TOK _fct_nargs_known ; 
char _fct_f_virtual ; 
char _fct_f_inline ; 
Pexpr _fct_f_expr ; 
Pexpr _fct_last_expanded ; 
} ; 
struct fct * _fct__ctor ( ) ; 
int _fct_argdcl ( ) ; 
Ptype _fct_normalize ( ) ; 
int _fct_dcl_print ( ) ; 
int _fct_dcl ( ) ; 
Pexpr _fct_base_init ( ) ; 
Pexpr _fct_mem_init ( ) ; 
int _fct_simpl ( ) ; 
Pexpr _fct_expand ( ) ; 

#line 374 "../../src/cfront.h"
struct name_list { /* sizeof = 8 */
Pname _name_list_f ; 
Plist _name_list_l ; 
} ; 

#line 381 "../../src/cfront.h"
struct gen { /* sizeof = 16 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Plist _gen_fct_list ; 
char * _gen_string ; 
} ; 
struct gen * _gen__ctor ( ) ; 
Pname _gen_add ( ) ; 
Pname _gen_find ( ) ; 

#line 391 "../../src/cfront.h"
struct vec { /* sizeof = 20 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Ptype _vec_typ ; 
Pexpr _vec_dim ; 
int _vec_size ; 
} ; 
Ptype _vec_normalize ( ) ; 
int _vec_print ( ) ; 

#line 403 "../../src/cfront.h"
struct ptr { /* sizeof = 16 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
bit _type_defined ; 
Ptype _ptr_typ ; 
bit _ptr_rdo ; 
} ; 
Ptype _ptr_normalize ( ) ; 

#line 411 "../../src/cfront.h"
; 

#line 423 "../../src/cfront.h"
extern Pexpr next_elem ( ) ; 

#line 424 "../../src/cfront.h"
extern int new_list ( ) ; 

#line 425 "../../src/cfront.h"
extern int list_check ( ) ; 

#line 426 "../../src/cfront.h"
extern Pexpr ref_init ( ) ; 

#line 427 "../../src/cfront.h"
extern Pexpr class_init ( ) ; 

#line 428 "../../src/cfront.h"
extern Pexpr check_cond ( ) ; 

#line 440 "../../src/cfront.h"
union _C2 { /* sizeof = 4 */
Ptype __C2_tp ; 
int __C2_syn_class ; 
} ; 
union _C3 { /* sizeof = 4 */
Pexpr __C3_e1 ; 
char * __C3_string ; 
} ; 
union _C4 { /* sizeof = 4 */
Pexpr __C4_e2 ; 
Pexpr __C4_n_initializer ; 
char * __C4_string2 ; 
} ; 
union _C5 { /* sizeof = 4 */
Ptype __C5_tp2 ; 
Pname __C5_fct_name ; 
Pexpr __C5_cond ; 
Pname __C5_mem ; 
Ptype __C5_as_type ; 
Ptable __C5_n_table ; 
Pin __C5_il ; 
} ; 
struct expr { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 
struct expr * _expr__ctor ( ) ; 
int _expr__dtor ( ) ; 
int _expr_del ( ) ; 
int _expr_print ( ) ; 
Pexpr _expr_typ ( ) ; 
int _expr_eval ( ) ; 
int _expr_lval ( ) ; 
Ptype _expr_fct_call ( ) ; 
Pexpr _expr_address ( ) ; 
Pexpr _expr_contents ( ) ; 
int _expr_simpl ( ) ; 
Pexpr _expr_expand ( ) ; 
bit _expr_not_simple ( ) ; 

#line 481 "../../src/cfront.h"
extern char * Neval ; 

#line 483 "../../src/cfront.h"
struct typed_obj { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 

#line 488 "../../src/cfront.h"
struct texpr { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 

#line 493 "../../src/cfront.h"
struct call { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 
int _call_simpl ( ) ; 
Pexpr _call_expand ( ) ; 

#line 502 "../../src/cfront.h"
struct qexpr { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 

#line 508 "../../src/cfront.h"
struct ref { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 

#line 514 "../../src/cfront.h"
struct text_expr { /* sizeof = 24 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
} ; 

#line 520 "../../src/cfront.h"
union _C6 { /* sizeof = 4 */
Pname __C6_n_qualifier ; 
Ptable __C6_n_realscope ; 
} ; 
struct name { /* sizeof = 68 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
union _C2 _expr__O2 ; 
union _C3 _expr__O3 ; 
union _C4 _expr__O4 ; 
union _C5 _expr__O5 ; 
int _name_n_val ; 
TOK _name_n_oper ; 
TOK _name_n_sto ; 
TOK _name_n_stclass ; 
TOK _name_n_scope ; 
short _name_n_offset ; 
Pname _name_n_list ; 
Pname _name_n_tbl_list ; 
short _name_n_used ; 
short _name_n_addr_taken ; 
short _name_n_assigned_to ; 
char _name_n_union ; 
bit _name_n_evaluated ; 
short _name_lex_level ; 
Loc _name_where ; 
union _C6 _name__O6 ; 
} ; 
struct name * _name__ctor ( ) ; 
int _name__dtor ( ) ; 
int _name_del ( ) ; 
int _name_print ( ) ; 
int _name_dcl_print ( ) ; 
Pname _name_normalize ( ) ; 
Pname _name_tdef ( ) ; 
Pname _name_tname ( ) ; 
Pname _name_dcl ( ) ; 
int _name_no_of_names ( ) ; 
int _name_hide ( ) ; 
int _name_assign ( ) ; 
int _name_check_oper ( ) ; 
int _name_simpl ( ) ; 

#line 573 "../../src/cfront.h"
union _C7 { /* sizeof = 4 */
Pname __C7_d ; 
Pexpr __C7_e2 ; 
Pstmt __C7_has_default ; 
int __C7_case_value ; 
} ; 
union _C8 { /* sizeof = 4 */
Pexpr __C8_e ; 
bit __C8_own_tbl ; 
Pstmt __C8_s2 ; 
} ; 
union _C9 { /* sizeof = 4 */
Pstmt __C9_for_init ; 
Pstmt __C9_else_stmt ; 
Pstmt __C9_case_list ; 
bit __C9_empty ; 
} ; 
struct stmt { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 
struct stmt * _stmt__ctor ( ) ; 
int _stmt__dtor ( ) ; 
int _stmt_del ( ) ; 
int _stmt_print ( ) ; 
int _stmt_dcl ( ) ; 
int _stmt_reached ( ) ; 
Pstmt _stmt_simpl ( ) ; 
Pstmt _stmt_expand ( ) ; 
Pstmt _stmt_copy ( ) ; 

#line 610 "../../src/cfront.h"
extern Pname dcl_temp ( ) ; 

#line 611 "../../src/cfront.h"
extern char * temp ( ) ; 

#line 612 "../../src/cfront.h"
extern Ptable scope ; 

#line 613 "../../src/cfront.h"
extern Ptable expand_tbl ; 

#line 614 "../../src/cfront.h"
extern Pname expand_fn ; 

#line 623 "../../src/cfront.h"
struct estmt { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 

#line 630 "../../src/cfront.h"
struct ifstmt { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 

#line 640 "../../src/cfront.h"
struct lstmt { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 

#line 645 "../../src/cfront.h"
struct forstmt { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 

#line 652 "../../src/cfront.h"
struct block { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 
int _block_dcl ( ) ; 
Pstmt _block_simpl ( ) ; 

#line 659 "../../src/cfront.h"
struct pair { /* sizeof = 36 */
TOK _node_base ; 
TOK _node_n_key ; 
bit _node_permanent ; 
Pstmt _stmt_s ; 
Pstmt _stmt_s_list ; 
Loc _stmt_where ; 
union _C7 _stmt__O7 ; 
union _C8 _stmt__O8 ; 
Ptable _stmt_memtbl ; 
union _C9 _stmt__O9 ; 
} ; 

#line 663 "../../src/cfront.h"
struct nlist { /* sizeof = 8 */
Pname _nlist_head ; 
Pname _nlist_tail ; 
} ; 
struct nlist * _nlist__ctor ( ) ; 
int _nlist_add_list ( ) ; 

#line 672 "../../src/cfront.h"
extern Pname name_unlist ( ) ; 

#line 674 "../../src/cfront.h"
struct slist { /* sizeof = 8 */
Pstmt _slist_head ; 
Pstmt _slist_tail ; 
} ; 

#line 682 "../../src/cfront.h"
extern Pstmt stmt_unlist ( ) ; 

#line 684 "../../src/cfront.h"
struct elist { /* sizeof = 8 */
Pexpr _elist_head ; 
Pexpr _elist_tail ; 
} ; 

#line 692 "../../src/cfront.h"
extern Pexpr expr_unlist ( ) ; 

#line 694 "../../src/cfront.h"
extern struct dcl_context * cc ; 

#line 696 "../../src/cfront.h"
struct dcl_context { /* sizeof = 24 */
Pname _dcl_context_c_this ; 
Ptype _dcl_context_tot ; 
Pname _dcl_context_not ; 
Pclass _dcl_context_cot ; 
Ptable _dcl_context_ftbl ; 
Pname _dcl_context_nof ; 
} ; 

#line 710 "../../src/cfront.h"
extern struct dcl_context ccvec [ 20] ; 

#line 712 "../../src/cfront.h"
extern bit can_coerce ( ) ; 

#line 713 "../../src/cfront.h"
extern int yyerror ( ) ; 

#line 714 "../../src/cfront.h"
extern TOK back ; 

#line 717 "../../src/cfront.h"
extern int Nspy ; 

#line 718 "../../src/cfront.h"
extern int Nfile ; 

#line 718 "../../src/cfront.h"
extern int Nline ; 

#line 718 "../../src/cfront.h"
extern int Ntoken ; 

#line 718 "../../src/cfront.h"
extern int Nname ; 

#line 718 "../../src/cfront.h"
extern int Nfree_store ; 

#line 718 "../../src/cfront.h"
extern int Nalloc ; 

#line 718 "../../src/cfront.h"
extern int Nfree ; 

#line 719 "../../src/cfront.h"
extern int NFn ; 

#line 719 "../../src/cfront.h"
extern int NFtn ; 

#line 719 "../../src/cfront.h"
extern int NFpv ; 

#line 719 "../../src/cfront.h"
extern int NFbt ; 

#line 719 "../../src/cfront.h"
extern int NFf ; 

#line 719 "../../src/cfront.h"
extern int NFs ; 

#line 719 "../../src/cfront.h"
extern int NFc ; 

#line 719 "../../src/cfront.h"
extern int NFe ; 

#line 719 "../../src/cfront.h"
extern int NFl ; 

#line 720 "../../src/cfront.h"
extern char * line_format ; 

#line 722 "../../src/cfront.h"
extern Plist isf_list ; 

#line 723 "../../src/cfront.h"
extern Pstmt st_ilist ; 

#line 724 "../../src/cfront.h"
extern Pstmt st_dlist ; 

#line 725 "../../src/cfront.h"
extern Ptable sti_tbl ; 

#line 726 "../../src/cfront.h"
extern Ptable std_tbl ; 

#line 728 "../../src/cfront.h"
extern Ptype np_promote ( ) ; 

#line 729 "../../src/cfront.h"
extern int new_key ( ) ; 

#line 731 "../../src/cfront.h"
extern Pname dcl_list ; 

#line 732 "../../src/cfront.h"
extern int over_call ( ) ; 

#line 733 "../../src/cfront.h"
extern Pname Nover ; 

#line 734 "../../src/cfront.h"
extern Pname Ncoerce ; 

#line 735 "../../src/cfront.h"
extern int Nover_coerce ; 

#line 737 "../../src/cfront.h"

#line 738 "../../src/cfront.h"
struct iline { /* sizeof = 108 */
Pname _iline_fct_name ; 
Pin _iline_i_next ; 
Ptable _iline_i_table ; 
Pname _iline_local [ 8] ; 
Pexpr _iline_arg [ 8] ; 
Ptype _iline_tp [ 8] ; 
} ; 

#line 747 "../../src/cfront.h"
extern Pexpr curr_expr ; 

#line 748 "../../src/cfront.h"
extern Pin curr_icall ; 

#line 751 "../../src/cfront.h"
extern Pstmt curr_loop ; 

#line 752 "../../src/cfront.h"
extern Pblock curr_block ; 

#line 753 "../../src/cfront.h"
extern Pstmt curr_switch ; 

#line 754 "../../src/cfront.h"
extern bit arg_err_suppress ; 

#line 755 "../../src/cfront.h"
extern struct loc last_line ; 

#line 757 "../../src/cfront.h"
extern int no_of_undcl ; 

#line 758 "../../src/cfront.h"
extern int no_of_badcall ; 

#line 759 "../../src/cfront.h"
extern Pname undcl ; 

#line 759 "../../src/cfront.h"
extern Pname badcall ; 

#line 761 "../../src/cfront.h"
extern int strlen ( ) ; 

#line 762 "../../src/cfront.h"
extern int strcpy ( ) ; 

#line 763 "../../src/cfront.h"
extern int strcmp ( ) ; 

#line 764 "../../src/cfront.h"
extern int str_to_int ( ) ; 

#line 765 "../../src/cfront.h"
extern int c_strlen ( ) ; 

#line 767 "../../src/cfront.h"
extern Pname vec_new_fct ; 

#line 768 "../../src/cfront.h"
extern Pname vec_del_fct ; 

#line 777 "../../src/cfront.h"
extern Pname find_hidden ( ) ; 

#line 778 "../../src/cfront.h"
extern TOK lalex ( ) ; 

#line 779 "../../src/cfront.h"
extern int Nstd ; 

#line 781 "../../src/cfront.h"
extern int stcount ; 

#line 30 "../../src/main.c"
char * prog_name = ( char * ) "<<cfront 10/10/85>>"; 

#line 32 "../../src/main.c"
extern char * src_file_name ; 

#line 33 "../../src/main.c"
char * src_file_name = 0 ; 

#line 35 "../../src/main.c"
bit Styp = 1 ; 

#line 36 "../../src/main.c"
bit Ssimpl = 1 ; 

#line 38 "../../src/main.c"
bit old_fct_accepted ; 

#line 39 "../../src/main.c"
bit fct_void ; 

#line 41 "../../src/main.c"
char * line_format = ( char * ) "\n# %d \"%s\"\n"; 

#line 43 "../../src/main.c"
Plist isf_list ; 

#line 44 "../../src/main.c"
Pstmt st_ilist ; 

#line 45 "../../src/main.c"
Pstmt st_dlist ; 

#line 46 "../../src/main.c"
Ptable sti_tbl ; 

#line 47 "../../src/main.c"
Ptable std_tbl ; 

#line 49 "../../src/main.c"
int Nspy = 0 ; 

#line 50 "../../src/main.c"
int Nfile = 1 ; 

#line 50 "../../src/main.c"
int Nline = 0 ; 

#line 50 "../../src/main.c"
int Ntoken = 0 ; 

#line 51 "../../src/main.c"
int Nfree_store = 0 ; 

#line 51 "../../src/main.c"
int Nalloc = 0 ; 

#line 51 "../../src/main.c"
int Nfree = 0 ; 

#line 52 "../../src/main.c"
int Nname = 0 ; 

#line 53 "../../src/main.c"
int Nn = 0 ; 

#line 53 "../../src/main.c"
int Nbt = 0 ; 

#line 53 "../../src/main.c"
int Nt = 0 ; 

#line 53 "../../src/main.c"
int Ne = 0 ; 

#line 53 "../../src/main.c"
int Ns = 0 ; 

#line 53 "../../src/main.c"
int Nc = 0 ; 

#line 53 "../../src/main.c"
int Nstr = 0 ; 

#line 53 "../../src/main.c"
int Nl = 0 ; 

#line 54 "../../src/main.c"
extern int NFn ; 

#line 54 "../../src/main.c"
extern int NFtn ; 

#line 54 "../../src/main.c"
extern int NFbt ; 

#line 54 "../../src/main.c"
extern int NFpv ; 

#line 54 "../../src/main.c"
extern int NFf ; 

#line 54 "../../src/main.c"
extern int NFe ; 

#line 54 "../../src/main.c"
extern int NFs ; 

#line 54 "../../src/main.c"
extern int NFc ; 

#line 54 "../../src/main.c"
extern int NFl ; 

#line 56 "../../src/main.c"
int simpl_init ( ) ; 

#line 57 "../../src/main.c"
int typ_init ( ) ; 

#line 58 "../../src/main.c"
int syn_init ( ) ; 

#line 59 "../../src/main.c"
int lex_init ( ) ; 

#line 60 "../../src/main.c"
int error_init ( ) ; 

#line 61 "../../src/main.c"
int print_free ( ) ; 

#line 62 "../../src/main.c"
int read_align ( ) ; 

#line 63 "../../src/main.c"
int print_align ( ) ; 

#line 65 "../../src/main.c"
int spy ( _auto_s ) char * _auto_s ; 

#line 66 "../../src/main.c"
{ 
#line 66 "../../src/main.c"
if ( _auto_s ) fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char 
#line 66 "../../src/main.c"
* ) "%s:\n", _auto_s ) ; 

#line 68 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "files=%d lines=%d tokens=%d\n", Nfile , 
#line 68 "../../src/main.c"
Nline , Ntoken ) ; 

#line 70 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "Names: distinct=%d global=%d type=%d\n", Nname , 
#line 70 "../../src/main.c"
( ( ( ( struct table * ) gtbl ) -> _table_free_slot - 1 ) ) , ( 
#line 70 "../../src/main.c"
( ( ( struct table * ) ktbl ) -> _table_free_slot - 1 ) ) ) ; 

#line 71 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 

#line 72 "../../src/main.c"
if ( start_time && stop_time ) { 
#line 72 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( 
#line 72 "../../src/main.c"
char * ) "start time: %s", ctime ( ( long * ) ( & start_time ) ) ) 
#line 72 "../../src/main.c"
; 

#line 74 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "stop time:  %s", ctime ( 
#line 74 "../../src/main.c"
( long * ) ( & stop_time ) ) ) ; 

#line 76 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "real time delay %ld: %d lines per second\n", stop_time - 
#line 76 "../../src/main.c"
start_time , Nline / ( ( stop_time - start_time ) + 1 ) ) ; 

#line 77 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 
} 
#line 80 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "free store=%dbytes alloc()=%d free()=%d ", 
#line 80 "../../src/main.c"
Nfree_store , Nalloc , Nfree ) ; 

#line 81 "../../src/main.c"
print_free ( ) ; 

#line 82 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 

#line 86 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "sizeof: n=%d bt=%d f=%d p=%d v=%d e=%d c=%d l=%d\n", 68, 
#line 86 "../../src/main.c"
36, 52, 16, 20, 24, 24, 16 ) ; 

#line 88 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "alloc(): n=%d bt=%d t=%d e=%d s=%d c=%d str=%d l=%d\n", Nn , 
#line 88 "../../src/main.c"
Nbt , Nt , Ne , Ns , Nc , Nstr , Nl ) ; 

#line 90 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "free(): n=%d bt=%d t=%d e=%d s=%d c=%d str=? l=%d\n", NFn , 
#line 90 "../../src/main.c"
NFbt , NFpv + NFf , NFe , NFs , NFc , NFl ) ; 

#line 91 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 

#line 92 "../../src/main.c"
fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) "%d errors\n", error_count ) 
#line 92 "../../src/main.c"
; 

#line 93 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 
} ; 

#line 96 "../../src/main.c"
Pname dcl_list ; 

#line 98 "../../src/main.c"
char * st_name ( ) ; 

#line 100 "../../src/main.c"
int run ( ) 
#line 104 "../../src/main.c"
{ 
#line 104 "../../src/main.c"
Pname _auto_n ; 
int _auto_i ; 
Pname _auto_m ; 

#line 106 "../../src/main.c"
_auto_i = 1 ; 

#line 108 "../../src/main.c"
while ( _auto_n = syn ( ) ) { 
#line 108 "../../src/main.c"
Pname _auto_nn ; 
Pname _auto_nx ; 

#line 112 "../../src/main.c"
if ( _auto_n == ( ( ( struct name * ) ( 1 ) ) ) ) 
#line 112 "../../src/main.c"

#line 112 "../../src/main.c"
continue ; 

#line 114 "../../src/main.c"
if ( Styp == 0 ) { 
#line 114 "../../src/main.c"
_name_dcl_print ( ( struct name * ) _auto_n , 72 ) ; 
#line 114 "../../src/main.c"

#line 116 "../../src/main.c"
lex_clear ( ) ; 

#line 117 "../../src/main.c"
continue ; 
} 
#line 120 "../../src/main.c"
for ( _auto_nn = _auto_n ;_auto_nn ;( _auto_nn = _auto_nx ) ) { 
#line 120 "../../src/main.c"
_auto_nx = _auto_nn -> _name_n_list ; 

#line 122 "../../src/main.c"
_auto_nn -> _name_n_list = 0 ; 

#line 124 "../../src/main.c"
if ( _name_dcl ( ( struct name * ) _auto_nn , ( struct table * ) gtbl , 14 ) 
#line 124 "../../src/main.c"
== 0 ) 
#line 124 "../../src/main.c"
continue ; 

#line 126 "../../src/main.c"
if ( error_count ) continue ; 

#line 128 "../../src/main.c"
if ( Ssimpl ) _name_simpl ( ( struct name * ) _auto_nn ) ; 

#line 131 "../../src/main.c"
{ 
#line 131 "../../src/main.c"
Pname _auto_dx ; 
Pname _auto_d ; 

#line 131 "../../src/main.c"
_auto_d = dcl_list ; 

#line 131 "../../src/main.c"
for ( ;_auto_d ;( _auto_d = _auto_dx ) ) { 
#line 131 "../../src/main.c"
_auto_dx = _auto_d -> _name_n_list ; 

#line 133 "../../src/main.c"
_name_dcl_print ( ( struct name * ) _auto_d , ( int ) 0 ) ; 

#line 134 "../../src/main.c"
_name__dtor ( ( struct name * ) _auto_d , 1) ; 
} 
#line 136 "../../src/main.c"
dcl_list = 0 ; 

#line 138 "../../src/main.c"
if ( _auto_nn -> _node_base ) _name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 
#line 138 "../../src/main.c"
) ; 

#line 140 "../../src/main.c"
switch ( _auto_nn -> _expr__O2.__C2_tp -> _node_base ) { 
#line 140 "../../src/main.c"
default : { 
#line 142 "../../src/main.c"
Pexpr _auto_i ; 

#line 142 "../../src/main.c"
_auto_i = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 143 "../../src/main.c"
if ( _auto_i && ( _auto_i != ( ( ( struct expr * ) ( 1 ) ) 
#line 143 "../../src/main.c"
) ) ) 
#line 143 "../../src/main.c"
if ( _auto_i && ( _auto_i -> _node_permanent == 0 ) ) _expr_del ( ( 
#line 143 "../../src/main.c"
struct expr * ) _auto_i ) ; 

#line 143 "../../src/main.c"
break ; 
} 
#line 146 "../../src/main.c"
case 108 : { 
#line 147 "../../src/main.c"
Pfct _auto_f ; 

#line 147 "../../src/main.c"
_auto_f = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 148 "../../src/main.c"
if ( _auto_f -> _fct_body && ( debug || ( _auto_f -> _fct_f_inline == 0 ) ) ) { 
#line 148 "../../src/main.c"

#line 148 "../../src/main.c"

#line 149 "../../src/main.c"
if ( _auto_f -> _fct_body && ( _auto_f -> _fct_body -> _node_permanent == 0 ) ) _stmt_del ( ( struct 
#line 149 "../../src/main.c"
stmt * ) _auto_f -> _fct_body ) ; 
} 
#line 152 "../../src/main.c"
break ; 
} 
#line 155 "../../src/main.c"
case 6 : { 
#line 156 "../../src/main.c"
Pclass _auto_cl ; 
register Pname _auto_p ; 

#line 156 "../../src/main.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 158 "../../src/main.c"
for ( _auto_p = _auto_cl -> _classdef_pubmem ;_auto_p ;( _auto_p = _auto_p -> _name_n_list ) ) { 
#line 158 "../../src/main.c"
switch ( _auto_p -> _expr__O2.__C2_tp -> 
#line 158 "../../src/main.c"
_node_base ) 
#line 159 "../../src/main.c"
{ 
#line 159 "../../src/main.c"
case 108 : { 
#line 161 "../../src/main.c"
Pfct _auto_f ; 

#line 161 "../../src/main.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 162 "../../src/main.c"
if ( _auto_f -> _fct_body && ( debug || ( _auto_f -> _fct_f_inline == 0 ) ) ) { 
#line 162 "../../src/main.c"

#line 162 "../../src/main.c"

#line 163 "../../src/main.c"
if ( _auto_f -> _fct_body && ( _auto_f -> _fct_body -> _node_permanent == 0 ) ) _stmt_del ( ( struct 
#line 163 "../../src/main.c"
stmt * ) _auto_f -> _fct_body ) ; 

#line 164 "../../src/main.c"
_auto_f -> _fct_body = 0 ; 
} } 
#line 167 "../../src/main.c"
case 6 : case 13 : break ; 

#line 170 "../../src/main.c"
case 119 : case 121 : if ( _auto_p && ( _auto_p -> _node_permanent == 0 ) ) _name_del ( 
#line 170 "../../src/main.c"
( struct name * ) _auto_p ) ; 

#line 173 "../../src/main.c"
break ; 

#line 174 "../../src/main.c"
default : _name__dtor ( ( struct name * ) _auto_p , 1) ; 
} } 
#line 178 "../../src/main.c"
_auto_cl -> _classdef_pubmem = 0 ; 

#line 181 "../../src/main.c"
for ( _auto_p = _auto_cl -> _classdef_privmem ;_auto_p ;( _auto_p = _auto_p -> _name_n_list ) ) { 
#line 181 "../../src/main.c"
switch ( _auto_p -> _expr__O2.__C2_tp -> 
#line 181 "../../src/main.c"
_node_base ) 
#line 182 "../../src/main.c"
{ 
#line 182 "../../src/main.c"
case 108 : { 
#line 184 "../../src/main.c"
Pfct _auto_f ; 

#line 184 "../../src/main.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 185 "../../src/main.c"
if ( _auto_f -> _fct_body && ( debug || ( _auto_f -> _fct_f_inline == 0 ) ) ) { 
#line 185 "../../src/main.c"

#line 185 "../../src/main.c"

#line 186 "../../src/main.c"
if ( _auto_f -> _fct_body && ( _auto_f -> _fct_body -> _node_permanent == 0 ) ) _stmt_del ( ( struct 
#line 186 "../../src/main.c"
stmt * ) _auto_f -> _fct_body ) ; 

#line 187 "../../src/main.c"
_auto_f -> _fct_body = 0 ; 
} } 
#line 190 "../../src/main.c"
case 6 : case 13 : break ; 

#line 193 "../../src/main.c"
case 119 : case 121 : if ( _auto_p && ( _auto_p -> _node_permanent == 0 ) ) _name_del ( 
#line 193 "../../src/main.c"
( struct name * ) _auto_p ) ; 

#line 196 "../../src/main.c"
break ; 

#line 197 "../../src/main.c"
default : _name__dtor ( ( struct name * ) _auto_p , 1) ; 
} } 
#line 201 "../../src/main.c"
_auto_cl -> _classdef_privmem = 0 ; 

#line 202 "../../src/main.c"
_auto_cl -> _node_permanent = 3 ; 

#line 203 "../../src/main.c"
break ; 
} } 
#line 206 "../../src/main.c"
if ( _auto_nn && ( _auto_nn -> _node_permanent == 0 ) ) _name_del ( ( struct 
#line 206 "../../src/main.c"
name * ) _auto_nn ) ; 
} } 
#line 209 "../../src/main.c"
lex_clear ( ) ; 
} 
#line 212 "../../src/main.c"
switch ( no_of_undcl ) { 
#line 212 "../../src/main.c"
case 0 : break ; 

#line 215 "../../src/main.c"
case 1 : errorFI_PC__E ( ( int ) 'w' , ( char * ) "undeclaredF%n called", undcl ) ; 
#line 215 "../../src/main.c"

#line 217 "../../src/main.c"
break ; 

#line 218 "../../src/main.c"
default : errorFI_PC__E ( ( int ) 'w' , ( char * ) "%d undeclaredFs called; for example%n", no_of_undcl , undcl ) 
#line 218 "../../src/main.c"
; 
} 
#line 222 "../../src/main.c"
switch ( no_of_badcall ) { 
#line 222 "../../src/main.c"
case 0 : break ; 

#line 225 "../../src/main.c"
case 1 : errorFI_PC__E ( ( int ) 'w' , ( char * ) "%n declared withoutAs called withAs", badcall ) ; 
#line 225 "../../src/main.c"

#line 227 "../../src/main.c"
break ; 

#line 228 "../../src/main.c"
default : errorFI_PC__E ( ( int ) 'w' , ( char * ) "%d Fs declared withoutAs called withAs; for example%n", no_of_badcall , badcall ) 
#line 228 "../../src/main.c"
; 
} 
#line 232 "../../src/main.c"
; 

#line 233 "../../src/main.c"
if ( fct_void == 0 ) for ( _auto_m = _table_get_mem ( ( struct table * ) gtbl , 
#line 233 "../../src/main.c"
_auto_i = 1 ) ;_auto_m ;( _auto_m = _table_get_mem ( ( struct table * ) gtbl , ++ _auto_i ) ) ) 
#line 233 "../../src/main.c"

#line 234 "../../src/main.c"
{ 
#line 234 "../../src/main.c"
if ( ( ( _auto_m -> _node_base == 123 ) || ( _auto_m -> _name_n_sto == 14 ) ) 
#line 234 "../../src/main.c"
|| ( _auto_m -> _name_n_stclass == 13 ) ) 
#line 238 "../../src/main.c"
continue ; 

#line 240 "../../src/main.c"
{ 
#line 240 "../../src/main.c"
Ptype _auto_t ; 

#line 240 "../../src/main.c"
_auto_t = _auto_m -> _expr__O2.__C2_tp ; 

#line 241 "../../src/main.c"
if ( _auto_t == 0 ) continue ; 

#line 242 "../../src/main.c"
ll : switch ( _auto_t -> _node_base ) { 
#line 243 "../../src/main.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 243 "../../src/main.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 244 "../../src/main.c"
goto ll ; 

#line 245 "../../src/main.c"
case 6 : case 13 : case 119 : case 76 : case 110 : continue ; 

#line 250 "../../src/main.c"
case 108 : if ( ( ( ( struct fct * ) ( _auto_t ) ) ) 
#line 250 "../../src/main.c"
-> _fct_f_inline || ( ( ( ( struct fct * ) ( _auto_t ) ) ) -> 
#line 250 "../../src/main.c"
_fct_body == 0 ) ) 
#line 250 "../../src/main.c"
continue ; 
} 
#line 253 "../../src/main.c"
if ( ( ( _auto_m -> _name_n_addr_taken == 0 ) && ( _auto_m -> _name_n_used == 0 
#line 253 "../../src/main.c"
) ) && ( _type_tconst ( ( struct type * ) _auto_m -> _expr__O2.__C2_tp ) == 0 ) 
#line 253 "../../src/main.c"
) 
#line 256 "../../src/main.c"
if ( _auto_m -> _name_n_sto == 31 ) error ( ( int ) 'w' , ( struct loc * 
#line 256 "../../src/main.c"
) ( & _auto_m -> _name_where ) , ( char * ) "%n defined but not used", _auto_m ) ; 
} } 
#line 262 "../../src/main.c"
{ 
#line 262 "../../src/main.c"
char * _auto_ctor_name ; 
char * _auto_dtor_name ; 

#line 262 "../../src/main.c"
_auto_ctor_name = 0 ; 

#line 262 "../../src/main.c"
_auto_dtor_name = 0 ; 

#line 264 "../../src/main.c"
if ( st_ilist ) { 
#line 264 "../../src/main.c"
Pname _auto_n ; 
Pfct _auto_f ; 
struct block * _auto__Xthis__ctor_block ; 

#line 267 "../../src/main.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 267 "../../src/main.c"
* ) st_name ( ( char * ) "_STI") ) ; 

#line 268 "../../src/main.c"
_auto_f = ( struct fct * ) _fct__ctor ( ( struct fct * ) 0 , ( struct 
#line 268 "../../src/main.c"
type * ) void_type , ( struct name * ) 0 , 1 ) ; 

#line 269 "../../src/main.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 

#line 270 "../../src/main.c"
_auto_f -> _fct_body = ( struct block * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( 
#line 270 "../../src/main.c"
( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( 
#line 270 "../../src/main.c"
struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , st_ilist -> _stmt_where , ( ( struct stmt * 
#line 270 "../../src/main.c"
) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct 
#line 270 "../../src/main.c"
name * ) 0 ) ) , _auto__Xthis__ctor_block ) ) ) ; 

#line 271 "../../src/main.c"
_auto_f -> _fct_body -> _stmt_s = st_ilist ; 

#line 272 "../../src/main.c"
_auto_f -> _fct_body -> _stmt_memtbl = sti_tbl ; 

#line 273 "../../src/main.c"
_auto_n -> _name_n_sto = 14 ; 

#line 274 "../../src/main.c"
( ( _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) gtbl , 14 ) 
#line 274 "../../src/main.c"
) ) ; 

#line 275 "../../src/main.c"
_name_simpl ( ( struct name * ) _auto_n ) ; 

#line 276 "../../src/main.c"
_name_dcl_print ( ( struct name * ) _auto_n , ( int ) 0 ) ; 

#line 277 "../../src/main.c"
_auto_ctor_name = _auto_n -> _expr__O3.__C3_string ; 
} 
#line 280 "../../src/main.c"
if ( st_dlist ) { 
#line 280 "../../src/main.c"
Pname _auto_n ; 
Pfct _auto_f ; 
struct block * _auto__Xthis__ctor_block ; 

#line 283 "../../src/main.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 283 "../../src/main.c"
* ) st_name ( ( char * ) "_STD") ) ; 

#line 284 "../../src/main.c"
_auto_f = ( struct fct * ) _fct__ctor ( ( struct fct * ) 0 , ( struct 
#line 284 "../../src/main.c"
type * ) void_type , ( struct name * ) 0 , 1 ) ; 

#line 285 "../../src/main.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 

#line 286 "../../src/main.c"
_auto_f -> _fct_body = ( struct block * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( 
#line 286 "../../src/main.c"
( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( 
#line 286 "../../src/main.c"
struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , st_dlist -> _stmt_where , ( ( struct stmt * 
#line 286 "../../src/main.c"
) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct 
#line 286 "../../src/main.c"
name * ) 0 ) ) , _auto__Xthis__ctor_block ) ) ) ; 

#line 287 "../../src/main.c"
_auto_f -> _fct_body -> _stmt_s = st_dlist ; 

#line 288 "../../src/main.c"
_auto_f -> _fct_body -> _stmt_memtbl = std_tbl ; 

#line 289 "../../src/main.c"
_auto_n -> _name_n_sto = 14 ; 

#line 290 "../../src/main.c"
( ( _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) gtbl , 14 ) 
#line 290 "../../src/main.c"
) ) ; 

#line 291 "../../src/main.c"
_name_simpl ( ( struct name * ) _auto_n ) ; 

#line 292 "../../src/main.c"
_name_dcl_print ( ( struct name * ) _auto_n , ( int ) 0 ) ; 

#line 293 "../../src/main.c"
_auto_dtor_name = _auto_n -> _expr__O3.__C3_string ; 
} 
#line 309 "../../src/main.c"
if ( debug == 0 ) { 
#line 309 "../../src/main.c"
Plist _auto_l ; 

#line 311 "../../src/main.c"
for ( _auto_l = isf_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 311 "../../src/main.c"
Pname _auto_n ; 
Pfct _auto_f ; 

#line 312 "../../src/main.c"
_auto_n = _auto_l -> _name_list_f ; 

#line 313 "../../src/main.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 315 "../../src/main.c"
switch ( _auto_f -> _node_base ) { 
#line 315 "../../src/main.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 315 "../../src/main.c"
* ) "inline list corrupted\n") ; 

#line 318 "../../src/main.c"
case 108 : break ; 

#line 320 "../../src/main.c"
case 76 : _auto_n = ( ( ( struct gen * ) ( _auto_f ) ) ) -> 
#line 320 "../../src/main.c"
_gen_fct_list -> _name_list_f ; 

#line 322 "../../src/main.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 
} 
#line 326 "../../src/main.c"
if ( _auto_n -> _name_n_addr_taken || _auto_f -> _fct_f_virtual ) { 
#line 326 "../../src/main.c"
outlined = ( ( ( ( struct 
#line 326 "../../src/main.c"
fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _fct_s_returns ? ( ( ( struct fct * 
#line 326 "../../src/main.c"
) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _fct_s_returns : ( ( ( struct fct * ) 
#line 326 "../../src/main.c"
( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _fct_returns ) ; 

#line 328 "../../src/main.c"
_type_dcl_print ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp , ( struct name * ) _auto_n ) ; 

#line 329 "../../src/main.c"
outlined = 0 ; 
} } } 
#line 334 "../../src/main.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\n/* the end */\n") 
#line 334 "../../src/main.c"
; 
} } ; 

#line 338 "../../src/main.c"
Ptype outlined ; 

#line 339 "../../src/main.c"
bit warn = 1 ; 

#line 340 "../../src/main.c"
bit debug ; 

#line 341 "../../src/main.c"
char * afile = ( char * ) "default"; 

#line 343 "../../src/main.c"
int no_of_undcl = 0 ; 

#line 343 "../../src/main.c"
int no_of_badcall = 0 ; 

#line 344 "../../src/main.c"
Pname undcl ; 

#line 344 "../../src/main.c"
Pname badcall ; 

#line 346 "../../src/main.c"
int main ( _auto_argc , _auto_argv ) int _auto_argc ; 
char * _auto_argv [ ] ; 
{ _main(); 
#line 350 "../../src/main.c"
{ 
#line 350 "../../src/main.c"
int _auto__result ; 

#line 351 "../../src/main.c"
extern char * mktemp ( ) ; 
register char * _auto_cp ; 
short _auto_i ; 

#line 360 "../../src/main.c"
( ( out_file = _get_stdout ( ) ) , ( in_file = _get_stdin ( ) ) ) ; 
#line 360 "../../src/main.c"

#line 361 "../../src/main.c"
error_init ( ) ; 

#line 363 "../../src/main.c"
for ( _auto_i = 1 ;( _auto_i < _auto_argc ) ;( ++ _auto_i ) ) { 
#line 363 "../../src/main.c"
switch ( * 
#line 363 "../../src/main.c"
( _auto_cp = ( _auto_argv [ _auto_i ] ) ) ) 
#line 364 "../../src/main.c"
{ 
#line 364 "../../src/main.c"
case '+' : while ( * 
#line 364 "../../src/main.c"
( ++ _auto_cp ) ) 
#line 366 "../../src/main.c"
{ 
#line 366 "../../src/main.c"
switch ( * _auto_cp ) { 
#line 367 "../../src/main.c"
case 't' : fprintf ( ( 
#line 367 "../../src/main.c"
struct _iobuf * ) _get_stderr ( ) , ( char * ) "type check only\n") ; 

#line 370 "../../src/main.c"
Ssimpl = 0 ; 

#line 371 "../../src/main.c"
break ; 

#line 372 "../../src/main.c"
case 's' : fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) 
#line 372 "../../src/main.c"
"syntax check only\n") ; 

#line 374 "../../src/main.c"
Styp = ( Ssimpl = 0 ) ; 

#line 375 "../../src/main.c"
break ; 

#line 376 "../../src/main.c"
case 'w' : warn = 0 ; 

#line 378 "../../src/main.c"
break ; 

#line 379 "../../src/main.c"
case 'd' : debug = 1 ; 

#line 381 "../../src/main.c"
break ; 

#line 382 "../../src/main.c"
case 'f' : src_file_name = ( _auto_cp + 1 ) ; 

#line 384 "../../src/main.c"
goto xx ; 

#line 385 "../../src/main.c"
case 'x' : if ( read_align ( afile = ( _auto_cp + 1 ) ) ) { 
#line 386 "../../src/main.c"
fprintf ( ( 
#line 386 "../../src/main.c"
struct _iobuf * ) _get_stderr ( ) , ( char * ) "bad size-table (option +x)") ; 

#line 388 "../../src/main.c"
exit ( 11 ) ; 
} 
#line 390 "../../src/main.c"
goto xx ; 

#line 391 "../../src/main.c"
case 'C' : errorFI_PC__E ( ( int ) 's' , ( char * ) "cannot preserve comments") ; 

#line 393 "../../src/main.c"
break ; 

#line 394 "../../src/main.c"
case 'V' : fct_void = ( old_fct_accepted = 1 ) ; 

#line 396 "../../src/main.c"
break ; 

#line 397 "../../src/main.c"
case 'S' : Nspy ++ ; 

#line 399 "../../src/main.c"
break ; 

#line 400 "../../src/main.c"
case 'L' : line_format = "\n#line %d \"%s\"\n"; 

#line 402 "../../src/main.c"
break ; 

#line 403 "../../src/main.c"
default : fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) 
#line 403 "../../src/main.c"
"%s: unexpected option: +%c ignored\n", prog_name , * _auto_cp ) ; 

#line 406 "../../src/main.c"
break ; 
} } 
#line 409 "../../src/main.c"
xx : break ; 

#line 411 "../../src/main.c"
default : fprintf ( ( struct _iobuf * ) _get_stderr ( ) , ( char * ) 
#line 411 "../../src/main.c"
"%s: bad argument \"%s\"\n", prog_name , _auto_cp ) ; 

#line 413 "../../src/main.c"
exit ( 11 ) ; 
} } 
#line 420 "../../src/main.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) ( line_format + 
#line 420 "../../src/main.c"
1 ) , 1 , src_file_name ) ; 

#line 421 "../../src/main.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\n/* %s */\n", prog_name ) ; 

#line 422 "../../src/main.c"
if ( src_file_name ) fprintf ( ( struct _iobuf * ) out_file , ( char * ) "/* < %s */\n", 
#line 422 "../../src/main.c"
src_file_name ) ; 

#line 424 "../../src/main.c"
if ( Nspy ) { 
#line 424 "../../src/main.c"
start_time = time ( ( long * ) 0 ) ; 

#line 426 "../../src/main.c"
print_align ( afile ) ; 
} 
#line 428 "../../src/main.c"
fflush ( ( struct _iobuf * ) _get_stderr ( ) ) ; 

#line 429 "../../src/main.c"
if ( Ssimpl ) print_mode = 3 ; 

#line 430 "../../src/main.c"
otbl_init ( ) ; 

#line 431 "../../src/main.c"
lex_init ( ) ; 

#line 432 "../../src/main.c"
syn_init ( ) ; 

#line 433 "../../src/main.c"
typ_init ( ) ; 

#line 434 "../../src/main.c"
simpl_init ( ) ; 

#line 435 "../../src/main.c"
scan_started = 1 ; 

#line 436 "../../src/main.c"
_loc_putline ( ( struct loc * ) ( & curloc ) ) ; 

#line 437 "../../src/main.c"
run ( ) ; 

#line 438 "../../src/main.c"
if ( Nspy ) { 
#line 438 "../../src/main.c"
stop_time = time ( ( long * ) 0 ) ; 

#line 440 "../../src/main.c"
spy ( src_file_name ) ; 
} 
#line 443 "../../src/main.c"
exit ( ( ( 0 <= error_count ) && ( error_count < 127 ) ) ? error_count : 
#line 443 "../../src/main.c"
127 ) ; 
} } ; 

#line 447 "../../src/main.c"
extern char * st_name ( _auto_pref ) char * _auto_pref ; 

#line 452 "../../src/main.c"
{ 
#line 452 "../../src/main.c"
char * _auto__result ; 
int _auto_prefl ; 
int _auto_strl ; 
char * _auto_name ; 
char * _auto_p ; 

#line 453 "../../src/main.c"
_auto_prefl = strlen ( _auto_pref ) ; 

#line 454 "../../src/main.c"
_auto_strl = ( _auto_prefl + 2 ) ; 

#line 455 "../../src/main.c"
if ( src_file_name ) _auto_strl += strlen ( src_file_name ) ; 

#line 456 "../../src/main.c"
_auto_name = ( ( ( char * ) ( _new ( ( long ) _auto_strl ) ) 
#line 456 "../../src/main.c"
) ) ; 

#line 457 "../../src/main.c"
strcpy ( _auto_name , _auto_pref ) ; 

#line 458 "../../src/main.c"
if ( src_file_name ) strcpy ( _auto_name + _auto_prefl , src_file_name ) ; 

#line 459 "../../src/main.c"
( _auto_name [ _auto_strl - 2 ] ) = '_' ; 

#line 460 "../../src/main.c"
( _auto_name [ _auto_strl - 1 ] ) = 0 ; 

#line 461 "../../src/main.c"
_auto_p = _auto_name ; 

#line 462 "../../src/main.c"
while ( * ( ++ _auto_p ) ) if ( ( ! isalpha ( ( int 
#line 462 "../../src/main.c"
) ( * _auto_p ) ) ) && ( ! isdigit ( ( int ) ( 
#line 462 "../../src/main.c"
* _auto_p ) ) ) ) 
#line 462 "../../src/main.c"
( * _auto_p ) = '_' ; 

#line 463 "../../src/main.c"
{ 
#line 463 "../../src/main.c"
{ _auto__result = _auto_name ; 

#line 463 "../../src/main.c"
return _auto__result ; 
} } } ; 

/* the end */
