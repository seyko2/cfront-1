#line 1 "../../src/expr.c"

/* <<cfront 10/10/85>> */
/* < ../../src/expr.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/expr.c"
typedef char * va_list ; 

#line 12 "../../incl/stdio.h"
struct _iobuf { /* sizeof = 16 */
int __iobuf__cnt ; 
char * __iobuf__ptr ; 
char * __iobuf__base ; 
char __iobuf__flag ; 
char __iobuf__file ; 
} ; 

#line 20 "../../incl/stdio.h"
extern struct _iobuf _iob [ 20] ; 

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

#line 108 "../../incl/stdio.h"
extern int errno ; 

#line 109 "../../incl/stdio.h"
extern char * sys_errlist [ ] ; 

#line 110 "../../incl/stdio.h"
extern int sys_nerr ; 

#line 111 "../../incl/stdio.h"
extern unsigned char * _bufendtab [ ] ; 

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

#line 41 "../../src/size.h"
extern int BI_IN_WORD ; 

#line 42 "../../src/size.h"
extern int BI_IN_BYTE ; 

#line 44 "../../src/size.h"
extern int SZ_CHAR ; 

#line 45 "../../src/size.h"
extern int AL_CHAR ; 

#line 47 "../../src/size.h"
extern int SZ_SHORT ; 

#line 48 "../../src/size.h"
extern int AL_SHORT ; 

#line 50 "../../src/size.h"
extern int SZ_INT ; 

#line 51 "../../src/size.h"
extern int AL_INT ; 

#line 53 "../../src/size.h"
extern int SZ_LONG ; 

#line 54 "../../src/size.h"
extern int AL_LONG ; 

#line 56 "../../src/size.h"
extern int SZ_FLOAT ; 

#line 57 "../../src/size.h"
extern int AL_FLOAT ; 

#line 59 "../../src/size.h"
extern int SZ_DOUBLE ; 

#line 60 "../../src/size.h"
extern int AL_DOUBLE ; 

#line 62 "../../src/size.h"
extern int SZ_STRUCT ; 

#line 63 "../../src/size.h"
extern int AL_STRUCT ; 

#line 65 "../../src/size.h"
extern int SZ_FRAME ; 

#line 66 "../../src/size.h"
extern int AL_FRAME ; 

#line 68 "../../src/size.h"
extern int SZ_WORD ; 

#line 70 "../../src/size.h"
extern int SZ_WPTR ; 

#line 71 "../../src/size.h"
extern int AL_WPTR ; 

#line 73 "../../src/size.h"
extern int SZ_BPTR ; 

#line 74 "../../src/size.h"
extern int AL_BPTR ; 

#line 77 "../../src/size.h"
extern int SZ_TOP ; 

#line 78 "../../src/size.h"
extern int SZ_BOTTOM ; 

#line 80 "../../src/size.h"
extern char * LARGEST_INT ; 

#line 81 "../../src/size.h"
extern int F_SENSITIVE ; 

#line 82 "../../src/size.h"
extern int F_OPTIMIZED ; 

#line 21 "../../src/expr.c"
int const_save = 0 ; 

#line 23 "../../src/expr.c"
Pexpr _expr_address ( _auto_this ) register struct expr * _auto_this ; 

