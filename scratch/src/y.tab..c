#line 1 "../../src/y.tab.c"

/* <<cfront 10/10/85>> */
/* < ../../src/y.tab.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/size.h"

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

#line 47 "gram.y"
extern int yyparse ( ) ; 

#line 49 "gram.y"
Pbase defa_type ; 

#line 50 "gram.y"
Pbase moe_type ; 

#line 51 "gram.y"
Pexpr dummy ; 

#line 52 "gram.y"
Pexpr zero ; 

#line 54 "gram.y"
Pclass ccl ; 

#line 55 "gram.y"
int cdi = 0 ; 

#line 56 "gram.y"
static Pname cd = 0 ; 

#line 56 "gram.y"
static Pname cd_vec [ 50] ; 

#line 57 "gram.y"
static char stmt_seen = 0 ; 

#line 57 "gram.y"
static char stmt_vec [ 50] ; 

#line 58 "gram.y"
Plist modified_tn = 0 ; 

#line 59 "gram.y"
static Plist tn_vec [ 50] ; 

#line 61 "gram.y"
Pname sta_name = ( ( struct name * ) ( & sta_name ) ) ; 

#line 63 "gram.y"
extern TOK back ; 

#line 64 "gram.y"
TOK back ; 

#line 169 "gram.y"
extern Pname syn ( ) 
#line 170 "gram.y"
{ 
#line 170 "gram.y"
Pname _auto__result ; 

#line 171 "gram.y"
{ 
#line 171 "gram.y"
{ _auto__result = ( ( ( struct name * ) ( yyparse ( ) ) ) 
#line 171 "gram.y"
) ; 

#line 171 "gram.y"
return _auto__result ; 
} } } ; 

#line 176 "gram.y"
union _C10 { /* sizeof = 4 */
char * __C10_s ; 
TOK __C10_t ; 
int __C10_i ; 
struct loc __C10_l ; 
Pname __C10_pn ; 
Ptype __C10_pt ; 
Pexpr __C10_pe ; 
Pstmt __C10_ps ; 
Pbase __C10_pb ; 
PP __C10_p ; 
} ; 
typedef union _C10 YYSTYPE ; 

#line 192 "gram.y"
extern union _C10 yylval ; 

#line 262 "gram.y"
extern int yychar ; 

#line 263 "gram.y"
extern int yyerrflag ; 

#line 267 "gram.y"
union _C10 yylval ; 

#line 267 "gram.y"
union _C10 yyval ; 
typedef int yytabelem ; 

#line 1258 "gram.y"
yytabelem yyexca [ 144] = { - 1 , 1 , 0 , - 1 , - 2 , 0 
#line 1258 "gram.y"
, - 1 , 30 , 71 , 20 , 72 , 20 , - 2 , 19 , - 1 , 43 , 
#line 1258 "gram.y"
155 , 231 , - 2 , 178 , - 1 , 49 , 155 , 231 , - 2 , 178 , - 
#line 1258 "gram.y"
1 , 221 , 1 , 126 , 3 , 126 , 4 , 126 , 7 , 126 , 8 , 126 , 9 , 126 , 
#line 1258 "gram.y"
10 , 126 , 13 , 126 , 16 , 126 , 19 , 126 , 20 , 126 , 23 , 126 , 24 , 126 , 
#line 1258 "gram.y"
28 , 126 , 30 , 126 , 33 , 126 , 34 , 126 , 39 , 126 , 40 , 126 , 46 , 126 , 
#line 1258 "gram.y"
47 , 126 , 50 , 126 , 52 , 126 , 54 , 126 , 55 , 126 , 64 , 126 , 65 , 126 , 
#line 1258 "gram.y"
66 , 126 , 67 , 126 , 68 , 126 , 70 , 126 , 71 , 126 , 72 , 126 , 73 , 126 , 
#line 1258 "gram.y"
113 , 126 , 80 , 126 , 81 , 126 , 82 , 126 , 83 , 126 , 84 , 126 , 86 , 126 , 
#line 1258 "gram.y"
90 , 126 , 91 , 126 , 92 , 126 , 93 , 126 , 94 , 126 , 95 , 126 , 97 , 126 , 
#line 1258 "gram.y"
123 , 126 , 156 , 126 , 160 , 126 , - 2 , 0 , - 1 , 249 , 72 , 
#line 1258 "gram.y"
51 , - 2 , 100 , - 1 , 250 , 72 , 50 , - 2 , 64 } ; 

#line 1334 "gram.y"
yytabelem yyact [ 1502] = { 351 , 44 , 372 , 338 , 42 , 341 , 5 , 137 , 342 , 6 , 
#line 1334 "gram.y"
16 , 104 , 133 , 223 , 290 , 50 , 298 , 164 , 48 , 60 , 287 , 233 , 61 , 201 , 
#line 1334 "gram.y"
204 , 118 , 136 , 163 , 49 , 199 , 45 , 10 , 200 , 46 , 343 , 89 , 50 , 217 , 
#line 1334 "gram.y"
14 , 48 , 102 , 91 , 377 , 92 , 139 , 23 , 144 , 129 , 318 , 59 , 139 , 153 , 
#line 1334 "gram.y"
296 , 227 , 334 , 54 , 256 , 23 , 50 , 94 , 50 , 48 , 145 , 48 , 38 , 20 , 
#line 1334 "gram.y"
92 , 289 , 22 , 87 , 95 , 21 , 86 , 131 , 285 , 141 , 35 , 388 , 224 , 96 , 
#line 1334 "gram.y"
22 , 141 , 36 , 229 , 90 , 381 , 93 , 165 , 357 , 178 , 146 , 92 , 307 , 176 , 
#line 1334 "gram.y"
177 , 158 , 155 , 364 , 159 , 139 , 162 , 250 , 174 , 129 , 379 , 317 , 171 , 221 , 
#line 1334 "gram.y"
92 , 93 , 127 , 300 , 128 , 53 , 178 , 191 , 166 , 406 , 225 , 127 , 216 , 206 , 
#line 1334 "gram.y"
207 , 208 , 209 , 210 , 211 , 212 , 213 , 131 , 92 , 27 , 184 , 217 , 93 , 27 , 
#line 1334 "gram.y"
230 , 27 , 168 , 203 , 205 , 139 , 167 , 370 , 249 , 17 , 23 , 218 , 47 , 200 , 
#line 1334 "gram.y"
219 , 93 , 240 , 231 , 255 , 239 , 52 , 184 , 292 , 215 , 99 , 100 , 18 , 220 , 
#line 1334 "gram.y"
172 , 313 , 126 , 228 , 24 , 22 , 25 , 257 , 24 , 93 , 25 , 126 , 259 , 260 , 
#line 1334 "gram.y"
261 , 262 , 263 , 264 , 265 , 266 , 267 , 268 , 269 , 270 , 271 , 272 , 273 , 274 , 
#line 1334 "gram.y"
244 , 275 , 254 , 276 , 139 , 35 , 299 , 139 , 139 , 54 , 15 , 36 , 248 , 258 , 
#line 1334 "gram.y"
242 , 35 , 277 , 281 , 170 , 282 , 283 , 36 , 27 , 33 , 247 , 246 , 279 , 19 , 
#line 1334 "gram.y"
236 , 19 , 278 , 280 , 45 , 139 , 286 , 27 , 23 , 154 , 24 , 139 , 25 , 252 , 
#line 1334 "gram.y"
203 , 308 , 316 , 301 , 306 , 293 , 252 , 232 , 284 , 251 , 253 , 13 , 205 , 132 , 
#line 1334 "gram.y"
51 , 27 , 158 , 22 , 309 , 159 , 315 , 162 , 305 , 310 , 311 , 295 , 234 , 141 , 
#line 1334 "gram.y"
245 , 43 , 24 , 45 , 25 , 149 , 152 , 35 , 314 , 35 , 101 , 141 , 28 , 36 , 
#line 1334 "gram.y"
202 , 36 , 28 , 304 , 28 , 312 , 148 , 27 , 147 , 51 , 45 , 235 , 24 , 328 , 
#line 1334 "gram.y"
25 , 241 , 331 , 45 , 43 , 40 , 45 , 43 , 19 , 45 , 154 , 330 , 398 , 139 , 
#line 1334 "gram.y"
383 , 325 , 332 , 333 , 326 , 329 , 139 , 33 , 308 , 308 , 358 , 360 , 335 , 362 , 
#line 1334 "gram.y"
158 , 336 , 365 , 159 , 361 , 162 , 132 , 359 , 292 , 98 , 43 , 150 , 45 , 328 , 
#line 1334 "gram.y"
366 , 19 , 331 , 331 , 24 , 232 , 25 , 130 , 195 , 368 , 194 , 327 , 196 , 197 , 
#line 1334 "gram.y"
330 , 324 , 374 , 288 , 376 , 291 , 367 , 45 , 323 , 380 , 322 , 28 , 303 , 132 , 
#line 1334 "gram.y"
363 , 45 , 238 , 226 , 169 , 385 , 151 , 19 , 384 , 387 , 28 , 373 , 386 , 375 , 
#line 1334 "gram.y"
390 , 371 , 389 , 302 , 391 , 395 , 393 , 235 , 235 , 198 , 29 , 405 , 397 , 41 , 
#line 1334 "gram.y"
399 , 160 , 7 , 396 , 28 , 132 , 378 , 193 , 401 , 394 , 402 , 392 , 404 , 382 , 
#line 1334 "gram.y"
408 , 407 , 161 , 8 , 178 , 409 , 410 , 297 , 176 , 177 , 412 , 340 , 134 , 352 , 
#line 1334 "gram.y"
349 , 414 , 97 , 353 , 350 , 103 , 356 , 138 , 83 , 27 , 28 , 135 , 346 , 339 , 
#line 1334 "gram.y"
337 , 355 , 344 , 31 , 288 , 107 , 127 , 291 , 291 , 157 , 354 , 88 , 116 , 27 , 
#line 1334 "gram.y"
26 , 347 , 125 , 185 , 183 , 184 , 182 , 345 , 119 , 12 , 23 , 1 , 222 , 2 , 
#line 1334 "gram.y"
113 , 114 , 0 , 0 , 109 , 0 , 110 , 0 , 112 , 111 , 
#line 1334 "gram.y"
0 , 0 , 18 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 22 , 0 , 0 , 24 , 0 , 25 , 0 , 
#line 1334 "gram.y"
0 , 221 , 369 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
348 , 123 , 121 , 122 , 124 , 11 , 120 , 39 , 0 , 0 , 32 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 115 , 30 , 142 , 37 , 340 , 0 , 
#line 1334 "gram.y"
352 , 349 , 55 , 57 , 353 , 350 , 103 , 356 , 0 , 0 , 27 , 0 
#line 1334 "gram.y"
, 108 , 346 , 33 , 0 , 355 , 344 , 0 , 178 , 107 , 127 , 143 , 
#line 1334 "gram.y"
176 , 177 , 354 , 0 , 116 , 178 , 27 , 347 , 125 , 176 , 177 , 0 , 
#line 1334 "gram.y"
0 , 345 , 119 , 0 , 0 , 34 , 23 , 0 , 113 , 114 , 
#line 1334 "gram.y"
0 , 0 , 109 , 0 , 110 , 0 , 112 , 111 , 0 , 
#line 1334 "gram.y"
0 , 28 , 236 , 18 , 0 , 117 , 185 , 0 , 184 , 182 , 22 , 
#line 1334 "gram.y"
0 , 24 , 24 , 25 , 25 , 221 , 184 , 182 , 28 , 0 , 0 , 
#line 1334 "gram.y"
0 , 348 , 123 , 121 , 122 , 124 , 0 , 120 , 173 , 0 , 39 , 
#line 1334 "gram.y"
103 , 0 , 0 , 0 , 27 , 115 , 0 , 142 , 0 , 
#line 1334 "gram.y"
234 , 37 , 0 , 0 , 0 , 107 , 127 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 116 , 0 , 108 , 0 , 125 , 33 , 
#line 1334 "gram.y"
0 , 0 , 173 , 0 , 119 , 0 , 143 , 23 , 23 , 0 
#line 1334 "gram.y"
, 113 , 114 , 0 , 0 , 109 , 0 , 110 , 0 , 112 , 
#line 1334 "gram.y"
111 , 0 , 0 , 0 , 18 , 18 , 232 , 58 , 0 , 0 
#line 1334 "gram.y"
, 0 , 22 , 22 , 0 , 24 , 24 , 25 , 25 , 140 , 0 , 
#line 1334 "gram.y"
28 , 0 , 0 , 0 , 117 , 126 , 123 , 121 , 122 , 124 , 0 
#line 1334 "gram.y"
, 120 , 0 , 0 , 0 , 103 , 0 , 0 , 0 
#line 1334 "gram.y"
, 28 , 115 , 0 , 142 , 0 , 15 , 15 , 0 , 0 , 
#line 1334 "gram.y"
0 , 107 , 127 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
116 , 0 , 108 , 0 , 125 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 119 , 0 , 143 , 0 , 0 , 0 , 113 , 
#line 1334 "gram.y"
114 , 0 , 0 , 109 , 0 , 110 , 0 , 112 , 111 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 0 , 58 , 56 , 0 , 0 
#line 1334 "gram.y"
, 178 , 0 , 179 , 0 , 176 , 177 , 0 , 0 , 140 , 
#line 1334 "gram.y"
0 , 28 , 0 , 0 , 0 , 117 , 126 , 123 , 121 , 122 , 
#line 1334 "gram.y"
124 , 0 , 120 , 0 , 0 , 0 , 103 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 115 , 0 , 105 , 0 , 0 , 0 
#line 1334 "gram.y"
, 4 , 9 , 0 , 107 , 127 , 185 , 183 , 184 , 182 , 0 , 116 , 
#line 1334 "gram.y"
0 , 108 , 27 , 125 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 119 , 0 , 106 , 0 , 23 , 0 , 113 , 114 , 0 , 
#line 1334 "gram.y"
0 , 109 , 0 , 110 , 0 , 112 , 111 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 18 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 22 , 0 , 0 , 24 , 0 , 25 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 0 , 117 , 126 , 123 , 121 , 
#line 1334 "gram.y"
122 , 124 , 0 , 120 , 107 , 127 , 0 , 0 , 0 , 3 , 
#line 1334 "gram.y"
0 , 116 , 115 , 0 , 105 , 125 , 0 , 15 , 0 , 0 
#line 1334 "gram.y"
, 0 , 119 , 0 , 192 , 0 , 0 , 0 , 113 , 
#line 1334 "gram.y"
114 , 0 , 108 , 109 , 0 , 110 , 19 , 112 , 111 , 0 , 0 
#line 1334 "gram.y"
, 178 , 106 , 179 , 0 , 176 , 177 , 178 , 0 , 179 , 0 , 
#line 1334 "gram.y"
176 , 177 , 0 , 0 , 181 , 180 , 186 , 187 , 190 , 0 , 181 , 
#line 1334 "gram.y"
13 , 126 , 123 , 121 , 122 , 124 , 0 , 120 , 107 , 127 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 116 , 115 , 117 , 105 , 125 , 185 , 183 , 
#line 1334 "gram.y"
184 , 182 , 0 , 119 , 185 , 183 , 184 , 182 , 0 , 113 , 114 , 28 , 
#line 1334 "gram.y"
108 , 109 , 0 , 110 , 0 , 112 , 111 , 0 , 0 , 178 , 
#line 1334 "gram.y"
106 , 179 , 0 , 176 , 177 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
107 , 127 , 0 , 0 , 181 , 180 , 186 , 116 , 0 , 0 , 
#line 1334 "gram.y"
0 , 125 , 126 , 123 , 121 , 122 , 124 , 119 , 120 , 107 , 127 , 0 , 
#line 1334 "gram.y"
0 , 113 , 114 , 0 , 116 , 115 , 117 , 105 , 125 , 185 , 183 , 184 , 
#line 1334 "gram.y"
182 , 0 , 119 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
113 , 114 , 0 , 108 , 109 , 0 , 110 , 0 , 112 , 111 , 0 
#line 1334 "gram.y"
, 0 , 0 , 106 , 0 , 126 , 123 , 121 , 122 , 124 , 0 
#line 1334 "gram.y"
, 120 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 115 , 0 , 105 , 0 , 126 , 123 , 121 , 122 , 
#line 1334 "gram.y"
124 , 0 , 120 , 27 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 108 , 115 , 117 , 105 , 23 , 156 , 0 , 82 , 0 , 
#line 1334 "gram.y"
0 , 106 , 0 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 214 , 18 , 81 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 22 , 0 , 106 , 24 , 0 , 25 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 74 , 0 , 75 , 0 , 
#line 1334 "gram.y"
0 , 0 , 76 , 77 , 0 , 117 , 64 , 0 , 65 , 0 
#line 1334 "gram.y"
, 62 , 63 , 0 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 15 , 0 , 67 , 66 , 72 , 73 , 117 , 0 , 80 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
19 , 0 , 0 , 0 , 0 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 79 , 71 , 69 , 70 , 68 , 78 , 0 
#line 1334 "gram.y"
, 84 , 0 , 0 , 0 , 413 , 0 , 0 , 0 
#line 1334 "gram.y"
, 13 , 0 , 0 , 0 , 0 , 178 , 0 , 179 , 
#line 1334 "gram.y"
0 , 176 , 177 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 85 , 181 , 180 , 186 , 187 , 190 , 0 , 175 , 189 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 0 , 0 , 28 , 0 
#line 1334 "gram.y"
, 0 , 178 , 0 , 179 , 0 , 176 , 177 , 0 , 0 
#line 1334 "gram.y"
, 0 , 188 , 185 , 183 , 184 , 182 , 181 , 180 , 186 , 187 , 190 , 0 
#line 1334 "gram.y"
, 175 , 189 , 411 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 178 , 0 , 179 , 0 , 176 , 177 , 
#line 1334 "gram.y"
0 , 0 , 0 , 188 , 185 , 183 , 184 , 182 , 181 , 180 , 186 , 
#line 1334 "gram.y"
187 , 190 , 403 , 175 , 189 , 400 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 178 , 0 , 179 , 0 , 
#line 1334 "gram.y"
176 , 177 , 0 , 0 , 0 , 188 , 185 , 183 , 184 , 182 , 181 , 
#line 1334 "gram.y"
180 , 186 , 187 , 190 , 0 , 175 , 189 , 0 , 0 , 321 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 0 , 0 , 178 , 0 , 
#line 1334 "gram.y"
179 , 0 , 176 , 177 , 0 , 0 , 0 , 188 , 185 , 183 , 
#line 1334 "gram.y"
184 , 182 , 181 , 180 , 186 , 187 , 190 , 0 , 175 , 189 , 0 , 0 
#line 1334 "gram.y"
, 320 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
178 , 0 , 179 , 0 , 176 , 177 , 0 , 0 , 0 , 
#line 1334 "gram.y"
188 , 185 , 183 , 184 , 182 , 181 , 180 , 186 , 187 , 190 , 0 , 175 , 189 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 178 , 0 , 179 , 0 , 176 , 177 , 0 , 
#line 1334 "gram.y"
0 , 0 , 188 , 185 , 183 , 184 , 182 , 181 , 180 , 186 , 187 , 190 , 
#line 1334 "gram.y"
319 , 175 , 189 , 294 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 178 , 0 , 179 , 0 , 176 , 177 , 
#line 1334 "gram.y"
0 , 0 , 0 , 188 , 185 , 183 , 184 , 182 , 181 , 180 , 186 , 
#line 1334 "gram.y"
187 , 190 , 0 , 175 , 189 , 0 , 0 , 237 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 0 , 178 , 0 , 179 , 0 
#line 1334 "gram.y"
, 176 , 177 , 0 , 0 , 0 , 188 , 185 , 183 , 184 , 182 , 
#line 1334 "gram.y"
181 , 180 , 186 , 187 , 190 , 0 , 175 , 189 , 0 , 0 , 0 
#line 1334 "gram.y"
, 0 , 0 , 0 , 0 , 0 , 0 , 178 , 
#line 1334 "gram.y"
0 , 179 , 0 , 176 , 177 , 0 , 0 , 0 , 188 , 
#line 1334 "gram.y"
185 , 183 , 184 , 182 , 181 , 180 , 186 , 187 , 190 , 0 , 175 , 189 , 0 
#line 1334 "gram.y"
, 178 , 0 , 179 , 0 , 176 , 177 , 0 , 0 , 178 , 
#line 1334 "gram.y"
0 , 179 , 0 , 176 , 177 , 181 , 180 , 0 , 188 , 185 , 183 , 
#line 1334 "gram.y"
184 , 182 , 181 , 180 , 186 , 187 , 190 , 0 , 175 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1334 "gram.y"
0 , 0 , 0 , 185 , 183 , 184 , 182 , 0 , 0 , 
#line 1334 "gram.y"
0 , 188 , 185 , 183 , 184 , 182 } ; 

