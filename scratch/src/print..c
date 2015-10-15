#line 1 "../../src/print.c"

/* <<cfront 10/10/85>> */
/* < ../../src/print.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/print.c"
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

#line 20 "../../src/print.c"
extern struct _iobuf * out_file ; 

#line 26 "../../src/print.c"
bit print_mode = 0 ; 

#line 27 "../../src/print.c"
extern int ntok ; 

#line 28 "../../src/print.c"
int ntok = 0 ; 

#line 29 "../../src/print.c"
int forced_sm = 0 ; 

#line 30 "../../src/print.c"
bit Cast = 0 ; 

#line 31 "../../src/print.c"
Pin curr_icall ; 

#line 33 "../../src/print.c"
int MAIN = 0 ; 

#line 35 "../../src/print.c"
int puttok ( _auto_t ) int _auto_t ; 

#line 39 "../../src/print.c"
{ 
#line 39 "../../src/print.c"
char * _auto_s ; 

#line 41 "../../src/print.c"
if ( ( _auto_t <= 0 ) || ( 256 <= _auto_t ) ) errorFPC__E ( ( char 
#line 41 "../../src/print.c"
* ) "illegal token %d", _auto_t ) ; 

#line 42 "../../src/print.c"
_auto_s = ( keys [ _auto_t ] ) ; 

#line 43 "../../src/print.c"
if ( _auto_s == 0 ) errorFPC__E ( ( char * ) "V representation token %d", _auto_t ) ; 

#line 44 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", _auto_s ) ; 

#line 45 "../../src/print.c"
if ( 12 < ( ntok ++ ) ) { 
#line 45 "../../src/print.c"
forced_sm = 1 ; 

#line 47 "../../src/print.c"
ntok = 0 ; 

#line 49 "../../src/print.c"
_loc_putline ( ( struct loc * ) ( & last_line ) ) ; 
} else 
#line 51 "../../src/print.c"
if ( _auto_t == 72 ) { 
#line 51 "../../src/print.c"
forced_sm = 1 ; 

#line 53 "../../src/print.c"
ntok = 0 ; 

#line 54 "../../src/print.c"
( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? ( ( ( int ) 
#line 54 "../../src/print.c"
( ( * ( out_file -> __iobuf__ptr ++ ) ) = 10) ) ) : _flsbuf ( 
#line 54 "../../src/print.c"
10, ( struct _iobuf * ) out_file ) ; 

#line 55 "../../src/print.c"
last_line . _loc_line ++ ; 
} } ; 

#line 61 "../../src/print.c"
struct dcl_buf { /* sizeof = 176 */
Pbase _dcl_buf_b ; 
Pname _dcl_buf_n ; 
TOK _dcl_buf_left [ 20] ; 
TOK _dcl_buf_right [ 20] ; 
Pnode _dcl_buf_rnode [ 20] ; 
int _dcl_buf_li ; 
int _dcl_buf_ri ; 
} ; 
int _dcl_buf_put ( ) ; 

#line 86 "../../src/print.c"
struct dcl_buf * tbufvec [ 10] = { 0 } ; 

#line 86 "../../src/print.c"
struct dcl_buf * tbuf = 0 ; 

#line 88 "../../src/print.c"
int freetbuf = 0 ; 

#line 90 "../../src/print.c"
int _dcl_buf_put ( _auto_this ) register struct dcl_buf * _auto_this ; 

#line 91 "../../src/print.c"
{ 
#line 91 "../../src/print.c"
int _auto_i ; 

#line 94 "../../src/print.c"
if ( ( 20 <= _auto_this -> _dcl_buf_li ) || ( 20 <= _auto_this -> _dcl_buf_ri ) ) errorFI_PC__E ( ( 
#line 94 "../../src/print.c"
int ) 'i' , ( char * ) "T buffer overflow") ; 

#line 95 "../../src/print.c"
if ( _auto_this -> _dcl_buf_b == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 95 "../../src/print.c"
) "noBT%s", Cast ? " in cast": "") ; 

#line 97 "../../src/print.c"
if ( _auto_this -> _dcl_buf_n && _auto_this -> _dcl_buf_n -> _name_n_sto ) puttok ( ( int ) _auto_this -> _dcl_buf_n -> _name_n_sto ) 
#line 97 "../../src/print.c"
; 

#line 99 "../../src/print.c"
_basetype_dcl_print ( ( struct basetype * ) _auto_this -> _dcl_buf_b ) ; 

#line 101 "../../src/print.c"
for ( ;_auto_this -> _dcl_buf_li ;( _auto_this -> _dcl_buf_li -- ) ) switch ( _auto_this -> _dcl_buf_left [ _auto_this -> _dcl_buf_li ] 
#line 101 "../../src/print.c"
) 
#line 102 "../../src/print.c"
{ 
#line 102 "../../src/print.c"
case 40 : puttok ( 40 ) ; 

#line 105 "../../src/print.c"
break ; 

#line 106 "../../src/print.c"
case 163 : puttok ( 50 ) ; 

#line 108 "../../src/print.c"
if ( print_mode != 3 ) puttok ( 26 ) ; 

#line 109 "../../src/print.c"
break ; 

#line 110 "../../src/print.c"
case 164 : if ( print_mode == 3 ) puttok ( 50 ) ; 
else 
#line 114 "../../src/print.c"
puttok ( 112 ) ; 

#line 115 "../../src/print.c"
if ( print_mode != 3 ) puttok ( 26 ) ; 

#line 116 "../../src/print.c"
break ; 

#line 117 "../../src/print.c"
case 125 : puttok ( 50 ) ; 

#line 119 "../../src/print.c"
break ; 

#line 120 "../../src/print.c"
case 158 : if ( print_mode == 3 ) puttok ( 50 ) ; 
else 
#line 124 "../../src/print.c"
puttok ( 112 ) ; 
} 
#line 127 "../../src/print.c"
if ( _auto_this -> _dcl_buf_n ) _name_print ( ( struct name * ) _auto_this -> _dcl_buf_n ) ; 

#line 129 "../../src/print.c"
for ( _auto_i = 1 ;( _auto_i <= _auto_this -> _dcl_buf_ri ) ;( _auto_i ++ ) ) switch ( _auto_this -> 
#line 129 "../../src/print.c"
_dcl_buf_right [ _auto_i ] ) 
#line 130 "../../src/print.c"
{ 
#line 130 "../../src/print.c"
case 41 : puttok ( 41 ) ; 

#line 133 "../../src/print.c"
break ; 

#line 134 "../../src/print.c"
case 110 : puttok ( 42 ) ; 

#line 136 "../../src/print.c"
{ 
#line 136 "../../src/print.c"
Pvec _auto_v ; 
Pexpr _auto_d ; 
int _auto_s ; 

#line 136 "../../src/print.c"
_auto_v = ( ( ( struct vec * ) ( _auto_this -> _dcl_buf_rnode [ _auto_i ] ) ) ) 
#line 136 "../../src/print.c"
; 

#line 137 "../../src/print.c"
_auto_d = _auto_v -> _vec_dim ; 

#line 138 "../../src/print.c"
_auto_s = _auto_v -> _vec_size ; 

#line 139 "../../src/print.c"
if ( _auto_d ) _expr_print ( ( struct expr * ) _auto_d ) ; 

#line 140 "../../src/print.c"
if ( _auto_s ) fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%d", 
#line 140 "../../src/print.c"
_auto_s ) ; 
} 
#line 142 "../../src/print.c"
puttok ( 43 ) ; 

#line 143 "../../src/print.c"
break ; 

#line 144 "../../src/print.c"
case 108 : { 
#line 145 "../../src/print.c"
Pfct _auto_f ; 

#line 145 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _dcl_buf_rnode [ _auto_i ] ) ) ) 
#line 145 "../../src/print.c"
; 

#line 146 "../../src/print.c"
_fct_dcl_print ( ( struct fct * ) _auto_f ) ; 
} 
#line 148 "../../src/print.c"
break ; 

#line 149 "../../src/print.c"
case 114 : { 
#line 150 "../../src/print.c"
Pbase _auto_f ; 
Pexpr _auto_d ; 
int _auto_s ; 

#line 150 "../../src/print.c"
_auto_f = ( ( ( struct basetype * ) ( _auto_this -> _dcl_buf_rnode [ _auto_i ] ) ) ) 
#line 150 "../../src/print.c"
; 

#line 151 "../../src/print.c"
_auto_d = ( ( ( struct expr * ) ( _auto_f -> _basetype_b_name ) ) ) ; 

#line 152 "../../src/print.c"
_auto_s = _auto_f -> _basetype_b_bits ; 

#line 153 "../../src/print.c"
puttok ( 69 ) ; 

#line 154 "../../src/print.c"
if ( _auto_d ) _expr_print ( ( struct expr * ) _auto_d ) ; 

#line 155 "../../src/print.c"
if ( _auto_s ) fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%d", 
#line 155 "../../src/print.c"
_auto_s ) ; 
} 
#line 157 "../../src/print.c"
break ; 
} } ; 

#line 163 "../../src/print.c"
int Eprint ( _auto_e ) struct expr * _auto_e ; 

#line 164 "../../src/print.c"
{ 
#line 164 "../../src/print.c"
switch ( _auto_e -> _node_base ) { 
#line 165 "../../src/print.c"
case 144 : break ; 

#line 168 "../../src/print.c"
case 85 : case 80 : case 86 : case 82 : case 84 : case 83 : case 81 : 
#line 168 "../../src/print.c"

#line 175 "../../src/print.c"
case 150 : case 165 : case 71 : case 140 : case 69 : case 124 : case 45 : 
#line 175 "../../src/print.c"

#line 182 "../../src/print.c"
case 44 : case 34 : case 109 : case 146 : case 168 : case 169 : _expr_print ( ( 
#line 182 "../../src/print.c"
struct expr * ) _auto_e ) ; 

#line 189 "../../src/print.c"
break ; 

#line 190 "../../src/print.c"
default : puttok ( 40 ) ; 

#line 192 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_e ) ; 

#line 193 "../../src/print.c"
puttok ( 41 ) ; 

#line 194 "../../src/print.c"
break ; 
} } ; 

#line 198 "../../src/print.c"
int _name_dcl_print ( _auto_this , _auto_list ) register struct name * _auto_this ; 
int _auto_list ; 

#line 211 "../../src/print.c"
{ 
#line 211 "../../src/print.c"
Pname _auto_n ; 

#line 214 "../../src/print.c"
if ( _auto_this == 0 ) errorFPC__E ( ( char * ) "0->name.dcl_print()") ; 

#line 216 "../../src/print.c"
for ( _auto_n = ( struct name * ) _auto_this ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 216 "../../src/print.c"
Ptype _auto_t ; 
#line 216 "../../src/print.c"
int _auto_sm ; 

#line 217 "../../src/print.c"
_auto_t = _auto_n -> _expr__O2.__C2_tp ; 

#line 218 "../../src/print.c"
_auto_sm = 0 ; 

#line 220 "../../src/print.c"
if ( _auto_t == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 220 "../../src/print.c"
"name.dcl_print(%n)T missing", _auto_n ) ; 

#line 221 "../../src/print.c"
if ( ( print_mode == 3 ) && ( _auto_n -> _name_n_stclass == 13 ) ) continue ; 

#line 223 "../../src/print.c"
if ( _auto_n -> _name_n_stclass == 31 ) _loc_putline ( ( struct loc * ) ( & _auto_n -> _name_where ) 
#line 223 "../../src/print.c"
) ; 

#line 225 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 225 "../../src/print.c"
case 6 : { 
#line 227 "../../src/print.c"
Pclass _auto_cl ; 

#line 227 "../../src/print.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_t ) ) ) ; 

#line 228 "../../src/print.c"
if ( _auto_n -> _node_base == 123 ) break ; 

#line 229 "../../src/print.c"
_classdef_dcl_print ( ( struct classdef * ) _auto_cl , ( struct name * ) _auto_n ) ; 

#line 230 "../../src/print.c"
_auto_sm = 1 ; 

#line 231 "../../src/print.c"
break ; 
} 
#line 234 "../../src/print.c"
case 13 : _enumdef_dcl_print ( ( struct enumdef * ) ( ( ( struct enumdef * ) 
#line 234 "../../src/print.c"
( _auto_t ) ) ) , ( struct name * ) _auto_n ) ; 

#line 236 "../../src/print.c"
_auto_sm = 1 ; 

#line 237 "../../src/print.c"
break ; 

#line 239 "../../src/print.c"
case 108 : { 
#line 240 "../../src/print.c"
Pfct _auto_f ; 
struct name * _auto__Xthis_use_name ; 

#line 240 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_t ) ) ) ; 

#line 241 "../../src/print.c"
if ( _auto_n -> _node_base == 123 ) puttok ( 35 ) ; 

#line 242 "../../src/print.c"
if ( ( debug == 0 ) && _auto_f -> _fct_f_inline ) { 
#line 242 "../../src/print.c"
if ( print_mode == 3 ) 
#line 242 "../../src/print.c"

#line 243 "../../src/print.c"
{ 
#line 243 "../../src/print.c"
if ( _auto_f -> _fct_f_virtual || _auto_n -> _name_n_addr_taken ) { 
#line 244 "../../src/print.c"
TOK _auto_st ; 
Pblock _auto_b ; 

#line 245 "../../src/print.c"
_auto_st = _auto_n -> _name_n_sto ; 

#line 246 "../../src/print.c"
_auto_b = _auto_f -> _fct_body ; 

#line 247 "../../src/print.c"
_auto_f -> _fct_body = 0 ; 

#line 249 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 

#line 250 "../../src/print.c"
_auto_n -> _name_n_sto = _auto_st ; 

#line 251 "../../src/print.c"
_auto_f -> _fct_body = _auto_b ; 
} } else 
#line 254 "../../src/print.c"
{ 
#line 254 "../../src/print.c"
if ( print_mode != 3 ) puttok ( 75 ) ; 
else 
#line 258 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "/* inline */") ; 
#line 258 "../../src/print.c"

#line 259 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 
} } else 
#line 262 "../../src/print.c"
{ 
#line 262 "../../src/print.c"
if ( ( _auto_n -> _expr__O5.__C5_n_table == gtbl ) && ( strcmp ( _auto_n -> 
#line 262 "../../src/print.c"
_expr__O3.__C3_string , ( char * ) "main") == 0 ) ) 
#line 263 "../../src/print.c"
{ 
#line 263 "../../src/print.c"
MAIN = 1 ; 

#line 265 "../../src/print.c"
{ 
#line 418 "../../src/print.c"
_auto__Xthis_use_name = ( struct name * ) _table_look ( ( struct table * ) gtbl , ( char 
#line 418 "../../src/print.c"
* ) "main", ( int ) 0 ) ; 

#line 561 "../../src/cfront.h"
{ 
#line 561 "../../src/cfront.h"
_auto__Xthis_use_name -> _name_n_used ++ ; 
} } 
#line 266 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 
#line 266 "../../src/print.c"

#line 267 "../../src/print.c"
MAIN = 0 ; 
} else 
#line 270 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 
#line 270 "../../src/print.c"
} 
#line 272 "../../src/print.c"
break ; 
} 
#line 275 "../../src/print.c"
case 76 : { 
#line 276 "../../src/print.c"
Pgen _auto_g ; 
Plist _auto_gl ; 

#line 276 "../../src/print.c"
_auto_g = ( ( ( struct gen * ) ( _auto_t ) ) ) ; 

#line 278 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\t/* overload %s: */\n", _auto_g -> _gen_string ) ; 
#line 278 "../../src/print.c"

#line 279 "../../src/print.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 279 "../../src/print.c"
Pname _auto_nn ; 

#line 280 "../../src/print.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 281 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 

#line 282 "../../src/print.c"
_auto_sm = 1 ; 
} 
#line 284 "../../src/print.c"
break ; 
} 
#line 287 "../../src/print.c"
case 1 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "asm(\"%s\")\n", 
#line 287 "../../src/print.c"
( ( char * ) ( ( ( ( struct basetype * ) ( _auto_t ) 
#line 287 "../../src/print.c"
) ) -> _basetype_b_name ) ) ) ; 

#line 289 "../../src/print.c"
break ; 