#line 24 "../../src/expr.c"
{ 
#line 24 "../../src/expr.c"
Pexpr _auto__result ; 
register Pexpr _auto_ee ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 25 "../../src/expr.c"
if ( ( _auto_this -> _node_base == 111 ) && ( _auto_this -> _expr__O4.__C4_e2 == 0 ) ) { 
#line 25 "../../src/expr.c"

#line 25 "../../src/expr.c"

#line 25 "../../src/expr.c"
{ _auto__result = _auto_this -> _expr__O3.__C3_e1 ; 

#line 25 "../../src/expr.c"
return _auto__result ; 
} } 
#line 26 "../../src/expr.c"
if ( _auto_this -> _node_base == 71 ) { 
#line 26 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _expr_address ( ( struct expr * 
#line 26 "../../src/expr.c"
) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 28 "../../src/expr.c"
{ 
#line 28 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 28 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 30 "../../src/expr.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 30 "../../src/expr.c"
, 145 , ( struct expr * ) 0 , ( struct expr * ) _auto_this ) ; 
#line 30 "../../src/expr.c"

#line 31 "../../src/expr.c"
_auto_ee -> _expr__O2.__C2_tp = ( struct type * ) ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( 
#line 31 "../../src/expr.c"
_auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , ( ( 
#line 31 "../../src/expr.c"
Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( 
#line 31 "../../src/expr.c"
( struct type * ) _auto_this -> _expr__O2.__C2_tp ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( 
#line 31 "../../src/expr.c"
int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ; 

#line 32 "../../src/expr.c"
if ( _auto_this -> _node_base == 85 ) { 
#line 564 "../../src/cfront.h"
( ( struct name * ) ( ( ( 
#line 564 "../../src/cfront.h"
struct name * ) ( _auto_this ) ) ) ) -> _name_n_addr_taken ++ ; 
} 
#line 33 "../../src/expr.c"
{ 
#line 33 "../../src/expr.c"
{ _auto__result = _auto_ee ; 

#line 33 "../../src/expr.c"
return _auto__result ; 
} } } ; 

#line 36 "../../src/expr.c"
Pexpr _expr_contents ( _auto_this ) register struct expr * _auto_this ; 

#line 37 "../../src/expr.c"
{ 
#line 37 "../../src/expr.c"
Pexpr _auto__result ; 
register Pexpr _auto_ee ; 

#line 38 "../../src/expr.c"
if ( ( _auto_this -> _node_base == 112 ) || ( _auto_this -> _node_base == 145 ) ) { 
#line 38 "../../src/expr.c"
{ 
#line 38 "../../src/expr.c"

#line 38 "../../src/expr.c"
_auto__result = _auto_this -> _expr__O4.__C4_e2 ; 

#line 38 "../../src/expr.c"
return _auto__result ; 
} } 
#line 39 "../../src/expr.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 
#line 39 "../../src/expr.c"
111 , ( struct expr * ) _auto_this , ( struct expr * ) 0 ) ; 

#line 40 "../../src/expr.c"
if ( _auto_this -> _expr__O2.__C2_tp ) _auto_ee -> _expr__O2.__C2_tp = ( ( ( struct ptr * ) ( _auto_this -> 
#line 40 "../../src/expr.c"
_expr__O2.__C2_tp ) ) ) -> _ptr_typ ; 

#line 41 "../../src/expr.c"
{ 
#line 41 "../../src/expr.c"
{ _auto__result = _auto_ee ; 

#line 41 "../../src/expr.c"
return _auto__result ; 
} } } ; 

#line 44 "../../src/expr.c"
Pexpr _table_find_name ( _auto_this , _auto_n , _auto_f , _auto__A10 ) register struct table * _auto_this ; 
register struct name * _auto_n ; 
int _auto_f ; 
struct expr * _auto__A10 ; 

#line 50 "../../src/expr.c"
{ 
#line 50 "../../src/expr.c"
Pexpr _auto__result ; 
Pname _auto_q ; 
register Pname _auto_qn ; 
register Pname _auto_nn ; 
Pclass _auto_cl ; 

#line 51 "../../src/expr.c"
_auto_q = _auto_n -> _name__O6.__C6_n_qualifier ; 

#line 52 "../../src/expr.c"
_auto_qn = 0 ; 

#line 56 "../../src/expr.c"
if ( _auto_n -> _expr__O5.__C5_n_table ) { 
#line 56 "../../src/expr.c"
_auto_nn = _auto_n ; 

#line 58 "../../src/expr.c"
_auto_n = 0 ; 

#line 59 "../../src/expr.c"
goto xx ; 
} 
#line 62 "../../src/expr.c"
if ( _auto_q ) { 
#line 62 "../../src/expr.c"
Ptable _auto_tbl ; 

#line 65 "../../src/expr.c"
if ( _auto_q == sta_name ) _auto_tbl = gtbl ; 
else 
#line 67 "../../src/expr.c"
{ 
#line 67 "../../src/expr.c"
Ptype _auto_t ; 

#line 68 "../../src/expr.c"
_auto_t = ( struct type * ) ( ( ( struct classdef * ) ( _auto_q -> _expr__O2.__C2_tp ) 
#line 68 "../../src/expr.c"
) ) ; 

#line 69 "../../src/expr.c"
if ( _auto_t == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 69 "../../src/expr.c"
"Qr%n'sT missing", _auto_q ) ; 

#line 71 "../../src/expr.c"
if ( _auto_q -> _node_base == 123 ) { 
#line 71 "../../src/expr.c"
if ( _auto_t -> _node_base != 119 ) { 
#line 72 "../../src/expr.c"
errorFPC__E ( ( 
#line 72 "../../src/expr.c"
char * ) "badT%k forQr%n", _auto_t -> _node_base , _auto_q ) ; 

#line 74 "../../src/expr.c"
goto nq ; 
} 
#line 76 "../../src/expr.c"
_auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> 
#line 76 "../../src/expr.c"
_expr__O2.__C2_tp ; 
} 
#line 78 "../../src/expr.c"
if ( _auto_t -> _node_base != 6 ) { 
#line 78 "../../src/expr.c"
errorFPC__E ( ( char * ) "badQr%n(%k)", _auto_q , 
#line 78 "../../src/expr.c"
_auto_t -> _node_base ) ; 

#line 80 "../../src/expr.c"
goto nq ; 
} 
#line 82 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_t ) ) ) ; 

#line 83 "../../src/expr.c"
_auto_tbl = _auto_cl -> _classdef_memtbl ; 
} 
#line 86 "../../src/expr.c"
_auto_qn = _table_look ( ( struct table * ) _auto_tbl , _auto_n -> _expr__O3.__C3_string , ( int ) 0 
#line 86 "../../src/expr.c"
) ; 

#line 88 "../../src/expr.c"
if ( _auto_qn == 0 ) { 
#line 88 "../../src/expr.c"
_auto_n -> _name__O6.__C6_n_qualifier = 0 ; 

#line 90 "../../src/expr.c"
_auto_nn = 0 ; 

#line 91 "../../src/expr.c"
goto def ; 
} 
#line 94 "../../src/expr.c"
if ( _auto_q == sta_name ) { 
#line 94 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_qn ) -> 
#line 561 "../../src/cfront.h"
_name_n_used ++ ; 
} 
#line 96 "../../src/expr.c"
_name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 97 "../../src/expr.c"
{ 
#line 97 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_qn ; 

#line 97 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 102 "../../src/expr.c"
nq : if ( cc -> _dcl_context_tot ) { 
#line 103 "../../src/expr.c"
{ 
#line 104 "../../src/expr.c"
{ 
#line 104 "../../src/expr.c"
Ptable _auto_tbl ; 

#line 104 "../../src/expr.c"
_auto_tbl = ( struct table * ) _auto_this ; 

#line 104 "../../src/expr.c"
for ( ;;) { 
#line 104 "../../src/expr.c"
_auto_nn = _table_lookc ( ( struct table * ) _auto_tbl , _auto_n -> _expr__O3.__C3_string , ( 
#line 104 "../../src/expr.c"
int ) 0 ) ; 

#line 108 "../../src/expr.c"
if ( _auto_nn == 0 ) goto qq ; 

#line 110 "../../src/expr.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 110 "../../src/expr.c"
case 0 : case 25 : if ( _auto_nn -> _name_n_stclass == 
#line 110 "../../src/expr.c"
13 ) 
#line 113 "../../src/expr.c"
break ; 

#line 115 "../../src/expr.c"
if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base == 76 ) break ; 

#line 117 "../../src/expr.c"
if ( ( ( Ebase && cc -> _dcl_context_cot -> _classdef_clbase ) && ( Ebase != ( struct classdef * 
#line 117 "../../src/expr.c"
) cc -> _dcl_context_cot -> _classdef_clbase -> _expr__O2.__C2_tp ) ) && ( ! _classdef_has_friend ( ( struct classdef * ) 
#line 117 "../../src/expr.c"
Ebase , ( struct name * ) cc -> _dcl_context_nof ) ) ) 
#line 121 "../../src/expr.c"
errorFPC__E ( ( char * ) 
#line 121 "../../src/expr.c"
"%n is from a privateBC", _auto_n ) ; 

#line 123 "../../src/expr.c"
if ( ( Epriv && ( Epriv != cc -> _dcl_context_cot ) ) && ( ! _classdef_has_friend ( ( 
#line 123 "../../src/expr.c"
struct classdef * ) Epriv , ( struct name * ) cc -> _dcl_context_nof ) ) ) 
#line 126 "../../src/expr.c"
errorFPC__E ( ( 
#line 126 "../../src/expr.c"
char * ) "%n is private", _auto_n ) ; 
} 
#line 129 "../../src/expr.c"
if ( ( _auto_qn == 0 ) || ( _auto_qn == _auto_nn ) ) break ; 
#line 129 "../../src/expr.c"

#line 131 "../../src/expr.c"
if ( ( _auto_tbl = _auto_tbl -> _table_next ) == 0 ) { 
#line 131 "../../src/expr.c"
if ( ( _auto_qn -> 
#line 131 "../../src/expr.c"
_name_n_scope == 25 ) || _classdef_has_friend ( ( struct classdef * ) _auto_cl , ( struct name * ) cc -> 
#line 131 "../../src/expr.c"
_dcl_context_nof ) ) 
#line 136 "../../src/expr.c"
{ 
#line 136 "../../src/expr.c"
_auto_nn = _auto_qn ; 

#line 142 "../../src/expr.c"
break ; 
} else 
#line 144 "../../src/expr.c"
{ 
#line 144 "../../src/expr.c"
errorFPC__E ( ( char * ) "QdN%n not in scope", _auto_n ) ; 

#line 146 "../../src/expr.c"
goto def ; 
} } } } } 
#line 151 "../../src/expr.c"
xx : if ( _auto_nn == 0 ) goto def ; 

#line 154 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> _name_n_used ++ ; 
} 
#line 155 "../../src/expr.c"
if ( _auto_f == 2 ) { 
#line 155 "../../src/expr.c"
if ( _auto_qn && ( _auto_nn -> _name_n_stclass == 0 ) 
#line 155 "../../src/expr.c"
) 
#line 157 "../../src/expr.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 157 "../../src/expr.c"
case 0 : case 25 : switch ( _auto_qn -> 
#line 157 "../../src/expr.c"
_expr__O2.__C2_tp -> _node_base ) 
#line 160 "../../src/expr.c"
{ 
#line 160 "../../src/expr.c"
case 108 : case 76 : ( * _auto_n ) = ( * _auto_qn ) 
#line 160 "../../src/expr.c"
; 

#line 164 "../../src/expr.c"
_auto_n -> _name__O6.__C6_n_qualifier = _auto_q ; 

#line 165 "../../src/expr.c"
{ 
#line 165 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_n ; 

#line 165 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 168 "../../src/expr.c"
if ( _auto_nn -> _expr__O5.__C5_n_table == gtbl ) errorFPC__E ( ( char * ) 
#line 168 "../../src/expr.c"
"MF%n not found", _auto_n ) ; 

#line 169 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 170 "../../src/expr.c"
{ 
#line 170 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 170 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 173 "../../src/expr.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 173 "../../src/expr.c"
case 0 : case 25 : if 
#line 173 "../../src/expr.c"
( _auto_nn -> _name_n_stclass == 0 ) 
#line 177 "../../src/expr.c"
{ 
#line 177 "../../src/expr.c"
if ( _auto_qn ) { 
#line 178 "../../src/expr.c"
switch ( _auto_qn -> _expr__O2.__C2_tp -> 
#line 178 "../../src/expr.c"
_node_base ) 
#line 179 "../../src/expr.c"
{ 
#line 179 "../../src/expr.c"
case 108 : case 76 : ( * _auto_n ) = ( * _auto_qn ) ; 
#line 179 "../../src/expr.c"

#line 183 "../../src/expr.c"
_auto_n -> _name__O6.__C6_n_qualifier = _auto_q ; 

#line 185 "../../src/expr.c"
_auto_nn = _auto_n ; 

#line 186 "../../src/expr.c"
_auto_n = 0 ; 
} } 
#line 190 "../../src/expr.c"
if ( cc -> _dcl_context_c_this == 0 ) { 
#line 190 "../../src/expr.c"
switch ( _auto_nn -> _name_n_oper ) { 
#line 190 "../../src/expr.c"

#line 191 "../../src/expr.c"

#line 192 "../../src/expr.c"
case 161 : case 162 : break ; 

#line 195 "../../src/expr.c"
default : errorFPC__E ( ( char * ) "%n cannot be used here", _auto_nn ) ; 

#line 198 "../../src/expr.c"
{ 
#line 198 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 198 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 202 "../../src/expr.c"
{ 
#line 202 "../../src/expr.c"
Pref _auto_r ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 202 "../../src/expr.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 202 "../../src/expr.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 202 "../../src/expr.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) cc -> _dcl_context_c_this ) 
#line 202 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 202 "../../src/expr.c"
( ( struct name * ) _auto_nn ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 203 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) cc -> _dcl_context_c_this ) -> _name_n_used ++ ; 
} 
#line 204 "../../src/expr.c"
_auto_r -> _expr__O2.__C2_tp = _auto_nn -> _expr__O2.__C2_tp ; 

#line 205 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 206 "../../src/expr.c"
{ 
#line 206 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_r ; 

#line 206 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 208 "../../src/expr.c"
default : if ( _auto_n ) _name__dtor ( ( struct name * ) 
#line 208 "../../src/expr.c"
_auto_n , 1) ; 

#line 210 "../../src/expr.c"
{ 
#line 210 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 210 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 213 "../../src/expr.c"
qq : if ( _auto_qn ) { 
#line 215 "../../src/expr.c"
if ( ( _auto_qn -> _name_n_scope == 
#line 215 "../../src/expr.c"
0 ) && ( ! _classdef_has_friend ( ( struct classdef * ) _auto_cl , ( struct name * 
#line 215 "../../src/expr.c"
) cc -> _dcl_context_nof ) ) ) 
#line 222 "../../src/expr.c"
{ 
#line 222 "../../src/expr.c"
errorFPC__E ( ( char * ) "%n is private", _auto_qn ) ; 
#line 222 "../../src/expr.c"

#line 224 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 225 "../../src/expr.c"
{ 
#line 225 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_qn ; 

#line 225 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 228 "../../src/expr.c"
switch ( _auto_qn -> _name_n_stclass ) { 
#line 228 "../../src/expr.c"
case 31 : break ; 

#line 231 "../../src/expr.c"
default : switch ( _auto_qn -> _expr__O2.__C2_tp -> _node_base ) { 
#line 232 "../../src/expr.c"
case 108 : case 76 : if ( 
#line 232 "../../src/expr.c"
_auto_f == 1 ) 
#line 235 "../../src/expr.c"
errorFPC__E ( ( char * ) "O missing for%n", _auto_qn ) ; 

#line 236 "../../src/expr.c"
( * _auto_n ) = ( * _auto_qn ) ; 

#line 237 "../../src/expr.c"
_auto_n -> _name__O6.__C6_n_qualifier = _auto_q ; 

#line 238 "../../src/expr.c"
{ 
#line 238 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_n ; 

#line 238 "../../src/expr.c"
return _auto__result ; 
} } 
#line 239 "../../src/expr.c"
default : if ( _auto_f != 2 ) errorFPC__E ( ( char * ) "O missing for%n", 
#line 239 "../../src/expr.c"
_auto_qn ) ; 
} } 
#line 244 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 245 "../../src/expr.c"
{ 
#line 245 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_qn ; 

#line 245 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 248 "../../src/expr.c"
if ( _auto_nn = _table_lookc ( _auto_this , _auto_n -> _expr__O3.__C3_string , ( int ) 0 
#line 248 "../../src/expr.c"
) ) 
#line 248 "../../src/expr.c"
{ 
#line 248 "../../src/expr.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 249 "../../src/expr.c"
case 0 : case 25 : if 
#line 249 "../../src/expr.c"
( _auto_nn -> _name_n_stclass == 13 ) 
#line 252 "../../src/expr.c"
break ; 

#line 254 "../../src/expr.c"
if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base == 76 ) break ; 

#line 255 "../../src/expr.c"
if ( Ebase && ( ! _classdef_has_friend ( ( struct classdef * ) Ebase , ( struct name * 
#line 255 "../../src/expr.c"
) cc -> _dcl_context_nof ) ) ) 
#line 256 "../../src/expr.c"
errorFPC__E ( ( char * ) "%n is from privateBC", _auto_n ) ; 

#line 258 "../../src/expr.c"
if ( Epriv && ( ! _classdef_has_friend ( ( struct classdef * ) Epriv , ( struct name * 
#line 258 "../../src/expr.c"
) cc -> _dcl_context_nof ) ) ) 
#line 259 "../../src/expr.c"
errorFPC__E ( ( char * ) "%n is private", _auto_n ) ; 
} } 
#line 263 "../../src/expr.c"
if ( _auto_nn ) { 
#line 263 "../../src/expr.c"
if ( ( _auto_f == 2 ) && ( _auto_nn -> 
#line 263 "../../src/expr.c"
_expr__O5.__C5_n_table == gtbl ) ) 
#line 265 "../../src/expr.c"
errorFPC__E ( ( char * ) "MF%n not found", _auto_n ) ; 

#line 266 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> _name_n_used ++ ; 
} 
#line 267 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 268 "../../src/expr.c"
{ 
#line 268 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 268 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 271 "../../src/expr.c"
def : _auto_n -> _name__O6.__C6_n_qualifier = 0 ; 

#line 274 "../../src/expr.c"
if ( _auto_f == 1 ) { 
#line 274 "../../src/expr.c"
if ( _auto_n -> _expr__O2.__C2_tp ) errorFI_PC__E ( ( int ) 'i' , 
#line 274 "../../src/expr.c"
( char * ) "find_name(fct_type?)") ; 

#line 276 "../../src/expr.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 276 "../../src/expr.c"
struct type * ) defa_type , ( struct name * ) 0 , ( int ) 0 
#line 276 "../../src/expr.c"
) ; 

#line 277 "../../src/expr.c"
_auto_n -> _name_n_sto = 14 ; 
} else 
#line 313 "../../src/expr.c"
{ 
#line 313 "../../src/expr.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 315 "../../src/expr.c"
if ( _auto_this != ( struct table * ) any_tbl ) if ( cc -> _dcl_context_not && ( ( 
#line 315 "../../src/expr.c"
cc -> _dcl_context_cot -> _type_defined & 3) == 0 ) ) 
#line 318 "../../src/expr.c"
errorFPC__E ( ( char * ) "C%n isU", 
#line 318 "../../src/expr.c"
cc -> _dcl_context_not ) ; 
else 
#line 320 "../../src/expr.c"
errorFPC__E ( ( char * ) "%n isU", _auto_n ) ; 
} 
#line 323 "../../src/expr.c"
_auto_nn = _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) gtbl , 14 ) 
#line 323 "../../src/expr.c"
; 

#line 324 "../../src/expr.c"
_auto_nn -> _name_n_list = 0 ; 

#line 325 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> _name_n_used ++ ; 
} 
#line 326 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> _name_n_used ++ ; 
} 
#line 327 "../../src/expr.c"
if ( _auto_n ) _name__dtor ( ( struct name * ) _auto_n , 1) ; 

#line 329 "../../src/expr.c"
if ( _auto_f == 1 ) if ( fct_void ) { 
#line 330 "../../src/expr.c"
if ( ( no_of_undcl ++ ) == 
#line 330 "../../src/expr.c"
0 ) 
#line 331 "../../src/expr.c"
undcl = _auto_nn ; 
} else 
#line 334 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "undeclaredF%n called", _auto_nn ) ; 
#line 334 "../../src/expr.c"

#line 336 "../../src/expr.c"
{ 
#line 336 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 336 "../../src/expr.c"
return _auto__result ; 
} } } ; 

#line 339 "../../src/expr.c"
Pexpr _expr_typ ( _auto_this , _auto_tbl ) register struct expr * _auto_this ; 
struct table * _auto_tbl ; 

#line 345 "../../src/expr.c"
{ 
#line 345 "../../src/expr.c"
Pexpr _auto__result ; 
Pname _auto_n ; 
Ptype _auto_t ; 
Ptype _auto_t1 ; 
Ptype _auto_t2 ; 
TOK _auto_b ; 
TOK _auto_r1 ; 
TOK _auto_r2 ; 
TOK _auto_bb ; 
Pname _auto_n1 ; 
Pname _auto_n2 ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 346 "../../src/expr.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 346 "../../src/expr.c"
"0->expr.typ") ; 

#line 347 "../../src/expr.c"
; 

#line 347 "../../src/expr.c"
_auto_t = 0 ; 

#line 347 "../../src/expr.c"
; 

#line 347 "../../src/expr.c"
; 

#line 347 "../../src/expr.c"
_auto_b = _auto_this -> _node_base ; 

#line 347 "../../src/expr.c"
; 

#line 347 "../../src/expr.c"
; 

#line 355 "../../src/expr.c"
if ( _auto_tbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 355 "../../src/expr.c"
"expr.typ(%d)", _auto_tbl -> _node_base ) ; 

#line 357 "../../src/expr.c"
if ( _auto_this -> _expr__O2.__C2_tp ) { 
#line 357 "../../src/expr.c"
if ( _auto_b == 85 ) { 
#line 561 "../../src/cfront.h"
( ( struct name * 
#line 561 "../../src/cfront.h"
) ( ( ( struct name * ) ( _auto_this ) ) ) ) -> _name_n_used ++ 
#line 561 "../../src/cfront.h"
; 
} 
#line 360 "../../src/expr.c"
{ 
#line 360 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 360 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 363 "../../src/expr.c"
switch ( _auto_b ) { 
#line 363 "../../src/expr.c"
case 144 : errorFPC__E ( ( char * ) 
#line 363 "../../src/expr.c"
"emptyE") ; 

#line 366 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 367 "../../src/expr.c"
{ 
#line 367 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 367 "../../src/expr.c"
return _auto__result ; 
} } 
#line 368 "../../src/expr.c"
case 86 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) zero_type ; 

#line 370 "../../src/expr.c"
{ 
#line 370 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 370 "../../src/expr.c"
return _auto__result ; 
} } 
#line 371 "../../src/expr.c"
case 150 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 373 "../../src/expr.c"
{ 
#line 373 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 373 "../../src/expr.c"
return _auto__result ; 
} } 
#line 374 "../../src/expr.c"
case 151 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) float_type ; 

#line 376 "../../src/expr.c"
{ 
#line 376 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 376 "../../src/expr.c"
return _auto__result ; 
} } 
#line 377 "../../src/expr.c"
case 82 : { 
#line 383 "../../src/expr.c"
int _auto_ll ; 

#line 383 "../../src/expr.c"
_auto_ll = strlen ( _auto_this -> _expr__O3.__C3_string ) ; 

#line 384 "../../src/expr.c"
switch ( _auto_this -> _expr__O3.__C3_string [ _auto_ll - 1 ] ) { 
#line 384 "../../src/expr.c"
case 'l' : case 'L' : lng : _auto_this -> 
#line 384 "../../src/expr.c"
_expr__O2.__C2_tp = ( struct type * ) long_type ; 

#line 389 "../../src/expr.c"
goto save ; 
} 
#line 392 "../../src/expr.c"
if ( ( _auto_this -> _expr__O3.__C3_string [ 0 ] ) == '0' ) { 
#line 392 "../../src/expr.c"
switch ( 
#line 392 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_string [ 1 ] ) 
#line 393 "../../src/expr.c"
{ 
#line 393 "../../src/expr.c"
case 'x' : case 'X' : if ( ( SZ_INT + SZ_INT ) 
#line 393 "../../src/expr.c"
< ( _auto_ll - 2 ) ) 
#line 396 "../../src/expr.c"
goto lng ; 

#line 397 "../../src/expr.c"
goto nrm ; 

#line 398 "../../src/expr.c"
default : if ( ( BI_IN_BYTE * SZ_INT ) < ( ( _auto_ll - 1 ) * 3 ) 
#line 398 "../../src/expr.c"
) 
#line 399 "../../src/expr.c"
goto lng ; 

#line 400 "../../src/expr.c"
goto nrm ; 
} } else 
#line 403 "../../src/expr.c"
{ 
#line 403 "../../src/expr.c"
if ( _auto_ll < 10 ) { 
#line 404 "../../src/expr.c"
nrm : _auto_this -> _expr__O2.__C2_tp = ( struct 
#line 404 "../../src/expr.c"
type * ) int_type ; 

#line 407 "../../src/expr.c"
goto save ; 
} 
#line 409 "../../src/expr.c"
if ( _auto_ll > 10 ) goto lng ; 

#line 410 "../../src/expr.c"
{ 
#line 410 "../../src/expr.c"
char * _auto_p ; 
char * _auto_q ; 

#line 410 "../../src/expr.c"
_auto_p = _auto_this -> _expr__O3.__C3_string ; 

#line 411 "../../src/expr.c"
_auto_q = LARGEST_INT ; 

#line 412 "../../src/expr.c"
do if ( ( * ( _auto_p ++ ) ) > ( * ( _auto_q ++ 
#line 412 "../../src/expr.c"
) ) ) 
#line 412 "../../src/expr.c"
goto lng ; 
while ( * _auto_p ) ; 
} } 
#line 415 "../../src/expr.c"
goto nrm ; 
} 
#line 417 "../../src/expr.c"
case 84 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) char_type ; 

#line 419 "../../src/expr.c"
goto save ; 

#line 420 "../../src/expr.c"
case 83 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) double_type ; 

#line 422 "../../src/expr.c"
goto save ; 

#line 423 "../../src/expr.c"
case 81 : { 
#line 425 "../../src/expr.c"
int _auto_ll ; 
Pvec _auto_v ; 
struct vec * _auto__Xthis__ctor_vec ; 

#line 425 "../../src/expr.c"
_auto_ll = c_strlen ( _auto_this -> _expr__O3.__C3_string ) ; 

#line 426 "../../src/expr.c"
_auto_v = ( struct vec * ) ( ( _auto__Xthis__ctor_vec = 0 ) , ( ( _auto__Xthis__ctor_vec = 
#line 426 "../../src/expr.c"
( struct vec * ) _new ( ( long ) 20) ) , ( ( Nt ++ 
#line 426 "../../src/expr.c"
) , ( ( _auto__Xthis__ctor_vec -> _node_base = 110 ) , ( ( _auto__Xthis__ctor_vec -> _vec_typ = ( ( 
#line 426 "../../src/expr.c"
struct type * ) char_type ) ) , ( ( _auto__Xthis__ctor_vec -> _vec_dim = ( ( struct expr * 
#line 426 "../../src/expr.c"
) 0 ) ) , _auto__Xthis__ctor_vec ) ) ) ) ) ) ; 

#line 427 "../../src/expr.c"
_auto_v -> _vec_size = _auto_ll ; 

#line 428 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) _auto_v ; 

#line 429 "../../src/expr.c"
goto save ; 
} 
#line 431 "../../src/expr.c"
save : if ( const_save ) { 
#line 433 "../../src/expr.c"
int _auto_ll ; 
char * _auto_p ; 

#line 434 "../../src/expr.c"
_auto_ll = c_strlen ( _auto_this -> _expr__O3.__C3_string ) ; 

#line 435 "../../src/expr.c"
_auto_p = ( ( ( char * ) ( _new ( ( long ) _auto_ll ) ) 
#line 435 "../../src/expr.c"
) ) ; 

#line 436 "../../src/expr.c"
strcpy ( _auto_p , _auto_this -> _expr__O3.__C3_string ) ; 

#line 437 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_string = _auto_p ; 
} 
#line 439 "../../src/expr.c"
{ 
#line 439 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 439 "../../src/expr.c"
return _auto__result ; 
} } 
#line 441 "../../src/expr.c"
case 34 : _expr__dtor ( _auto_this , 1) ; 

#line 443 "../../src/expr.c"
if ( cc -> _dcl_context_tot ) { 
#line 443 "../../src/expr.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) cc -> _dcl_context_c_this ) -> 
#line 561 "../../src/cfront.h"
_name_n_used ++ ; 
} 
#line 445 "../../src/expr.c"
{ 
#line 445 "../../src/expr.c"
{ _auto__result = ( struct expr * ) cc -> _dcl_context_c_this ; 

#line 445 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 447 "../../src/expr.c"
errorFPC__E ( ( char * ) "this used in nonC context") ; 

#line 448 "../../src/expr.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 448 "../../src/expr.c"
* ) "this") ; 

#line 449 "../../src/expr.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 450 "../../src/expr.c"
{ 
#line 450 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _table_insert ( ( struct table * ) _auto_tbl , ( 
#line 450 "../../src/expr.c"
struct name * ) _auto_n , ( int ) 0 ) ; 

#line 450 "../../src/expr.c"
return _auto__result ; 
} } 
#line 452 "../../src/expr.c"
case 85 : { 
#line 454 "../../src/expr.c"
Pexpr _auto_ee ; 

#line 454 "../../src/expr.c"
_auto_ee = _table_find_name ( ( struct table * ) _auto_tbl , ( struct name * ) ( ( ( 
#line 454 "../../src/expr.c"
struct name * ) ( _auto_this ) ) ) , ( int ) 0 , ( 
#line 454 "../../src/expr.c"
struct expr * ) 0 ) ; 

#line 455 "../../src/expr.c"
if ( _auto_ee -> _expr__O2.__C2_tp -> _node_base == 158 ) { 
#line 455 "../../src/expr.c"
{ _auto__result = _expr_contents ( ( struct expr * ) 
#line 455 "../../src/expr.c"
_auto_ee ) ; 

#line 455 "../../src/expr.c"
return _auto__result ; 
} } 
#line 456 "../../src/expr.c"
{ 
#line 456 "../../src/expr.c"
{ _auto__result = _auto_ee ; 

#line 456 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 458 "../../src/expr.c"
case 30 : _auto_t = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 460 "../../src/expr.c"
if ( _auto_t ) { 
#line 460 "../../src/expr.c"
_type_dcl ( ( struct type * ) _auto_t , _auto_tbl ) ; 

#line 462 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 && ( _auto_this -> _expr__O3.__C3_e1 != dummy ) ) { 
#line 462 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( 
#line 462 "../../src/expr.c"
struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 464 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 && ( _auto_this -> _expr__O3.__C3_e1 -> _node_permanent == 0 ) ) _expr_del ( ( struct 
#line 464 "../../src/expr.c"
expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 465 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = dummy ; 
} } else 
#line 468 "../../src/expr.c"
{ 
#line 468 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) 
#line 468 "../../src/expr.c"
; 

#line 470 "../../src/expr.c"
_auto_this -> _expr__O5.__C5_tp2 = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 
} 
#line 472 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 473 "../../src/expr.c"
{ 
#line 473 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 473 "../../src/expr.c"
return _auto__result ; 
} } 
#line 475 "../../src/expr.c"
case 113 : { 
#line 476 "../../src/expr.c"
Ptype _auto_tt ; 

#line 477 "../../src/expr.c"
_auto_tt = ( _auto_t = _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 478 "../../src/expr.c"
_type_dcl ( ( struct type * ) _auto_tt , _auto_tbl ) ; 

#line 479 "../../src/expr.c"
zaq : switch ( _auto_tt -> _node_base ) { 
#line 481 "../../src/expr.c"
case 97 : _auto_tt = ( ( ( struct basetype * 
#line 481 "../../src/expr.c"
) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 483 "../../src/expr.c"
goto zaq ; 

#line 484 "../../src/expr.c"
case 158 : case 125 : if ( ( ( ( struct ptr * ) ( _auto_tt ) 
#line 484 "../../src/expr.c"
) ) -> _ptr_rdo ) 
#line 486 "../../src/expr.c"
errorFPC__E ( ( char * ) "*const in cast") ; 

#line 487 "../../src/expr.c"
_auto_tt = ( ( ( struct ptr * ) ( _auto_tt ) ) ) -> _ptr_typ ; 

#line 488 "../../src/expr.c"
goto zaq ; 

#line 489 "../../src/expr.c"
case 110 : _auto_tt = ( ( ( struct vec * ) ( _auto_tt ) ) ) -> 
#line 489 "../../src/expr.c"
_vec_typ ; 

#line 491 "../../src/expr.c"
goto zaq ; 

#line 492 "../../src/expr.c"
case 108 : _auto_tt = ( ( ( struct fct * ) ( _auto_tt ) ) ) -> 
#line 492 "../../src/expr.c"
_fct_returns ; 

#line 494 "../../src/expr.c"
goto zaq ; 

#line 495 "../../src/expr.c"
default : if ( ( ( ( struct basetype * ) ( _auto_tt ) ) ) 
#line 495 "../../src/expr.c"
-> _basetype_b_const ) 
#line 496 "../../src/expr.c"
errorFPC__E ( ( char * ) "const in cast") ; 
} 
#line 502 "../../src/expr.c"
_auto_tt = _auto_t ; 

#line 504 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 == dummy ) { 
#line 504 "../../src/expr.c"
errorFPC__E ( ( char * ) "expression missing for cast") ; 

#line 506 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 507 "../../src/expr.c"
{ 
#line 507 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 507 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 509 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 
#line 509 "../../src/expr.c"

#line 510 "../../src/expr.c"
{ 
#line 510 "../../src/expr.c"
Ptype _auto_etp ; 

#line 510 "../../src/expr.c"
_auto_etp = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 511 "../../src/expr.c"
while ( _auto_etp -> _node_base == 97 ) _auto_etp = ( ( ( struct basetype * ) ( _auto_etp ) 
#line 511 "../../src/expr.c"
) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 513 "../../src/expr.c"
if ( _auto_etp -> _node_base == 119 ) { 
#line 513 "../../src/expr.c"
int _auto_i ; 

#line 514 "../../src/expr.c"
_auto_i = can_coerce ( ( struct type * ) _auto_tt , ( struct type * ) _auto_etp ) ; 

#line 516 "../../src/expr.c"
if ( ( _auto_i == 1 ) && Ncoerce ) { 
#line 516 "../../src/expr.c"
Pname _auto_cn ; 
Pclass _auto_cl ; 
Pref _auto_r ; 
Pexpr _auto_rr ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 517 "../../src/expr.c"
_auto_cn = ( ( ( struct basetype * ) ( _auto_etp ) ) ) -> _basetype_b_name ; 

#line 518 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 519 "../../src/expr.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 519 "../../src/expr.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 519 "../../src/expr.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) 
#line 519 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 519 "../../src/expr.c"
( ( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 520 "../../src/expr.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 521 "../../src/expr.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 521 "../../src/expr.c"
struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 522 "../../src/expr.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 523 "../../src/expr.c"
_auto_c -> _expr__O2.__C2_tp = _auto_tt ; 

#line 524 "../../src/expr.c"
( * _auto_this ) = ( * ( ( ( struct expr * ) ( _auto_c ) 
#line 524 "../../src/expr.c"
) ) ) ; 

#line 525 "../../src/expr.c"
_expr__dtor ( ( struct expr * ) _auto_c , 1) ; 

#line 526 "../../src/expr.c"
{ 
#line 526 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 526 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 530 "../../src/expr.c"
switch ( _auto_etp -> _node_base ) { 
#line 530 "../../src/expr.c"
case 38 : if ( _auto_tt -> 
#line 530 "../../src/expr.c"
_node_base == 38 ) 
#line 532 "../../src/expr.c"
{ 
#line 532 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 534 "../../src/expr.c"
{ 
#line 534 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 534 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 536 "../../src/expr.c"
errorFPC__E ( ( char * ) "cast of void value") ; 

#line 537 "../../src/expr.c"
case 141 : _auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 539 "../../src/expr.c"
{ 
#line 539 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 539 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 542 "../../src/expr.c"
legloop : switch ( _auto_tt -> _node_base ) { 
#line 543 "../../src/expr.c"
case 97 : _auto_tt = ( ( 
#line 543 "../../src/expr.c"
( struct basetype * ) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 545 "../../src/expr.c"
goto legloop ; 

#line 546 "../../src/expr.c"
case 38 : switch ( _auto_etp -> _node_base ) { 
#line 547 "../../src/expr.c"
case 119 : switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) 
#line 547 "../../src/expr.c"

#line 549 "../../src/expr.c"
{ 
#line 549 "../../src/expr.c"
case 157 : case 109 : case 146 : { 
#line 553 "../../src/expr.c"
Pname _auto_cln ; 
Pclass _auto_cl ; 

#line 553 "../../src/expr.c"
_auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_etp ) ; 

#line 554 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 

#line 555 "../../src/expr.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) 
#line 555 "../../src/expr.c"
-> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ) 
#line 555 "../../src/expr.c"

#line 555 "../../src/expr.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "cannot castCO to void") ; 
} } 
#line 558 "../../src/expr.c"
break ; 
} 
#line 560 "../../src/expr.c"
break ; 

#line 561 "../../src/expr.c"
case 125 : switch ( _auto_etp -> _node_base ) { 
#line 562 "../../src/expr.c"
case 119 : errorFPC__E ( ( char * ) 
#line 562 "../../src/expr.c"
"cannot castCO toP") ; 

#line 565 "../../src/expr.c"
break ; 
} 
#line 567 "../../src/expr.c"
break ; 

#line 569 "../../src/expr.c"
case 158 : if ( ( ( ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 109 ) || ( _auto_this -> 
#line 569 "../../src/expr.c"
_expr__O3.__C3_e1 -> _node_base == 146 ) ) || _expr_lval ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( int 
#line 569 "../../src/expr.c"
) 0 ) ) && ( _type_tsizeof ( ( struct type * ) ( ( ( 
#line 569 "../../src/expr.c"
struct ptr * ) ( _auto_tt ) ) ) -> _ptr_typ ) <= _type_tsizeof ( ( struct type * 
#line 569 "../../src/expr.c"
) _auto_etp ) ) ) 
#line 571 "../../src/expr.c"
{ 
#line 571 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_address ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) 
#line 571 "../../src/expr.c"
; 

#line 574 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 575 "../../src/expr.c"
{ 
#line 575 "../../src/expr.c"
{ _auto__result = _expr_contents ( _auto_this ) ; 

#line 575 "../../src/expr.c"
return _auto__result ; 
} } } else 
#line 578 "../../src/expr.c"
errorFI_PC__E ( ( int ) 0 , ( char * ) 
#line 578 "../../src/expr.c"
"cannot cast%t to%t", _auto_etp , _auto_t ) ; 

#line 579 "../../src/expr.c"
break ; 

#line 581 "../../src/expr.c"
case 119 : _auto_this -> _node_base = 157 ; 

#line 584 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 584 "../../src/expr.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) 0 ) ; 

#line 585 "../../src/expr.c"
{ 
#line 585 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 

#line 585 "../../src/expr.c"
return _auto__result ; 
} } 
#line 587 "../../src/expr.c"
case 5 : case 21 : case 29 : case 22 : case 15 : case 11 : 
#line 587 "../../src/expr.c"

#line 593 "../../src/expr.c"
switch ( _auto_etp -> _node_base ) { 
#line 593 "../../src/expr.c"
case 119 : errorFPC__E ( ( char * ) "cannot castCO to%k", _auto_tt -> 
#line 593 "../../src/expr.c"
_node_base ) ; 

#line 596 "../../src/expr.c"
break ; 
} 
#line 598 "../../src/expr.c"
break ; 
} 
#line 601 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 602 "../../src/expr.c"
{ 
#line 602 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 602 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 605 "../../src/expr.c"
case 157 : { 
#line 606 "../../src/expr.c"
Ptype _auto_tt ; 
Pclass _auto_cl ; 
Pname _auto_cn ; 

#line 606 "../../src/expr.c"
_auto_tt = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 611 "../../src/expr.c"
_type_dcl ( ( struct type * ) _auto_tt , _auto_tbl ) ; 

#line 612 "../../src/expr.c"
vv : switch ( _auto_tt -> _node_base ) { 
#line 614 "../../src/expr.c"
case 97 : _auto_tt = ( ( ( struct basetype * 
#line 614 "../../src/expr.c"
) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 617 "../../src/expr.c"
goto vv ; 

#line 618 "../../src/expr.c"
case 121 : default : if ( _auto_this -> _expr__O3.__C3_e1 == 0 ) { 
#line 620 "../../src/expr.c"
errorFPC__E ( ( char 
#line 620 "../../src/expr.c"
* ) "value missing in conversion to%t", _auto_tt ) ; 

#line 622 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 623 "../../src/expr.c"
{ 
#line 623 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 623 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 625 "../../src/expr.c"
_auto_this -> _node_base = 113 ; 

#line 626 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 ; 

#line 627 "../../src/expr.c"
{ 
#line 627 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 

#line 627 "../../src/expr.c"
return _auto__result ; 
} } 
#line 628 "../../src/expr.c"
case 6 : _auto_cl = ( ( ( struct classdef * ) ( _auto_tt ) ) 
#line 628 "../../src/expr.c"
) ; 

#line 630 "../../src/expr.c"
goto nn ; 

#line 631 "../../src/expr.c"
case 119 : _auto_cn = ( ( ( struct basetype * ) ( _auto_tt ) ) ) -> 
#line 631 "../../src/expr.c"
_basetype_b_name ; 

#line 633 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 634 "../../src/expr.c"
nn : if ( _auto_this -> _expr__O3.__C3_e1 && ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O4.__C4_e2 == 0 ) ) { 
#line 635 "../../src/expr.c"
_auto_this -> 
#line 635 "../../src/expr.c"
_expr__O3.__C3_e1 -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 637 "../../src/expr.c"
{ 
#line 637 "../../src/expr.c"
Pname _auto_acn ; 

#line 637 "../../src/expr.c"
_auto_acn = _type_is_cl_obj ( ( struct type * ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) ; 

#line 639 "../../src/expr.c"
if ( ( _auto_acn && ( _auto_acn -> _expr__O2.__C2_tp == ( struct type * ) _auto_cl ) ) && 
#line 639 "../../src/expr.c"
( ( ( ( struct classdef * ) _auto_cl ) -> _classdef_itor ) == 0 ) ) 
#line 639 "../../src/expr.c"

#line 641 "../../src/expr.c"
{ 
#line 641 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 642 "../../src/expr.c"
_auto_this -> _node_base = 70 ; 

#line 644 "../../src/expr.c"
{ 
#line 644 "../../src/expr.c"
Pexpr _auto_ee ; 

#line 644 "../../src/expr.c"
_auto_ee = _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 ; 

#line 645 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _auto_this -> _expr__O4.__C4_e2 ; 

#line 646 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_ee ; 

#line 647 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 648 "../../src/expr.c"
{ 
#line 648 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 648 "../../src/expr.c"
return _auto__result ; 
} } } } else 
#line 651 "../../src/expr.c"
{ 
#line 651 "../../src/expr.c"
{ _auto__result = _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 ; 

#line 651 "../../src/expr.c"
return _auto__result ; 
} } } } } 
#line 655 "../../src/expr.c"
{ 
#line 655 "../../src/expr.c"
Pexpr _auto_ee ; 
Pexpr _auto_a ; 
Pname _auto_ctor ; 

#line 657 "../../src/expr.c"
_auto_a = _auto_this -> _expr__O3.__C3_e1 ; 

#line 658 "../../src/expr.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 658 "../../src/expr.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 659 "../../src/expr.c"
if ( _auto_ctor == 0 ) { 
#line 659 "../../src/expr.c"
errorFPC__E ( ( char * ) "cannot make a%n", _auto_cn ) ; 
#line 659 "../../src/expr.c"

#line 661 "../../src/expr.c"
_auto_this -> _node_base = 72 ; 

#line 662 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = dummy ; 

#line 663 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = 0 ; 

#line 664 "../../src/expr.c"
{ 
#line 664 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 664 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 667 "../../src/expr.c"
{ 
#line 667 "../../src/expr.c"
int _auto_tv ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 667 "../../src/expr.c"
_auto_tv = 0 ; 

#line 668 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 == 0 ) { 
#line 668 "../../src/expr.c"
Ptable _auto_otbl ; 

#line 669 "../../src/expr.c"
_auto_otbl = _auto_tbl ; 

#line 670 "../../src/expr.c"
if ( Cstmt ) { 
#line 670 "../../src/expr.c"
if ( Cstmt -> _stmt_memtbl == 0 ) Cstmt -> _stmt_memtbl = ( struct 
#line 670 "../../src/expr.c"
table * ) _table__ctor ( ( struct table * ) 0 , 4 , _auto_tbl , ( struct name * 
#line 670 "../../src/expr.c"
) 0 ) ; 

#line 672 "../../src/expr.c"
_auto_tbl = ( struct table * ) Cstmt -> _stmt_memtbl ; 
} 
#line 674 "../../src/expr.c"
{ 
#line 674 "../../src/expr.c"
char * _auto_s ; 
Pname _auto_n ; 

#line 674 "../../src/expr.c"
_auto_s = make_name ( ( int ) 'V' ) ; 

#line 676 "../../src/expr.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 676 "../../src/expr.c"

#line 677 "../../src/expr.c"
_auto_n -> _expr__O2.__C2_tp = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 678 "../../src/expr.c"
_auto_n = _name_dcl ( ( struct name * ) _auto_n , _auto_tbl , 136 ) ; 

#line 679 "../../src/expr.c"
_auto_n -> _name_n_scope = 108 ; 

#line 680 "../../src/expr.c"
_name_assign ( ( struct name * ) _auto_n ) ; 

#line 681 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_n ; 

#line 682 "../../src/expr.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( 
#line 682 "../../src/expr.c"
struct expr * ) _auto_this , ( struct expr * ) _auto_n ) ; 

#line 683 "../../src/expr.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 

#line 684 "../../src/expr.c"
_auto_tv = 1 ; 
} } else 
#line 687 "../../src/expr.c"
_auto_ee = ( struct expr * ) _auto_this ; 

#line 689 "../../src/expr.c"
_auto_this -> _node_base = 146 ; 

#line 690 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 690 "../../src/expr.c"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 690 "../../src/expr.c"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> 
#line 690 "../../src/expr.c"
_expr__O4.__C4_e2 ) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> 
#line 690 "../../src/expr.c"
_expr__O5.__C5_mem = ( ( struct name * ) _auto_ctor ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 691 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_a ; 

#line 692 "../../src/expr.c"
_auto_ee = _expr_typ ( ( struct expr * ) _auto_ee , _auto_tbl ) ; 

#line 694 "../../src/expr.c"
if ( _auto_tv == 0 ) { 
#line 694 "../../src/expr.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct 
#line 694 "../../src/expr.c"
expr * ) 0 , 111 , ( struct expr * ) _auto_ee , ( struct expr * ) 
#line 694 "../../src/expr.c"
0 ) ; 

#line 696 "../../src/expr.c"
_auto_ee -> _expr__O2.__C2_tp = _auto_ee -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 
} 
#line 698 "../../src/expr.c"
{ 
#line 698 "../../src/expr.c"
{ _auto__result = _auto_ee ; 

#line 698 "../../src/expr.c"
return _auto__result ; 
} } } } } } 
#line 703 "../../src/expr.c"
case 23 : { 
#line 704 "../../src/expr.c"
Ptype _auto_tt ; 
Ptype _auto_tx ; 
bit _auto_v ; 
bit _auto_old ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 704 "../../src/expr.c"
_auto_tt = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 705 "../../src/expr.c"
_auto_tx = _auto_tt ; 

#line 706 "../../src/expr.c"
_auto_v = 0 ; 

#line 707 "../../src/expr.c"
_auto_old = new_type ; 

#line 708 "../../src/expr.c"
new_type = 1 ; 

#line 710 "../../src/expr.c"
_type_dcl ( ( struct type * ) _auto_tt , _auto_tbl ) ; 

#line 711 "../../src/expr.c"
new_type = _auto_old ; 

#line 712 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) _auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) 
#line 712 "../../src/expr.c"
; 

#line 713 "../../src/expr.c"
ll : switch ( _auto_tt -> _node_base ) { 
#line 715 "../../src/expr.c"
default : if ( _auto_this -> _expr__O3.__C3_e1 ) { 
#line 717 "../../src/expr.c"
errorFPC__E ( 
#line 717 "../../src/expr.c"
( char * ) "Ir for nonCO created using \"new\"") ; 

#line 719 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = 0 ; 
} 
#line 721 "../../src/expr.c"
break ; 

#line 722 "../../src/expr.c"
case 110 : _auto_v = 1 ; 

#line 724 "../../src/expr.c"
_auto_tt = ( ( ( struct vec * ) ( _auto_tt ) ) ) -> _vec_typ ; 

#line 725 "../../src/expr.c"
goto ll ; 

#line 726 "../../src/expr.c"
case 97 : _auto_tt = ( ( ( struct basetype * ) ( _auto_tt ) ) ) -> 
#line 726 "../../src/expr.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 728 "../../src/expr.c"
goto ll ; 

#line 729 "../../src/expr.c"
case 119 : { 
#line 730 "../../src/expr.c"
Pname _auto_cn ; 
Pclass _auto_cl ; 

#line 730 "../../src/expr.c"
_auto_cn = ( ( ( struct basetype * ) ( _auto_tt ) ) ) -> _basetype_b_name ; 

#line 731 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 733 "../../src/expr.c"
if ( ( _auto_cl -> _type_defined & 3) == 0 ) { 
#line 733 "../../src/expr.c"
errorFPC__E ( ( char * 
#line 733 "../../src/expr.c"
) "new%n;%n isU", _auto_cn , _auto_cn ) ; 
} else 
#line 736 "../../src/expr.c"
{ 
#line 736 "../../src/expr.c"
Pname _auto_ctor ; 
TOK _auto_su ; 
struct call * _auto__Xthis__ctor_call ; 

#line 737 "../../src/expr.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 737 "../../src/expr.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 739 "../../src/expr.c"
if ( _auto_ctor ) { 
#line 739 "../../src/expr.c"
if ( _auto_v ) { 
#line 741 "../../src/expr.c"
Pname _auto_ic ; 

#line 743 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) errorFI_PC__E ( ( int ) 's' , ( char * ) "Ir forvector ofCO created using \"new\"") 
#line 743 "../../src/expr.c"
; 
else 
#line 745 "../../src/expr.c"
if ( ( _auto_ic = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ) == 0 
#line 745 "../../src/expr.c"
) 
#line 746 "../../src/expr.c"
errorFPC__E ( ( char * ) "vector ofC%n that do not have a constructor taking noAs", _auto_cn ) ; 
else 
#line 747 "../../src/expr.c"
if ( ( ( ( struct fct * ) ( _auto_ic -> _expr__O2.__C2_tp ) ) ) 
#line 747 "../../src/expr.c"
-> _fct_nargs ) 
#line 748 "../../src/expr.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "defaultAs for constructor for vector ofC%n", _auto_cn ) ; 
#line 748 "../../src/expr.c"
} 
#line 750 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( 
#line 750 "../../src/expr.c"
( ( _auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( 
#line 750 "../../src/expr.c"
( struct expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) 
#line 750 "../../src/expr.c"
_auto_ctor ) , ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ) ) ) , _auto__Xthis__ctor_call ) 
#line 750 "../../src/expr.c"
) ; 

#line 751 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 
} else 
#line 754 "../../src/expr.c"
if ( _auto_su = ( ( ( ( ( struct classdef * ) _auto_cl ) 
#line 754 "../../src/expr.c"
-> _classdef_csu == 6 ) ? 0: ( ( ( int ) ( ( ( struct 
#line 754 "../../src/expr.c"
classdef * ) _auto_cl ) -> _classdef_csu ) ) ) ) ) ) 
#line 754 "../../src/expr.c"
{ 
#line 754 "../../src/expr.c"
if ( _auto_this -> 
#line 754 "../../src/expr.c"
_expr__O3.__C3_e1 ) 
#line 756 "../../src/expr.c"
errorFPC__E ( ( char * ) "new%n withIr", _auto_cn ) ; 
} else 
#line 758 "../../src/expr.c"
{ 
#line 758 "../../src/expr.c"
} } } } _auto_this -> _expr__O2.__C2_tp = ( _auto_v ? ( ( ( 
#line 758 "../../src/expr.c"
struct type * ) ( _auto_tx ) ) ) : ( ( ( struct type * ) 
#line 758 "../../src/expr.c"
( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) 
#line 758 "../../src/expr.c"
_new ( ( long ) 16) ) , ( ( Nt ++ ) , ( ( 
#line 758 "../../src/expr.c"
_auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) _auto_tx ) 
#line 758 "../../src/expr.c"
) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 0 ) ) , 
#line 758 "../../src/expr.c"
_auto__Xthis__ctor_ptr ) ) ) ) ) ) ) ) ) ) ; 

#line 766 "../../src/expr.c"
{ 
#line 766 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 766 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 769 "../../src/expr.c"
case 9 : { 
#line 770 "../../src/expr.c"
int _auto_i ; 

#line 771 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 112 ) errorFI_PC__E ( ( int ) 'w' , ( char * 
#line 771 "../../src/expr.c"
) "delete &E") ; 

#line 772 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 773 "../../src/expr.c"
_auto_i = ( _type_kind ( ( ( struct type * ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) , 9 , ( 
#line 773 "../../src/expr.c"
int ) 'P' ) ) ; 

#line 774 "../../src/expr.c"
if ( _auto_i != 'P' ) errorFPC__E ( ( char * ) "nonP deleted") ; 

#line 775 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 775 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , 
#line 775 "../../src/expr.c"
_auto_tbl ) ; 

#line 777 "../../src/expr.c"
( _type_kind ( ( ( struct type * ) _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp ) , 9 , ( int 
#line 777 "../../src/expr.c"
) 'I' ) ) ; 
} 
#line 779 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) void_type ; 