#line 1487 "gram.y"
yytabelem yypact [ 415] = { 773 , - 1000 , - 1000 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 1000 , - 1000 , - 1000 , 344 , 430 , 223 , - 1000 , - 12 , 
#line 1487 "gram.y"
- 1000 , 240 , 33 , 611 , 610 , - 1000 , - 1000 , - 1000 , - 74 , 
#line 1487 "gram.y"
1037 , - 25 , - 28 , - 1000 , 11 , - 14 , - 2 , 257 , 89 , 
#line 1487 "gram.y"
- 1000 , - 1000 , - 12 , - 1000 , - 1000 , 203 , - 1000 , 753 , 
#line 1487 "gram.y"
- 1000 , 270 , - 1000 , 591 , - 1000 , 753 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , 591 , - 1000 , 204 , 237 , 222 , - 1000 , 254 , - 12 , 288 , - 
#line 1487 "gram.y"
12 , - 1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 1000 , 325 , 225 , - 1000 , - 1000 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 1000 , - 1000 , 238 , - 1000 , - 1000 , - 1000 , - 1000 , 
#line 1487 "gram.y"
22 , 1019 , 7 , 43 , - 1000 , - 1000 , - 1000 , 69 , 323 , 270 , 672 , 
#line 1487 "gram.y"
530 , - 1000 , 753 , 1407 , 817 , 300 , 343 , - 11 , 236 , 201 , 881 , 881 , 
#line 1487 "gram.y"
881 , 881 , 881 , 881 , 881 , 945 , - 37 , - 1000 , 753 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 1000 , - 1000 , - 1000 , - 1000 , - 123 , 1037 , 34 , - 
#line 1487 "gram.y"
1000 , 38 , 430 , - 1000 , 322 , 12 , 65 , - 1000 , - 1000 , - 1000 , 
#line 1487 "gram.y"
1407 , 672 , 529 , 343 , - 11 , 1345 , 321 , - 1000 , - 1000 , - 1000 , 
#line 1487 "gram.y"
- 1000 , 251 , - 1000 , - 1000 , - 1000 , 238 , - 1000 , 193 , - 
#line 1487 "gram.y"
1000 , - 1000 , 145 , 144 , - 1000 , 21 , 169 , - 1000 , 174 , 7 , - 
#line 1487 "gram.y"
1000 , 31 , 99 , 34 , - 1000 , - 1000 , 257 , 1407 , 753 , 753 , 753 , 753 , 
#line 1487 "gram.y"
753 , 753 , 753 , 753 , 753 , 753 , 753 , 753 , 753 , 753 , 753 , 753 , 300 , 753 , 
#line 1487 "gram.y"
- 1000 , 753 , 672 , 95 , 86 , 672 , 672 , 50 , - 1000 , 201 , 214 , - 
#line 1487 "gram.y"
55 , 118 , 300 , 300 , 300 , 300 , 300 , 300 , 300 , 300 , 201 , - 1000 , 1314 , 
#line 1487 "gram.y"
28 , - 1000 , - 1000 , - 1000 , - 58 , 40 , - 1000 , 672 , 337 , 
#line 1487 "gram.y"
- 1000 , - 1000 , 317 , 124 , 672 , 18 , - 1000 , 182 , - 1000 , 180 , 
#line 1487 "gram.y"
180 , - 1000 , - 1000 , - 1000 , - 1000 , 201 , - 1000 , - 1000 , 
#line 1487 "gram.y"
122 , - 1000 , - 1000 , - 1000 , 93 , 237 , 222 , - 1000 , 7 , 753 , 
#line 1487 "gram.y"
162 , 32 , - 75 , - 1000 , - 1000 , 1407 , 64 , 64 , - 1000 , 356 , 
#line 1487 "gram.y"
831 , 687 , 39 , 482 , - 1000 , 491 , 1399 , 889 , 1407 , 1407 , 1283 , 1252 , 1221 , 
#line 1487 "gram.y"
315 , - 1000 , - 128 , - 1000 , - 128 , 313 , 306 , - 1000 , 1037 , 
#line 1487 "gram.y"
302 , 244 , 238 , 881 , 244 , 286 , 286 , - 68 , - 1000 , - 1000 , 1037 , 
#line 1487 "gram.y"
510 , - 1000 , 14 , 38 , 284 , 672 , - 1000 , 281 , - 1000 , - 1000 , 
#line 1487 "gram.y"
- 1000 , - 1000 , 672 , 244 , 319 , 122 , - 1000 , - 1000 , 1407 , - 
#line 1487 "gram.y"
1000 , - 1000 , 24 , 753 , 881 , - 1000 , - 1000 , - 1000 , - 1000 , 
#line 1487 "gram.y"
- 1000 , - 1000 , - 1000 , - 1000 , 244 , 300 , - 1000 , 244 , 311 , 
#line 1487 "gram.y"
926 , - 1000 , - 1000 , 412 , - 1000 , 71 , 335 , - 1000 , - 1000 , 
#line 1487 "gram.y"
- 1000 , 331 , 331 , 333 , 331 , - 27 , - 1000 , 35 , 1376 , - 1000 , 
#line 1487 "gram.y"
- 1000 , 753 , 5 , - 1000 , - 1000 , - 1000 , - 1000 , 263 , - 
#line 1487 "gram.y"
1000 , - 1000 , 251 , - 1000 , 825 , 300 , 251 , - 1000 , - 1000 , - 
#line 1487 "gram.y"
1000 , - 4 , 510 , 753 , 510 , - 1000 , 510 , - 1000 , 753 , - 1000 , 
#line 1487 "gram.y"
1376 , - 1000 , 510 , - 1000 , - 1000 , - 1000 , - 1000 , - 1000 , 
#line 1487 "gram.y"
261 , 376 , 1190 , - 1000 , 510 , - 1000 , 510 , 1159 , 510 , 346 , 45 , 510 , 
#line 1487 "gram.y"
- 1000 , 753 , - 1000 , 510 , - 1000 , 331 , - 1000 , - 1000 , 1128 , 
#line 1487 "gram.y"
- 1000 , - 1000 , 753 , 1097 , 510 , - 1000 } ; 

#line 1531 "gram.y"
yytabelem yypgo [ 59] = { 0 , 457 , 404 , 389 , 8 , 387 , 112 , 456 , 13 , 
#line 1531 "gram.y"
5 , 455 , 1 , 145 , 31 , 453 , 71 , 27 , 17 , 41 , 444 , 65 , 441 , 35 , 
#line 1531 "gram.y"
439 , 64 , 433 , 38 , 497 , 7 , 430 , 34 , 3 , 429 , 427 , 12 , 0 , 
#line 1531 "gram.y"
11 , 25 , 14 , 24 , 51 , 22 , 424 , 21 , 26 , 423 , 4 , 414 , 20 , 23 , 
#line 1531 "gram.y"
2 , 10 , 19 , 409 , 401 , 399 , 397 , 394 , 391 } ; 

#line 1539 "gram.y"
yytabelem yyr1 [ 237] = { 0 , 10 , 10 , 10 , 1 , 1 , 1 , 1 , 1 , 
#line 1539 "gram.y"
2 , 4 , 3 , 6 , 6 , 7 , 7 , 8 , 8 , 5 , 5 , 24 , 24 , 24 , 
#line 1539 "gram.y"
24 , 25 , 25 , 9 , 9 , 14 , 14 , 14 , 14 , 13 , 13 , 13 , 13 , 13 , 
#line 1539 "gram.y"
15 , 15 , 16 , 16 , 17 , 17 , 17 , 20 , 20 , 19 , 19 , 19 , 19 , 18 , 
#line 1539 "gram.y"
18 , 21 , 21 , 21 , 22 , 22 , 23 , 23 , 23 , 23 , 23 , 23 , 23 , 26 , 
#line 1539 "gram.y"
26 , 26 , 26 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 
#line 1539 "gram.y"
52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 52 , 51 , 51 , 51 , 51 , 
#line 1539 "gram.y"
27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 27 , 
#line 1539 "gram.y"
43 , 43 , 43 , 43 , 43 , 43 , 48 , 48 , 48 , 38 , 38 , 38 , 38 , 38 , 
#line 1539 "gram.y"
40 , 40 , 29 , 29 , 50 , 53 , 30 , 30 , 30 , 32 , 32 , 32 , 32 , 32 , 
#line 1539 "gram.y"
54 , 32 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 55 , 31 , 31 , 56 , 
#line 1539 "gram.y"
31 , 57 , 31 , 58 , 31 , 34 , 33 , 33 , 28 , 28 , 35 , 35 , 35 , 35 , 
#line 1539 "gram.y"
35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 
#line 1539 "gram.y"
35 , 35 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 
#line 1539 "gram.y"
36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 36 , 
#line 1539 "gram.y"
36 , 36 , 36 , 36 , 37 , 37 , 37 , 37 , 37 , 37 , 37 , 37 , 37 , 39 , 
#line 1539 "gram.y"
42 , 42 , 41 , 49 , 45 , 45 , 46 , 46 , 46 , 47 , 47 , 44 , 44 , 12 , 
#line 1539 "gram.y"
12 , 12 , 12 , 11 } ; 

#line 1565 "gram.y"
yytabelem yyr2 [ 237] = { 0 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 11 , 
#line 1565 "gram.y"
5 , 11 , 9 , 5 , 1 , 2 , 7 , 7 , 9 , 5 , 1 , 2 , 7 , 5 , 
#line 1565 "gram.y"
7 , 3 , 7 , 7 , 5 , 3 , 3 , 2 , 2 , 2 , 5 , 5 , 5 , 5 , 
#line 1565 "gram.y"
9 , 11 , 3 , 7 , 3 , 7 , 1 , 7 , 9 , 5 , 7 , 11 , 13 , 3 , 
#line 1565 "gram.y"
2 , 3 , 7 , 9 , 5 , 1 , 2 , 4 , 2 , 4 , 2 , 2 , 7 , 3 , 
#line 1565 "gram.y"
5 , 5 , 5 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 
#line 1565 "gram.y"
2 , 5 , 5 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 4 , 4 , 7 , 7 , 
#line 1565 "gram.y"
5 , 5 , 9 , 9 , 2 , 7 , 5 , 5 , 5 , 5 , 5 , 5 , 9 , 9 , 
#line 1565 "gram.y"
3 , 1 , 5 , 5 , 9 , 9 , 1 , 5 , 5 , 1 , 5 , 5 , 9 , 9 , 
#line 1565 "gram.y"
1 , 5 , 5 , 3 , 7 , 1 , 9 , 5 , 7 , 3 , 3 , 3 , 5 , 5 , 
#line 1565 "gram.y"
1 , 11 , 4 , 11 , 3 , 3 , 2 , 7 , 11 , 7 , 1 , 19 , 7 , 1 , 
#line 1565 "gram.y"
9 , 1 , 11 , 1 , 9 , 3 , 3 , 7 , 2 , 7 , 7 , 7 , 7 , 7 , 
#line 1565 "gram.y"
7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 11 , 5 , 11 , 
#line 1565 "gram.y"
2 , 1 , 9 , 9 , 5 , 9 , 5 , 9 , 5 , 5 , 5 , 5 , 5 , 5 , 
#line 1565 "gram.y"
5 , 5 , 9 , 9 , 9 , 7 , 7 , 7 , 7 , 5 , 2 , 7 , 3 , 3 , 
#line 1565 "gram.y"
3 , 3 , 3 , 3 , 3 , 7 , 7 , 5 , 9 , 9 , 5 , 9 , 9 , 5 , 
#line 1565 "gram.y"
3 , 3 , 5 , 5 , 5 , 9 , 7 , 9 , 11 , 7 , 3 , 2 , 1 , 3 , 
#line 1565 "gram.y"
3 , 5 , 5 , 7 } ; 

#line 1591 "gram.y"
yytabelem yychk [ 415] = { - 1000 , - 10 , - 1 , 72 , 0 , - 
#line 1591 "gram.y"
9 , - 4 , - 3 , - 2 , 1 , - 13 , - 27 , - 14 , 
#line 1591 "gram.y"
123 , - 26 , 80 , - 51 , - 12 , 40 , 97 , - 20 , - 15 , 
#line 1591 "gram.y"
47 , 24 , 50 , 52 , - 19 , 13 , 156 , 40 , - 27 , - 25 , 72 , 
#line 1591 "gram.y"
97 , 123 , - 20 , - 15 , 80 , - 24 , 69 , 72 , - 5 , - 
#line 1591 "gram.y"
46 , 40 , - 11 , 42 , 45 , 160 , - 46 , 40 , - 11 , 45 , 123 , 
#line 1591 "gram.y"
80 , - 26 , - 27 , 123 , - 27 , 123 , 123 , - 52 , - 41 , 
#line 1591 "gram.y"
54 , 55 , 50 , 52 , 65 , 64 , 94 , 92 , 93 , 91 , 66 , 67 , 40 , 42 , 
#line 1591 "gram.y"
46 , 47 , 95 , 90 , 70 , 23 , 9 , - 42 , 97 , 123 , 97 , 97 , - 
#line 1591 "gram.y"
21 , - 22 , 73 , - 18 , 80 , 123 , 73 , - 18 , 81 , - 5 , 
#line 1591 "gram.y"
70 , 71 , 72 , 69 , - 35 , 9 , - 36 , 97 , 123 , 23 , 113 , 50 , 
#line 1591 "gram.y"
52 , 55 , 54 , 46 , 47 , 95 , 30 , 160 , - 37 , 40 , 86 , 82 , 83 , 
#line 1591 "gram.y"
81 , 84 , 34 , 80 , 24 , - 6 , - 9 , 69 , - 13 , 123 , - 
#line 1591 "gram.y"
34 , - 47 , - 33 , - 44 , - 28 , - 45 , - 35 , 73 , 
#line 1591 "gram.y"
- 13 , 97 , 123 , - 35 , - 34 , - 26 , 80 , 45 , 45 , 41 , 
#line 1591 "gram.y"
41 , 43 , - 40 , - 12 , 74 , 25 , - 23 , - 9 , - 4 , 
#line 1591 "gram.y"
- 3 , - 2 , - 51 , - 16 , - 17 , 80 , 73 , 73 , 69 , 
#line 1591 "gram.y"
41 , - 6 , - 28 , - 24 , - 27 , - 35 , 70 , 54 , 55 , 
#line 1591 "gram.y"
50 , 52 , 65 , 64 , 94 , 92 , 93 , 91 , 66 , 67 , 90 , 71 , 68 , - 
#line 1591 "gram.y"
36 , 42 , 95 , 42 , 40 , 44 , 45 , 40 , 40 , 160 , - 49 , 40 , - 
#line 1591 "gram.y"
13 , - 39 , - 13 , - 36 , - 36 , - 36 , - 36 , - 
#line 1591 "gram.y"
36 , - 36 , - 36 , - 36 , 113 , - 18 , - 35 , 160 , - 
#line 1591 "gram.y"
52 , - 41 , - 30 , 73 , - 7 , - 8 , 40 , 80 , 41 , 41 , 
#line 1591 "gram.y"
155 , 71 , 71 , - 34 , 123 , - 43 , 80 , - 12 , 40 , 43 , 41 , 
#line 1591 "gram.y"
- 46 , - 11 , 40 , - 40 , 97 , - 22 , 69 , 72 , 72 , - 
#line 1591 "gram.y"
18 , 123 , 80 , 74 , 71 , 70 , - 16 , 123 , 25 , 72 , - 30 , - 
#line 1591 "gram.y"
35 , - 35 , - 35 , - 35 , - 35 , - 35 , - 35 , - 
#line 1591 "gram.y"
35 , - 35 , - 35 , - 35 , - 35 , - 35 , - 35 , - 
#line 1591 "gram.y"
35 , - 35 , - 35 , - 35 , - 34 , - 37 , 123 , - 37 , 
#line 1591 "gram.y"
123 , - 34 , - 34 , - 18 , 24 , - 49 , - 48 , - 12 , 
#line 1591 "gram.y"
122 , - 38 , - 12 , 40 , - 39 , 41 , - 18 , 24 , - 53 , 
#line 1591 "gram.y"
74 , 256 , 71 , - 34 , 40 , 41 , 155 , - 44 , - 28 , 74 , - 
#line 1591 "gram.y"
11 , 70 , - 43 , - 43 , - 22 , 72 , - 17 , - 35 , 74 , 
#line 1591 "gram.y"
73 , 123 , 69 , 43 , 43 , 41 , 41 , 41 , - 52 , - 41 , 41 , - 
#line 1591 "gram.y"
11 , - 48 , - 36 , - 11 , - 38 , - 38 , 122 , - 52 , 
#line 1591 "gram.y"
- 41 , - 29 , - 31 , - 32 , 1 , - 9 , - 4 , - 
#line 1591 "gram.y"
30 , 20 , 39 , 16 , 33 , 80 , 4 , 8 , - 35 , 3 , 7 , 28 , 19 , 
#line 1591 "gram.y"
10 , 74 , - 8 , 41 , - 34 , 41 , - 28 , 41 , 73 , - 35 , 
#line 1591 "gram.y"
- 36 , 41 , - 31 , 74 , 72 , 40 , - 50 , 40 , - 50 , 40 , 
#line 1591 "gram.y"
- 50 , 69 , - 57 , 69 , - 35 , 80 , - 54 , 41 , - 46 , 
#line 1591 "gram.y"
- 11 , - 46 , - 11 , 81 , - 31 , - 35 , - 31 , - 
#line 1591 "gram.y"
55 , - 31 , - 56 , - 35 , - 58 , - 31 , 41 , 12 , 41 , 
#line 1591 "gram.y"
- 31 , - 31 , 69 , - 31 , 39 , 72 , - 31 , - 35 , - 
#line 1591 "gram.y"
31 , - 50 , 72 , - 35 , 41 , - 31 } ; 