#line 291 "../../src/print.c"
case 21 : case 5 : case 22 : case 29 : if ( ( ( ( print_mode == 
#line 291 "../../src/print.c"
3 ) && ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_const ) 
#line 291 "../../src/print.c"
&& ( _auto_n -> _name_n_sto != 14 ) ) && ( ( ( _auto_n -> _name_n_scope == 14 ) || 
#line 291 "../../src/print.c"
( _auto_n -> _name_n_scope == 31 ) ) || ( _auto_n -> _name_n_scope == 108 ) ) ) 
#line 305 "../../src/print.c"
{ 
#line 305 "../../src/print.c"
if 
#line 305 "../../src/print.c"
( _auto_n -> _name_n_evaluated ) 
#line 307 "../../src/print.c"
{ 
#line 307 "../../src/print.c"
_auto_sm = 1 ; 

#line 309 "../../src/print.c"
break ; 
} } 
#line 313 "../../src/print.c"
default : { 
#line 314 "../../src/print.c"
Pexpr _auto_i ; 

#line 314 "../../src/print.c"
_auto_i = _auto_n -> _expr__O4.__C4_n_initializer ; 

#line 315 "../../src/print.c"
if ( _auto_n -> _node_base == 123 ) puttok ( 35 ) ; 

#line 317 "../../src/print.c"
if ( _auto_i ) { 
#line 317 "../../src/print.c"
if ( ( _auto_n -> _name_n_sto == 14 ) && ( _auto_n -> _name_n_stclass == 
#line 317 "../../src/print.c"
31 ) ) 
#line 318 "../../src/print.c"
{ 
#line 318 "../../src/print.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 

#line 320 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 

#line 321 "../../src/print.c"
puttok ( 72 ) ; 

#line 322 "../../src/print.c"
_auto_n -> _expr__O4.__C4_n_initializer = _auto_i ; 

#line 323 "../../src/print.c"
_auto_n -> _name_n_sto = 0 ; 

#line 324 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 

#line 325 "../../src/print.c"
_auto_n -> _name_n_sto = 14 ; 
} else 
#line 328 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 
#line 328 "../../src/print.c"
} else 
#line 330 "../../src/print.c"
{ 
#line 330 "../../src/print.c"
if ( ( ( ( fct_void == 0 ) && ( _auto_n -> 
#line 330 "../../src/print.c"
_name_n_sto == 0 ) ) && ( _auto_this -> _name_n_stclass == 31 ) ) && ( _auto_n -> _expr__O5.__C5_n_table == 
#line 330 "../../src/print.c"
gtbl ) ) 
#line 334 "../../src/print.c"
{ 
#line 334 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 335 "../../src/print.c"
case 5 : case 29 : case 21 : 
#line 335 "../../src/print.c"

#line 339 "../../src/print.c"
case 22 : case 15 : case 11 : case 121 : case 125 : _auto_n -> _expr__O4.__C4_n_initializer = ( _auto_i = 
#line 339 "../../src/print.c"
zero ) ; 
} } 
#line 348 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_t , ( struct name * ) _auto_n ) ; 
#line 348 "../../src/print.c"
} 
#line 351 "../../src/print.c"
if ( _auto_n -> _name_n_scope != 136 ) { 
#line 351 "../../src/print.c"
if ( _auto_i ) { 
#line 352 "../../src/print.c"
puttok ( 70 ) ; 
#line 352 "../../src/print.c"

#line 354 "../../src/print.c"
if ( ( ( _auto_t != _auto_i -> _expr__O2.__C2_tp ) && ( _auto_i -> _node_base != 86 ) ) && 
#line 354 "../../src/print.c"
( _auto_i -> _node_base != 124 ) ) 
#line 356 "../../src/print.c"
{ 
#line 356 "../../src/print.c"
Ptype _auto_t1 ; 

#line 357 "../../src/print.c"
_auto_t1 = _auto_n -> _expr__O2.__C2_tp ; 

#line 358 "../../src/print.c"
cmp : switch ( _auto_t1 -> _node_base ) { 
#line 360 "../../src/print.c"
default : _expr_print ( ( struct expr * ) _auto_i ) 
#line 360 "../../src/print.c"
; 

#line 363 "../../src/print.c"
break ; 

#line 364 "../../src/print.c"
case 97 : _auto_t1 = ( ( ( struct basetype * ) ( _auto_t1 ) ) ) -> 
#line 364 "../../src/print.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 366 "../../src/print.c"
goto cmp ; 

#line 367 "../../src/print.c"
case 110 : if ( ( ( ( struct vec * ) ( _auto_t1 ) ) ) 
#line 367 "../../src/print.c"
-> _vec_typ -> _node_base == 5 ) 
#line 368 "../../src/print.c"
{ 
#line 368 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_i ) ; 

#line 370 "../../src/print.c"
break ; 
} 
#line 372 "../../src/print.c"
case 125 : case 158 : puttok ( 40 ) ; 

#line 375 "../../src/print.c"
{ 
#line 375 "../../src/print.c"
bit _auto_oc ; 

#line 375 "../../src/print.c"
_auto_oc = Cast ; 

#line 376 "../../src/print.c"
Cast = 1 ; 

#line 377 "../../src/print.c"
_type_print ( ( struct type * ) _auto_t ) ; 

#line 378 "../../src/print.c"
Cast = _auto_oc ; 
} 
#line 380 "../../src/print.c"
puttok ( 41 ) ; 

#line 381 "../../src/print.c"
if ( _auto_i ) Eprint ( ( struct expr * ) _auto_i ) ; 
} } else 
#line 385 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_i ) ; 
} else 
#line 387 "../../src/print.c"
if ( _auto_n -> _name_n_evaluated ) { 
#line 387 "../../src/print.c"
puttok ( 70 ) ; 

#line 389 "../../src/print.c"
if ( _auto_n -> _expr__O2.__C2_tp -> _node_base != 21 ) { 
#line 389 "../../src/print.c"
puttok ( 40 ) ; 

#line 391 "../../src/print.c"
puttok ( 40 ) ; 

#line 392 "../../src/print.c"
{ 
#line 392 "../../src/print.c"
bit _auto_oc ; 

#line 392 "../../src/print.c"
_auto_oc = Cast ; 

#line 393 "../../src/print.c"
Cast = 1 ; 

#line 394 "../../src/print.c"
_type_print ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) ; 

#line 395 "../../src/print.c"
Cast = _auto_oc ; 
} 
#line 397 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) ")%d)", _auto_n -> _name_n_val ) 
#line 397 "../../src/print.c"
; 
} else 
#line 400 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%d", _auto_n -> 
#line 400 "../../src/print.c"
_name_n_val ) ; 
} } } } 
#line 406 "../../src/print.c"
switch ( _auto_list ) { 
#line 406 "../../src/print.c"
case 72 : if ( _auto_sm == 0 
#line 406 "../../src/print.c"
) 
#line 408 "../../src/print.c"
puttok ( 72 ) ; 

#line 409 "../../src/print.c"
break ; 

#line 410 "../../src/print.c"
case 0 : if ( _auto_sm == 0 ) puttok ( 72 ) ; 

#line 412 "../../src/print.c"
{ 
#line 412 "../../src/print.c"
return ; 
} 
#line 413 "../../src/print.c"
case 71 : if ( _auto_n -> _name_n_list ) puttok ( 71 ) ; 

#line 415 "../../src/print.c"
break ; 
} } } ; 

#line 420 "../../src/print.c"
int _name_print ( _auto_this ) register struct name * _auto_this ; 

#line 424 "../../src/print.c"
{ 
#line 424 "../../src/print.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 424 "../../src/print.c"
) "0->name.print()") ; 

#line 427 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_string == 0 ) { 
#line 427 "../../src/print.c"
if ( print_mode == 4 ) fprintf ( ( struct 
#line 427 "../../src/print.c"
_iobuf * ) out_file , ( char * ) "%s ", " ?") ; 

#line 429 "../../src/print.c"
{ 
#line 429 "../../src/print.c"
return ; 
} } 
#line 432 "../../src/print.c"
switch ( _auto_this -> _node_base ) { 
#line 432 "../../src/print.c"
default : errorFI_PC__E ( ( int ) 'i' , 
#line 432 "../../src/print.c"
( char * ) "%d->name.print() base=%d", _auto_this , _auto_this -> _node_base ) ; 

#line 435 "../../src/print.c"
case 123 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", _auto_this -> 
#line 435 "../../src/print.c"
_expr__O3.__C3_string ) ; 

#line 437 "../../src/print.c"
{ 
#line 437 "../../src/print.c"
return ; 
} 
#line 438 "../../src/print.c"
case 85 : case 169 : break ; 
} 
#line 443 "../../src/print.c"
switch ( print_mode ) { 
#line 443 "../../src/print.c"
case 3 : { 
#line 445 "../../src/print.c"
Ptable _auto_tbl ; 
int _auto_i ; 

#line 446 "../../src/print.c"
_auto_i = _auto_this -> _name_n_union ; 

#line 447 "../../src/print.c"
if ( _auto_this -> _expr__O2.__C2_tp ) { 
#line 447 "../../src/print.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 448 "../../src/print.c"
default : if 
#line 448 "../../src/print.c"
( _auto_tbl = _auto_this -> _expr__O5.__C5_n_table ) 
#line 450 "../../src/print.c"
{ 
#line 450 "../../src/print.c"
Pname _auto_tn ; 

#line 453 "../../src/print.c"
if ( _auto_tbl == gtbl ) break ; 

#line 454 "../../src/print.c"
if ( _auto_tn = _auto_tbl -> _table_t_name ) { 
#line 454 "../../src/print.c"
if ( _auto_i ) fprintf ( ( struct _iobuf * ) 
#line 454 "../../src/print.c"
out_file , ( char * ) "_%s__O%d.__C%d_", _auto_tn -> _expr__O3.__C3_string , _auto_i , _auto_i ) ; 
else 
#line 458 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "_%s_", _auto_tn -> _expr__O3.__C3_string ) 
#line 458 "../../src/print.c"
; 

#line 459 "../../src/print.c"
break ; 
} } 
#line 463 "../../src/print.c"
switch ( _auto_this -> _name_n_stclass ) { 
#line 463 "../../src/print.c"
case 31 : case 14 : if ( _auto_i ) 
#line 463 "../../src/print.c"

#line 467 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "_O%d.__C%d_", _auto_i , _auto_i ) ; 
#line 467 "../../src/print.c"
else 
#line 468 "../../src/print.c"
if ( ( _auto_this -> _name_n_sto == 31 ) && ( _auto_this -> _expr__O2.__C2_tp -> _node_base != 108 ) ) 
#line 468 "../../src/print.c"

#line 469 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "_static_") ; 

#line 470 "../../src/print.c"
break ; 

#line 471 "../../src/print.c"
default : if ( _auto_i ) fprintf ( ( struct _iobuf * ) out_file , ( char * 
#line 471 "../../src/print.c"
) "_auto__O%d.__C%d_", _auto_i , _auto_i ) ; 
else 
#line 475 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "_auto_") ; 
} 
#line 477 "../../src/print.c"
break ; 

#line 478 "../../src/print.c"
case 6 : case 13 : break ; 
} } 
#line 483 "../../src/print.c"
break ; 
} 
#line 485 "../../src/print.c"
case 4 : { 
#line 486 "../../src/print.c"
Ptable _auto_tbl ; 
char * _auto_cs ; 
bit _auto_f ; 

#line 487 "../../src/print.c"
_auto_cs = 0 ; 

#line 488 "../../src/print.c"
_auto_f = 0 ; 

#line 489 "../../src/print.c"
if ( _auto_this -> _expr__O2.__C2_tp ) { 
#line 489 "../../src/print.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 490 "../../src/print.c"
case 76 : case 
#line 490 "../../src/print.c"
108 : 
#line 493 "../../src/print.c"
_auto_f = 1 ; 

#line 494 "../../src/print.c"
default : if ( _auto_tbl = _auto_this -> _expr__O5.__C5_n_table ) { 
#line 495 "../../src/print.c"
if ( _auto_tbl == gtbl ) { 
#line 496 "../../src/print.c"
if 
#line 496 "../../src/print.c"
( _auto_f == 0 ) 
#line 497 "../../src/print.c"
fputs ( ( char * ) "::", ( struct _iobuf * ) 
#line 497 "../../src/print.c"
out_file ) ; 
} else 
#line 499 "../../src/print.c"
{ 
#line 499 "../../src/print.c"
if ( _auto_tbl -> _table_t_name ) { 
#line 500 "../../src/print.c"
_auto_cs = _auto_tbl -> _table_t_name -> _expr__O3.__C3_string ; 

#line 502 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s::", _auto_cs ) ; 
} } } 
#line 506 "../../src/print.c"
if ( ( ( _auto_this -> _name_n_sto == 27 ) && ( _auto_this -> _name_n_scope == 
#line 506 "../../src/print.c"
136 ) ) && ( strcmp ( _auto_this -> _expr__O3.__C3_string , ( char * ) "this") == 0 
#line 506 "../../src/print.c"
) ) 
#line 508 "../../src/print.c"
{ 
#line 508 "../../src/print.c"
Ptype _auto_tt ; 
Pname _auto_cn ; 

#line 509 "../../src/print.c"
_auto_tt = ( ( ( struct ptr * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) -> _ptr_typ ; 
#line 509 "../../src/print.c"

#line 510 "../../src/print.c"
_auto_cn = ( ( ( struct basetype * ) ( _auto_tt ) ) ) -> _basetype_b_name ; 

#line 511 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s::", _auto_cn -> _expr__O3.__C3_string ) ; 
#line 511 "../../src/print.c"
} 
#line 513 "../../src/print.c"
break ; 

#line 514 "../../src/print.c"
case 6 : case 13 : break ; 
} 
#line 520 "../../src/print.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 520 "../../src/print.c"
case 97 : fputs ( ( char * ) "operator ", 
#line 520 "../../src/print.c"
( struct _iobuf * ) out_file ) ; 

#line 523 "../../src/print.c"
_type_dcl_print ( ( struct type * ) ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) 
#line 523 "../../src/print.c"
) ) -> _fct_returns , ( struct name * ) 0 ) ; 

#line 524 "../../src/print.c"
break ; 

#line 525 "../../src/print.c"
case 0 : fputs ( ( char * ) _auto_this -> _expr__O3.__C3_string , ( struct _iobuf * ) 
#line 525 "../../src/print.c"
out_file ) ; 

#line 527 "../../src/print.c"
break ; 

#line 528 "../../src/print.c"
case 162 : puttok ( 47 ) ; 

#line 530 "../../src/print.c"
case 161 : if ( _auto_cs ) fputs ( ( char * ) _auto_cs , ( struct _iobuf * 
#line 530 "../../src/print.c"
) out_file ) ; 
else 
#line 533 "../../src/print.c"
{ 
#line 533 "../../src/print.c"
fputs ( ( char * ) "constructor", ( struct _iobuf * ) out_file ) ; 
#line 533 "../../src/print.c"

#line 535 "../../src/print.c"
_auto_f = 0 ; 
} 
#line 537 "../../src/print.c"
break ; 

#line 539 "../../src/print.c"
default : fputs ( ( char * ) "operator ", ( struct _iobuf * ) out_file ) ; 
#line 539 "../../src/print.c"

#line 541 "../../src/print.c"
fputs ( ( char * ) ( keys [ _auto_this -> _name_n_oper ] ) , ( struct _iobuf * 
#line 541 "../../src/print.c"
) out_file ) ; 

#line 542 "../../src/print.c"
break ; 
} 
#line 544 "../../src/print.c"
if ( _auto_f ) fputs ( ( char * ) "()", ( struct _iobuf * ) 
#line 544 "../../src/print.c"
out_file ) ; 
} else 
#line 547 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_string ) fputs ( ( char * ) _auto_this -> _expr__O3.__C3_string , ( 
#line 547 "../../src/print.c"
struct _iobuf * ) out_file ) ; 

#line 548 "../../src/print.c"
{ 
#line 548 "../../src/print.c"
return ; 
} } 
#line 550 "../../src/print.c"
default : if ( _auto_this -> _name__O6.__C6_n_qualifier ) { 
#line 551 "../../src/print.c"
_name_print ( ( struct name * ) 
#line 551 "../../src/print.c"
_auto_this -> _name__O6.__C6_n_qualifier ) ; 

#line 553 "../../src/print.c"
puttok ( 45 ) ; 
} } 
#line 557 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_string ) fprintf ( ( struct _iobuf * ) out_file , ( char 
#line 557 "../../src/print.c"
* ) "%s ", _auto_this -> _expr__O3.__C3_string ) ; 
} ; 