#line 780 "../../src/expr.c"
{ 
#line 780 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 780 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 785 "../../src/expr.c"
if ( ( _auto_this -> _expr__O3.__C3_e1 == 0 ) && ( _auto_this -> 
#line 785 "../../src/expr.c"
_expr__O4.__C4_e2 == 0 ) ) 
#line 785 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "no operands for%k", 
#line 785 "../../src/expr.c"
_auto_b ) ; 

#line 787 "../../src/expr.c"
switch ( _auto_b ) { 
#line 787 "../../src/expr.c"
case 124 : _auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> 
#line 787 "../../src/expr.c"
_expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 790 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 791 "../../src/expr.c"
{ 
#line 791 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 791 "../../src/expr.c"
return _auto__result ; 
} } 
#line 793 "../../src/expr.c"
case 140 : { 
#line 794 "../../src/expr.c"
Pexpr _auto_e ; 
Pexpr _auto_ex ; 

#line 797 "../../src/expr.c"
if ( ( _auto_this -> _expr__O3.__C3_e1 == dummy ) && ( _auto_this -> _expr__O4.__C4_e2 == 0 ) ) { 
#line 797 "../../src/expr.c"

#line 797 "../../src/expr.c"

#line 798 "../../src/expr.c"
errorFPC__E ( ( char * ) "emptyIrL") ; 

#line 799 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 800 "../../src/expr.c"
{ 
#line 800 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 800 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 803 "../../src/expr.c"
for ( _auto_e = ( struct expr * ) _auto_this ;_auto_e ;( _auto_e = _auto_ex ) ) 
#line 803 "../../src/expr.c"

#line 803 "../../src/expr.c"
{ 
#line 803 "../../src/expr.c"
Pexpr _auto_ee ; 

#line 804 "../../src/expr.c"
_auto_ee = _auto_e -> _expr__O3.__C3_e1 ; 

#line 806 "../../src/expr.c"
if ( _auto_e -> _node_base != 140 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 806 "../../src/expr.c"
"elist%k", _auto_e -> _node_base ) ; 

#line 807 "../../src/expr.c"
if ( _auto_ex = _auto_e -> _expr__O4.__C4_e2 ) { 
#line 807 "../../src/expr.c"
if ( _auto_ee == dummy ) errorFPC__E ( ( char * 
#line 807 "../../src/expr.c"
) "EX in EL") ; 

#line 809 "../../src/expr.c"
if ( ( _auto_ex -> _expr__O3.__C3_e1 == dummy ) && ( _auto_ex -> _expr__O4.__C4_e2 == 0 ) ) { 
#line 809 "../../src/expr.c"

#line 809 "../../src/expr.c"

#line 811 "../../src/expr.c"
if ( _auto_ex && ( _auto_ex -> _node_permanent == 0 ) ) _expr_del ( ( struct expr * ) 
#line 811 "../../src/expr.c"
_auto_ex ) ; 

#line 812 "../../src/expr.c"
_auto_e -> _expr__O4.__C4_e2 = ( _auto_ex = 0 ) ; 
} } 
#line 815 "../../src/expr.c"
_auto_e -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_ee , _auto_tbl ) ; 

#line 816 "../../src/expr.c"
_auto_t = _auto_e -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 
} 
#line 819 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 820 "../../src/expr.c"
{ 
#line 820 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 820 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 823 "../../src/expr.c"
case 45 : case 44 : { 
#line 825 "../../src/expr.c"
Pbase _auto_b ; 
Ptable _auto_atbl ; 
Pname _auto_nn ; 
char * _auto_s ; 
Pclass _auto_cl ; 

#line 832 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 833 "../../src/expr.c"
_auto_t = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 835 "../../src/expr.c"
if ( _auto_this -> _node_base == 44 ) { 
#line 835 "../../src/expr.c"
xxx : switch ( _auto_t -> _node_base ) { 
#line 838 "../../src/expr.c"
case 97 : 
#line 838 "../../src/expr.c"

#line 839 "../../src/expr.c"
_auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 
#line 839 "../../src/expr.c"

#line 839 "../../src/expr.c"
goto xxx ; 

#line 840 "../../src/expr.c"
default : errorFPC__E ( ( char * ) "nonP ->%n", _auto_this -> _expr__O5.__C5_mem ) ; 

#line 841 "../../src/expr.c"
case 141 : _auto_atbl = any_tbl ; 

#line 841 "../../src/expr.c"
goto mm ; 

#line 842 "../../src/expr.c"
case 125 : case 110 : _auto_b = ( ( ( struct basetype * ) ( ( ( 
#line 842 "../../src/expr.c"
( struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ) ) ) ; 

#line 843 "../../src/expr.c"
break ; 
} } else 
#line 846 "../../src/expr.c"
{ 
#line 846 "../../src/expr.c"
qqq : switch ( _auto_t -> _node_base ) { 
#line 848 "../../src/expr.c"
case 97 : _auto_t = ( 
#line 848 "../../src/expr.c"
( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 849 "../../src/expr.c"
goto qqq ; 

#line 850 "../../src/expr.c"
default : errorFPC__E ( ( char * ) "nonO .%n", _auto_this -> _expr__O5.__C5_mem ) ; 

#line 851 "../../src/expr.c"
case 141 : _auto_atbl = any_tbl ; 

#line 851 "../../src/expr.c"
goto mm ; 

#line 852 "../../src/expr.c"
case 119 : break ; 
} 
#line 855 "../../src/expr.c"
switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 855 "../../src/expr.c"
case 71 : { 
#line 858 "../../src/expr.c"
Pexpr _auto_ex ; 

#line 858 "../../src/expr.c"
_auto_ex = _auto_this -> _expr__O3.__C3_e1 ; 

#line 859 "../../src/expr.c"
cfr : switch ( _auto_ex -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 859 "../../src/expr.c"
case 85 : _auto_this -> _node_base = 44 ; 

#line 862 "../../src/expr.c"
_auto_ex -> _expr__O4.__C4_e2 = _expr_address ( ( struct expr * ) _auto_ex -> _expr__O4.__C4_e2 ) ; 

#line 863 "../../src/expr.c"
goto xde ; 

#line 864 "../../src/expr.c"
case 71 : _auto_ex = _auto_ex -> _expr__O4.__C4_e2 ; 

#line 866 "../../src/expr.c"
goto cfr ; 
} } 
#line 869 "../../src/expr.c"
case 109 : case 146 : { 
#line 880 "../../src/expr.c"
Ptable _auto_otbl ; 

#line 882 "../../src/expr.c"
_auto_otbl = _auto_tbl ; 

#line 883 "../../src/expr.c"
if ( Cstmt ) { 
#line 883 "../../src/expr.c"
if ( Cstmt -> _stmt_memtbl == 0 ) Cstmt -> _stmt_memtbl = ( struct 
#line 883 "../../src/expr.c"
table * ) _table__ctor ( ( struct table * ) 0 , 4 , _auto_tbl , ( struct name * 
#line 883 "../../src/expr.c"
) 0 ) ; 

#line 885 "../../src/expr.c"
_auto_tbl = ( struct table * ) Cstmt -> _stmt_memtbl ; 
} 
#line 887 "../../src/expr.c"
{ 
#line 887 "../../src/expr.c"
char * _auto_s ; 
Pname _auto_tmp ; 

#line 887 "../../src/expr.c"
_auto_s = make_name ( ( int ) 'T' ) ; 

#line 888 "../../src/expr.c"
_auto_tmp = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 888 "../../src/expr.c"

#line 889 "../../src/expr.c"
_auto_tmp -> _expr__O2.__C2_tp = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 890 "../../src/expr.c"
_auto_tmp = _name_dcl ( ( struct name * ) _auto_tmp , _auto_tbl , 136 ) ; 

#line 891 "../../src/expr.c"
_auto_tmp -> _name_n_scope = 108 ; 

#line 892 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , 
#line 892 "../../src/expr.c"
( struct expr * ) _auto_tmp , ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 893 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp = _auto_tmp -> _expr__O2.__C2_tp ; 

#line 894 "../../src/expr.c"
{ 
#line 894 "../../src/expr.c"
Pexpr _auto_aa ; 

#line 894 "../../src/expr.c"
_auto_aa = _expr_address ( ( struct expr * ) _auto_tmp ) ; 

#line 895 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , 
#line 895 "../../src/expr.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) _auto_aa ) ; 

#line 896 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp = _auto_aa -> _expr__O2.__C2_tp ; 

#line 897 "../../src/expr.c"
_auto_this -> _node_base = 44 ; 

#line 898 "../../src/expr.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 
} } } 
#line 900 "../../src/expr.c"
break ; 
} 
#line 908 "../../src/expr.c"
xde : _auto_b = ( ( ( struct basetype * ) ( _auto_t ) ) ) ; 
#line 908 "../../src/expr.c"
} 
#line 912 "../../src/expr.c"
xxxx : switch ( _auto_b -> _node_base ) { 
#line 913 "../../src/expr.c"
case 97 : _auto_b = ( ( ( struct 
#line 913 "../../src/expr.c"
basetype * ) ( _auto_b -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 

#line 914 "../../src/expr.c"
goto xxxx ; 

#line 915 "../../src/expr.c"
default : errorFPC__E ( ( char * ) "(%t) before %k%n (%n not aM)", _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp , _auto_this -> _node_base , _auto_this -> 
#line 915 "../../src/expr.c"
_expr__O5.__C5_mem , _auto_this -> _expr__O5.__C5_mem ) ; 

#line 916 "../../src/expr.c"
case 141 : _auto_atbl = any_tbl ; 

#line 916 "../../src/expr.c"
goto mm ; 

#line 918 "../../src/expr.c"
case 119 : if ( _auto_atbl = _auto_b -> _basetype_b_table ) goto mm ; 

#line 920 "../../src/expr.c"
_auto_s = _auto_b -> _basetype_b_name -> _expr__O3.__C3_string ; 

#line 921 "../../src/expr.c"
if ( _auto_s == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 921 "../../src/expr.c"
"%kN missing", 6 ) ; 

#line 923 "../../src/expr.c"
_auto_nn = _table_look ( ( struct table * ) _auto_tbl , _auto_s , 6 ) ; 

#line 924 "../../src/expr.c"
if ( _auto_nn == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 924 "../../src/expr.c"
"%k %sU", 6 , _auto_s ) ; 

#line 925 "../../src/expr.c"
if ( _auto_nn != _auto_b -> _basetype_b_name ) _auto_b -> _basetype_b_name = _auto_nn ; 

#line 926 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 927 "../../src/expr.c"
_auto_cl -> _node_permanent = 1 ; 

#line 928 "../../src/expr.c"
if ( _auto_cl == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 928 "../../src/expr.c"
"%k %s'sT missing", 6 , _auto_s ) ; 

#line 929 "../../src/expr.c"
_auto_b -> _basetype_b_table = ( _auto_atbl = _auto_cl -> _classdef_memtbl ) ; 

#line 930 "../../src/expr.c"
mm : if ( _auto_atbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 930 "../../src/expr.c"
) "atbl(%d)", _auto_atbl -> _node_base ) ; 

#line 932 "../../src/expr.c"
_auto_nn = ( ( ( struct name * ) ( _table_find_name ( ( struct table * ) _auto_atbl , 
#line 932 "../../src/expr.c"
( struct name * ) _auto_this -> _expr__O5.__C5_mem , 2 , ( struct expr * ) 0 ) ) 
#line 932 "../../src/expr.c"
) ) ; 

#line 934 "../../src/expr.c"
switch ( _auto_nn -> _name_n_stclass ) { 
#line 934 "../../src/expr.c"
case 0 : _auto_this -> _expr__O5.__C5_mem = _auto_nn ; 

#line 937 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_nn -> _expr__O2.__C2_tp ; 

#line 938 "../../src/expr.c"
{ 
#line 938 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 938 "../../src/expr.c"
return _auto__result ; 
} } 
#line 939 "../../src/expr.c"
case 31 : { 
#line 940 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_nn ; 

#line 940 "../../src/expr.c"
return _auto__result ; 
} } } } } 
#line 945 "../../src/expr.c"
case 109 : if ( ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 85 ) 
#line 945 "../../src/expr.c"
&& ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp == 0 ) ) 
#line 946 "../../src/expr.c"
{ 
#line 946 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _table_find_name ( ( struct 
#line 946 "../../src/expr.c"
table * ) _auto_tbl , ( ( struct name * ) ( _auto_this -> _expr__O3.__C3_e1 ) ) , 1 , 
#line 946 "../../src/expr.c"
( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 
} 
#line 950 "../../src/expr.c"
break ; 

#line 951 "../../src/expr.c"
case 68 : _auto_this -> _expr__O5.__C5_cond = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O5.__C5_cond , _auto_tbl ) ; 
} 
#line 955 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) { 
#line 955 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_this -> 
#line 955 "../../src/expr.c"
_expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 957 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp -> _node_base == 158 ) _auto_this -> _expr__O3.__C3_e1 = _expr_contents ( ( struct expr * ) 
#line 957 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 ) ; 

#line 958 "../../src/expr.c"
_auto_t1 = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 
} else 
#line 961 "../../src/expr.c"
_auto_t1 = 0 ; 

#line 963 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 963 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , 
#line 963 "../../src/expr.c"
_auto_tbl ) ; 

#line 965 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp -> _node_base == 158 ) _auto_this -> _expr__O4.__C4_e2 = _expr_contents ( ( struct expr * ) 
#line 965 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 ) ; 

#line 966 "../../src/expr.c"
_auto_t2 = _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp ; 
} else 
#line 969 "../../src/expr.c"
_auto_t2 = 0 ; 

