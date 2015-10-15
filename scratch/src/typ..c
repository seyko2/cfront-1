#line 1 "../../src/typ.c"

/* <<cfront 10/10/85>> */
/* < ../../src/typ.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/typ.c"
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

#line 20 "../../src/typ.c"
Pbase short_type ; 

#line 21 "../../src/typ.c"
Pbase int_type ; 

#line 22 "../../src/typ.c"
Pbase char_type ; 

#line 23 "../../src/typ.c"
Pbase long_type ; 

#line 25 "../../src/typ.c"
Pbase uchar_type ; 

#line 26 "../../src/typ.c"
Pbase ushort_type ; 

#line 27 "../../src/typ.c"
Pbase uint_type ; 

#line 28 "../../src/typ.c"
Pbase ulong_type ; 

#line 30 "../../src/typ.c"
Pbase zero_type ; 

#line 31 "../../src/typ.c"
Pbase float_type ; 

#line 32 "../../src/typ.c"
Pbase double_type ; 

#line 33 "../../src/typ.c"
Pbase void_type ; 

#line 34 "../../src/typ.c"
Pbase any_type ; 

#line 36 "../../src/typ.c"
Ptype Pint_type ; 

#line 37 "../../src/typ.c"
Ptype Pchar_type ; 

#line 38 "../../src/typ.c"
Ptype Pvoid_type ; 

#line 39 "../../src/typ.c"
Ptype Pfctvec_type ; 

#line 41 "../../src/typ.c"
Ptable gtbl ; 

#line 42 "../../src/typ.c"
Ptable any_tbl ; 

#line 44 "../../src/typ.c"
Pname Cdcl = 0 ; 

#line 45 "../../src/typ.c"
Pstmt Cstmt = 0 ; 

#line 47 "../../src/typ.c"
bit new_type = 0 ; 

#line 49 "../../src/typ.c"
extern Ptype np_promote ( ) ; 

#line 50 "../../src/typ.c"
extern Ptype np_promote ( _auto_oper , _auto_r1 , _auto_r2 , _auto_t1 , _auto_t2 , _auto_p ) int _auto_oper ; 
int _auto_r1 ; 
int _auto_r2 ; 
struct type * _auto_t1 ; 
struct type * _auto_t2 ; 
int _auto_p ; 

#line 63 "../../src/typ.c"
{ 
#line 63 "../../src/typ.c"
Ptype _auto__result ; 

#line 64 "../../src/typ.c"
if ( _auto_r2 == 'A' ) { 
#line 64 "../../src/typ.c"
{ _auto__result = _auto_t1 ; 

#line 64 "../../src/typ.c"
return _auto__result ; 
} } 
#line 66 "../../src/typ.c"
switch ( _auto_r1 ) { 
#line 66 "../../src/typ.c"
case 'A' : { 
#line 67 "../../src/typ.c"
{ _auto__result = _auto_t2 ; 

#line 67 "../../src/typ.c"
return _auto__result ; 
} } 
#line 68 "../../src/typ.c"
case 'Z' : switch ( _auto_r2 ) { 
#line 69 "../../src/typ.c"
case 'Z' : { 
#line 70 "../../src/typ.c"
{ _auto__result = ( 
#line 70 "../../src/typ.c"
struct type * ) int_type ; 

#line 70 "../../src/typ.c"
return _auto__result ; 
} } 
#line 71 "../../src/typ.c"
case 'I' : case 'F' : { 
#line 72 "../../src/typ.c"
{ _auto__result = ( struct type * ) ( 
#line 72 "../../src/typ.c"
_auto_p ? _basetype_arit_conv ( ( struct basetype * ) ( ( ( struct basetype * ) ( _auto_t2 ) 
#line 72 "../../src/typ.c"
) ) , ( struct basetype * ) 0 ) : ( ( ( struct 
#line 72 "../../src/typ.c"
basetype * ) ( 0 ) ) ) ) ; 

#line 72 "../../src/typ.c"
return _auto__result ; 
} } 
#line 73 "../../src/typ.c"
case 'P' : { 
#line 73 "../../src/typ.c"
{ _auto__result = _auto_t2 ; 

#line 73 "../../src/typ.c"
return _auto__result ; 
} } 
#line 74 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "zero(%d)", 
#line 74 "../../src/typ.c"
_auto_r2 ) ; 
} 
#line 76 "../../src/typ.c"
case 'I' : switch ( _auto_r2 ) { 
#line 77 "../../src/typ.c"
case 'Z' : _auto_t2 = 0 ; 

#line 79 "../../src/typ.c"
case 'I' : case 'F' : { 
#line 80 "../../src/typ.c"
{ _auto__result = ( struct type * ) ( _auto_p ? _basetype_arit_conv ( 
#line 80 "../../src/typ.c"
( struct basetype * ) ( ( ( struct basetype * ) ( _auto_t1 ) ) ) 
#line 80 "../../src/typ.c"
, ( struct basetype * ) ( ( ( struct basetype * ) ( _auto_t2 ) ) 
#line 80 "../../src/typ.c"
) ) : ( ( ( struct basetype * ) ( 0 ) ) ) 
#line 80 "../../src/typ.c"
) ; 

#line 80 "../../src/typ.c"
return _auto__result ; 
} } 
#line 81 "../../src/typ.c"
case 'P' : switch ( _auto_oper ) { 
#line 81 "../../src/typ.c"
case 54 : case 126 : break ; 
#line 81 "../../src/typ.c"

#line 84 "../../src/typ.c"
default : errorFPC__E ( ( char * ) "int%kP", _auto_oper ) ; 

#line 84 "../../src/typ.c"
{ 
#line 84 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 84 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 86 "../../src/typ.c"
{ 
#line 86 "../../src/typ.c"
{ _auto__result = _auto_t2 ; 

#line 86 "../../src/typ.c"
return _auto__result ; 
} } 
#line 87 "../../src/typ.c"
case 108 : errorFPC__E ( ( char * ) "int%kF", _auto_oper ) ; 

#line 87 "../../src/typ.c"
{ 
#line 87 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 87 "../../src/typ.c"
return _auto__result ; 
} } 
#line 88 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "int(%d)", 
#line 88 "../../src/typ.c"
_auto_r2 ) ; 
} 
#line 90 "../../src/typ.c"
case 'F' : switch ( _auto_r2 ) { 
#line 91 "../../src/typ.c"
case 'Z' : _auto_t2 = 0 ; 

#line 93 "../../src/typ.c"
case 'I' : case 'F' : { 
#line 94 "../../src/typ.c"
{ _auto__result = ( struct type * ) ( _auto_p ? _basetype_arit_conv ( 
#line 94 "../../src/typ.c"
( struct basetype * ) ( ( ( struct basetype * ) ( _auto_t1 ) ) ) 
#line 94 "../../src/typ.c"
, ( struct basetype * ) ( ( ( struct basetype * ) ( _auto_t2 ) ) 
#line 94 "../../src/typ.c"
) ) : ( ( ( struct basetype * ) ( 0 ) ) ) 
#line 94 "../../src/typ.c"
) ; 

#line 94 "../../src/typ.c"
return _auto__result ; 
} } 
#line 95 "../../src/typ.c"
case 'P' : errorFPC__E ( ( char * ) "float%kP", _auto_oper ) ; 

#line 95 "../../src/typ.c"
{ 
#line 95 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 95 "../../src/typ.c"
return _auto__result ; 
} } 
#line 96 "../../src/typ.c"
case 108 : errorFPC__E ( ( char * ) "float%kF", _auto_oper ) ; 

#line 96 "../../src/typ.c"
{ 
#line 96 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 96 "../../src/typ.c"
return _auto__result ; 
} } 
#line 97 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "float(%d)", 
#line 97 "../../src/typ.c"
_auto_r2 ) ; 
} 
#line 99 "../../src/typ.c"
case 'P' : switch ( _auto_r2 ) { 
#line 100 "../../src/typ.c"
case 'Z' : { 
#line 101 "../../src/typ.c"
{ _auto__result = _auto_t1 ; 

#line 101 "../../src/typ.c"
return _auto__result ; 
} } 
#line 102 "../../src/typ.c"
case 'I' : switch ( _auto_oper ) { 
#line 103 "../../src/typ.c"
case 54 : case 55 : case 126 : 
#line 103 "../../src/typ.c"

#line 107 "../../src/typ.c"
case 127 : break ; 

#line 108 "../../src/typ.c"
default : errorFPC__E ( ( char * ) "P%k int", _auto_oper ) ; 

#line 108 "../../src/typ.c"
{ 
#line 108 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 108 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 110 "../../src/typ.c"
{ 
#line 110 "../../src/typ.c"
{ _auto__result = _auto_t1 ; 

#line 110 "../../src/typ.c"
return _auto__result ; 
} } 
#line 111 "../../src/typ.c"
case 'F' : errorFPC__E ( ( char * ) "P%k float", _auto_oper ) ; 

#line 111 "../../src/typ.c"
{ 
#line 111 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 111 "../../src/typ.c"
return _auto__result ; 
} } 
#line 112 "../../src/typ.c"
case 'P' : if ( _type_check ( ( struct type * ) _auto_t1 , _auto_t2 , 70 ) 
#line 112 "../../src/typ.c"
) 
#line 113 "../../src/typ.c"
{ 
#line 113 "../../src/typ.c"
switch ( _auto_oper ) { 
#line 114 "../../src/typ.c"
case 62 : case 63 : case 59 : case 61 : 
#line 114 "../../src/typ.c"

#line 119 "../../src/typ.c"
case 60 : case 58 : case 68 : if ( _type_check ( ( struct type * ) _auto_t2 , 
#line 119 "../../src/typ.c"
_auto_t1 , 70 ) == 0 ) 
#line 122 "../../src/typ.c"
goto zz ; 
} 
#line 124 "../../src/typ.c"
errorFPC__E ( ( char * ) "T mismatch:%t %k%t", _auto_t1 , _auto_oper , _auto_t2 ) ; 

#line 125 "../../src/typ.c"
{ 
#line 125 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 125 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 127 "../../src/typ.c"
zz : switch ( _auto_oper ) { 
#line 128 "../../src/typ.c"
case 55 : case 127 : { 
#line 130 "../../src/typ.c"
{ 
#line 130 "../../src/typ.c"

#line 130 "../../src/typ.c"
_auto__result = ( struct type * ) int_type ; 

#line 130 "../../src/typ.c"
return _auto__result ; 
} } 
#line 131 "../../src/typ.c"
case 54 : case 126 : errorFPC__E ( ( char * ) "P +P") ; 

#line 132 "../../src/typ.c"
{ 
#line 132 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 132 "../../src/typ.c"
return _auto__result ; 
} } 
#line 133 "../../src/typ.c"
default : { 
#line 133 "../../src/typ.c"
{ _auto__result = _auto_t1 ; 

#line 133 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 135 "../../src/typ.c"
case 108 : { 
#line 135 "../../src/typ.c"
{ _auto__result = _auto_t1 ; 

#line 135 "../../src/typ.c"
return _auto__result ; 
} } 
#line 136 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "pointer(%d)", 
#line 136 "../../src/typ.c"
_auto_r2 ) ; 
} 
#line 138 "../../src/typ.c"
case 108 : errorFPC__E ( ( char * ) "F%k%t", _auto_oper , _auto_t2 ) ; 

#line 140 "../../src/typ.c"
{ 
#line 140 "../../src/typ.c"
{ _auto__result = ( struct type * ) any_type ; 

#line 140 "../../src/typ.c"
return _auto__result ; 
} } 
#line 141 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "np_promote(%d,%d)", 
#line 141 "../../src/typ.c"
_auto_r1 , _auto_r2 ) ; 
} } ; 

#line 146 "../../src/typ.c"
TOK _type_kind ( _auto_this , _auto_oper , _auto_v ) register struct type * _auto_this ; 
int _auto_oper ; 
int _auto_v ; 

#line 151 "../../src/typ.c"
{ 
#line 151 "../../src/typ.c"
TOK _auto__result ; 
Ptype _auto_t ; 
char * _auto_s ; 

#line 152 "../../src/typ.c"
_auto_t = ( struct type * ) _auto_this ; 

#line 153 "../../src/typ.c"
_auto_s = ( _auto_oper ? ( keys [ _auto_oper ] ) : ( ( ( char * ) 
#line 153 "../../src/typ.c"
( 0 ) ) ) ) ; 

#line 154 "../../src/typ.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 155 "../../src/typ.c"
case 141 : { 
#line 156 "../../src/typ.c"
{ _auto__result = 'A' ; 

#line 156 "../../src/typ.c"
return _auto__result ; 
} } 
#line 157 "../../src/typ.c"
case 138 : { 
#line 157 "../../src/typ.c"
{ _auto__result = 'Z' ; 

#line 157 "../../src/typ.c"
return _auto__result ; 
} } 
#line 158 "../../src/typ.c"
case 114 : case 5 : case 29 : case 21 : case 22 : case 121 : 
#line 158 "../../src/typ.c"

#line 163 "../../src/typ.c"
{ 
#line 163 "../../src/typ.c"
{ _auto__result = 'I' ; 

#line 163 "../../src/typ.c"
return _auto__result ; 
} } 
#line 164 "../../src/typ.c"
case 15 : case 11 : if ( _auto_v == 'I' ) errorFPC__E ( ( char * 
#line 164 "../../src/typ.c"
) "float operand for %s", _auto_s ) ; 

#line 165 "../../src/typ.c"
{ 
#line 165 "../../src/typ.c"
{ _auto__result = 'F' ; 

#line 165 "../../src/typ.c"
return _auto__result ; 
} } 
#line 166 "../../src/typ.c"
case 125 : if ( _auto_v != 'P' ) errorFPC__E ( ( char * ) "P operand for %s", 
#line 166 "../../src/typ.c"
_auto_s ) ; 

#line 167 "../../src/typ.c"
switch ( _auto_oper ) { 
#line 167 "../../src/typ.c"
case 48 : case 49 : case 55 : case 54 : case 127 : 
#line 167 "../../src/typ.c"

#line 173 "../../src/typ.c"
case 126 : _type_tsizeof ( ( struct type * ) ( ( ( struct ptr * ) ( 
#line 173 "../../src/typ.c"
_auto_t ) ) ) -> _ptr_typ ) ; 
} 
#line 176 "../../src/typ.c"
{ 
#line 176 "../../src/typ.c"
{ _auto__result = 'P' ; 

#line 176 "../../src/typ.c"
return _auto__result ; 
} } 
#line 177 "../../src/typ.c"
case 158 : errorFPC__E ( ( char * ) "reference operand for %s", _auto_s ) ; 

#line 178 "../../src/typ.c"
{ 
#line 178 "../../src/typ.c"
{ _auto__result = 'A' ; 

#line 178 "../../src/typ.c"
return _auto__result ; 
} } 
#line 179 "../../src/typ.c"
case 110 : if ( _auto_v != 'P' ) errorFPC__E ( ( char * ) "V operand for %s", 
#line 179 "../../src/typ.c"
_auto_s ) ; 

#line 179 "../../src/typ.c"
{ 
#line 179 "../../src/typ.c"
{ _auto__result = 'P' ; 

#line 179 "../../src/typ.c"
return _auto__result ; 
} } 
#line 180 "../../src/typ.c"
case 97 : _auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) 
#line 180 "../../src/typ.c"
) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 180 "../../src/typ.c"
goto xx ; 

#line 181 "../../src/typ.c"
case 108 : if ( _auto_v != 'P' ) errorFPC__E ( ( char * ) "F operand for %s", _auto_s ) ; 
#line 181 "../../src/typ.c"

#line 181 "../../src/typ.c"
{ 
#line 181 "../../src/typ.c"
{ _auto__result = 108 ; 

#line 181 "../../src/typ.c"
return _auto__result ; 
} } 
#line 182 "../../src/typ.c"
case 6 : case 13 : errorFPC__E ( ( char * ) "%k operand for %s", _auto_this -> _node_base , 
#line 182 "../../src/typ.c"
_auto_s ) ; 

#line 183 "../../src/typ.c"
{ 
#line 183 "../../src/typ.c"
{ _auto__result = 'A' ; 

#line 183 "../../src/typ.c"
return _auto__result ; 
} } 
#line 184 "../../src/typ.c"
default : errorFPC__E ( ( char * ) "%t operand for %s", _auto_this , _auto_s ) ; 

#line 184 "../../src/typ.c"
{ 
#line 184 "../../src/typ.c"
{ _auto__result = 'A' ; 

#line 184 "../../src/typ.c"
return _auto__result ; 
} } } } ; 

#line 188 "../../src/typ.c"
int _type_dcl ( _auto_this , _auto_tbl ) register struct type * _auto_this ; 
struct table * _auto_tbl ; 

#line 196 "../../src/typ.c"
{ 
#line 196 "../../src/typ.c"
Ptype _auto_t ; 

#line 197 "../../src/typ.c"
_auto_t = ( struct type * ) _auto_this ; 

#line 199 "../../src/typ.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 199 "../../src/typ.c"
"type.dcl(this==0)") ; 

#line 200 "../../src/typ.c"
if ( _auto_tbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 200 "../../src/typ.c"
"type.dcl(%d)", _auto_tbl -> _node_base ) ; 

#line 202 "../../src/typ.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 203 "../../src/typ.c"
case 125 : case 158 : { 
#line 206 "../../src/typ.c"
Pptr _auto_p ; 

#line 206 "../../src/typ.c"
_auto_p = ( ( ( struct ptr * ) ( _auto_t ) ) ) ; 

#line 207 "../../src/typ.c"
_auto_t = _auto_p -> _ptr_typ ; 

#line 208 "../../src/typ.c"
if ( _auto_t -> _node_base == 97 ) { 
#line 208 "../../src/typ.c"
Ptype _auto_tt ; 

#line 209 "../../src/typ.c"
_auto_tt = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 
#line 209 "../../src/typ.c"

#line 210 "../../src/typ.c"
if ( _auto_tt -> _node_base == 108 ) _auto_p -> _ptr_typ = ( _auto_t = _auto_tt ) ; 

#line 211 "../../src/typ.c"
{ 
#line 211 "../../src/typ.c"
return ; 
} } 
#line 213 "../../src/typ.c"
goto xx ; 
} 
#line 216 "../../src/typ.c"
case 110 : { 
#line 217 "../../src/typ.c"
Pvec _auto_v ; 
Pexpr _auto_e ; 

#line 217 "../../src/typ.c"
_auto_v = ( ( ( struct vec * ) ( _auto_t ) ) ) ; 

#line 218 "../../src/typ.c"
_auto_e = _auto_v -> _vec_dim ; 

#line 219 "../../src/typ.c"
if ( _auto_e ) { 
#line 219 "../../src/typ.c"
Ptype _auto_et ; 

#line 221 "../../src/typ.c"
_auto_v -> _vec_dim = ( _auto_e = _expr_typ ( ( struct expr * ) _auto_e , _auto_tbl ) ) ; 

#line 222 "../../src/typ.c"
_auto_et = _auto_e -> _expr__O2.__C2_tp ; 

#line 223 "../../src/typ.c"
if ( ( _type_kind ( ( ( struct type * ) _auto_et ) , ( ( int 
#line 223 "../../src/typ.c"
) 0 ) , ( int ) 'I' ) ) == 'A' ) 
#line 223 "../../src/typ.c"
{ 
#line 223 "../../src/typ.c"
errorFPC__E ( ( 
#line 223 "../../src/typ.c"
char * ) "UN in array dimension") ; 
} else 
#line 226 "../../src/typ.c"
if ( ! new_type ) { 
#line 226 "../../src/typ.c"
int _auto_i ; 

#line 228 "../../src/typ.c"
Neval = 0 ; 

#line 229 "../../src/typ.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_e ) ; 

#line 230 "../../src/typ.c"
if ( Neval ) errorFPC__E ( ( char * ) "%s", Neval ) ; 
else 
#line 231 "../../src/typ.c"
if ( _auto_i == 0 ) errorFI_PC__E ( ( int ) 'w' , ( char * 
#line 231 "../../src/typ.c"
) "array dimension == 0") ; 
else 
#line 233 "../../src/typ.c"
if ( _auto_i < 0 ) { 
#line 233 "../../src/typ.c"
errorFPC__E ( ( char * ) "negative array dimension") ; 
#line 233 "../../src/typ.c"

#line 235 "../../src/typ.c"
_auto_i = 1 ; 
} 
#line 237 "../../src/typ.c"
_auto_v -> _vec_size = _auto_i ; 

#line 238 "../../src/typ.c"
if ( _auto_v -> _vec_dim && ( _auto_v -> _vec_dim -> _node_permanent == 0 ) ) _expr_del ( ( struct 
#line 238 "../../src/typ.c"
expr * ) _auto_v -> _vec_dim ) ; 

#line 239 "../../src/typ.c"
_auto_v -> _vec_dim = 0 ; 
} } 
#line 242 "../../src/typ.c"
_auto_t = _auto_v -> _vec_typ ; 

#line 243 "../../src/typ.c"
llx : switch ( _auto_t -> _node_base ) { 
#line 244 "../../src/typ.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 244 "../../src/typ.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 247 "../../src/typ.c"
goto llx ; 

#line 248 "../../src/typ.c"
case 108 : _auto_v -> _vec_typ = _auto_t ; 

#line 250 "../../src/typ.c"
break ; 

#line 251 "../../src/typ.c"
case 110 : if ( ( ( ( ( struct vec * ) ( _auto_t ) ) 
#line 251 "../../src/typ.c"
) -> _vec_dim == 0 ) && ( ( ( ( struct vec * ) ( 
#line 251 "../../src/typ.c"
_auto_t ) ) ) -> _vec_size == 0 ) ) 
#line 252 "../../src/typ.c"
errorFPC__E ( ( char * ) "null dimension (something like [][] seen)") 
#line 252 "../../src/typ.c"
; 
} 
#line 254 "../../src/typ.c"
goto xx ; 
} 
#line 257 "../../src/typ.c"
case 108 : { 
#line 258 "../../src/typ.c"
Pfct _auto_f ; 
Pname _auto_n ; 

#line 258 "../../src/typ.c"
_auto_f = ( ( ( struct fct * ) ( _auto_t ) ) ) ; 

#line 260 "../../src/typ.c"
for ( _auto_n = _auto_f -> _fct_argtype ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) _type_dcl ( ( struct type * ) 
#line 260 "../../src/typ.c"
_auto_n -> _expr__O2.__C2_tp , _auto_tbl ) ; 

#line 261 "../../src/typ.c"
_auto_t = _auto_f -> _fct_returns ; 

#line 262 "../../src/typ.c"
goto xx ; 
} 
#line 265 "../../src/typ.c"
case 114 : { 
#line 266 "../../src/typ.c"
Pbase _auto_f ; 
Pexpr _auto_e ; 
int _auto_i ; 
Ptype _auto_et ; 

#line 266 "../../src/typ.c"
_auto_f = ( ( ( struct basetype * ) ( _auto_t ) ) ) ; 

#line 267 "../../src/typ.c"
_auto_e = ( ( ( struct expr * ) ( _auto_f -> _basetype_b_name ) ) ) ; 

#line 270 "../../src/typ.c"
_auto_e = _expr_typ ( ( struct expr * ) _auto_e , _auto_tbl ) ; 

#line 271 "../../src/typ.c"
_auto_f -> _basetype_b_name = ( ( ( struct name * ) ( _auto_e ) ) ) ; 

#line 272 "../../src/typ.c"
_auto_et = _auto_e -> _expr__O2.__C2_tp ; 

#line 273 "../../src/typ.c"
if ( ( _type_kind ( ( ( struct type * ) _auto_et ) , ( ( int 
#line 273 "../../src/typ.c"
) 0 ) , ( int ) 'I' ) ) == 'A' ) 
#line 273 "../../src/typ.c"
{ 
#line 273 "../../src/typ.c"
errorFPC__E ( ( 
#line 273 "../../src/typ.c"
char * ) "UN in field size") ; 

#line 275 "../../src/typ.c"
_auto_i = 1 ; 
} else 
#line 277 "../../src/typ.c"
{ 
#line 277 "../../src/typ.c"
Neval = 0 ; 

#line 279 "../../src/typ.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_e ) ; 

#line 280 "../../src/typ.c"
if ( Neval ) errorFPC__E ( ( char * ) "%s", Neval ) ; 
else 
#line 282 "../../src/typ.c"
if ( _auto_i < 0 ) { 
#line 282 "../../src/typ.c"
errorFPC__E ( ( char * ) "negative field size") ; 
#line 282 "../../src/typ.c"

#line 284 "../../src/typ.c"
_auto_i = 1 ; 
} else 
#line 286 "../../src/typ.c"
if ( ( _type_tsizeof ( ( struct type * ) _auto_f -> _basetype__O1.__C1_b_fieldtype ) * BI_IN_BYTE ) 
#line 286 "../../src/typ.c"
< _auto_i ) 
#line 287 "../../src/typ.c"
errorFPC__E ( ( char * ) "field size > sizeof(%t)", _auto_f -> _basetype__O1.__C1_b_fieldtype ) ; 

#line 288 "../../src/typ.c"
if ( _auto_e && ( _auto_e -> _node_permanent == 0 ) ) _expr_del ( ( struct expr * ) 
#line 288 "../../src/typ.c"
_auto_e ) ; 
} 
#line 290 "../../src/typ.c"
_auto_f -> _basetype_b_bits = _auto_i ; 

#line 291 "../../src/typ.c"
_auto_f -> _basetype_b_name = 0 ; 

#line 292 "../../src/typ.c"
break ; 
} } } ; 

#line 298 "../../src/typ.c"
bit vrp_equiv ; 

#line 300 "../../src/typ.c"
bit _type_check ( _auto_this , _auto_t , _auto_oper ) register struct type * _auto_this ; 
struct type * _auto_t ; 
int _auto_oper ; 

#line 316 "../../src/typ.c"
{ 
#line 316 "../../src/typ.c"
bit _auto__result ; 
Ptype _auto_t1 ; 
Ptype _auto_t2 ; 
TOK _auto_b1 ; 
TOK _auto_b2 ; 
bit _auto_first ; 
TOK _auto_r ; 

#line 317 "../../src/typ.c"
_auto_t1 = ( struct type * ) _auto_this ; 

#line 318 "../../src/typ.c"
_auto_t2 = _auto_t ; 

#line 320 "../../src/typ.c"
_auto_first = 1 ; 

#line 323 "../../src/typ.c"
if ( ( _auto_t1 == 0 ) || ( _auto_t2 == 0 ) ) errorFI_PC__E ( ( 
#line 323 "../../src/typ.c"
int ) 'i' , ( char * ) "check(%d,%d,%d)", _auto_t1 , _auto_t2 , _auto_oper ) ; 

#line 325 "../../src/typ.c"
vrp_equiv = 0 ; 

#line 327 "../../src/typ.c"
while ( _auto_t1 && _auto_t2 ) { 
#line 327 "../../src/typ.c"
top : if ( _auto_t1 == _auto_t2 ) { 
#line 330 "../../src/typ.c"
{ _auto__result = 0 
#line 330 "../../src/typ.c"
; 

#line 330 "../../src/typ.c"
return _auto__result ; 
} } 
#line 331 "../../src/typ.c"
if ( ( _auto_t1 -> _node_base == 141 ) || ( _auto_t2 -> _node_base == 141 ) ) 
#line 331 "../../src/typ.c"

#line 331 "../../src/typ.c"
{ 
#line 331 "../../src/typ.c"
{ _auto__result = 0 ; 

#line 331 "../../src/typ.c"
return _auto__result ; 
} } 
#line 333 "../../src/typ.c"
_auto_b1 = _auto_t1 -> _node_base ; 

#line 334 "../../src/typ.c"
if ( _auto_b1 == 97 ) { 
#line 334 "../../src/typ.c"
_auto_t1 = ( ( ( struct basetype * ) ( _auto_t1 ) 
#line 334 "../../src/typ.c"
) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 336 "../../src/typ.c"
goto top ; 
} 
#line 339 "../../src/typ.c"
_auto_b2 = _auto_t2 -> _node_base ; 

#line 340 "../../src/typ.c"
if ( _auto_b2 == 97 ) { 
#line 340 "../../src/typ.c"
_auto_t2 = ( ( ( struct basetype * ) ( _auto_t2 ) 
#line 340 "../../src/typ.c"
) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 342 "../../src/typ.c"
goto top ; 
} 
#line 345 "../../src/typ.c"
if ( _auto_b1 != _auto_b2 ) { 
#line 345 "../../src/typ.c"
switch ( _auto_b1 ) { 
#line 346 "../../src/typ.c"
case 125 : if ( 
#line 346 "../../src/typ.c"
_auto_b1 != _auto_b2 ) 
#line 349 "../../src/typ.c"
vrp_equiv = 1 ; 

#line 350 "../../src/typ.c"
switch ( _auto_b2 ) { 
#line 350 "../../src/typ.c"
case 125 : case 110 : _auto_t1 = ( ( ( struct ptr * 
#line 350 "../../src/typ.c"
) ( _auto_t1 ) ) ) -> _ptr_typ ; 

#line 355 "../../src/typ.c"
_auto_t2 = ( ( ( struct vec * ) ( _auto_t2 ) ) ) -> _vec_typ ; 

#line 356 "../../src/typ.c"
_auto_first = 0 ; 

#line 357 "../../src/typ.c"
goto top ; 

#line 358 "../../src/typ.c"
case 108 : _auto_t1 = ( ( ( struct ptr * ) ( _auto_t1 ) ) ) -> 
#line 358 "../../src/typ.c"
_ptr_typ ; 

#line 360 "../../src/typ.c"
if ( ( _auto_first == 0 ) || ( _auto_t1 -> _node_base != _auto_b2 ) ) { 
#line 360 "../../src/typ.c"
{ 
#line 360 "../../src/typ.c"

#line 360 "../../src/typ.c"
_auto__result = 1 ; 

#line 360 "../../src/typ.c"
return _auto__result ; 
} } 
#line 361 "../../src/typ.c"
_auto_first = 0 ; 

#line 362 "../../src/typ.c"
goto top ; 
} 
#line 364 "../../src/typ.c"
_auto_first = 0 ; 

#line 365 "../../src/typ.c"
break ; 

#line 366 "../../src/typ.c"
case 110 : if ( _auto_b1 != _auto_b2 ) vrp_equiv = 1 ; 

#line 368 "../../src/typ.c"
_auto_first = 0 ; 

#line 369 "../../src/typ.c"
switch ( _auto_b2 ) { 
#line 369 "../../src/typ.c"
case 125 : switch ( _auto_oper ) { 
#line 372 "../../src/typ.c"
case 0 : case 
#line 372 "../../src/typ.c"
136 : 
#line 375 "../../src/typ.c"
case 70 : case 78 : break ; 

#line 378 "../../src/typ.c"
case 76 : default : { 
#line 380 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 380 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 382 "../../src/typ.c"
_auto_t1 = ( ( ( struct vec * ) ( _auto_t1 ) ) ) 
#line 382 "../../src/typ.c"
-> _vec_typ ; 

#line 383 "../../src/typ.c"
_auto_t2 = ( ( ( struct ptr * ) ( _auto_t2 ) ) ) -> _ptr_typ ; 

#line 384 "../../src/typ.c"
goto top ; 
} 
#line 386 "../../src/typ.c"
break ; 
} 
#line 391 "../../src/typ.c"
goto base_check ; 
} 
#line 394 "../../src/typ.c"
switch ( _auto_b1 ) { 
#line 394 "../../src/typ.c"
case 110 : _auto_first = 0 ; 

#line 397 "../../src/typ.c"
{ 
#line 397 "../../src/typ.c"
Pvec _auto_v1 ; 
Pvec _auto_v2 ; 

#line 397 "../../src/typ.c"
_auto_v1 = ( ( ( struct vec * ) ( _auto_t1 ) ) ) ; 

#line 398 "../../src/typ.c"
_auto_v2 = ( ( ( struct vec * ) ( _auto_t2 ) ) ) ; 

#line 399 "../../src/typ.c"
if ( _auto_v1 -> _vec_size != _auto_v2 -> _vec_size ) switch ( _auto_oper ) { 
#line 400 "../../src/typ.c"
case 76 : case 78 : 
#line 400 "../../src/typ.c"

#line 403 "../../src/typ.c"
{ 
#line 403 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 403 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 405 "../../src/typ.c"
_auto_t1 = _auto_v1 -> _vec_typ ; 

#line 406 "../../src/typ.c"
_auto_t2 = _auto_v2 -> _vec_typ ; 
} 
#line 408 "../../src/typ.c"
break ; 

#line 410 "../../src/typ.c"
case 125 : case 158 : _auto_first = 0 ; 

#line 413 "../../src/typ.c"
{ 
#line 413 "../../src/typ.c"
Pptr _auto_p1 ; 
Pptr _auto_p2 ; 

#line 413 "../../src/typ.c"
_auto_p1 = ( ( ( struct ptr * ) ( _auto_t1 ) ) ) ; 

#line 414 "../../src/typ.c"
_auto_p2 = ( ( ( struct ptr * ) ( _auto_t2 ) ) ) ; 

#line 415 "../../src/typ.c"
if ( _auto_p2 -> _ptr_rdo && ( _auto_p1 -> _ptr_rdo == 0 ) ) { 
#line 415 "../../src/typ.c"
{ _auto__result = 1 ; 
#line 415 "../../src/typ.c"

#line 415 "../../src/typ.c"
return _auto__result ; 
} } 
#line 416 "../../src/typ.c"
_auto_t1 = _auto_p1 -> _ptr_typ ; 

#line 417 "../../src/typ.c"
_auto_t2 = _auto_p2 -> _ptr_typ ; 
} 
#line 419 "../../src/typ.c"
break ; 

#line 421 "../../src/typ.c"
case 108 : _auto_first = 0 ; 

#line 423 "../../src/typ.c"
{ 
#line 423 "../../src/typ.c"
Pfct _auto_f1 ; 
Pfct _auto_f2 ; 
Pname _auto_a1 ; 
Pname _auto_a2 ; 
TOK _auto_k1 ; 
TOK _auto_k2 ; 
int _auto_n1 ; 
int _auto_n2 ; 

#line 423 "../../src/typ.c"
_auto_f1 = ( ( ( struct fct * ) ( _auto_t1 ) ) ) ; 

#line 424 "../../src/typ.c"
_auto_f2 = ( ( ( struct fct * ) ( _auto_t2 ) ) ) ; 

#line 425 "../../src/typ.c"
_auto_a1 = _auto_f1 -> _fct_argtype ; 

#line 426 "../../src/typ.c"
_auto_a2 = _auto_f2 -> _fct_argtype ; 

#line 427 "../../src/typ.c"
_auto_k1 = _auto_f1 -> _fct_nargs_known ; 

#line 428 "../../src/typ.c"
_auto_k2 = _auto_f2 -> _fct_nargs_known ; 

#line 429 "../../src/typ.c"
_auto_n1 = _auto_f1 -> _fct_nargs ; 

#line 430 "../../src/typ.c"
_auto_n2 = _auto_f2 -> _fct_nargs ; 

#line 432 "../../src/typ.c"
if ( ( _auto_k1 && ( _auto_k2 == 0 ) ) || ( _auto_k2 && ( _auto_k1 == 
#line 432 "../../src/typ.c"
0 ) ) ) 
#line 432 "../../src/typ.c"
{ 
#line 432 "../../src/typ.c"
if ( _auto_f2 -> _fct_body == 0 ) { 
#line 433 "../../src/typ.c"
{ _auto__result = 
#line 433 "../../src/typ.c"
1 ; 

#line 433 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 436 "../../src/typ.c"
if ( ( ( _auto_n1 != _auto_n2 ) && _auto_k1 ) && _auto_k2 ) { 
#line 436 "../../src/typ.c"

#line 436 "../../src/typ.c"

#line 437 "../../src/typ.c"
goto aaa ; 
} else 
#line 439 "../../src/typ.c"
if ( _auto_a1 && _auto_a2 ) { 
#line 439 "../../src/typ.c"
int _auto_i ; 

#line 440 "../../src/typ.c"
_auto_i = 0 ; 

#line 441 "../../src/typ.c"
while ( _auto_a1 && _auto_a2 ) { 
#line 441 "../../src/typ.c"
_auto_i ++ ; 

#line 443 "../../src/typ.c"
if ( _type_check ( ( struct type * ) _auto_a1 -> _expr__O2.__C2_tp , ( struct type * ) _auto_a2 -> 
#line 443 "../../src/typ.c"
_expr__O2.__C2_tp , _auto_oper ? 76 : 0) ) 
#line 443 "../../src/typ.c"
{ 
#line 443 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 443 "../../src/typ.c"
return _auto__result ; 
} } 
#line 444 "../../src/typ.c"
_auto_a1 = _auto_a1 -> _name_n_list ; 

#line 445 "../../src/typ.c"
_auto_a2 = _auto_a2 -> _name_n_list ; 
} 
#line 447 "../../src/typ.c"
if ( _auto_a1 || _auto_a2 ) goto aaa ; 
} else 
#line 449 "../../src/typ.c"
if ( _auto_a1 || _auto_a2 ) { 
#line 449 "../../src/typ.c"
aaa : if ( _auto_k1 == 155 ) { 
#line 451 "../../src/typ.c"
switch 
#line 451 "../../src/typ.c"
( _auto_oper ) 
#line 452 "../../src/typ.c"
{ 
#line 452 "../../src/typ.c"
case 0 : if ( _auto_a2 && ( _auto_k2 == 0 ) ) 
#line 452 "../../src/typ.c"

#line 454 "../../src/typ.c"
break ; 

#line 455 "../../src/typ.c"
{ 
#line 455 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 455 "../../src/typ.c"
return _auto__result ; 
} } 
#line 456 "../../src/typ.c"
case 70 : if ( _auto_a2 && ( _auto_k2 == 0 ) ) break ; 
#line 456 "../../src/typ.c"

#line 458 "../../src/typ.c"
{ 
#line 458 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 458 "../../src/typ.c"
return _auto__result ; 
} } 
#line 459 "../../src/typ.c"
case 136 : if ( _auto_a1 ) { 
#line 460 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 460 "../../src/typ.c"
return _auto__result ; 
} } 
#line 461 "../../src/typ.c"
break ; 

#line 462 "../../src/typ.c"
case 76 : case 78 : { 
#line 464 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 464 "../../src/typ.c"
return _auto__result ; 
} } } } else 
#line 467 "../../src/typ.c"
if ( _auto_k2 == 155 ) { 
#line 467 "../../src/typ.c"
{ 
#line 468 "../../src/typ.c"
{ _auto__result = 1 ; 
#line 468 "../../src/typ.c"

#line 468 "../../src/typ.c"
return _auto__result ; 
} } } else 
#line 470 "../../src/typ.c"
if ( _auto_k1 || _auto_k2 ) { 
#line 470 "../../src/typ.c"
{ 
#line 471 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 471 "../../src/typ.c"
return _auto__result ; 
} } } } 
#line 474 "../../src/typ.c"
_auto_t1 = _auto_f1 -> _fct_returns ; 

#line 475 "../../src/typ.c"
_auto_t2 = _auto_f2 -> _fct_returns ; 
} 
#line 477 "../../src/typ.c"
break ; 

#line 479 "../../src/typ.c"
case 114 : goto field_check ; 

#line 481 "../../src/typ.c"
case 5 : case 29 : case 21 : case 22 : goto int_check ; 

#line 486 "../../src/typ.c"
case 15 : case 11 : goto float_check ; 

#line 489 "../../src/typ.c"
case 121 : goto enum_check ; 

#line 491 "../../src/typ.c"
case 119 : goto cla_check ; 

#line 493 "../../src/typ.c"
case 138 : case 38 : { 
#line 495 "../../src/typ.c"
{ _auto__result = 0 ; 

#line 495 "../../src/typ.c"
return _auto__result ; 
} } 
#line 500 "../../src/typ.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "type.check(o=%d %d %d)", 
#line 500 "../../src/typ.c"
_auto_oper , _auto_b1 , _auto_b2 ) ; 
} } 
#line 505 "../../src/typ.c"
if ( _auto_t1 || _auto_t2 ) { 
#line 505 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 505 "../../src/typ.c"
return _auto__result ; 
} } 
#line 506 "../../src/typ.c"
{ 
#line 506 "../../src/typ.c"
{ _auto__result = 0 ; 

#line 506 "../../src/typ.c"
return _auto__result ; 
} } 
#line 510 "../../src/typ.c"
field_check : switch ( _auto_oper ) { 
#line 511 "../../src/typ.c"
case 0 : case 136 : errorFI_PC__E ( ( 
#line 511 "../../src/typ.c"
int ) 'i' , ( char * ) "check field?") ; 
} 
#line 516 "../../src/typ.c"
{ 
#line 516 "../../src/typ.c"
{ _auto__result = 0 ; 

#line 516 "../../src/typ.c"
return _auto__result ; 
} } 
#line 518 "../../src/typ.c"
float_check : if ( _auto_first == 0 ) { 
#line 519 "../../src/typ.c"
if ( ( _auto_b1 != _auto_b2 ) 
#line 519 "../../src/typ.c"
&& ( _auto_b2 != 138 ) ) 
#line 520 "../../src/typ.c"
{ 
#line 520 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 520 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 522 "../../src/typ.c"
goto const_check ; 

#line 524 "../../src/typ.c"
enum_check : int_check : const_check : if ( ( ( _auto_first == 0 ) && _type_tconst ( ( struct 
#line 524 "../../src/typ.c"
type * ) _auto_t2 ) ) && ( _type_tconst ( ( struct type * ) _auto_t1 ) == 0 
#line 524 "../../src/typ.c"
) ) 
#line 527 "../../src/typ.c"
{ 
#line 527 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 527 "../../src/typ.c"
return _auto__result ; 
} } 
#line 528 "../../src/typ.c"
{ 
#line 528 "../../src/typ.c"
{ _auto__result = 0 ; 

#line 528 "../../src/typ.c"
return _auto__result ; 
} } 
#line 530 "../../src/typ.c"
cla_check : { 
#line 531 "../../src/typ.c"
Pbase _auto_c1 ; 
Pbase _auto_c2 ; 
Pname _auto_n1 ; 
Pname _auto_n2 ; 

#line 531 "../../src/typ.c"
_auto_c1 = ( ( ( struct basetype * ) ( _auto_t1 ) ) ) ; 

#line 532 "../../src/typ.c"
_auto_c2 = ( ( ( struct basetype * ) ( _auto_t2 ) ) ) ; 

#line 533 "../../src/typ.c"
_auto_n1 = _auto_c1 -> _basetype_b_name ; 

#line 534 "../../src/typ.c"
_auto_n2 = _auto_c2 -> _basetype_b_name ; 

#line 536 "../../src/typ.c"
if ( _auto_n1 == _auto_n2 ) goto const_check ; 

#line 537 "../../src/typ.c"
if ( _auto_first ) { 
#line 537 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 537 "../../src/typ.c"
return _auto__result ; 
} } 
#line 538 "../../src/typ.c"
switch ( _auto_oper ) { 
#line 538 "../../src/typ.c"
case 0 : case 76 : { 
#line 541 "../../src/typ.c"
{ _auto__result = 
#line 541 "../../src/typ.c"
1 ; 

#line 541 "../../src/typ.c"
return _auto__result ; 
} } 
#line 542 "../../src/typ.c"
case 136 : case 70 : case 28 : case 78 : { 
#line 546 "../../src/typ.c"
Pname _auto_b ; 
Pclass _auto_cl ; 

#line 548 "../../src/typ.c"
_auto_b = _auto_n2 ; 

#line 550 "../../src/typ.c"
while ( _auto_b ) { 
#line 550 "../../src/typ.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_b -> _expr__O2.__C2_tp ) 
#line 550 "../../src/typ.c"
) ) ; 

#line 552 "../../src/typ.c"
_auto_b = _auto_cl -> _classdef_clbase ; 

#line 554 "../../src/typ.c"
if ( _auto_b && ( _auto_cl -> _classdef_pubbase == 0 ) ) { 
#line 554 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 554 "../../src/typ.c"
return _auto__result ; 
} } 
#line 555 "../../src/typ.c"
if ( _auto_b == _auto_n1 ) { 
#line 555 "../../src/typ.c"
Nstd ++ ; 

#line 557 "../../src/typ.c"
goto const_check ; 
} } 
#line 560 "../../src/typ.c"
{ 
#line 560 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 560 "../../src/typ.c"
return _auto__result ; 
} } } } } 
#line 564 "../../src/typ.c"
goto const_check ; 

#line 566 "../../src/typ.c"
base_check : if ( _auto_oper ) if ( _auto_first ) { 
#line 569 "../../src/typ.c"
if ( ( _auto_b1 == 38 ) || 
#line 569 "../../src/typ.c"
( _auto_b2 == 38 ) ) 
#line 570 "../../src/typ.c"
{ 
#line 570 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 570 "../../src/typ.c"
return _auto__result ; 
} } } else 
#line 572 "../../src/typ.c"
{ 
#line 572 "../../src/typ.c"
if ( _auto_b1 == 38 ) { 
#line 573 "../../src/typ.c"
register Ptype _auto_tx ; 

#line 574 "../../src/typ.c"
_auto_tx = ( struct type * ) _auto_this ; 

#line 575 "../../src/typ.c"
txloop : switch ( _auto_tx -> _node_base ) { 
#line 576 "../../src/typ.c"
default : { 
#line 577 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 577 "../../src/typ.c"
return _auto__result ; 
} } 
#line 578 "../../src/typ.c"
case 38 : break ; 

#line 579 "../../src/typ.c"
case 125 : case 110 : _auto_tx = ( ( ( struct vec * ) ( _auto_tx ) ) 
#line 579 "../../src/typ.c"
) -> _vec_typ ; 

#line 580 "../../src/typ.c"
goto txloop ; 

#line 581 "../../src/typ.c"
case 97 : _auto_tx = ( ( ( struct basetype * ) ( _auto_tx ) ) ) -> 
#line 581 "../../src/typ.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 581 "../../src/typ.c"
goto txloop ; 
} 
#line 584 "../../src/typ.c"
_auto_tx = _auto_t ; 

#line 585 "../../src/typ.c"
bloop : switch ( _auto_tx -> _node_base ) { 
#line 586 "../../src/typ.c"
default : { 
#line 587 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 587 "../../src/typ.c"
return _auto__result ; 
} } 
#line 588 "../../src/typ.c"
case 110 : case 125 : case 108 : Nstd ++ ; 

#line 590 "../../src/typ.c"
goto const_check ; 

#line 591 "../../src/typ.c"
case 97 : _auto_tx = ( ( ( struct basetype * ) ( _auto_tx ) ) ) -> 
#line 591 "../../src/typ.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 591 "../../src/typ.c"
goto bloop ; 
} } 
#line 594 "../../src/typ.c"
if ( _auto_b2 != 138 ) { 
#line 594 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 594 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 597 "../../src/typ.c"
switch ( _auto_oper ) { 
#line 597 "../../src/typ.c"
case 0 : { 
#line 599 "../../src/typ.c"
{ _auto__result = 1 ; 
#line 599 "../../src/typ.c"

#line 599 "../../src/typ.c"
return _auto__result ; 
} } 
#line 600 "../../src/typ.c"
case 76 : case 78 : switch ( _auto_b1 ) { 
#line 602 "../../src/typ.c"
case 121 : case 138 : 
#line 602 "../../src/typ.c"

#line 605 "../../src/typ.c"
case 5 : case 29 : case 21 : switch ( _auto_b2 ) { 
#line 608 "../../src/typ.c"
case 121 : case 138 : 
#line 608 "../../src/typ.c"

#line 611 "../../src/typ.c"
case 5 : case 29 : case 21 : case 114 : goto const_check ; 
} 
#line 617 "../../src/typ.c"
{ 
#line 617 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 617 "../../src/typ.c"
return _auto__result ; 
} } 
#line 618 "../../src/typ.c"
case 22 : switch ( _auto_b2 ) { 
#line 619 "../../src/typ.c"
case 138 : case 121 : case 5 : 
#line 619 "../../src/typ.c"

#line 623 "../../src/typ.c"
case 29 : case 21 : case 114 : Nstd ++ ; 

#line 627 "../../src/typ.c"
goto const_check ; 
} 
#line 629 "../../src/typ.c"
{ 
#line 629 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 629 "../../src/typ.c"
return _auto__result ; 
} } 
#line 630 "../../src/typ.c"
case 15 : switch ( _auto_b2 ) { 
#line 631 "../../src/typ.c"
case 138 : Nstd ++ ; 

#line 634 "../../src/typ.c"
case 15 : case 11 : goto const_check ; 
} 
#line 638 "../../src/typ.c"
{ 
#line 638 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 638 "../../src/typ.c"
return _auto__result ; 
} } 
#line 639 "../../src/typ.c"
case 11 : switch ( _auto_b2 ) { 
#line 640 "../../src/typ.c"
case 138 : case 121 : case 5 : 
#line 640 "../../src/typ.c"

#line 644 "../../src/typ.c"
case 29 : case 21 : Nstd ++ ; 

#line 647 "../../src/typ.c"
case 15 : case 11 : goto const_check ; 
} 
#line 651 "../../src/typ.c"
{ 
#line 651 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 651 "../../src/typ.c"
return _auto__result ; 
} } 
#line 652 "../../src/typ.c"
case 125 : switch ( _auto_b2 ) { 
#line 653 "../../src/typ.c"
case 138 : Nstd ++ ; 

#line 656 "../../src/typ.c"
goto const_check ; 
} 
#line 658 "../../src/typ.c"
case 158 : case 110 : case 119 : case 108 : { 
#line 662 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 662 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 664 "../../src/typ.c"
case 136 : case 70 : case 28 : switch ( _auto_b1 ) { 
#line 667 "../../src/typ.c"
case 
#line 667 "../../src/typ.c"
119 : 
#line 669 "../../src/typ.c"
{ 
#line 669 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 669 "../../src/typ.c"
return _auto__result ; 
} } 
#line 670 "../../src/typ.c"
case 121 : case 138 : case 5 : case 29 : case 21 : case 22 : 
#line 670 "../../src/typ.c"

#line 676 "../../src/typ.c"
_auto_r = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , 70 , ( int ) 
#line 676 "../../src/typ.c"
'P' ) ) ; 

#line 677 "../../src/typ.c"
switch ( _auto_r ) { 
#line 677 "../../src/typ.c"
case 'A' : { 
#line 678 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 678 "../../src/typ.c"
return _auto__result ; 
} } 
#line 679 "../../src/typ.c"
case 'Z' : case 'I' : break ; 

#line 681 "../../src/typ.c"
case 'F' : errorFI_PC__E ( ( int ) 'w' , ( char * ) "double assigned to int") ; 

#line 681 "../../src/typ.c"
break ; 

#line 682 "../../src/typ.c"
case 'P' : { 
#line 682 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 682 "../../src/typ.c"
return _auto__result ; 
} } } 
#line 684 "../../src/typ.c"
break ; 

#line 685 "../../src/typ.c"
case 15 : case 11 : _auto_r = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , 
#line 685 "../../src/typ.c"
70 , ( int ) 'N' ) ) ; 

#line 688 "../../src/typ.c"
break ; 

#line 689 "../../src/typ.c"
case 110 : { 
#line 690 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 690 "../../src/typ.c"
return _auto__result ; 
} } 
#line 691 "../../src/typ.c"
case 125 : _auto_r = ( _type_kind ( ( ( struct type * ) _auto_t2 ) , 
#line 691 "../../src/typ.c"
70 , ( int ) 'P' ) ) ; 

#line 693 "../../src/typ.c"
switch ( _auto_r ) { 
#line 693 "../../src/typ.c"
case 'A' : { 
#line 694 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 694 "../../src/typ.c"
return _auto__result ; 
} } 
#line 695 "../../src/typ.c"
case 'Z' : case 'P' : break ; 

#line 697 "../../src/typ.c"
case 'I' : case 'F' : { 
#line 698 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 698 "../../src/typ.c"
return _auto__result ; 
} } 
#line 699 "../../src/typ.c"
case 108 : { 
#line 700 "../../src/typ.c"
Pptr _auto_p ; 

#line 700 "../../src/typ.c"
_auto_p = ( ( ( struct ptr * ) ( _auto_t1 ) ) ) ; 

#line 701 "../../src/typ.c"
if ( _auto_p -> _ptr_typ -> _node_base != 108 ) { 
#line 701 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 701 "../../src/typ.c"
return _auto__result ; 
} } } } 
#line 704 "../../src/typ.c"
break ; 

#line 705 "../../src/typ.c"
case 158 : { 
#line 719 "../../src/typ.c"
{ _auto__result = 1 ; 

#line 719 "../../src/typ.c"
return _auto__result ; 
} } 
#line 720 "../../src/typ.c"
case 108 : switch ( _auto_oper ) { 
#line 721 "../../src/typ.c"
case 136 : case 70 : { 
#line 724 "../../src/typ.c"
{ 
#line 724 "../../src/typ.c"

#line 724 "../../src/typ.c"
_auto__result = 1 ; 

#line 724 "../../src/typ.c"
return _auto__result ; 
} } } } 
#line 727 "../../src/typ.c"
break ; 
} 
#line 729 "../../src/typ.c"
goto const_check ; 
} ; 

/* the end */
