#line 1 "../../src/expand.c"

/* <<cfront 10/10/85>> */
/* < ../../src/expand.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/expand.c"
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

#line 20 "../../src/expand.c"
extern char * temp ( _auto_vn , _auto_fn , _auto_cn ) char * _auto_vn ; 
char * _auto_fn ; 
char * _auto_cn ; 

#line 24 "../../src/expand.c"
{ 
#line 24 "../../src/expand.c"
char * _auto__result ; 

#line 24 "../../src/expand.c"
if ( ( ( _auto_vn [ 0 ] ) != '_' ) || ( ( _auto_vn [ 
#line 24 "../../src/expand.c"
1 ] ) != 'X' ) ) 
#line 24 "../../src/expand.c"
{ 
#line 24 "../../src/expand.c"
int _auto_vnl ; 
int _auto_fnl ; 
int _auto_cnl ; 
char * _auto_s ; 

#line 25 "../../src/expand.c"
_auto_vnl = strlen ( _auto_vn ) ; 

#line 26 "../../src/expand.c"
_auto_fnl = strlen ( _auto_fn ) ; 

#line 27 "../../src/expand.c"
_auto_cnl = ( _auto_cn ? strlen ( _auto_cn ) : 0) ; 

#line 28 "../../src/expand.c"
_auto_s = ( ( ( char * ) ( _new ( ( long ) ( ( 
#line 28 "../../src/expand.c"
( _auto_vnl + _auto_fnl ) + _auto_cnl ) + 6 ) ) ) ) ) ; 

#line 30 "../../src/expand.c"
( _auto_s [ 0 ] ) = '_' ; 

#line 31 "../../src/expand.c"
( _auto_s [ 1 ] ) = 'X' ; 

#line 32 "../../src/expand.c"
strcpy ( _auto_s + 2 , _auto_vn ) ; 

#line 33 "../../src/expand.c"
( _auto_s [ _auto_vnl + 2 ] ) = '_' ; 

#line 34 "../../src/expand.c"
strcpy ( ( _auto_s + _auto_vnl ) + 3 , _auto_fn ) ; 

#line 35 "../../src/expand.c"
if ( _auto_cnl ) { 
#line 35 "../../src/expand.c"
( _auto_s [ ( _auto_vnl + _auto_fnl ) + 3 ] ) = '_' ; 
#line 35 "../../src/expand.c"

#line 37 "../../src/expand.c"
strcpy ( ( ( _auto_s + _auto_vnl ) + _auto_fnl ) + 4 , _auto_cn ) ; 
} 
#line 39 "../../src/expand.c"
{ 
#line 39 "../../src/expand.c"
{ _auto__result = _auto_s ; 

#line 39 "../../src/expand.c"
return _auto__result ; 
} } } else 
#line 42 "../../src/expand.c"
{ 
#line 42 "../../src/expand.c"
{ _auto__result = _auto_vn ; 

#line 42 "../../src/expand.c"
return _auto__result ; 
} } } ; 

#line 46 "../../src/expand.c"
Pname dcl_local ( _auto_scope , _auto_an , _auto_fn ) struct table * _auto_scope ; 
struct name * _auto_an ; 
struct name * _auto_fn ; 

#line 47 "../../src/expand.c"
{ 
#line 47 "../../src/expand.c"
Pname _auto__result ; 
Pname _auto_cn ; 
char * _auto_s ; 
Pname _auto_nx ; 
Pname _auto_r ; 

#line 48 "../../src/expand.c"
if ( _auto_scope == 0 ) { 
#line 48 "../../src/expand.c"
errorFI_PC__E ( ( int ) 's' , ( char * 
#line 48 "../../src/expand.c"
) "cannot expand inlineF needing temporary variable in nonF context") ; 

#line 50 "../../src/expand.c"
{ 
#line 50 "../../src/expand.c"
{ _auto__result = _auto_an ; 

#line 50 "../../src/expand.c"
return _auto__result ; 
} } } 
#line 52 "../../src/expand.c"
if ( _auto_an -> _name_n_stclass == 31 ) errorFI_PC__E ( ( int ) 's' , ( 
#line 52 "../../src/expand.c"
char * ) "static%n in inlineF", _auto_an ) ; 

#line 53 "../../src/expand.c"
_auto_cn = _auto_fn -> _expr__O5.__C5_n_table -> _table_t_name ; 

#line 53 "../../src/expand.c"
_auto_s = temp ( _auto_an -> _expr__O3.__C3_string , _auto_fn -> _expr__O3.__C3_string , _auto_cn ? _auto_cn -> _expr__O3.__C3_string : ( ( ( char * 
#line 53 "../../src/expand.c"
) ( 0 ) ) ) ) ; 

#line 53 "../../src/expand.c"
_auto_nx = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 53 "../../src/expand.c"

#line 57 "../../src/expand.c"
_auto_nx -> _expr__O2.__C2_tp = _auto_an -> _expr__O2.__C2_tp ; 

#line 58 "../../src/expand.c"
_auto_nx -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 59 "../../src/expand.c"
_auto_nx -> _name_n_used = _auto_an -> _name_n_used ; 

#line 60 "../../src/expand.c"
_auto_nx -> _name_n_assigned_to = _auto_an -> _name_n_assigned_to ; 

#line 61 "../../src/expand.c"
_auto_nx -> _name_n_addr_taken = _auto_an -> _name_n_addr_taken ; 

#line 62 "../../src/expand.c"
_auto_r = _table_insert ( ( struct table * ) _auto_scope , ( struct name * ) _auto_nx , ( int 
#line 62 "../../src/expand.c"
) 0 ) ; 

#line 63 "../../src/expand.c"
_name__dtor ( ( struct name * ) _auto_nx , 1) ; 

#line 64 "../../src/expand.c"
{ 
#line 64 "../../src/expand.c"
{ _auto__result = _auto_r ; 

#line 64 "../../src/expand.c"
return _auto__result ; 
} } } ; 

#line 67 "../../src/expand.c"
Pstmt _stmt_expand ( _auto_this ) register struct stmt * _auto_this ; 

#line 75 "../../src/expand.c"
{ 
#line 75 "../../src/expand.c"
Pstmt _auto__result ; 

#line 76 "../../src/expand.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 76 "../../src/expand.c"
"0->stmt.expand() for%n", expand_fn ) ; 

#line 79 "../../src/expand.c"
if ( _auto_this -> _stmt_memtbl ) { 
#line 79 "../../src/expand.c"
register Ptable _auto_t ; 
register int _auto_i ; 
register Pname _auto_n ; 

#line 80 "../../src/expand.c"
_auto_t = _auto_this -> _stmt_memtbl ; 

#line 82 "../../src/expand.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_t , _auto_i = 1 ) ;_auto_n ;( _auto_n = _table_get_mem ( 
#line 82 "../../src/expand.c"
( struct table * ) _auto_t , ++ _auto_i ) ) ) 
#line 83 "../../src/expand.c"
if ( _auto_n -> _name_n_stclass == 31 ) 
#line 83 "../../src/expand.c"

#line 83 "../../src/expand.c"
{ 
#line 83 "../../src/expand.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "static%n in inlineF", _auto_n ) ; 

#line 85 "../../src/expand.c"
_auto_n -> _name_n_stclass = 2 ; 
} } 
#line 89 "../../src/expand.c"
if ( expand_tbl ) { 
#line 89 "../../src/expand.c"
Pexpr _auto_ee ; 

#line 91 "../../src/expand.c"
static int _static_ret_seen = 0 ; 

#line 93 "../../src/expand.c"
if ( _auto_this -> _stmt_memtbl && ( _auto_this -> _node_base != 116 ) ) { 
#line 93 "../../src/expand.c"
int _auto_i ; 
Pname _auto_n ; 
Ptable _auto_tbl ; 

#line 96 "../../src/expand.c"
_auto_tbl = _auto_this -> _stmt_memtbl ; 

#line 97 "../../src/expand.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_n ;( _auto_n = _table_get_mem ( 
#line 97 "../../src/expand.c"
( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 97 "../../src/expand.c"
{ 
#line 97 "../../src/expand.c"
Pname _auto_nn ; 

#line 99 "../../src/expand.c"
_auto_nn = dcl_local ( ( struct table * ) scope , ( struct name * ) _auto_n , ( struct 
#line 99 "../../src/expand.c"
name * ) expand_fn ) ; 

#line 100 "../../src/expand.c"
_auto_nn -> _node_base = 85 ; 

#line 101 "../../src/expand.c"
_auto_n -> _expr__O3.__C3_string = _auto_nn -> _expr__O3.__C3_string ; 
} } 
#line 105 "../../src/expand.c"
switch ( _auto_this -> _node_base ) { 
#line 105 "../../src/expand.c"
default : errorFI_PC__E ( ( int ) 's' , 
#line 105 "../../src/expand.c"
( char * ) "%kS in inline%n", _auto_this -> _node_base , expand_fn ) ; 

#line 108 "../../src/expand.c"
{ 
#line 108 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( dummy ) ) ) ; 
#line 108 "../../src/expand.c"

#line 108 "../../src/expand.c"
return _auto__result ; 
} } 
#line 110 "../../src/expand.c"
case 116 : if ( _auto_this -> _stmt_s_list ) { 
#line 111 "../../src/expand.c"
_auto_ee = ( ( ( struct 
#line 111 "../../src/expand.c"
expr * ) ( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ) ) ) ; 
#line 111 "../../src/expand.c"

#line 113 "../../src/expand.c"
if ( _auto_this -> _stmt_s ) { 
#line 113 "../../src/expand.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * 
#line 113 "../../src/expand.c"
) 0 , 71 , ( struct expr * ) ( ( ( struct expr * ) 
#line 113 "../../src/expand.c"
( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s ) ) ) ) , ( struct 
#line 113 "../../src/expand.c"
expr * ) _auto_ee ) ; 

#line 115 "../../src/expand.c"
_auto_ee -> _node_permanent = 1 ; 
} 
#line 117 "../../src/expand.c"
{ 
#line 117 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( _auto_ee ) ) ) 
#line 117 "../../src/expand.c"
; 

#line 117 "../../src/expand.c"
return _auto__result ; 
} } } 
#line 120 "../../src/expand.c"
if ( _auto_this -> _stmt_s ) { 
#line 120 "../../src/expand.c"
{ _auto__result = _stmt_expand ( ( struct stmt * 
#line 120 "../../src/expand.c"
) _auto_this -> _stmt_s ) ; 

#line 120 "../../src/expand.c"
return _auto__result ; 
} } 
#line 122 "../../src/expand.c"
{ 
#line 122 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( zero ) ) 
#line 122 "../../src/expand.c"
) ; 

#line 122 "../../src/expand.c"
return _auto__result ; 
} } 
#line 124 "../../src/expand.c"
case 166 : _auto_ee = ( _auto_this -> _stmt__O8.__C8_s2 ? ( ( ( struct expr * ) 
#line 124 "../../src/expand.c"
( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt__O8.__C8_s2 ) ) ) ) : ( ( 
#line 124 "../../src/expand.c"
( struct expr * ) ( 0 ) ) ) ) ; 

#line 126 "../../src/expand.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( 
#line 126 "../../src/expand.c"
struct expr * ) ( _auto_this -> _stmt_s ? ( ( ( struct expr * ) ( _stmt_expand ( 
#line 126 "../../src/expand.c"
( struct stmt * ) _auto_this -> _stmt_s ) ) ) ) : ( ( ( struct 
#line 126 "../../src/expand.c"
expr * ) ( 0 ) ) ) ) , ( struct expr * ) _auto_ee ) 
#line 126 "../../src/expand.c"
; 

#line 127 "../../src/expand.c"
if ( _auto_this -> _stmt_s_list ) _auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 
#line 127 "../../src/expand.c"
0 , 71 , ( struct expr * ) _auto_ee , ( struct expr * ) ( ( 
#line 127 "../../src/expand.c"
( struct expr * ) ( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ) ) 
#line 127 "../../src/expand.c"
) ) ; 

#line 128 "../../src/expand.c"
_auto_ee -> _node_permanent = 1 ; 

#line 129 "../../src/expand.c"
{ 
#line 129 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( _auto_ee ) ) ) ; 
#line 129 "../../src/expand.c"

#line 129 "../../src/expand.c"
return _auto__result ; 
} } 
#line 131 "../../src/expand.c"
case 28 : _static_ret_seen = 1 ; 

#line 133 "../../src/expand.c"
_auto_this -> _stmt_s_list = 0 ; 

#line 134 "../../src/expand.c"
{ 
#line 134 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( _expr_expand ( ( struct expr * 
#line 134 "../../src/expand.c"
) _auto_this -> _stmt__O8.__C8_e ) ) ) ) ; 

#line 134 "../../src/expand.c"
return _auto__result ; 
} } 
#line 136 "../../src/expand.c"
case 72 : _auto_ee = ( ( ( _auto_this -> _stmt__O8.__C8_e == 0 ) || ( 
#line 136 "../../src/expand.c"
_auto_this -> _stmt__O8.__C8_e -> _node_base == 144 ) ) ? zero : _expr_expand ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) 
#line 136 "../../src/expand.c"
) ; 

#line 138 "../../src/expand.c"
if ( _auto_this -> _stmt_s_list ) { 
#line 138 "../../src/expand.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * 
#line 138 "../../src/expand.c"
) 0 , 71 , ( struct expr * ) _auto_ee , ( struct expr * ) ( 
#line 138 "../../src/expand.c"
( ( struct expr * ) ( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ) 
#line 138 "../../src/expand.c"
) ) ) ; 

#line 140 "../../src/expand.c"
_auto_ee -> _node_permanent = 1 ; 
} 
#line 142 "../../src/expand.c"
{ 
#line 142 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( _auto_ee ) ) ) 
#line 142 "../../src/expand.c"
; 

#line 142 "../../src/expand.c"
return _auto__result ; 
} } 
#line 144 "../../src/expand.c"
case 20 : { 
#line 145 "../../src/expand.c"
_static_ret_seen = 0 ; 

#line 146 "../../src/expand.c"
{ 
#line 146 "../../src/expand.c"
Pexpr _auto_qq ; 

#line 146 "../../src/expand.c"
_auto_qq = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 68 , ( 
#line 146 "../../src/expand.c"
struct expr * ) ( ( ( struct expr * ) ( _stmt_expand ( ( struct stmt * 
#line 146 "../../src/expand.c"
) _auto_this -> _stmt_s ) ) ) ) , ( struct expr * ) 0 ) ; 
#line 146 "../../src/expand.c"

#line 147 "../../src/expand.c"
_auto_qq -> _expr__O5.__C5_cond = _expr_expand ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 148 "../../src/expand.c"
_auto_qq -> _expr__O4.__C4_e2 = ( _auto_this -> _stmt__O9.__C9_else_stmt ? ( ( ( struct expr * ) ( _stmt_expand ( ( 
#line 148 "../../src/expand.c"
struct stmt * ) _auto_this -> _stmt__O9.__C9_else_stmt ) ) ) ) : zero ) ; 

#line 149 "../../src/expand.c"
if ( _static_ret_seen && _auto_this -> _stmt_s_list ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 149 "../../src/expand.c"
"S after \"return\" inIF") ; 

#line 150 "../../src/expand.c"
_static_ret_seen = 0 ; 

#line 151 "../../src/expand.c"
if ( _auto_this -> _stmt_s_list ) _auto_qq = ( struct expr * ) _expr__ctor ( ( struct expr * ) 
#line 151 "../../src/expand.c"
0 , 71 , ( struct expr * ) _auto_qq , ( struct expr * ) ( ( 
#line 151 "../../src/expand.c"
( struct expr * ) ( _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ) ) 
#line 151 "../../src/expand.c"
) ) ; 

#line 152 "../../src/expand.c"
_auto_qq -> _node_permanent = 1 ; 

#line 153 "../../src/expand.c"
{ 
#line 153 "../../src/expand.c"
{ _auto__result = ( ( ( struct stmt * ) ( _auto_qq ) ) ) ; 
#line 153 "../../src/expand.c"

#line 153 "../../src/expand.c"
return _auto__result ; 
} } } } } } 
#line 158 "../../src/expand.c"
switch ( _auto_this -> _node_base ) { 
#line 158 "../../src/expand.c"
default : if 
#line 158 "../../src/expand.c"
( _auto_this -> _stmt__O8.__C8_e ) 
#line 160 "../../src/expand.c"
_auto_this -> _stmt__O8.__C8_e = _expr_expand ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 161 "../../src/expand.c"
break ; 

#line 162 "../../src/expand.c"
case 166 : if ( _auto_this -> _stmt__O8.__C8_s2 ) _auto_this -> _stmt__O8.__C8_s2 = _stmt_expand ( ( struct stmt * ) _auto_this -> 
#line 162 "../../src/expand.c"
_stmt__O8.__C8_s2 ) ; 

#line 164 "../../src/expand.c"
break ; 

#line 165 "../../src/expand.c"
case 116 : break ; 

#line 167 "../../src/expand.c"
case 16 : if ( _auto_this -> _stmt__O9.__C9_for_init ) _auto_this -> _stmt__O9.__C9_for_init = _stmt_expand ( ( struct stmt * ) _auto_this -> 
#line 167 "../../src/expand.c"
_stmt__O9.__C9_for_init ) ; 

#line 169 "../../src/expand.c"
if ( _auto_this -> _stmt__O7.__C7_e2 ) _auto_this -> _stmt__O7.__C7_e2 = _expr_expand ( ( struct expr * ) _auto_this -> _stmt__O7.__C7_e2 ) ; 
#line 169 "../../src/expand.c"

#line 170 "../../src/expand.c"
break ; 

#line 171 "../../src/expand.c"
case 115 : case 19 : case 28 : case 3 : case 7 : errorFI_PC__E ( ( int ) 
#line 171 "../../src/expand.c"
's' , ( char * ) "%kS in inline%n", _auto_this -> _node_base , expand_fn ) ; 
} 
#line 179 "../../src/expand.c"
if ( _auto_this -> _stmt_s ) _auto_this -> _stmt_s = _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s ) 
#line 179 "../../src/expand.c"
; 

#line 180 "../../src/expand.c"
if ( _auto_this -> _stmt_s_list ) _auto_this -> _stmt_s_list = _stmt_expand ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ; 
#line 180 "../../src/expand.c"

#line 181 "../../src/expand.c"
_auto_this -> _node_permanent = 1 ; 

#line 182 "../../src/expand.c"
{ 
#line 182 "../../src/expand.c"
{ _auto__result = ( struct stmt * ) _auto_this ; 

#line 182 "../../src/expand.c"
return _auto__result ; 
} } } ; 

#line 185 "../../src/expand.c"
Pexpr _expr_expand ( _auto_this ) register struct expr * _auto_this ; 

#line 186 "../../src/expand.c"
{ 
#line 186 "../../src/expand.c"
Pexpr _auto__result ; 

#line 187 "../../src/expand.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 187 "../../src/expand.c"
"expr.expand(0)") ; 

#line 189 "../../src/expand.c"
switch ( _auto_this -> _node_base ) { 
#line 189 "../../src/expand.c"
case 85 : if ( expand_tbl && ( ( ( ( 
#line 189 "../../src/expand.c"
struct name * ) ( _auto_this ) ) ) -> _name_n_scope == 108 ) ) 
#line 191 "../../src/expand.c"
{ 
#line 191 "../../src/expand.c"
Pname _auto_n ; 
char * _auto_s ; 
Pname _auto_cn ; 

#line 192 "../../src/expand.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 193 "../../src/expand.c"
_auto_s = _auto_n -> _expr__O3.__C3_string ; 

#line 194 "../../src/expand.c"
if ( ( ( _auto_s [ 0 ] ) == '_' ) && ( ( _auto_s [ 
#line 194 "../../src/expand.c"
1 ] ) == 'X' ) ) 
#line 194 "../../src/expand.c"
break ; 

#line 195 "../../src/expand.c"
_auto_cn = expand_fn -> _expr__O5.__C5_n_table -> _table_t_name ; 

#line 196 "../../src/expand.c"
_auto_n -> _expr__O3.__C3_string = temp ( _auto_s , expand_fn -> _expr__O3.__C3_string , _auto_cn ? _auto_cn -> _expr__O3.__C3_string : ( ( ( char * 
#line 196 "../../src/expand.c"
) ( 0 ) ) ) ) ; 
} 
#line 198 "../../src/expand.c"
case 144 : case 82 : case 83 : case 84 : case 150 : case 151 : case 
#line 198 "../../src/expand.c"
152 : 
#line 205 "../../src/expand.c"
case 81 : case 86 : case 30 : case 165 : case 169 : break ; 

#line 211 "../../src/expand.c"
case 168 : if ( expand_tbl && ( _auto_this -> _expr__O3.__C3_e1 == 0 ) ) { 
#line 212 "../../src/expand.c"
Pname _auto_fn ; 
Pfct _auto_f ; 

#line 213 "../../src/expand.c"
_auto_fn = _auto_this -> _expr__O5.__C5_il -> _iline_fct_name ; 

#line 214 "../../src/expand.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 

#line 215 "../../src/expand.c"
if ( ( _auto_f -> _fct_returns == ( struct type * ) void_type ) && ( _auto_fn -> _name_n_oper != 
#line 215 "../../src/expand.c"
161 ) ) 
#line 216 "../../src/expand.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "non-value-returning inline%n called in value-returning inline%n", _auto_fn , expand_fn ) 
#line 216 "../../src/expand.c"
; 
else 
#line 218 "../../src/expand.c"
errorFPC__E ( ( char * ) "inline%n called before defined", _auto_fn ) ; 
} 
#line 220 "../../src/expand.c"
break ; 

#line 221 "../../src/expand.c"
case 68 : _auto_this -> _expr__O5.__C5_cond = _expr_expand ( ( struct expr * ) _auto_this -> _expr__O5.__C5_cond ) ; 

#line 223 "../../src/expand.c"
default : if ( _auto_this -> _expr__O4.__C4_e2 ) _auto_this -> _expr__O4.__C4_e2 = _expr_expand ( ( struct expr * ) _auto_this -> 
#line 223 "../../src/expand.c"
_expr__O4.__C4_e2 ) ; 

#line 225 "../../src/expand.c"
case 44 : case 45 : if ( _auto_this -> _expr__O3.__C3_e1 ) _auto_this -> _expr__O3.__C3_e1 = _expr_expand ( ( struct expr * 
#line 225 "../../src/expand.c"
) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 228 "../../src/expand.c"
break ; 

#line 229 "../../src/expand.c"
case 113 : _auto_this -> _expr__O5.__C5_tp2 -> _node_permanent = 1 ; 

#line 231 "../../src/expand.c"
_auto_this -> _expr__O3.__C3_e1 = _expr_expand ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 232 "../../src/expand.c"
break ; 
} 
#line 235 "../../src/expand.c"
_auto_this -> _node_permanent = 1 ; 

#line 236 "../../src/expand.c"
{ 
#line 236 "../../src/expand.c"
{ _auto__result = ( struct expr * ) _auto_this ; 

#line 236 "../../src/expand.c"
return _auto__result ; 
} } } ; 

#line 239 "../../src/expand.c"
bit _expr_not_simple ( _auto_this ) register struct expr * _auto_this ; 

#line 246 "../../src/expand.c"
{ 
#line 246 "../../src/expand.c"
bit _auto__result ; 
int _auto_s ; 

#line 249 "../../src/expand.c"
switch ( _auto_this -> _node_base ) { 
#line 249 "../../src/expand.c"
default : { 
#line 251 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 251 "../../src/expand.c"
return _auto__result ; 
} } 
#line 252 "../../src/expand.c"
case 86 : case 150 : case 151 : case 82 : case 84 : case 83 : 
#line 252 "../../src/expand.c"

#line 258 "../../src/expand.c"
case 81 : case 85 : { 
#line 260 "../../src/expand.c"
{ _auto__result = 0 ; 

#line 260 "../../src/expand.c"
return _auto__result ; 
} } 
#line 261 "../../src/expand.c"
case 30 : { 
#line 262 "../../src/expand.c"
{ _auto__result = ( ( _auto_this -> _expr__O3.__C3_e1 == dummy ) ? 0: 
#line 262 "../../src/expand.c"
( ( ( int ) ( _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ) 
#line 262 "../../src/expand.c"
) ) ) ; 

#line 262 "../../src/expand.c"
return _auto__result ; 
} } 
#line 263 "../../src/expand.c"
case 145 : case 112 : { 
#line 265 "../../src/expand.c"
{ _auto__result = _expr_not_simple ( ( struct expr * ) 
#line 265 "../../src/expand.c"
_auto_this -> _expr__O4.__C4_e2 ) ; 

#line 265 "../../src/expand.c"
return _auto__result ; 
} } 
#line 266 "../../src/expand.c"
case 113 : case 45 : case 44 : { 
#line 269 "../../src/expand.c"
{ _auto__result = _expr_not_simple ( ( struct 
#line 269 "../../src/expand.c"
expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 269 "../../src/expand.c"
return _auto__result ; 
} } 
#line 270 "../../src/expand.c"
case 107 : case 46 : case 47 : { 
#line 273 "../../src/expand.c"
{ _auto__result = _expr_not_simple ( ( struct 
#line 273 "../../src/expand.c"
expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 273 "../../src/expand.c"
return _auto__result ; 
} } 
#line 274 "../../src/expand.c"
case 111 : _auto_s = _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 276 "../../src/expand.c"
if ( 1 < _auto_s ) { 
#line 276 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 276 "../../src/expand.c"
return _auto__result ; 
} } 
#line 277 "../../src/expand.c"
if ( _auto_this -> _expr__O4.__C4_e2 == 0 ) { 
#line 277 "../../src/expand.c"
{ _auto__result = _auto_s ; 

#line 277 "../../src/expand.c"
return _auto__result ; 
} } 
#line 278 "../../src/expand.c"
{ 
#line 278 "../../src/expand.c"
{ _auto__result = ( _auto_s |= _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) 
#line 278 "../../src/expand.c"
) ; 

#line 278 "../../src/expand.c"
return _auto__result ; 
} } 
#line 279 "../../src/expand.c"
case 50 : case 51 : case 53 : case 54 : case 55 : case 56 : 
#line 279 "../../src/expand.c"

#line 285 "../../src/expand.c"
case 57 : case 52 : case 65 : case 64 : case 58 : case 59 : case 60 : 
#line 285 "../../src/expand.c"

#line 292 "../../src/expand.c"
case 61 : case 62 : case 63 : case 66 : case 67 : case 71 : _auto_s = _expr_not_simple ( 
#line 292 "../../src/expand.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 299 "../../src/expand.c"
if ( 1 < _auto_s ) { 
#line 299 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 299 "../../src/expand.c"
return _auto__result ; 
} } 
#line 300 "../../src/expand.c"
{ 
#line 300 "../../src/expand.c"
{ _auto__result = ( _auto_s |= _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) 
#line 300 "../../src/expand.c"
) ; 

#line 300 "../../src/expand.c"
return _auto__result ; 
} } 
#line 301 "../../src/expand.c"
case 68 : _auto_s = _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O5.__C5_cond ) ; 

#line 303 "../../src/expand.c"
if ( 1 < _auto_s ) { 
#line 303 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 303 "../../src/expand.c"
return _auto__result ; 
} } 
#line 304 "../../src/expand.c"
_auto_s |= _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 305 "../../src/expand.c"
if ( 1 < _auto_s ) { 
#line 305 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 305 "../../src/expand.c"
return _auto__result ; 
} } 
#line 306 "../../src/expand.c"
{ 
#line 306 "../../src/expand.c"
{ _auto__result = ( _auto_s |= _expr_not_simple ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) 
#line 306 "../../src/expand.c"
) ; 

#line 306 "../../src/expand.c"
return _auto__result ; 
} } 
#line 307 "../../src/expand.c"
case 169 : if ( curr_icall ) { 
#line 308 "../../src/expand.c"
Pname _auto_n ; 
int _auto_argno ; 
Pin _auto_il ; 

#line 309 "../../src/expand.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 310 "../../src/expand.c"
_auto_argno = _auto_n -> _name_n_val ; 

#line 312 "../../src/expand.c"
for ( _auto_il = curr_icall ;_auto_il ;( _auto_il = _auto_il -> _iline_i_next ) ) if ( _auto_n -> _expr__O5.__C5_n_table == _auto_il -> _iline_i_table ) 
#line 312 "../../src/expand.c"

#line 313 "../../src/expand.c"
goto aok ; 

#line 314 "../../src/expand.c"
goto bok ; 

#line 315 "../../src/expand.c"
aok : { 
#line 316 "../../src/expand.c"
{ _auto__result = ( ( _auto_il -> _iline_local [ _auto_argno ] ) ? 0: ( ( 
#line 316 "../../src/expand.c"
( int ) ( _expr_not_simple ( ( struct expr * ) ( _auto_il -> _iline_arg [ _auto_argno ] ) 
#line 316 "../../src/expand.c"
) ) ) ) ) ; 

#line 316 "../../src/expand.c"
return _auto__result ; 
} } } 
#line 318 "../../src/expand.c"
bok : errorFI_PC__E ( ( int ) 'i' , ( char * ) "expand aname%n", 
#line 318 "../../src/expand.c"
_auto_this ) ; 

#line 319 "../../src/expand.c"
case 157 : case 23 : case 109 : case 146 : case 168 : case 70 : case 48 : 
#line 319 "../../src/expand.c"

#line 326 "../../src/expand.c"
case 49 : case 126 : case 127 : case 128 : case 129 : case 130 : case 131 : 
#line 326 "../../src/expand.c"

#line 333 "../../src/expand.c"
case 132 : case 133 : case 134 : case 135 : { 
#line 337 "../../src/expand.c"
{ _auto__result = 2 ; 

#line 337 "../../src/expand.c"
return _auto__result ; 
} } } } ; 

#line 342 "../../src/expand.c"
Pexpr _fct_expand ( _auto_this , _auto_fn , _auto_scope , _auto_ll ) register struct fct * _auto_this ; 
struct name * _auto_fn ; 
struct table * _auto_scope ; 
struct expr * _auto_ll ; 

#line 350 "../../src/expand.c"
{ 
#line 350 "../../src/expand.c"
Pexpr _auto__result ; 
Pin _auto_il ; 
Pexpr _auto_ic ; 
Pname _auto_n ; 
Pname _auto_at ; 
int _auto_i ; 
int _auto_not_simple ; 
Pexpr _auto_ee ; 
int _auto_s ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 352 "../../src/expand.c"
if ( ( ( ( ( ( _auto_this -> _fct_body == 0 ) && ( _auto_this -> 
#line 352 "../../src/expand.c"
_fct_f_expr == 0 ) ) || ( ( _auto_this -> _type_defined & 02 ) == 0 ) ) 
#line 352 "../../src/expand.c"
|| ( ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) -> 
#line 352 "../../src/expand.c"
_fct_body -> _stmt_memtbl == _auto_scope ) ) || ( _auto_this -> _fct_f_inline == 2 ) ) || ( _auto_this -> _fct_last_expanded && 
#line 352 "../../src/expand.c"
( _auto_this -> _fct_last_expanded == curr_expr ) ) ) 
#line 357 "../../src/expand.c"
{ 
#line 357 "../../src/expand.c"
{ 
#line 564 "../../src/cfront.h"
( ( struct name * ) _auto_fn ) 
#line 564 "../../src/cfront.h"
-> _name_n_addr_taken ++ ; 
} 
#line 359 "../../src/expand.c"
if ( _auto_fn -> _name_n_addr_taken == 1 ) { 
#line 359 "../../src/expand.c"
Pname _auto_nn ; 

#line 360 "../../src/expand.c"
_auto_nn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 360 "../../src/expand.c"
* ) 0 ) ; 

#line 361 "../../src/expand.c"
( * _auto_nn ) = ( * _auto_fn ) ; 

#line 362 "../../src/expand.c"
_auto_nn -> _name_n_list = dcl_list ; 

#line 363 "../../src/expand.c"
_auto_nn -> _name_n_sto = 31 ; 

#line 364 "../../src/expand.c"
dcl_list = _auto_nn ; 
} 
#line 366 "../../src/expand.c"
{ 
#line 366 "../../src/expand.c"
{ _auto__result = 0 ; 

#line 366 "../../src/expand.c"
return _auto__result ; 
} } } 
#line 369 "../../src/expand.c"
_auto_this -> _fct_f_inline = 2 ; 

#line 371 "../../src/expand.c"
_auto_il = ( ( ( struct iline * ) ( _new ( ( long ) 108) ) 
#line 371 "../../src/expand.c"
) ) ; 

#line 371 "../../src/expand.c"
_auto_ic = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( 
#line 371 "../../src/expand.c"
_auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct 
#line 371 "../../src/expand.c"
expr * ) ( _auto__Xthis__ctor_texpr ) ) , 168 , ( ( struct expr * ) 0 ) 
#line 371 "../../src/expand.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = 
#line 371 "../../src/expand.c"
( ( struct type * ) 0 ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 373 "../../src/expand.c"
_auto_il -> _iline_fct_name = _auto_fn ; 

#line 374 "../../src/expand.c"
_auto_ic -> _expr__O5.__C5_il = _auto_il ; 

#line 375 "../../src/expand.c"
_auto_ic -> _expr__O2.__C2_tp = _auto_this -> _fct_returns ; 

#line 376 "../../src/expand.c"
; 

#line 376 "../../src/expand.c"
_auto_at = ( _auto_this -> _fct_f_this ? _auto_this -> _fct_f_this : _auto_this -> _fct_argtype ) ; 

#line 378 "../../src/expand.c"
if ( _auto_at ) _auto_il -> _iline_i_table = _auto_at -> _expr__O5.__C5_n_table ; 

#line 379 "../../src/expand.c"
_auto_i = 0 ; 

#line 379 "../../src/expand.c"
_auto_not_simple = 0 ; 

#line 382 "../../src/expand.c"
for ( _auto_n = _auto_at ;_auto_n ;( ( _auto_n = _auto_n -> _name_n_list ) , ( _auto_i ++ ) ) ) 
#line 382 "../../src/expand.c"

#line 382 "../../src/expand.c"
{ 
#line 382 "../../src/expand.c"
if ( _auto_ll == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 382 "../../src/expand.c"
) "simpl.call:AX for %n", _auto_fn ) ; 

#line 387 "../../src/expand.c"
; 

#line 389 "../../src/expand.c"
if ( _auto_ll -> _node_base == 140 ) { 
#line 389 "../../src/expand.c"
_auto_ee = _auto_ll -> _expr__O3.__C3_e1 ; 

#line 391 "../../src/expand.c"
_auto_ll = ( struct expr * ) _auto_ll -> _expr__O4.__C4_e2 ; 
} else 
#line 393 "../../src/expand.c"
{ 
#line 393 "../../src/expand.c"
_auto_ee = _auto_ll ; 

#line 395 "../../src/expand.c"
_auto_ll = 0 ; 
} 
#line 398 "../../src/expand.c"
; 

#line 401 "../../src/expand.c"
if ( _auto_n -> _name_n_assigned_to == 111 ) { 
#line 401 "../../src/expand.c"
if ( ( _auto_ee != zero ) && ( _expr_not_simple ( 
#line 401 "../../src/expand.c"
( struct expr * ) _auto_ee ) == 0 ) ) 
#line 402 "../../src/expand.c"
{ 
#line 402 "../../src/expand.c"
( _auto_il -> _iline_local [ _auto_i ] 
#line 402 "../../src/expand.c"
) = 0 ; 

#line 407 "../../src/expand.c"
goto zxc ; 
} } 
#line 411 "../../src/expand.c"
if ( _auto_n -> _name_n_addr_taken || _auto_n -> _name_n_assigned_to ) { 
#line 412 "../../src/expand.c"
Pname _auto_nn ; 

#line 413 "../../src/expand.c"
_auto_nn = dcl_local ( _auto_scope , ( struct name * ) _auto_n , _auto_fn ) ; 

#line 414 "../../src/expand.c"
_auto_nn -> _node_base = 85 ; 

#line 415 "../../src/expand.c"
( _auto_il -> _iline_local [ _auto_i ] ) = _auto_nn ; 

#line 416 "../../src/expand.c"
++ _auto_not_simple ; 
} else 
#line 418 "../../src/expand.c"
if ( ( _auto_n -> _name_n_used && ( _auto_s = _expr_not_simple ( ( struct expr * ) 
#line 418 "../../src/expand.c"
_auto_ee ) ) ) && ( ( 1 < _auto_s ) || ( 1 < _auto_n -> _name_n_used ) ) 
#line 418 "../../src/expand.c"
) 
#line 420 "../../src/expand.c"
{ 
#line 420 "../../src/expand.c"
Pname _auto_nn ; 

#line 421 "../../src/expand.c"
_auto_nn = dcl_local ( _auto_scope , ( struct name * ) _auto_n , _auto_fn ) ; 

#line 422 "../../src/expand.c"
_auto_nn -> _node_base = 85 ; 

#line 423 "../../src/expand.c"
( _auto_il -> _iline_local [ _auto_i ] ) = _auto_nn ; 

#line 424 "../../src/expand.c"
++ _auto_not_simple ; 
} else 
#line 427 "../../src/expand.c"
( _auto_il -> _iline_local [ _auto_i ] ) = 0 ; 

#line 428 "../../src/expand.c"
zxc : ( _auto_il -> _iline_arg [ _auto_i ] ) = _auto_ee ; 

#line 430 "../../src/expand.c"
( _auto_il -> _iline_tp [ _auto_i ] ) = _auto_n -> _expr__O2.__C2_tp ; 
} 
#line 433 "../../src/expand.c"
{ 
#line 433 "../../src/expand.c"
Ptable _auto_tbl ; 
Pstmt _auto_ss ; 

#line 433 "../../src/expand.c"
_auto_tbl = _auto_this -> _fct_body -> _stmt_memtbl ; 

#line 434 "../../src/expand.c"
if ( _auto_this -> _fct_f_expr ) { 
#line 434 "../../src/expand.c"
char _auto_loc_var ; 
Pexpr _auto_ex ; 

#line 435 "../../src/expand.c"
_auto_loc_var = 0 ; 

#line 438 "../../src/expand.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_n ;( _auto_n = _table_get_mem ( 
#line 438 "../../src/expand.c"
( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 438 "../../src/expand.c"
{ 
#line 438 "../../src/expand.c"
if ( ( _auto_n -> 
#line 438 "../../src/expand.c"
_node_base == 85 ) && ( ( _auto_n -> _name_n_used || _auto_n -> _name_n_assigned_to ) || _auto_n -> _name_n_addr_taken ) ) 
#line 441 "../../src/expand.c"
{ 
#line 441 "../../src/expand.c"

#line 441 "../../src/expand.c"
Pname _auto_nn ; 

#line 442 "../../src/expand.c"
_auto_nn = dcl_local ( _auto_scope , ( struct name * ) _auto_n , _auto_fn ) ; 

#line 443 "../../src/expand.c"
_auto_nn -> _node_base = 85 ; 

#line 444 "../../src/expand.c"
_auto_n -> _expr__O3.__C3_string = _auto_nn -> _expr__O3.__C3_string ; 

#line 445 "../../src/expand.c"
_auto_loc_var ++ ; 
} } 
#line 449 "../../src/expand.c"
if ( _auto_not_simple || _auto_loc_var ) _auto_this -> _fct_last_expanded = curr_expr ; 

#line 451 "../../src/expand.c"
; 

#line 452 "../../src/expand.c"
if ( _auto_not_simple ) { 
#line 452 "../../src/expand.c"
Pexpr _auto_etail ; 

#line 453 "../../src/expand.c"
_auto_etail = ( _auto_ex = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 
#line 453 "../../src/expand.c"
71 , ( struct expr * ) 0 , ( struct expr * ) 0 ) ) 
#line 453 "../../src/expand.c"
; 

#line 454 "../../src/expand.c"
for ( _auto_i = 0 ;( _auto_i < 8) ;( _auto_i ++ ) ) { 
#line 454 "../../src/expand.c"
Pname _auto_n ; 

#line 455 "../../src/expand.c"
_auto_n = ( _auto_il -> _iline_local [ _auto_i ] ) ; 

#line 456 "../../src/expand.c"
if ( _auto_n == 0 ) continue ; 

#line 457 "../../src/expand.c"
{ 
#line 457 "../../src/expand.c"
Pexpr _auto_e ; 

#line 457 "../../src/expand.c"
_auto_e = ( _auto_il -> _iline_arg [ _auto_i ] ) ; 

#line 458 "../../src/expand.c"
_auto_etail -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , 
#line 458 "../../src/expand.c"
( struct expr * ) _auto_n , ( struct expr * ) _auto_e ) ; 

#line 460 "../../src/expand.c"
if ( -- _auto_not_simple ) _auto_etail = ( _auto_etail -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( 
#line 460 "../../src/expand.c"
struct expr * ) 0 , 71 , ( struct expr * ) 0 , ( struct 
#line 460 "../../src/expand.c"
expr * ) 0 ) ) ; 
else 
#line 463 "../../src/expand.c"
break ; 
} } 
#line 465 "../../src/expand.c"
_auto_etail -> _expr__O4.__C4_e2 = _auto_this -> _fct_f_expr ; 
} else 
#line 467 "../../src/expand.c"
{ 
#line 467 "../../src/expand.c"
_auto_ex = _auto_this -> _fct_f_expr ; 
} 
#line 470 "../../src/expand.c"
_auto_ic -> _expr__O3.__C3_e1 = _auto_ex ; 
} else 
#line 472 "../../src/expand.c"
{ 
#line 472 "../../src/expand.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) 
#line 472 "../../src/expand.c"
;_auto_n ;( _auto_n = _table_get_mem ( ( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 473 "../../src/expand.c"
{ 
#line 473 "../../src/expand.c"
if 
#line 473 "../../src/expand.c"
( ( _auto_n -> _node_base == 85 ) && ( ( _auto_n -> _name_n_used || _auto_n -> _name_n_assigned_to ) || _auto_n -> 
#line 473 "../../src/expand.c"
_name_n_addr_taken ) ) 
#line 477 "../../src/expand.c"
{ 
#line 477 "../../src/expand.c"
Pname _auto_cn ; 

#line 478 "../../src/expand.c"
_auto_cn = _auto_fn -> _expr__O5.__C5_n_table -> _table_t_name ; 

#line 479 "../../src/expand.c"
_auto_n -> _expr__O3.__C3_string = temp ( _auto_n -> _expr__O3.__C3_string , _auto_fn -> _expr__O3.__C3_string , _auto_cn ? _auto_cn -> _expr__O3.__C3_string : ( ( ( char 
#line 479 "../../src/expand.c"
* ) ( 0 ) ) ) ) ; 
} } 
#line 482 "../../src/expand.c"
; 

#line 483 "../../src/expand.c"
if ( _auto_not_simple ) { 
#line 483 "../../src/expand.c"
_auto_this -> _fct_last_expanded = curr_expr ; 

#line 485 "../../src/expand.c"
{ 
#line 485 "../../src/expand.c"
Pstmt _auto_st ; 
Pstmt _auto_stail ; 
struct block * _auto__Xthis__ctor_block ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 485 "../../src/expand.c"
_auto_st = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 485 "../../src/expand.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 485 "../../src/expand.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 485 "../../src/expand.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 485 "../../src/expand.c"
0 ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 486 "../../src/expand.c"
_auto_stail = _auto_st ; 

#line 487 "../../src/expand.c"
for ( _auto_i = 0 ;( _auto_i < 8) ;( _auto_i ++ ) ) { 
#line 487 "../../src/expand.c"
Pname _auto_n ; 

#line 488 "../../src/expand.c"
_auto_n = ( _auto_il -> _iline_local [ _auto_i ] ) ; 

#line 489 "../../src/expand.c"
if ( _auto_n == 0 ) continue ; 

#line 490 "../../src/expand.c"
{ 
#line 490 "../../src/expand.c"
Pexpr _auto_e ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 490 "../../src/expand.c"
_auto_e = ( _auto_il -> _iline_arg [ _auto_i ] ) ; 

#line 491 "../../src/expand.c"
_auto_stail -> _stmt__O8.__C8_e = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , 
#line 491 "../../src/expand.c"
( struct expr * ) _auto_n , ( struct expr * ) _auto_e ) ; 

#line 492 "../../src/expand.c"
if ( -- _auto_not_simple ) _auto_stail = ( _auto_stail -> _stmt_s_list = ( struct stmt * ) ( ( 
#line 492 "../../src/expand.c"
_auto__Xthis__ctor_estmt = 0 ) , ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( 
#line 492 "../../src/expand.c"
struct estmt * ) _stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , 
#line 492 "../../src/expand.c"
curloc , ( ( struct stmt * ) 0 ) ) ) ) , ( ( 
#line 492 "../../src/expand.c"
_auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 0 ) ) , _auto__Xthis__ctor_estmt ) ) ) 
#line 492 "../../src/expand.c"
) ; 
else 
#line 495 "../../src/expand.c"
break ; 
} } 
#line 497 "../../src/expand.c"
_auto_stail -> _stmt_s_list = ( struct stmt * ) _auto_this -> _fct_body ; 

#line 498 "../../src/expand.c"
_auto_ss = ( struct stmt * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( ( 
#line 498 "../../src/expand.c"
_auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( struct 
#line 498 "../../src/expand.c"
stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , curloc , ( ( struct stmt * ) _auto_st ) 
#line 498 "../../src/expand.c"
) ) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct name * ) 0 
#line 498 "../../src/expand.c"
) ) , _auto__Xthis__ctor_block ) ) ) ; 
} } else 
#line 500 "../../src/expand.c"
{ 
#line 500 "../../src/expand.c"
_auto_ss = ( struct stmt * ) _auto_this -> _fct_body ; 
} 
#line 503 "../../src/expand.c"
_auto_ic -> _expr__O4.__C4_e2 = ( ( ( struct expr * ) ( _auto_ss ) ) ) ; 
#line 503 "../../src/expand.c"
} 
#line 506 "../../src/expand.c"
_auto_this -> _fct_f_inline = 1 ; 

#line 507 "../../src/expand.c"
{ 
#line 507 "../../src/expand.c"
{ _auto__result = _auto_ic ; 

#line 507 "../../src/expand.c"
return _auto__result ; 
} } } } ; 

/* the end */