#line 971 "../../src/expr.c"
; 

#line 972 "../../src/expr.c"
switch ( _auto_b ) { 
#line 972 "../../src/expr.c"
default : _auto_bb = _auto_b ; 

#line 973 "../../src/expr.c"
break ; 

#line 974 "../../src/expr.c"
case 111 : _auto_bb = ( _auto_this -> _expr__O4.__C4_e2 ? 111 : 50 ) ; 

#line 974 "../../src/expr.c"
break ; 

#line 975 "../../src/expr.c"
case 71 : case 68 : case 145 : case 146 : goto not_overloaded ; 
} 
#line 981 "../../src/expr.c"
; 

#line 982 "../../src/expr.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) { 
#line 982 "../../src/expr.c"
Ptype _auto_tx ; 

#line 983 "../../src/expr.c"
_auto_tx = _auto_t1 ; 

#line 984 "../../src/expr.c"
while ( _auto_tx -> _node_base == 97 ) _auto_tx = ( ( ( struct basetype * ) ( _auto_tx ) 
#line 984 "../../src/expr.c"
) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 985 "../../src/expr.c"
_auto_n1 = _type_is_cl_obj ( ( struct type * ) _auto_tx ) ; 
} else 
#line 988 "../../src/expr.c"
_auto_n1 = 0 ; 