#line 561 "../../src/print.c"
int _type_print ( _auto_this ) register struct type * _auto_this ; 

#line 562 "../../src/print.c"
{ 
#line 562 "../../src/print.c"
switch ( _auto_this -> _node_base ) { 
#line 564 "../../src/print.c"
case 125 : case 158 : _type_dcl_print ( ( struct type * 
#line 564 "../../src/print.c"
) ( ( ( struct ptr * ) ( _auto_this ) ) ) , ( struct 
#line 564 "../../src/print.c"
name * ) 0 ) ; 

#line 568 "../../src/print.c"
break ; 

#line 569 "../../src/print.c"
case 108 : _fct_dcl_print ( ( struct fct * ) ( ( ( struct fct * ) ( 
#line 569 "../../src/print.c"
_auto_this ) ) ) ) ; 

#line 571 "../../src/print.c"
break ; 

#line 572 "../../src/print.c"
case 110 : _type_dcl_print ( ( struct type * ) ( ( ( struct vec * ) ( 
#line 572 "../../src/print.c"
_auto_this ) ) ) , ( struct name * ) 0 ) ; 

#line 574 "../../src/print.c"
break ; 

#line 575 "../../src/print.c"
case 6 : case 13 : if ( print_mode == 4 ) fprintf ( ( struct _iobuf * ) out_file , 
#line 575 "../../src/print.c"
( char * ) "%s", ( _auto_this -> _node_base == 6 ) ? "class": "enum") ; 
else 
#line 580 "../../src/print.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "%d->T.print(%k)", _auto_this , _auto_this -> _node_base ) 
#line 580 "../../src/print.c"
; 

#line 581 "../../src/print.c"
break ; 

#line 582 "../../src/print.c"
case 97 : if ( Cast ) { 
#line 583 "../../src/print.c"
_type_print ( ( struct type * ) ( ( ( 
#line 583 "../../src/print.c"
struct basetype * ) ( _auto_this ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ) ; 

#line 585 "../../src/print.c"
break ; 
} 
#line 587 "../../src/print.c"
default : _basetype_dcl_print ( ( struct basetype * ) ( ( ( struct basetype * ) 
#line 587 "../../src/print.c"
( _auto_this ) ) ) ) ; 
} } ; 

#line 592 "../../src/print.c"
char * _type_signature ( _auto_this , _auto_p ) register struct type * _auto_this ; 
register char * _auto_p ; 

#line 597 "../../src/print.c"
{ 
#line 597 "../../src/print.c"
char * _auto__result ; 
Ptype _auto_t ; 
int _auto_pp ; 

#line 600 "../../src/print.c"
_auto_t = ( struct type * ) _auto_this ; 

#line 601 "../../src/print.c"
_auto_pp = 0 ; 

#line 604 "../../src/print.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 605 "../../src/print.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 605 "../../src/print.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 606 "../../src/print.c"
goto xx ; 

#line 607 "../../src/print.c"
case 125 : ( * ( _auto_p ++ ) ) = 'P' ; 

#line 607 "../../src/print.c"
_auto_t = ( ( ( struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 

#line 607 "../../src/print.c"
_auto_pp = 1 ; 

#line 607 "../../src/print.c"
goto xx ; 

#line 608 "../../src/print.c"
case 158 : ( * ( _auto_p ++ ) ) = 'R' ; 

#line 608 "../../src/print.c"
_auto_t = ( ( ( struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 

#line 608 "../../src/print.c"
_auto_pp = 1 ; 

#line 608 "../../src/print.c"
goto xx ; 

#line 609 "../../src/print.c"
case 110 : ( * ( _auto_p ++ ) ) = 'V' ; 

#line 609 "../../src/print.c"
_auto_t = ( ( ( struct vec * ) ( _auto_t ) ) ) -> _vec_typ ; 

#line 609 "../../src/print.c"
_auto_pp = 1 ; 

#line 609 "../../src/print.c"
goto xx ; 

#line 610 "../../src/print.c"
case 108 : { 
#line 611 "../../src/print.c"
Pfct _auto_f ; 
Pname _auto_n ; 

#line 611 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this ) ) ) ; 

#line 613 "../../src/print.c"
_auto_t = ( _auto_f -> _fct_s_returns ? _auto_f -> _fct_s_returns : _auto_f -> _fct_returns ) ; 

#line 614 "../../src/print.c"
( * ( _auto_p ++ ) ) = 'F' ; 

#line 615 "../../src/print.c"
for ( _auto_n = _auto_f -> _fct_argtype ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 615 "../../src/print.c"
_auto_p = _type_signature ( ( struct 
#line 615 "../../src/print.c"
type * ) _auto_n -> _expr__O2.__C2_tp , _auto_p ) ; 

#line 617 "../../src/print.c"
( * ( _auto_p ++ ) ) = '_' ; 
} 
#line 619 "../../src/print.c"
( * ( _auto_p ++ ) ) = '_' ; 

#line 620 "../../src/print.c"
if ( _auto_f -> _fct_nargs_known == 155 ) ( * ( _auto_p ++ ) ) = 'E' ; 

#line 621 "../../src/print.c"
( * _auto_p ) = 0 ; 

#line 622 "../../src/print.c"
{ 
#line 622 "../../src/print.c"
{ _auto__result = _auto_p ; 

#line 622 "../../src/print.c"
return _auto__result ; 
} } } } 
#line 626 "../../src/print.c"
if ( ( ( ( struct basetype * ) ( _auto_t ) 
#line 626 "../../src/print.c"
) ) -> _basetype_b_unsigned ) 
#line 626 "../../src/print.c"
( * ( _auto_p ++ ) ) = 'U' ; 

#line 628 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 628 "../../src/print.c"
case 141 : ( * ( _auto_p ++ ) ) = 
#line 628 "../../src/print.c"
'A' ; 

#line 629 "../../src/print.c"
break ; 

#line 630 "../../src/print.c"
case 138 : ( * ( _auto_p ++ ) ) = 'Z' ; 

#line 630 "../../src/print.c"
break ; 

#line 631 "../../src/print.c"
case 38 : ( * ( _auto_p ++ ) ) = 'V' ; 

#line 631 "../../src/print.c"
break ; 

#line 632 "../../src/print.c"
case 5 : ( * ( _auto_p ++ ) ) = ( _auto_pp ? 'C' : 'I' ) ; 
#line 632 "../../src/print.c"

#line 632 "../../src/print.c"
break ; 

#line 633 "../../src/print.c"
case 29 : ( * ( _auto_p ++ ) ) = ( _auto_pp ? 'S' : 'I' ) ; 
#line 633 "../../src/print.c"

#line 633 "../../src/print.c"
break ; 

#line 634 "../../src/print.c"
case 121 : case 21 : ( * ( _auto_p ++ ) ) = 'I' ; 

#line 635 "../../src/print.c"
break ; 

#line 636 "../../src/print.c"
case 22 : ( * ( _auto_p ++ ) ) = 'L' ; 

#line 636 "../../src/print.c"
break ; 

#line 637 "../../src/print.c"
case 15 : ( * ( _auto_p ++ ) ) = 'F' ; 

#line 637 "../../src/print.c"
break ; 

#line 638 "../../src/print.c"
case 11 : ( * ( _auto_p ++ ) ) = 'D' ; 

#line 638 "../../src/print.c"
break ; 

#line 639 "../../src/print.c"
case 119 : ( * ( _auto_p ++ ) ) = 'C' ; 

#line 640 "../../src/print.c"
strcpy ( _auto_p , ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> 
#line 640 "../../src/print.c"
_expr__O3.__C3_string ) ; 

#line 641 "../../src/print.c"
while ( * ( _auto_p ++ ) ) ; 

#line 642 "../../src/print.c"
( * ( _auto_p - 1 ) ) = '_' ; 

#line 643 "../../src/print.c"
break ; 

#line 644 "../../src/print.c"
case 114 : default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "signature of %k", 
#line 644 "../../src/print.c"
_auto_t -> _node_base ) ; 
} 
#line 649 "../../src/print.c"
( * _auto_p ) = 0 ; 

#line 650 "../../src/print.c"
{ 
#line 650 "../../src/print.c"
{ _auto__result = _auto_p ; 

#line 650 "../../src/print.c"
return _auto__result ; 
} } } ; 

#line 653 "../../src/print.c"
int _basetype_dcl_print ( _auto_this ) register struct basetype * _auto_this ; 

#line 654 "../../src/print.c"
{ 
#line 654 "../../src/print.c"
Pname _auto_nn ; 
Pclass _auto_cl ; 

#line 658 "../../src/print.c"
if ( print_mode != 3 ) { 
#line 658 "../../src/print.c"
if ( _auto_this -> _basetype_b_virtual ) puttok ( 77 ) ; 

#line 660 "../../src/print.c"
if ( _auto_this -> _basetype_b_inline ) puttok ( 75 ) ; 

#line 661 "../../src/print.c"
if ( _auto_this -> _basetype_b_const ) puttok ( 26 ) ; 
} 
#line 663 "../../src/print.c"
if ( _auto_this -> _basetype_b_unsigned ) puttok ( 37 ) ; 

#line 665 "../../src/print.c"
switch ( _auto_this -> _node_base ) { 
#line 665 "../../src/print.c"
case 141 : fprintf ( ( struct _iobuf * ) out_file , ( 
#line 665 "../../src/print.c"
char * ) "%s ", "any") ; 

#line 668 "../../src/print.c"
break ; 

#line 670 "../../src/print.c"
case 138 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "zero") 
#line 670 "../../src/print.c"
; 

#line 672 "../../src/print.c"
break ; 

#line 674 "../../src/print.c"
case 38 : if ( print_mode == 3 ) { 
#line 675 "../../src/print.c"
puttok ( 21 ) ; 

#line 677 "../../src/print.c"
break ; 
} 
#line 679 "../../src/print.c"
case 5 : case 29 : case 21 : case 22 : case 15 : case 11 : puttok ( 
#line 679 "../../src/print.c"
( int ) _auto_this -> _node_base ) ; 

#line 686 "../../src/print.c"
break ; 

#line 688 "../../src/print.c"
case 121 : _auto_nn = _auto_this -> _basetype_b_name ; 

#line 690 "../../src/print.c"
eob : if ( print_mode == 3 ) puttok ( 21 ) ; 
else 
#line 693 "../../src/print.c"
{ 
#line 693 "../../src/print.c"
puttok ( 13 ) ; 

#line 695 "../../src/print.c"
_name_print ( ( struct name * ) _auto_nn ) ; 
} 
#line 697 "../../src/print.c"
break ; 

#line 699 "../../src/print.c"
case 119 : _auto_nn = _auto_this -> _basetype_b_name ; 

#line 701 "../../src/print.c"
cob : _auto_cl = ( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 
#line 701 "../../src/print.c"

#line 703 "../../src/print.c"
switch ( _auto_cl -> _classdef_csu ) { 
#line 703 "../../src/print.c"
case 36 : case 167 : puttok ( 36 ) ; 

#line 705 "../../src/print.c"
break ; 

#line 706 "../../src/print.c"
default : puttok ( 32 ) ; 
} 
#line 708 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", _auto_cl -> _classdef_string ) 
#line 708 "../../src/print.c"
; 

#line 709 "../../src/print.c"
break ; 

#line 711 "../../src/print.c"
case 97 : if ( print_mode == 3 ) { 
#line 712 "../../src/print.c"
switch ( _auto_this -> _basetype_b_name -> _expr__O2.__C2_tp -> _node_base ) { 
#line 712 "../../src/print.c"

#line 713 "../../src/print.c"

#line 714 "../../src/print.c"
case 119 : _auto_nn = ( ( ( struct basetype * ) ( _auto_this -> _basetype_b_name -> _expr__O2.__C2_tp ) ) 
#line 714 "../../src/print.c"
) -> _basetype_b_name ; 

#line 716 "../../src/print.c"
goto cob ; 

#line 717 "../../src/print.c"
case 121 : _auto_nn = ( ( ( struct basetype * ) ( _auto_this -> _basetype_b_name -> _expr__O2.__C2_tp ) ) 
#line 717 "../../src/print.c"
) -> _basetype_b_name ; 

#line 719 "../../src/print.c"
goto eob ; 
} } 
#line 722 "../../src/print.c"
_name_print ( ( struct name * ) _auto_this -> _basetype_b_name ) ; 

#line 723 "../../src/print.c"
break ; 

#line 725 "../../src/print.c"
default : if ( print_mode == 4 ) { 
#line 726 "../../src/print.c"
if ( ( ( 0 < _auto_this -> 
#line 726 "../../src/print.c"
_node_base ) && ( _auto_this -> _node_base < 256 ) ) && ( keys [ _auto_this -> _node_base ] ) ) 
#line 726 "../../src/print.c"

#line 728 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " %s", keys [ _auto_this -> _node_base ] 
#line 728 "../../src/print.c"
) ; 
else 
#line 730 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "?") ; 
} else 
#line 733 "../../src/print.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "%d->basetype.print(%d)", _auto_this , _auto_this -> 
#line 733 "../../src/print.c"
_node_base ) ; 
} } ; 

#line 737 "../../src/print.c"
int _type_dcl_print ( _auto_this , _auto_n ) register struct type * _auto_this ; 
struct name * _auto_n ; 

#line 741 "../../src/print.c"
{ 
#line 741 "../../src/print.c"
Ptype _auto_t ; 
Pfct _auto_f ; 
Pvec _auto_v ; 
Pptr _auto_p ; 
TOK _auto_pre ; 

#line 742 "../../src/print.c"
_auto_t = ( struct type * ) _auto_this ; 

#line 746 "../../src/print.c"
_auto_pre = 0 ; 

#line 748 "../../src/print.c"
if ( _auto_t == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 748 "../../src/print.c"
"0->dcl_print()") ; 

#line 749 "../../src/print.c"
if ( _auto_n && ( _auto_n -> _expr__O2.__C2_tp != _auto_t ) ) errorFI_PC__E ( ( int ) 'i' , ( 
#line 749 "../../src/print.c"
char * ) "not %n'sT (%d)", _auto_n , _auto_t ) ; 

#line 751 "../../src/print.c"
if ( _auto_this -> _node_base == 76 ) { 
#line 751 "../../src/print.c"
if ( print_mode == 4 ) { 
#line 752 "../../src/print.c"
puttok ( 76 ) ; 
#line 752 "../../src/print.c"

#line 754 "../../src/print.c"
{ 
#line 754 "../../src/print.c"
return ; 
} } 
#line 756 "../../src/print.c"
{ 
#line 756 "../../src/print.c"
Pgen _auto_g ; 
Plist _auto_gl ; 

#line 756 "../../src/print.c"
_auto_g = ( ( ( struct gen * ) ( _auto_this ) ) ) ; 

#line 758 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\t/* overload %s: */\n", _auto_g -> _gen_string ) ; 
#line 758 "../../src/print.c"

#line 759 "../../src/print.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 759 "../../src/print.c"
Pname _auto_nn ; 

#line 760 "../../src/print.c"
_auto_nn = _auto_gl -> _name_list_f ; 

#line 761 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( struct name * ) _auto_nn ) ; 

#line 762 "../../src/print.c"
if ( _auto_gl -> _name_list_l ) puttok ( 72 ) ; 
} 
#line 764 "../../src/print.c"
{ 
#line 764 "../../src/print.c"
return ; 
} } } 
#line 767 "../../src/print.c"
tbuf = ( tbufvec [ freetbuf ] ) ; 

#line 768 "../../src/print.c"
if ( tbuf == 0 ) { 
#line 768 "../../src/print.c"
if ( freetbuf == 9) errorFI_PC__E ( ( int ) 
#line 768 "../../src/print.c"
'i' , ( char * ) "AT nesting overflow") ; 

#line 770 "../../src/print.c"
( tbufvec [ freetbuf ] ) = ( tbuf = ( struct dcl_buf * ) ( ( ( 
#line 770 "../../src/print.c"
struct dcl_buf * ) ( _new ( ( long ) 176) ) ) ) ) ; 
#line 770 "../../src/print.c"
} 
#line 772 "../../src/print.c"
freetbuf ++ ; 

#line 773 "../../src/print.c"
{ 
#line 80 "../../src/print.c"
( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_b = 0 ; 

#line 80 "../../src/print.c"
( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_n = _auto_n ; 

#line 80 "../../src/print.c"
( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_li = ( ( ( struct dcl_buf * ) 
#line 80 "../../src/print.c"
tbuf ) -> _dcl_buf_ri = 0 ) ; 
} 
#line 775 "../../src/print.c"
while ( _auto_t ) { 
#line 775 "../../src/print.c"
TOK _auto_k ; 

#line 778 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 778 "../../src/print.c"
case 125 : _auto_p = ( ( ( struct ptr * ) 
#line 778 "../../src/print.c"
( _auto_t ) ) ) ; 

#line 781 "../../src/print.c"
_auto_k = ( _auto_p -> _ptr_rdo ? 163 : 125 ) ; 

#line 782 "../../src/print.c"
goto ppp ; 

#line 783 "../../src/print.c"
case 158 : _auto_p = ( ( ( struct ptr * ) ( _auto_t ) ) ) ; 
#line 783 "../../src/print.c"

#line 785 "../../src/print.c"
_auto_k = ( _auto_p -> _ptr_rdo ? 164 : 158 ) ; 

#line 786 "../../src/print.c"
ppp : { 
#line 82 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_left [ ++ ( ( 
#line 82 "../../src/print.c"
struct dcl_buf * ) tbuf ) -> _dcl_buf_li ] ) = ( ( int ) _auto_k ) ; 
#line 82 "../../src/print.c"
} 
#line 788 "../../src/print.c"
_auto_pre = 125 ; 

#line 789 "../../src/print.c"
_auto_t = _auto_p -> _ptr_typ ; 

#line 790 "../../src/print.c"
break ; 

#line 791 "../../src/print.c"
case 110 : _auto_v = ( ( ( struct vec * ) ( _auto_t ) ) ) ; 
#line 791 "../../src/print.c"

#line 793 "../../src/print.c"
if ( Cast ) { 
#line 793 "../../src/print.c"
{ 
#line 82 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_left [ 
#line 82 "../../src/print.c"
++ ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_li ] ) = 125 ; 
} 
#line 795 "../../src/print.c"
_auto_pre = 125 ; 
} else 
#line 797 "../../src/print.c"
{ 
#line 797 "../../src/print.c"
if ( _auto_pre == 125 ) { 
#line 84 "../../src/print.c"
{ 
#line 82 "../../src/print.c"
( ( ( struct dcl_buf * 
#line 82 "../../src/print.c"
) tbuf ) -> _dcl_buf_left [ ++ ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_li ] ) 
#line 82 "../../src/print.c"
= 40 ; 
} 
#line 84 "../../src/print.c"
{ 
#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_right [ ++ ( ( 
#line 83 "../../src/print.c"
struct dcl_buf * ) tbuf ) -> _dcl_buf_ri ] ) = 41 ; 

#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_rnode [ ( ( struct dcl_buf * ) 
#line 83 "../../src/print.c"
tbuf ) -> _dcl_buf_ri ] ) = ( ( struct node * ) 0 ) ; 
} } 
#line 799 "../../src/print.c"
{ 
#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_right [ ++ ( 
#line 83 "../../src/print.c"
( struct dcl_buf * ) tbuf ) -> _dcl_buf_ri ] ) = 110 ; 