#line 1635 "gram.y"
yytabelem yydef [ 415] = { 0 , - 2 , 1 , 2 , 3 , 4 , 5 , 6 , 
#line 1635 "gram.y"
7 , 0 , 0 , 19 , 32 , 29 , 97 , 64 , 0 , 0 , 
#line 1635 "gram.y"
0 , 28 , 30 , 31 , 0 , 0 , 232 , 233 , 56 , 0 , 
#line 1635 "gram.y"
0 , 0 , - 2 , 0 , 27 , 33 , 34 , 35 , 36 , 64 , 
#line 1635 "gram.y"
24 , 178 , 9 , 13 , 93 , - 2 , 104 , 178 , 89 , 90 , 94 , - 2 , 
#line 1635 "gram.y"
103 , 0 , 100 , 64 , 99 , 101 , 102 , 0 , 0 , 65 , 66 , 
#line 1635 "gram.y"
67 , 68 , 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 0 
#line 1635 "gram.y"
, 0 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 121 , 219 , 220 , 234 , 
#line 1635 "gram.y"
235 , 0 , 52 , 43 , 0 , 50 , 51 , 46 , 0 , 0 , 
#line 1635 "gram.y"
13 , 178 , 0 , 26 , 178 , 22 , 0 , 177 , 0 , 0 , 
#line 1635 "gram.y"
0 , 0 , 0 , 0 , 0 , 0 , 0 , 
#line 1635 "gram.y"
0 , 0 , 0 , 0 , 201 , 178 , 203 , 204 , 205 , 206 , 
#line 1635 "gram.y"
207 , 208 , 209 , 0 , 0 , 18 , 0 , 0 , 29 , 0 
#line 1635 "gram.y"
, 0 , 154 , 229 , 155 , 230 , 157 , 178 , 108 , 28 , 29 , 0 , 
#line 1635 "gram.y"
0 , 98 , 64 , 91 , 92 , 0 , 80 , 81 , 221 , 121 , 44 , 56 , 
#line 1635 "gram.y"
55 , 57 , 59 , 61 , 62 , 0 , 0 , 39 , 41 , 43 , 47 , 0 
#line 1635 "gram.y"
, 0 , 0 , 23 , 25 , 20 , 21 , 178 , 178 , 178 , 178 , 178 , 
#line 1635 "gram.y"
178 , 178 , 178 , 178 , 178 , 178 , 178 , 178 , 178 , 178 , 178 , 175 , 178 , 183 , 
#line 1635 "gram.y"
178 , 178 , 0 , 0 , 178 , 178 , 0 , 181 , 0 , 113 , 
#line 1635 "gram.y"
0 , 116 , 185 , 186 , 187 , 188 , 189 , 190 , 191 , 192 , 0 , 200 , 
#line 1635 "gram.y"
0 , 0 , 212 , 215 , 11 , - 2 , 12 , 14 , 178 , 0 , 
#line 1635 "gram.y"
95 , 225 , 0 , 231 , 178 , 0 , 34 , 223 , 107 , 108 , 108 , 236 , 
#line 1635 "gram.y"
96 , 105 , 106 , 231 , 122 , 45 , 53 , 56 , 58 , 60 , 0 , - 2 , 
#line 1635 "gram.y"
- 2 , 37 , 43 , 178 , 0 , 0 , 0 , 8 , 10 , 159 , 
#line 1635 "gram.y"
160 , 161 , 162 , 163 , 164 , 165 , 166 , 167 , 168 , 169 , 170 , 171 , 172 , 173 , 
#line 1635 "gram.y"
0 , 0 , 0 , 0 , 196 , 197 , 198 , 199 , 0 , 
#line 1635 "gram.y"
0 , 210 , 0 , 0 , 222 , 113 , 0 , 218 , 116 , 116 , 
#line 1635 "gram.y"
0 , 202 , 211 , 0 , 178 , 128 , 0 , 0 , 0 , 
#line 1635 "gram.y"
178 , 226 , 0 , 228 , 156 , 158 , 110 , 178 , 109 , 0 , 54 , 63 , 
#line 1635 "gram.y"
40 , 42 , 38 , 48 , 0 , 178 , 0 , 194 , 195 , 179 , 180 , 213 , 
#line 1635 "gram.y"
216 , 182 , 115 , 114 , 184 , 118 , 117 , 0 , 193 , 214 , 217 , 178 , 124 , 
#line 1635 "gram.y"
0 , 0 , 139 , 140 , 141 , 0 , 0 , 0 , 0 
#line 1635 "gram.y"
, 209 , 150 , 0 , 130 , 131 , 132 , 178 , 0 , 135 , 129 , 15 , 
#line 1635 "gram.y"
16 , 0 , 227 , 224 , 0 , 49 , 174 , 176 , 0 , 123 , 127 , 
#line 1635 "gram.y"
137 , 0 , 178 , 178 , 178 , 145 , 178 , 148 , 178 , 152 , 133 , 134 , 178 , 
#line 1635 "gram.y"
17 , 111 , 112 , 119 , 120 , 0 , 142 , 0 , 144 , 178 , 147 , 178 , 
#line 1635 "gram.y"
0 , 178 , 0 , 0 , 178 , 125 , 178 , 149 , 178 , 153 , 0 
#line 1635 "gram.y"
, 138 , 143 , 0 , 151 , 136 , 178 , 0 , 178 , 146 } ; 

#line 1679 "gram.y"
struct _C11 { /* sizeof = 8 */
char * __C11_t_name ; 
int __C11_t_val ; 
} ; 
typedef struct _C11 yytoktype ; 

#line 2031 "gram.y"
int yydebug = 0 ; 

#line 2041 "gram.y"
union _C10 yyv [ 300] ; 

#line 2042 "gram.y"
int yys [ 300] ; 

#line 2044 "gram.y"
union _C10 * yypv = 0 ; 

#line 2045 "gram.y"
int * yyps = 0 ; 

#line 2047 "gram.y"
int yystate = 0 ; 

#line 2048 "gram.y"
int yytmp = 0 ; 

#line 2050 "gram.y"
int yynerrs = 0 ; 

#line 2051 "gram.y"
int yyerrflag = 0 ; 

#line 2052 "gram.y"
int yychar = 0 ; 

#line 2060 "gram.y"
extern int yyparse ( ) 
#line 2061 "gram.y"
{ 
#line 2061 "gram.y"
int _auto__result ; 
register union _C10 * _auto_yypvt ; 
struct slist * _auto__Xthis__ctor_slist ; 
struct block * _auto__Xthis__ctor_block ; 
struct estmt * _auto__Xthis__ctor_estmt ; 
struct lstmt * _auto__Xthis__ctor_lstmt ; 
struct ifstmt * _auto__Xthis__ctor_ifstmt ; 
struct forstmt * _auto__Xthis__ctor_forstmt ; 
struct qexpr * _auto__Xthis__ctor_qexpr ; 
struct texpr * _auto__Xthis__ctor_texpr ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 2067 "gram.y"
yypv = ( & ( yyv [ -1] ) ) ; 

#line 2068 "gram.y"
yyps = ( & ( yys [ -1] ) ) ; 

#line 2069 "gram.y"
yystate = 0 ; 

#line 2070 "gram.y"
yytmp = 0 ; 

#line 2071 "gram.y"
yynerrs = 0 ; 

#line 2072 "gram.y"
yyerrflag = 0 ; 

#line 2073 "gram.y"
yychar = -1; 

#line 2075 "gram.y"
goto yystack ; 

#line 2076 "gram.y"
{ 
#line 2076 "gram.y"
register union _C10 * _auto_yy_pv ; 
register int * _auto_yy_ps ; 
register int _auto_yy_state ; 
register int _auto_yy_n ; 

#line 2086 "gram.y"
yynewstate : _auto_yy_pv = yypv ; 

#line 2088 "gram.y"
_auto_yy_ps = yyps ; 

#line 2089 "gram.y"
_auto_yy_state = yystate ; 

#line 2090 "gram.y"
goto yy_newstate ; 

#line 2096 "gram.y"
yystack : _auto_yy_pv = yypv ; 

#line 2098 "gram.y"
_auto_yy_ps = yyps ; 

#line 2099 "gram.y"
_auto_yy_state = yystate ; 

#line 2104 "gram.y"
yy_stack : if ( ( ++ _auto_yy_ps ) >= ( & ( yys [ 300 ] ) ) 
#line 2104 "gram.y"
) 
#line 2137 "gram.y"
{ 
#line 2137 "gram.y"
yyerror ( ( char * ) "yacc stack overflow") ; 

#line 2139 "gram.y"
{ 
#line 2139 "gram.y"
{ _auto__result = 1 ; 

#line 2139 "gram.y"
return _auto__result ; 
} } } 
#line 2141 "gram.y"
( * _auto_yy_ps ) = _auto_yy_state ; 

#line 2142 "gram.y"
( * ( ++ _auto_yy_pv ) ) = yyval ; 

#line 2147 "gram.y"
yy_newstate : if ( ( _auto_yy_n = ( yypact [ _auto_yy_state ] ) ) <= -1000) goto yydefault ; 
#line 2147 "gram.y"

#line 2156 "gram.y"
if ( ( yychar < 0 ) && ( ( yychar = lalex ( ) ) < 
#line 2156 "gram.y"
0 ) ) 
#line 2157 "gram.y"
yychar = 0 ; 

#line 2180 "gram.y"
if ( ( ( _auto_yy_n += yychar ) < 0 ) || ( _auto_yy_n >= 1502 ) ) 
#line 2180 "gram.y"

#line 2181 "gram.y"
goto yydefault ; 

#line 2182 "gram.y"
if ( ( yychk [ _auto_yy_n = ( yyact [ _auto_yy_n ] ) ] ) == yychar ) { 
#line 2182 "gram.y"

#line 2183 "gram.y"

#line 2184 "gram.y"
yychar = -1; 

#line 2185 "gram.y"
yyval = yylval ; 

#line 2186 "gram.y"
_auto_yy_state = _auto_yy_n ; 

#line 2187 "gram.y"
if ( yyerrflag > 0 ) yyerrflag -- ; 

#line 2189 "gram.y"
goto yy_stack ; 
} 
#line 2192 "gram.y"
yydefault : if ( ( _auto_yy_n = ( yydef [ _auto_yy_state ] ) ) == -2) { 
#line 2192 "gram.y"

#line 2194 "gram.y"

#line 2198 "gram.y"
if ( ( yychar < 0 ) && ( ( yychar = lalex ( ) ) < 
#line 2198 "gram.y"
0 ) ) 
#line 2199 "gram.y"
yychar = 0 ; 

#line 2229 "gram.y"
{ 
#line 2229 "gram.y"
register int * _auto_yyxi ; 

#line 2230 "gram.y"
_auto_yyxi = ( int * ) yyexca ; 

#line 2232 "gram.y"
while ( ( ( * _auto_yyxi ) != -1) || ( ( _auto_yyxi [ 1 ] ) 
#line 2232 "gram.y"
!= _auto_yy_state ) ) 
#line 2234 "gram.y"
{ 
#line 2234 "gram.y"
_auto_yyxi += 2 ; 
} 
#line 2237 "gram.y"
while ( ( ( * ( _auto_yyxi += 2 ) ) >= 0 ) && 
#line 2237 "gram.y"
( ( * _auto_yyxi ) != yychar ) ) 
#line 2239 "gram.y"
; 

#line 2240 "gram.y"
if ( ( _auto_yy_n = ( _auto_yyxi [ 1 ] ) ) < 0 ) { 
#line 2241 "gram.y"
{ 
#line 2241 "gram.y"

#line 2241 "gram.y"
_auto__result = 0 ; 

#line 2241 "gram.y"
return _auto__result ; 
} } } } 
#line 2248 "gram.y"
if ( _auto_yy_n == 0 ) { 
#line 2249 "gram.y"
switch ( yyerrflag ) { 
#line 2249 "gram.y"

#line 2252 "gram.y"

#line 2253 "gram.y"
case 0 : yyerror ( ( char * ) "syntax error") ; 

#line 2255 "gram.y"
goto skip_init ; 

#line 2256 "gram.y"
yyerrlab : _auto_yy_pv = yypv ; 

#line 2262 "gram.y"
_auto_yy_ps = yyps ; 

#line 2263 "gram.y"
_auto_yy_state = yystate ; 

#line 2264 "gram.y"
yynerrs ++ ; 

#line 2265 "gram.y"
skip_init : case 1 : case 2 : yyerrflag = 3 ; 

#line 2274 "gram.y"
while ( _auto_yy_ps >= yys ) { 
#line 2275 "gram.y"
_auto_yy_n = ( ( yypact [ * _auto_yy_ps ] ) + 256 ) 
#line 2275 "gram.y"
; 

#line 2277 "gram.y"
if ( ( ( _auto_yy_n >= 0 ) && ( _auto_yy_n < 1502 ) ) && ( 
#line 2277 "gram.y"
( yychk [ yyact [ _auto_yy_n ] ] ) == 256 ) ) 
#line 2278 "gram.y"
{ 
#line 2278 "gram.y"
_auto_yy_state = ( yyact [ _auto_yy_n ] 
#line 2278 "gram.y"
) ; 

#line 2283 "gram.y"
goto yy_stack ; 
} 
#line 2296 "gram.y"
_auto_yy_ps -- ; 

#line 2297 "gram.y"
_auto_yy_pv -- ; 
} 
#line 2303 "gram.y"
{ 
#line 2303 "gram.y"
{ _auto__result = 1 ; 

#line 2303 "gram.y"
return _auto__result ; 
} } 
#line 2304 "gram.y"
case 3 : if ( yychar == 0 ) { 
#line 2340 "gram.y"
{ _auto__result = 1 ; 

#line 2340 "gram.y"
return _auto__result ; 
} } 
#line 2341 "gram.y"
yychar = -1; 

#line 2342 "gram.y"
goto yy_newstate ; 
} } 
#line 2359 "gram.y"
yytmp = _auto_yy_n ; 

#line 2360 "gram.y"
_auto_yypvt = _auto_yy_pv ; 

#line 2373 "gram.y"
{ 
#line 2373 "gram.y"
register int _auto_yy_len ; 

#line 2375 "gram.y"
_auto_yy_len = ( yyr2 [ _auto_yy_n ] ) ; 

#line 2377 "gram.y"
if ( ! ( _auto_yy_len & 01 ) ) { 
#line 2378 "gram.y"
_auto_yy_len >>= 1 ; 

#line 2380 "gram.y"
yyval = ( ( _auto_yy_pv -= _auto_yy_len ) [ 1 ] ) ; 

#line 2382 "gram.y"
_auto_yy_state = ( ( ( yypgo [ _auto_yy_n = ( yyr1 [ _auto_yy_n ] ) ] ) + ( 
#line 2382 "gram.y"
* ( _auto_yy_ps -= _auto_yy_len ) ) ) + 1 ) ; 

#line 2383 "gram.y"
if ( ( _auto_yy_state >= 1502 ) || ( ( yychk [ _auto_yy_state = ( yyact [ _auto_yy_state ] ) 
#line 2383 "gram.y"
] ) != ( - _auto_yy_n ) ) ) 
#line 2386 "gram.y"
{ 
#line 2386 "gram.y"
_auto_yy_state = ( yyact [ yypgo [ _auto_yy_n ] 
#line 2386 "gram.y"
] ) ; 
} 
#line 2389 "gram.y"
goto yy_stack ; 
} 
#line 2391 "gram.y"
_auto_yy_len >>= 1 ; 

#line 2392 "gram.y"
yyval = ( ( _auto_yy_pv -= _auto_yy_len ) [ 1 ] ) ; 

#line 2394 "gram.y"
_auto_yy_state = ( ( ( yypgo [ _auto_yy_n = ( yyr1 [ _auto_yy_n ] ) ] ) + ( 
#line 2394 "gram.y"
* ( _auto_yy_ps -= _auto_yy_len ) ) ) + 1 ) ; 

#line 2395 "gram.y"
if ( ( _auto_yy_state >= 1502 ) || ( ( yychk [ _auto_yy_state = ( yyact [ _auto_yy_state ] ) 
#line 2395 "gram.y"
] ) != ( - _auto_yy_n ) ) ) 
#line 2397 "gram.y"
{ 
#line 2397 "gram.y"
_auto_yy_state = ( yyact [ yypgo [ _auto_yy_n ] 
#line 2397 "gram.y"
] ) ; 
} } 
#line 2402 "gram.y"
yystate = _auto_yy_state ; 

#line 2403 "gram.y"
yyps = _auto_yy_ps ; 

#line 2404 "gram.y"
yypv = _auto_yy_pv ; 
} 
#line 2409 "gram.y"
switch ( yytmp ) { 
#line 2410 "gram.y"
case 1 : { 
#line 343 "gram.y"
{ 
#line 343 "gram.y"
{ _auto__result = ( _auto_yypvt [ - 
#line 343 "gram.y"
0 ] ) . __C10_i ; 

#line 343 "gram.y"
return _auto__result ; 
} } } 
#line 343 "gram.y"
break ; 

#line 344 "gram.y"
case 2 : { 
#line 345 "gram.y"
{ 
#line 345 "gram.y"
{ _auto__result = 1 ; 

#line 345 "gram.y"
return _auto__result ; 
} } } 
#line 345 "gram.y"
break ; 

#line 346 "gram.y"
case 3 : { 
#line 347 "gram.y"
{ 
#line 347 "gram.y"
{ _auto__result = 0 ; 

#line 347 "gram.y"
return _auto__result ; 
} } } 
#line 347 "gram.y"
break ; 

#line 348 "gram.y"
case 4 : { 
#line 351 "gram.y"
modified_tn = 0 ; 

#line 351 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_pn == 0 ) yyval . __C10_i = 
#line 351 "gram.y"
1 ; 
} 
#line 351 "gram.y"
break ; 

#line 352 "gram.y"
case 5 : { 
#line 353 "gram.y"
goto mod ; 
} 
#line 353 "gram.y"
break ; 

#line 354 "gram.y"
case 6 : { 
#line 355 "gram.y"
goto mod ; 
} 
#line 355 "gram.y"
break ; 

#line 356 "gram.y"
case 7 : { 
#line 357 "gram.y"
mod : if ( modified_tn ) { 
#line 357 "gram.y"
restore ( ) ; 

#line 359 "gram.y"
modified_tn = 0 ; 
} } 
#line 361 "gram.y"
break ; 

#line 362 "gram.y"
case 8 : { 
#line 363 "gram.y"
Pname _auto_n ; 

#line 363 "gram.y"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 363 "gram.y"
* ) make_name ( ( int ) 'A' ) ) ; 

#line 364 "gram.y"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _basetype__ctor ( ( struct basetype * ) 0 , 1 , 
#line 364 "gram.y"
( struct name * ) 0 ) ; 

#line 365 "gram.y"
( ( ( struct basetype * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_name = ( 
#line 365 "gram.y"
( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_s ) ) ) 
#line 365 "gram.y"
; 

#line 366 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 367 "gram.y"
break ; 

#line 368 "gram.y"
case 9 : { 
#line 371 "gram.y"
Pname _auto_n ; 

#line 371 "gram.y"
_auto_n = ( _auto_yypvt [ -1] ) . __C10_pn ; 

#line 372 "gram.y"
if ( ( _auto_n == 0 ) || ( _auto_n -> _expr__O2.__C2_tp == 0 ) ) { 
#line 372 "gram.y"

#line 372 "gram.y"

#line 373 "gram.y"
errorFPC__E ( ( char * ) "TX for%n", _auto_n ) ; 

#line 374 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) ( ( ( 
#line 374 "gram.y"
struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( 
#line 374 "gram.y"
struct basetype * ) ( ( ( struct basetype * ) ( defa_type ) ) ) , 
#line 374 "gram.y"
( struct block * ) 0 , ( int ) 0 ) ; 
} 
#line 376 "gram.y"
switch ( _auto_n -> _expr__O2.__C2_tp -> _node_base ) { 
#line 376 "gram.y"
case 108 : yyval . __C10_p = ( struct node * 
#line 376 "gram.y"
) _name_normalize ( ( struct name * ) ( ( ( struct name * ) ( _auto_n ) 
#line 376 "gram.y"
) ) , ( struct basetype * ) ( ( ( struct basetype * ) ( 
#line 376 "gram.y"
defa_type ) ) ) , ( struct block * ) ( ( ( struct block * ) 
#line 376 "gram.y"
( 0 ) ) ) , ( int ) 0 ) ; 

#line 379 "gram.y"
break ; 

#line 380 "gram.y"
default : errorFPC__E ( ( char * ) "TX for%n", _auto_n ) ; 

#line 382 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) ( ( ( 
#line 382 "gram.y"
struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( 
#line 382 "gram.y"
struct basetype * ) ( ( ( struct basetype * ) ( defa_type ) ) ) , 
#line 382 "gram.y"
( struct block * ) 0 , ( int ) 0 ) ; 
} } 
#line 384 "gram.y"
break ; 