#line 990 "../../src/expr.c"
; 

#line 991 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 991 "../../src/expr.c"
Ptype _auto_tx ; 

#line 992 "../../src/expr.c"
_auto_tx = _auto_t2 ; 

#line 993 "../../src/expr.c"
while ( _auto_tx -> _node_base == 97 ) _auto_tx = ( ( ( struct basetype * ) ( _auto_tx ) 
#line 993 "../../src/expr.c"
) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 994 "../../src/expr.c"
_auto_n2 = _type_is_cl_obj ( ( struct type * ) _auto_tx ) ; 
} else 
#line 997 "../../src/expr.c"
_auto_n2 = 0 ; 

#line 999 "../../src/expr.c"
if ( ( _auto_n1 == 0 ) && ( _auto_n2 == 0 ) ) goto not_overloaded ; 
#line 999 "../../src/expr.c"

#line 1000 "../../src/expr.c"
{ 
#line 1000 "../../src/expr.c"
Pexpr _auto_oe2 ; 
Pexpr _auto_ee2 ; 
Pexpr _auto_ee1 ; 
char * _auto_obb ; 
Pname _auto_gname ; 
int _auto_go ; 
int _auto_nc ; 

#line 1002 "../../src/expr.c"
_auto_oe2 = _auto_this -> _expr__O4.__C4_e2 ; 

#line 1003 "../../src/expr.c"
_auto_ee2 = ( ( _auto_this -> _expr__O4.__C4_e2 && ( _auto_this -> _expr__O4.__C4_e2 -> _node_base != 140 ) ) ? ( _auto_this -> 
#line 1003 "../../src/expr.c"
_expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1003 "../../src/expr.c"
struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( struct expr * ) 0 ) ) : ( 
#line 1003 "../../src/expr.c"
( ( struct expr * ) ( 0 ) ) ) ) ; 