#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_rnode [ ( ( struct dcl_buf * ) 
#line 83 "../../src/print.c"
tbuf ) -> _dcl_buf_ri ] ) = ( ( struct node * ) _auto_v ) ; 
} 
#line 800 "../../src/print.c"
_auto_pre = 110 ; 
} 
#line 802 "../../src/print.c"
_auto_t = _auto_v -> _vec_typ ; 

#line 803 "../../src/print.c"
break ; 

#line 804 "../../src/print.c"
case 108 : _auto_f = ( ( ( struct fct * ) ( _auto_t ) ) ) ; 
#line 804 "../../src/print.c"

#line 806 "../../src/print.c"
if ( _auto_pre == 125 ) { 
#line 84 "../../src/print.c"
{ 
#line 82 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> 
#line 82 "../../src/print.c"
_dcl_buf_left [ ++ ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_li ] ) = 40 ; 
} 
#line 84 "../../src/print.c"
{ 
#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_right [ ++ ( ( 
#line 83 "../../src/print.c"
struct dcl_buf * ) tbuf ) -> _dcl_buf_ri ] ) = 41 ; 

#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_rnode [ ( ( struct dcl_buf * ) 
#line 83 "../../src/print.c"
tbuf ) -> _dcl_buf_ri ] ) = ( ( struct node * ) 0 ) ; 
} } 
#line 807 "../../src/print.c"
{ 
#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_right [ ++ ( 
#line 83 "../../src/print.c"
( struct dcl_buf * ) tbuf ) -> _dcl_buf_ri ] ) = 108 ; 

#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_rnode [ ( ( struct dcl_buf * ) 
#line 83 "../../src/print.c"
tbuf ) -> _dcl_buf_ri ] ) = ( ( struct node * ) _auto_f ) ; 
} 
#line 808 "../../src/print.c"
_auto_pre = 108 ; 

#line 809 "../../src/print.c"
_auto_t = ( _auto_f -> _fct_s_returns ? _auto_f -> _fct_s_returns : _auto_f -> _fct_returns ) ; 

#line 810 "../../src/print.c"
break ; 

#line 811 "../../src/print.c"
case 114 : { 
#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_right [ ++ ( 
#line 83 "../../src/print.c"
( struct dcl_buf * ) tbuf ) -> _dcl_buf_ri ] ) = 114 ; 

#line 83 "../../src/print.c"
( ( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_rnode [ ( ( struct dcl_buf * ) 
#line 83 "../../src/print.c"
tbuf ) -> _dcl_buf_ri ] ) = ( ( struct node * ) _auto_t ) ; 
} 
#line 813 "../../src/print.c"
{ 
#line 81 "../../src/print.c"
( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_b = ( ( ( struct 
#line 81 "../../src/print.c"
basetype * ) ( ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 81 "../../src/print.c"
_basetype__O1.__C1_b_fieldtype ) ) ) ; 
} 
#line 814 "../../src/print.c"
_auto_t = 0 ; 

#line 815 "../../src/print.c"
break ; 

#line 816 "../../src/print.c"
case 6 : case 13 : errorFI_PC__E ( ( int ) 'i' , ( char * ) "unX%k asBT", 
#line 816 "../../src/print.c"
_auto_t -> _node_base ) ; 

#line 819 "../../src/print.c"
case 0 : errorFI_PC__E ( ( int ) 'i' , ( char * ) "noBT(B=0)%s", Cast ? 
#line 819 "../../src/print.c"
" in cast": "") ; 

#line 821 "../../src/print.c"
case 97 : if ( Cast ) { 
#line 822 "../../src/print.c"
_auto_t = ( ( ( struct basetype * ) ( 
#line 822 "../../src/print.c"
_auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 824 "../../src/print.c"
break ; 
} 
#line 826 "../../src/print.c"
default : { 
#line 81 "../../src/print.c"
( ( struct dcl_buf * ) tbuf ) -> _dcl_buf_b = ( ( 
#line 81 "../../src/print.c"
( struct basetype * ) ( _auto_t ) ) ) ; 
} 
#line 828 "../../src/print.c"
_auto_t = 0 ; 

#line 829 "../../src/print.c"
break ; 
} } 
#line 833 "../../src/print.c"
_dcl_buf_put ( ( struct dcl_buf * ) tbuf ) ; 

#line 834 "../../src/print.c"
freetbuf -- ; 
} ; 

#line 837 "../../src/print.c"
int _fct_dcl_print ( _auto_this ) register struct fct * _auto_this ; 

#line 838 "../../src/print.c"
{ 
#line 838 "../../src/print.c"
Pname _auto_nn ; 
Pname _auto_at ; 

#line 841 "../../src/print.c"
if ( print_mode == 4 ) { 
#line 841 "../../src/print.c"
puttok ( 40 ) ; 

#line 843 "../../src/print.c"
for ( _auto_nn = _auto_this -> _fct_argtype ;_auto_nn ;) { 
#line 843 "../../src/print.c"
_type_dcl_print ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( 
#line 843 "../../src/print.c"
struct name * ) 0 ) ; 

#line 845 "../../src/print.c"
if ( _auto_nn = _auto_nn -> _name_n_list ) puttok ( 71 ) ; 
else 
#line 845 "../../src/print.c"
break ; 
} 
#line 847 "../../src/print.c"
switch ( _auto_this -> _fct_nargs_known ) { 
#line 847 "../../src/print.c"
case 0 : case 155 : puttok ( 155 ) ; 
#line 847 "../../src/print.c"

#line 849 "../../src/print.c"
break ; 
} 
#line 851 "../../src/print.c"
puttok ( 41 ) ; 

#line 852 "../../src/print.c"
{ 
#line 852 "../../src/print.c"
return ; 
} } 
#line 855 "../../src/print.c"
_auto_at = ( _auto_this -> _fct_f_this ? _auto_this -> _fct_f_this : _auto_this -> _fct_argtype ) ; 

#line 857 "../../src/print.c"
puttok ( 40 ) ; 

#line 858 "../../src/print.c"
if ( _auto_this -> _fct_body && ( Cast == 0 ) ) { 
#line 858 "../../src/print.c"
for ( _auto_nn = _auto_at ;_auto_nn ;) 
#line 858 "../../src/print.c"

#line 860 "../../src/print.c"
{ 
#line 860 "../../src/print.c"
_name_print ( ( struct name * ) _auto_nn ) ; 

#line 862 "../../src/print.c"
if ( _auto_nn = _auto_nn -> _name_n_list ) puttok ( 71 ) ; 
else 
#line 862 "../../src/print.c"
break ; 
} 
#line 864 "../../src/print.c"
puttok ( 41 ) ; 

#line 866 "../../src/print.c"
if ( _auto_at ) _name_dcl_print ( ( struct name * ) _auto_at , 72 ) ; 

#line 868 "../../src/print.c"
if ( _auto_this -> _fct_b_init && ( print_mode != 3 ) ) { 
#line 868 "../../src/print.c"
puttok ( 69 ) ; 

#line 870 "../../src/print.c"
puttok ( 40 ) ; 

#line 871 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _fct_b_init ) ; 

#line 872 "../../src/print.c"
puttok ( 41 ) ; 
} 
#line 875 "../../src/print.c"
if ( MAIN ) { 
#line 875 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * 
#line 875 "../../src/print.c"
) "%s ", "{ _main();") ; 

#line 877 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _fct_body ) ; 

#line 878 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "}") ; 
} else 
#line 881 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _fct_body ) ; 
} else 
#line 884 "../../src/print.c"
puttok ( 41 ) ; 
} ; 

#line 887 "../../src/print.c"
int _classdef_print_members ( _auto_this ) register struct classdef * _auto_this ; 

#line 888 "../../src/print.c"
{ 
#line 888 "../../src/print.c"
int _auto_i ; 
Pname _auto_nn ; 

#line 892 "../../src/print.c"
if ( _auto_this -> _classdef_clbase ) { 
#line 892 "../../src/print.c"
Pclass _auto_bcl ; 

#line 893 "../../src/print.c"
_auto_bcl = ( ( ( struct classdef * ) ( _auto_this -> _classdef_clbase -> _expr__O2.__C2_tp ) ) ) ; 
#line 893 "../../src/print.c"

#line 894 "../../src/print.c"
_classdef_print_members ( ( struct classdef * ) _auto_bcl ) ; 
} 
#line 896 "../../src/print.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_nn ;( 
#line 896 "../../src/print.c"
_auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 896 "../../src/print.c"
{ 
#line 896 "../../src/print.c"
if 
#line 896 "../../src/print.c"
( ( ( ( ( ( ( _auto_nn -> _node_base == 85 ) && ( _auto_nn -> _name_n_union == 
#line 896 "../../src/print.c"
0 ) ) && ( _auto_nn -> _expr__O2.__C2_tp -> _node_base != 108 ) ) && ( _auto_nn -> _expr__O2.__C2_tp -> 
#line 896 "../../src/print.c"
_node_base != 76 ) ) && ( _auto_nn -> _expr__O2.__C2_tp -> _node_base != 6 ) ) && ( _auto_nn -> _expr__O2.__C2_tp -> 
#line 896 "../../src/print.c"
_node_base != 13 ) ) && ( _auto_nn -> _name_n_stclass != 31 ) ) 
#line 904 "../../src/print.c"
{ 
#line 904 "../../src/print.c"
Pexpr _auto_i ; 

#line 905 "../../src/print.c"
_auto_i = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 906 "../../src/print.c"
_auto_nn -> _expr__O4.__C4_n_initializer = 0 ; 

#line 907 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 

#line 908 "../../src/print.c"
_auto_nn -> _expr__O4.__C4_n_initializer = _auto_i ; 
} } } ; 

#line 914 "../../src/print.c"
int _classdef_dcl_print ( _auto_this , _auto__A10 ) register struct classdef * _auto_this ; 
struct name * _auto__A10 ; 

#line 915 "../../src/print.c"
{ 
#line 915 "../../src/print.c"
Plist _auto_l ; 
TOK _auto_c ; 

#line 917 "../../src/print.c"
_auto_c = _auto_this -> _classdef_csu ; 

#line 918 "../../src/print.c"
if ( ( _auto_c == 6 ) && ( print_mode == 3 ) ) _auto_c = 32 ; 

#line 920 "../../src/print.c"
if ( print_mode == 3 ) { 
#line 920 "../../src/print.c"
int _auto_i ; 
Pname _auto_nn ; 

#line 924 "../../src/print.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_nn ;( _auto_nn = 
#line 924 "../../src/print.c"
_table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 924 "../../src/print.c"
{ 
#line 924 "../../src/print.c"
if ( 
#line 924 "../../src/print.c"
( _auto_nn -> _node_base == 85 ) && ( _auto_nn -> _name_n_union == 0 ) ) 
#line 926 "../../src/print.c"
{ 
#line 926 "../../src/print.c"
if ( 
#line 926 "../../src/print.c"
_auto_nn -> _expr__O2.__C2_tp -> _node_base == 6 ) 
#line 927 "../../src/print.c"
_classdef_dcl_print ( ( struct classdef * ) ( ( ( struct classdef * 
#line 927 "../../src/print.c"
) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) , ( struct name * ) _auto_nn ) ; 
} } } 
#line 932 "../../src/print.c"
puttok ( ( int ) _auto_c ) ; 

#line 933 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", _auto_this -> _classdef_string ) ; 
#line 933 "../../src/print.c"

#line 935 "../../src/print.c"
if ( _auto_this -> _classdef_c_body == 0 ) { 
#line 935 "../../src/print.c"
return ; 
} 
#line 936 "../../src/print.c"
_auto_this -> _classdef_c_body = 0 ; 

#line 938 "../../src/print.c"
if ( print_mode == 3 ) { 
#line 938 "../../src/print.c"
int _auto_i ; 
int _auto_sm ; 
Pname _auto_nn ; 
int _auto_sz ; 

#line 940 "../../src/print.c"
_auto_sm = 0 ; 

#line 942 "../../src/print.c"
_auto_sz = _type_tsizeof ( ( struct type * ) _auto_this ) ; 

#line 944 "../../src/print.c"
puttok ( 73 ) ; 

#line 945 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "/* sizeof = %d */\n", _auto_sz ) ; 

#line 946 "../../src/print.c"
if ( _auto_this -> _classdef_real_size ) _classdef_print_members ( _auto_this ) ; 
else 
#line 949 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "char _dummy;") ; 
#line 949 "../../src/print.c"

#line 950 "../../src/print.c"
puttok ( 74 ) ; 

#line 951 "../../src/print.c"
puttok ( 72 ) ; 

#line 954 "../../src/print.c"
if ( _auto_this -> _classdef_virt_count ) { 
#line 954 "../../src/print.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> 
#line 954 "../../src/print.c"
_classdef_memtbl , _auto_i = 1 ) ;_auto_nn ;( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) 
#line 954 "../../src/print.c"
) ) 
#line 956 "../../src/print.c"
{ 
#line 956 "../../src/print.c"
if ( ( _auto_nn -> _node_base == 85 ) && ( _auto_nn -> _name_n_union == 0 
#line 956 "../../src/print.c"
) ) 
#line 957 "../../src/print.c"
{ 
#line 957 "../../src/print.c"
Ptype _auto_t ; 

#line 958 "../../src/print.c"
_auto_t = _auto_nn -> _expr__O2.__C2_tp ; 

#line 959 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 959 "../../src/print.c"
case 108 : { 
#line 961 "../../src/print.c"
Pfct _auto_f ; 

#line 961 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_t ) ) ) ; 

#line 963 "../../src/print.c"
if ( _auto_f -> _fct_f_virtual == 0 ) break ; 

#line 964 "../../src/print.c"
if ( _auto_f -> _fct_f_inline ) puttok ( 31 ) ; 

#line 965 "../../src/print.c"
_type_print ( ( struct type * ) _auto_f -> _fct_returns ) ; 

#line 966 "../../src/print.c"
_name_print ( ( struct name * ) _auto_nn ) ; 

#line 967 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "()") ; 

#line 968 "../../src/print.c"
puttok ( 72 ) ; 

#line 969 "../../src/print.c"
break ; 
} 
#line 971 "../../src/print.c"
case 76 : { 
#line 972 "../../src/print.c"
Pgen _auto_g ; 
Plist _auto_gl ; 

#line 972 "../../src/print.c"
_auto_g = ( ( ( struct gen * ) ( _auto_t ) ) ) ; 

#line 974 "../../src/print.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 974 "../../src/print.c"
Pfct _auto_f ; 

#line 975 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_gl -> _name_list_f -> _expr__O2.__C2_tp ) ) ) ; 
#line 975 "../../src/print.c"

#line 976 "../../src/print.c"
if ( _auto_f -> _fct_f_virtual == 0 ) break ; 

#line 977 "../../src/print.c"
if ( _auto_f -> _fct_f_inline ) puttok ( 31 ) ; 

#line 978 "../../src/print.c"
_type_print ( ( struct type * ) _auto_f -> _fct_returns ) ; 

#line 979 "../../src/print.c"
_name_print ( ( struct name * ) _auto_gl -> _name_list_f ) ; 

#line 980 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "()") ; 

#line 981 "../../src/print.c"
puttok ( 72 ) ; 
} } } } } 
#line 988 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * 
#line 988 "../../src/print.c"
) "static int (*%s__vtbl[])() =", _auto_this -> _classdef_string ) ; 