#line 385 "gram.y"
case 10 : { 
#line 389 "gram.y"
Pname _auto_n ; 

#line 389 "gram.y"
_auto_n = _name_normalize ( ( struct name * ) ( ( ( struct name * ) ( ( 
#line 389 "gram.y"
_auto_yypvt [ -3] ) . __C10_p ) ) ) , ( struct basetype * ) ( ( 
#line 389 "gram.y"
( struct basetype * ) ( ( _auto_yypvt [ -4] ) . __C10_p ) ) ) , 
#line 389 "gram.y"
( struct block * ) ( ( ( struct block * ) ( ( _auto_yypvt [ - 
#line 389 "gram.y"
0 ] ) . __C10_p ) ) ) , ( int ) 0 ) ; 
#line 389 "gram.y"

#line 390 "gram.y"
_fct_argdcl ( ( struct fct * ) ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) 
#line 390 "gram.y"
) ) , ( struct name * ) name_unlist ( ( struct nlist * ) ( ( 
#line 390 "gram.y"
( struct nlist * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) ) 
#line 390 "gram.y"
, ( struct name * ) _auto_n ) ; 

#line 391 "gram.y"
( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _fct_f_init = ( 
#line 391 "gram.y"
_auto_yypvt [ -1] ) . __C10_pn ; 

#line 392 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 393 "gram.y"
break ; 

#line 394 "gram.y"
case 11 : { 
#line 397 "gram.y"
Pname _auto_n ; 

#line 397 "gram.y"
_auto_n = _name_normalize ( ( struct name * ) ( ( ( struct name * ) ( ( 
#line 397 "gram.y"
_auto_yypvt [ -3] ) . __C10_p ) ) ) , ( struct basetype * ) ( ( 
#line 397 "gram.y"
( struct basetype * ) ( defa_type ) ) ) , ( struct block * ) ( 
#line 397 "gram.y"
( ( struct block * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) 
#line 397 "gram.y"
) ) , ( int ) 0 ) ; 

#line 398 "gram.y"
_fct_argdcl ( ( struct fct * ) ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) 
#line 398 "gram.y"
) ) , ( struct name * ) name_unlist ( ( struct nlist * ) ( ( 
#line 398 "gram.y"
( struct nlist * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) ) 
#line 398 "gram.y"
, ( struct name * ) _auto_n ) ; 

#line 399 "gram.y"
( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> _fct_f_init = ( 
#line 399 "gram.y"
_auto_yypvt [ -1] ) . __C10_pn ; 

#line 400 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 401 "gram.y"
break ; 

#line 402 "gram.y"
case 12 : { 
#line 405 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 405 "gram.y"
break ; 

#line 406 "gram.y"
case 13 : { 
#line 407 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 407 "gram.y"
break ; 

#line 408 "gram.y"
case 15 : { 
#line 412 "gram.y"
yyval . __C10_pn = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 412 "gram.y"
yyval . __C10_pn -> _name_n_list = ( _auto_yypvt [ -2] ) . __C10_pn ; 
} 
#line 412 "gram.y"
break ; 

#line 413 "gram.y"
case 16 : { 
#line 416 "gram.y"
yyval . __C10_pn = ( struct name * ) _name__ctor ( ( struct name * ) 
#line 416 "gram.y"
0 , ( char * ) 0 ) ; 

#line 417 "gram.y"
yyval . __C10_pn -> _expr__O4.__C4_n_initializer = ( _auto_yypvt [ -1] ) . __C10_pe ; 
} 
#line 418 "gram.y"
break ; 

#line 419 "gram.y"
case 17 : { 
#line 420 "gram.y"
yyval . __C10_pn = ( _auto_yypvt [ -3] ) . __C10_pn ; 

#line 421 "gram.y"
yyval . __C10_pn -> _expr__O4.__C4_n_initializer = ( _auto_yypvt [ -1] ) . __C10_pe ; 
} 
#line 422 "gram.y"
break ; 

#line 423 "gram.y"
case 18 : { 
#line 431 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_pn == 0 
#line 431 "gram.y"
) 
#line 432 "gram.y"
errorFPC__E ( ( char * ) "badAD") ; 
else 
#line 433 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_pn -> _expr__O2.__C2_tp -> _node_base == 108 ) 
#line 433 "gram.y"

#line 434 "gram.y"
errorFPC__E ( ( char * ) "FD inAL (%n)", ( _auto_yypvt [ - 0 ] ) . __C10_pn ) 
#line 434 "gram.y"
; 
else 
#line 435 "gram.y"
if ( ( _auto_yypvt [ -1] ) . __C10_p ) _nlist_add_list ( ( struct nlist * ) 
#line 435 "gram.y"
( ( ( struct nlist * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 435 "gram.y"
) , ( struct name * ) ( ( ( struct name * ) ( ( 
#line 435 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
else 
#line 438 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * 
#line 438 "gram.y"
) 0 , ( struct name * ) ( ( ( struct name * ) ( 
#line 438 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ) ) ) 
#line 438 "gram.y"
; 
} 
#line 439 "gram.y"
break ; 

#line 440 "gram.y"
case 19 : { 
#line 441 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 441 "gram.y"
break ; 

#line 442 "gram.y"
case 21 : { 
#line 446 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ -2] ) . 
#line 446 "gram.y"
__C10_pn ; 

#line 447 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 447 "gram.y"
struct type * ) _basetype__ctor ( ( struct basetype * ) 0 , 114 , ( struct name * 
#line 447 "gram.y"
) ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) 
#line 447 "gram.y"
. __C10_pe ) ) ) ) ; 
} 
#line 448 "gram.y"
break ; 

#line 449 "gram.y"
case 22 : { 
#line 450 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 450 "gram.y"
0 , ( char * ) 0 ) ; 

#line 451 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 451 "gram.y"
struct type * ) _basetype__ctor ( ( struct basetype * ) 0 , 114 , ( struct name * 
#line 451 "gram.y"
) ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) 
#line 451 "gram.y"
. __C10_pe ) ) ) ) ; 
} 
#line 452 "gram.y"
break ; 

#line 453 "gram.y"
case 23 : { 
#line 454 "gram.y"
( _auto_yypvt [ -2] ) . __C10_pn -> _expr__O4.__C4_n_initializer = ( _auto_yypvt [ - 0 
#line 454 "gram.y"
] ) . __C10_pe ; 
} 
#line 454 "gram.y"
break ; 

#line 455 "gram.y"
case 24 : { 
#line 458 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) yyval . 
#line 458 "gram.y"
__C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * ) 0 
#line 458 "gram.y"
, ( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 458 "gram.y"
- 0 ] ) . __C10_p ) ) ) ) ) ) ) ; 
} 
#line 458 "gram.y"
break ; 

#line 459 "gram.y"
case 25 : { 
#line 460 "gram.y"
if ( ( _auto_yypvt [ -2] ) . __C10_p ) if ( ( 
#line 460 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) 
#line 462 "gram.y"
{ 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) 
#line 668 "../../src/cfront.h"
) -> _nlist_tail -> _name_n_list = ( ( struct name * ) ( ( ( struct name * 
#line 668 "../../src/cfront.h"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 668 "../../src/cfront.h"

#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( ( struct nlist * ) ( ( _auto_yypvt [ 
#line 668 "../../src/cfront.h"
-2] ) . __C10_p ) ) ) ) -> _nlist_tail = ( ( struct name * ) 
#line 668 "../../src/cfront.h"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 668 "../../src/cfront.h"
__C10_p ) ) ) ) ; 
} else 
#line 464 "gram.y"
errorFPC__E ( ( char * ) "DL syntax") ; 
else 
#line 465 "gram.y"
{ 
#line 465 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) yyval . __C10_p = 
#line 465 "gram.y"
( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * ) 0 , 
#line 465 "gram.y"
( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ - 
#line 465 "gram.y"
0 ] ) . __C10_p ) ) ) ) ) ) ) ; 

#line 467 "gram.y"
errorFPC__E ( ( char * ) "DL syntax") ; 
} } 
#line 469 "gram.y"
break ; 

#line 470 "gram.y"
case 26 : { 
#line 473 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 473 "gram.y"
( ( ( struct name * ) ( name_unlist ( ( struct nlist * ) ( ( 
#line 473 "gram.y"
( struct nlist * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) ) 
#line 473 "gram.y"
) ) ) , ( struct basetype * ) ( ( ( struct basetype * ) 
#line 473 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) , ( struct block * ) 
#line 473 "gram.y"
0 , ( int ) 0 ) ; 
} 
#line 473 "gram.y"
break ; 

#line 474 "gram.y"
case 27 : { 
#line 475 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype_aggr ( ( struct basetype * ) 
#line 475 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pb ) ; 
} 
#line 475 "gram.y"
break ; 

#line 476 "gram.y"
case 28 : { 
#line 480 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype__ctor ( ( struct basetype * ) 
#line 480 "gram.y"
0 , ( int ) ( _auto_yypvt [ - 0 ] ) . __C10_t , ( 
#line 480 "gram.y"
struct name * ) 0 ) ; 
} 
#line 480 "gram.y"
break ; 

#line 481 "gram.y"
case 29 : { 
#line 482 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype__ctor ( ( struct basetype * ) 
#line 482 "gram.y"
0 , 97 , ( struct name * ) ( _auto_yypvt [ - 0 ] ) . 
#line 482 "gram.y"
__C10_pn ) ; 
} 
#line 482 "gram.y"
break ; 

#line 483 "gram.y"
case 33 : { 
#line 489 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype_type_adj ( ( struct basetype * ) 
#line 489 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pb , ( int ) ( _auto_yypvt [ - 0 ] 
#line 489 "gram.y"
) . __C10_t ) ; 
} 
#line 489 "gram.y"
break ; 

#line 490 "gram.y"
case 34 : { 
#line 491 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype_name_adj ( ( struct basetype * ) 
#line 491 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pb , ( struct name * ) ( _auto_yypvt [ - 0 
#line 491 "gram.y"
] ) . __C10_pn ) ; 
} 
#line 491 "gram.y"
break ; 

#line 492 "gram.y"
case 35 : { 
#line 493 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype_base_adj ( ( struct basetype * ) 
#line 493 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pb , ( struct basetype * ) ( _auto_yypvt [ - 0 
#line 493 "gram.y"
] ) . __C10_pb ) ; 
} 
#line 493 "gram.y"
break ; 

#line 494 "gram.y"
case 36 : { 
#line 495 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype_base_adj ( ( struct basetype * ) 
#line 495 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pb , ( struct basetype * ) ( _auto_yypvt [ - 0 
#line 495 "gram.y"
] ) . __C10_pb ) ; 
} 
#line 495 "gram.y"
break ; 

#line 496 "gram.y"
case 37 : { 
#line 505 "gram.y"
yyval . __C10_p = ( struct node * ) end_enum ( ( struct name * ) 
#line 505 "gram.y"
0 , ( struct name * ) ( _auto_yypvt [ -1] ) . __C10_pn ) ; 
} 
#line 505 "gram.y"
break ; 

#line 506 "gram.y"
case 38 : { 
#line 507 "gram.y"
yyval . __C10_p = ( struct node * ) end_enum ( ( struct name * ) 
#line 507 "gram.y"
( _auto_yypvt [ -3] ) . __C10_pn , ( struct name * ) ( _auto_yypvt [ -1] ) 
#line 507 "gram.y"
. __C10_pn ) ; 
} 
#line 507 "gram.y"
break ; 

#line 508 "gram.y"
case 39 : { 
#line 511 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) yyval . 
#line 511 "gram.y"
__C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * ) 0 
#line 511 "gram.y"
, ( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 511 "gram.y"
- 0 ] ) . __C10_p ) ) ) ) ) ) ) ; 
} 
#line 511 "gram.y"
break ; 

#line 512 "gram.y"
case 40 : { 
#line 513 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) if 
#line 513 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) 
#line 513 "gram.y"
{ 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) 
#line 668 "../../src/cfront.h"
) -> _nlist_tail -> _name_n_list = ( ( struct name * ) ( ( ( struct name * 
#line 668 "../../src/cfront.h"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 668 "../../src/cfront.h"

#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( ( struct nlist * ) ( ( _auto_yypvt [ 
#line 668 "../../src/cfront.h"
-2] ) . __C10_p ) ) ) ) -> _nlist_tail = ( ( struct name * ) 
#line 668 "../../src/cfront.h"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 668 "../../src/cfront.h"
__C10_p ) ) ) ) ; 
} else 
#line 513 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct 
#line 513 "gram.y"
nlist * ) 0 , ( struct name * ) ( ( ( struct name * ) 
#line 513 "gram.y"
( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ) ) 
#line 513 "gram.y"
) ; 
} 
#line 513 "gram.y"
break ; 

#line 514 "gram.y"
case 41 : { 
#line 517 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ - 0 ] 
#line 517 "gram.y"
) . __C10_pn ; 

#line 517 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 517 "gram.y"
struct type * ) moe_type ; 
} 
#line 517 "gram.y"
break ; 

#line 518 "gram.y"
case 42 : { 
#line 519 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ -2] ) . 
#line 519 "gram.y"
__C10_pn ; 

#line 520 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 520 "gram.y"
struct type * ) moe_type ; 

#line 521 "gram.y"
yyval . __C10_pn -> _expr__O4.__C4_n_initializer = ( _auto_yypvt [ - 0 ] ) . __C10_pe ; 
} 
#line 522 "gram.y"
break ; 

#line 523 "gram.y"
case 43 : { 
#line 524 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 524 "gram.y"
break ; 

#line 525 "gram.y"
case 44 : { 
#line 529 "gram.y"
end_cl ( ) ; 
} 
#line 529 "gram.y"
break ; 

#line 530 "gram.y"
case 45 : { 
#line 531 "gram.y"
end_cl ( ) ; 

#line 532 "gram.y"
errorFPC__E ( ( char * ) "`;' or declaratorX afterCD") ; 

#line 533 "gram.y"
back = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 
} 
#line 535 "gram.y"
break ; 

#line 536 "gram.y"
case 46 : { 
#line 539 "gram.y"
yyval . __C10_p = ( struct node * ) start_cl ( ( int ) ( 
#line 539 "gram.y"
_auto_yypvt [ -1] ) . __C10_t , ( struct name * ) 0 , ( struct name * 
#line 539 "gram.y"
) 0 ) ; 
} 
#line 539 "gram.y"
break ; 

#line 540 "gram.y"
case 47 : { 
#line 541 "gram.y"
yyval . __C10_p = ( struct node * ) start_cl ( ( int ) ( 
#line 541 "gram.y"
_auto_yypvt [ -2] ) . __C10_t , ( struct name * ) ( _auto_yypvt [ -1] ) . 
#line 541 "gram.y"
__C10_pn , ( struct name * ) 0 ) ; 
} 
#line 541 "gram.y"
break ; 

#line 542 "gram.y"
case 48 : { 
#line 543 "gram.y"
yyval . __C10_p = ( struct node * ) start_cl ( ( int ) ( 
#line 543 "gram.y"
_auto_yypvt [ -4] ) . __C10_t , ( struct name * ) ( _auto_yypvt [ -3] ) . 
#line 543 "gram.y"
__C10_pn , ( struct name * ) ( _auto_yypvt [ -1] ) . __C10_pn ) ; 

#line 544 "gram.y"
if ( ( _auto_yypvt [ -4] ) . __C10_t == 32 ) ccl -> _classdef_pubbase = 1 ; 
} 
#line 545 "gram.y"
break ; 

#line 546 "gram.y"
case 49 : { 
#line 547 "gram.y"
yyval . __C10_p = ( struct node * ) start_cl ( ( int ) ( 
#line 547 "gram.y"
_auto_yypvt [ -5] ) . __C10_t , ( struct name * ) ( _auto_yypvt [ -4] ) . 
#line 547 "gram.y"
__C10_pn , ( struct name * ) ( _auto_yypvt [ -1] ) . __C10_pn ) ; 

#line 548 "gram.y"
ccl -> _classdef_pubbase = 1 ; 
} 
#line 549 "gram.y"
break ; 

#line 550 "gram.y"
case 50 : { 
#line 553 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ - 0 ] 
#line 553 "gram.y"
) . __C10_pn ; 
} 
#line 553 "gram.y"
break ; 

#line 554 "gram.y"
case 52 : { 
#line 558 "gram.y"
Pname _auto_n ; 

#line 558 "gram.y"
_auto_n = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( ( 
#line 558 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 

#line 559 "gram.y"
if ( ( ( ( ( ( struct classdef * ) ccl ) -> _classdef_csu == 6 ) 
#line 559 "gram.y"
? 0: ( ( ( int ) ( ( ( struct classdef * ) ccl ) 
#line 559 "gram.y"
-> _classdef_csu ) ) ) ) ) ) 
#line 560 "gram.y"
ccl -> _classdef_pubmem = _auto_n ; 
else 
#line 562 "gram.y"
ccl -> _classdef_privmem = _auto_n ; 

#line 563 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 564 "gram.y"
break ; 

#line 565 "gram.y"
case 53 : { 
#line 566 "gram.y"
errorFPC__E ( ( char * ) "``:'' missing after ``public''") ; 

#line 567 "gram.y"
ccl -> _classdef_pubmem = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( 
#line 567 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 

#line 568 "gram.y"
{ 
#line 568 "gram.y"
TOK _auto_t ; 

#line 568 "gram.y"
_auto_t = ( ( ( ( ( struct classdef * ) ccl ) -> _classdef_csu == 6 ) ? 
#line 568 "gram.y"
0: ( ( ( int ) ( ( ( struct classdef * ) ccl ) -> 
#line 568 "gram.y"
_classdef_csu ) ) ) ) ) ; 

#line 569 "gram.y"
if ( _auto_t ) errorFPC__E ( ( char * ) "public in%k", _auto_t ) ; 

#line 570 "gram.y"
ccl -> _classdef_privmem = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( 
#line 570 "gram.y"
( _auto_yypvt [ -2] ) . __C10_p ) ) ) ) ; 

#line 571 "gram.y"
yyval . __C10_p = 0 ; 
} } 
#line 572 "gram.y"
break ; 

#line 573 "gram.y"
case 54 : { 
#line 574 "gram.y"
ccl -> _classdef_pubmem = name_unlist ( ( struct nlist * ) ( ( ( struct 
#line 574 "gram.y"
nlist * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) 
#line 574 "gram.y"
; 

#line 575 "gram.y"
{ 
#line 575 "gram.y"
TOK _auto_t ; 

#line 575 "gram.y"
_auto_t = ( ( ( ( ( struct classdef * ) ccl ) -> _classdef_csu == 6 ) ? 
#line 575 "gram.y"
0: ( ( ( int ) ( ( ( struct classdef * ) ccl ) -> 
#line 575 "gram.y"
_classdef_csu ) ) ) ) ) ; 

#line 576 "gram.y"
if ( _auto_t ) errorFPC__E ( ( char * ) "public in%k", _auto_t ) ; 

#line 577 "gram.y"
ccl -> _classdef_privmem = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( 
#line 577 "gram.y"
( _auto_yypvt [ -3] ) . __C10_p ) ) ) ) ; 

#line 578 "gram.y"
yyval . __C10_p = 0 ; 
} } 
#line 579 "gram.y"
break ; 

#line 580 "gram.y"
case 55 : { 
#line 583 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) if 
#line 583 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) 
#line 583 "gram.y"
_nlist_add_list ( ( struct nlist * ) ( ( 
#line 583 "gram.y"
( struct nlist * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , 
#line 583 "gram.y"
( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ - 
#line 583 "gram.y"
0 ] ) . __C10_p ) ) ) ) ; 
else 
#line 583 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * 
#line 583 "gram.y"
) 0 , ( struct name * ) ( ( ( struct name * ) ( 
#line 583 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ) ) ) 
#line 583 "gram.y"
; 
} 
#line 583 "gram.y"
break ; 

#line 584 "gram.y"
case 56 : { 
#line 585 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 585 "gram.y"
break ; 

#line 586 "gram.y"
case 63 : { 
#line 595 "gram.y"
Pname _auto_n ; 

#line 595 "gram.y"
_auto_n = ( ( ( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) 
#line 595 "gram.y"
. __C10_p ) ) ) -> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 
#line 595 "gram.y"
, ( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) 
#line 595 "gram.y"
) ) -> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 595 "gram.y"
-1] ) . __C10_p ) ) ) ) ; 