#line 1004 "../../src/expr.c"
_auto_ee1 = ( _auto_this -> _expr__O3.__C3_e1 ? _expr__ctor ( ( struct expr * ) 0 , 140 , ( struct 
#line 1004 "../../src/expr.c"
expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) : _auto_ee2 ) ; 

#line 1005 "../../src/expr.c"
_auto_obb = oper_name ( ( int ) _auto_bb ) ; 

#line 1006 "../../src/expr.c"
_auto_gname = _table_look ( ( struct table * ) gtbl , _auto_obb , ( int ) 0 ) ; 
#line 1006 "../../src/expr.c"

#line 1007 "../../src/expr.c"
_auto_go = ( _auto_gname ? over_call ( ( struct name * ) _auto_gname , ( struct expr * ) _auto_ee1 ) 
#line 1007 "../../src/expr.c"
: 0) ; 

#line 1008 "../../src/expr.c"
_auto_nc = Nover_coerce ; 

#line 1009 "../../src/expr.c"
if ( _auto_go ) _auto_gname = Nover ; 

#line 1012 "../../src/expr.c"
if ( _auto_n1 ) { 
#line 1012 "../../src/expr.c"
Ptable _auto_ctbl ; 
Pname _auto_mname ; 

#line 1013 "../../src/expr.c"
_auto_ctbl = ( ( ( struct classdef * ) ( _auto_n1 -> _expr__O2.__C2_tp ) ) ) -> _classdef_memtbl ; 
#line 1013 "../../src/expr.c"

#line 1014 "../../src/expr.c"
_auto_mname = _table_look ( ( struct table * ) _auto_ctbl , _auto_obb , ( int ) 0 ) ; 
#line 1014 "../../src/expr.c"

#line 1015 "../../src/expr.c"
if ( _auto_mname == 0 ) goto glob ; 

#line 1016 "../../src/expr.c"
switch ( _auto_mname -> _name_n_scope ) { 
#line 1016 "../../src/expr.c"
default : goto glob ; 

#line 1018 "../../src/expr.c"
case 0 : case 25 : break ; 
} 
#line 1022 "../../src/expr.c"
{ 
#line 1022 "../../src/expr.c"
int _auto_mo ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1022 "../../src/expr.c"
_auto_mo = over_call ( ( struct name * ) _auto_mname , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 
#line 1022 "../../src/expr.c"

#line 1024 "../../src/expr.c"
switch ( _auto_mo ) { 
#line 1024 "../../src/expr.c"
case 0 : if ( _auto_go == 2 ) goto glob ; 

#line 1027 "../../src/expr.c"
if ( 1 < Nover_coerce ) goto am1 ; 

#line 1028 "../../src/expr.c"
goto glob ; 

#line 1029 "../../src/expr.c"
case 1 : if ( _auto_go == 2 ) goto glob ; 

#line 1030 "../../src/expr.c"
if ( _auto_go == 1 ) { 
#line 1030 "../../src/expr.c"
am1 : errorFPC__E ( ( char * ) "ambiguous operandTs%n%t for%k", _auto_n1 , _auto_t2 , 
#line 1030 "../../src/expr.c"
_auto_b ) ; 

#line 1033 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1034 "../../src/expr.c"
{ 
#line 1034 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1034 "../../src/expr.c"
return _auto__result ; 
} } } else 
#line 1036 "../../src/expr.c"
{ 
#line 1036 "../../src/expr.c"
Pclass _auto_cl ; 

#line 1037 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_n1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1038 "../../src/expr.c"
if ( _auto_cl -> _classdef_conv ) errorFI_PC__E ( ( int ) 'w' , ( char * ) "overloaded%k may be ambiguous", 
#line 1038 "../../src/expr.c"
_auto_bb ) ; 
} 
#line 1040 "../../src/expr.c"
break ; 

#line 1041 "../../src/expr.c"
case 2 : if ( _auto_go == 2 ) errorFPC__E ( ( char * ) "%k defined both as%n and%n", _auto_bb , _auto_gname , 
#line 1041 "../../src/expr.c"
Nover ) ; 
} 
#line 1045 "../../src/expr.c"
if ( ( _auto_bb == 70 ) && ( _auto_mname -> _expr__O5.__C5_n_table != _auto_ctbl ) ) { 
#line 1045 "../../src/expr.c"
errorFPC__E ( 
#line 1045 "../../src/expr.c"
( char * ) "assignment not defined for class%n", _auto_n1 ) ; 

#line 1048 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1049 "../../src/expr.c"
{ 
#line 1049 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1049 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1052 "../../src/expr.c"
_auto_this -> _node_base = 146 ; 

#line 1053 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 1053 "../../src/expr.c"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 1053 "../../src/expr.c"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> 
#line 1053 "../../src/expr.c"
_expr__O3.__C3_e1 ) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> 
#line 1053 "../../src/expr.c"
_expr__O5.__C5_mem = ( ( struct name * ) Nover ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1054 "../../src/expr.c"
if ( _auto_ee1 ) _expr__dtor ( ( struct expr * ) _auto_ee1 , 1) ; 

#line 1055 "../../src/expr.c"
{ 
#line 1055 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 

#line 1055 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 1058 "../../src/expr.c"
if ( _auto_n2 && ( _auto_this -> _expr__O3.__C3_e1 == 0 ) ) { 
#line 1058 "../../src/expr.c"

#line 1058 "../../src/expr.c"
Ptable _auto_ctbl ; 
Pname _auto_mname ; 

#line 1059 "../../src/expr.c"
_auto_ctbl = ( ( ( struct classdef * ) ( _auto_n2 -> _expr__O2.__C2_tp ) ) ) -> _classdef_memtbl ; 
#line 1059 "../../src/expr.c"

#line 1060 "../../src/expr.c"
_auto_mname = _table_look ( ( struct table * ) _auto_ctbl , _auto_obb , ( int ) 0 ) ; 
#line 1060 "../../src/expr.c"

#line 1061 "../../src/expr.c"
if ( _auto_mname == 0 ) goto glob ; 

#line 1062 "../../src/expr.c"
switch ( _auto_mname -> _name_n_scope ) { 
#line 1062 "../../src/expr.c"
default : goto glob ; 

#line 1064 "../../src/expr.c"
case 0 : case 25 : break ; 
} 
#line 1068 "../../src/expr.c"
{ 
#line 1068 "../../src/expr.c"
int _auto_mo ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1068 "../../src/expr.c"
_auto_mo = over_call ( ( struct name * ) _auto_mname , ( struct expr * ) 0 ) ; 
#line 1068 "../../src/expr.c"

#line 1070 "../../src/expr.c"
switch ( _auto_mo ) { 
#line 1070 "../../src/expr.c"
case 0 : if ( 1 < Nover_coerce ) goto am2 ; 

#line 1073 "../../src/expr.c"
goto glob ; 

#line 1074 "../../src/expr.c"
case 1 : if ( _auto_go == 2 ) goto glob ; 

#line 1075 "../../src/expr.c"
if ( _auto_go == 1 ) { 
#line 1075 "../../src/expr.c"
am2 : errorFPC__E ( ( char * ) "ambiguous operandT%n for%k", _auto_n2 , _auto_b ) 
#line 1075 "../../src/expr.c"
; 

#line 1078 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1079 "../../src/expr.c"
{ 
#line 1079 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1079 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1081 "../../src/expr.c"
break ; 

#line 1082 "../../src/expr.c"
case 2 : if ( _auto_go == 2 ) errorFPC__E ( ( char * ) "%k defined both as%n and%n", _auto_bb , _auto_gname , 
#line 1082 "../../src/expr.c"
Nover ) ; 
} 
#line 1086 "../../src/expr.c"
_auto_this -> _node_base = 146 ; 

#line 1087 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 1087 "../../src/expr.c"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 1087 "../../src/expr.c"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_oe2 ) 
#line 1087 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1087 "../../src/expr.c"
( ( struct name * ) Nover ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1088 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = 0 ; 

#line 1089 "../../src/expr.c"
if ( _auto_ee2 ) _expr__dtor ( ( struct expr * ) _auto_ee2 , 1) ; 

#line 1090 "../../src/expr.c"
if ( _auto_ee1 && ( _auto_ee1 != _auto_ee2 ) ) _expr__dtor ( ( struct expr * ) _auto_ee1 , 1) 
#line 1090 "../../src/expr.c"
; 

#line 1091 "../../src/expr.c"
{ 
#line 1091 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 

#line 1091 "../../src/expr.c"
return _auto__result ; 
} } } } 
#line 1095 "../../src/expr.c"
glob : if ( 1 < _auto_nc ) { 
#line 1097 "../../src/expr.c"
errorFPC__E ( ( char * 
#line 1097 "../../src/expr.c"
) "ambiguous operandTs%t%t for%k", _auto_t1 , _auto_t2 , _auto_b ) ; 

#line 1099 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1100 "../../src/expr.c"
{ 
#line 1100 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1100 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1102 "../../src/expr.c"
if ( _auto_go ) { 
#line 1102 "../../src/expr.c"
if ( _auto_go == 1 ) { 
#line 1103 "../../src/expr.c"
if ( 
#line 1103 "../../src/expr.c"
_auto_n1 ) 
#line 1104 "../../src/expr.c"
{ 
#line 1104 "../../src/expr.c"
Pclass _auto_cl ; 

#line 1105 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_n1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1106 "../../src/expr.c"
if ( _auto_cl -> _classdef_conv ) errorFI_PC__E ( ( int ) 'w' , ( char * ) "overloaded%k may be ambiguous", 
#line 1106 "../../src/expr.c"
_auto_bb ) ; 
} else 
#line 1109 "../../src/expr.c"
if ( _auto_n2 ) { 
#line 1109 "../../src/expr.c"
Pclass _auto_cl ; 

#line 1110 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_n2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1111 "../../src/expr.c"
if ( _auto_cl -> _classdef_conv ) errorFI_PC__E ( ( int ) 'w' , ( char * ) "overloaded%k may be ambiguous", 
#line 1111 "../../src/expr.c"
_auto_bb ) ; 
} } 
#line 1115 "../../src/expr.c"
_auto_this -> _node_base = 146 ; 

#line 1116 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _auto_gname ; 

#line 1117 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_ee1 ; 

#line 1118 "../../src/expr.c"
{ 
#line 1118 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 

#line 1118 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1121 "../../src/expr.c"
if ( _auto_ee2 ) _expr__dtor ( ( struct expr * ) _auto_ee2 , 1) ; 
#line 1121 "../../src/expr.c"

#line 1122 "../../src/expr.c"
if ( _auto_ee1 && ( _auto_ee1 != _auto_ee2 ) ) _expr__dtor ( ( struct expr * ) _auto_ee1 , 1) 
#line 1122 "../../src/expr.c"
; 

#line 1123 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_oe2 ; 

#line 1125 "../../src/expr.c"
switch ( _auto_bb ) { 
#line 1125 "../../src/expr.c"
case 70 : case 112 : break ; 

#line 1129 "../../src/expr.c"
case 109 : case 111 : if ( _auto_n1 == 0 ) break ; 

#line 1132 "../../src/expr.c"
default : { 
#line 1133 "../../src/expr.c"
int _auto_found ; 

#line 1133 "../../src/expr.c"
_auto_found = 0 ; 

#line 1134 "../../src/expr.c"
if ( _auto_n1 ) { 
#line 1134 "../../src/expr.c"
int _auto_val ; 
Pclass _auto_cl ; 

#line 1135 "../../src/expr.c"
_auto_val = 0 ; 

#line 1136 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_n1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1137 "../../src/expr.c"
{ 
#line 1137 "../../src/expr.c"
Pname _auto_on ; 

#line 1137 "../../src/expr.c"
_auto_on = _auto_cl -> _classdef_conv ; 

#line 1137 "../../src/expr.c"
for ( ;_auto_on ;( _auto_on = _auto_on -> _name_n_list ) ) { 
#line 1137 "../../src/expr.c"
Pfct _auto_f ; 

#line 1139 "../../src/expr.c"
_auto_f = ( ( ( struct fct * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) ; 

#line 1140 "../../src/expr.c"
if ( ( _auto_bb == 66 ) || ( _auto_bb == 67 ) ) { 
#line 1140 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = check_cond ( 
#line 1140 "../../src/expr.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( int ) _auto_bb , _auto_tbl ) ; 

#line 1142 "../../src/expr.c"
goto not_overloaded ; 
} 
#line 1144 "../../src/expr.c"
if ( ( _auto_n2 || ( _auto_t2 && ( _type_check ( ( struct type * ) _auto_f -> 
#line 1144 "../../src/expr.c"
_fct_returns , ( struct type * ) _auto_t2 , 70 ) == 0 ) ) ) || ( 
#line 1144 "../../src/expr.c"
_auto_t2 && ( _type_check ( ( struct type * ) _auto_t2 , ( struct type * ) _auto_f -> _fct_returns , 
#line 1144 "../../src/expr.c"
70 ) == 0 ) ) ) 
#line 1146 "../../src/expr.c"
{ 
#line 1146 "../../src/expr.c"
Ncoerce = _auto_on ; 

#line 1148 "../../src/expr.c"
_auto_val ++ ; 
} } 
#line 1151 "../../src/expr.c"
switch ( _auto_val ) { 
#line 1151 "../../src/expr.c"
case 0 : break ; 

#line 1154 "../../src/expr.c"
case 1 : { 
#line 1155 "../../src/expr.c"
Pref _auto_r ; 
Pexpr _auto_rr ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1155 "../../src/expr.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1155 "../../src/expr.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1155 "../../src/expr.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) 
#line 1155 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1155 "../../src/expr.c"
( ( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1156 "../../src/expr.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , _auto_tbl ) ; 

#line 1157 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , 
#line 1157 "../../src/expr.c"
( struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 1158 "../../src/expr.c"
_auto_found = 1 ; 

#line 1159 "../../src/expr.c"
break ; 
} 
#line 1161 "../../src/expr.c"
default : errorFI_PC__E ( ( int ) 's' , ( char * ) "ambiguous coercion of%n to basicT", _auto_n1 ) 
#line 1161 "../../src/expr.c"
; 
} } } 
#line 1165 "../../src/expr.c"
if ( _auto_n2 ) { 
#line 1165 "../../src/expr.c"
int _auto_val ; 
Pclass _auto_cl ; 

#line 1166 "../../src/expr.c"
_auto_val = 0 ; 

#line 1167 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_n2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1168 "../../src/expr.c"
{ 
#line 1168 "../../src/expr.c"
Pname _auto_on ; 

#line 1168 "../../src/expr.c"
_auto_on = _auto_cl -> _classdef_conv ; 

#line 1168 "../../src/expr.c"
for ( ;_auto_on ;( _auto_on = _auto_on -> _name_n_list ) ) { 
#line 1168 "../../src/expr.c"
Pfct _auto_f ; 

#line 1170 "../../src/expr.c"
_auto_f = ( ( ( struct fct * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) ; 

#line 1171 "../../src/expr.c"
if ( ( ( _auto_bb == 66 ) || ( _auto_bb == 67 ) ) || ( _auto_bb == 
#line 1171 "../../src/expr.c"
46 ) ) 
#line 1171 "../../src/expr.c"
{ 
#line 1171 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = check_cond ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( int 
#line 1171 "../../src/expr.c"
) _auto_bb , _auto_tbl ) ; 

#line 1173 "../../src/expr.c"
goto not_overloaded ; 
} 
#line 1175 "../../src/expr.c"
if ( ( _auto_n1 || ( _auto_t1 && ( _type_check ( ( struct type * ) _auto_f -> 
#line 1175 "../../src/expr.c"
_fct_returns , ( struct type * ) _auto_t1 , 70 ) == 0 ) ) ) || ( 
#line 1175 "../../src/expr.c"
_auto_t1 && ( _type_check ( ( struct type * ) _auto_t1 , ( struct type * ) _auto_f -> _fct_returns , 
#line 1175 "../../src/expr.c"
70 ) == 0 ) ) ) 
#line 1177 "../../src/expr.c"
{ 
#line 1177 "../../src/expr.c"
Ncoerce = _auto_on ; 

#line 1179 "../../src/expr.c"
_auto_val ++ ; 
} } 
#line 1182 "../../src/expr.c"
switch ( _auto_val ) { 
#line 1182 "../../src/expr.c"
case 0 : break ; 

#line 1185 "../../src/expr.c"
case 1 : { 
#line 1186 "../../src/expr.c"
Pref _auto_r ; 
Pexpr _auto_rr ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1186 "../../src/expr.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1186 "../../src/expr.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1186 "../../src/expr.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) 
#line 1186 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1186 "../../src/expr.c"
( ( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1187 "../../src/expr.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 1188 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , 
#line 1188 "../../src/expr.c"
( struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 1189 "../../src/expr.c"
_auto_found ++ ; 

#line 1190 "../../src/expr.c"
break ; 
} 
#line 1192 "../../src/expr.c"
default : errorFI_PC__E ( ( int ) 's' , ( char * ) "ambiguous coercion of%n to basicT", _auto_n2 ) 
#line 1192 "../../src/expr.c"
; 
} } } 
#line 1196 "../../src/expr.c"
if ( _auto_found ) { 
#line 1196 "../../src/expr.c"
{ 
#line 1198 "../../src/expr.c"
{ _auto__result = _expr_typ ( _auto_this , _auto_tbl ) ; 
#line 1198 "../../src/expr.c"

#line 1198 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1200 "../../src/expr.c"
if ( _auto_t1 && _auto_t2 ) errorFPC__E ( ( char * ) "bad operandTs%t%t for%k", _auto_t1 , 
#line 1200 "../../src/expr.c"
_auto_t2 , _auto_b ) ; 
else 
#line 1203 "../../src/expr.c"
errorFPC__E ( ( char * ) "bad operandT%t for%k", _auto_t1 ? _auto_t1 : _auto_t2 , _auto_b ) ; 

#line 1204 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1205 "../../src/expr.c"
{ 
#line 1205 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1205 "../../src/expr.c"
return _auto__result ; 
} } } } } 
#line 1209 "../../src/expr.c"
not_overloaded : _auto_t = ( ( _auto_t1 == 0 ) ? _auto_t2 : 
#line 1209 "../../src/expr.c"
( ( _auto_t2 == 0 ) ? _auto_t1 : ( ( ( struct type * ) ( 
#line 1209 "../../src/expr.c"
0 ) ) ) ) ) ; 

#line 1212 "../../src/expr.c"
switch ( _auto_b ) { 
#line 1212 "../../src/expr.c"
case 146 : case 109 : _auto_this -> _expr__O2.__C2_tp = _expr_fct_call ( _auto_this , _auto_tbl ) ; 
#line 1212 "../../src/expr.c"

#line 1216 "../../src/expr.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 158 ) { 
#line 1216 "../../src/expr.c"
{ _auto__result = _expr_contents ( _auto_this ) ; 

#line 1216 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1217 "../../src/expr.c"
{ 
#line 1217 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1217 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1219 "../../src/expr.c"
case 111 : if ( _auto_this -> _expr__O3.__C3_e1 == dummy ) errorFPC__E ( ( char * ) 
#line 1219 "../../src/expr.c"
"O missing before []\n") ; 

#line 1222 "../../src/expr.c"
if ( _auto_t ) { 
#line 1222 "../../src/expr.c"
_type_vec_type ( ( struct type * ) _auto_t ) ; 

#line 1224 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _type_deref ( ( struct type * ) _auto_t ) ; 
} else 
#line 1226 "../../src/expr.c"
{ 
#line 1226 "../../src/expr.c"
if ( _type_vec_type ( ( struct type * ) _auto_t1 ) ) { 
#line 1227 "../../src/expr.c"
( 
#line 1227 "../../src/expr.c"
_type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) _auto_b ) , 
#line 1227 "../../src/expr.c"
( int ) 'I' ) ) ; 

#line 1229 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _type_deref ( ( struct type * ) _auto_t1 ) ; 
} else 
#line 1231 "../../src/expr.c"
if ( _type_vec_type ( ( struct type * ) _auto_t2 ) ) { 
#line 1231 "../../src/expr.c"
( _type_kind ( 
#line 1231 "../../src/expr.c"
( ( struct type * ) _auto_t1 ) , ( ( int ) _auto_b ) , ( 
#line 1231 "../../src/expr.c"
int ) 'I' ) ) ; 

#line 1233 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _type_deref ( ( struct type * ) _auto_t2 ) ; 
} else 
#line 1235 "../../src/expr.c"
{ 
#line 1235 "../../src/expr.c"
errorFPC__E ( ( char * ) "[] applied to nonPT:%t[%t]", _auto_t1 , _auto_t2 ) ; 

#line 1237 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} } 
#line 1240 "../../src/expr.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 158 ) { 
#line 1240 "../../src/expr.c"
{ _auto__result = _expr_contents ( _auto_this ) ; 
#line 1240 "../../src/expr.c"

#line 1240 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1241 "../../src/expr.c"
{ 
#line 1241 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1241 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1243 "../../src/expr.c"
case 145 : case 112 : if ( _expr_lval ( ( struct expr * ) _auto_this -> 
#line 1243 "../../src/expr.c"
_expr__O4.__C4_e2 , ( int ) _auto_b ) == 0 ) 
#line 1245 "../../src/expr.c"
{ 
#line 1245 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * 
#line 1245 "../../src/expr.c"
) any_type ; 

#line 1247 "../../src/expr.c"
{ 
#line 1247 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1247 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1249 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) ( ( ( _auto__Xthis__ctor_ptr = 0 
#line 1249 "../../src/expr.c"
) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) 
#line 1249 "../../src/expr.c"
) , ( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( 
#line 1249 "../../src/expr.c"
( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) ( ( struct type * ) _auto_t ) 
#line 1249 "../../src/expr.c"
) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 0 ) ) 
#line 1249 "../../src/expr.c"
, _auto__Xthis__ctor_ptr ) ) ) ) ) ) ) ; 

#line 1251 "../../src/expr.c"
switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1251 "../../src/expr.c"
case 45 : case 44 : { 
#line 1254 "../../src/expr.c"
Pname _auto_m ; 
Pfct _auto_f ; 

#line 1254 "../../src/expr.c"
_auto_m = _auto_this -> _expr__O4.__C4_e2 -> _expr__O5.__C5_mem ; 

#line 1255 "../../src/expr.c"
_auto_f = ( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) ; 

#line 1256 "../../src/expr.c"
if ( ( _auto_f -> _node_base == 108 ) && ( ( _auto_f -> _fct_f_virtual == 0 ) || 
#line 1256 "../../src/expr.c"
_auto_m -> _name__O6.__C6_n_qualifier ) ) 
#line 1256 "../../src/expr.c"
{ 
#line 1256 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 && ( _auto_this -> _expr__O4.__C4_e2 -> _node_permanent == 0 ) 
#line 1256 "../../src/expr.c"
) 
#line 1257 "../../src/expr.c"
_expr_del ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1258 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_m ; 
} } } 
#line 1262 "../../src/expr.c"
{ 
#line 1262 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1262 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1264 "../../src/expr.c"
case 107 : ( _type_kind ( ( ( struct type * ) _auto_t ) , ( 
#line 1264 "../../src/expr.c"
( int ) _auto_b ) , ( int ) 'N' ) ) ; 

#line 1266 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1267 "../../src/expr.c"
{ 
#line 1267 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1267 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1268 "../../src/expr.c"
case 172 : ( _type_kind ( ( ( struct type * ) _auto_t ) , ( 
#line 1268 "../../src/expr.c"
( int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1270 "../../src/expr.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "unary + (ignored)") ; 

#line 1271 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1272 "../../src/expr.c"
_auto_this -> _node_base = 54 ; 

#line 1273 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = zero ; 

#line 1274 "../../src/expr.c"
{ 
#line 1274 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1274 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1275 "../../src/expr.c"
case 46 : _auto_this -> _expr__O4.__C4_e2 = check_cond ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , 46 , 
#line 1275 "../../src/expr.c"
_auto_tbl ) ; 

#line 1277 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 1278 "../../src/expr.c"
{ 
#line 1278 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1278 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1279 "../../src/expr.c"
case 47 : ( _type_kind ( ( ( struct type * ) _auto_t ) , ( 
#line 1279 "../../src/expr.c"
( int ) _auto_b ) , ( int ) 'I' ) ) ; 

#line 1281 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1282 "../../src/expr.c"
{ 
#line 1282 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1282 "../../src/expr.c"
return _auto__result ; 
} } 
#line 1284 "../../src/expr.c"
case 48 : case 49 : if ( _auto_this -> _expr__O3.__C3_e1 ) _expr_lval ( ( struct expr * 
#line 1284 "../../src/expr.c"
) _auto_this -> _expr__O3.__C3_e1 , ( int ) _auto_b ) ; 

#line 1287 "../../src/expr.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) _expr_lval ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( int ) 
#line 1287 "../../src/expr.c"
_auto_b ) ; 

#line 1288 "../../src/expr.c"
_auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t ) , ( ( int ) 
#line 1288 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1289 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1290 "../../src/expr.c"
{ 
#line 1290 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1290 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1294 "../../src/expr.c"
if ( ( ( ( _auto_this -> _expr__O3.__C3_e1 == dummy ) || ( _auto_this -> 
#line 1294 "../../src/expr.c"
_expr__O4.__C4_e2 == dummy ) ) || ( _auto_this -> _expr__O3.__C3_e1 == 0 ) ) || ( _auto_this -> _expr__O4.__C4_e2 == 
#line 1294 "../../src/expr.c"
0 ) ) 
#line 1294 "../../src/expr.c"
errorFPC__E ( ( char * ) "operand missing for%k", _auto_b ) ; 

#line 1295 "../../src/expr.c"
switch ( _auto_b ) { 
#line 1295 "../../src/expr.c"
case 50 : case 51 : _auto_r1 = ( _type_kind ( ( ( struct 
#line 1295 "../../src/expr.c"
type * ) _auto_t1 ) , ( ( int ) _auto_b ) , ( int ) 'N' ) 
#line 1295 "../../src/expr.c"
) ; 

#line 1299 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1299 "../../src/expr.c"
_auto_b ) , ( int ) 'N' ) ) ; 

#line 1300 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1300 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1301 "../../src/expr.c"
break ; 

#line 1302 "../../src/expr.c"
case 53 : _auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( 
#line 1302 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'I' ) ) ; 

#line 1304 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1304 "../../src/expr.c"
_auto_b ) , ( int ) 'I' ) ) ; 

#line 1305 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1305 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1306 "../../src/expr.c"
break ; 

#line 1307 "../../src/expr.c"
case 54 : _auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( 
#line 1307 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1309 "../../src/expr.c"
_auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( int ) 
#line 1309 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1310 "../../src/expr.c"
if ( ( _auto_r1 == 'P' ) && ( _auto_r2 == 'P' ) ) errorFPC__E ( ( char * 
#line 1310 "../../src/expr.c"
) "P +P") ; 

#line 1311 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1311 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1312 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1313 "../../src/expr.c"
break ; 

#line 1314 "../../src/expr.c"
case 55 : _auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( 
#line 1314 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1316 "../../src/expr.c"
_auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( int ) 
#line 1316 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1317 "../../src/expr.c"
if ( ( ( _auto_r2 == 'P' ) && ( _auto_r1 != 'P' ) ) && ( _auto_r1 != 
#line 1317 "../../src/expr.c"
'A' ) ) 
#line 1317 "../../src/expr.c"
errorFPC__E ( ( char * ) "P - nonP") ; 

#line 1318 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1318 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1319 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1320 "../../src/expr.c"
break ; 

#line 1321 "../../src/expr.c"
case 56 : case 57 : case 52 : case 65 : case 64 : switch ( _auto_this -> _expr__O3.__C3_e1 -> 
#line 1321 "../../src/expr.c"
_node_base ) 
#line 1326 "../../src/expr.c"
{ 
#line 1326 "../../src/expr.c"
case 58 : case 59 : case 60 : case 61 : case 62 : case 63 : 
#line 1326 "../../src/expr.c"

#line 1333 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%kE as operand for%k", _auto_this -> _expr__O3.__C3_e1 -> _node_base , _auto_b ) 
#line 1333 "../../src/expr.c"
; 
} 
#line 1335 "../../src/expr.c"
switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1335 "../../src/expr.c"
case 58 : case 59 : case 60 : case 
#line 1335 "../../src/expr.c"
61 : 
#line 1340 "../../src/expr.c"
case 62 : case 63 : errorFI_PC__E ( ( int ) 'w' , ( char * ) 
#line 1340 "../../src/expr.c"
"%kE as operand for%k", _auto_this -> _expr__O4.__C4_e2 -> _node_base , _auto_b ) ; 
} 
#line 1344 "../../src/expr.c"
_auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( int 
#line 1344 "../../src/expr.c"
) _auto_b ) , ( int ) 'I' ) ) ; 

#line 1345 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1345 "../../src/expr.c"
_auto_b ) , ( int ) 'I' ) ) ; 

#line 1346 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1346 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1347 "../../src/expr.c"
break ; 

#line 1348 "../../src/expr.c"
case 58 : case 59 : case 60 : case 61 : case 62 : case 63 : _auto_r1 = ( 
#line 1348 "../../src/expr.c"
_type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( int ) _auto_b ) , 
#line 1348 "../../src/expr.c"
( int ) 'P' ) ) ; 

#line 1355 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1355 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1356 "../../src/expr.c"
( ( np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) 
#line 1356 "../../src/expr.c"
_auto_r2 , ( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , ( int ) 
#line 1356 "../../src/expr.c"
0 ) ) ) ; 

#line 1357 "../../src/expr.c"
_auto_t = ( struct type * ) int_type ; 

#line 1358 "../../src/expr.c"
break ; 

#line 1359 "../../src/expr.c"
case 66 : case 67 : _auto_this -> _expr__O3.__C3_e1 = check_cond ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( 
#line 1359 "../../src/expr.c"
int ) _auto_b , _auto_tbl ) ; 

#line 1362 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = check_cond ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( int ) _auto_b , _auto_tbl ) 
#line 1362 "../../src/expr.c"
; 

#line 1364 "../../src/expr.c"
_auto_t = ( struct type * ) int_type ; 

#line 1365 "../../src/expr.c"
break ; 

#line 1366 "../../src/expr.c"
case 68 : { 
#line 1367 "../../src/expr.c"
Pname _auto_c1 ; 
Pname _auto_c2 ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1369 "../../src/expr.c"
_auto_this -> _expr__O5.__C5_cond = check_cond ( ( struct expr * ) _auto_this -> _expr__O5.__C5_cond , ( int ) _auto_b , _auto_tbl ) 
#line 1369 "../../src/expr.c"
; 

#line 1373 "../../src/expr.c"
if ( ( _auto_t1 == _auto_t2 ) || ( ( ( _auto_c1 = _type_is_cl_obj ( ( struct type * 
#line 1373 "../../src/expr.c"
) _auto_t1 ) ) && ( _auto_c2 = _type_is_cl_obj ( ( struct type * ) _auto_t2 ) ) ) 
#line 1373 "../../src/expr.c"
&& ( _auto_c1 -> _expr__O2.__C2_tp == _auto_c2 -> _expr__O2.__C2_tp ) ) ) 
#line 1378 "../../src/expr.c"
_auto_t = _auto_t1 ; 
else 
#line 1379 "../../src/expr.c"
{ 
#line 1379 "../../src/expr.c"
_auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( 
#line 1379 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1381 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1381 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1383 "../../src/expr.c"
if ( ( _auto_r1 == 108 ) && ( _auto_r2 == 108 ) ) { 
#line 1383 "../../src/expr.c"
if ( _type_check ( 
#line 1383 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 70 ) ) 
#line 1384 "../../src/expr.c"
errorFPC__E ( ( 
#line 1384 "../../src/expr.c"
char * ) "badTs in ?:E: %t and %t", _auto_t1 , _auto_t2 ) ; 

#line 1385 "../../src/expr.c"
_auto_t = _auto_t1 ; 
} else 
#line 1388 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int 
#line 1388 "../../src/expr.c"
) _auto_r2 , ( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 
#line 1388 "../../src/expr.c"

#line 1390 "../../src/expr.c"
if ( ( _auto_t != _auto_t1 ) && _type_check ( ( struct type * ) _auto_t , ( struct 
#line 1390 "../../src/expr.c"
type * ) _auto_t1 , ( int ) 0 ) ) 
#line 1390 "../../src/expr.c"
{ 
#line 1390 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct 
#line 1390 "../../src/expr.c"
expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( _auto__Xthis__ctor_texpr = 0 ) 
#line 1390 "../../src/expr.c"
, ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct expr * ) ( 
#line 1390 "../../src/expr.c"
_auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) , ( struct 
#line 1390 "../../src/expr.c"
expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct 
#line 1390 "../../src/expr.c"
type * ) _auto_t ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1392 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp = _auto_t ; 
} 
#line 1394 "../../src/expr.c"
if ( ( _auto_t != _auto_t2 ) && _type_check ( ( struct type * ) _auto_t , ( 
#line 1394 "../../src/expr.c"
struct type * ) _auto_t2 , ( int ) 0 ) ) 
#line 1394 "../../src/expr.c"
{ 
#line 1394 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( 
#line 1394 "../../src/expr.c"
struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( _auto__Xthis__ctor_texpr = 0 
#line 1394 "../../src/expr.c"
) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct expr * ) 
#line 1394 "../../src/expr.c"
( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) , ( 
#line 1394 "../../src/expr.c"
struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( 
#line 1394 "../../src/expr.c"
struct type * ) _auto_t ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1396 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp = _auto_t ; 
} } } 
#line 1401 "../../src/expr.c"
break ; 

#line 1402 "../../src/expr.c"
case 126 : _auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( 
#line 1402 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1404 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1404 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1405 "../../src/expr.c"
if ( ( _auto_r1 == 'P' ) && ( _auto_r2 == 'P' ) ) errorFPC__E ( ( char * 
#line 1405 "../../src/expr.c"
) "P +=P") ; 

#line 1406 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1406 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1407 "../../src/expr.c"
goto ass ; 

#line 1408 "../../src/expr.c"
case 127 : _auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( 
#line 1408 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'P' ) ) ; 

#line 1410 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1410 "../../src/expr.c"
_auto_b ) , ( int ) 'P' ) ) ; 

#line 1411 "../../src/expr.c"
if ( ( ( _auto_r2 == 'P' ) && ( _auto_r1 != 'P' ) ) && ( _auto_r1 != 
#line 1411 "../../src/expr.c"
'A' ) ) 
#line 1411 "../../src/expr.c"
errorFPC__E ( ( char * ) "P -= nonP") ; 

#line 1412 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1412 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1413 "../../src/expr.c"
goto ass ; 

#line 1414 "../../src/expr.c"
case 128 : case 129 : _auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , 
#line 1414 "../../src/expr.c"
( ( int ) _auto_b ) , ( int ) 'N' ) ) ; 

#line 1417 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( int ) 
#line 1417 "../../src/expr.c"
_auto_b ) , ( int ) 'N' ) ) ; 

#line 1418 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1418 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1419 "../../src/expr.c"
goto ass ; 

#line 1420 "../../src/expr.c"
case 130 : _auto_r1 = ( _type_kind ( ( ( struct type * ) _auto_t1 ) , ( ( 
#line 1420 "../../src/expr.c"
int ) _auto_b ) , ( int ) 'I' ) ) ; 

#line 1422 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1422 "../../src/expr.c"
_auto_b ) , ( int ) 'I' ) ) ; 