#line 989 "../../src/print.c"
puttok ( 73 ) ; 

#line 990 "../../src/print.c"
for ( _auto_i = 0 ;( _auto_i < _auto_this -> _classdef_virt_count ) ;( _auto_i ++ ) ) { 
#line 990 "../../src/print.c"
fprintf ( 
#line 990 "../../src/print.c"
( struct _iobuf * ) out_file , ( char * ) " (int(*)()) ") ; 

#line 992 "../../src/print.c"
_name_print ( ( struct name * ) ( _auto_this -> _classdef_virt_init [ _auto_i ] ) ) ; 

#line 993 "../../src/print.c"
puttok ( 71 ) ; 
} 
#line 995 "../../src/print.c"
puttok ( 86 ) ; 

#line 996 "../../src/print.c"
puttok ( 74 ) ; 

#line 997 "../../src/print.c"
puttok ( 72 ) ; 
} 
#line 1000 "../../src/print.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_nn ;( 
#line 1000 "../../src/print.c"
_auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 1000 "../../src/print.c"
{ 
#line 1000 "../../src/print.c"
if 
#line 1000 "../../src/print.c"
( ( _auto_nn -> _node_base == 85 ) && ( _auto_nn -> _name_n_union == 0 ) ) 
#line 1001 "../../src/print.c"
{ 
#line 1001 "../../src/print.c"
Ptype _auto_t ; 
#line 1001 "../../src/print.c"

#line 1002 "../../src/print.c"
_auto_t = _auto_nn -> _expr__O2.__C2_tp ; 

#line 1003 "../../src/print.c"
switch ( _auto_t -> _node_base ) { 
#line 1003 "../../src/print.c"
case 108 : case 76 : break ; 

#line 1007 "../../src/print.c"
default : if ( _auto_nn -> _name_n_stclass == 31 ) { 
#line 1008 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , 
#line 1008 "../../src/print.c"
( int ) 0 ) ; 
} } } } 
#line 1016 "../../src/print.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , 
#line 1016 "../../src/print.c"
_auto_i = 1 ) ;_auto_nn ;( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) 
#line 1016 "../../src/print.c"
) 
#line 1016 "../../src/print.c"
{ 
#line 1016 "../../src/print.c"
if ( ( _auto_nn -> _node_base == 85 ) && ( _auto_nn -> _name_n_union == 0 ) 
#line 1016 "../../src/print.c"
) 
#line 1017 "../../src/print.c"
{ 
#line 1017 "../../src/print.c"
Pfct _auto_f ; 

#line 1018 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1019 "../../src/print.c"
switch ( _auto_f -> _node_base ) { 
#line 1019 "../../src/print.c"
case 108 : if ( ( debug == 0 ) && 
#line 1019 "../../src/print.c"
_auto_f -> _fct_f_virtual ) 
#line 1022 "../../src/print.c"
break ; 

#line 1023 "../../src/print.c"
if ( ( debug == 0 ) && _auto_f -> _fct_f_inline ) break ; 

#line 1024 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 

#line 1025 "../../src/print.c"
break ; 

#line 1026 "../../src/print.c"
case 76 : _name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 
#line 1026 "../../src/print.c"

#line 1028 "../../src/print.c"
break ; 
} } } 
#line 1033 "../../src/print.c"
for ( _auto_l = _auto_this -> _classdef_friend_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 1033 "../../src/print.c"
Pname _auto_nn ; 
#line 1033 "../../src/print.c"

#line 1034 "../../src/print.c"
_auto_nn = _auto_l -> _name_list_f ; 

#line 1036 "../../src/print.c"
switch ( _auto_nn -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1036 "../../src/print.c"
case 108 : fprintf ( ( struct _iobuf * ) out_file , 
#line 1036 "../../src/print.c"
( char * ) "%s ", "/* friend */") ; 

#line 1039 "../../src/print.c"
Cast = 1 ; 

#line 1040 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 

#line 1041 "../../src/print.c"
Cast = 0 ; 

#line 1042 "../../src/print.c"
break ; 

#line 1043 "../../src/print.c"
case 76 : _auto_l -> _name_list_f = ( _auto_nn = ( ( ( struct gen * ) ( _auto_nn -> 
#line 1043 "../../src/print.c"
_expr__O2.__C2_tp ) ) ) -> _gen_fct_list -> _name_list_f ) ; 

#line 1045 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", "/* friend */") ; 

#line 1046 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_nn , ( int ) 0 ) ; 

#line 1047 "../../src/print.c"
break ; 
} } 
#line 1050 "../../src/print.c"
{ 
#line 1050 "../../src/print.c"
return ; 
} } 
#line 1053 "../../src/print.c"
if ( _auto_this -> _classdef_clbase ) { 
#line 1053 "../../src/print.c"
puttok ( 69 ) ; 

#line 1055 "../../src/print.c"
if ( _auto_this -> _classdef_pubbase ) puttok ( 25 ) ; 

#line 1056 "../../src/print.c"
_name_print ( ( struct name * ) _auto_this -> _classdef_clbase ) ; 
} 
#line 1058 "../../src/print.c"
puttok ( 73 ) ; 

#line 1060 "../../src/print.c"
for ( _auto_l = _auto_this -> _classdef_friend_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 1060 "../../src/print.c"
Pname _auto_fr ; 

#line 1061 "../../src/print.c"
_auto_fr = _auto_l -> _name_list_f ; 

#line 1062 "../../src/print.c"
puttok ( 18 ) ; 

#line 1063 "../../src/print.c"
switch ( _auto_fr -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1063 "../../src/print.c"
case 108 : default : _name_print ( ( struct name * 
#line 1063 "../../src/print.c"
) _auto_fr ) ; 

#line 1067 "../../src/print.c"
puttok ( 72 ) ; 
} } 
#line 1071 "../../src/print.c"
if ( _auto_this -> _classdef_privmem ) _name_dcl_print ( ( struct name * ) _auto_this -> _classdef_privmem , 72 ) 
#line 1071 "../../src/print.c"
; 

#line 1072 "../../src/print.c"
if ( _auto_this -> _classdef_memtbl ) _table_dcl_print ( ( struct table * ) _auto_this -> _classdef_memtbl , 63 , 25 ) ; 
#line 1072 "../../src/print.c"

#line 1073 "../../src/print.c"
puttok ( 25 ) ; 

#line 1074 "../../src/print.c"
puttok ( 69 ) ; 

#line 1075 "../../src/print.c"
if ( _auto_this -> _classdef_pubmem ) _name_dcl_print ( ( struct name * ) _auto_this -> _classdef_pubmem , 72 ) ; 

#line 1076 "../../src/print.c"
if ( _auto_this -> _classdef_memtbl ) _table_dcl_print ( ( struct table * ) _auto_this -> _classdef_memtbl , 62 , 25 ) ; 
#line 1076 "../../src/print.c"

#line 1078 "../../src/print.c"
if ( _auto_this -> _classdef_pubdef ) { 
#line 1078 "../../src/print.c"
puttok ( 25 ) ; 

#line 1080 "../../src/print.c"
puttok ( 69 ) ; 

#line 1081 "../../src/print.c"
_name_print ( ( struct name * ) _auto_this -> _classdef_pubdef ) ; 

#line 1082 "../../src/print.c"
puttok ( 72 ) ; 
} 
#line 1085 "../../src/print.c"
puttok ( 74 ) ; 
} ; 

#line 1088 "../../src/print.c"
int _enumdef_dcl_print ( _auto_this , _auto_n ) register struct enumdef * _auto_this ; 
struct name * _auto_n ; 

#line 1089 "../../src/print.c"
{ 
#line 1089 "../../src/print.c"
if ( print_mode == 3 ) { 
#line 1090 "../../src/print.c"
if ( _auto_this -> _enumdef_mem ) { 
#line 1091 "../../src/print.c"
fprintf ( ( struct 
#line 1091 "../../src/print.c"
_iobuf * ) out_file , ( char * ) "/* enum %s */\n", _auto_n -> _expr__O3.__C3_string ) ; 

#line 1093 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_this -> _enumdef_mem , 72 ) ; 
} } else 
#line 1096 "../../src/print.c"
{ 
#line 1096 "../../src/print.c"
puttok ( 13 ) ; 

#line 1098 "../../src/print.c"
if ( _auto_n ) _name_print ( ( struct name * ) _auto_n ) ; 

#line 1099 "../../src/print.c"
puttok ( 73 ) ; 

#line 1100 "../../src/print.c"
if ( _auto_this -> _enumdef_mem ) _name_dcl_print ( ( struct name * ) _auto_this -> _enumdef_mem , 72 ) ; 

#line 1101 "../../src/print.c"
puttok ( 74 ) ; 
} } ; 

#line 1105 "../../src/print.c"
int addrof_cm = 0 ; 

#line 1107 "../../src/print.c"
int _expr_print ( _auto_this ) register struct expr * _auto_this ; 

#line 1108 "../../src/print.c"
{ 
#line 1108 "../../src/print.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1108 "../../src/print.c"
) "0->expr.print()") ; 

#line 1110 "../../src/print.c"
if ( ( _auto_this == ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) || ( _auto_this == ( 
#line 1110 "../../src/print.c"
struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ) 
#line 1110 "../../src/print.c"
errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1110 "../../src/print.c"
) "(%d%k)->expr.print(%d %d)", _auto_this , _auto_this -> _node_base , _auto_this -> _expr__O3.__C3_e1 , _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1112 "../../src/print.c"
switch ( _auto_this -> _node_base ) { 
#line 1112 "../../src/print.c"
case 85 : { 
#line 1114 "../../src/print.c"
Pname _auto_n ; 

#line 1114 "../../src/print.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 1115 "../../src/print.c"
if ( _auto_n -> _name_n_evaluated && ( _auto_n -> _name_n_scope != 136 ) ) { 
#line 1115 "../../src/print.c"
if ( _auto_n -> _expr__O2.__C2_tp -> 
#line 1115 "../../src/print.c"
_node_base != 21 ) 
#line 1116 "../../src/print.c"
{ 
#line 1116 "../../src/print.c"
puttok ( 40 ) ; 

#line 1118 "../../src/print.c"
puttok ( 40 ) ; 

#line 1119 "../../src/print.c"
{ 
#line 1119 "../../src/print.c"
bit _auto_oc ; 

#line 1119 "../../src/print.c"
_auto_oc = Cast ; 

#line 1120 "../../src/print.c"
Cast = 1 ; 

#line 1121 "../../src/print.c"
_type_print ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) ; 

#line 1122 "../../src/print.c"
Cast = _auto_oc ; 

#line 1123 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) ")%d)", _auto_n -> _name_n_val ) ; 
#line 1123 "../../src/print.c"
} } else 
#line 1126 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%d", 
#line 1126 "../../src/print.c"
_auto_n -> _name_n_val ) ; 
} else 
#line 1129 "../../src/print.c"
_name_print ( ( struct name * ) _auto_n ) ; 

#line 1130 "../../src/print.c"
break ; 
} 
#line 1132 "../../src/print.c"
case 169 : if ( curr_icall ) { 
#line 1133 "../../src/print.c"
Pname _auto_n ; 
int _auto_argno ; 
Pin _auto_il ; 

#line 1134 "../../src/print.c"
_auto_n = ( ( ( struct name * ) ( _auto_this ) ) ) ; 

#line 1135 "../../src/print.c"
_auto_argno = _auto_n -> _name_n_val ; 

#line 1137 "../../src/print.c"
for ( _auto_il = curr_icall ;_auto_il ;( _auto_il = _auto_il -> _iline_i_next ) ) if ( _auto_n -> _expr__O5.__C5_n_table == _auto_il -> _iline_i_table ) 
#line 1137 "../../src/print.c"

#line 1138 "../../src/print.c"
goto aok ; 

#line 1139 "../../src/print.c"
goto bok ; 

#line 1140 "../../src/print.c"
aok : if ( _auto_n = ( _auto_il -> _iline_local [ _auto_argno ] ) ) { 
#line 1141 "../../src/print.c"
_name_print ( ( struct 
#line 1141 "../../src/print.c"
name * ) _auto_n ) ; 
} else 
#line 1145 "../../src/print.c"
{ 
#line 1145 "../../src/print.c"
Pexpr _auto_ee ; 
Ptype _auto_t ; 

#line 1146 "../../src/print.c"
_auto_ee = ( _auto_il -> _iline_arg [ _auto_argno ] ) ; 

#line 1147 "../../src/print.c"
_auto_t = ( _auto_il -> _iline_tp [ _auto_argno ] ) ; 

#line 1148 "../../src/print.c"
if ( ( _auto_ee == 0 ) || ( _auto_ee == ( struct expr * ) _auto_this ) 
#line 1148 "../../src/print.c"
) 
#line 1148 "../../src/print.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "%d->expr.print(A %d)", _auto_this , _auto_ee ) ; 
#line 1148 "../../src/print.c"

#line 1150 "../../src/print.c"
if ( ( ( _auto_t != _auto_ee -> _expr__O2.__C2_tp ) && ( _type_is_cl_obj ( ( struct type * ) 
#line 1150 "../../src/print.c"
_auto_t ) == 0 ) ) && ( eobj == 0 ) ) 
#line 1150 "../../src/print.c"
{ 
#line 1150 "../../src/print.c"
puttok ( 40 ) 
#line 1150 "../../src/print.c"
; 

#line 1152 "../../src/print.c"
puttok ( 40 ) ; 

#line 1153 "../../src/print.c"
{ 
#line 1153 "../../src/print.c"
bit _auto_oc ; 

#line 1153 "../../src/print.c"
_auto_oc = Cast ; 

#line 1154 "../../src/print.c"
Cast = 1 ; 

#line 1155 "../../src/print.c"
_type_print ( ( struct type * ) _auto_t ) ; 

#line 1156 "../../src/print.c"
Cast = _auto_oc ; 
} 
#line 1158 "../../src/print.c"
puttok ( 41 ) ; 

#line 1159 "../../src/print.c"
if ( _auto_ee ) Eprint ( ( struct expr * ) _auto_ee ) ; 

#line 1160 "../../src/print.c"
puttok ( 41 ) ; 
} else 
#line 1163 "../../src/print.c"
if ( _auto_ee ) Eprint ( ( struct expr * ) _auto_ee ) ; 
} } else 
#line 1166 "../../src/print.c"
{ 
#line 1166 "../../src/print.c"
bok : _name_print ( ( struct name * ) ( ( ( struct 
#line 1166 "../../src/print.c"
name * ) ( _auto_this ) ) ) ) ; 
} 
#line 1171 "../../src/print.c"
break ; 

