#line 1 "../../src/error.c"

/* <<cfront 10/10/85>> */
/* < ../../src/error.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/error.c"

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

#line 23 "../../src/error.c"
int error_count = 0 ; 

#line 24 "../../src/error.c"
static int no_of_warnings ; 

#line 25 "../../src/error.c"
char scan_started = 0 ; 

#line 29 "../../src/error.c"
static char * abbrev_tbl [ 91] ; 

#line 31 "../../src/error.c"
extern int error_init ( ) ; 

#line 32 "../../src/error.c"
extern int error_init ( ) 
#line 33 "../../src/error.c"
{ 
#line 33 "../../src/error.c"

#line 34 "../../src/error.c"
static char _static_errbuf [ 1024] ; 

#line 35 "../../src/error.c"
setbuf ( ( struct _iobuf * ) ( & ( _iob [ 2 ] ) ) , ( 
#line 35 "../../src/error.c"
char * ) _static_errbuf ) ; 

#line 37 "../../src/error.c"
( abbrev_tbl [ 'A' ] ) = " argument"; 

#line 38 "../../src/error.c"
( abbrev_tbl [ 'B' ] ) = " base"; 

#line 39 "../../src/error.c"
( abbrev_tbl [ 'C' ] ) = " class"; 

#line 40 "../../src/error.c"
( abbrev_tbl [ 'D' ] ) = " declaration"; 

#line 41 "../../src/error.c"
( abbrev_tbl [ 'E' ] ) = " expression"; 

#line 42 "../../src/error.c"
( abbrev_tbl [ 'F' ] ) = " function"; 

#line 43 "../../src/error.c"
( abbrev_tbl [ 'I' ] ) = " initialize"; 

#line 44 "../../src/error.c"
( abbrev_tbl [ 'J' ] ) = " J"; 

#line 45 "../../src/error.c"
( abbrev_tbl [ 'K' ] ) = " K"; 

#line 46 "../../src/error.c"
( abbrev_tbl [ 'L' ] ) = " list"; 

#line 47 "../../src/error.c"
( abbrev_tbl [ 'M' ] ) = " member"; 

#line 48 "../../src/error.c"
( abbrev_tbl [ 'N' ] ) = " name"; 

#line 49 "../../src/error.c"
( abbrev_tbl [ 'O' ] ) = " object"; 

#line 50 "../../src/error.c"
( abbrev_tbl [ 'P' ] ) = " pointer"; 

#line 51 "../../src/error.c"
( abbrev_tbl [ 'Q' ] ) = " qualifie"; 

#line 52 "../../src/error.c"
( abbrev_tbl [ 'R' ] ) = " R"; 

#line 53 "../../src/error.c"
( abbrev_tbl [ 'S' ] ) = " statement"; 

#line 54 "../../src/error.c"
( abbrev_tbl [ 'T' ] ) = " type"; 

#line 55 "../../src/error.c"
( abbrev_tbl [ 'U' ] ) = " undefined"; 

#line 56 "../../src/error.c"
( abbrev_tbl [ 'V' ] ) = " variable"; 

#line 57 "../../src/error.c"
( abbrev_tbl [ 'W' ] ) = " W"; 

#line 58 "../../src/error.c"
( abbrev_tbl [ 'X' ] ) = " expected"; 

#line 59 "../../src/error.c"
( abbrev_tbl [ 'Y' ] ) = " Y"; 

#line 60 "../../src/error.c"
( abbrev_tbl [ 'Z' ] ) = " Z"; 
} ; 

#line 66 "../../src/error.c"
extern int ext ( _auto__A10 ) int _auto__A10 ; 

#line 70 "../../src/error.c"
{ 
#line 70 "../../src/error.c"
if ( error_count == 0 ) error_count = 1 ; 

#line 73 "../../src/error.c"
exit ( error_count ) ; 
} ; 

#line 76 "../../src/error.c"
static int print_loc ( ) 
#line 77 "../../src/error.c"
{ 
#line 77 "../../src/error.c"
struct loc * _auto_sl ; 
struct loc * _auto_dl ; 

#line 78 "../../src/error.c"
_auto_sl = ( struct loc * ) ( Cstmt ? ( & Cstmt -> _stmt_where ) : ( ( 
#line 78 "../../src/error.c"
( struct loc * ) ( 0 ) ) ) ) ; 

#line 79 "../../src/error.c"
_auto_dl = ( struct loc * ) ( Cdcl ? ( & Cdcl -> _name_where ) : ( ( 
#line 79 "../../src/error.c"
( struct loc * ) ( 0 ) ) ) ) ; 

#line 81 "../../src/error.c"
if ( ( _auto_sl && _auto_dl ) && ( _auto_sl -> _loc_file == _auto_dl -> _loc_file ) ) if ( 
#line 81 "../../src/error.c"
_auto_sl -> _loc_line <= _auto_dl -> _loc_line ) 
#line 83 "../../src/error.c"
_loc_put ( ( struct loc * ) _auto_dl , ( struct _iobuf * ) 
#line 83 "../../src/error.c"
out_file ) ; 
else 
#line 85 "../../src/error.c"
_loc_put ( ( struct loc * ) _auto_sl , ( struct _iobuf * ) out_file ) ; 
else 
#line 86 "../../src/error.c"
if ( _auto_sl && ( _auto_sl -> _loc_file == curr_file ) ) _loc_put ( ( struct loc * ) 
#line 86 "../../src/error.c"
_auto_sl , ( struct _iobuf * ) out_file ) ; 
else 
#line 88 "../../src/error.c"
if ( _auto_dl && ( _auto_dl -> _loc_file == curr_file ) ) _loc_put ( ( struct loc * ) 
#line 88 "../../src/error.c"
_auto_dl , ( struct _iobuf * ) out_file ) ; 
else 
#line 91 "../../src/error.c"
_loc_put ( ( struct loc * ) ( & curloc ) , ( struct _iobuf * ) 
#line 91 "../../src/error.c"
out_file ) ; 
} ; 

#line 94 "../../src/error.c"
static int print_context ( ) 
#line 95 "../../src/error.c"
{ 
#line 95 "../../src/error.c"
( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? 
#line 95 "../../src/error.c"
( ( ( int ) ( ( * ( out_file -> __iobuf__ptr ++ ) ) = 
#line 95 "../../src/error.c"
10) ) ) : _flsbuf ( 10, ( struct _iobuf * ) out_file ) ; 
} ; 

#line 99 "../../src/error.c"
static char in_error = 0 ; 

#line 100 "../../src/error.c"
struct loc dummy_loc ; 

#line 102 "../../src/error.c"
extern int yyerror ( _auto_s ) char * _auto_s ; 

#line 103 "../../src/error.c"
{ 
#line 103 "../../src/error.c"
error ( ( int ) 0 , ( struct loc * ) ( & dummy_loc ) 
#line 103 "../../src/error.c"
, _auto_s ) ; 
} ; 

#line 107 "../../src/error.c"
extern int errorFPC__E ( _auto_s ) char * _auto_s ; 

#line 108 "../../src/error.c"
{ 
#line 108 "../../src/error.c"
int _auto__result ; 
register int * _auto_a ; 

#line 109 "../../src/error.c"
_auto_a = ( ( ( int * ) ( & _auto_s ) ) ) ; 

#line 110 "../../src/error.c"
{ 
#line 110 "../../src/error.c"
{ _auto__result = error ( ( int ) 0 , ( struct loc * ) ( 
#line 110 "../../src/error.c"
& dummy_loc ) , _auto_s , _auto_a [ 1 ] , _auto_a [ 2 ] , _auto_a [ 3 ] , _auto_a [ 
#line 110 "../../src/error.c"
4 ] , _auto_a [ 5 ] , _auto_a [ 6 ] , _auto_a [ 7 ] , _auto_a [ 8 ] ) 
#line 110 "../../src/error.c"
; 

#line 110 "../../src/error.c"
return _auto__result ; 
} } } ; 

#line 113 "../../src/error.c"
extern int errorFI_PC__E ( _auto_t , _auto_s ) int _auto_t ; 
char * _auto_s ; 

#line 114 "../../src/error.c"
{ 
#line 114 "../../src/error.c"
int _auto__result ; 
register int * _auto_a ; 

#line 115 "../../src/error.c"
_auto_a = ( ( ( int * ) ( & _auto_s ) ) ) ; 

#line 116 "../../src/error.c"
{ 
#line 116 "../../src/error.c"
{ _auto__result = error ( _auto_t , ( struct loc * ) ( & dummy_loc ) , _auto_s , 
#line 116 "../../src/error.c"
_auto_a [ 1 ] , _auto_a [ 2 ] , _auto_a [ 3 ] , _auto_a [ 4 ] , _auto_a [ 5 ] 
#line 116 "../../src/error.c"
, _auto_a [ 6 ] , _auto_a [ 7 ] , _auto_a [ 8 ] ) ; 

#line 116 "../../src/error.c"
return _auto__result ; 
} } } ; 

#line 119 "../../src/error.c"
extern int errorFPCloc__PC__E ( _auto_l , _auto_s ) struct loc * _auto_l ; 
char * _auto_s ; 

#line 120 "../../src/error.c"
{ 
#line 120 "../../src/error.c"
int _auto__result ; 
register int * _auto_a ; 

#line 121 "../../src/error.c"
_auto_a = ( ( ( int * ) ( & _auto_s ) ) ) ; 

#line 122 "../../src/error.c"
{ 
#line 122 "../../src/error.c"
{ _auto__result = error ( ( int ) 0 , ( struct loc * ) _auto_l , 
#line 122 "../../src/error.c"
_auto_s , _auto_a [ 1 ] , _auto_a [ 2 ] , _auto_a [ 3 ] , _auto_a [ 4 ] , _auto_a [ 
#line 122 "../../src/error.c"
5 ] , _auto_a [ 6 ] , _auto_a [ 7 ] , _auto_a [ 8 ] ) ; 

#line 122 "../../src/error.c"
return _auto__result ; 
} } } ; 

#line 125 "../../src/error.c"
extern int error ( _auto_t , _auto_lc , _auto_s ) int _auto_t ; 
struct loc * _auto_lc ; 
char * _auto_s ; 

#line 138 "../../src/error.c"
{ 
#line 138 "../../src/error.c"
int _auto__result ; 
struct _iobuf * _auto_of ; 
int _auto_c ; 
char _auto_format [ 3] ; 
int * _auto_a ; 
int _auto_argn ; 
int _auto_si ; 
int _auto_scp ; 
int _auto_ssp ; 

#line 139 "../../src/error.c"
_auto_of = out_file ; 

#line 142 "../../src/error.c"
_auto_a = ( & _auto_t ) ; 

#line 143 "../../src/error.c"
_auto_argn = 3 ; 

#line 146 "../../src/error.c"
_auto_si = 4; 

#line 147 "../../src/error.c"
_auto_scp = 4; 

#line 148 "../../src/error.c"
_auto_ssp = 4; 

#line 150 "../../src/error.c"
if ( ( ( ( _auto_si != _auto_ssp ) || ( _auto_si != _auto_scp ) ) || ( 
#line 150 "../../src/error.c"
_auto_ssp != _auto_scp ) ) || ( ( & ( _auto_a [ 2 ] ) ) != ( 
#line 150 "../../src/error.c"
( ( int * ) ( & _auto_s ) ) ) ) ) 
#line 150 "../../src/error.c"
{ 
#line 150 "../../src/error.c"
fprintf ( 
#line 150 "../../src/error.c"
( struct _iobuf * ) ( & ( _iob [ 2 ] ) ) , ( char 
#line 150 "../../src/error.c"
* ) "\n%s: this c can't handle varargs (%d,%d,%d -- %d %d)\n", prog_name , _auto_si , _auto_scp , _auto_ssp , & ( _auto_a [ 1 ] ) , & 
#line 150 "../../src/error.c"
_auto_s ) ; 

#line 154 "../../src/error.c"
ext ( 12 ) ; 
} 
#line 157 "../../src/error.c"
if ( ( _auto_t == 'w' ) && ( warn == 0 ) ) { 
#line 157 "../../src/error.c"
{ 
#line 157 "../../src/error.c"

#line 157 "../../src/error.c"
_auto__result = 0 ; 

#line 157 "../../src/error.c"
return _auto__result ; 
} } 
#line 159 "../../src/error.c"
if ( in_error ++ ) if ( ( _auto_t != 't' ) || ( 4 < 
#line 159 "../../src/error.c"
in_error ) ) 
#line 160 "../../src/error.c"
{ 
#line 160 "../../src/error.c"
fprintf ( ( struct _iobuf * ) ( & ( _iob [ 2 ] ) 
#line 160 "../../src/error.c"
) , ( char * ) "\nUPS!, error while handling error\n") ; 

#line 162 "../../src/error.c"
ext ( 13 ) ; 
} else 
#line 164 "../../src/error.c"
if ( _auto_t == 't' ) _auto_t = 'i' ; 

#line 167 "../../src/error.c"
out_file = ( struct _iobuf * ) ( & ( _iob [ 2 ] ) ) ; 

#line 168 "../../src/error.c"
if ( ! scan_started ) ( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 168 "../../src/error.c"
( ( int ) ( ( * ( out_file -> __iobuf__ptr ++ ) ) = 10) 
#line 168 "../../src/error.c"
) ) : _flsbuf ( 10, ( struct _iobuf * ) out_file ) ; 
else 
#line 171 "../../src/error.c"
if ( _auto_t == 't' ) ( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? 
#line 171 "../../src/error.c"
( ( ( int ) ( ( * ( out_file -> __iobuf__ptr ++ ) ) = 
#line 171 "../../src/error.c"
10) ) ) : _flsbuf ( 10, ( struct _iobuf * ) out_file ) ; 
else 
#line 173 "../../src/error.c"
if ( _auto_lc != ( & dummy_loc ) ) _loc_put ( ( struct loc * ) _auto_lc , 
#line 173 "../../src/error.c"
( struct _iobuf * ) out_file ) ; 
else 
#line 176 "../../src/error.c"
print_loc ( ) ; 

#line 178 "../../src/error.c"
switch ( _auto_t ) { 
#line 178 "../../src/error.c"
case 0 : fprintf ( ( struct _iobuf * ) out_file , ( 
#line 178 "../../src/error.c"
char * ) "error: ") ; 

#line 181 "../../src/error.c"
break ; 

#line 182 "../../src/error.c"
case 'w' : no_of_warnings ++ ; 

#line 184 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "warning: ") ; 

#line 185 "../../src/error.c"
break ; 

#line 186 "../../src/error.c"
case 's' : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "sorry, not implemented: ") ; 
#line 186 "../../src/error.c"

#line 188 "../../src/error.c"
break ; 

#line 189 "../../src/error.c"
case 'i' : if ( error_count ++ ) { 
#line 190 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( 
#line 190 "../../src/error.c"
char * ) "sorry, %s cannot recover from earlier errors\n", prog_name ) ; 

#line 192 "../../src/error.c"
ext ( 127 ) ; 
} else 
#line 195 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "internal %s error: ", prog_name ) 
#line 195 "../../src/error.c"
; 

#line 196 "../../src/error.c"
break ; 
} 
#line 199 "../../src/error.c"
while ( _auto_c = ( * ( _auto_s ++ ) ) ) { 
#line 199 "../../src/error.c"
if ( 
#line 199 "../../src/error.c"
( ( 'A' <= _auto_c ) && ( _auto_c <= 'Z' ) ) && ( abbrev_tbl [ 'A' ] ) 
#line 199 "../../src/error.c"
) 
#line 201 "../../src/error.c"
fputs ( ( char * ) ( abbrev_tbl [ _auto_c ] ) , ( struct _iobuf * 
#line 201 "../../src/error.c"
) out_file ) ; 
else 
#line 202 "../../src/error.c"
if ( _auto_c == '%' ) switch ( _auto_c = ( * ( _auto_s ++ ) ) 
#line 202 "../../src/error.c"
) 
#line 203 "../../src/error.c"
{ 
#line 203 "../../src/error.c"
case 'k' : { 
#line 205 "../../src/error.c"
TOK _auto_x ; 

#line 205 "../../src/error.c"
_auto_x = ( _auto_a [ _auto_argn ] ) ; 

#line 206 "../../src/error.c"
if ( ( ( 0 < _auto_x ) && ( _auto_x < 256 ) ) && ( 
#line 206 "../../src/error.c"
keys [ _auto_x ] ) ) 
#line 207 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) 
#line 207 "../../src/error.c"
" %s", keys [ _auto_x ] ) ; 
else 
#line 209 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " token(%d)", _auto_x ) ; 
#line 209 "../../src/error.c"

#line 210 "../../src/error.c"
_auto_argn ++ ; 

#line 211 "../../src/error.c"
break ; 
} 
#line 213 "../../src/error.c"
case 't' : { 
#line 214 "../../src/error.c"
Ptype _auto_tt ; 

#line 214 "../../src/error.c"
_auto_tt = ( ( ( struct type * ) ( _auto_a [ _auto_argn ] ) ) ) ; 
#line 214 "../../src/error.c"

#line 215 "../../src/error.c"
if ( _auto_tt ) { 
#line 215 "../../src/error.c"
TOK _auto_pm ; 

#line 217 "../../src/error.c"
extern int ntok ; 
int _auto_nt ; 

#line 216 "../../src/error.c"
_auto_pm = print_mode ; 

#line 218 "../../src/error.c"
_auto_nt = ntok ; 

#line 219 "../../src/error.c"
print_mode = 4 ; 

#line 220 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " ") ; 

#line 221 "../../src/error.c"
_type_dcl_print ( ( struct type * ) _auto_tt , ( struct name * ) 0 ) ; 

#line 222 "../../src/error.c"
print_mode = _auto_pm ; 

#line 223 "../../src/error.c"
ntok = _auto_nt ; 

#line 224 "../../src/error.c"
_auto_argn ++ ; 
} 
#line 226 "../../src/error.c"
break ; 
} 
#line 228 "../../src/error.c"
case 'n' : { 
#line 229 "../../src/error.c"
Pname _auto_nn ; 

#line 229 "../../src/error.c"
_auto_nn = ( ( ( struct name * ) ( _auto_a [ _auto_argn ] ) ) ) ; 
#line 229 "../../src/error.c"

#line 230 "../../src/error.c"
if ( _auto_nn ) { 
#line 230 "../../src/error.c"
TOK _auto_pm ; 

#line 231 "../../src/error.c"
_auto_pm = print_mode ; 

#line 232 "../../src/error.c"
print_mode = 4 ; 

#line 233 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " ") ; 

#line 234 "../../src/error.c"
_name_print ( ( struct name * ) _auto_nn ) ; 

#line 235 "../../src/error.c"
print_mode = _auto_pm ; 
} else 
#line 238 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " ?") ; 
#line 238 "../../src/error.c"

#line 239 "../../src/error.c"
_auto_argn ++ ; 

#line 240 "../../src/error.c"
break ; 
} 
#line 242 "../../src/error.c"
default : ( _auto_format [ 0 ] ) = '%' ; 

#line 244 "../../src/error.c"
( _auto_format [ 1 ] ) = _auto_c ; 

#line 245 "../../src/error.c"
( _auto_format [ 2 ] ) = '\0' ; 

#line 246 "../../src/error.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) _auto_format , _auto_a [ _auto_argn ++ ] 
#line 246 "../../src/error.c"
) ; 

#line 247 "../../src/error.c"
break ; 
} else 
#line 250 "../../src/error.c"
( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? ( ( ( 
#line 250 "../../src/error.c"
int ) ( ( * ( out_file -> __iobuf__ptr ++ ) ) = ( ( ( 
#line 250 "../../src/error.c"
unsigned int ) ( _auto_c ) ) ) ) ) ) : _flsbuf ( ( ( 
#line 250 "../../src/error.c"
unsigned int ) ( _auto_c ) ) , ( struct _iobuf * ) out_file ) ; 
} 
#line 253 "../../src/error.c"
if ( ! scan_started ) ext ( 4 ) ; 

#line 255 "../../src/error.c"
switch ( _auto_t ) { 
#line 255 "../../src/error.c"
case 'd' : case 't' : case 'w' : ( ( -- out_file -> 
#line 255 "../../src/error.c"
__iobuf__cnt ) >= 0 ) ? ( ( ( int ) ( ( * ( 
#line 255 "../../src/error.c"
out_file -> __iobuf__ptr ++ ) ) = 10) ) ) : _flsbuf ( 10, ( struct _iobuf * 
#line 255 "../../src/error.c"
) out_file ) ; 

#line 260 "../../src/error.c"
break ; 

#line 261 "../../src/error.c"
default : print_context ( ) ; 
} 
#line 264 "../../src/error.c"
fflush ( ( struct _iobuf * ) ( & ( _iob [ 2 ] ) ) ) 
#line 264 "../../src/error.c"
; 

#line 267 "../../src/error.c"
out_file = _auto_of ; 

#line 269 "../../src/error.c"
switch ( _auto_t ) { 
#line 269 "../../src/error.c"
case 't' : if ( -- in_error ) { 
#line 271 "../../src/error.c"
{ _auto__result = 0 
#line 271 "../../src/error.c"
; 

#line 271 "../../src/error.c"
return _auto__result ; 
} } 
#line 272 "../../src/error.c"
case 'i' : ext ( 127 ) ; 

#line 274 "../../src/error.c"
case 0 : case 's' : if ( 20 < ( ++ error_count ) ) { 
#line 276 "../../src/error.c"
fprintf ( 
#line 276 "../../src/error.c"
( struct _iobuf * ) ( & ( _iob [ 2 ] ) ) , ( char 
#line 276 "../../src/error.c"
* ) "Sorry, too many errors\n") ; 

#line 278 "../../src/error.c"
ext ( 7 ) ; 
} } 
#line 282 "../../src/error.c"
in_error = 0 ; 

#line 283 "../../src/error.c"
{ 
#line 283 "../../src/error.c"
{ _auto__result = 0 ; 

#line 283 "../../src/error.c"
return _auto__result ; 
} } } ; 

/* the end */