#line 596 "gram.y"
_auto_n -> _name__O6.__C6_n_qualifier = ( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . 
#line 596 "gram.y"
__C10_p ) ) ) ; 

#line 597 "gram.y"
_auto_n -> _name_n_list = ccl -> _classdef_pubdef ; 

#line 598 "gram.y"
ccl -> _classdef_pubdef = _auto_n ; 

#line 599 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 600 "gram.y"
break ; 

#line 601 "gram.y"
case 64 : { 
#line 619 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ - 0 ] 
#line 619 "gram.y"
) . __C10_pn ; 
} 
#line 619 "gram.y"
break ; 

#line 620 "gram.y"
case 65 : { 
#line 621 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 621 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 621 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 621 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 621 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 621 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 621 "gram.y"
yyval . __C10_pn -> _name_n_oper = 162 ; 
} 
#line 621 "gram.y"
break ; 

#line 622 "gram.y"
case 66 : { 
#line 623 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 623 "gram.y"
0 , ( char * ) oper_name ( ( int ) ( _auto_yypvt [ - 0 
#line 623 "gram.y"
] ) . __C10_t ) ) ; 

#line 624 "gram.y"
yyval . __C10_pn -> _name_n_oper = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 
} 
#line 625 "gram.y"
break ; 

#line 626 "gram.y"
case 67 : { 
#line 627 "gram.y"
Pname _auto_n ; 

#line 627 "gram.y"
_auto_n = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 628 "gram.y"
_auto_n -> _expr__O3.__C3_string = "_type"; 

#line 629 "gram.y"
_auto_n -> _name_n_oper = 97 ; 

#line 630 "gram.y"
_auto_n -> _expr__O4.__C4_n_initializer = ( ( ( struct expr * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 
#line 630 "gram.y"

#line 631 "gram.y"
_auto_n -> _expr__O2.__C2_tp = 0 ; 

#line 632 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 633 "gram.y"
break ; 

#line 634 "gram.y"
case 80 : { 
#line 648 "gram.y"
yyval . __C10_t = 109 ; 
} 
#line 648 "gram.y"
break ; 

#line 649 "gram.y"
case 81 : { 
#line 649 "gram.y"
yyval . __C10_t = 111 ; 
} 
#line 649 "gram.y"
break ; 

#line 650 "gram.y"
case 87 : { 
#line 655 "gram.y"
yyval . __C10_t = 23 ; 
} 
#line 655 "gram.y"
break ; 

#line 656 "gram.y"
case 88 : { 
#line 656 "gram.y"
yyval . __C10_t = 9 ; 
} 
#line 656 "gram.y"
break ; 

#line 657 "gram.y"
case 91 : { 
#line 662 "gram.y"
errorFPC__E ( ( char * ) "CNs do not nest") ; 
} 
#line 662 "gram.y"
break ; 

#line 663 "gram.y"
case 92 : { 
#line 664 "gram.y"
errorFPC__E ( ( char * ) "CNs do not nest") ; 
} 
#line 664 "gram.y"
break ; 

#line 665 "gram.y"
case 93 : { 
#line 668 "gram.y"
( ( ( struct fct * ) ( ( _auto_yypvt [ - 0 
#line 668 "gram.y"
] ) . __C10_p ) ) ) -> _fct_returns = ( ( ( struct name * ) 
#line 668 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 669 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 669 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 669 "gram.y"
] ) . __C10_p ) ) ) ; 
} 
#line 670 "gram.y"
break ; 

#line 671 "gram.y"
case 94 : { 
#line 672 "gram.y"
Pname _auto_n ; 

#line 672 "gram.y"
_auto_n = ( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) 
#line 672 "gram.y"
) ) ; 

#line 673 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( struct name * ) 
#line 673 "gram.y"
( _auto_n ) ) ) -> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 
#line 673 "gram.y"
, ( ( ( struct name * ) ( _auto_n ) ) ) -> _expr__O3.__C3_string ) : 
#line 673 "gram.y"
( ( ( struct name * ) ( _auto_n ) ) ) ) ; 

#line 674 "gram.y"
if ( ccl && strcmp ( _auto_n -> _expr__O3.__C3_string , ccl -> _classdef_string ) ) _name_hide ( ( struct name * ) 
#line 674 "gram.y"
( ( ( struct name * ) ( _auto_n ) ) ) ) ; 

#line 675 "gram.y"
yyval . __C10_pn -> _name_n_oper = 123 ; 

#line 676 "gram.y"
( ( ( struct fct * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 676 "gram.y"
__C10_p ) ) ) -> _fct_returns = ( ( ( struct name * ) ( yyval . __C10_p ) 
#line 676 "gram.y"
) ) -> _expr__O2.__C2_tp ; 

#line 677 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 677 "gram.y"
( ( struct type * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) 
#line 677 "gram.y"
) ) ; 
} 
#line 678 "gram.y"
break ; 

#line 679 "gram.y"
case 95 : { 
#line 684 "gram.y"
TOK _auto_k ; 
Pname _auto_l ; 

#line 684 "gram.y"
_auto_k = 1 ; 

#line 685 "gram.y"
_auto_l = ( _auto_yypvt [ -1] ) . __C10_pn ; 

#line 686 "gram.y"
if ( fct_void && ( _auto_l == 0 ) ) _auto_k = 0 ; 

#line 687 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -3] ) . __C10_p ) ) 
#line 687 "gram.y"
) -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , 
#line 687 "gram.y"
( struct type * ) ( ( ( struct name * ) ( ( _auto_yypvt [ -3] 
#line 687 "gram.y"
) . __C10_p ) ) ) -> _expr__O2.__C2_tp , ( struct name * ) _auto_l , ( int 
#line 687 "gram.y"
) _auto_k ) ; 
} 
#line 688 "gram.y"
break ; 

#line 689 "gram.y"
case 96 : { 
#line 690 "gram.y"
TOK _auto_k ; 
Pname _auto_l ; 

#line 690 "gram.y"
_auto_k = 1 ; 

#line 691 "gram.y"
_auto_l = ( _auto_yypvt [ -1] ) . __C10_pn ; 

#line 692 "gram.y"
if ( fct_void && ( _auto_l == 0 ) ) _auto_k = 0 ; 

#line 693 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( struct name * ) 
#line 693 "gram.y"
( ( _auto_yypvt [ -3] ) . __C10_p ) ) ) -> _node_base == 123 ) ? _name__ctor ( 
#line 693 "gram.y"
( struct name * ) 0 , ( ( ( struct name * ) ( ( 
#line 693 "gram.y"
_auto_yypvt [ -3] ) . __C10_p ) ) ) -> _expr__O3.__C3_string ) : ( ( ( struct 
#line 693 "gram.y"
name * ) ( ( _auto_yypvt [ -3] ) . __C10_p ) ) ) ) ; 

#line 694 "gram.y"
yyval . __C10_pn -> _name_n_oper = 123 ; 

#line 695 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 695 "gram.y"
struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( struct type * ) 
#line 695 "gram.y"
0 , ( struct name * ) _auto_l , ( int ) _auto_k ) ; 
} 
#line 696 "gram.y"
break ; 

#line 697 "gram.y"
case 98 : { 
#line 699 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 699 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 699 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 699 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 699 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 699 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 700 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -2] ) . __C10_pn ; 
} 
#line 701 "gram.y"
break ; 

#line 702 "gram.y"
case 99 : { 
#line 703 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 

#line 704 "gram.y"
set_scope ( ( struct name * ) ( _auto_yypvt [ -1] ) . __C10_pn ) ; 

#line 705 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -1] ) . __C10_pn ; 
} 
#line 706 "gram.y"
break ; 

#line 707 "gram.y"
case 100 : { 
#line 708 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 708 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 708 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 708 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 708 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 708 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 709 "gram.y"
set_scope ( ( struct name * ) ( _auto_yypvt [ -1] ) . __C10_pn ) ; 

#line 710 "gram.y"
yyval . __C10_pn -> _name_n_oper = 123 ; 

#line 711 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -1] ) . __C10_pn ; 
} 
#line 712 "gram.y"
break ; 

#line 713 "gram.y"
case 101 : { 
#line 714 "gram.y"
( ( ( struct ptr * ) ( ( _auto_yypvt [ -1] ) 
#line 714 "gram.y"
. __C10_p ) ) ) -> _ptr_typ = ( ( ( struct name * ) ( ( 
#line 714 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 715 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 715 "gram.y"
__C10_p ) ) ) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ 
#line 715 "gram.y"
-1] ) . __C10_p ) ) ) ; 

#line 716 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 717 "gram.y"
break ; 

#line 718 "gram.y"
case 102 : { 
#line 719 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 719 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 719 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 719 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 719 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 719 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 720 "gram.y"
yyval . __C10_pn -> _name_n_oper = 123 ; 

#line 721 "gram.y"
_name_hide ( ( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 721 "gram.y"
- 0 ] ) . __C10_p ) ) ) ) ; 

#line 722 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 722 "gram.y"
( ( struct type * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) 
#line 722 "gram.y"
; 
} 
#line 723 "gram.y"
break ; 

#line 724 "gram.y"
case 103 : { 
#line 725 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 725 "gram.y"
struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _node_base == 
#line 725 "gram.y"
123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( struct name * 
#line 725 "gram.y"
) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O3.__C3_string ) : ( 
#line 725 "gram.y"
( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) 
#line 725 "gram.y"
) ; 

#line 726 "gram.y"
yyval . __C10_pn -> _name_n_oper = 123 ; 

#line 727 "gram.y"
_name_hide ( ( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 727 "gram.y"
-1] ) . __C10_p ) ) ) ) ; 

#line 728 "gram.y"
( ( ( struct name * ) ( yyval . __C10_p ) ) ) -> _expr__O2.__C2_tp = ( 
#line 728 "gram.y"
( ( struct type * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) 
#line 728 "gram.y"
) ) ; 
} 
#line 729 "gram.y"
break ; 

#line 730 "gram.y"
case 104 : { 
#line 731 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 731 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 731 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 732 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 732 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 732 "gram.y"
] ) . __C10_p ) ) ) ; 
} 
#line 733 "gram.y"
break ; 

#line 734 "gram.y"
case 105 : { 
#line 735 "gram.y"
( ( ( struct fct * ) ( ( _auto_yypvt [ - 0 
#line 735 "gram.y"
] ) . __C10_p ) ) ) -> _fct_returns = ( ( ( struct name * ) 
#line 735 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 736 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 736 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 736 "gram.y"
] ) . __C10_p ) ) ) ; 

#line 737 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 738 "gram.y"
break ; 

#line 739 "gram.y"
case 106 : { 
#line 740 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 740 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 740 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 741 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 741 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 741 "gram.y"
] ) . __C10_p ) ) ) ; 

#line 742 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 743 "gram.y"
break ; 

#line 744 "gram.y"
case 107 : { 
#line 747 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ - 0 ] 
#line 747 "gram.y"
) . __C10_pn ; 
} 
#line 747 "gram.y"
break ; 

#line 748 "gram.y"
case 108 : { 
#line 749 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 749 "gram.y"
0 , ( char * ) 0 ) ; 
} 
#line 749 "gram.y"
break ; 

#line 750 "gram.y"
case 109 : { 
#line 751 "gram.y"
( ( ( struct ptr * ) ( ( _auto_yypvt [ -1] ) 
#line 751 "gram.y"
. __C10_p ) ) ) -> _ptr_typ = ( ( ( struct name * ) ( ( 
#line 751 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 752 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 752 "gram.y"
__C10_p ) ) ) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ 
#line 752 "gram.y"
-1] ) . __C10_p ) ) ) ; 

#line 753 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 754 "gram.y"
break ; 

#line 755 "gram.y"
case 110 : { 
#line 756 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 756 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 756 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 757 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 757 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 757 "gram.y"
] ) . __C10_p ) ) ) ; 
} 
#line 758 "gram.y"
break ; 

#line 759 "gram.y"
case 111 : { 
#line 760 "gram.y"
( ( ( struct fct * ) ( ( _auto_yypvt [ - 0 
#line 760 "gram.y"
] ) . __C10_p ) ) ) -> _fct_returns = ( ( ( struct name * ) 
#line 760 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 761 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 761 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 761 "gram.y"
] ) . __C10_p ) ) ) ; 

#line 762 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 763 "gram.y"
break ; 

#line 764 "gram.y"
case 112 : { 
#line 765 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 765 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 765 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 766 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 766 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 766 "gram.y"
] ) . __C10_p ) ) ) ; 

#line 767 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 768 "gram.y"
break ; 

#line 769 "gram.y"
case 113 : { 
#line 772 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 772 "gram.y"
0 , ( char * ) 0 ) ; 
} 
#line 772 "gram.y"
break ; 

#line 773 "gram.y"
case 114 : { 
#line 774 "gram.y"
( ( ( struct ptr * ) ( ( _auto_yypvt [ -1] ) 
#line 774 "gram.y"
. __C10_p ) ) ) -> _ptr_typ = ( ( ( struct name * ) ( ( 
#line 774 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 775 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 775 "gram.y"
__C10_p ) ) ) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ 
#line 775 "gram.y"
-1] ) . __C10_p ) ) ) ; 

#line 776 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 777 "gram.y"
break ; 

#line 778 "gram.y"
case 115 : { 
#line 779 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 779 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 779 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 780 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 780 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 780 "gram.y"
] ) . __C10_p ) ) ) ; 
} 
#line 781 "gram.y"
break ; 

#line 782 "gram.y"
case 116 : { 
#line 785 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 785 "gram.y"
0 , ( char * ) 0 ) ; 
} 
#line 785 "gram.y"
break ; 

#line 786 "gram.y"
case 117 : { 
#line 787 "gram.y"
( ( ( struct ptr * ) ( ( _auto_yypvt [ -1] ) 
#line 787 "gram.y"
. __C10_p ) ) ) -> _ptr_typ = ( ( ( struct name * ) ( ( 
#line 787 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 788 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 788 "gram.y"
__C10_p ) ) ) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ 
#line 788 "gram.y"
-1] ) . __C10_p ) ) ) ; 

#line 789 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 790 "gram.y"
break ; 

#line 791 "gram.y"
case 118 : { 
#line 792 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 792 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 792 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 793 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) 
#line 793 "gram.y"
) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ - 0 
#line 793 "gram.y"
] ) . __C10_p ) ) ) ; 
} 
#line 794 "gram.y"
break ; 

#line 795 "gram.y"
case 119 : { 
#line 796 "gram.y"
( ( ( struct fct * ) ( ( _auto_yypvt [ - 0 
#line 796 "gram.y"
] ) . __C10_p ) ) ) -> _fct_returns = ( ( ( struct name * ) 
#line 796 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 797 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 797 "gram.y"
) -> _expr__O2.__C2_tp = ( _auto_yypvt [ - 0 ] ) . __C10_pt ; 

#line 798 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 799 "gram.y"
break ; 

#line 800 "gram.y"
case 120 : { 
#line 801 "gram.y"
( ( ( struct vec * ) ( ( _auto_yypvt [ - 0 
#line 801 "gram.y"
] ) . __C10_p ) ) ) -> _vec_typ = ( ( ( struct name * ) 
#line 801 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 802 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 802 "gram.y"
) -> _expr__O2.__C2_tp = ( _auto_yypvt [ - 0 ] ) . __C10_pt ; 

#line 803 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -2] ) . __C10_p ; 
} 
#line 804 "gram.y"
break ; 

#line 805 "gram.y"
case 121 : { 
#line 808 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 808 "gram.y"
0 , ( char * ) 0 ) ; 
} 
#line 808 "gram.y"
break ; 

#line 809 "gram.y"
case 122 : { 
#line 810 "gram.y"
( ( ( struct ptr * ) ( ( _auto_yypvt [ -1] ) 
#line 810 "gram.y"
. __C10_p ) ) ) -> _ptr_typ = ( ( ( struct name * ) ( ( 
#line 810 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 811 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 811 "gram.y"
__C10_p ) ) ) -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( ( _auto_yypvt [ 
#line 811 "gram.y"
-1] ) . __C10_p ) ) ) ; 

#line 812 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ - 0 ] ) . __C10_p ; 
} 
#line 813 "gram.y"
break ; 

#line 814 "gram.y"
case 123 : { 
#line 821 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) if 
#line 821 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) 
#line 823 "gram.y"
{ 
#line 679 "../../src/cfront.h"
( ( struct slist * ) ( 
#line 679 "../../src/cfront.h"
( ( struct slist * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) 
#line 679 "../../src/cfront.h"
) -> _slist_tail -> _stmt_s_list = ( ( struct stmt * ) ( ( ( struct stmt * 
#line 679 "../../src/cfront.h"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 679 "../../src/cfront.h"

#line 679 "../../src/cfront.h"
( ( struct slist * ) ( ( ( struct slist * ) ( ( _auto_yypvt [ 
#line 679 "../../src/cfront.h"
-1] ) . __C10_p ) ) ) ) -> _slist_tail = ( ( struct stmt * ) 
#line 679 "../../src/cfront.h"
( ( ( struct stmt * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 679 "../../src/cfront.h"
__C10_p ) ) ) ) ; 
} else 
#line 824 "gram.y"
{ 
#line 824 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( ( ( 
#line 824 "gram.y"
_auto__Xthis__ctor_slist = 0 ) , ( ( _auto__Xthis__ctor_slist = ( struct slist * ) _new ( ( long 
#line 824 "gram.y"
) 8) ) , ( ( Nl ++ ) , ( ( _auto__Xthis__ctor_slist -> _slist_head = ( 
#line 824 "gram.y"
_auto__Xthis__ctor_slist -> _slist_tail = ( ( struct stmt * ) ( ( ( struct stmt * ) ( 
#line 824 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ) ) , 
#line 824 "gram.y"
_auto__Xthis__ctor_slist ) ) ) ) ) ) ) ; 

#line 826 "gram.y"
stmt_seen = 1 ; 
} } 
#line 828 "gram.y"
break ; 

#line 829 "gram.y"
case 124 : { 
#line 830 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) { 
#line 830 "gram.y"

#line 830 "gram.y"

#line 831 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( ( ( _auto__Xthis__ctor_slist = 0 ) 
#line 831 "gram.y"
, ( ( _auto__Xthis__ctor_slist = ( struct slist * ) _new ( ( long ) 8) ) 
#line 831 "gram.y"
, ( ( Nl ++ ) , ( ( _auto__Xthis__ctor_slist -> _slist_head = ( _auto__Xthis__ctor_slist -> _slist_tail = ( 
#line 831 "gram.y"
( struct stmt * ) ( ( ( struct stmt * ) ( ( _auto_yypvt [ - 
#line 831 "gram.y"
0 ] ) . __C10_p ) ) ) ) ) ) , _auto__Xthis__ctor_slist ) ) ) 
#line 831 "gram.y"
) ) ) ) ; 

#line 832 "gram.y"
stmt_seen = 1 ; 
} } 
#line 834 "gram.y"
break ; 

#line 835 "gram.y"
case 125 : { 
#line 838 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -1] ) . __C10_p ; 

#line 839 "gram.y"
if ( yyval . __C10_pe == dummy ) errorFPC__E ( ( char * ) "empty condition") ; 

#line 840 "gram.y"
stmt_seen = 1 ; 
} 
#line 841 "gram.y"
break ; 

#line 842 "gram.y"
case 126 : { 
#line 845 "gram.y"
( cd_vec [ cdi ] ) = cd ; 

#line 846 "gram.y"
( stmt_vec [ cdi ] ) = stmt_seen ; 

#line 847 "gram.y"
( tn_vec [ cdi ++ ] ) = modified_tn ; 

#line 848 "gram.y"
cd = 0 ; 

#line 849 "gram.y"
stmt_seen = 0 ; 

#line 850 "gram.y"
modified_tn = 0 ; 
} 
#line 851 "gram.y"
break ; 

#line 852 "gram.y"
case 127 : { 
#line 853 "gram.y"
Pname _auto_n ; 
Pstmt _auto_ss ; 
struct block * _auto__Xthis__ctor_block ; 

#line 853 "gram.y"
_auto_n = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( cd ) 
#line 853 "gram.y"
) ) ) ; 

#line 854 "gram.y"
_auto_ss = stmt_unlist ( ( struct slist * ) ( ( ( struct slist * ) ( ( 
#line 854 "gram.y"
_auto_yypvt [ -1] ) . __C10_p ) ) ) ) ; 

#line 855 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( 
#line 855 "gram.y"
( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( 
#line 855 "gram.y"
struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , ( _auto_yypvt [ -3] ) . __C10_l , 
#line 855 "gram.y"
( ( struct stmt * ) _auto_ss ) ) ) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = 
#line 855 "gram.y"
( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_block ) ) ) ; 