#line 1173 "../../src/print.c"
case 168 : { 
#line 1174 "../../src/print.c"
_auto_this -> _expr__O5.__C5_il -> _iline_i_next = curr_icall ; 

#line 1175 "../../src/print.c"
curr_icall = _auto_this -> _expr__O5.__C5_il ; 

#line 1176 "../../src/print.c"
if ( _auto_this -> _expr__O5.__C5_il == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1176 "../../src/print.c"
) "expr.print: iline missing") ; 

#line 1177 "../../src/print.c"
{ 
#line 1177 "../../src/print.c"
Pexpr _auto_a0 ; 
int _auto_val ; 

#line 1177 "../../src/print.c"
_auto_a0 = ( _auto_this -> _expr__O5.__C5_il -> _iline_arg [ 0 ] ) ; 

#line 1178 "../../src/print.c"
_auto_val = 68 ; 

#line 1179 "../../src/print.c"
if ( _auto_this -> _expr__O5.__C5_il -> _iline_fct_name -> _name_n_oper != 161 ) goto dumb ; 

#line 1187 "../../src/print.c"
switch ( _auto_a0 -> _node_base ) { 
#line 1187 "../../src/print.c"
case 86 : _auto_val = 0 ; 

#line 1190 "../../src/print.c"
break ; 

#line 1191 "../../src/print.c"
case 112 : case 145 : _auto_val = 1 ; 

#line 1194 "../../src/print.c"
break ; 

#line 1195 "../../src/print.c"
case 113 : if ( _auto_a0 -> _expr__O3.__C3_e1 -> _node_base == 169 ) { 
#line 1196 "../../src/print.c"
Pname _auto_a ; 

#line 1197 "../../src/print.c"
_auto_a = ( ( ( struct name * ) ( _auto_a0 -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1198 "../../src/print.c"
if ( _auto_a -> _name_n_assigned_to == 111 ) _auto_val = 111 ; 
} } 
#line 1201 "../../src/print.c"
if ( _auto_val == 68 ) goto dumb ; 

#line 1212 "../../src/print.c"
{ 
#line 1212 "../../src/print.c"
Pexpr _auto_e ; 

#line 1212 "../../src/print.c"
_auto_e = _auto_this -> _expr__O3.__C3_e1 ; 

#line 1213 "../../src/print.c"
lx : switch ( _auto_e -> _node_base ) { 
#line 1214 "../../src/print.c"
case 71 : _auto_e = ( ( ( _auto_e -> _expr__O4.__C4_e2 -> 
#line 1214 "../../src/print.c"
_node_base == 68 ) || ( _auto_e -> _expr__O3.__C3_e1 -> _node_base == 70 ) ) ? _auto_e -> _expr__O4.__C4_e2 : _auto_e -> _expr__O3.__C3_e1 ) 
#line 1214 "../../src/print.c"
; 

#line 1224 "../../src/print.c"
goto lx ; 

#line 1226 "../../src/print.c"
case 68 : { 
#line 1227 "../../src/print.c"
Pexpr _auto_q ; 

#line 1227 "../../src/print.c"
_auto_q = _auto_e -> _expr__O5.__C5_cond ; 

#line 1228 "../../src/print.c"
if ( ( ( _auto_q -> _node_base == 62 ) && ( _auto_q -> _expr__O3.__C3_e1 -> _node_base == 169 ) ) 
#line 1228 "../../src/print.c"
&& ( _auto_q -> _expr__O4.__C4_e2 == zero ) ) 
#line 1228 "../../src/print.c"
{ 
#line 1228 "../../src/print.c"
Pname _auto_a ; 
Pexpr _auto_saved ; 

#line 1229 "../../src/print.c"
_auto_a = ( ( ( struct name * ) ( _auto_q -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1230 "../../src/print.c"
_auto_saved = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , ( int 
#line 1230 "../../src/print.c"
) 0 , ( struct expr * ) 0 , ( struct expr * ) 0 
#line 1230 "../../src/print.c"
) ; 

#line 1231 "../../src/print.c"
( * _auto_saved ) = ( * _auto_e ) ; 

#line 1232 "../../src/print.c"
( * _auto_e ) = ( ( _auto_val == 0 ) ? ( * _auto_e -> _expr__O3.__C3_e1 ) 
#line 1232 "../../src/print.c"
: ( * _auto_e -> _expr__O4.__C4_e2 ) ) ; 

#line 1233 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1234 "../../src/print.c"
( * _auto_e ) = ( * _auto_saved ) ; 

#line 1235 "../../src/print.c"
_expr__dtor ( ( struct expr * ) _auto_saved , 1) ; 

#line 1236 "../../src/print.c"
curr_icall = _auto_this -> _expr__O5.__C5_il -> _iline_i_next ; 

#line 1237 "../../src/print.c"
{ 
#line 1237 "../../src/print.c"
return ; 
} } } } } 
#line 1242 "../../src/print.c"
dumb : if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * 
#line 1242 "../../src/print.c"
) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1245 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) _stmt_print ( ( struct stmt * ) ( ( ( struct stmt * 
#line 1245 "../../src/print.c"
) ( _auto_this -> _expr__O4.__C4_e2 ) ) ) ) ; 

#line 1246 "../../src/print.c"
curr_icall = _auto_this -> _expr__O5.__C5_il -> _iline_i_next ; 

#line 1248 "../../src/print.c"
break ; 
} } 
#line 1250 "../../src/print.c"
case 44 : case 45 : if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * 
#line 1250 "../../src/print.c"
) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1253 "../../src/print.c"
puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1254 "../../src/print.c"
_name_print ( ( struct name * ) _auto_this -> _expr__O5.__C5_mem ) ; 

#line 1255 "../../src/print.c"
break ; 

#line 1257 "../../src/print.c"
case 157 : _type_print ( ( struct type * ) _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 1259 "../../src/print.c"
puttok ( 40 ) ; 

#line 1260 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 1260 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * 
#line 1260 "../../src/print.c"
) "%s ", "/* &") ; 

#line 1262 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1263 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", ", */") ; 
} 
#line 1265 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) _expr_print ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1266 "../../src/print.c"
puttok ( 41 ) ; 

#line 1267 "../../src/print.c"
break ; 

#line 1269 "../../src/print.c"
case 30 : puttok ( 30 ) ; 

#line 1271 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 && ( _auto_this -> _expr__O3.__C3_e1 != dummy ) ) { 
#line 1271 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) 
#line 1271 "../../src/print.c"

#line 1272 "../../src/print.c"
Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 
} else 
#line 1274 "../../src/print.c"
if ( _auto_this -> _expr__O5.__C5_tp2 ) { 
#line 1274 "../../src/print.c"
puttok ( 40 ) ; 

#line 1276 "../../src/print.c"
_type_print ( ( struct type * ) _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 1277 "../../src/print.c"
puttok ( 41 ) ; 
} 
#line 1279 "../../src/print.c"
break ; 

#line 1281 "../../src/print.c"
case 23 : puttok ( 23 ) ; 

#line 1283 "../../src/print.c"
_type_print ( ( struct type * ) _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 1284 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) { 
#line 1284 "../../src/print.c"
puttok ( 40 ) ; 

#line 1286 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1287 "../../src/print.c"
puttok ( 41 ) ; 
} 
#line 1289 "../../src/print.c"
break ; 

#line 1291 "../../src/print.c"
case 9 : puttok ( 9 ) ; 

#line 1293 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1294 "../../src/print.c"
break ; 

#line 1296 "../../src/print.c"
case 113 : puttok ( 40 ) ; 

#line 1298 "../../src/print.c"
if ( _auto_this -> _expr__O5.__C5_tp2 -> _node_base != 38 ) { 
#line 1298 "../../src/print.c"
puttok ( 40 ) ; 

#line 1300 "../../src/print.c"
{ 
#line 1300 "../../src/print.c"
bit _auto_oc ; 

#line 1300 "../../src/print.c"
_auto_oc = Cast ; 

#line 1301 "../../src/print.c"
Cast = 1 ; 

#line 1302 "../../src/print.c"
_type_print ( ( struct type * ) _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 1303 "../../src/print.c"
Cast = _auto_oc ; 

#line 1304 "../../src/print.c"
puttok ( 41 ) ; 
} } 
#line 1306 "../../src/print.c"
puttok ( 40 ) ; 

#line 1307 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1308 "../../src/print.c"
puttok ( 41 ) ; 

#line 1309 "../../src/print.c"
puttok ( 41 ) ; 

#line 1310 "../../src/print.c"
break ; 

#line 1312 "../../src/print.c"
case 82 : case 83 : case 84 : case 80 : if ( _auto_this -> _expr__O3.__C3_string ) fprintf ( ( 
#line 1312 "../../src/print.c"
struct _iobuf * ) out_file , ( char * ) "%s ", _auto_this -> _expr__O3.__C3_string ) ; 

#line 1317 "../../src/print.c"
break ; 

#line 1319 "../../src/print.c"
case 81 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\"%s\"", _auto_this -> 
#line 1319 "../../src/print.c"
_expr__O3.__C3_string ) ; 

#line 1321 "../../src/print.c"
break ; 

#line 1323 "../../src/print.c"
case 34 : case 86 : puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1326 "../../src/print.c"
break ; 

#line 1328 "../../src/print.c"
case 150 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%d", ( 
#line 1328 "../../src/print.c"
( int ) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1330 "../../src/print.c"
break ; 

#line 1332 "../../src/print.c"
case 165 : if ( _auto_this -> _expr__O4.__C4_string2 ) fprintf ( ( struct _iobuf * ) out_file , ( char 
#line 1332 "../../src/print.c"
* ) " %s_%s", _auto_this -> _expr__O3.__C3_string , _auto_this -> _expr__O4.__C4_string2 ) ; 
else 
#line 1336 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) " %s", _auto_this -> _expr__O3.__C3_string ) 
#line 1336 "../../src/print.c"
; 

#line 1337 "../../src/print.c"
break ; 

#line 1339 "../../src/print.c"
case 144 : break ; 

#line 1342 "../../src/print.c"
case 146 : case 109 : { 
#line 1344 "../../src/print.c"
Pname _auto_fn ; 
Pname _auto_at ; 

#line 1344 "../../src/print.c"
_auto_fn = _auto_this -> _expr__O5.__C5_fct_name ; 

#line 1346 "../../src/print.c"
if ( _auto_fn && ( print_mode == 3 ) ) { 
#line 1346 "../../src/print.c"
Pfct _auto_f ; 

#line 1347 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1349 "../../src/print.c"
if ( _auto_f -> _node_base == 76 ) { 
#line 1349 "../../src/print.c"
Pgen _auto_g ; 

#line 1350 "../../src/print.c"
_auto_g = ( ( ( struct gen * ) ( _auto_f ) ) ) ; 

#line 1351 "../../src/print.c"
_auto_this -> _expr__O5.__C5_fct_name = ( _auto_fn = _auto_g -> _gen_fct_list -> _name_list_f ) ; 

#line 1352 "../../src/print.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 
} 
#line 1354 "../../src/print.c"
_name_print ( ( struct name * ) _auto_fn ) ; 

#line 1355 "../../src/print.c"
_auto_at = ( _auto_f -> _fct_f_this ? _auto_f -> _fct_f_this : _auto_f -> _fct_argtype ) ; 
} else 
#line 1357 "../../src/print.c"
{ 
#line 1357 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) 
#line 1357 "../../src/print.c"
; 

#line 1360 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) { 
#line 1360 "../../src/print.c"
_auto_at = ( ( ( struct fct * ) ( 
#line 1360 "../../src/print.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) ) ) -> _fct_argtype ; 
} else 
#line 1363 "../../src/print.c"
{ 
#line 1363 "../../src/print.c"
_auto_at = ( ( ( struct name * ) ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 -> 
#line 1363 "../../src/print.c"
_expr__O2.__C2_tp ) ) ) ; 
} } 
#line 1367 "../../src/print.c"
puttok ( 40 ) ; 

#line 1368 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 1368 "../../src/print.c"
if ( _auto_at && ( print_mode == 3 ) ) { 
#line 1369 "../../src/print.c"
Pexpr _auto_e ; 
#line 1369 "../../src/print.c"

#line 1370 "../../src/print.c"
_auto_e = _auto_this -> _expr__O4.__C4_e2 ; 

#line 1371 "../../src/print.c"
while ( _auto_at ) { 
#line 1371 "../../src/print.c"
Pexpr _auto_ex ; 
Ptype _auto_t ; 

#line 1373 "../../src/print.c"
_auto_t = _auto_at -> _expr__O2.__C2_tp ; 

#line 1375 "../../src/print.c"
if ( _auto_e == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1375 "../../src/print.c"
"A missing for %s()", _auto_fn ? _auto_fn -> _expr__O3.__C3_string : "??") ; 

#line 1376 "../../src/print.c"
if ( _auto_e -> _node_base == 140 ) { 
#line 1376 "../../src/print.c"
_auto_ex = _auto_e -> _expr__O3.__C3_e1 ; 

#line 1378 "../../src/print.c"
_auto_e = _auto_e -> _expr__O4.__C4_e2 ; 
} else 
#line 1381 "../../src/print.c"
_auto_ex = _auto_e ; 

#line 1383 "../../src/print.c"
if ( _auto_ex == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1383 "../../src/print.c"
"A ofT%t missing", _auto_t ) ; 

#line 1385 "../../src/print.c"
if ( ( ( _auto_t != _auto_ex -> _expr__O2.__C2_tp ) && ( _type_is_cl_obj ( ( struct type * ) 
#line 1385 "../../src/print.c"
_auto_t ) == 0 ) ) && ( eobj == 0 ) ) 
#line 1387 "../../src/print.c"
{ 
#line 1387 "../../src/print.c"
puttok ( 40 ) 
#line 1387 "../../src/print.c"
; 

#line 1389 "../../src/print.c"
{ 
#line 1389 "../../src/print.c"
bit _auto_oc ; 

#line 1389 "../../src/print.c"
_auto_oc = Cast ; 

#line 1390 "../../src/print.c"
Cast = 1 ; 

#line 1391 "../../src/print.c"
_type_print ( ( struct type * ) _auto_t ) ; 

#line 1392 "../../src/print.c"
Cast = _auto_oc ; 
} 
#line 1394 "../../src/print.c"
puttok ( 41 ) ; 

#line 1395 "../../src/print.c"
if ( _auto_ex -> _node_base == 51 ) { 
#line 1395 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char 
#line 1395 "../../src/print.c"
* ) "%s ", "(0+") ; 

#line 1397 "../../src/print.c"
if ( _auto_ex ) Eprint ( ( struct expr * ) _auto_ex ) ; 

#line 1398 "../../src/print.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "%s ", ")") ; 
} else 
#line 1401 "../../src/print.c"
if ( _auto_ex ) Eprint ( ( struct expr * ) _auto_ex ) ; 
} else 
#line 1404 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_ex ) ; 

#line 1405 "../../src/print.c"
_auto_at = _auto_at -> _name_n_list ; 

#line 1406 "../../src/print.c"
if ( _auto_at ) puttok ( 71 ) ; 
} 
#line 1408 "../../src/print.c"
if ( _auto_e ) { 
#line 1408 "../../src/print.c"
puttok ( 71 ) ; 

#line 1410 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_e ) ; 
} } else 
#line 1414 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 
} 
#line 1416 "../../src/print.c"
puttok ( 41 ) ; 