#line 1423 "../../src/expr.c"
_auto_t = np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) _auto_r2 , 
#line 1423 "../../src/expr.c"
( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , 1 ) ; 

#line 1424 "../../src/expr.c"
goto ass ; 

#line 1425 "../../src/expr.c"
case 131 : case 132 : case 133 : case 134 : case 135 : _auto_r1 = ( _type_kind ( ( 
#line 1425 "../../src/expr.c"
( struct type * ) _auto_t1 ) , ( ( int ) _auto_b ) , ( int 
#line 1425 "../../src/expr.c"
) 'I' ) ) ; 

#line 1431 "../../src/expr.c"
_auto_r2 = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , ( ( int ) 
#line 1431 "../../src/expr.c"
_auto_b ) , ( int ) 'I' ) ) ; 

#line 1432 "../../src/expr.c"
( ( np_promote ( ( int ) _auto_b , ( int ) _auto_r1 , ( int ) 
#line 1432 "../../src/expr.c"
_auto_r2 , ( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 , ( int ) 
#line 1432 "../../src/expr.c"
0 ) ) ) ; 

#line 1433 "../../src/expr.c"
_auto_t = ( struct type * ) int_type ; 

#line 1434 "../../src/expr.c"
goto ass ; 

#line 1435 "../../src/expr.c"
ass : _auto_this -> _expr__O5.__C5_as_type = _auto_t ; 

#line 1437 "../../src/expr.c"
_auto_t2 = _auto_t ; 

#line 1438 "../../src/expr.c"
case 70 : if ( _expr_lval ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( int ) 
#line 1438 "../../src/expr.c"
_auto_b ) == 0 ) 
#line 1439 "../../src/expr.c"
{ 
#line 1439 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1441 "../../src/expr.c"
{ 
#line 1441 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1441 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1443 "../../src/expr.c"
lkj : switch ( _auto_t1 -> _node_base ) { 
#line 1444 "../../src/expr.c"
case 21 : case 5 : case 
#line 1444 "../../src/expr.c"
29 : 
#line 1448 "../../src/expr.c"
if ( ( _auto_this -> _expr__O4.__C4_e2 -> _node_base == 82 ) && ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp == ( 
#line 1448 "../../src/expr.c"
struct type * ) long_type ) ) 
#line 1449 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) 
#line 1449 "../../src/expr.c"
"long constant assigned to%k", _auto_t1 -> _node_base ) ; 

#line 1450 "../../src/expr.c"
case 22 : if ( ( ( ( _auto_b == 70 ) && ( ( ( struct 
#line 1450 "../../src/expr.c"
basetype * ) ( _auto_t1 ) ) ) -> _basetype_b_unsigned ) && ( _auto_this -> _expr__O4.__C4_e2 -> _node_base == 107 ) 
#line 1450 "../../src/expr.c"
) && ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O4.__C4_e2 -> _node_base == 82 ) ) 
#line 1455 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 1455 "../../src/expr.c"
( char * ) "negative assigned to unsigned") ; 