#line 856 "gram.y"
if ( modified_tn ) restore ( ) ; 

#line 857 "gram.y"
cd = ( cd_vec [ -- cdi ] ) ; 

#line 858 "gram.y"
stmt_seen = ( stmt_vec [ cdi ] ) ; 

#line 859 "gram.y"
modified_tn = ( tn_vec [ cdi ] ) ; 

#line 860 "gram.y"
if ( cdi < 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 860 "gram.y"
"block level(%d)", cdi ) ; 
} 
#line 861 "gram.y"
break ; 

#line 862 "gram.y"
case 128 : { 
#line 863 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_block = 0 ) 
#line 863 "gram.y"
, ( ( ( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) 
#line 863 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , ( _auto_yypvt [ -1] 
#line 863 "gram.y"
) . __C10_l , ( ( struct stmt * ) 0 ) ) ) ) , 
#line 863 "gram.y"
( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct name * ) 0 ) ) , _auto__Xthis__ctor_block ) 
#line 863 "gram.y"
) ) ; 
} 
#line 863 "gram.y"
break ; 

#line 864 "gram.y"
case 129 : { 
#line 865 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_block = 0 ) 
#line 865 "gram.y"
, ( ( ( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) 
#line 865 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , ( _auto_yypvt [ -2] 
#line 865 "gram.y"
) . __C10_l , ( ( struct stmt * ) 0 ) ) ) ) , 
#line 865 "gram.y"
( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct name * ) 0 ) ) , _auto__Xthis__ctor_block ) 
#line 865 "gram.y"
) ) ; 
} 
#line 865 "gram.y"
break ; 

#line 866 "gram.y"
case 130 : { 
#line 869 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 869 "gram.y"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 869 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( 
#line 869 "gram.y"
struct stmt * ) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( 
#line 869 "gram.y"
( struct expr * ) ( _auto_yypvt [ - 0 ] ) . __C10_pe ) ) , 
#line 869 "gram.y"
_auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 869 "gram.y"
break ; 

#line 870 "gram.y"
case 131 : { 
#line 871 "gram.y"
yyval . __C10_p = ( struct node * ) _stmt__ctor ( ( struct stmt * ) 
#line 871 "gram.y"
0 , 3 , ( _auto_yypvt [ - 0 ] ) . __C10_l , ( struct stmt * 
#line 871 "gram.y"
) 0 ) ; 
} 
#line 871 "gram.y"
break ; 

#line 872 "gram.y"
case 132 : { 
#line 873 "gram.y"
yyval . __C10_p = ( struct node * ) _stmt__ctor ( ( struct stmt * ) 
#line 873 "gram.y"
0 , 7 , ( _auto_yypvt [ - 0 ] ) . __C10_l , ( struct stmt * 
#line 873 "gram.y"
) 0 ) ; 
} 
#line 873 "gram.y"
break ; 

#line 874 "gram.y"
case 133 : { 
#line 875 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 875 "gram.y"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 875 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 28 , ( _auto_yypvt [ -1] 
#line 875 "gram.y"
) . __C10_l , ( ( struct stmt * ) 0 ) ) ) ) , 
#line 875 "gram.y"
( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) ( _auto_yypvt [ - 0 ] 
#line 875 "gram.y"
) . __C10_pe ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 875 "gram.y"
break ; 

#line 876 "gram.y"
case 134 : { 
#line 877 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_lstmt = 0 ) 
#line 877 "gram.y"
, ( ( ( _auto__Xthis__ctor_lstmt = 0 ) , ( _auto__Xthis__ctor_lstmt = ( struct lstmt * ) 
#line 877 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_lstmt ) ) , 19 , ( _auto_yypvt [ -1] 
#line 877 "gram.y"
) . __C10_l , ( ( struct stmt * ) 0 ) ) ) ) , 
#line 877 "gram.y"
( ( _auto__Xthis__ctor_lstmt -> _stmt__O7.__C7_d = ( ( struct name * ) ( _auto_yypvt [ - 0 ] 
#line 877 "gram.y"
) . __C10_pn ) ) , _auto__Xthis__ctor_lstmt ) ) ) ; 
} 
#line 877 "gram.y"
break ; 

#line 878 "gram.y"
case 135 : { 
#line 878 "gram.y"
stmt_seen = 1 ; 
} 
#line 878 "gram.y"
break ; 

#line 879 "gram.y"
case 136 : { 
#line 879 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 879 "gram.y"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 879 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 10 , ( _auto_yypvt [ -4] 
#line 879 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ -2] ) . __C10_ps ) 
#line 879 "gram.y"
) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) ( 
#line 879 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 879 "gram.y"
break ; 

#line 880 "gram.y"
case 138 : { 
#line 884 "gram.y"
if ( stmt_seen ) yyval . __C10_p = ( struct node * ) ( ( 
#line 884 "gram.y"
_auto__Xthis__ctor_estmt = 0 ) , ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( 
#line 884 "gram.y"
struct estmt * ) _stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 1 , 
#line 884 "gram.y"
curloc , ( ( struct stmt * ) 0 ) ) ) ) , ( ( 
#line 884 "gram.y"
_auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) ( ( ( struct expr * ) ( 
#line 884 "gram.y"
( _auto_yypvt [ -2] ) . __C10_s ) ) ) ) ) , _auto__Xthis__ctor_estmt ) ) ) 
#line 884 "gram.y"
; 
else 
#line 887 "gram.y"
{ 
#line 887 "gram.y"
Pname _auto_n ; 

#line 888 "gram.y"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 888 "gram.y"
* ) make_name ( ( int ) 'A' ) ) ; 

#line 889 "gram.y"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _basetype__ctor ( ( struct basetype * ) 0 , 1 , 
#line 889 "gram.y"
( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ -2] 
#line 889 "gram.y"
) . __C10_s ) ) ) ) ; 

#line 890 "gram.y"
if ( cd ) _nlist_add_list ( ( struct nlist * ) ( ( ( struct nlist * ) 
#line 890 "gram.y"
( cd ) ) ) , ( struct name * ) ( ( ( struct name * 
#line 890 "gram.y"
) ( _auto_n ) ) ) ) ; 
else 
#line 890 "gram.y"
cd = ( ( ( struct name * ) ( ( ( struct node * ) 
#line 890 "gram.y"
( _nlist__ctor ( ( struct nlist * ) 0 , ( struct name * ) ( ( 
#line 890 "gram.y"
( struct name * ) ( _auto_n ) ) ) ) ) ) ) ) ) 
#line 890 "gram.y"
; 

#line 891 "gram.y"
yyval . __C10_p = 0 ; 
} } 
#line 893 "gram.y"
break ; 

#line 894 "gram.y"
case 139 : { 
#line 897 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_pn ) if 
#line 897 "gram.y"
( stmt_seen ) 
#line 899 "gram.y"
{ 
#line 899 "gram.y"
Pname _auto_n ; 
struct block * _auto__Xthis__ctor_block ; 

#line 900 "gram.y"
_auto_n = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 901 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( 
#line 901 "gram.y"
( _auto__Xthis__ctor_block = 0 ) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( 
#line 901 "gram.y"
struct stmt * ) ( _auto__Xthis__ctor_block ) ) , 116 , _auto_n -> _name_where , ( ( struct stmt * 
#line 901 "gram.y"
) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct 
#line 901 "gram.y"
name * ) _auto_n ) ) , _auto__Xthis__ctor_block ) ) ) ; 

#line 902 "gram.y"
yyval . __C10_ps -> _node_base = 118 ; 
} else 
#line 904 "gram.y"
{ 
#line 904 "gram.y"
if ( cd ) _nlist_add_list ( ( struct nlist * ) ( ( ( 
#line 904 "gram.y"
struct nlist * ) ( cd ) ) ) , ( struct name * ) ( ( 
#line 904 "gram.y"
( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) 
#line 904 "gram.y"
) ) ; 
else 
#line 905 "gram.y"
cd = ( ( ( struct name * ) ( ( ( struct node * ) 
#line 905 "gram.y"
( _nlist__ctor ( ( struct nlist * ) 0 , ( struct name * ) ( ( 
#line 905 "gram.y"
( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) 
#line 905 "gram.y"
) ) ) ) ) ) ) ; 

#line 906 "gram.y"
yyval . __C10_p = 0 ; 
} } 
#line 908 "gram.y"
break ; 

#line 909 "gram.y"
case 140 : { 
#line 910 "gram.y"
Pname _auto_n ; 

#line 910 "gram.y"
_auto_n = ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) 
#line 910 "gram.y"
. __C10_p ) ) ) ; 

#line 911 "gram.y"
back = 74 ; 

#line 912 "gram.y"
errorFPCloc__PC__E ( ( struct loc * ) ( & _auto_n -> _name_where ) , ( char * ) 
#line 912 "gram.y"
"%n's definition is nested (did you forget a ``}''?)", _auto_n ) ; 

#line 913 "gram.y"
if ( cd ) _nlist_add_list ( ( struct nlist * ) ( ( ( struct nlist * ) 
#line 913 "gram.y"
( cd ) ) ) , ( struct name * ) ( ( ( struct name * 
#line 913 "gram.y"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 913 "gram.y"
else 
#line 913 "gram.y"
cd = ( ( ( struct name * ) ( ( ( struct node * ) 
#line 913 "gram.y"
( _nlist__ctor ( ( struct nlist * ) 0 , ( struct name * ) ( ( 
#line 913 "gram.y"
( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) 
#line 913 "gram.y"
) ) ) ) ) ) ) ; 

#line 914 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 915 "gram.y"
break ; 

#line 916 "gram.y"
case 142 : { 
#line 918 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ifstmt = 0 ) 
#line 918 "gram.y"
, ( ( ( _auto__Xthis__ctor_ifstmt = 0 ) , ( _auto__Xthis__ctor_ifstmt = ( struct ifstmt * ) 
#line 918 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_ifstmt ) ) , 20 , ( _auto_yypvt [ -2] 
#line 918 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ - 0 ] ) 
#line 918 "gram.y"
. __C10_ps ) ) ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 918 "gram.y"
) ( _auto_yypvt [ -1] ) . __C10_pe ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O9.__C9_else_stmt = ( 
#line 918 "gram.y"
( struct stmt * ) 0 ) ) , _auto__Xthis__ctor_ifstmt ) ) ) ) ; 
} 
#line 918 "gram.y"
break ; 

#line 919 "gram.y"
case 143 : { 
#line 920 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ifstmt = 0 ) 
#line 920 "gram.y"
, ( ( ( _auto__Xthis__ctor_ifstmt = 0 ) , ( _auto__Xthis__ctor_ifstmt = ( struct ifstmt * ) 
#line 920 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_ifstmt ) ) , 20 , ( _auto_yypvt [ -4] 
#line 920 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ -2] ) . __C10_ps ) 
#line 920 "gram.y"
) ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O8.__C8_e = ( ( struct expr * ) ( 
#line 920 "gram.y"
_auto_yypvt [ -3] ) . __C10_pe ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O9.__C9_else_stmt = ( ( struct 
#line 920 "gram.y"
stmt * ) ( _auto_yypvt [ - 0 ] ) . __C10_ps ) ) , _auto__Xthis__ctor_ifstmt ) ) 
#line 920 "gram.y"
) ) ; 
} 
#line 920 "gram.y"
break ; 

#line 921 "gram.y"
case 144 : { 
#line 922 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 922 "gram.y"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 922 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 39 , ( _auto_yypvt [ -2] 
#line 922 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ - 0 ] ) 
#line 922 "gram.y"
. __C10_ps ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 922 "gram.y"
) ( _auto_yypvt [ -1] ) . __C10_pe ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 922 "gram.y"
break ; 

#line 923 "gram.y"
case 145 : { 
#line 923 "gram.y"
stmt_seen = 1 ; 
} 
#line 923 "gram.y"
break ; 

#line 924 "gram.y"
case 146 : { 
#line 924 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_forstmt = 0 ) 
#line 924 "gram.y"
, ( ( ( _auto__Xthis__ctor_forstmt = 0 ) , ( _auto__Xthis__ctor_forstmt = ( struct forstmt * ) 
#line 924 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_forstmt ) ) , 16 , ( _auto_yypvt [ -8] 
#line 924 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ - 0 ] ) 
#line 924 "gram.y"
. __C10_ps ) ) ) ) , ( ( _auto__Xthis__ctor_forstmt -> _stmt__O9.__C9_for_init = ( ( struct stmt * 
#line 924 "gram.y"
) ( _auto_yypvt [ -5] ) . __C10_ps ) ) , ( ( _auto__Xthis__ctor_forstmt -> _stmt__O8.__C8_e = ( 
#line 924 "gram.y"
( struct expr * ) ( _auto_yypvt [ -4] ) . __C10_pe ) ) , ( ( 
#line 924 "gram.y"
_auto__Xthis__ctor_forstmt -> _stmt__O7.__C7_e2 = ( ( struct expr * ) ( _auto_yypvt [ -2] ) . __C10_pe ) ) 
#line 924 "gram.y"
, _auto__Xthis__ctor_forstmt ) ) ) ) ) ; 
} 
#line 924 "gram.y"
break ; 

#line 925 "gram.y"
case 147 : { 
#line 926 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 926 "gram.y"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 926 "gram.y"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 33 , ( _auto_yypvt [ -2] 
#line 926 "gram.y"
) . __C10_l , ( ( struct stmt * ) ( _auto_yypvt [ - 0 ] ) 
#line 926 "gram.y"
. __C10_ps ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 926 "gram.y"
) ( _auto_yypvt [ -1] ) . __C10_pe ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 926 "gram.y"
break ; 

#line 927 "gram.y"
case 148 : { 
#line 927 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ -1] ) . 
#line 927 "gram.y"
__C10_pn ; 

#line 927 "gram.y"
stmt_seen = 1 ; 
} 
#line 927 "gram.y"
break ; 

#line 928 "gram.y"
case 149 : { 
#line 928 "gram.y"
Pname _auto_n ; 
struct lstmt * _auto__Xthis__ctor_lstmt ; 

#line 928 "gram.y"
_auto_n = ( _auto_yypvt [ -1] ) . __C10_pn ; 

#line 929 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_lstmt = 0 ) , ( ( 
#line 929 "gram.y"
( _auto__Xthis__ctor_lstmt = 0 ) , ( _auto__Xthis__ctor_lstmt = ( struct lstmt * ) _stmt__ctor ( ( ( 
#line 929 "gram.y"
struct stmt * ) ( _auto__Xthis__ctor_lstmt ) ) , 115 , _auto_n -> _name_where , ( ( struct stmt * 
#line 929 "gram.y"
) ( _auto_yypvt [ - 0 ] ) . __C10_ps ) ) ) ) , ( 
#line 929 "gram.y"
( _auto__Xthis__ctor_lstmt -> _stmt__O7.__C7_d = ( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_lstmt ) ) ) 
#line 929 "gram.y"
; 
} 
#line 930 "gram.y"
break ; 

#line 931 "gram.y"
case 150 : { 
#line 931 "gram.y"
stmt_seen = 1 ; 
} 
#line 931 "gram.y"
break ; 

#line 932 "gram.y"
case 151 : { 
#line 932 "gram.y"
if ( ( _auto_yypvt [ -2] ) . __C10_pe == dummy ) errorFPC__E ( ( 
#line 932 "gram.y"
char * ) "empty case label") ; 

#line 933 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( 
#line 933 "gram.y"
( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( 
#line 933 "gram.y"
struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 4 , ( _auto_yypvt [ -4] ) . __C10_l , 
#line 933 "gram.y"
( ( struct stmt * ) ( _auto_yypvt [ - 0 ] ) . __C10_ps ) ) 
#line 933 "gram.y"
) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) ( _auto_yypvt [ 
#line 933 "gram.y"
-2] ) . __C10_pe ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} 
#line 934 "gram.y"
break ; 

#line 935 "gram.y"
case 152 : { 
#line 935 "gram.y"
stmt_seen = 1 ; 
} 
#line 935 "gram.y"
break ; 

#line 936 "gram.y"
case 153 : { 
#line 936 "gram.y"
yyval . __C10_p = ( struct node * ) _stmt__ctor ( ( struct stmt * ) 
#line 936 "gram.y"
0 , 8 , ( _auto_yypvt [ -3] ) . __C10_l , ( struct stmt * ) ( 
#line 936 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_ps ) ; 
} 
#line 936 "gram.y"
break ; 

#line 937 "gram.y"
case 154 : { 
#line 945 "gram.y"
Pexpr _auto_e ; 

#line 945 "gram.y"
_auto_e = expr_unlist ( ( struct elist * ) ( ( ( struct elist * ) ( ( 
#line 945 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 

#line 946 "gram.y"
while ( _auto_e && ( _auto_e -> _expr__O3.__C3_e1 == dummy ) ) { 
#line 946 "gram.y"
if ( _auto_e -> _expr__O4.__C4_e2 ) errorFPC__E ( 
#line 946 "gram.y"
( char * ) "EX inEL") ; 

#line 948 "gram.y"
_expr__dtor ( ( struct expr * ) _auto_e , 1) ; 

#line 949 "gram.y"
_auto_e = _auto_e -> _expr__O4.__C4_e2 ; 
} 
#line 951 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_e ; 
} 
#line 952 "gram.y"
break ; 

#line 953 "gram.y"
case 155 : { 
#line 955 "gram.y"
Pexpr _auto_e ; 
struct elist * _auto__Xthis__ctor_elist ; 

#line 955 "gram.y"
_auto_e = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 955 "gram.y"
struct expr * ) ( _auto_yypvt [ - 0 ] ) . __C10_pe , ( struct expr * 
#line 955 "gram.y"
) 0 ) ; 

#line 956 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( ( ( _auto__Xthis__ctor_elist = 0 ) 
#line 956 "gram.y"
, ( ( _auto__Xthis__ctor_elist = ( struct elist * ) _new ( ( long ) 8) ) 
#line 956 "gram.y"
, ( ( Nl ++ ) , ( ( _auto__Xthis__ctor_elist -> _elist_head = ( _auto__Xthis__ctor_elist -> _elist_tail = ( 
#line 956 "gram.y"
( struct expr * ) _auto_e ) ) ) , _auto__Xthis__ctor_elist ) ) ) ) ) ) 
#line 956 "gram.y"
) ; 
} 
#line 957 "gram.y"
break ; 

#line 958 "gram.y"
case 156 : { 
#line 959 "gram.y"
Pexpr _auto_e ; 

#line 959 "gram.y"
_auto_e = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 959 "gram.y"
struct expr * ) ( _auto_yypvt [ - 0 ] ) . __C10_pe , ( struct expr * 
#line 959 "gram.y"
) 0 ) ; 

