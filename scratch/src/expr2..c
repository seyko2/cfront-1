#line 1 "../../src/expr2.c"

/* <<cfront 10/10/85>> */
/* < ../../src/expr2.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/expr2.c"
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

#line 21 "../../src/expr2.c"
int _name_assign ( _auto_this ) register struct name * _auto_this ; 

#line 22 "../../src/expr2.c"
{ 
#line 22 "../../src/expr2.c"
if ( ( _auto_this -> _name_n_assigned_to ++ ) == 0 ) { 
#line 23 "../../src/expr2.c"
switch ( _auto_this -> 
#line 23 "../../src/expr2.c"
_name_n_scope ) 
#line 24 "../../src/expr2.c"
{ 
#line 24 "../../src/expr2.c"
case 108 : if ( _auto_this -> _name_n_used && ( _auto_this -> _name_n_addr_taken == 0 ) ) 
#line 24 "../../src/expr2.c"

#line 26 "../../src/expr2.c"
{ 
#line 26 "../../src/expr2.c"
Ptype _auto_t ; 

#line 27 "../../src/expr2.c"
_auto_t = _auto_this -> _expr__O2.__C2_tp ; 

#line 28 "../../src/expr2.c"
ll : switch ( _auto_t -> _node_base ) { 
#line 29 "../../src/expr2.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 29 "../../src/expr2.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 31 "../../src/expr2.c"
goto ll ; 

#line 32 "../../src/expr2.c"
case 110 : break ; 

#line 34 "../../src/expr2.c"
default : if ( curr_loop ) errorFI_PC__E ( ( int ) 'w' , ( char * ) 
#line 34 "../../src/expr2.c"
"%n may have been used before set", _auto_this ) ; 
else 
#line 38 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%n used before set", _auto_this ) ; 
} } } } } ; 

#line 45 "../../src/expr2.c"
int _expr_lval ( _auto_this , _auto_oper ) register struct expr * _auto_this ; 
int _auto_oper ; 

#line 46 "../../src/expr2.c"
{ 
#line 46 "../../src/expr2.c"
int _auto__result ; 
register Pexpr _auto_ee ; 
register Pname _auto_n ; 
int _auto_deref ; 
char * _auto_es ; 

#line 47 "../../src/expr2.c"
_auto_ee = ( struct expr * ) _auto_this ; 

#line 49 "../../src/expr2.c"
_auto_deref = 0 ; 

#line 52 "../../src/expr2.c"
if ( ( _auto_this == 0 ) || ( _auto_this -> _expr__O2.__C2_tp == 0 ) ) errorFI_PC__E ( 
#line 52 "../../src/expr2.c"
( int ) 'i' , ( char * ) "%d->lval(0)", _auto_this ) ; 

#line 54 "../../src/expr2.c"
switch ( _auto_oper ) { 
#line 54 "../../src/expr2.c"
case 112 : case 145 : _auto_es = "address of"; 

#line 58 "../../src/expr2.c"
break ; 

#line 59 "../../src/expr2.c"
case 48 : case 49 : _auto_es = "increment of"; 

#line 62 "../../src/expr2.c"
goto def ; 

#line 63 "../../src/expr2.c"
case 111 : _auto_es = "dereference of"; 

#line 65 "../../src/expr2.c"
break ; 

#line 66 "../../src/expr2.c"
default : _auto_es = "assignment to"; 

#line 68 "../../src/expr2.c"
def : if ( _type_tconst ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp ) ) { 
#line 69 "../../src/expr2.c"
if ( 
#line 69 "../../src/expr2.c"
_auto_oper ) 
#line 70 "../../src/expr2.c"
{ 
#line 70 "../../src/expr2.c"
if ( _auto_this -> _node_base == 85 ) errorFPC__E ( ( char * ) "%s constant%n", _auto_es , 
#line 70 "../../src/expr2.c"
_auto_this ) ; 
else 
#line 74 "../../src/expr2.c"
errorFPC__E ( ( char * ) "%s constant", _auto_es ) ; 
} 
#line 76 "../../src/expr2.c"
{ 
#line 76 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 76 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 80 "../../src/expr2.c"
for ( ;;) { 
#line 80 "../../src/expr2.c"
switch ( _auto_ee -> _node_base ) { 
#line 82 "../../src/expr2.c"
case 
#line 82 "../../src/expr2.c"
146 : 
#line 84 "../../src/expr2.c"
case 109 : if ( _auto_deref == 0 ) { 
#line 85 "../../src/expr2.c"
switch ( _auto_oper ) { 
#line 86 "../../src/expr2.c"
case 
#line 86 "../../src/expr2.c"
112 : 
#line 88 "../../src/expr2.c"
case 145 : case 0 : if ( _auto_ee -> _expr__O5.__C5_fct_name && ( ( ( struct 
#line 88 "../../src/expr2.c"
fct * ) ( _auto_ee -> _expr__O5.__C5_fct_name -> _expr__O2.__C2_tp ) ) ) -> _fct_f_inline ) 
#line 91 "../../src/expr2.c"
{ 
#line 91 "../../src/expr2.c"
{ _auto__result = 1 ; 
#line 91 "../../src/expr2.c"

#line 91 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 94 "../../src/expr2.c"
default : if ( _auto_deref == 0 ) { 
#line 95 "../../src/expr2.c"
if ( 
#line 95 "../../src/expr2.c"
_auto_oper ) 
#line 96 "../../src/expr2.c"
errorFPC__E ( ( char * ) "%s %k (not an lvalue)", _auto_es , _auto_ee -> _node_base ) ; 

#line 97 "../../src/expr2.c"
{ 
#line 97 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 97 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 99 "../../src/expr2.c"
{ 
#line 99 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 99 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 100 "../../src/expr2.c"
case 86 : case 84 : case 82 : case 83 : if ( _auto_oper ) errorFPC__E ( 
#line 100 "../../src/expr2.c"
( char * ) "%s numeric constant", _auto_es ) ; 

#line 105 "../../src/expr2.c"
{ 
#line 105 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 105 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 106 "../../src/expr2.c"
case 81 : if ( _auto_oper ) errorFI_PC__E ( ( int ) 'w' , ( char 
#line 106 "../../src/expr2.c"
* ) "%s string constant", _auto_es ) ; 

#line 108 "../../src/expr2.c"
{ 
#line 108 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 108 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 110 "../../src/expr2.c"
case 111 : { 
#line 111 "../../src/expr2.c"
Pexpr _auto_ee1 ; 

#line 111 "../../src/expr2.c"
_auto_ee1 = _auto_ee -> _expr__O3.__C3_e1 ; 

#line 112 "../../src/expr2.c"
if ( _auto_ee1 -> _node_base == 112 ) _auto_ee = _auto_ee1 -> _expr__O4.__C4_e2 ; 
else 
#line 114 "../../src/expr2.c"
{ 
#line 114 "../../src/expr2.c"
_auto_ee = _auto_ee1 ; 

#line 116 "../../src/expr2.c"
_auto_deref = 1 ; 
} 
#line 118 "../../src/expr2.c"
break ; 
} 
#line 128 "../../src/expr2.c"
case 45 : switch ( _auto_ee -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 130 "../../src/expr2.c"
case 85 : switch ( _auto_oper ) 
#line 130 "../../src/expr2.c"

#line 133 "../../src/expr2.c"
{ 
#line 133 "../../src/expr2.c"
case 112 : case 145 : { 
#line 564 "../../src/cfront.h"
( ( struct name * ) ( ( ( 
#line 564 "../../src/cfront.h"
struct name * ) ( _auto_ee -> _expr__O3.__C3_e1 ) ) ) ) -> _name_n_addr_taken ++ ; 
} 
#line 136 "../../src/expr2.c"
case 0 : break ; 

#line 137 "../../src/expr2.c"
case 70 : ( ( ( struct name * ) ( _auto_ee -> _expr__O3.__C3_e1 ) ) ) -> 
#line 137 "../../src/expr2.c"
_name_n_used -- ; 

#line 138 "../../src/expr2.c"
default : _name_assign ( ( struct name * ) ( ( ( struct name * ) ( 
#line 138 "../../src/expr2.c"
_auto_ee -> _expr__O3.__C3_e1 ) ) ) ) ; 
} 
#line 140 "../../src/expr2.c"
case 45 : { 
#line 141 "../../src/expr2.c"
Pexpr _auto_e ; 

#line 141 "../../src/expr2.c"
_auto_e = _auto_ee -> _expr__O3.__C3_e1 ; 

#line 142 "../../src/expr2.c"
do _auto_e = _auto_e -> _expr__O3.__C3_e1 ; 
while ( _auto_e -> _node_base == 45 ) ; 

#line 143 "../../src/expr2.c"
if ( _auto_e -> _node_base == 85 ) { 
#line 143 "../../src/expr2.c"
switch ( _auto_oper ) { 
#line 145 "../../src/expr2.c"
case 112 : case 145 : 
#line 145 "../../src/expr2.c"

#line 147 "../../src/expr2.c"
{ 
#line 564 "../../src/cfront.h"
( ( struct name * ) ( ( ( struct name * ) ( _auto_e ) 
#line 564 "../../src/cfront.h"
) ) ) -> _name_n_addr_taken ++ ; 
} 
#line 148 "../../src/expr2.c"
case 0 : break ; 

#line 149 "../../src/expr2.c"
case 70 : ( ( ( struct name * ) ( _auto_e ) ) ) -> _name_n_used -- 
#line 149 "../../src/expr2.c"
; 

#line 150 "../../src/expr2.c"
default : _name_assign ( ( struct name * ) ( ( ( struct name * ) ( 
#line 150 "../../src/expr2.c"
_auto_e ) ) ) ) ; 
} } } } 
#line 154 "../../src/expr2.c"
_auto_n = _auto_ee -> _expr__O5.__C5_mem ; 

#line 155 "../../src/expr2.c"
if ( ( _auto_deref == 0 ) && _type_tconst ( ( struct type * ) _auto_ee -> _expr__O3.__C3_e1 -> 
#line 155 "../../src/expr2.c"
_expr__O2.__C2_tp ) ) 
#line 155 "../../src/expr2.c"
{ 
#line 155 "../../src/expr2.c"
if ( _auto_oper ) errorFPC__E ( ( char * ) "%sM%n of%t", _auto_es , _auto_n , 
#line 155 "../../src/expr2.c"
_auto_ee -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) ; 

#line 157 "../../src/expr2.c"
{ 
#line 157 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 157 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 159 "../../src/expr2.c"
goto xx ; 

#line 161 "../../src/expr2.c"
case 44 : _auto_n = _auto_ee -> _expr__O5.__C5_mem ; 

#line 163 "../../src/expr2.c"
if ( _auto_deref == 0 ) { 
#line 163 "../../src/expr2.c"
Ptype _auto_p ; 

#line 164 "../../src/expr2.c"
_auto_p = _auto_ee -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 165 "../../src/expr2.c"
zxc : switch ( _auto_p -> _node_base ) { 
#line 166 "../../src/expr2.c"
case 97 : _auto_p = ( ( ( struct basetype * 
#line 166 "../../src/expr2.c"
) ( _auto_p ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 167 "../../src/expr2.c"
goto zxc ; 

#line 168 "../../src/expr2.c"
case 125 : break ; 

#line 169 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "%t->%n", _auto_p , _auto_n ) 
#line 169 "../../src/expr2.c"
; 
} 
#line 171 "../../src/expr2.c"
if ( _type_tconst ( ( struct type * ) ( ( ( struct ptr * ) 
#line 171 "../../src/expr2.c"
( _auto_p ) ) ) -> _ptr_typ ) ) 
#line 171 "../../src/expr2.c"
{ 
#line 171 "../../src/expr2.c"
if ( _auto_oper ) errorFPC__E ( ( char 
#line 171 "../../src/expr2.c"
* ) "%sM%n of%t", _auto_es , _auto_n , ( ( ( struct ptr * ) ( _auto_p ) ) 
#line 171 "../../src/expr2.c"
) -> _ptr_typ ) ; 

#line 173 "../../src/expr2.c"
{ 
#line 173 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 173 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 176 "../../src/expr2.c"
goto xx ; 

#line 177 "../../src/expr2.c"
case 85 : _auto_n = ( ( ( struct name * ) ( _auto_ee ) ) ) ; 
#line 177 "../../src/expr2.c"

#line 179 "../../src/expr2.c"
xx : if ( _auto_deref || ( _auto_oper == 0 ) ) { 
#line 180 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 180 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 182 "../../src/expr2.c"
if ( ( _auto_n -> _expr__O2.__C2_tp -> _node_base == 114 ) && ( ( ( ( 
#line 182 "../../src/expr2.c"
struct basetype * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_bits == 0 ) ) 
#line 182 "../../src/expr2.c"
{ 
#line 182 "../../src/expr2.c"

#line 182 "../../src/expr2.c"

#line 183 "../../src/expr2.c"
errorFPC__E ( ( char * ) "%s 0-length field%n", _auto_es , _auto_n ) ; 

#line 184 "../../src/expr2.c"
{ 
#line 184 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 184 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 186 "../../src/expr2.c"
switch ( _auto_oper ) { 
#line 186 "../../src/expr2.c"
case 112 : case 145 : { 
#line 189 "../../src/expr2.c"
Pfct _auto_f ; 

#line 189 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 190 "../../src/expr2.c"
if ( _auto_n -> _name_n_sto == 27 ) { 
#line 190 "../../src/expr2.c"
errorFPC__E ( ( char * ) "& register%n", _auto_n ) ; 
#line 190 "../../src/expr2.c"

#line 192 "../../src/expr2.c"
{ 
#line 192 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 192 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 194 "../../src/expr2.c"
if ( _auto_f == 0 ) { 
#line 194 "../../src/expr2.c"
errorFPC__E ( ( char * ) 
#line 194 "../../src/expr2.c"
"& label%n", _auto_n ) ; 

#line 196 "../../src/expr2.c"
{ 
#line 196 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 196 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 198 "../../src/expr2.c"
if ( _auto_n -> _name_n_stclass == 13 ) { 
#line 198 "../../src/expr2.c"
errorFPC__E ( ( char * ) 
#line 198 "../../src/expr2.c"
"& enumerator%n", _auto_n ) ; 

#line 200 "../../src/expr2.c"
{ 
#line 200 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 200 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 202 "../../src/expr2.c"
if ( _auto_n -> _expr__O2.__C2_tp -> _node_base == 114 ) { 
#line 202 "../../src/expr2.c"
errorFPC__E ( ( char * 
#line 202 "../../src/expr2.c"
) "& field%n", _auto_es , _auto_n ) ; 

#line 204 "../../src/expr2.c"
{ 
#line 204 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 204 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 206 "../../src/expr2.c"
_auto_n -> _name_n_used -- ; 

#line 207 "../../src/expr2.c"
{ 
#line 564 "../../src/cfront.h"
( ( struct name * ) _auto_n ) -> _name_n_addr_taken ++ ; 
} 
#line 208 "../../src/expr2.c"
if ( ( _auto_n -> _name_n_evaluated && ( _auto_n -> _name_n_scope != 136 ) ) || ( ( 
#line 208 "../../src/expr2.c"
_auto_f -> _node_base == 108 ) && _auto_f -> _fct_f_inline ) ) 
#line 209 "../../src/expr2.c"
{ 
#line 209 "../../src/expr2.c"
Pname _auto_nn ; 

#line 211 "../../src/expr2.c"
_auto_nn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 211 "../../src/expr2.c"
* ) 0 ) ; 

#line 212 "../../src/expr2.c"
if ( _auto_n -> _name_n_evaluated && ( _auto_n -> _name_n_scope != 136 ) ) { 
#line 212 "../../src/expr2.c"
_auto_n -> _name_n_evaluated = 0 ; 
#line 212 "../../src/expr2.c"

#line 214 "../../src/expr2.c"
_auto_n -> _expr__O4.__C4_n_initializer = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , 
#line 214 "../../src/expr2.c"
( struct expr * ) ( ( ( struct expr * ) ( _auto_n -> _name_n_val ) ) 
#line 214 "../../src/expr2.c"
) , ( struct expr * ) 0 ) ; 
} 
#line 216 "../../src/expr2.c"
( * _auto_nn ) = ( * _auto_n ) ; 

#line 217 "../../src/expr2.c"
_auto_nn -> _name_n_sto = 31 ; 

#line 218 "../../src/expr2.c"
_auto_nn -> _name_n_list = dcl_list ; 

#line 219 "../../src/expr2.c"
dcl_list = _auto_nn ; 
} 
#line 221 "../../src/expr2.c"
break ; 
} 
#line 223 "../../src/expr2.c"
case 70 : _auto_n -> _name_n_used -- ; 

#line 225 "../../src/expr2.c"
_name_assign ( ( struct name * ) _auto_n ) ; 

#line 226 "../../src/expr2.c"
break ; 

#line 227 "../../src/expr2.c"
default : if ( cc -> _dcl_context_tot && ( _auto_n == cc -> _dcl_context_c_this ) ) { 
#line 228 "../../src/expr2.c"
errorFPC__E ( ( 
#line 228 "../../src/expr2.c"
char * ) "%n%k", _auto_n , _auto_oper ) ; 

#line 230 "../../src/expr2.c"
{ 
#line 230 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 230 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 232 "../../src/expr2.c"
_name_assign ( ( struct name * ) _auto_n ) ; 
} 
#line 234 "../../src/expr2.c"
{ 
#line 234 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 234 "../../src/expr2.c"
return _auto__result ; 
} } } } } ; 

#line 239 "../../src/expr2.c"
Pexpr Ninit ; 

#line 240 "../../src/expr2.c"
int Nstd = 0 ; 

#line 242 "../../src/expr2.c"
bit gen_match ( _auto_n , _auto_arg ) struct name * _auto_n ; 
struct expr * _auto_arg ; 

#line 246 "../../src/expr2.c"
{ 
#line 246 "../../src/expr2.c"
bit _auto__result ; 
Pfct _auto_f ; 
register Pexpr _auto_e ; 
register Pname _auto_nn ; 

#line 247 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 251 "../../src/expr2.c"
for ( ( ( _auto_e = _auto_arg ) , ( _auto_nn = _auto_f -> _fct_argtype ) ) ;_auto_e ;( ( 
#line 251 "../../src/expr2.c"
_auto_e = _auto_e -> _expr__O4.__C4_e2 ) , ( _auto_nn = _auto_nn -> _name_n_list ) ) ) 
#line 251 "../../src/expr2.c"
{ 
#line 251 "../../src/expr2.c"
Pexpr _auto_a ; 
Ptype _auto_at ; 
Ptype _auto_nt ; 

#line 252 "../../src/expr2.c"
_auto_a = _auto_e -> _expr__O3.__C3_e1 ; 

#line 253 "../../src/expr2.c"
_auto_at = _auto_a -> _expr__O2.__C2_tp ; 

#line 254 "../../src/expr2.c"
if ( _auto_at -> _node_base == 141 ) { 
#line 254 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 254 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 255 "../../src/expr2.c"
if ( _auto_nn == 0 ) { 
#line 255 "../../src/expr2.c"
{ _auto__result = ( _auto_f -> _fct_nargs_known == 155 ) 
#line 255 "../../src/expr2.c"
; 

#line 255 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 257 "../../src/expr2.c"
_auto_nt = _auto_nn -> _expr__O2.__C2_tp ; 

#line 260 "../../src/expr2.c"
switch ( _auto_nt -> _node_base ) { 
#line 260 "../../src/expr2.c"
case 158 : if ( _auto_at == ( struct type * ) 
#line 260 "../../src/expr2.c"
zero_type ) 
#line 262 "../../src/expr2.c"
{ 
#line 262 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 262 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 263 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_nt , ( struct type * ) 
#line 263 "../../src/expr2.c"
_auto_at , 78 ) ) 
#line 263 "../../src/expr2.c"
{ 
#line 263 "../../src/expr2.c"
Pptr _auto_pt ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 264 "../../src/expr2.c"
_auto_pt = ( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * 
#line 264 "../../src/expr2.c"
) _new ( ( long ) 16) ) , ( ( Nt ++ ) , ( 
#line 264 "../../src/expr2.c"
( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 
#line 264 "../../src/expr2.c"
( ( struct type * ) _auto_at ) ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( 
#line 264 "../../src/expr2.c"
( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ) 
#line 264 "../../src/expr2.c"
; 

#line 265 "../../src/expr2.c"
_auto_nt -> _node_base = 125 ; 

#line 267 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_nt , ( struct type * ) _auto_pt , 78 ) 
#line 267 "../../src/expr2.c"
) 
#line 267 "../../src/expr2.c"
{ 
#line 267 "../../src/expr2.c"
_auto_nt -> _node_base = 158 ; 

#line 269 "../../src/expr2.c"
_delete ( ( int * ) _auto_pt ) ; 

#line 270 "../../src/expr2.c"
{ 
#line 270 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 270 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 272 "../../src/expr2.c"
_auto_nt -> _node_base = 158 ; 

#line 273 "../../src/expr2.c"
_delete ( ( int * ) _auto_pt ) ; 
} 
#line 275 "../../src/expr2.c"
break ; 

#line 276 "../../src/expr2.c"
default : if ( _type_check ( ( struct type * ) _auto_nt , ( struct type * ) 
#line 276 "../../src/expr2.c"
_auto_at , 78 ) ) 
#line 277 "../../src/expr2.c"
{ 
#line 277 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 277 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 281 "../../src/expr2.c"
if ( _auto_nn ) { 
#line 281 "../../src/expr2.c"
Ninit = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 283 "../../src/expr2.c"
{ 
#line 283 "../../src/expr2.c"
{ _auto__result = ( Ninit != 0 ) ; 

#line 283 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 286 "../../src/expr2.c"
{ 
#line 286 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 286 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 289 "../../src/expr2.c"
Pname Ncoerce ; 

#line 291 "../../src/expr2.c"
extern bit can_coerce ( _auto_t1 , _auto_t2 ) struct type * _auto_t1 ; 
struct type * _auto_t2 ; 

#line 295 "../../src/expr2.c"
{ 
#line 295 "../../src/expr2.c"
bit _auto__result ; 

#line 297 "../../src/expr2.c"
Ncoerce = 0 ; 

#line 298 "../../src/expr2.c"
if ( _auto_t2 -> _node_base == 141 ) { 
#line 298 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 298 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 299 "../../src/expr2.c"
switch ( _auto_t1 -> _node_base ) { 
#line 299 "../../src/expr2.c"
case 158 : rloop : switch ( _auto_t2 -> _node_base ) 
#line 299 "../../src/expr2.c"

#line 302 "../../src/expr2.c"
{ 
#line 302 "../../src/expr2.c"
case 97 : _auto_t2 = ( struct type * ) ( ( ( struct basetype * ) 
#line 302 "../../src/expr2.c"
( _auto_t2 ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 305 "../../src/expr2.c"
goto rloop ; 

#line 310 "../../src/expr2.c"
default : { 
#line 311 "../../src/expr2.c"
Ptype _auto_tt2 ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 311 "../../src/expr2.c"
_auto_tt2 = ( struct type * ) ( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( 
#line 311 "../../src/expr2.c"
_auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , ( ( 
#line 311 "../../src/expr2.c"
Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( 
#line 311 "../../src/expr2.c"
( struct type * ) ( ( struct type * ) _auto_t2 ) ) ) , ( 
#line 311 "../../src/expr2.c"
( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) 
#line 311 "../../src/expr2.c"
) ) ) ) ; 

#line 313 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_t1 , ( struct type * ) _auto_tt2 , 78 ) 
#line 313 "../../src/expr2.c"
== 0 ) 
#line 313 "../../src/expr2.c"
{ 
#line 313 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 313 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 314 "../../src/expr2.c"
{ 
#line 314 "../../src/expr2.c"
Ptype _auto_tt1 ; 
int _auto_i ; 

#line 314 "../../src/expr2.c"
_auto_tt1 = ( ( ( struct ptr * ) ( _auto_t1 ) ) ) -> _ptr_typ ; 

#line 315 "../../src/expr2.c"
_auto_i = can_coerce ( ( struct type * ) _auto_tt1 , _auto_t2 ) ; 

#line 316 "../../src/expr2.c"
{ 
#line 316 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 316 "../../src/expr2.c"
return _auto__result ; 
} } } } } } 
#line 321 "../../src/expr2.c"
{ 
#line 321 "../../src/expr2.c"
Pname _auto_c1 ; 
Pname _auto_c2 ; 
int _auto_val ; 

#line 321 "../../src/expr2.c"
_auto_c1 = _type_is_cl_obj ( ( struct type * ) _auto_t1 ) ; 

#line 322 "../../src/expr2.c"
_auto_c2 = _type_is_cl_obj ( ( struct type * ) _auto_t2 ) ; 

#line 323 "../../src/expr2.c"
_auto_val = 0 ; 

#line 325 "../../src/expr2.c"
if ( _auto_c1 ) { 
#line 325 "../../src/expr2.c"
Pclass _auto_cl ; 

#line 326 "../../src/expr2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_c1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 327 "../../src/expr2.c"
if ( _auto_c2 && ( _auto_c2 -> _expr__O2.__C2_tp == ( struct type * ) _auto_cl ) ) { 
#line 327 "../../src/expr2.c"
{ 
#line 327 "../../src/expr2.c"

#line 327 "../../src/expr2.c"
_auto__result = 1 ; 

#line 327 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 334 "../../src/expr2.c"
{ 
#line 334 "../../src/expr2.c"
Pname _auto_ctor ; 

#line 334 "../../src/expr2.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 334 "../../src/expr2.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 335 "../../src/expr2.c"
if ( _auto_ctor == 0 ) goto oper_coerce ; 

#line 336 "../../src/expr2.c"
{ 
#line 336 "../../src/expr2.c"
register Pfct _auto_f ; 

#line 336 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_ctor -> _expr__O2.__C2_tp ) ) ) ; 

#line 338 "../../src/expr2.c"
switch ( _auto_f -> _node_base ) { 
#line 338 "../../src/expr2.c"
case 108 : switch ( _auto_f -> _fct_nargs ) { 
#line 340 "../../src/expr2.c"
case 1 : 
#line 340 "../../src/expr2.c"

#line 342 "../../src/expr2.c"
one : { 
#line 343 "../../src/expr2.c"
Ptype _auto_tt ; 

#line 343 "../../src/expr2.c"
_auto_tt = _auto_f -> _fct_argtype -> _expr__O2.__C2_tp ; 

#line 345 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_tt , _auto_t2 , 78 ) == 0 ) _auto_val = 
#line 345 "../../src/expr2.c"
1 ; 

#line 346 "../../src/expr2.c"
if ( _auto_tt -> _node_base == 158 ) { 
#line 346 "../../src/expr2.c"
Pptr _auto_pt ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 347 "../../src/expr2.c"
_auto_pt = ( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * 
#line 347 "../../src/expr2.c"
) _new ( ( long ) 16) ) , ( ( Nt ++ ) , ( 
#line 347 "../../src/expr2.c"
( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 
#line 347 "../../src/expr2.c"
( ( struct type * ) _auto_t2 ) ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( 
#line 347 "../../src/expr2.c"
( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ) 
#line 347 "../../src/expr2.c"
; 

#line 348 "../../src/expr2.c"
_auto_tt -> _node_base = 125 ; 

#line 349 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_tt , ( struct type * ) _auto_pt , 78 ) 
#line 349 "../../src/expr2.c"
== 0 ) 
#line 349 "../../src/expr2.c"
_auto_val = 1 ; 

#line 350 "../../src/expr2.c"
_auto_tt -> _node_base = 158 ; 

#line 351 "../../src/expr2.c"
_delete ( ( int * ) _auto_pt ) ; 
} 
#line 353 "../../src/expr2.c"
goto oper_coerce ; 
} 
#line 355 "../../src/expr2.c"
default : if ( _auto_f -> _fct_argtype -> _name_n_list -> _expr__O4.__C4_n_initializer ) goto one ; 

#line 357 "../../src/expr2.c"
case 0 : goto oper_coerce ; 
} 
#line 360 "../../src/expr2.c"
case 76 : { 
#line 361 "../../src/expr2.c"
register Plist _auto_gl ; 

#line 363 "../../src/expr2.c"
for ( _auto_gl = ( ( ( struct gen * ) ( _auto_f ) ) ) -> 
#line 363 "../../src/expr2.c"
_gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) 
#line 363 "../../src/expr2.c"
{ 
#line 363 "../../src/expr2.c"
Pname _auto_nn ; 
Pfct _auto_ff ; 

#line 364 "../../src/expr2.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 365 "../../src/expr2.c"
_auto_ff = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 366 "../../src/expr2.c"
switch ( _auto_ff -> _fct_nargs ) { 
#line 366 "../../src/expr2.c"
case 0 : break ; 

#line 369 "../../src/expr2.c"
case 1 : over_one : { 
#line 371 "../../src/expr2.c"
Ptype _auto_tt ; 

#line 371 "../../src/expr2.c"
_auto_tt = _auto_ff -> _fct_argtype -> _expr__O2.__C2_tp ; 

#line 373 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_tt , _auto_t2 , 78 ) == 0 ) _auto_val = 
#line 373 "../../src/expr2.c"
1 ; 

#line 374 "../../src/expr2.c"
if ( _auto_tt -> _node_base == 158 ) { 
#line 374 "../../src/expr2.c"
Pptr _auto_pt ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 375 "../../src/expr2.c"
_auto_pt = ( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * 
#line 375 "../../src/expr2.c"
) _new ( ( long ) 16) ) , ( ( Nt ++ ) , ( 
#line 375 "../../src/expr2.c"
( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 
#line 375 "../../src/expr2.c"
( ( struct type * ) _auto_t2 ) ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( 
#line 375 "../../src/expr2.c"
( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ) 
#line 375 "../../src/expr2.c"
; 

#line 376 "../../src/expr2.c"
_auto_tt -> _node_base = 125 ; 

#line 377 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_tt , ( struct type * ) _auto_pt , 78 ) 
#line 377 "../../src/expr2.c"
== 0 ) 
#line 377 "../../src/expr2.c"
{ 
#line 377 "../../src/expr2.c"
_auto_tt -> _node_base = 158 ; 

#line 379 "../../src/expr2.c"
_delete ( ( int * ) _auto_pt ) ; 

#line 380 "../../src/expr2.c"
_auto_val = 1 ; 

#line 381 "../../src/expr2.c"
goto oper_coerce ; 
} 
#line 383 "../../src/expr2.c"
_auto_tt -> _node_base = 158 ; 

#line 384 "../../src/expr2.c"
_delete ( ( int * ) _auto_pt ) ; 
} 
#line 386 "../../src/expr2.c"
break ; 
} 
#line 388 "../../src/expr2.c"
default : if ( _auto_ff -> _fct_argtype -> _name_n_list -> _expr__O4.__C4_n_initializer ) goto over_one ; 
} } 
#line 392 "../../src/expr2.c"
goto oper_coerce ; 
} 
#line 394 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "cannot_coerce(%k)\n", _auto_f -> 
#line 394 "../../src/expr2.c"
_node_base ) ; 
} } } } 
#line 398 "../../src/expr2.c"
oper_coerce : if ( _auto_c2 ) { 
#line 399 "../../src/expr2.c"
Pclass _auto_cl ; 
int _auto_std ; 

#line 400 "../../src/expr2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_c2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 401 "../../src/expr2.c"
_auto_std = 0 ; 

#line 402 "../../src/expr2.c"
{ 
#line 402 "../../src/expr2.c"
register Pname _auto_on ; 

#line 402 "../../src/expr2.c"
_auto_on = _auto_cl -> _classdef_conv ; 

#line 402 "../../src/expr2.c"
for ( ;_auto_on ;( _auto_on = _auto_on -> _name_n_list ) ) { 
#line 402 "../../src/expr2.c"
Pfct _auto_f ; 

#line 404 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) ; 

#line 405 "../../src/expr2.c"
Nstd = 0 ; 

#line 406 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_t1 , ( struct type * ) _auto_f -> _fct_returns , 
#line 406 "../../src/expr2.c"
78 ) == 0 ) 
#line 406 "../../src/expr2.c"
{ 
#line 406 "../../src/expr2.c"
if ( Nstd == 0 ) { 
#line 408 "../../src/expr2.c"
if ( _auto_std ) 
#line 408 "../../src/expr2.c"

#line 409 "../../src/expr2.c"
{ 
#line 409 "../../src/expr2.c"
_auto_val = 1 ; 

#line 411 "../../src/expr2.c"
_auto_std = 0 ; 
} else 
#line 414 "../../src/expr2.c"
_auto_val ++ ; 

#line 415 "../../src/expr2.c"
Ncoerce = _auto_on ; 
} else 
#line 417 "../../src/expr2.c"
{ 
#line 417 "../../src/expr2.c"
if ( ( _auto_val == 0 ) || _auto_std ) { 
#line 418 "../../src/expr2.c"
Ncoerce = _auto_on ; 
#line 418 "../../src/expr2.c"

#line 420 "../../src/expr2.c"
_auto_val ++ ; 

#line 421 "../../src/expr2.c"
_auto_std = 1 ; 
} } } } } } 
#line 428 "../../src/expr2.c"
if ( _auto_val ) { 
#line 428 "../../src/expr2.c"
{ _auto__result = _auto_val ; 

#line 428 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 429 "../../src/expr2.c"
if ( _auto_c1 && ( ( ( struct classdef * ) ( ( ( 
#line 429 "../../src/expr2.c"
struct classdef * ) ( _auto_c1 -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_itor ) ) 
#line 429 "../../src/expr2.c"
{ 
#line 429 "../../src/expr2.c"
{ 
#line 429 "../../src/expr2.c"

#line 429 "../../src/expr2.c"
_auto__result = 0 ; 

#line 429 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 430 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_t1 , _auto_t2 , 78 ) ) { 
#line 430 "../../src/expr2.c"

#line 430 "../../src/expr2.c"

#line 430 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 430 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 431 "../../src/expr2.c"
{ 
#line 431 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 431 "../../src/expr2.c"
return _auto__result ; 
} } } } ; 

#line 434 "../../src/expr2.c"
int gen_coerce ( _auto_n , _auto_arg ) struct name * _auto_n ; 
struct expr * _auto_arg ; 

#line 440 "../../src/expr2.c"
{ 
#line 440 "../../src/expr2.c"
int _auto__result ; 
Pfct _auto_f ; 
register Pexpr _auto_e ; 
register Pname _auto_nn ; 

#line 441 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 445 "../../src/expr2.c"
for ( ( ( _auto_e = _auto_arg ) , ( _auto_nn = _auto_f -> _fct_argtype ) ) ;_auto_e ;( ( 
#line 445 "../../src/expr2.c"
_auto_e = _auto_e -> _expr__O4.__C4_e2 ) , ( _auto_nn = _auto_nn -> _name_n_list ) ) ) 
#line 445 "../../src/expr2.c"
{ 
#line 445 "../../src/expr2.c"
if ( _auto_nn == 
#line 445 "../../src/expr2.c"
0 ) 
#line 446 "../../src/expr2.c"
{ 
#line 446 "../../src/expr2.c"
{ _auto__result = ( _auto_f -> _fct_nargs_known == 155 ) ; 

#line 446 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 447 "../../src/expr2.c"
{ 
#line 447 "../../src/expr2.c"
Pexpr _auto_a ; 
Ptype _auto_at ; 
int _auto_i ; 

#line 447 "../../src/expr2.c"
_auto_a = _auto_e -> _expr__O3.__C3_e1 ; 

#line 448 "../../src/expr2.c"
_auto_at = _auto_a -> _expr__O2.__C2_tp ; 

#line 449 "../../src/expr2.c"
_auto_i = can_coerce ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( struct type * ) _auto_at ) ; 
#line 449 "../../src/expr2.c"

#line 451 "../../src/expr2.c"
if ( _auto_i != 1 ) { 
#line 451 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 451 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 453 "../../src/expr2.c"
if ( _auto_nn && ( _auto_nn -> _expr__O4.__C4_n_initializer == 0 ) ) { 
#line 453 "../../src/expr2.c"

#line 453 "../../src/expr2.c"

#line 453 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 453 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 454 "../../src/expr2.c"
{ 
#line 454 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 454 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 458 "../../src/expr2.c"
Pname Nover ; 

#line 459 "../../src/expr2.c"
int Nover_coerce = 0 ; 

#line 461 "../../src/expr2.c"
extern int over_call ( _auto_n , _auto_arg ) struct name * _auto_n ; 
struct expr * _auto_arg ; 

#line 468 "../../src/expr2.c"
{ 
#line 468 "../../src/expr2.c"
int _auto__result ; 
register Plist _auto_gl ; 
Pgen _auto_g ; 
Pname _auto_exact ; 
int _auto_no_exact ; 

#line 470 "../../src/expr2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 471 "../../src/expr2.c"
if ( _auto_arg && ( _auto_arg -> _node_base != 140 ) ) errorFI_PC__E ( ( int ) 'i' , ( 
#line 471 "../../src/expr2.c"
char * ) "ALX") ; 

#line 473 "../../src/expr2.c"
Nover_coerce = 0 ; 

#line 474 "../../src/expr2.c"
switch ( _auto_g -> _node_base ) { 
#line 474 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 474 "../../src/expr2.c"
* ) "over_call(%t)\n", _auto_g ) ; 

#line 476 "../../src/expr2.c"
case 76 : break ; 

#line 477 "../../src/expr2.c"
case 108 : Nover = _auto_n ; 

#line 479 "../../src/expr2.c"
Ninit = 0 ; 

#line 480 "../../src/expr2.c"
if ( gen_match ( _auto_n , _auto_arg ) && ( Ninit == 0 ) ) { 
#line 480 "../../src/expr2.c"
{ _auto__result = 
#line 480 "../../src/expr2.c"
2 ; 

#line 480 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 481 "../../src/expr2.c"
if ( gen_coerce ( _auto_n , _auto_arg ) ) { 
#line 481 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 481 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 482 "../../src/expr2.c"
{ 
#line 482 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 482 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 485 "../../src/expr2.c"
_auto_exact = 0 ; 

#line 485 "../../src/expr2.c"
_auto_no_exact = 0 ; 

#line 487 "../../src/expr2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 487 "../../src/expr2.c"
Nover = _auto_gl -> _name_list_f ; 

#line 489 "../../src/expr2.c"
Ninit = 0 ; 

#line 490 "../../src/expr2.c"
Nstd = 0 ; 

#line 492 "../../src/expr2.c"
if ( gen_match ( ( struct name * ) Nover , _auto_arg ) && ( Ninit == 0 ) 
#line 492 "../../src/expr2.c"
) 
#line 492 "../../src/expr2.c"
{ 
#line 492 "../../src/expr2.c"
if ( Nstd == 0 ) { 
#line 494 "../../src/expr2.c"
{ _auto__result = 2 ; 

#line 494 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 495 "../../src/expr2.c"
if ( _auto_exact ) _auto_no_exact ++ ; 
else 
#line 498 "../../src/expr2.c"
_auto_exact = Nover ; 
} } 
#line 503 "../../src/expr2.c"
if ( _auto_exact ) { 
#line 503 "../../src/expr2.c"
if ( _auto_no_exact ) errorFI_PC__E ( ( int ) 'w' , 
#line 503 "../../src/expr2.c"
( char * ) "more than one standard conversion possible for%n", _auto_n ) ; 

#line 506 "../../src/expr2.c"
Nover = _auto_exact ; 

#line 507 "../../src/expr2.c"
{ 
#line 507 "../../src/expr2.c"
{ _auto__result = 2 ; 

#line 507 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 510 "../../src/expr2.c"
Nover = 0 ; 

#line 511 "../../src/expr2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 511 "../../src/expr2.c"
Pname _auto_nn ; 

#line 512 "../../src/expr2.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 514 "../../src/expr2.c"
if ( gen_coerce ( ( struct name * ) _auto_nn , _auto_arg ) ) { 
#line 514 "../../src/expr2.c"
if ( Nover ) 
#line 514 "../../src/expr2.c"

#line 515 "../../src/expr2.c"
{ 
#line 515 "../../src/expr2.c"
Nover_coerce = 2 ; 

#line 517 "../../src/expr2.c"
{ 
#line 517 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 517 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 519 "../../src/expr2.c"
Nover = _auto_nn ; 
} } 
#line 523 "../../src/expr2.c"
{ 
#line 523 "../../src/expr2.c"
{ _auto__result = ( Nover ? 1 : 0) ; 

#line 523 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 527 "../../src/expr2.c"
Ptype _expr_fct_call ( _auto_this , _auto_tbl ) register struct expr * _auto_this ; 
struct table * _auto_tbl ; 

#line 533 "../../src/expr2.c"
{ 
#line 533 "../../src/expr2.c"
Ptype _auto__result ; 
Pfct _auto_f ; 
Pname _auto_fn ; 
int _auto_x ; 
int _auto_k ; 
Pname _auto_nn ; 
Pexpr _auto_e ; 
Ptype _auto_t ; 
Pexpr _auto_arg ; 
Ptype _auto_t1 ; 
int _auto_argno ; 
Pexpr _auto_etail ; 
Pname _auto_no_virt ; 

#line 541 "../../src/expr2.c"
_auto_arg = _auto_this -> _expr__O4.__C4_e2 ; 

#line 544 "../../src/expr2.c"
_auto_etail = 0 ; 

#line 547 "../../src/expr2.c"
switch ( _auto_this -> _node_base ) { 
#line 547 "../../src/expr2.c"
case 109 : case 146 : break ; 

#line 550 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "fct_call(%k)", _auto_this -> _node_base ) 
#line 550 "../../src/expr2.c"
; 
} 
#line 553 "../../src/expr2.c"
if ( ( _auto_this -> _expr__O3.__C3_e1 == 0 ) || ( ( _auto_t1 = _auto_this -> _expr__O3.__C3_e1 -> 
#line 553 "../../src/expr2.c"
_expr__O2.__C2_tp ) == 0 ) ) 
#line 553 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 553 "../../src/expr2.c"
"fct_call(e1=%d,e1->tp=%t)", _auto_this -> _expr__O3.__C3_e1 , _auto_t1 ) ; 

#line 554 "../../src/expr2.c"
if ( _auto_arg && ( _auto_arg -> _node_base != 140 ) ) errorFI_PC__E ( ( int ) 'i' , ( 
#line 554 "../../src/expr2.c"
char * ) "badAL%d%k", _auto_arg , _auto_arg -> _node_base ) ; 

#line 556 "../../src/expr2.c"
switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 556 "../../src/expr2.c"
case 85 : _auto_fn = ( ( ( struct name * 
#line 556 "../../src/expr2.c"
) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) ; 

#line 559 "../../src/expr2.c"
_auto_no_virt = _auto_fn -> _name__O6.__C6_n_qualifier ; 

#line 560 "../../src/expr2.c"
break ; 

#line 561 "../../src/expr2.c"
case 44 : case 45 : _auto_fn = _auto_this -> _expr__O3.__C3_e1 -> _expr__O5.__C5_mem ; 

#line 564 "../../src/expr2.c"
_auto_no_virt = _auto_fn -> _name__O6.__C6_n_qualifier ; 

#line 565 "../../src/expr2.c"
break ; 

#line 566 "../../src/expr2.c"
default : _auto_fn = 0 ; 

#line 568 "../../src/expr2.c"
_auto_no_virt = 0 ; 
} 
#line 569 "../../src/expr2.c"
; 

#line 571 "../../src/expr2.c"
lll : switch ( _auto_t1 -> _node_base ) { 
#line 572 "../../src/expr2.c"
case 97 : _auto_t1 = ( ( ( struct basetype * 
#line 572 "../../src/expr2.c"
) ( _auto_t1 ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 575 "../../src/expr2.c"
goto lll ; 

#line 577 "../../src/expr2.c"
case 125 : if ( ( ( ( struct ptr * ) ( _auto_t1 ) ) ) 
#line 577 "../../src/expr2.c"
-> _ptr_typ -> _node_base == 108 ) 
#line 578 "../../src/expr2.c"
{ 
#line 578 "../../src/expr2.c"
_auto_t1 = ( ( ( struct ptr * ) ( _auto_t1 ) 
#line 578 "../../src/expr2.c"
) ) -> _ptr_typ ; 

#line 580 "../../src/expr2.c"
_auto_fn = 0 ; 

#line 581 "../../src/expr2.c"
goto case_fct ; 
} 
#line 584 "../../src/expr2.c"
default : errorFPC__E ( ( char * ) "call of%n;%n is a%t", _auto_fn , _auto_fn , _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) 
#line 584 "../../src/expr2.c"
; 

#line 587 "../../src/expr2.c"
case 141 : { 
#line 588 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 588 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 590 "../../src/expr2.c"
case 76 : { 
#line 591 "../../src/expr2.c"
register Plist _auto_gl ; 
Pgen _auto_g ; 
Pname _auto_found ; 
Pname _auto_exact ; 
int _auto_no_exact ; 

#line 592 "../../src/expr2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_t1 ) ) ) ; 

#line 593 "../../src/expr2.c"
_auto_found = 0 ; 

#line 603 "../../src/expr2.c"
_auto_exact = 0 ; 

#line 604 "../../src/expr2.c"
_auto_no_exact = 0 ; 

#line 605 "../../src/expr2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 605 "../../src/expr2.c"
register Pname _auto_nn ; 

#line 606 "../../src/expr2.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 607 "../../src/expr2.c"
Ninit = 0 ; 

#line 608 "../../src/expr2.c"
Nstd = 0 ; 

#line 610 "../../src/expr2.c"
if ( gen_match ( ( struct name * ) _auto_nn , ( struct expr * ) _auto_arg ) ) 
#line 610 "../../src/expr2.c"

#line 610 "../../src/expr2.c"
{ 
#line 610 "../../src/expr2.c"
if ( Nstd == 0 ) { 
#line 611 "../../src/expr2.c"
_auto_found = _auto_nn ; 

#line 613 "../../src/expr2.c"
goto fnd ; 
} 
#line 615 "../../src/expr2.c"
if ( _auto_exact ) _auto_no_exact ++ ; 
else 
#line 618 "../../src/expr2.c"
_auto_exact = _auto_nn ; 
} } 
#line 622 "../../src/expr2.c"
if ( _auto_exact ) { 
#line 622 "../../src/expr2.c"
if ( _auto_no_exact ) errorFI_PC__E ( ( int ) 'w' , 
#line 622 "../../src/expr2.c"
( char * ) "more than one standard conversion possible for%n", _auto_fn ) ; 

#line 624 "../../src/expr2.c"
_auto_found = _auto_exact ; 

#line 625 "../../src/expr2.c"
goto fnd ; 
} 
#line 628 "../../src/expr2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 628 "../../src/expr2.c"
register Pname _auto_nn ; 

#line 629 "../../src/expr2.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 631 "../../src/expr2.c"
if ( gen_coerce ( ( struct name * ) _auto_nn , ( struct expr * ) _auto_arg ) ) 
#line 631 "../../src/expr2.c"

#line 631 "../../src/expr2.c"
{ 
#line 631 "../../src/expr2.c"
if ( _auto_found ) { 
#line 632 "../../src/expr2.c"
errorFPC__E ( ( char * ) "ambiguousA for overloaded%n", _auto_fn ) ; 

#line 634 "../../src/expr2.c"
goto fnd ; 
} 
#line 636 "../../src/expr2.c"
_auto_found = _auto_nn ; 
} } 
#line 640 "../../src/expr2.c"
fnd : if ( _auto_found ) { 
#line 642 "../../src/expr2.c"
Pbase _auto_b ; 
Ptable _auto_tblx ; 

#line 646 "../../src/expr2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_found -> _expr__O2.__C2_tp ) ) ) ; 

#line 647 "../../src/expr2.c"
_auto_this -> _expr__O5.__C5_fct_name = _auto_found ; 

#line 651 "../../src/expr2.c"
switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 651 "../../src/expr2.c"
default : if ( _auto_no_virt ) _auto_this -> _expr__O3.__C3_e1 = ( 
#line 651 "../../src/expr2.c"
struct expr * ) _auto_found ; 

#line 654 "../../src/expr2.c"
break ; 

#line 655 "../../src/expr2.c"
case 44 : if ( _auto_no_virt ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O5.__C5_mem = _auto_found ; 

#line 657 "../../src/expr2.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 == 0 ) break ; 

#line 658 "../../src/expr2.c"
{ 
#line 658 "../../src/expr2.c"
Ptype _auto_pt ; 

#line 658 "../../src/expr2.c"
_auto_pt = _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 658 "../../src/expr2.c"
for ( ;( _auto_pt -> _node_base == 97 ) ;( _auto_pt = ( ( ( struct basetype * ) 
#line 658 "../../src/expr2.c"
( _auto_pt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ) ) 
#line 658 "../../src/expr2.c"
; 

#line 659 "../../src/expr2.c"
_auto_b = ( ( ( struct basetype * ) ( ( ( ( struct ptr * ) 
#line 659 "../../src/expr2.c"
( _auto_pt ) ) ) -> _ptr_typ ) ) ) ; 

#line 660 "../../src/expr2.c"
goto xxxx ; 

#line 661 "../../src/expr2.c"
case 45 : if ( _auto_no_virt ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O5.__C5_mem = _auto_found ; 

#line 663 "../../src/expr2.c"
_auto_b = ( ( ( struct basetype * ) ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) ) ) 
#line 663 "../../src/expr2.c"
; 

#line 664 "../../src/expr2.c"
xxxx : switch ( _auto_b -> _node_base ) { 
#line 665 "../../src/expr2.c"
case 97 : _auto_b = ( ( ( struct basetype * 
#line 665 "../../src/expr2.c"
) ( _auto_b -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 

#line 668 "../../src/expr2.c"
goto xxxx ; 

#line 669 "../../src/expr2.c"
case 141 : break ; 

#line 671 "../../src/expr2.c"
case 119 : _auto_tblx = _auto_b -> _basetype_b_table ; 

#line 673 "../../src/expr2.c"
if ( _auto_tblx -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 673 "../../src/expr2.c"
"tblx %d %d", _auto_tblx , _auto_tblx -> _node_base ) ; 

#line 674 "../../src/expr2.c"
break ; 

#line 675 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "no tblx %d", _auto_b ) ; 
#line 675 "../../src/expr2.c"
} 
#line 679 "../../src/expr2.c"
if ( _table_lookc ( ( struct table * ) _auto_tblx , _auto_g -> _gen_string , ( int ) 
#line 679 "../../src/expr2.c"
0 ) == 0 ) 
#line 680 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 680 "../../src/expr2.c"
"fct_call overload check") ; 

#line 682 "../../src/expr2.c"
switch ( _auto_found -> _name_n_scope ) { 
#line 682 "../../src/expr2.c"
case 0 : if ( ( Epriv && ( Epriv != 
#line 682 "../../src/expr2.c"
cc -> _dcl_context_cot ) ) && ( ! _classdef_has_friend ( ( struct classdef * ) Epriv , ( struct 
#line 682 "../../src/expr2.c"
name * ) cc -> _dcl_context_nof ) ) ) 
#line 686 "../../src/expr2.c"
{ 
#line 686 "../../src/expr2.c"
errorFPC__E ( ( char * ) "%n is private", _auto_found ) 
#line 686 "../../src/expr2.c"
; 

#line 688 "../../src/expr2.c"
break ; 
} 
#line 691 "../../src/expr2.c"
case 25 : if ( Ebase && ( ( cc -> _dcl_context_cot == 0 ) || ( 
#line 691 "../../src/expr2.c"
( Ebase != ( struct classdef * ) cc -> _dcl_context_cot -> _classdef_clbase -> _expr__O2.__C2_tp ) && ( ! _classdef_has_friend ( 
#line 691 "../../src/expr2.c"
( struct classdef * ) Ebase , ( struct name * ) cc -> _dcl_context_nof ) ) ) ) 
#line 691 "../../src/expr2.c"
) 
#line 696 "../../src/expr2.c"
{ 
#line 696 "../../src/expr2.c"
errorFPC__E ( ( char * ) "%n is from a privateBC", _auto_found ) ; 
} } } } } else 
#line 702 "../../src/expr2.c"
{ 
#line 702 "../../src/expr2.c"
errorFPC__E ( ( char * ) "badAL for overloaded%n", _auto_fn ) 
#line 702 "../../src/expr2.c"
; 

#line 704 "../../src/expr2.c"
{ 
#line 704 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 704 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 706 "../../src/expr2.c"
break ; 
} 
#line 708 "../../src/expr2.c"
case 108 : case_fct : _auto_f = ( ( ( struct fct * ) ( _auto_t1 ) ) 
#line 708 "../../src/expr2.c"
) ; 

#line 711 "../../src/expr2.c"
if ( _auto_fn ) _auto_this -> _expr__O5.__C5_fct_name = _auto_fn ; 

#line 712 "../../src/expr2.c"
break ; 
} 
#line 715 "../../src/expr2.c"
if ( _auto_no_virt ) _auto_this -> _expr__O5.__C5_fct_name = 0 ; 

#line 717 "../../src/expr2.c"
_auto_t = _auto_f -> _fct_returns ; 

#line 718 "../../src/expr2.c"
_auto_x = _auto_f -> _fct_nargs ; 

#line 719 "../../src/expr2.c"
_auto_k = _auto_f -> _fct_nargs_known ; 

#line 722 "../../src/expr2.c"
if ( _auto_k == 0 ) { 
#line 722 "../../src/expr2.c"
if ( ( ( fct_void && _auto_fn ) && ( 
#line 722 "../../src/expr2.c"
_auto_x == 0 ) ) && _auto_arg ) 
#line 724 "../../src/expr2.c"
if ( ( no_of_badcall ++ ) == 0 ) 
#line 724 "../../src/expr2.c"

#line 724 "../../src/expr2.c"
badcall = _auto_fn ; 

#line 725 "../../src/expr2.c"
{ 
#line 725 "../../src/expr2.c"
{ _auto__result = _auto_t ; 

#line 725 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 728 "../../src/expr2.c"
for ( ( ( ( _auto_e = _auto_arg ) , ( _auto_nn = _auto_f -> 
#line 728 "../../src/expr2.c"
_fct_argtype ) ) , ( _auto_argno = 1 ) ) ;( _auto_e || _auto_nn ) ;( ( ( _auto_nn = 
#line 728 "../../src/expr2.c"
_auto_nn -> _name_n_list ) , ( _auto_e = _auto_etail -> _expr__O4.__C4_e2 ) ) , ( _auto_argno ++ ) ) ) 
#line 728 "../../src/expr2.c"

#line 728 "../../src/expr2.c"
{ 
#line 728 "../../src/expr2.c"
Pexpr _auto_a ; 

#line 731 "../../src/expr2.c"
if ( _auto_e ) { 
#line 731 "../../src/expr2.c"
_auto_a = _auto_e -> _expr__O3.__C3_e1 ; 

#line 734 "../../src/expr2.c"
_auto_etail = _auto_e ; 

#line 736 "../../src/expr2.c"
if ( _auto_nn ) { 
#line 736 "../../src/expr2.c"
Ptype _auto_t1 ; 

#line 737 "../../src/expr2.c"
_auto_t1 = _auto_nn -> _expr__O2.__C2_tp ; 

#line 739 "../../src/expr2.c"
lx : switch ( _auto_t1 -> _node_base ) { 
#line 741 "../../src/expr2.c"
case 97 : _auto_t1 = ( ( ( struct basetype * 
#line 741 "../../src/expr2.c"
) ( _auto_t1 ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 744 "../../src/expr2.c"
goto lx ; 

#line 745 "../../src/expr2.c"
case 158 : _auto_e -> _expr__O3.__C3_e1 = ref_init ( ( ( struct ptr * ) ( _auto_t1 ) ) , 
#line 745 "../../src/expr2.c"
( struct expr * ) _auto_a , _auto_tbl ) ; 

#line 747 "../../src/expr2.c"
break ; 

#line 748 "../../src/expr2.c"
case 119 : _auto_e -> _expr__O3.__C3_e1 = class_init ( ( struct expr * ) 0 , ( struct type * 
#line 748 "../../src/expr2.c"
) _auto_t1 , ( struct expr * ) _auto_a , _auto_tbl ) ; 

#line 750 "../../src/expr2.c"
break ; 

#line 751 "../../src/expr2.c"
case 141 : { 
#line 752 "../../src/expr2.c"
{ _auto__result = _auto_t ; 

#line 752 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 753 "../../src/expr2.c"
case 125 : { 
#line 754 "../../src/expr2.c"
Pfct _auto_ef ; 

#line 754 "../../src/expr2.c"
_auto_ef = ( ( ( struct fct * ) ( ( ( ( struct ptr * ) 
#line 754 "../../src/expr2.c"
( _auto_t1 ) ) ) -> _ptr_typ ) ) ) ; 

#line 755 "../../src/expr2.c"
if ( _auto_ef -> _node_base == 108 ) { 
#line 755 "../../src/expr2.c"
Pfct _auto_f ; 
Pname _auto_n ; 

#line 757 "../../src/expr2.c"
_auto_n = 0 ; 

#line 758 "../../src/expr2.c"
switch ( _auto_a -> _node_base ) { 
#line 758 "../../src/expr2.c"
case 85 : _auto_f = ( ( ( struct fct * ) 
#line 758 "../../src/expr2.c"
( _auto_a -> _expr__O2.__C2_tp ) ) ) ; 

#line 761 "../../src/expr2.c"
switch ( _auto_f -> _node_base ) { 
#line 761 "../../src/expr2.c"
case 108 : case 76 : _auto_e -> _expr__O3.__C3_e1 = ( struct expr * 
#line 761 "../../src/expr2.c"
) _expr__ctor ( ( struct expr * ) 0 , 145 , ( struct expr * ) 0 
#line 761 "../../src/expr2.c"
, ( struct expr * ) _auto_a ) ; 

#line 765 "../../src/expr2.c"
_auto_e -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 
} 
#line 767 "../../src/expr2.c"
_auto_n = ( ( ( struct name * ) ( _auto_a ) ) ) ; 

#line 768 "../../src/expr2.c"
goto ad ; 

#line 769 "../../src/expr2.c"
case 45 : case 44 : _auto_f = ( ( ( struct fct * ) ( _auto_a -> _expr__O5.__C5_mem -> 
#line 769 "../../src/expr2.c"
_expr__O2.__C2_tp ) ) ) ; 

#line 772 "../../src/expr2.c"
switch ( _auto_f -> _node_base ) { 
#line 772 "../../src/expr2.c"
case 108 : case 76 : _auto_n = ( ( ( struct 
#line 772 "../../src/expr2.c"
name * ) ( _auto_a -> _expr__O5.__C5_mem ) ) ) ; 

#line 776 "../../src/expr2.c"
_auto_a = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 145 , ( 
#line 776 "../../src/expr2.c"
struct expr * ) 0 , ( struct expr * ) _auto_a ) ; 

#line 777 "../../src/expr2.c"
_auto_e -> _expr__O3.__C3_e1 = _expr_typ ( ( struct expr * ) _auto_a , _auto_tbl ) ; 
} 
#line 779 "../../src/expr2.c"
goto ad ; 

#line 780 "../../src/expr2.c"
case 112 : case 145 : _auto_f = ( ( ( struct fct * ) ( _auto_a -> _expr__O4.__C4_e2 -> 
#line 780 "../../src/expr2.c"
_expr__O2.__C2_tp ) ) ) ; 

#line 783 "../../src/expr2.c"
ad : if ( _auto_f -> _node_base == 76 ) { 
#line 784 "../../src/expr2.c"
Pgen _auto_g ; 

#line 785 "../../src/expr2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_f ) ) ) ; 

#line 786 "../../src/expr2.c"
_auto_n = _gen_find ( ( struct gen * ) _auto_g , ( struct fct * ) _auto_ef ) ; 

#line 787 "../../src/expr2.c"
if ( _auto_n == 0 ) { 
#line 787 "../../src/expr2.c"
errorFPC__E ( ( char * ) "cannot deduceT for &overloaded %s()", _auto_g -> _gen_string ) 
#line 787 "../../src/expr2.c"
; 

#line 789 "../../src/expr2.c"
{ 
#line 789 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 789 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 791 "../../src/expr2.c"
_auto_e -> _expr__O3.__C3_e1 -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_n ; 
} 
#line 793 "../../src/expr2.c"
if ( _auto_n ) _expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 
} 
#line 795 "../../src/expr2.c"
break ; 
} 
#line 798 "../../src/expr2.c"
goto def ; 
} 
#line 800 "../../src/expr2.c"
case 5 : case 29 : case 21 : if ( ( _auto_a -> _node_base == 82 ) && 
#line 800 "../../src/expr2.c"
( _auto_a -> _expr__O2.__C2_tp == ( struct type * ) long_type ) ) 
#line 804 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 804 "../../src/expr2.c"
( char * ) "long constantA for%n,%kX", _auto_fn , _auto_t1 -> _node_base ) ; 

#line 805 "../../src/expr2.c"
case 22 : if ( ( ( ( ( struct basetype * ) ( _auto_t1 ) ) 
#line 805 "../../src/expr2.c"
) -> _basetype_b_unsigned && ( _auto_a -> _node_base == 107 ) ) && ( _auto_a -> _expr__O4.__C4_e2 -> _node_base == 82 ) 
#line 805 "../../src/expr2.c"
) 
#line 809 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "negativeA for%n, unsignedX", _auto_fn ) ; 

#line 810 "../../src/expr2.c"
default : def : { 
#line 812 "../../src/expr2.c"
Pname _auto_cn ; 
int _auto_i ; 

#line 814 "../../src/expr2.c"
if ( ( ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_a -> _expr__O2.__C2_tp ) ) && 
#line 814 "../../src/expr2.c"
( _auto_i = can_coerce ( ( struct type * ) _auto_t1 , ( struct type * ) _auto_a -> _expr__O2.__C2_tp ) 
#line 814 "../../src/expr2.c"
) ) && Ncoerce ) 
#line 816 "../../src/expr2.c"
{ 
#line 816 "../../src/expr2.c"
if ( 1 < _auto_i ) errorFPC__E ( ( char * ) 
#line 816 "../../src/expr2.c"
"%d possible conversions for%nA%d", _auto_i , _auto_fn , _auto_argno ) ; 

#line 819 "../../src/expr2.c"
{ 
#line 819 "../../src/expr2.c"
Pclass _auto_cl ; 
Pref _auto_r ; 
Pexpr _auto_rr ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 819 "../../src/expr2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 820 "../../src/expr2.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 820 "../../src/expr2.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 820 "../../src/expr2.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_a ) , 
#line 820 "../../src/expr2.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 820 "../../src/expr2.c"
( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 821 "../../src/expr2.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 822 "../../src/expr2.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 822 "../../src/expr2.c"
struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 823 "../../src/expr2.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 824 "../../src/expr2.c"
_auto_c -> _expr__O2.__C2_tp = _auto_t1 ; 

#line 825 "../../src/expr2.c"
_auto_e -> _expr__O3.__C3_e1 = _auto_c ; 

#line 826 "../../src/expr2.c"
break ; 
} } } 
#line 829 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_t1 , ( struct type * 
#line 829 "../../src/expr2.c"
) _auto_a -> _expr__O2.__C2_tp , 136 ) ) 
#line 829 "../../src/expr2.c"
{ 
#line 829 "../../src/expr2.c"
if ( arg_err_suppress == 0 ) errorFPC__E ( ( char 
#line 829 "../../src/expr2.c"
* ) "badA %dT for%n:%t (%tX)", _auto_argno , _auto_fn , _auto_a -> _expr__O2.__C2_tp , _auto_nn -> _expr__O2.__C2_tp ) ; 

#line 831 "../../src/expr2.c"
{ 
#line 831 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 831 "../../src/expr2.c"
return _auto__result ; 
} } } } } else 
#line 835 "../../src/expr2.c"
{ 
#line 835 "../../src/expr2.c"
if ( _auto_k != 155 ) { 
#line 836 "../../src/expr2.c"
if ( 
#line 836 "../../src/expr2.c"
arg_err_suppress == 0 ) 
#line 837 "../../src/expr2.c"
errorFPC__E ( ( char * ) "unX %dA for%n", _auto_argno , _auto_fn ) ; 

#line 838 "../../src/expr2.c"
{ 
#line 838 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 838 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 840 "../../src/expr2.c"
{ 
#line 840 "../../src/expr2.c"
{ _auto__result = _auto_t ; 

#line 840 "../../src/expr2.c"
return _auto__result ; 
} } } } else 
#line 843 "../../src/expr2.c"
{ 
#line 843 "../../src/expr2.c"
_auto_a = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 846 "../../src/expr2.c"
if ( _auto_a == 0 ) { 
#line 846 "../../src/expr2.c"
if ( arg_err_suppress == 0 ) errorFPC__E ( ( char 
#line 846 "../../src/expr2.c"
* ) "A %d ofT%tX for%n", _auto_argno , _auto_nn -> _expr__O2.__C2_tp , _auto_fn ) ; 

#line 848 "../../src/expr2.c"
{ 
#line 848 "../../src/expr2.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 848 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 851 "../../src/expr2.c"
_auto_a -> _node_permanent = 2 ; 

#line 852 "../../src/expr2.c"
_auto_e = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 852 "../../src/expr2.c"
struct expr * ) _auto_a , ( struct expr * ) 0 ) ; 

#line 853 "../../src/expr2.c"
if ( _auto_etail ) _auto_etail -> _expr__O4.__C4_e2 = _auto_e ; 
else 
#line 856 "../../src/expr2.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_e ; 

#line 857 "../../src/expr2.c"
_auto_etail = _auto_e ; 
} } 
#line 861 "../../src/expr2.c"
{ 
#line 861 "../../src/expr2.c"
{ _auto__result = _auto_t ; 

#line 861 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 864 "../../src/expr2.c"
int refd = 0 ; 

#line 866 "../../src/expr2.c"
extern Pexpr ref_init ( _auto_p , _auto_init , _auto_tbl ) struct ptr * _auto_p ; 
struct expr * _auto_init ; 
struct table * _auto_tbl ; 

#line 870 "../../src/expr2.c"
{ 
#line 870 "../../src/expr2.c"
Pexpr _auto__result ; 
register Ptype _auto_it ; 
Ptype _auto_p1 ; 
Pname _auto_c1 ; 
Pexpr _auto_a ; 

#line 871 "../../src/expr2.c"
_auto_it = _auto_init -> _expr__O2.__C2_tp ; 

#line 872 "../../src/expr2.c"
_auto_p1 = _auto_p -> _ptr_typ ; 

#line 876 "../../src/expr2.c"
rloop : switch ( _auto_it -> _node_base ) { 
#line 878 "../../src/expr2.c"
case 97 : _auto_it = ( ( ( struct basetype * 
#line 878 "../../src/expr2.c"
) ( _auto_it ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 880 "../../src/expr2.c"
goto rloop ; 

#line 881 "../../src/expr2.c"
default : { 
#line 882 "../../src/expr2.c"
Ptype _auto_tt ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 882 "../../src/expr2.c"
_auto_tt = ( struct type * ) ( ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( 
#line 882 "../../src/expr2.c"
_auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , ( ( 
#line 882 "../../src/expr2.c"
Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( 
#line 882 "../../src/expr2.c"
( struct type * ) ( ( struct type * ) _auto_it ) ) ) , ( 
#line 882 "../../src/expr2.c"
( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) 
#line 882 "../../src/expr2.c"
) ) ) ) ; 

#line 883 "../../src/expr2.c"
_auto_p -> _node_base = 125 ; 

#line 885 "../../src/expr2.c"
{ 
#line 885 "../../src/expr2.c"
int _auto_x ; 

#line 885 "../../src/expr2.c"
_auto_x = _type_check ( ( struct type * ) _auto_p , ( struct type * ) _auto_tt , 78 ) ; 
#line 885 "../../src/expr2.c"

#line 886 "../../src/expr2.c"
_auto_p -> _node_base = 158 ; 

#line 888 "../../src/expr2.c"
if ( _auto_x == 0 ) { 
#line 888 "../../src/expr2.c"
if ( _expr_lval ( ( struct expr * ) _auto_init , 
#line 888 "../../src/expr2.c"
( int ) 0 ) ) 
#line 889 "../../src/expr2.c"
{ 
#line 889 "../../src/expr2.c"
{ _auto__result = _expr_address ( ( struct expr * ) 
#line 889 "../../src/expr2.c"
_auto_init ) ; 

#line 889 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 890 "../../src/expr2.c"
if ( ( ( _auto_init -> _node_base == 146 ) && _auto_init -> _expr__O5.__C5_fct_name ) && ( 
#line 890 "../../src/expr2.c"
( ( struct fct * ) ( _auto_init -> _expr__O5.__C5_fct_name -> _expr__O2.__C2_tp ) ) ) -> _fct_f_inline ) 
#line 893 "../../src/expr2.c"
{ 
#line 893 "../../src/expr2.c"

#line 893 "../../src/expr2.c"

#line 893 "../../src/expr2.c"
{ _auto__result = _expr_address ( ( struct expr * ) _auto_init ) ; 

#line 893 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 894 "../../src/expr2.c"
_auto_p1 = _auto_p -> _ptr_typ ; 

#line 895 "../../src/expr2.c"
goto xxx ; 
} } } } 
#line 900 "../../src/expr2.c"
_auto_c1 = _type_is_cl_obj ( ( struct type * ) _auto_p1 ) ; 

#line 902 "../../src/expr2.c"
if ( _auto_c1 ) { 
#line 902 "../../src/expr2.c"
refd = 1 ; 

#line 905 "../../src/expr2.c"
_auto_a = class_init ( ( struct expr * ) 0 , ( struct type * ) _auto_p1 , _auto_init , 
#line 905 "../../src/expr2.c"
_auto_tbl ) ; 

#line 906 "../../src/expr2.c"
refd = 0 ; 

#line 908 "../../src/expr2.c"
if ( ( _auto_a == _auto_init ) && ( _auto_init -> _expr__O2.__C2_tp != ( struct type * ) any_type ) 
#line 908 "../../src/expr2.c"
) 
#line 908 "../../src/expr2.c"
goto xxx ; 

#line 909 "../../src/expr2.c"
switch ( _auto_a -> _node_base ) { 
#line 909 "../../src/expr2.c"
case 146 : case 71 : _auto_init = ( struct expr * ) 
#line 909 "../../src/expr2.c"
_auto_a ; 

#line 913 "../../src/expr2.c"
goto xxx ; 
} 
#line 915 "../../src/expr2.c"
{ 
#line 915 "../../src/expr2.c"
{ _auto__result = _expr_address ( ( struct expr * ) _auto_a ) ; 

#line 915 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 918 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_p1 , ( struct type * 
#line 918 "../../src/expr2.c"
) _auto_it , ( int ) 0 ) ) 
#line 918 "../../src/expr2.c"
{ 
#line 918 "../../src/expr2.c"
errorFPC__E ( ( char * ) 
#line 918 "../../src/expr2.c"
"badIrT:%t (%tX)", _auto_it , _auto_p ) ; 

#line 920 "../../src/expr2.c"
if ( _auto_init -> _node_base != 85 ) _auto_init -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 921 "../../src/expr2.c"
{ 
#line 921 "../../src/expr2.c"
{ _auto__result = _auto_init ; 

#line 921 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 924 "../../src/expr2.c"
xxx : switch ( _auto_init -> _node_base ) { 
#line 926 "../../src/expr2.c"
case 85 : case 111 : case 
#line 926 "../../src/expr2.c"
44 : 
#line 930 "../../src/expr2.c"
case 45 : if ( _type_tconst ( ( struct type * ) _auto_it ) && ( vec_const == 
#line 930 "../../src/expr2.c"
0 ) ) 
#line 931 "../../src/expr2.c"
goto def ; 

#line 932 "../../src/expr2.c"
_expr_lval ( ( struct expr * ) _auto_init , 112 ) ; 

#line 933 "../../src/expr2.c"
{ 
#line 933 "../../src/expr2.c"
{ _auto__result = _expr_address ( ( struct expr * ) _auto_init ) ; 

#line 933 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 934 "../../src/expr2.c"
case 71 : switch ( _auto_init -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 936 "../../src/expr2.c"
case 85 : case 111 : 
#line 936 "../../src/expr2.c"

#line 939 "../../src/expr2.c"
{ 
#line 939 "../../src/expr2.c"
{ _auto__result = _expr_address ( ( struct expr * ) _auto_init ) ; 

#line 939 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 941 "../../src/expr2.c"
default : def : { 
#line 943 "../../src/expr2.c"
Ptable _auto_otbl ; 

#line 943 "../../src/expr2.c"
_auto_otbl = _auto_tbl ; 

#line 944 "../../src/expr2.c"
if ( Cstmt ) { 
#line 944 "../../src/expr2.c"
if ( Cstmt -> _stmt_memtbl == 0 ) Cstmt -> _stmt_memtbl = ( struct 
#line 944 "../../src/expr2.c"
table * ) _table__ctor ( ( struct table * ) 0 , 4 , _auto_tbl , ( struct name * 
#line 944 "../../src/expr2.c"
) 0 ) ; 

#line 946 "../../src/expr2.c"
_auto_tbl = ( struct table * ) Cstmt -> _stmt_memtbl ; 
} 
#line 948 "../../src/expr2.c"
{ 
#line 948 "../../src/expr2.c"
char * _auto_s ; 
Pname _auto_n ; 

#line 948 "../../src/expr2.c"
_auto_s = make_name ( ( int ) 'I' ) ; 

#line 949 "../../src/expr2.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 949 "../../src/expr2.c"

#line 952 "../../src/expr2.c"
if ( _auto_tbl == ( struct table * ) gtbl ) errorFI_PC__E ( ( int ) 's' , ( 
#line 952 "../../src/expr2.c"
char * ) "Ir for static reference not an lvaue") ; 

#line 953 "../../src/expr2.c"
_auto_n -> _expr__O2.__C2_tp = _auto_p1 ; 

#line 954 "../../src/expr2.c"
_auto_n = _name_dcl ( ( struct name * ) _auto_n , _auto_tbl , 136 ) ; 

#line 955 "../../src/expr2.c"
_auto_n -> _name_n_scope = 108 ; 

#line 956 "../../src/expr2.c"
_name_assign ( ( struct name * ) _auto_n ) ; 

#line 957 "../../src/expr2.c"
_auto_a = _expr_address ( ( struct expr * ) _auto_n ) ; 

#line 959 "../../src/expr2.c"
{ 
#line 959 "../../src/expr2.c"
Pexpr _auto_as ; 

#line 959 "../../src/expr2.c"
_auto_as = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 959 "../../src/expr2.c"
struct expr * ) _auto_n , _auto_init ) ; 

#line 960 "../../src/expr2.c"
_auto_a = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( 
#line 960 "../../src/expr2.c"
struct expr * ) _auto_as , ( struct expr * ) _auto_a ) ; 

#line 961 "../../src/expr2.c"
_auto_a -> _expr__O2.__C2_tp = _auto_a -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp ; 

#line 962 "../../src/expr2.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 

#line 963 "../../src/expr2.c"
{ 
#line 963 "../../src/expr2.c"
{ _auto__result = _auto_a ; 

#line 963 "../../src/expr2.c"
return _auto__result ; 
} } } } } } } ; 

#line 968 "../../src/expr2.c"
extern Pexpr class_init ( _auto_nn , _auto_tt , _auto_init , _auto_tbl ) struct expr * _auto_nn ; 
struct type * _auto_tt ; 
struct expr * _auto_init ; 
struct table * _auto_tbl ; 

#line 974 "../../src/expr2.c"
{ 
#line 974 "../../src/expr2.c"
Pexpr _auto__result ; 
Pname _auto_c1 ; 
Pname _auto_c2 ; 

#line 974 "../../src/expr2.c"
_auto_c1 = _type_is_cl_obj ( ( struct type * ) _auto_tt ) ; 

#line 975 "../../src/expr2.c"
_auto_c2 = _type_is_cl_obj ( ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) ; 

#line 978 "../../src/expr2.c"
if ( _auto_c1 ) { 
#line 978 "../../src/expr2.c"
if ( ( _auto_c1 != _auto_c2 ) || ( ( refd == 0 
#line 978 "../../src/expr2.c"
) && ( ( ( struct classdef * ) ( ( ( struct classdef * ) 
#line 978 "../../src/expr2.c"
( _auto_c1 -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_itor ) ) ) 
#line 980 "../../src/expr2.c"
{ 
#line 980 "../../src/expr2.c"
int _auto_i ; 

#line 984 "../../src/expr2.c"
_auto_i = can_coerce ( _auto_tt , ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) ; 

#line 986 "../../src/expr2.c"
switch ( _auto_i ) { 
#line 986 "../../src/expr2.c"
default : errorFPC__E ( ( char * ) "%d ways of making a%n from a%t", _auto_i , _auto_c1 , 
#line 986 "../../src/expr2.c"
_auto_init -> _expr__O2.__C2_tp ) ; 

#line 989 "../../src/expr2.c"
_auto_init -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 990 "../../src/expr2.c"
{ 
#line 990 "../../src/expr2.c"
{ _auto__result = _auto_init ; 

#line 990 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 991 "../../src/expr2.c"
case 0 : errorFPC__E ( ( char * ) "cannot make a%n from a%t", _auto_c1 , _auto_init -> _expr__O2.__C2_tp ) 
#line 991 "../../src/expr2.c"
; 

#line 993 "../../src/expr2.c"
_auto_init -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 994 "../../src/expr2.c"
{ 
#line 994 "../../src/expr2.c"
{ _auto__result = _auto_init ; 

#line 994 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 995 "../../src/expr2.c"
case 1 : if ( Ncoerce == 0 ) { 
#line 996 "../../src/expr2.c"
Pexpr _auto_a ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 997 "../../src/expr2.c"
_auto_a = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , _auto_init , 
#line 997 "../../src/expr2.c"
( struct expr * ) 0 ) ; 

#line 998 "../../src/expr2.c"
_auto_a = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( 
#line 998 "../../src/expr2.c"
_auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct 
#line 998 "../../src/expr2.c"
expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct expr * ) _auto_a ) , 
#line 998 "../../src/expr2.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = _auto_tt ) 
#line 998 "../../src/expr2.c"
, _auto__Xthis__ctor_texpr ) ) ) ; 

#line 999 "../../src/expr2.c"
_auto_a -> _expr__O4.__C4_e2 = _auto_nn ; 

#line 1000 "../../src/expr2.c"
{ 
#line 1000 "../../src/expr2.c"
{ _auto__result = _expr_typ ( ( struct expr * ) _auto_a , _auto_tbl ) ; 

#line 1000 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1002 "../../src/expr2.c"
switch ( _auto_init -> _node_base ) { 
#line 1002 "../../src/expr2.c"
case 71 : case 85 : { 
#line 1009 "../../src/expr2.c"
Pref _auto_r ; 
#line 1009 "../../src/expr2.c"
Pexpr _auto_rr ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1009 "../../src/expr2.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1009 "../../src/expr2.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1009 "../../src/expr2.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , _auto_init , ( struct expr * ) 0 ) 
#line 1009 "../../src/expr2.c"
) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) Ncoerce ) ) 
#line 1009 "../../src/expr2.c"
, _auto__Xthis__ctor_ref ) ) ) ; 

#line 1010 "../../src/expr2.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 1011 "../../src/expr2.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1011 "../../src/expr2.c"
struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 1012 "../../src/expr2.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 1013 "../../src/expr2.c"
_auto_init = ( struct expr * ) _auto_c ; 

#line 1014 "../../src/expr2.c"
break ; 
} 
#line 1016 "../../src/expr2.c"
default : { 
#line 1017 "../../src/expr2.c"
Ptable _auto_otbl ; 
char * _auto_s ; 
Pname _auto_tmp ; 
Pexpr _auto_ass ; 
Pref _auto_r ; 
Pexpr _auto_rr ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1017 "../../src/expr2.c"
_auto_otbl = _auto_tbl ; 

#line 1018 "../../src/expr2.c"
if ( Cstmt ) { 
#line 1018 "../../src/expr2.c"
if ( Cstmt -> _stmt_memtbl == 0 ) Cstmt -> _stmt_memtbl = ( struct 
#line 1018 "../../src/expr2.c"
table * ) _table__ctor ( ( struct table * ) 0 , 4 , _auto_tbl , ( struct name * 
#line 1018 "../../src/expr2.c"
) 0 ) ; 

#line 1020 "../../src/expr2.c"
_auto_tbl = ( struct table * ) Cstmt -> _stmt_memtbl ; 
} 
#line 1022 "../../src/expr2.c"
_auto_s = make_name ( ( int ) 'U' ) ; 

#line 1022 "../../src/expr2.c"
_auto_tmp = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 1022 "../../src/expr2.c"

#line 1024 "../../src/expr2.c"
_auto_tmp -> _expr__O2.__C2_tp = _auto_init -> _expr__O2.__C2_tp ; 

#line 1025 "../../src/expr2.c"
_auto_tmp = _name_dcl ( ( struct name * ) _auto_tmp , _auto_tbl , 136 ) ; 

#line 1026 "../../src/expr2.c"
_auto_tmp -> _name_n_scope = 108 ; 

#line 1027 "../../src/expr2.c"
_auto_ass = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 1027 "../../src/expr2.c"
struct expr * ) _auto_tmp , _auto_init ) ; 

#line 1028 "../../src/expr2.c"
_auto_ass -> _expr__O2.__C2_tp = _auto_tt ; 

#line 1029 "../../src/expr2.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1029 "../../src/expr2.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1029 "../../src/expr2.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_tmp ) , 
#line 1029 "../../src/expr2.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1029 "../../src/expr2.c"
( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1029 "../../src/expr2.c"
_auto_rr = _expr_typ ( ( struct expr * ) _auto_r , _auto_tbl ) ; 

#line 1029 "../../src/expr2.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1029 "../../src/expr2.c"
struct expr * ) _auto_rr , ( struct expr * ) 0 ) ; 

#line 1032 "../../src/expr2.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 1033 "../../src/expr2.c"
_auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( 
#line 1033 "../../src/expr2.c"
struct expr * ) _auto_ass , ( struct expr * ) _auto_c ) ; 

#line 1034 "../../src/expr2.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 
} } } 
#line 1038 "../../src/expr2.c"
{ 
#line 1038 "../../src/expr2.c"
{ _auto__result = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 
#line 1038 "../../src/expr2.c"

#line 1038 "../../src/expr2.c"
return _auto__result ; 
} } } else 
#line 1040 "../../src/expr2.c"
if ( refd == 0 ) { 
#line 1040 "../../src/expr2.c"
Pclass _auto_cl ; 

#line 1041 "../../src/expr2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_c1 -> _expr__O2.__C2_tp ) ) ) ; 

#line 1042 "../../src/expr2.c"
if ( _auto_cl -> _classdef_itor == 0 ) { 
#line 1042 "../../src/expr2.c"
if ( _auto_cl -> _classdef_bit_ass == 0 ) errorFI_PC__E ( 
#line 1042 "../../src/expr2.c"
( int ) 'w' , ( char * ) "bitwise copy: %s has a member with operator=()", _auto_cl -> _classdef_string ) ; 
else 
#line 1045 "../../src/expr2.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 1045 "../../src/expr2.c"
_auto_cl ) -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) 
#line 1045 "../../src/expr2.c"
&& _classdef_has_oper ( ( struct classdef * ) _auto_cl , 70 ) ) 
#line 1046 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 1046 "../../src/expr2.c"
( char * ) "bitwise copy: %s has assignment and destructor but not %s(%s&)", _auto_cl -> _classdef_string , _auto_cl -> _classdef_string , _auto_cl -> _classdef_string ) ; 
} } 
#line 1050 "../../src/expr2.c"
{ 
#line 1050 "../../src/expr2.c"
{ _auto__result = _auto_init ; 

#line 1050 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1053 "../../src/expr2.c"
if ( _type_check ( ( struct type * ) _auto_tt , ( struct type * 
#line 1053 "../../src/expr2.c"
) _auto_init -> _expr__O2.__C2_tp , 70 ) && ( refd == 0 ) ) 
#line 1053 "../../src/expr2.c"
{ 
#line 1053 "../../src/expr2.c"
errorFPC__E ( ( char 
#line 1053 "../../src/expr2.c"
* ) "badIrT:%t (%tX)", _auto_init -> _expr__O2.__C2_tp , _auto_tt ) ; 

#line 1055 "../../src/expr2.c"
_auto_init -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} 
#line 1057 "../../src/expr2.c"
{ 
#line 1057 "../../src/expr2.c"
{ _auto__result = _auto_init ; 

#line 1057 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 1060 "../../src/expr2.c"
int char_to_int ( _auto_s ) char * _auto_s ; 

#line 1069 "../../src/expr2.c"
{ 
#line 1069 "../../src/expr2.c"
int _auto__result ; 
register int _auto_i ; 
register char _auto_c ; 
register char _auto_d ; 
register char _auto_e ; 

#line 1070 "../../src/expr2.c"
_auto_i = 0 ; 

#line 1073 "../../src/expr2.c"
switch ( * _auto_s ) { 
#line 1073 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 1073 "../../src/expr2.c"
* ) "char constant store corrupted") ; 

#line 1076 "../../src/expr2.c"
case '`' : errorFI_PC__E ( ( int ) 's' , ( char * ) "bcd constant") ; 

#line 1078 "../../src/expr2.c"
{ 
#line 1078 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 1078 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1079 "../../src/expr2.c"
case '\'' : break ; 
} 
#line 1083 "../../src/expr2.c"
for ( ;;) switch ( _auto_c = ( * ( ++ _auto_s ) ) ) 
#line 1083 "../../src/expr2.c"

#line 1084 "../../src/expr2.c"
{ 
#line 1084 "../../src/expr2.c"
case '\'' : { 
#line 1086 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1086 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1087 "../../src/expr2.c"
case '\\' : switch ( _auto_c = ( * ( ++ _auto_s ) ) ) 
#line 1087 "../../src/expr2.c"

#line 1088 "../../src/expr2.c"
{ 
#line 1088 "../../src/expr2.c"
case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case 
#line 1088 "../../src/expr2.c"
'6' : 
#line 1090 "../../src/expr2.c"
case '7' : _auto_c -= '0' ; 

#line 1092 "../../src/expr2.c"
switch ( _auto_d = ( * ( ++ _auto_s ) ) ) { 
#line 1092 "../../src/expr2.c"
case '0' : case 
#line 1092 "../../src/expr2.c"
'1' : 
#line 1094 "../../src/expr2.c"
case '2' : case '3' : case '4' : case '5' : case '6' : case '7' : _auto_d -= 
#line 1094 "../../src/expr2.c"
'0' ; 

#line 1097 "../../src/expr2.c"
switch ( _auto_e = ( * ( ++ _auto_s ) ) ) { 
#line 1097 "../../src/expr2.c"
case '0' : case 
#line 1097 "../../src/expr2.c"
'1' : 
#line 1099 "../../src/expr2.c"
case '2' : case '3' : case '4' : case '5' : case '6' : case '7' : _auto_c = 
#line 1099 "../../src/expr2.c"
( ( ( ( _auto_c * 64 ) + ( _auto_d * 8 ) ) + _auto_e ) - 
#line 1099 "../../src/expr2.c"
'0' ) ; 

#line 1102 "../../src/expr2.c"
break ; 

#line 1103 "../../src/expr2.c"
default : _auto_c = ( ( _auto_c * 8 ) + _auto_d ) ; 

#line 1105 "../../src/expr2.c"
_auto_s -- ; 
} 
#line 1107 "../../src/expr2.c"
break ; 

#line 1108 "../../src/expr2.c"
default : _auto_s -- ; 
} 
#line 1111 "../../src/expr2.c"
break ; 

#line 1112 "../../src/expr2.c"
case 'b' : _auto_c = '\b' ; 

#line 1114 "../../src/expr2.c"
break ; 

#line 1115 "../../src/expr2.c"
case 'f' : _auto_c = '\f' ; 

#line 1117 "../../src/expr2.c"
break ; 

#line 1118 "../../src/expr2.c"
case 'n' : _auto_c = '\n' ; 

#line 1120 "../../src/expr2.c"
break ; 

#line 1121 "../../src/expr2.c"
case 'r' : _auto_c = '\r' ; 

#line 1123 "../../src/expr2.c"
break ; 

#line 1124 "../../src/expr2.c"
case 't' : _auto_c = '\t' ; 

#line 1126 "../../src/expr2.c"
break ; 

#line 1127 "../../src/expr2.c"
case '\\' : _auto_c = '\\' ; 

#line 1129 "../../src/expr2.c"
break ; 

#line 1130 "../../src/expr2.c"
case '\'' : _auto_c = '\'' ; 

#line 1132 "../../src/expr2.c"
break ; 
} 
#line 1135 "../../src/expr2.c"
default : if ( _auto_i ) _auto_i <<= BI_IN_BYTE ; 

#line 1137 "../../src/expr2.c"
_auto_i += _auto_c ; 
} } ; 

#line 1141 "../../src/expr2.c"

#line 1142 "../../src/expr2.c"

#line 1144 "../../src/expr2.c"
extern int str_to_int ( _auto_p ) register char * _auto_p ; 

#line 1148 "../../src/expr2.c"
{ 
#line 1148 "../../src/expr2.c"
int _auto__result ; 
register int _auto_c ; 
register int _auto_i ; 

#line 1150 "../../src/expr2.c"
_auto_i = 0 ; 

#line 1152 "../../src/expr2.c"
if ( ( _auto_c = ( * ( _auto_p ++ ) ) ) == '0' ) { 
#line 1152 "../../src/expr2.c"

#line 1152 "../../src/expr2.c"

#line 1153 "../../src/expr2.c"
switch ( _auto_c = ( * ( _auto_p ++ ) ) ) { 
#line 1153 "../../src/expr2.c"
case 0 : 
#line 1153 "../../src/expr2.c"

#line 1155 "../../src/expr2.c"
{ 
#line 1155 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 1155 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1157 "../../src/expr2.c"
case 'l' : case 'L' : { 
#line 1159 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 1159 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1161 "../../src/expr2.c"
case 'x' : case 'X' : while ( _auto_c = ( * ( _auto_p ++ ) 
#line 1161 "../../src/expr2.c"
) ) 
#line 1164 "../../src/expr2.c"
switch ( _auto_c ) { 
#line 1164 "../../src/expr2.c"
case 'l' : case 'L' : { 
#line 1167 "../../src/expr2.c"
{ _auto__result = _auto_i ; 
#line 1167 "../../src/expr2.c"

#line 1167 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1168 "../../src/expr2.c"
case 'A' : case 'B' : case 'C' : case 'D' : case 'E' : case 'F' : 
#line 1168 "../../src/expr2.c"

#line 1174 "../../src/expr2.c"
_auto_i = ( ( ( _auto_i * 16 ) + _auto_c ) - 55) ; 

#line 1175 "../../src/expr2.c"
break ; 

#line 1176 "../../src/expr2.c"
case 'a' : case 'b' : case 'c' : case 'd' : case 'e' : case 'f' : _auto_i = ( 
#line 1176 "../../src/expr2.c"
( ( _auto_i * 16 ) + _auto_c ) - 87) ; 

#line 1183 "../../src/expr2.c"
break ; 

#line 1184 "../../src/expr2.c"
default : _auto_i = ( ( ( _auto_i * 16 ) + _auto_c ) - '0' ) ; 
} 
#line 1187 "../../src/expr2.c"
{ 
#line 1187 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1187 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1189 "../../src/expr2.c"
default : do switch ( _auto_c ) { 
#line 1191 "../../src/expr2.c"
case 'l' : case 'L' : { 
#line 1191 "../../src/expr2.c"

#line 1194 "../../src/expr2.c"

#line 1194 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1194 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1195 "../../src/expr2.c"
default : _auto_i = ( ( ( _auto_i * 8 ) + _auto_c ) - '0' ) 
#line 1195 "../../src/expr2.c"
; 
} while ( _auto_c = ( * ( _auto_p ++ ) ) ) ; 

#line 1199 "../../src/expr2.c"
{ 
#line 1199 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1199 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 1203 "../../src/expr2.c"
_auto_i = ( _auto_c - '0' ) ; 

#line 1204 "../../src/expr2.c"
while ( _auto_c = ( * ( _auto_p ++ ) ) ) switch ( _auto_c ) { 
#line 1204 "../../src/expr2.c"

#line 1205 "../../src/expr2.c"

#line 1206 "../../src/expr2.c"
case 'l' : case 'L' : { 
#line 1208 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1208 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1209 "../../src/expr2.c"
default : _auto_i = ( ( ( _auto_i * 10 ) + _auto_c ) - '0' ) 
#line 1209 "../../src/expr2.c"
; 
} 
#line 1212 "../../src/expr2.c"
{ 
#line 1212 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1212 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

#line 1217 "../../src/expr2.c"
char * Neval = 0 ; 

#line 1219 "../../src/expr2.c"
int _expr_eval ( _auto_this ) register struct expr * _auto_this ; 

#line 1220 "../../src/expr2.c"
{ 
#line 1220 "../../src/expr2.c"
int _auto__result ; 

#line 1221 "../../src/expr2.c"
if ( Neval ) { 
#line 1221 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1221 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1223 "../../src/expr2.c"
switch ( _auto_this -> _node_base ) { 
#line 1223 "../../src/expr2.c"
case 86 : { 
#line 1224 "../../src/expr2.c"
{ _auto__result = 0 ; 
#line 1224 "../../src/expr2.c"

#line 1224 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1225 "../../src/expr2.c"
case 150 : { 
#line 1225 "../../src/expr2.c"
{ _auto__result = ( ( ( int ) ( _auto_this -> 
#line 1225 "../../src/expr2.c"
_expr__O3.__C3_e1 ) ) ) ; 

#line 1225 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1226 "../../src/expr2.c"
case 82 : { 
#line 1226 "../../src/expr2.c"
{ _auto__result = str_to_int ( _auto_this -> _expr__O3.__C3_string ) ; 

#line 1226 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1227 "../../src/expr2.c"
case 84 : { 
#line 1227 "../../src/expr2.c"
{ _auto__result = char_to_int ( _auto_this -> _expr__O3.__C3_string ) ; 

#line 1227 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1228 "../../src/expr2.c"
case 83 : Neval = "float in constant expression"; 

#line 1228 "../../src/expr2.c"
{ 
#line 1228 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1228 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1229 "../../src/expr2.c"
case 81 : Neval = "string in constant expression"; 

#line 1229 "../../src/expr2.c"
{ 
#line 1229 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1229 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1230 "../../src/expr2.c"
case 121 : { 
#line 1230 "../../src/expr2.c"
{ _auto__result = ( ( ( struct name * ) ( 
#line 1230 "../../src/expr2.c"
_auto_this ) ) ) -> _name_n_val ; 

#line 1230 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1231 "../../src/expr2.c"
case 30 : { 
#line 1231 "../../src/expr2.c"
{ _auto__result = _type_tsizeof ( ( struct type * ) _auto_this -> _expr__O5.__C5_tp2 ) 
#line 1231 "../../src/expr2.c"
; 

#line 1231 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1232 "../../src/expr2.c"
case 85 : { 
#line 1233 "../../src/expr2.c"
Pname _auto_n ; 

#line 1233 "../../src/expr2.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 1234 "../../src/expr2.c"
if ( _auto_n -> _name_n_evaluated && ( _auto_n -> _name_n_scope != 136 ) ) { 
#line 1234 "../../src/expr2.c"
{ _auto__result = _auto_n -> _name_n_val ; 
#line 1234 "../../src/expr2.c"

#line 1234 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1235 "../../src/expr2.c"
Neval = "cannot evaluate constant"; 

#line 1236 "../../src/expr2.c"
{ 
#line 1236 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1236 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1238 "../../src/expr2.c"
case 168 : if ( _auto_this -> _expr__O3.__C3_e1 ) { 
#line 1239 "../../src/expr2.c"
_auto_this -> _expr__O5.__C5_il -> _iline_i_next = curr_icall ; 
#line 1239 "../../src/expr2.c"

#line 1241 "../../src/expr2.c"
curr_icall = _auto_this -> _expr__O5.__C5_il ; 

#line 1242 "../../src/expr2.c"
{ 
#line 1242 "../../src/expr2.c"
int _auto_i ; 

#line 1242 "../../src/expr2.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1243 "../../src/expr2.c"
curr_icall = _auto_this -> _expr__O5.__C5_il -> _iline_i_next ; 

#line 1244 "../../src/expr2.c"
{ 
#line 1244 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1244 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 1246 "../../src/expr2.c"
Neval = "void inlineF"; 

#line 1247 "../../src/expr2.c"
{ 
#line 1247 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1247 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1248 "../../src/expr2.c"
case 169 : { 
#line 1249 "../../src/expr2.c"
Pname _auto_n ; 
int _auto_argno ; 
Pin _auto_il ; 

#line 1249 "../../src/expr2.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 1250 "../../src/expr2.c"
_auto_argno = _auto_n -> _name_n_val ; 

#line 1252 "../../src/expr2.c"
for ( _auto_il = curr_icall ;_auto_il ;( _auto_il = _auto_il -> _iline_i_next ) ) if ( _auto_il -> _iline_i_table == _auto_n -> _expr__O5.__C5_n_table ) 
#line 1252 "../../src/expr2.c"

#line 1253 "../../src/expr2.c"
goto aok ; 

#line 1254 "../../src/expr2.c"
goto bok ; 

#line 1255 "../../src/expr2.c"
aok : if ( _auto_il -> _iline_local [ _auto_argno ] ) { 
#line 1256 "../../src/expr2.c"
bok : Neval = "inlineF call too complicated for constant expression"; 

#line 1259 "../../src/expr2.c"
{ 
#line 1259 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1259 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1261 "../../src/expr2.c"
{ 
#line 1261 "../../src/expr2.c"
Pexpr _auto_aa ; 

#line 1261 "../../src/expr2.c"
_auto_aa = ( _auto_il -> _iline_arg [ _auto_argno ] ) ; 

#line 1262 "../../src/expr2.c"
{ 
#line 1262 "../../src/expr2.c"
{ _auto__result = _expr_eval ( ( struct expr * ) _auto_aa ) ; 

#line 1262 "../../src/expr2.c"
return _auto__result ; 
} } } } 
#line 1264 "../../src/expr2.c"
case 113 : { 
#line 1265 "../../src/expr2.c"
int _auto_i ; 

#line 1265 "../../src/expr2.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1272 "../../src/expr2.c"
{ 
#line 1272 "../../src/expr2.c"
{ _auto__result = _auto_i ; 

#line 1272 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1274 "../../src/expr2.c"
case 107 : case 172 : case 46 : case 47 : case 54 : case 
#line 1274 "../../src/expr2.c"
55 : 
#line 1280 "../../src/expr2.c"
case 50 : case 56 : case 57 : case 63 : case 58 : case 59 : case 
#line 1280 "../../src/expr2.c"
60 : 
#line 1287 "../../src/expr2.c"
case 61 : case 52 : case 65 : case 64 : case 51 : case 53 : case 
#line 1287 "../../src/expr2.c"
68 : 
#line 1294 "../../src/expr2.c"
case 62 : case 66 : case 67 : break ; 

#line 1298 "../../src/expr2.c"
default : Neval = "bad operator in constant expression"; 

#line 1300 "../../src/expr2.c"
{ 
#line 1300 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1300 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1303 "../../src/expr2.c"
{ 
#line 1303 "../../src/expr2.c"
int _auto_i1 ; 
int _auto_i2 ; 

#line 1303 "../../src/expr2.c"
_auto_i1 = ( _auto_this -> _expr__O3.__C3_e1 ? _expr_eval ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) : 0) ; 
#line 1303 "../../src/expr2.c"

#line 1304 "../../src/expr2.c"
_auto_i2 = ( _auto_this -> _expr__O4.__C4_e2 ? _expr_eval ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) : 0) ; 
#line 1304 "../../src/expr2.c"

#line 1306 "../../src/expr2.c"
switch ( _auto_this -> _node_base ) { 
#line 1306 "../../src/expr2.c"
case 107 : { 
#line 1307 "../../src/expr2.c"
{ _auto__result = ( - _auto_i2 ) ; 
#line 1307 "../../src/expr2.c"

#line 1307 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1308 "../../src/expr2.c"
case 172 : { 
#line 1308 "../../src/expr2.c"
{ _auto__result = _auto_i2 ; 

#line 1308 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1309 "../../src/expr2.c"
case 46 : { 
#line 1309 "../../src/expr2.c"
{ _auto__result = ( ! _auto_i2 ) ; 

#line 1309 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1310 "../../src/expr2.c"
case 47 : { 
#line 1310 "../../src/expr2.c"
{ _auto__result = ( ~ _auto_i2 ) ; 

#line 1310 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1311 "../../src/expr2.c"
case 113 : { 
#line 1311 "../../src/expr2.c"
{ _auto__result = _auto_i1 ; 

#line 1311 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1312 "../../src/expr2.c"
case 54 : { 
#line 1312 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 + _auto_i2 ) ; 

#line 1312 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1313 "../../src/expr2.c"
case 55 : { 
#line 1313 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 - _auto_i2 ) ; 

#line 1313 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1314 "../../src/expr2.c"
case 50 : { 
#line 1314 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 * _auto_i2 ) ; 

#line 1314 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1315 "../../src/expr2.c"
case 56 : { 
#line 1315 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 << _auto_i2 ) ; 

#line 1315 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1316 "../../src/expr2.c"
case 57 : { 
#line 1316 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 >> _auto_i2 ) ; 

#line 1316 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1317 "../../src/expr2.c"
case 63 : { 
#line 1317 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 != _auto_i2 ) ; 

#line 1317 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1318 "../../src/expr2.c"
case 62 : { 
#line 1318 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 == _auto_i2 ) ; 

#line 1318 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1319 "../../src/expr2.c"
case 58 : { 
#line 1319 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 < _auto_i2 ) ; 

#line 1319 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1320 "../../src/expr2.c"
case 59 : { 
#line 1320 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 <= _auto_i2 ) ; 

#line 1320 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1321 "../../src/expr2.c"
case 60 : { 
#line 1321 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 > _auto_i2 ) ; 

#line 1321 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1322 "../../src/expr2.c"
case 61 : { 
#line 1322 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 >= _auto_i2 ) ; 

#line 1322 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1323 "../../src/expr2.c"
case 52 : { 
#line 1323 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 & _auto_i2 ) ; 

#line 1323 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1324 "../../src/expr2.c"
case 65 : { 
#line 1324 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 | _auto_i2 ) ; 

#line 1324 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1325 "../../src/expr2.c"
case 67 : { 
#line 1325 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 || _auto_i2 ) ; 

#line 1325 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1326 "../../src/expr2.c"
case 64 : { 
#line 1326 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 ^ _auto_i2 ) ; 

#line 1326 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1327 "../../src/expr2.c"
case 53 : { 
#line 1327 "../../src/expr2.c"
{ _auto__result = ( ( _auto_i2 == 0 ) ? 1 : 
#line 1327 "../../src/expr2.c"
( _auto_i1 % _auto_i2 ) ) ; 

#line 1327 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1328 "../../src/expr2.c"
case 68 : { 
#line 1328 "../../src/expr2.c"
{ _auto__result = ( _expr_eval ( ( struct expr * ) _auto_this -> 
#line 1328 "../../src/expr2.c"
_expr__O5.__C5_cond ) ? _auto_i1 : _auto_i2 ) ; 

#line 1328 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1329 "../../src/expr2.c"
case 51 : if ( _auto_i2 == 0 ) { 
#line 1329 "../../src/expr2.c"
Neval = "divide by zero"; 

#line 1331 "../../src/expr2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "divide by zero") ; 

#line 1332 "../../src/expr2.c"
{ 
#line 1332 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1332 "../../src/expr2.c"
return _auto__result ; 
} } } 
#line 1334 "../../src/expr2.c"
{ 
#line 1334 "../../src/expr2.c"
{ _auto__result = ( _auto_i1 / _auto_i2 ) ; 

#line 1334 "../../src/expr2.c"
return _auto__result ; 
} } } } } ; 

#line 1338 "../../src/expr2.c"
bit _classdef_has_friend ( _auto_this , _auto_f ) register struct classdef * _auto_this ; 
struct name * _auto_f ; 

#line 1342 "../../src/expr2.c"
{ 
#line 1342 "../../src/expr2.c"
bit _auto__result ; 
Plist _auto_l ; 
Ptable _auto_ctbl ; 

#line 1344 "../../src/expr2.c"
_auto_ctbl = _auto_f -> _expr__O5.__C5_n_table ; 

#line 1346 "../../src/expr2.c"
for ( _auto_l = _auto_this -> _classdef_friend_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 1346 "../../src/expr2.c"
Pname _auto_fr ; 

#line 1347 "../../src/expr2.c"
_auto_fr = _auto_l -> _name_list_f ; 

#line 1349 "../../src/expr2.c"
switch ( _auto_fr -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1349 "../../src/expr2.c"
case 6 : if ( ( ( ( struct 
#line 1349 "../../src/expr2.c"
classdef * ) ( _auto_fr -> _expr__O2.__C2_tp ) ) ) -> _classdef_memtbl == _auto_ctbl ) 
#line 1351 "../../src/expr2.c"
{ 
#line 1351 "../../src/expr2.c"
{ _auto__result = 1 ; 
#line 1351 "../../src/expr2.c"

#line 1351 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1352 "../../src/expr2.c"
break ; 

#line 1353 "../../src/expr2.c"
case 119 : if ( ( ( ( struct basetype * ) ( _auto_fr -> _expr__O2.__C2_tp ) ) 
#line 1353 "../../src/expr2.c"
) -> _basetype_b_table == _auto_ctbl ) 
#line 1354 "../../src/expr2.c"
{ 
#line 1354 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1354 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1355 "../../src/expr2.c"
break ; 

#line 1356 "../../src/expr2.c"
case 108 : if ( _auto_fr == _auto_f ) { 
#line 1357 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1357 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1358 "../../src/expr2.c"
break ; 

#line 1359 "../../src/expr2.c"
case 76 : { 
#line 1360 "../../src/expr2.c"
_auto_l -> _name_list_f = ( _auto_fr = ( ( ( struct gen * ) ( 
#line 1360 "../../src/expr2.c"
_auto_fr -> _expr__O2.__C2_tp ) ) ) -> _gen_fct_list -> _name_list_f ) ; 

#line 1366 "../../src/expr2.c"
if ( _auto_fr == _auto_f ) { 
#line 1366 "../../src/expr2.c"
{ _auto__result = 1 ; 

#line 1366 "../../src/expr2.c"
return _auto__result ; 
} } 
#line 1367 "../../src/expr2.c"
break ; 
} 
#line 1369 "../../src/expr2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "bad friend %k", _auto_fr -> 
#line 1369 "../../src/expr2.c"
_expr__O2.__C2_tp -> _node_base ) ; 
} } 
#line 1373 "../../src/expr2.c"
{ 
#line 1373 "../../src/expr2.c"
{ _auto__result = 0 ; 

#line 1373 "../../src/expr2.c"
return _auto__result ; 
} } } ; 

/* the end */