#line 1417 "../../src/print.c"
break ; 
} 
#line 1419 "../../src/print.c"
case 70 : if ( ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 169 ) && ( ( ( 
#line 1419 "../../src/print.c"
( struct name * ) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) -> _name_n_assigned_to == 111 ) ) 
#line 1420 "../../src/print.c"
{ 
#line 1420 "../../src/print.c"

#line 1420 "../../src/print.c"
Pname _auto_n ; 
int _auto_argno ; 
Pin _auto_il ; 

#line 1422 "../../src/print.c"
_auto_n = ( ( ( struct name * ) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1423 "../../src/print.c"
_auto_argno = _auto_n -> _name_n_val ; 

#line 1425 "../../src/print.c"
for ( _auto_il = curr_icall ;_auto_il ;( _auto_il = _auto_il -> _iline_i_next ) ) if ( _auto_il -> _iline_i_table == _auto_n -> _expr__O5.__C5_n_table ) 
#line 1425 "../../src/print.c"

#line 1426 "../../src/print.c"
goto akk ; 

#line 1427 "../../src/print.c"
goto bkk ; 

#line 1428 "../../src/print.c"
akk : if ( ( _auto_il -> _iline_local [ _auto_argno ] ) == 0 ) { 
#line 1429 "../../src/print.c"
_expr_print ( ( 
#line 1429 "../../src/print.c"
struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1431 "../../src/print.c"
break ; 
} } 
#line 1434 "../../src/print.c"
case 62 : case 63 : case 60 : case 61 : case 59 : case 58 : 
#line 1434 "../../src/print.c"

#line 1440 "../../src/print.c"
bkk : if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1442 "../../src/print.c"
puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1443 "../../src/print.c"
if ( ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp != _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp ) && ( _auto_this -> _expr__O4.__C4_e2 -> _node_base != 
#line 1443 "../../src/print.c"
86 ) ) 
#line 1443 "../../src/print.c"
{ 
#line 1443 "../../src/print.c"
Ptype _auto_t1 ; 

#line 1444 "../../src/print.c"
_auto_t1 = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 1445 "../../src/print.c"
cmp : switch ( _auto_t1 -> _node_base ) { 
#line 1446 "../../src/print.c"
default : break ; 

#line 1448 "../../src/print.c"
case 97 : _auto_t1 = ( ( ( struct basetype * ) ( _auto_t1 ) ) ) -> 
#line 1448 "../../src/print.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1448 "../../src/print.c"
goto cmp ; 

#line 1449 "../../src/print.c"
case 125 : case 158 : case 110 : if ( ( ( ( struct ptr * ) 
#line 1449 "../../src/print.c"
( _auto_t1 ) ) ) -> _ptr_typ != ( ( ( struct ptr * ) ( _auto_this -> 
#line 1449 "../../src/print.c"
_expr__O4.__C4_e2 -> _expr__O2.__C2_tp ) ) ) -> _ptr_typ ) 
#line 1452 "../../src/print.c"
{ 
#line 1452 "../../src/print.c"
puttok ( 40 ) ; 

#line 1454 "../../src/print.c"
{ 
#line 1454 "../../src/print.c"
bit _auto_oc ; 

#line 1454 "../../src/print.c"
_auto_oc = Cast ; 

#line 1455 "../../src/print.c"
Cast = 1 ; 

#line 1456 "../../src/print.c"
_type_print ( ( struct type * ) _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ) ; 

#line 1457 "../../src/print.c"
Cast = _auto_oc ; 

#line 1458 "../../src/print.c"
puttok ( 41 ) ; 
} } } } 
#line 1462 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> 
#line 1462 "../../src/print.c"
_expr__O4.__C4_e2 ) ; 

#line 1463 "../../src/print.c"
break ; 

#line 1465 "../../src/print.c"
case 111 : if ( _auto_this -> _expr__O4.__C4_e2 ) { 
#line 1466 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct 
#line 1466 "../../src/print.c"
expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1468 "../../src/print.c"
puttok ( 42 ) ; 

#line 1469 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1470 "../../src/print.c"
puttok ( 43 ) ; 
} else 
#line 1472 "../../src/print.c"
{ 
#line 1472 "../../src/print.c"
puttok ( 50 ) ; 

#line 1474 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 
} 
#line 1476 "../../src/print.c"
break ; 

#line 1478 "../../src/print.c"
case 124 : puttok ( 73 ) ; 

#line 1480 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) _expr_print ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1481 "../../src/print.c"
puttok ( 74 ) ; 

#line 1482 "../../src/print.c"
break ; 

#line 1484 "../../src/print.c"
case 140 : { 
#line 1485 "../../src/print.c"
Pexpr _auto_e ; 

#line 1485 "../../src/print.c"
_auto_e = ( struct expr * ) _auto_this ; 

#line 1486 "../../src/print.c"
for ( ;;) { 
#line 1486 "../../src/print.c"
if ( _auto_e -> _node_base == 140 ) { 
#line 1487 "../../src/print.c"
_expr_print ( ( struct expr * 
#line 1487 "../../src/print.c"
) _auto_e -> _expr__O3.__C3_e1 ) ; 

#line 1489 "../../src/print.c"
if ( _auto_e = _auto_e -> _expr__O4.__C4_e2 ) puttok ( 71 ) ; 
else 
#line 1492 "../../src/print.c"
{ 
#line 1492 "../../src/print.c"
return ; 
} } else 
#line 1494 "../../src/print.c"
{ 
#line 1494 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_e ) ; 

#line 1496 "../../src/print.c"
{ 
#line 1496 "../../src/print.c"
return ; 
} } } } 
#line 1500 "../../src/print.c"
case 68 : if ( _auto_this -> _expr__O5.__C5_cond ) Eprint ( ( struct expr * 
#line 1500 "../../src/print.c"
) _auto_this -> _expr__O5.__C5_cond ) ; 

#line 1502 "../../src/print.c"
puttok ( 68 ) ; 

#line 1503 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1504 "../../src/print.c"
puttok ( 69 ) ; 

#line 1505 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1506 "../../src/print.c"
break ; 

#line 1508 "../../src/print.c"
case 71 : switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 1509 "../../src/print.c"
case 86 : case 150 : case 82 : 
#line 1509 "../../src/print.c"

#line 1513 "../../src/print.c"
case 85 : case 45 : case 44 : case 83 : case 151 : case 81 : puttok ( 40 ) 
#line 1513 "../../src/print.c"
; 

#line 1520 "../../src/print.c"
goto le2 ; 

#line 1521 "../../src/print.c"
default : puttok ( 40 ) ; 

#line 1523 "../../src/print.c"
{ 
#line 1523 "../../src/print.c"
int _auto_oo ; 

#line 1523 "../../src/print.c"
_auto_oo = addrof_cm ; 

#line 1524 "../../src/print.c"
addrof_cm = 0 ; 

#line 1525 "../../src/print.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1526 "../../src/print.c"
addrof_cm = _auto_oo ; 
} 
#line 1528 "../../src/print.c"
puttok ( 71 ) ; 

#line 1529 "../../src/print.c"
le2 : if ( addrof_cm ) { 
#line 1531 "../../src/print.c"
switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1532 "../../src/print.c"
case 113 : switch 
#line 1532 "../../src/print.c"
( _auto_this -> _expr__O4.__C4_e2 -> _expr__O4.__C4_e2 -> _node_base ) 
#line 1534 "../../src/print.c"
{ 
#line 1534 "../../src/print.c"
case 71 : case 168 : goto ec ; 
} 
#line 1538 "../../src/print.c"
case 85 : case 45 : case 111 : case 44 : case 169 : puttok ( 112 ) ; 
#line 1538 "../../src/print.c"

#line 1544 "../../src/print.c"
addrof_cm -- ; 

#line 1545 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1546 "../../src/print.c"
addrof_cm ++ ; 

#line 1547 "../../src/print.c"
break ; 

#line 1548 "../../src/print.c"
case 168 : case 71 : ec : if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) 
#line 1548 "../../src/print.c"
_auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1552 "../../src/print.c"
break ; 

#line 1553 "../../src/print.c"
case 146 : if ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O5.__C5_fct_name && ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O5.__C5_fct_name -> _name_n_oper == 161 ) ) 
#line 1553 "../../src/print.c"

#line 1556 "../../src/print.c"
{ 
#line 1556 "../../src/print.c"
addrof_cm -- ; 

#line 1558 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1559 "../../src/print.c"
addrof_cm ++ ; 

#line 1560 "../../src/print.c"
break ; 
} 
#line 1562 "../../src/print.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "& inlineF call (%k)", _auto_this -> 
#line 1562 "../../src/print.c"
_expr__O4.__C4_e2 -> _node_base ) ; 
} } else 
#line 1566 "../../src/print.c"
{ 
#line 1566 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> 
#line 1566 "../../src/print.c"
_expr__O4.__C4_e2 ) ; 
} 
#line 1569 "../../src/print.c"
puttok ( 41 ) ; 
} 
#line 1571 "../../src/print.c"
break ; 

#line 1573 "../../src/print.c"
case 107 : case 46 : case 47 : puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1577 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1578 "../../src/print.c"
break ; 

#line 1579 "../../src/print.c"
case 112 : case 145 : switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1582 "../../src/print.c"
case 111 : if ( 
#line 1582 "../../src/print.c"
_auto_this -> _expr__O4.__C4_e2 -> _expr__O4.__C4_e2 == 0 ) 
#line 1584 "../../src/print.c"
{ 
#line 1584 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 -> _expr__O3.__C3_e1 ) 
#line 1584 "../../src/print.c"
; 

#line 1586 "../../src/print.c"
{ 
#line 1586 "../../src/print.c"
return ; 
} } 
#line 1588 "../../src/print.c"
break ; 

#line 1589 "../../src/print.c"
case 168 : addrof_cm ++ ; 

#line 1591 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1592 "../../src/print.c"
addrof_cm -- ; 

#line 1593 "../../src/print.c"
{ 
#line 1593 "../../src/print.c"
return ; 
} } 
#line 1597 "../../src/print.c"
if ( ( _auto_this -> _expr__O4.__C4_e2 -> _expr__O2.__C2_tp == 0 ) || ( _auto_this -> _expr__O4.__C4_e2 -> 
#line 1597 "../../src/print.c"
_expr__O2.__C2_tp -> _node_base != 108 ) ) 
#line 1597 "../../src/print.c"
puttok ( 112 ) ; 

#line 1599 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1600 "../../src/print.c"
break ; 

#line 1602 "../../src/print.c"
case 54 : case 55 : case 50 : case 51 : case 53 : case 56 : case 57 : 
#line 1602 "../../src/print.c"

#line 1609 "../../src/print.c"
case 52 : case 65 : case 64 : case 66 : case 67 : case 126 : case 127 : 
#line 1609 "../../src/print.c"

#line 1616 "../../src/print.c"
case 128 : case 130 : case 129 : case 134 : case 135 : case 132 : case 133 : 
#line 1616 "../../src/print.c"

#line 1623 "../../src/print.c"
case 131 : case 49 : case 48 : if ( _auto_this -> _expr__O3.__C3_e1 ) Eprint ( ( struct expr * 
#line 1623 "../../src/print.c"
) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1627 "../../src/print.c"
puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1628 "../../src/print.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) Eprint ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1629 "../../src/print.c"
break ; 

#line 1631 "../../src/print.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "%d->expr.print%k", _auto_this , _auto_this -> 
#line 1631 "../../src/print.c"
_node_base ) ; 
} } ; 

#line 1636 "../../src/print.c"
Pexpr aval ( _auto_a ) struct name * _auto_a ; 

#line 1637 "../../src/print.c"
{ 
#line 1637 "../../src/print.c"
Pexpr _auto__result ; 
int _auto_argno ; 
Pin _auto_il ; 

#line 1638 "../../src/print.c"
_auto_argno = _auto_a -> _name_n_val ; 

#line 1640 "../../src/print.c"
for ( _auto_il = curr_icall ;_auto_il ;( _auto_il = _auto_il -> _iline_i_next ) ) if ( _auto_il -> _iline_i_table == _auto_a -> _expr__O5.__C5_n_table ) 
#line 1640 "../../src/print.c"

#line 1641 "../../src/print.c"
goto aok ; 

#line 1642 "../../src/print.c"
{ 
#line 1642 "../../src/print.c"
{ _auto__result = 0 ; 

#line 1642 "../../src/print.c"
return _auto__result ; 
} } 
#line 1643 "../../src/print.c"
aok : { 
#line 1644 "../../src/print.c"
Pexpr _auto_aa ; 

#line 1644 "../../src/print.c"
_auto_aa = ( _auto_il -> _iline_arg [ _auto_argno ] ) ; 

#line 1646 "../../src/print.c"
ll : switch ( _auto_aa -> _node_base ) { 
#line 1647 "../../src/print.c"
case 113 : _auto_aa = _auto_aa -> _expr__O3.__C3_e1 ; 

#line 1648 "../../src/print.c"
goto ll ; 

#line 1649 "../../src/print.c"
case 169 : { 
#line 1649 "../../src/print.c"
{ _auto__result = aval ( ( ( struct name * ) ( _auto_aa ) ) 
#line 1649 "../../src/print.c"
) ; 

#line 1649 "../../src/print.c"
return _auto__result ; 
} } 
#line 1650 "../../src/print.c"
default : { 
#line 1650 "../../src/print.c"
{ _auto__result = _auto_aa ; 

#line 1650 "../../src/print.c"
return _auto__result ; 
} } } } } ; 

#line 1656 "../../src/print.c"
int _stmt_print ( _auto_this ) register struct stmt * _auto_this ; 