#line 960 "gram.y"
{ 
#line 689 "../../src/cfront.h"
( ( struct elist * ) ( ( ( struct elist * ) ( ( 
#line 689 "../../src/cfront.h"
_auto_yypvt [ -2] ) . __C10_p ) ) ) ) -> _elist_tail -> _expr__O4.__C4_e2 = ( ( struct 
#line 689 "../../src/cfront.h"
expr * ) ( ( ( struct expr * ) ( _auto_e ) ) ) ) ; 
#line 689 "../../src/cfront.h"

#line 689 "../../src/cfront.h"
( ( struct elist * ) ( ( ( struct elist * ) ( ( _auto_yypvt [ 
#line 689 "../../src/cfront.h"
-2] ) . __C10_p ) ) ) ) -> _elist_tail = ( ( struct expr * ) 
#line 689 "../../src/cfront.h"
( ( ( struct expr * ) ( _auto_e ) ) ) ) ; 
} } 
#line 961 "gram.y"
break ; 

#line 962 "gram.y"
case 158 : { 
#line 966 "gram.y"
Pexpr _auto_e ; 

#line 967 "gram.y"
if ( ( _auto_yypvt [ -1] ) . __C10_p ) _auto_e = ( _auto_yypvt [ -1] ) . 
#line 967 "gram.y"
__C10_pe ; 
else 
#line 970 "gram.y"
_auto_e = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 970 "gram.y"
( struct expr * ) dummy , ( struct expr * ) 0 ) ; 

#line 971 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 0 , 124 , 
#line 971 "gram.y"
( struct expr * ) _auto_e , ( struct expr * ) 0 ) ; 
} 
#line 972 "gram.y"
break ; 

#line 973 "gram.y"
case 159 : { 
#line 978 "gram.y"
binop : yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * 
#line 978 "gram.y"
) 0 , ( int ) ( _auto_yypvt [ -1] ) . __C10_t , ( struct 
#line 978 "gram.y"
expr * ) ( _auto_yypvt [ -2] ) . __C10_pe , ( struct expr * ) ( _auto_yypvt [ 
#line 978 "gram.y"
- 0 ] ) . __C10_pe ) ; 
} 
#line 978 "gram.y"
break ; 

#line 979 "gram.y"
case 160 : { 
#line 979 "gram.y"
goto binop ; 
} 
#line 979 "gram.y"
break ; 

#line 980 "gram.y"
case 161 : { 
#line 980 "gram.y"
goto binop ; 
} 
#line 980 "gram.y"
break ; 

#line 981 "gram.y"
case 162 : { 
#line 981 "gram.y"
goto binop ; 
} 
#line 981 "gram.y"
break ; 

#line 982 "gram.y"
case 163 : { 
#line 982 "gram.y"
goto binop ; 
} 
#line 982 "gram.y"
break ; 

#line 983 "gram.y"
case 164 : { 
#line 983 "gram.y"
goto binop ; 
} 
#line 983 "gram.y"
break ; 

#line 984 "gram.y"
case 165 : { 
#line 984 "gram.y"
goto binop ; 
} 
#line 984 "gram.y"
break ; 

#line 985 "gram.y"
case 166 : { 
#line 985 "gram.y"
goto binop ; 
} 
#line 985 "gram.y"
break ; 

#line 986 "gram.y"
case 167 : { 
#line 986 "gram.y"
goto binop ; 
} 
#line 986 "gram.y"
break ; 

#line 987 "gram.y"
case 168 : { 
#line 987 "gram.y"
goto binop ; 
} 
#line 987 "gram.y"
break ; 

#line 988 "gram.y"
case 169 : { 
#line 988 "gram.y"
goto binop ; 
} 
#line 988 "gram.y"
break ; 

#line 989 "gram.y"
case 170 : { 
#line 989 "gram.y"
goto binop ; 
} 
#line 989 "gram.y"
break ; 

#line 990 "gram.y"
case 171 : { 
#line 990 "gram.y"
goto binop ; 
} 
#line 990 "gram.y"
break ; 

#line 991 "gram.y"
case 172 : { 
#line 991 "gram.y"
goto binop ; 
} 
#line 991 "gram.y"
break ; 

#line 992 "gram.y"
case 173 : { 
#line 992 "gram.y"
goto binop ; 
} 
#line 992 "gram.y"
break ; 

#line 993 "gram.y"
case 174 : { 
#line 994 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_qexpr = 0 ) 
#line 994 "gram.y"
, ( ( ( _auto__Xthis__ctor_qexpr = 0 ) , ( _auto__Xthis__ctor_qexpr = ( struct qexpr * ) 
#line 994 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_qexpr ) ) , 68 , ( ( struct 
#line 994 "gram.y"
expr * ) ( _auto_yypvt [ -2] ) . __C10_pe ) , ( ( struct expr * ) 
#line 994 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_pe ) ) ) ) , ( ( 
#line 994 "gram.y"
_auto__Xthis__ctor_qexpr -> _expr__O5.__C5_cond = ( ( struct expr * ) ( _auto_yypvt [ -4] ) . __C10_pe ) ) 
#line 994 "gram.y"
, _auto__Xthis__ctor_qexpr ) ) ) ; 
} 
#line 994 "gram.y"
break ; 

#line 995 "gram.y"
case 175 : { 
#line 996 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 996 "gram.y"
0 , 9 , ( struct expr * ) ( _auto_yypvt [ - 0 ] ) . 
#line 996 "gram.y"
__C10_pe , ( struct expr * ) 0 ) ; 
} 
#line 996 "gram.y"
break ; 

#line 997 "gram.y"
case 176 : { 
#line 998 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 998 "gram.y"
0 , 9 , ( struct expr * ) ( _auto_yypvt [ - 0 ] ) . 
#line 998 "gram.y"
__C10_pe , ( struct expr * ) ( _auto_yypvt [ -2] ) . __C10_pe ) ; 
} 
#line 998 "gram.y"
break ; 

#line 999 "gram.y"
case 178 : { 
#line 1001 "gram.y"
yyval . __C10_p = ( struct node * ) dummy ; 
} 
#line 1001 "gram.y"
break ; 

#line 1002 "gram.y"
case 179 : { 
#line 1005 "gram.y"
TOK _auto_b ; 
Ptype _auto_t ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1005 "gram.y"
_auto_b = ( _auto_yypvt [ -3] ) . __C10_t ; 

#line 1007 "gram.y"
switch ( _auto_b ) { 
#line 1007 "gram.y"
case 5 : _auto_t = ( struct type * ) char_type ; 

#line 1008 "gram.y"
break ; 

#line 1009 "gram.y"
case 29 : _auto_t = ( struct type * ) short_type ; 

#line 1009 "gram.y"
break ; 

#line 1010 "gram.y"
case 21 : _auto_t = ( struct type * ) int_type ; 

#line 1010 "gram.y"
break ; 

#line 1011 "gram.y"
case 22 : _auto_t = ( struct type * ) long_type ; 

#line 1011 "gram.y"
break ; 

#line 1012 "gram.y"
case 37 : _auto_t = ( struct type * ) uint_type ; 

#line 1012 "gram.y"
break ; 

#line 1013 "gram.y"
case 15 : _auto_t = ( struct type * ) float_type ; 

#line 1013 "gram.y"
break ; 

#line 1014 "gram.y"
case 11 : _auto_t = ( struct type * ) double_type ; 

#line 1014 "gram.y"
break ; 

#line 1015 "gram.y"
case 38 : _auto_t = ( struct type * ) void_type ; 

#line 1015 "gram.y"
break ; 

#line 1016 "gram.y"
default : errorFPC__E ( ( char * ) "illegal constructor:%k", _auto_b ) ; 

#line 1018 "gram.y"
_auto_t = ( struct type * ) int_type ; 
} 
#line 1020 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( 
#line 1020 "gram.y"
( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( 
#line 1020 "gram.y"
( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct expr * ) 
#line 1020 "gram.y"
( _auto_yypvt [ -1] ) . __C10_pe ) , ( struct expr * ) 0 ) ) 
#line 1020 "gram.y"
) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) _auto_t ) ) , 
#line 1020 "gram.y"
_auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1021 "gram.y"
break ; 

#line 1022 "gram.y"
case 180 : { 
#line 1023 "gram.y"
Ptype _auto_t ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1023 "gram.y"
_auto_t = ( ( ( struct name * ) ( ( _auto_yypvt [ -3] ) . __C10_p ) 
#line 1023 "gram.y"
) ) -> _expr__O2.__C2_tp ; 

#line 1024 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( 
#line 1024 "gram.y"
( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( 
#line 1024 "gram.y"
struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct expr * ) ( 
#line 1024 "gram.y"
_auto_yypvt [ -1] ) . __C10_pe ) , ( struct expr * ) 0 ) ) ) 
#line 1024 "gram.y"
, ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) _auto_t ) ) , _auto__Xthis__ctor_texpr ) 
#line 1024 "gram.y"
) ) ; 
} 
#line 1025 "gram.y"
break ; 

#line 1026 "gram.y"
case 181 : { 
#line 1027 "gram.y"
Ptype _auto_t ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1027 "gram.y"
_auto_t = ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) 
#line 1027 "gram.y"
. __C10_p ) ) ) -> _expr__O2.__C2_tp ; 

#line 1027 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( 
#line 1027 "gram.y"
( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( 
#line 1027 "gram.y"
struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 23 , ( ( struct expr * ) 0 
#line 1027 "gram.y"
) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> 
#line 1027 "gram.y"
_expr__O5.__C5_tp2 = ( ( struct type * ) _auto_t ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1027 "gram.y"
break ; 

#line 1028 "gram.y"
case 182 : { 
#line 1029 "gram.y"
Ptype _auto_t ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1029 "gram.y"
_auto_t = ( ( ( struct name * ) ( ( _auto_yypvt [ -1] ) . __C10_p ) 
#line 1029 "gram.y"
) ) -> _expr__O2.__C2_tp ; 

#line 1029 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( 
#line 1029 "gram.y"
( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( 
#line 1029 "gram.y"
struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 23 , ( ( struct expr * ) 0 
#line 1029 "gram.y"
) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> 
#line 1029 "gram.y"
_expr__O5.__C5_tp2 = ( ( struct type * ) _auto_t ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1029 "gram.y"
break ; 

#line 1030 "gram.y"
case 183 : { 
#line 1031 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1031 "gram.y"
0 , ( int ) ( _auto_yypvt [ - 0 ] ) . __C10_t , ( 
#line 1031 "gram.y"
struct expr * ) ( _auto_yypvt [ -1] ) . __C10_pe , ( struct expr * ) 0 
#line 1031 "gram.y"
) ; 
} 
#line 1031 "gram.y"
break ; 

#line 1032 "gram.y"
case 184 : { 
#line 1033 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) 
#line 1033 "gram.y"
, ( ( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) 
#line 1033 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct 
#line 1033 "gram.y"
expr * ) ( _auto_yypvt [ - 0 ] ) . __C10_pe ) , ( struct expr * 
#line 1033 "gram.y"
) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * 
#line 1033 "gram.y"
) ( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) 
#line 1033 "gram.y"
) ) -> _expr__O2.__C2_tp ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1033 "gram.y"
break ; 

#line 1034 "gram.y"
case 185 : { 
#line 1035 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1035 "gram.y"
0 , 111 , ( struct expr * ) ( _auto_yypvt [ - 0 ] ) . 
#line 1035 "gram.y"
__C10_pe , ( struct expr * ) 0 ) ; 
} 
#line 1035 "gram.y"
break ; 

#line 1036 "gram.y"
case 186 : { 
#line 1037 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1037 "gram.y"
0 , 112 , ( struct expr * ) 0 , ( struct expr * ) ( 
#line 1037 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ; 
} 
#line 1037 "gram.y"
break ; 

#line 1038 "gram.y"
case 187 : { 
#line 1039 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1039 "gram.y"
0 , 107 , ( struct expr * ) 0 , ( struct expr * ) ( 
#line 1039 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ; 
} 
#line 1039 "gram.y"
break ; 

#line 1040 "gram.y"
case 188 : { 
#line 1041 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1041 "gram.y"
0 , 172 , ( struct expr * ) 0 , ( struct expr * ) ( 
#line 1041 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ; 
} 
#line 1041 "gram.y"
break ; 

#line 1042 "gram.y"
case 189 : { 
#line 1043 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1043 "gram.y"
0 , 46 , ( struct expr * ) 0 , ( struct expr * ) ( 
#line 1043 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ; 
} 
#line 1043 "gram.y"
break ; 

#line 1044 "gram.y"
case 190 : { 
#line 1045 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1045 "gram.y"
0 , 47 , ( struct expr * ) 0 , ( struct expr * ) ( 
#line 1045 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pe ) ; 
} 
#line 1045 "gram.y"
break ; 

#line 1046 "gram.y"
case 191 : { 
#line 1047 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1047 "gram.y"
0 , ( int ) ( _auto_yypvt [ -1] ) . __C10_t , ( struct expr * 
#line 1047 "gram.y"
) 0 , ( struct expr * ) ( _auto_yypvt [ - 0 ] ) . 
#line 1047 "gram.y"
__C10_pe ) ; 
} 
#line 1047 "gram.y"
break ; 

#line 1048 "gram.y"
case 192 : { 
#line 1049 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) 
#line 1049 "gram.y"
, ( ( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) 
#line 1049 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 30 , ( ( struct 
#line 1049 "gram.y"
expr * ) ( _auto_yypvt [ - 0 ] ) . __C10_pe ) , ( struct expr * 
#line 1049 "gram.y"
) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * 
#line 1049 "gram.y"
) 0 ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1049 "gram.y"
break ; 

#line 1050 "gram.y"
case 193 : { 
#line 1051 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_texpr = 0 ) 
#line 1051 "gram.y"
, ( ( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) 
#line 1051 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 30 , ( ( struct 
#line 1051 "gram.y"
expr * ) 0 ) , ( struct expr * ) 0 ) ) ) , 
#line 1051 "gram.y"
( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) ( ( ( struct name * 
#line 1051 "gram.y"
) ( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) -> _expr__O2.__C2_tp ) ) , 
#line 1051 "gram.y"
_auto__Xthis__ctor_texpr ) ) ) ; 
} 
#line 1051 "gram.y"
break ; 

#line 1052 "gram.y"
case 194 : { 
#line 1053 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1053 "gram.y"
0 , 111 , ( struct expr * ) ( _auto_yypvt [ -3] ) . __C10_pe , ( 
#line 1053 "gram.y"
struct expr * ) ( _auto_yypvt [ -1] ) . __C10_pe ) ; 
} 
#line 1053 "gram.y"
break ; 

#line 1054 "gram.y"
case 195 : { 
#line 1055 "gram.y"
Pexpr _auto_ee ; 
Pexpr _auto_e ; 
struct call * _auto__Xthis__ctor_call ; 

#line 1055 "gram.y"
_auto_ee = ( _auto_yypvt [ -1] ) . __C10_pe ; 

#line 1056 "gram.y"
_auto_e = ( _auto_yypvt [ -3] ) . __C10_pe ; 

#line 1057 "gram.y"
if ( _auto_e -> _node_base == 23 ) _auto_e -> _expr__O3.__C3_e1 = _auto_ee ; 
else 
#line 1060 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( 
#line 1060 "gram.y"
( ( _auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( 
#line 1060 "gram.y"
( struct expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) 
#line 1060 "gram.y"
_auto_e ) , ( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) 
#line 1060 "gram.y"
; 
} 
#line 1061 "gram.y"
break ; 

#line 1062 "gram.y"
case 196 : { 
#line 1063 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ref = 0 ) 
#line 1063 "gram.y"
, ( ( ( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) 
#line 1063 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct 
#line 1063 "gram.y"
expr * ) ( _auto_yypvt [ -2] ) . __C10_pe ) , ( struct expr * ) 0 
#line 1063 "gram.y"
) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) ( 
#line 1063 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pn ) ) , _auto__Xthis__ctor_ref ) ) ) ; 
} 
#line 1063 "gram.y"
break ; 

#line 1064 "gram.y"
case 197 : { 
#line 1065 "gram.y"
Pname _auto_n ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1065 "gram.y"
_auto_n = ( ( ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1065 "gram.y"
] ) . __C10_p ) ) ) -> _node_base == 123 ) ? _name__ctor ( ( struct name * 
#line 1065 "gram.y"
) 0 , ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1065 "gram.y"
] ) . __C10_p ) ) ) -> _expr__O3.__C3_string ) : ( ( ( struct name * 
#line 1065 "gram.y"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 1065 "gram.y"

#line 1065 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 1065 "gram.y"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 1065 "gram.y"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) ( 
#line 1065 "gram.y"
_auto_yypvt [ -2] ) . __C10_pe ) , ( struct expr * ) 0 ) ) ) 
#line 1065 "gram.y"
, ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_ref ) 
#line 1065 "gram.y"
) ) ; 
} 
#line 1065 "gram.y"
break ; 

#line 1066 "gram.y"
case 198 : { 
#line 1067 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ref = 0 ) 
#line 1067 "gram.y"
, ( ( ( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) 
#line 1067 "gram.y"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct 
#line 1067 "gram.y"
expr * ) ( _auto_yypvt [ -2] ) . __C10_pe ) , ( struct expr * ) 0 
#line 1067 "gram.y"
) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) ( 
#line 1067 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_pn ) ) , _auto__Xthis__ctor_ref ) ) ) ; 
} 
#line 1067 "gram.y"
break ; 

#line 1068 "gram.y"
case 199 : { 
#line 1069 "gram.y"
Pname _auto_n ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1069 "gram.y"
_auto_n = ( ( ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1069 "gram.y"
] ) . __C10_p ) ) ) -> _node_base == 123 ) ? _name__ctor ( ( struct name * 
#line 1069 "gram.y"
) 0 , ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1069 "gram.y"
] ) . __C10_p ) ) ) -> _expr__O3.__C3_string ) : ( ( ( struct name * 
#line 1069 "gram.y"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 1069 "gram.y"

#line 1069 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 1069 "gram.y"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 1069 "gram.y"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) ( 
#line 1069 "gram.y"
_auto_yypvt [ -2] ) . __C10_pe ) , ( struct expr * ) 0 ) ) ) 
#line 1069 "gram.y"
, ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_ref ) 
#line 1069 "gram.y"
) ) ; 
} 
#line 1069 "gram.y"
break ; 

#line 1070 "gram.y"
case 200 : { 
#line 1071 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 1071 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1071 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 1071 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1071 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1071 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 1071 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = sta_name ; 
} 
#line 1071 "gram.y"
break ; 

#line 1072 "gram.y"
case 202 : { 
#line 1074 "gram.y"
yyval . __C10_p = ( _auto_yypvt [ -1] ) . __C10_p ; 
} 
#line 1074 "gram.y"
break ; 

#line 1075 "gram.y"
case 203 : { 
#line 1076 "gram.y"
yyval . __C10_p = ( struct node * ) zero ; 
} 
#line 1076 "gram.y"
break ; 