#line 1456 "../../src/expr.c"
break ; 

#line 1457 "../../src/expr.c"
case 97 : _auto_t1 = ( ( ( struct basetype * ) ( _auto_t1 ) ) ) -> 
#line 1457 "../../src/expr.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1459 "../../src/expr.c"
goto lkj ; 

#line 1460 "../../src/expr.c"
case 119 : { 
#line 1461 "../../src/expr.c"
Pname _auto_c1 ; 

#line 1461 "../../src/expr.c"
_auto_c1 = _type_is_cl_obj ( ( struct type * ) _auto_t1 ) ; 

#line 1463 "../../src/expr.c"
if ( _auto_c1 ) { 
#line 1463 "../../src/expr.c"
Pname _auto_c2 ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1464 "../../src/expr.c"
_auto_c2 = _type_is_cl_obj ( ( struct type * ) _auto_t2 ) ; 

#line 1466 "../../src/expr.c"
if ( _auto_c1 != _auto_c2 ) { 
#line 1466 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct 
#line 1466 "../../src/expr.c"
expr * ) 0 , 140 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( struct expr * 
#line 1466 "../../src/expr.c"
) 0 ) ; 

#line 1468 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( 
#line 1468 "../../src/expr.c"
( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( 
#line 1468 "../../src/expr.c"
struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct expr * ) _auto_this -> 
#line 1468 "../../src/expr.c"
_expr__O4.__C4_e2 ) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> 
#line 1468 "../../src/expr.c"
_expr__O5.__C5_tp2 = ( ( struct type * ) _auto_t1 ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1469 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 -> _expr__O4.__C4_e2 = _auto_this -> _expr__O3.__C3_e1 ; 

#line 1470 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , _auto_tbl ) ; 

#line 1471 "../../src/expr.c"
( * _auto_this ) = ( * _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1472 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t1 ; 

#line 1473 "../../src/expr.c"
{ 
#line 1473 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1473 "../../src/expr.c"
return _auto__result ; 
} } } else 
#line 1475 "../../src/expr.c"
{ 
#line 1475 "../../src/expr.c"
Pclass _auto_cl ; 

#line 1476 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_c1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1478 "../../src/expr.c"
if ( _auto_cl -> _classdef_bit_ass == 0 ) errorFI_PC__E ( ( int ) 's' , ( char * 
#line 1478 "../../src/expr.c"
) "bitwise copy: %s has a member with operator=()", _auto_cl -> _classdef_string ) ; 
else 
#line 1480 "../../src/expr.c"
if ( _auto_cl -> _classdef_itor && ( _table_look ( ( struct table * ) ( ( struct 
#line 1480 "../../src/expr.c"
classdef * ) _auto_cl ) -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 
#line 1480 "../../src/expr.c"
) ) ) 
#line 1481 "../../src/expr.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "bitwise copy: %s has destructor and %s(%s&) but not assignment", _auto_cl -> 
#line 1481 "../../src/expr.c"
_classdef_string , _auto_cl -> _classdef_string , _auto_cl -> _classdef_string ) ; 
} } 
#line 1484 "../../src/expr.c"
break ; 
} 
#line 1486 "../../src/expr.c"
case 125 : { 
#line 1488 "../../src/expr.c"
Pfct _auto_ef ; 

#line 1488 "../../src/expr.c"
_auto_ef = ( ( ( struct fct * ) ( ( ( ( struct ptr * ) 
#line 1488 "../../src/expr.c"
( _auto_t1 ) ) ) -> _ptr_typ ) ) ) ; 

#line 1489 "../../src/expr.c"
if ( _auto_ef -> _node_base == 108 ) { 
#line 1489 "../../src/expr.c"
Pfct _auto_f ; 
Pname _auto_n ; 

#line 1491 "../../src/expr.c"
_auto_n = 0 ; 

#line 1492 "../../src/expr.c"
switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1492 "../../src/expr.c"
case 85 : _auto_f = ( ( ( struct fct * 
#line 1492 "../../src/expr.c"
) ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1495 "../../src/expr.c"
_auto_n = ( ( ( struct name * ) ( _auto_this -> _expr__O4.__C4_e2 ) ) ) ; 

#line 1496 "../../src/expr.c"
switch ( _auto_f -> _node_base ) { 
#line 1496 "../../src/expr.c"
case 108 : case 76 : _auto_this -> _expr__O4.__C4_e2 = ( struct expr * 
#line 1496 "../../src/expr.c"
) _expr__ctor ( ( struct expr * ) 0 , 145 , ( struct expr * ) 0 
#line 1496 "../../src/expr.c"
, ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1500 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 
} 
#line 1502 "../../src/expr.c"
goto ad ; 

#line 1503 "../../src/expr.c"
case 45 : case 44 : _auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O4.__C4_e2 -> 
#line 1503 "../../src/expr.c"
_expr__O5.__C5_mem -> _expr__O2.__C2_tp ) ) ) ; 

#line 1507 "../../src/expr.c"
switch ( _auto_f -> _node_base ) { 
#line 1507 "../../src/expr.c"
case 108 : case 76 : _auto_n = ( ( ( struct 
#line 1507 "../../src/expr.c"
name * ) ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O5.__C5_mem ) ) ) ; 

#line 1511 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 145 , 
#line 1511 "../../src/expr.c"
( struct expr * ) 0 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1512 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _expr_typ ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 , _auto_tbl ) ; 
} 
#line 1514 "../../src/expr.c"
goto ad ; 

#line 1515 "../../src/expr.c"
case 112 : case 145 : _auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O4.__C4_e2 -> 
#line 1515 "../../src/expr.c"
_expr__O4.__C4_e2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1518 "../../src/expr.c"
ad : if ( _auto_f -> _node_base == 76 ) { 
#line 1519 "../../src/expr.c"
Pgen _auto_g ; 

#line 1520 "../../src/expr.c"
_auto_g = ( ( ( struct gen * ) ( _auto_f ) ) ) ; 

#line 1521 "../../src/expr.c"
_auto_n = _gen_find ( ( struct gen * ) _auto_g , ( struct fct * ) _auto_ef ) ; 

#line 1522 "../../src/expr.c"
if ( _auto_n == 0 ) { 
#line 1522 "../../src/expr.c"
errorFPC__E ( ( char * ) "cannot deduceT for &overloaded %s()", _auto_g -> _gen_string ) 
#line 1522 "../../src/expr.c"
; 

#line 1524 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} else 
#line 1527 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t1 ; 

#line 1528 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_n ; 

#line 1529 "../../src/expr.c"
_expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 

#line 1530 "../../src/expr.c"
{ 
#line 1530 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1530 "../../src/expr.c"
return _auto__result ; 
} } } 
#line 1532 "../../src/expr.c"
if ( _auto_n ) _expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 
#line 1532 "../../src/expr.c"
} } 
#line 1535 "../../src/expr.c"
break ; 
} } 
#line 1538 "../../src/expr.c"
{ 
#line 1538 "../../src/expr.c"
Pname _auto_cn ; 
int _auto_i ; 

#line 1540 "../../src/expr.c"
if ( ( ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_t2 ) ) && ( 
#line 1540 "../../src/expr.c"
_auto_i = can_coerce ( ( struct type * ) _auto_t1 , ( struct type * ) _auto_t2 ) ) ) 
#line 1540 "../../src/expr.c"
&& Ncoerce ) 
#line 1542 "../../src/expr.c"
{ 
#line 1542 "../../src/expr.c"
if ( 1 < _auto_i ) errorFPC__E ( ( char * ) "%d possible conversions for assignment", _auto_i ) 
#line 1542 "../../src/expr.c"
; 

#line 1545 "../../src/expr.c"
{ 
#line 1545 "../../src/expr.c"
Pclass _auto_cl ; 
Pref _auto_r ; 
Pexpr _auto_rr ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1545 "../../src/expr.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1546 "../../src/expr.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1546 "../../src/expr.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1546 "../../src/expr.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) 
#line 1546 "../../src/expr.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1546 "../../src/expr.c"
( ( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1547 "../../src/expr.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 1548 "../../src/expr.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1548 "../../src/expr.c"
struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 1549 "../../src/expr.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 1550 "../../src/expr.c"
_auto_c -> _expr__O2.__C2_tp = _auto_t1 ; 

#line 1551 "../../src/expr.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_c ; 

#line 1552 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t1 ; 

#line 1553 "../../src/expr.c"
{ 
#line 1553 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1553 "../../src/expr.c"
return _auto__result ; 
} } } } } 
#line 1557 "../../src/expr.c"
if ( _type_check ( ( struct type * ) _auto_this -> _expr__O3.__C3_e1 -> 
#line 1557 "../../src/expr.c"
_expr__O2.__C2_tp , ( struct type * ) _auto_t2 , 70 ) ) 
#line 1557 "../../src/expr.c"
errorFPC__E ( ( char * ) "bad assignmentT:%t =%t", 
#line 1557 "../../src/expr.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp , _auto_t2 ) ; 

#line 1558 "../../src/expr.c"
_auto_t = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 1559 "../../src/expr.c"
break ; 

#line 1560 "../../src/expr.c"
case 71 : _auto_t = _auto_t2 ; 

#line 1562 "../../src/expr.c"
break ; 

#line 1563 "../../src/expr.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "unknown operator%k", _auto_b ) ; 
#line 1563 "../../src/expr.c"
} 
#line 1567 "../../src/expr.c"
_auto_this -> _expr__O2.__C2_tp = _auto_t ; 

#line 1568 "../../src/expr.c"
{ 
#line 1568 "../../src/expr.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 1568 "../../src/expr.c"
return _auto__result ; 
} } } ; 

/* the end */