#line 1657 "../../src/print.c"
{ 
#line 1657 "../../src/print.c"
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1658 "../../src/print.c"
if ( forced_sm ) { 
#line 1658 "../../src/print.c"
forced_sm = 0 ; 

#line 1660 "../../src/print.c"
_loc_putline ( ( struct loc * ) ( & _auto_this -> _stmt_where ) ) ; 
} 
#line 1664 "../../src/print.c"
if ( _auto_this -> _stmt_memtbl && ( _auto_this -> _node_base != 116 ) ) { 
#line 1664 "../../src/print.c"
puttok ( 73 ) ; 
#line 1664 "../../src/print.c"

#line 1666 "../../src/print.c"
{ 
#line 1666 "../../src/print.c"
Ptable _auto_tbl ; 
Pname _auto_n ; 
int _auto_i ; 
int _auto_bl ; 

#line 1666 "../../src/print.c"
_auto_tbl = _auto_this -> _stmt_memtbl ; 

#line 1667 "../../src/print.c"
_auto_this -> _stmt_memtbl = 0 ; 

#line 1668 "../../src/print.c"
; 

#line 1668 "../../src/print.c"
; 

#line 1668 "../../src/print.c"
_auto_bl = 1 ; 

#line 1671 "../../src/print.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_n ;( _auto_n = _table_get_mem ( 
#line 1671 "../../src/print.c"
( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 1671 "../../src/print.c"
{ 
#line 1671 "../../src/print.c"
char * _auto_s ; 
Pname _auto_cn ; 

#line 1673 "../../src/print.c"
_auto_s = _auto_n -> _expr__O3.__C3_string ; 

#line 1674 "../../src/print.c"
if ( ( ( _auto_s [ 0 ] ) != '_' ) || ( ( _auto_s [ 
#line 1674 "../../src/print.c"
1 ] ) != 'X' ) ) 
#line 1674 "../../src/print.c"
{ 
#line 1674 "../../src/print.c"
_name_dcl_print ( ( struct name * ) _auto_n , ( int 
#line 1674 "../../src/print.c"
) 0 ) ; 

#line 1676 "../../src/print.c"
_auto_bl = 0 ; 
} 
#line 1678 "../../src/print.c"
; 

#line 1679 "../../src/print.c"
if ( ( _auto_bl && ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) ) 
#line 1679 "../../src/print.c"
) && ( _table_look ( ( struct table * ) ( ( struct classdef * ) ( 
#line 1679 "../../src/print.c"
( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , ( 
#line 1679 "../../src/print.c"
char * ) "_dtor", ( int ) 0 ) ) ) 
#line 1679 "../../src/print.c"
_auto_bl = 0 ; 
#line 1679 "../../src/print.c"
} 
#line 1682 "../../src/print.c"
if ( _auto_bl ) { 
#line 1682 "../../src/print.c"
Pstmt _auto_sl ; 

#line 1683 "../../src/print.c"
_auto_sl = _auto_this -> _stmt_s_list ; 

#line 1684 "../../src/print.c"
_auto_this -> _stmt_s_list = 0 ; 

#line 1685 "../../src/print.c"
_stmt_print ( _auto_this ) ; 

#line 1686 "../../src/print.c"
_auto_this -> _stmt_memtbl = _auto_tbl ; 

#line 1687 "../../src/print.c"
puttok ( 74 ) ; 

#line 1688 "../../src/print.c"
if ( _auto_sl ) { 
#line 1688 "../../src/print.c"
_auto_this -> _stmt_s_list = _auto_sl ; 

#line 1690 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_sl ) ; 
} } else 
#line 1693 "../../src/print.c"
{ 
#line 1693 "../../src/print.c"
_stmt_print ( _auto_this ) ; 

#line 1695 "../../src/print.c"
_auto_this -> _stmt_memtbl = _auto_tbl ; 

#line 1696 "../../src/print.c"
puttok ( 74 ) ; 
} 
#line 1698 "../../src/print.c"
{ 
#line 1698 "../../src/print.c"
return ; 
} } } 
#line 1701 "../../src/print.c"
switch ( _auto_this -> _node_base ) { 
#line 1701 "../../src/print.c"
default : errorFI_PC__E ( ( int ) 
#line 1701 "../../src/print.c"
'i' , ( char * ) "stmt.print(base=%k)", _auto_this -> _node_base ) ; 

#line 1704 "../../src/print.c"
case 1 : fprintf ( ( struct _iobuf * ) out_file , ( char * ) "asm(\"%s\");\n", ( 
#line 1704 "../../src/print.c"
( char * ) ( _auto_this -> _stmt__O8.__C8_e ) ) ) ; 

#line 1706 "../../src/print.c"
break ; 

#line 1707 "../../src/print.c"
case 118 : _name_dcl_print ( ( struct name * ) _auto_this -> _stmt__O7.__C7_d , 72 ) ; 

#line 1709 "../../src/print.c"
break ; 

#line 1710 "../../src/print.c"
case 3 : case 7 : puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1713 "../../src/print.c"
puttok ( 72 ) ; 

#line 1714 "../../src/print.c"
break ; 

#line 1715 "../../src/print.c"
case 8 : puttok ( ( int ) _auto_this -> _node_base ) ; 

#line 1717 "../../src/print.c"
puttok ( 69 ) ; 

#line 1718 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1719 "../../src/print.c"
break ; 

#line 1720 "../../src/print.c"
case 72 : if ( _auto_this -> _stmt__O8.__C8_e ) { 
#line 1722 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) 
#line 1722 "../../src/print.c"
; 

#line 1724 "../../src/print.c"
if ( ( _auto_this -> _stmt__O8.__C8_e -> _node_base == 168 ) && _auto_this -> _stmt__O8.__C8_e -> _expr__O4.__C4_e2 ) break ; 
} 
#line 1726 "../../src/print.c"
puttok ( 72 ) ; 

#line 1727 "../../src/print.c"
break ; 

#line 1728 "../../src/print.c"
case 39 : puttok ( 39 ) ; 

#line 1730 "../../src/print.c"
puttok ( 40 ) ; 

#line 1730 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1730 "../../src/print.c"
puttok ( 41 ) ; 

#line 1731 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1732 "../../src/print.c"
break ; 

#line 1733 "../../src/print.c"
case 10 : puttok ( 10 ) ; 

#line 1735 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1736 "../../src/print.c"
puttok ( 39 ) ; 

#line 1737 "../../src/print.c"
puttok ( 40 ) ; 

#line 1737 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1737 "../../src/print.c"
puttok ( 41 ) ; 

#line 1738 "../../src/print.c"
puttok ( 72 ) ; 

#line 1739 "../../src/print.c"
break ; 

#line 1740 "../../src/print.c"
case 33 : puttok ( 33 ) ; 

#line 1742 "../../src/print.c"
puttok ( 40 ) ; 

#line 1742 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1742 "../../src/print.c"
puttok ( 41 ) ; 

#line 1743 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1744 "../../src/print.c"
break ; 

#line 1745 "../../src/print.c"
case 28 : if ( outlined ) { 
#line 1746 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_e && ( _auto_this -> _stmt__O8.__C8_e != dummy ) 
#line 1746 "../../src/print.c"
) 
#line 1749 "../../src/print.c"
{ 
#line 1749 "../../src/print.c"
if ( outlined != _auto_this -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ) { 
#line 1751 "../../src/print.c"
switch ( outlined -> _node_base ) { 
#line 1751 "../../src/print.c"

#line 1752 "../../src/print.c"

#line 1753 "../../src/print.c"
case 158 : case 125 : if ( ( ( ( struct ptr * ) ( outlined ) 
#line 1753 "../../src/print.c"
) ) -> _ptr_typ == ( ( ( struct ptr * ) ( _auto_this -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ) 
#line 1753 "../../src/print.c"
) ) -> _ptr_typ ) 
#line 1755 "../../src/print.c"
break ; 

#line 1756 "../../src/print.c"
default : _auto_this -> _stmt__O8.__C8_e = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , 
#line 1756 "../../src/print.c"
( ( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( 
#line 1756 "../../src/print.c"
( ( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * 
#line 1756 "../../src/print.c"
) _auto_this -> _stmt__O8.__C8_e ) , ( struct expr * ) 0 ) ) ) , ( 
#line 1756 "../../src/print.c"
( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) outlined ) ) , _auto__Xthis__ctor_texpr ) ) ) 
#line 1756 "../../src/print.c"
; 
} } } } 
#line 1762 "../../src/print.c"
puttok ( 28 ) ; 

#line 1763 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_e ) _expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1764 "../../src/print.c"
puttok ( 72 ) ; 

#line 1765 "../../src/print.c"
while ( _auto_this -> _stmt_s_list && ( _auto_this -> _stmt_s_list -> _node_base == 72 ) ) _auto_this -> _stmt_s_list = _auto_this -> _stmt_s_list -> 
#line 1765 "../../src/print.c"
_stmt_s_list ; 

#line 1766 "../../src/print.c"
break ; 

#line 1767 "../../src/print.c"
case 4 : puttok ( 4 ) ; 

#line 1769 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_e ) Eprint ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1770 "../../src/print.c"
puttok ( 69 ) ; 

#line 1771 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1772 "../../src/print.c"
break ; 

#line 1773 "../../src/print.c"
case 19 : puttok ( 19 ) ; 

#line 1775 "../../src/print.c"
_name_print ( ( struct name * ) _auto_this -> _stmt__O7.__C7_d ) ; 

#line 1776 "../../src/print.c"
puttok ( 72 ) ; 

#line 1777 "../../src/print.c"
break ; 

#line 1778 "../../src/print.c"
case 115 : _name_print ( ( struct name * ) _auto_this -> _stmt__O7.__C7_d ) ; 

#line 1780 "../../src/print.c"
puttok ( 69 ) ; 

#line 1781 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1782 "../../src/print.c"
break ; 

#line 1783 "../../src/print.c"
case 20 : { 
#line 1784 "../../src/print.c"
int _auto_val ; 

#line 1784 "../../src/print.c"
_auto_val = 68 ; 

#line 1785 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_e -> _node_base == 169 ) { 
#line 1785 "../../src/print.c"
Pname _auto_a ; 
Pexpr _auto_arg ; 

#line 1786 "../../src/print.c"
_auto_a = ( ( ( struct name * ) ( _auto_this -> _stmt__O8.__C8_e ) ) ) ; 

#line 1787 "../../src/print.c"
_auto_arg = aval ( ( struct name * ) _auto_a ) ; 

#line 1789 "../../src/print.c"
if ( _auto_arg ) switch ( _auto_arg -> _node_base ) { 
#line 1790 "../../src/print.c"
case 86 : _auto_val = 0 ; 

#line 1791 "../../src/print.c"
break ; 

#line 1792 "../../src/print.c"
case 112 : case 145 : _auto_val = 1 ; 

#line 1793 "../../src/print.c"
break ; 

#line 1794 "../../src/print.c"
case 150 : _auto_val = ( ( ( ( int ) ( _auto_arg -> _expr__O3.__C3_e1 ) ) ) 
#line 1794 "../../src/print.c"
!= 0 ) ; 
} } 
#line 1798 "../../src/print.c"
switch ( _auto_val ) { 
#line 1798 "../../src/print.c"
case 1 : _stmt_print ( ( struct stmt * ) _auto_this -> 
#line 1798 "../../src/print.c"
_stmt_s ) ; 

#line 1801 "../../src/print.c"
break ; 

#line 1802 "../../src/print.c"
case 0 : if ( _auto_this -> _stmt__O9.__C9_else_stmt ) _stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_else_stmt ) 
#line 1802 "../../src/print.c"
; 
else 
#line 1806 "../../src/print.c"
puttok ( 72 ) ; 

#line 1807 "../../src/print.c"
break ; 

#line 1808 "../../src/print.c"
default : puttok ( 20 ) ; 

#line 1810 "../../src/print.c"
puttok ( 40 ) ; 

#line 1810 "../../src/print.c"
_expr_print ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1810 "../../src/print.c"
puttok ( 41 ) ; 

#line 1811 "../../src/print.c"
if ( _auto_this -> _stmt_s -> _stmt_s_list ) { 
#line 1811 "../../src/print.c"
puttok ( 73 ) ; 

#line 1813 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1814 "../../src/print.c"
puttok ( 74 ) ; 
} else 
#line 1817 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1818 "../../src/print.c"
if ( _auto_this -> _stmt__O9.__C9_else_stmt ) { 
#line 1818 "../../src/print.c"
puttok ( 12 ) ; 

#line 1820 "../../src/print.c"
if ( _auto_this -> _stmt__O9.__C9_else_stmt -> _stmt_s_list ) { 
#line 1820 "../../src/print.c"
puttok ( 73 ) ; 

#line 1822 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_else_stmt ) ; 

#line 1823 "../../src/print.c"
puttok ( 74 ) ; 
} else 
#line 1826 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_else_stmt ) ; 
} } 
#line 1829 "../../src/print.c"
break ; 
} 
#line 1831 "../../src/print.c"
case 16 : { 
#line 1832 "../../src/print.c"
int _auto_fi ; 

#line 1832 "../../src/print.c"
_auto_fi = ( _auto_this -> _stmt__O9.__C9_for_init && ( ( ( _auto_this -> _stmt__O9.__C9_for_init -> _node_base != 72 ) || _auto_this -> _stmt__O9.__C9_for_init -> 
#line 1832 "../../src/print.c"
_stmt_memtbl ) || _auto_this -> _stmt__O9.__C9_for_init -> _stmt_s_list ) ) ; 

#line 1834 "../../src/print.c"
if ( _auto_fi ) { 
#line 1834 "../../src/print.c"
puttok ( 73 ) ; 

#line 1836 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_for_init ) ; 
} 
#line 1838 "../../src/print.c"
puttok ( 16 ) ; 

#line 1839 "../../src/print.c"
puttok ( 40 ) ; 

#line 1840 "../../src/print.c"
if ( ( _auto_fi == 0 ) && _auto_this -> _stmt__O9.__C9_for_init ) _expr_print ( ( struct expr * ) 
#line 1840 "../../src/print.c"
_auto_this -> _stmt__O9.__C9_for_init -> _stmt__O8.__C8_e ) ; 

#line 1841 "../../src/print.c"
( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? ( ( ( int ) 
#line 1841 "../../src/print.c"
( ( * ( out_file -> __iobuf__ptr ++ ) ) = 59) ) ) : _flsbuf ( 
#line 1841 "../../src/print.c"
59, ( struct _iobuf * ) out_file ) ; 

#line 1842 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_e ) Eprint ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1843 "../../src/print.c"
( ( -- out_file -> __iobuf__cnt ) >= 0 ) ? ( ( ( int ) 
#line 1843 "../../src/print.c"
( ( * ( out_file -> __iobuf__ptr ++ ) ) = 59) ) ) : _flsbuf ( 
#line 1843 "../../src/print.c"
59, ( struct _iobuf * ) out_file ) ; 

#line 1844 "../../src/print.c"
if ( _auto_this -> _stmt__O7.__C7_e2 ) Eprint ( ( struct expr * ) _auto_this -> _stmt__O7.__C7_e2 ) ; 

#line 1845 "../../src/print.c"
puttok ( 41 ) ; 

#line 1846 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1853 "../../src/print.c"
if ( _auto_fi ) puttok ( 74 ) ; 

#line 1854 "../../src/print.c"
break ; 
} 
#line 1856 "../../src/print.c"
case 166 : if ( _auto_this -> _stmt_s && _auto_this -> _stmt__O8.__C8_s2 ) { 
#line 1857 "../../src/print.c"
puttok ( 73 ) ; 

#line 1859 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1860 "../../src/print.c"
_stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O8.__C8_s2 ) ; 

#line 1861 "../../src/print.c"
puttok ( 74 ) ; 
} else 
#line 1863 "../../src/print.c"
{ 
#line 1863 "../../src/print.c"
if ( _auto_this -> _stmt_s ) _stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) 
#line 1863 "../../src/print.c"
; 

#line 1865 "../../src/print.c"
if ( _auto_this -> _stmt__O8.__C8_s2 ) _stmt_print ( ( struct stmt * ) _auto_this -> _stmt__O8.__C8_s2 ) ; 
} 
#line 1867 "../../src/print.c"
break ; 

#line 1868 "../../src/print.c"
case 116 : puttok ( 73 ) ; 

#line 1870 "../../src/print.c"
_loc_putline ( ( struct loc * ) ( & _auto_this -> _stmt_where ) ) ; 

#line 1871 "../../src/print.c"
if ( _auto_this -> _stmt__O7.__C7_d ) _name_dcl_print ( ( struct name * ) _auto_this -> _stmt__O7.__C7_d , 72 ) ; 

#line 1872 "../../src/print.c"
if ( _auto_this -> _stmt_memtbl && _auto_this -> _stmt__O8.__C8_own_tbl ) { 
#line 1872 "../../src/print.c"
Pname _auto_n ; 
int _auto_i ; 

#line 1875 "../../src/print.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , _auto_i = 1 ) ;_auto_n ;( _auto_n = 
#line 1875 "../../src/print.c"
_table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , ++ _auto_i ) ) ) 
#line 1875 "../../src/print.c"
{ 
#line 1875 "../../src/print.c"
if ( 
#line 1875 "../../src/print.c"
_auto_n -> _expr__O2.__C2_tp && ( _auto_n -> _name_n_union == 0 ) ) 
#line 1877 "../../src/print.c"
switch ( _auto_n -> _name_n_scope ) { 
#line 1877 "../../src/print.c"
case 
#line 1877 "../../src/print.c"
139 : 
#line 1879 "../../src/print.c"
case 136 : break ; 

#line 1881 "../../src/print.c"
default : _name_dcl_print ( ( struct name * ) _auto_n , ( int ) 0 ) ; 
#line 1881 "../../src/print.c"
} } } 
#line 1886 "../../src/print.c"
if ( _auto_this -> _stmt_s ) _stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s ) 
#line 1886 "../../src/print.c"
; 

#line 1887 "../../src/print.c"
puttok ( 74 ) ; 
} 
#line 1889 "../../src/print.c"
if ( _auto_this -> _stmt_s_list ) _stmt_print ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ; 
} ; 

#line 1892 "../../src/print.c"
int _table_dcl_print ( _auto_this , _auto_s , _auto_pub ) register struct table * _auto_this ; 
int _auto_s ; 
int _auto_pub ; 

#line 1897 "../../src/print.c"
{ 
#line 1897 "../../src/print.c"
register Pname * _auto_np ; 
register int _auto_i ; 

#line 1901 "../../src/print.c"
if ( _auto_this == 0 ) { 
#line 1901 "../../src/print.c"
return ; 
} 
#line 1903 "../../src/print.c"
_auto_np = _auto_this -> _table_entries ; 

#line 1904 "../../src/print.c"
for ( _auto_i = 1 ;( _auto_i < _auto_this -> _table_free_slot ) ;( _auto_i ++ ) ) { 
#line 1904 "../../src/print.c"
register Pname _auto_n ; 
#line 1904 "../../src/print.c"

#line 1905 "../../src/print.c"
_auto_n = ( _auto_np [ _auto_i ] ) ; 

#line 1906 "../../src/print.c"
switch ( _auto_s ) { 
#line 1906 "../../src/print.c"
case 0 : _name_dcl_print ( ( struct name * ) _auto_n , ( 
#line 1906 "../../src/print.c"
int ) 0 ) ; 

#line 1909 "../../src/print.c"
break ; 

#line 1910 "../../src/print.c"
case 62 : if ( _auto_n -> _expr__O2.__C2_tp && ( _auto_n -> _name_n_scope == _auto_pub ) ) _name_dcl_print ( ( struct 
#line 1910 "../../src/print.c"
name * ) _auto_n , ( int ) 0 ) ; 

#line 1912 "../../src/print.c"
break ; 

#line 1913 "../../src/print.c"
case 63 : if ( _auto_n -> _expr__O2.__C2_tp && ( _auto_n -> _name_n_scope != _auto_pub ) ) _name_dcl_print ( ( struct 
#line 1913 "../../src/print.c"
name * ) _auto_n , ( int ) 0 ) ; 

#line 1915 "../../src/print.c"
break ; 
} } } ; 

/* the end */