#line 1077 "gram.y"
case 204 : { 
#line 1078 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1078 "gram.y"
0 , 82 , ( struct expr * ) ( ( ( struct expr * ) ( 
#line 1078 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_s ) ) ) , ( struct expr * 
#line 1078 "gram.y"
) 0 ) ; 
} 
#line 1078 "gram.y"
break ; 

#line 1079 "gram.y"
case 205 : { 
#line 1080 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1080 "gram.y"
0 , 83 , ( struct expr * ) ( ( ( struct expr * ) ( 
#line 1080 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_s ) ) ) , ( struct expr * 
#line 1080 "gram.y"
) 0 ) ; 
} 
#line 1080 "gram.y"
break ; 

#line 1081 "gram.y"
case 206 : { 
#line 1082 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1082 "gram.y"
0 , 81 , ( struct expr * ) ( ( ( struct expr * ) ( 
#line 1082 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_s ) ) ) , ( struct expr * 
#line 1082 "gram.y"
) 0 ) ; 
} 
#line 1082 "gram.y"
break ; 

#line 1083 "gram.y"
case 207 : { 
#line 1084 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1084 "gram.y"
0 , 84 , ( struct expr * ) ( ( ( struct expr * ) ( 
#line 1084 "gram.y"
( _auto_yypvt [ - 0 ] ) . __C10_s ) ) ) , ( struct expr * 
#line 1084 "gram.y"
) 0 ) ; 
} 
#line 1084 "gram.y"
break ; 

#line 1085 "gram.y"
case 208 : { 
#line 1086 "gram.y"
yyval . __C10_p = ( struct node * ) _expr__ctor ( ( struct expr * ) 
#line 1086 "gram.y"
0 , 34 , ( struct expr * ) ( ( ( struct expr * ) ( 
#line 1086 "gram.y"
0 ) ) ) , ( struct expr * ) 0 ) ; 
} 
#line 1086 "gram.y"
break ; 

#line 1087 "gram.y"
case 209 : { 
#line 1094 "gram.y"
yyval . __C10_p = ( struct node * ) ( _auto_yypvt [ - 0 ] 
#line 1094 "gram.y"
) . __C10_pn ; 
} 
#line 1094 "gram.y"
break ; 

#line 1095 "gram.y"
case 210 : { 
#line 1096 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 1096 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1096 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 1096 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1096 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1096 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 1097 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -2] ) . __C10_pn ; 
} 
#line 1098 "gram.y"
break ; 

#line 1099 "gram.y"
case 211 : { 
#line 1100 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( ( ( ( 
#line 1100 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1100 "gram.y"
-> _node_base == 123 ) ? _name__ctor ( ( struct name * ) 0 , ( ( ( 
#line 1100 "gram.y"
struct name * ) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) 
#line 1100 "gram.y"
-> _expr__O3.__C3_string ) : ( ( ( struct name * ) ( ( _auto_yypvt [ - 0 
#line 1100 "gram.y"
] ) . __C10_p ) ) ) ) ; 

#line 1101 "gram.y"
{ 
#line 1101 "gram.y"
Pname _auto_nx ; 

#line 1101 "gram.y"
_auto_nx = _table_look ( ( struct table * ) ktbl , ( _auto_yypvt [ -2] ) . __C10_pn -> _expr__O3.__C3_string , 
#line 1101 "gram.y"
159 ) ; 

#line 1102 "gram.y"
if ( _auto_nx == 0 ) errorFPC__E ( ( char * ) "non-typeN%n before ::", yyval . __C10_p ) ; 
#line 1102 "gram.y"

#line 1103 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = _auto_nx ; 
} } 
#line 1104 "gram.y"
break ; 

#line 1105 "gram.y"
case 212 : { 
#line 1106 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 1106 "gram.y"
0 , ( char * ) oper_name ( ( int ) ( _auto_yypvt [ - 0 
#line 1106 "gram.y"
] ) . __C10_t ) ) ; 

#line 1107 "gram.y"
yyval . __C10_pn -> _name_n_oper = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 
} 
#line 1108 "gram.y"
break ; 

#line 1109 "gram.y"
case 213 : { 
#line 1110 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 1110 "gram.y"
0 , ( char * ) oper_name ( ( int ) ( _auto_yypvt [ - 0 
#line 1110 "gram.y"
] ) . __C10_t ) ) ; 

#line 1111 "gram.y"
yyval . __C10_pn -> _name_n_oper = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 

#line 1112 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -3] ) . __C10_pn ; 
} 
#line 1113 "gram.y"
break ; 

#line 1114 "gram.y"
case 214 : { 
#line 1115 "gram.y"
yyval . __C10_p = ( struct node * ) _name__ctor ( ( struct name * ) 
#line 1115 "gram.y"
0 , ( char * ) oper_name ( ( int ) ( _auto_yypvt [ - 0 
#line 1115 "gram.y"
] ) . __C10_t ) ) ; 

#line 1116 "gram.y"
yyval . __C10_pn -> _name_n_oper = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 

#line 1117 "gram.y"
{ 
#line 1117 "gram.y"
Pname _auto_nx ; 

#line 1117 "gram.y"
_auto_nx = _table_look ( ( struct table * ) ktbl , ( _auto_yypvt [ -3] ) . __C10_pn -> _expr__O3.__C3_string , 
#line 1117 "gram.y"
159 ) ; 

#line 1118 "gram.y"
if ( _auto_nx == 0 ) errorFPC__E ( ( char * ) "non-typeN%n before ::", yyval . __C10_p ) ; 
#line 1118 "gram.y"

#line 1119 "gram.y"
yyval . __C10_pn -> _name__O6.__C6_n_qualifier = _auto_nx ; 
} } 
#line 1120 "gram.y"
break ; 

#line 1121 "gram.y"
case 215 : { 
#line 1122 "gram.y"
Pname _auto_n ; 

#line 1123 "gram.y"
static char _static_buf [ 128] ; 

#line 1122 "gram.y"
_auto_n = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 1124 "gram.y"
( _static_buf [ 0 ] ) = '_' ; 

#line 1125 "gram.y"
( _static_buf [ 1 ] ) = 'O' ; 

#line 1126 "gram.y"
_type_signature ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp , ( char * ) ( _static_buf + 2 ) 
#line 1126 "gram.y"
) ; 

#line 1127 "gram.y"
_auto_n -> _expr__O3.__C3_string = _static_buf ; 

#line 1128 "gram.y"
_auto_n -> _expr__O2.__C2_tp = 0 ; 

#line 1129 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 1130 "gram.y"
break ; 

#line 1131 "gram.y"
case 216 : { 
#line 1132 "gram.y"
Pname _auto_n ; 

#line 1133 "gram.y"
static char _static_buf [ 128] ; 

#line 1132 "gram.y"
_auto_n = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 1134 "gram.y"
( _static_buf [ 0 ] ) = '_' ; 

#line 1135 "gram.y"
( _static_buf [ 1 ] ) = 'O' ; 

#line 1136 "gram.y"
_type_signature ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp , ( char * ) ( _static_buf + 2 ) 
#line 1136 "gram.y"
) ; 

#line 1137 "gram.y"
_auto_n -> _expr__O3.__C3_string = _static_buf ; 

#line 1138 "gram.y"
_auto_n -> _expr__O2.__C2_tp = 0 ; 

#line 1139 "gram.y"
_auto_n -> _name__O6.__C6_n_qualifier = ( _auto_yypvt [ -3] ) . __C10_pn ; 

#line 1140 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} 
#line 1141 "gram.y"
break ; 

#line 1142 "gram.y"
case 217 : { 
#line 1143 "gram.y"
Pname _auto_n ; 

#line 1144 "gram.y"
static char _static_buf [ 128] ; 

#line 1143 "gram.y"
_auto_n = ( _auto_yypvt [ - 0 ] ) . __C10_pn ; 

#line 1145 "gram.y"
( _static_buf [ 0 ] ) = '_' ; 

#line 1146 "gram.y"
( _static_buf [ 1 ] ) = 'O' ; 

#line 1147 "gram.y"
_type_signature ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp , ( char * ) ( _static_buf + 2 ) 
#line 1147 "gram.y"
) ; 

#line 1148 "gram.y"
_auto_n -> _expr__O3.__C3_string = _static_buf ; 

#line 1149 "gram.y"
_auto_n -> _expr__O2.__C2_tp = 0 ; 

#line 1150 "gram.y"
{ 
#line 1150 "gram.y"
Pname _auto_nx ; 

#line 1150 "gram.y"
_auto_nx = _table_look ( ( struct table * ) ktbl , ( _auto_yypvt [ -3] ) . __C10_pn -> _expr__O3.__C3_string , 
#line 1150 "gram.y"
159 ) ; 

#line 1151 "gram.y"
if ( _auto_nx == 0 ) errorFPC__E ( ( char * ) "non-typeN%n before ::", yyval . __C10_p ) ; 
#line 1151 "gram.y"

#line 1152 "gram.y"
_auto_n -> _name__O6.__C6_n_qualifier = _auto_nx ; 

#line 1153 "gram.y"
yyval . __C10_p = ( struct node * ) _auto_n ; 
} } 
#line 1154 "gram.y"
break ; 

#line 1155 "gram.y"
case 218 : { 
#line 1162 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 1162 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 1162 "gram.y"
__C10_p ) ) ) , ( struct basetype * ) ( ( ( struct basetype * ) 
#line 1162 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( struct block * ) 
#line 1162 "gram.y"
0 , 1 ) ; 
} 
#line 1162 "gram.y"
break ; 

#line 1163 "gram.y"
case 219 : { 
#line 1166 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype__ctor ( ( struct basetype * ) 
#line 1166 "gram.y"
0 , ( int ) ( _auto_yypvt [ - 0 ] ) . __C10_t , ( 
#line 1166 "gram.y"
struct name * ) 0 ) ; 
} 
#line 1166 "gram.y"
break ; 

#line 1167 "gram.y"
case 220 : { 
#line 1168 "gram.y"
yyval . __C10_p = ( struct node * ) _basetype__ctor ( ( struct basetype * ) 
#line 1168 "gram.y"
0 , 97 , ( struct name * ) ( _auto_yypvt [ - 0 ] ) . 
#line 1168 "gram.y"
__C10_pn ) ; 
} 
#line 1168 "gram.y"
break ; 

#line 1169 "gram.y"
case 221 : { 
#line 1172 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 1172 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 1172 "gram.y"
__C10_p ) ) ) , ( struct basetype * ) ( ( ( struct basetype * ) 
#line 1172 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( struct block * ) 
#line 1172 "gram.y"
0 , 1 ) ; 
} 
#line 1172 "gram.y"
break ; 

#line 1173 "gram.y"
case 222 : { 
#line 1176 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 1176 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 1176 "gram.y"
__C10_p ) ) ) , ( struct basetype * ) ( ( ( struct basetype * ) 
#line 1176 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( struct block * ) 
#line 1176 "gram.y"
0 , 1 ) ; 
} 
#line 1176 "gram.y"
break ; 

#line 1177 "gram.y"
case 223 : { 
#line 1180 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 1180 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 1180 "gram.y"
__C10_p ) ) ) , ( struct basetype * ) ( ( ( struct basetype * ) 
#line 1180 "gram.y"
( ( _auto_yypvt [ -1] ) . __C10_p ) ) ) , ( struct block * ) 
#line 1180 "gram.y"
0 , ( int ) 0 ) ; 
} 
#line 1180 "gram.y"
break ; 

#line 1181 "gram.y"
case 224 : { 
#line 1182 "gram.y"
yyval . __C10_p = ( struct node * ) _name_normalize ( ( struct name * ) 
#line 1182 "gram.y"
( ( ( struct name * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) 
#line 1182 "gram.y"
) , ( struct basetype * ) ( ( ( struct basetype * ) ( ( 
#line 1182 "gram.y"
_auto_yypvt [ -3] ) . __C10_p ) ) ) , ( struct block * ) 0 , 
#line 1182 "gram.y"
( int ) 0 ) ; 

#line 1183 "gram.y"
yyval . __C10_pn -> _expr__O4.__C4_n_initializer = ( _auto_yypvt [ - 0 ] ) . __C10_pe ; 
} 
#line 1184 "gram.y"
break ; 

#line 1185 "gram.y"
case 225 : { 
#line 1188 "gram.y"
TOK _auto_k ; 
Pname _auto_l ; 

#line 1188 "gram.y"
_auto_k = 1 ; 

#line 1189 "gram.y"
_auto_l = ( _auto_yypvt [ -1] ) . __C10_pn ; 

#line 1191 "gram.y"
yyval . __C10_p = ( struct node * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 1191 "gram.y"
struct type * ) 0 , ( struct name * ) name_unlist ( ( struct nlist * ) 
#line 1191 "gram.y"
( ( ( struct nlist * ) ( _auto_l ) ) ) ) , ( int 
#line 1191 "gram.y"
) _auto_k ) ; 
} 
#line 1192 "gram.y"
break ; 

#line 1193 "gram.y"
case 226 : { 
#line 1194 "gram.y"
TOK _auto_k ; 
Pname _auto_l ; 

#line 1194 "gram.y"
_auto_k = 155 ; 

#line 1195 "gram.y"
_auto_l = ( _auto_yypvt [ -2] ) . __C10_pn ; 

#line 1197 "gram.y"
yyval . __C10_p = ( struct node * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 1197 "gram.y"
struct type * ) 0 , ( struct name * ) name_unlist ( ( struct nlist * ) 
#line 1197 "gram.y"
( ( ( struct nlist * ) ( _auto_l ) ) ) ) , ( int 
#line 1197 "gram.y"
) _auto_k ) ; 
} 
#line 1198 "gram.y"
break ; 

#line 1199 "gram.y"
case 227 : { 
#line 1200 "gram.y"
TOK _auto_k ; 
Pname _auto_l ; 

#line 1200 "gram.y"
_auto_k = 155 ; 

#line 1201 "gram.y"
_auto_l = ( _auto_yypvt [ -3] ) . __C10_pn ; 

#line 1203 "gram.y"
yyval . __C10_p = ( struct node * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 1203 "gram.y"
struct type * ) 0 , ( struct name * ) name_unlist ( ( struct nlist * ) 
#line 1203 "gram.y"
( ( ( struct nlist * ) ( _auto_l ) ) ) ) , ( int 
#line 1203 "gram.y"
) _auto_k ) ; 
} 
#line 1204 "gram.y"
break ; 

#line 1205 "gram.y"
case 228 : { 
#line 1208 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) if 
#line 1208 "gram.y"
( ( _auto_yypvt [ -2] ) . __C10_p ) 
#line 1210 "gram.y"
{ 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( 
#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( _auto_yypvt [ -2] ) . __C10_p ) ) ) 
#line 668 "../../src/cfront.h"
) -> _nlist_tail -> _name_n_list = ( ( struct name * ) ( ( ( struct name * 
#line 668 "../../src/cfront.h"
) ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ; 
#line 668 "../../src/cfront.h"

#line 668 "../../src/cfront.h"
( ( struct nlist * ) ( ( ( struct nlist * ) ( ( _auto_yypvt [ 
#line 668 "../../src/cfront.h"
-2] ) . __C10_p ) ) ) ) -> _nlist_tail = ( ( struct name * ) 
#line 668 "../../src/cfront.h"
( ( ( struct name * ) ( ( _auto_yypvt [ - 0 ] ) . 
#line 668 "../../src/cfront.h"
__C10_p ) ) ) ) ; 
} else 
#line 1211 "gram.y"
{ 
#line 1211 "gram.y"
errorFPC__E ( ( char * ) "AD syntax") ; 

#line 1213 "gram.y"
yyval . __C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * ) 
#line 1213 "gram.y"
0 , ( struct name * ) ( ( ( struct name * ) ( ( 
#line 1213 "gram.y"
_auto_yypvt [ - 0 ] ) . __C10_p ) ) ) ) ) ) ) ; 
#line 1213 "gram.y"
} else 
#line 1216 "gram.y"
errorFPC__E ( ( char * ) "AD syntax") ; 
} 
#line 1217 "gram.y"
break ; 

#line 1218 "gram.y"
case 229 : { 
#line 1219 "gram.y"
if ( ( _auto_yypvt [ - 0 ] ) . __C10_p ) yyval . 
#line 1219 "gram.y"
__C10_p = ( ( ( struct node * ) ( _nlist__ctor ( ( struct nlist * ) 0 
#line 1219 "gram.y"
, ( struct name * ) ( ( ( struct name * ) ( ( _auto_yypvt [ 
#line 1219 "gram.y"
- 0 ] ) . __C10_p ) ) ) ) ) ) ) ; 
} 
#line 1219 "gram.y"
break ; 

#line 1220 "gram.y"
case 231 : { 
#line 1224 "gram.y"
yyval . __C10_p = 0 ; 
} 
#line 1224 "gram.y"
break ; 

#line 1225 "gram.y"
case 232 : { 
#line 1227 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 ) 
#line 1227 "gram.y"
, ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) 
#line 1227 "gram.y"
, ( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( 
#line 1227 "gram.y"
_auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_ptr -> 
#line 1227 "gram.y"
_ptr_rdo = ( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) 
#line 1227 "gram.y"
) ; 
} 
#line 1227 "gram.y"
break ; 

#line 1228 "gram.y"
case 233 : { 
#line 1229 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 ) 
#line 1229 "gram.y"
, ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) 
#line 1229 "gram.y"
, ( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 158 ) , ( ( 
#line 1229 "gram.y"
_auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_ptr -> 
#line 1229 "gram.y"
_ptr_rdo = ( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) 
#line 1229 "gram.y"
) ; 
} 
#line 1229 "gram.y"
break ; 

#line 1230 "gram.y"
case 234 : { 
#line 1231 "gram.y"
TOK _auto_c ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 1231 "gram.y"
_auto_c = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 

#line 1232 "gram.y"
if ( _auto_c == 26 ) yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 
#line 1232 "gram.y"
) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) 
#line 1232 "gram.y"
) , ( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( 
#line 1232 "gram.y"
( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 0 ) ) , ( ( 
#line 1232 "gram.y"
_auto__Xthis__ctor_ptr -> _ptr_rdo = 1 ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ; 
else 
#line 1234 "gram.y"
{ 
#line 1234 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 ) , 
#line 1234 "gram.y"
( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , 
#line 1234 "gram.y"
( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> 
#line 1234 "gram.y"
_ptr_typ = ( ( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = 
#line 1234 "gram.y"
( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) 
#line 1234 "gram.y"
; 

#line 1236 "gram.y"
errorFPC__E ( ( char * ) "syntax error: *%k", _auto_c ) ; 
} } 
#line 1238 "gram.y"
break ; 

#line 1239 "gram.y"
case 235 : { 
#line 1240 "gram.y"
TOK _auto_c ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 1240 "gram.y"
_auto_c = ( _auto_yypvt [ - 0 ] ) . __C10_t ; 

#line 1241 "gram.y"
if ( _auto_c == 26 ) yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 
#line 1241 "gram.y"
) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) 
#line 1241 "gram.y"
) , ( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 158 ) , ( 
#line 1241 "gram.y"
( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) 0 ) ) , ( ( 
#line 1241 "gram.y"
_auto__Xthis__ctor_ptr -> _ptr_rdo = 1 ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ; 
else 
#line 1243 "gram.y"
{ 
#line 1243 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_ptr = 0 ) , 
#line 1243 "gram.y"
( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , 
#line 1243 "gram.y"
( ( Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 158 ) , ( ( _auto__Xthis__ctor_ptr -> 
#line 1243 "gram.y"
_ptr_typ = ( ( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = 
#line 1243 "gram.y"
( ( int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) 
#line 1243 "gram.y"
; 

#line 1245 "gram.y"
errorFPC__E ( ( char * ) "syntax error: &%k", _auto_c ) ; 
} } 
#line 1247 "gram.y"
break ; 

#line 1248 "gram.y"
case 236 : { 
#line 1251 "gram.y"
Pexpr _auto_d ; 
struct vec * _auto__Xthis__ctor_vec ; 

#line 1251 "gram.y"
_auto_d = ( _auto_yypvt [ -1] ) . __C10_pe ; 

#line 1252 "gram.y"
yyval . __C10_p = ( struct node * ) ( ( _auto__Xthis__ctor_vec = 0 ) , ( ( 
#line 1252 "gram.y"
_auto__Xthis__ctor_vec = ( struct vec * ) _new ( ( long ) 20) ) , ( ( 
#line 1252 "gram.y"
Nt ++ ) , ( ( _auto__Xthis__ctor_vec -> _node_base = 110 ) , ( ( _auto__Xthis__ctor_vec -> _vec_typ = ( 
#line 1252 "gram.y"
( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_vec -> _vec_dim = ( ( 
#line 1252 "gram.y"
struct expr * ) ( ( _auto_d != dummy ) ? _auto_d : ( ( ( struct expr * 
#line 1252 "gram.y"
) ( 0 ) ) ) ) ) ) , _auto__Xthis__ctor_vec ) ) ) ) 
#line 1252 "gram.y"
) ) ; 
} 
#line 1253 "gram.y"
break ; 
} 
#line 1255 "gram.y"
goto yystack ; 
} ; 

/* the end */
