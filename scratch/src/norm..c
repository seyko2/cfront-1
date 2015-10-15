#line 1 "../../src/norm.c"

/* <<cfront 10/10/85>> */
/* < ../../src/norm.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/norm.c"
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

#line 24 "../../src/norm.c"
extern int syn_init ( ) ; 

#line 25 "../../src/norm.c"
extern int syn_init ( ) 
#line 26 "../../src/norm.c"
{ 
#line 26 "../../src/norm.c"
any_type = ( struct basetype * ) _basetype__ctor ( ( struct basetype * 
#line 26 "../../src/norm.c"
) 0 , 141 , ( struct name * ) 0 ) ; 

#line 28 "../../src/norm.c"
any_type -> _node_permanent = 1 ; 

#line 29 "../../src/norm.c"
dummy = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 144 , ( 
#line 29 "../../src/norm.c"
struct expr * ) 0 , ( struct expr * ) 0 ) ; 

#line 30 "../../src/norm.c"
dummy -> _node_permanent = 1 ; 

#line 31 "../../src/norm.c"
dummy -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 32 "../../src/norm.c"
zero = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 86 , ( 
#line 32 "../../src/norm.c"
struct expr * ) 0 , ( struct expr * ) 0 ) ; 

#line 33 "../../src/norm.c"
zero -> _node_permanent = 1 ; 
} ; 

#line 37 "../../src/norm.c"
int stcount = 0 ; 

#line 39 "../../src/norm.c"
extern char * make_name ( _auto_c ) int _auto_c ; 

#line 40 "../../src/norm.c"
{ 
#line 40 "../../src/norm.c"
char * _auto__result ; 
char * _auto_s ; 
int _auto_count ; 
int _auto_i ; 

#line 42 "../../src/norm.c"
_auto_s = ( ( ( char * ) ( _new ( ( long ) 8 ) ) 
#line 42 "../../src/norm.c"
) ) ; 

#line 45 "../../src/norm.c"
if ( 99999 <= ( ++ stcount ) ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 45 "../../src/norm.c"
* ) "too many generated names") ; 

#line 47 "../../src/norm.c"
( _auto_s [ 0 ] ) = '_' ; 

#line 48 "../../src/norm.c"
( _auto_s [ 1 ] ) = _auto_c ; 

#line 49 "../../src/norm.c"
_auto_count = stcount ; 

#line 49 "../../src/norm.c"
_auto_i = 2 ; 

#line 51 "../../src/norm.c"
if ( 10000 <= _auto_count ) { 
#line 51 "../../src/norm.c"
( _auto_s [ _auto_i ++ ] ) = ( '0' + ( 
#line 51 "../../src/norm.c"
_auto_count / 10000 ) ) ; 

#line 53 "../../src/norm.c"
_auto_count %= 10000 ; 
} 
#line 55 "../../src/norm.c"
if ( 1000 <= _auto_count ) { 
#line 55 "../../src/norm.c"
( _auto_s [ _auto_i ++ ] ) = ( '0' + 
#line 55 "../../src/norm.c"
( _auto_count / 1000 ) ) ; 

#line 57 "../../src/norm.c"
_auto_count %= 1000 ; 
} else 
#line 59 "../../src/norm.c"
if ( 2 < _auto_i ) ( _auto_s [ _auto_i ++ ] ) = '0' ; 

#line 61 "../../src/norm.c"
if ( 100 <= _auto_count ) { 
#line 61 "../../src/norm.c"
( _auto_s [ _auto_i ++ ] ) = ( '0' + ( 
#line 61 "../../src/norm.c"
_auto_count / 100 ) ) ; 

#line 63 "../../src/norm.c"
_auto_count %= 100 ; 
} else 
#line 65 "../../src/norm.c"
if ( 2 < _auto_i ) ( _auto_s [ _auto_i ++ ] ) = '0' ; 

#line 67 "../../src/norm.c"
if ( 10 <= _auto_count ) { 
#line 67 "../../src/norm.c"
( _auto_s [ _auto_i ++ ] ) = ( '0' + ( 
#line 67 "../../src/norm.c"
_auto_count / 10 ) ) ; 

#line 69 "../../src/norm.c"
_auto_count %= 10 ; 
} else 
#line 71 "../../src/norm.c"
if ( 2 < _auto_i ) ( _auto_s [ _auto_i ++ ] ) = '0' ; 

#line 73 "../../src/norm.c"
( _auto_s [ _auto_i ++ ] ) = ( '0' + _auto_count ) ; 

#line 74 "../../src/norm.c"
( _auto_s [ _auto_i ] ) = 0 ; 

#line 76 "../../src/norm.c"
{ 
#line 76 "../../src/norm.c"
{ _auto__result = _auto_s ; 

#line 76 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 79 "../../src/norm.c"
Pbase _basetype_type_adj ( _auto_this , _auto_t ) register struct basetype * _auto_this ; 
int _auto_t ; 

#line 80 "../../src/norm.c"
{ 
#line 80 "../../src/norm.c"
Pbase _auto__result ; 

#line 81 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 81 "../../src/norm.c"
case 119 : case 121 : { 
#line 84 "../../src/norm.c"
Pbase _auto_bt ; 

#line 84 "../../src/norm.c"
_auto_bt = ( struct basetype * ) _basetype__ctor ( ( struct basetype * ) 0 , ( int 
#line 84 "../../src/norm.c"
) 0 , ( struct name * ) 0 ) ; 

#line 85 "../../src/norm.c"
( * _auto_bt ) = ( * _auto_this ) ; 

#line 86 "../../src/norm.c"
if ( _auto_this && ( _auto_this -> _node_permanent == 0 ) ) _type_del ( ( struct type * ) 
#line 86 "../../src/norm.c"
_auto_this ) ; 

#line 87 "../../src/norm.c"
_auto_this = ( struct basetype * ) _auto_bt ; 
} } 
#line 91 "../../src/norm.c"
if ( _auto_this -> _basetype__O1.__C1_b_xname ) { 
#line 91 "../../src/norm.c"
if ( _auto_this -> _node_base ) errorFPC__E ( ( char 
#line 91 "../../src/norm.c"
* ) "badBT:%n%k", _auto_this -> _basetype__O1.__C1_b_xname , _auto_t ) ; 
else 
#line 94 "../../src/norm.c"
{ 
#line 94 "../../src/norm.c"
_auto_this -> _node_base = 97 ; 

#line 96 "../../src/norm.c"
_auto_this -> _basetype_b_name = _auto_this -> _basetype__O1.__C1_b_xname ; 
} 
#line 98 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 
} 
#line 101 "../../src/norm.c"
switch ( _auto_t ) { 
#line 101 "../../src/norm.c"
case 35 : _auto_this -> _basetype_b_typedef = 1 ; 

#line 102 "../../src/norm.c"
break ; 

#line 103 "../../src/norm.c"
case 75 : _auto_this -> _basetype_b_inline = 1 ; 

#line 103 "../../src/norm.c"
break ; 

#line 104 "../../src/norm.c"
case 77 : _auto_this -> _basetype_b_virtual = 1 ; 

#line 104 "../../src/norm.c"
break ; 

#line 105 "../../src/norm.c"
case 26 : _auto_this -> _basetype_b_const = 1 ; 

#line 105 "../../src/norm.c"
break ; 

#line 106 "../../src/norm.c"
case 37 : _auto_this -> _basetype_b_unsigned = 1 ; 

#line 106 "../../src/norm.c"
break ; 

#line 107 "../../src/norm.c"
case 29 : _auto_this -> _basetype_b_short = 1 ; 

#line 107 "../../src/norm.c"
break ; 

#line 108 "../../src/norm.c"
case 22 : _auto_this -> _basetype_b_long = 1 ; 

#line 108 "../../src/norm.c"
break ; 

#line 109 "../../src/norm.c"
case 18 : case 76 : case 14 : case 31 : case 2 : case 27 : if ( 
#line 109 "../../src/norm.c"
_auto_this -> _basetype_b_sto ) 
#line 116 "../../src/norm.c"
errorFPC__E ( ( char * ) "badBT:%k%k", _auto_this -> _basetype_b_sto , _auto_t ) ; 
else 
#line 118 "../../src/norm.c"
_auto_this -> _basetype_b_sto = _auto_t ; 

#line 119 "../../src/norm.c"
break ; 

#line 120 "../../src/norm.c"
case 38 : case 5 : case 21 : case 15 : case 11 : if ( _auto_this -> _node_base ) 
#line 120 "../../src/norm.c"

#line 126 "../../src/norm.c"
errorFPC__E ( ( char * ) "badBT:%k%k", _auto_this -> _node_base , _auto_t ) ; 
else 
#line 128 "../../src/norm.c"
_auto_this -> _node_base = _auto_t ; 

#line 129 "../../src/norm.c"
break ; 

#line 130 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "basetype.type_adj(%k)", _auto_t ) ; 
#line 130 "../../src/norm.c"
} 
#line 133 "../../src/norm.c"
{ 
#line 133 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 133 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 136 "../../src/norm.c"
Pbase _basetype_name_adj ( _auto_this , _auto_n ) register struct basetype * _auto_this ; 
struct name * _auto_n ; 

#line 137 "../../src/norm.c"
{ 
#line 137 "../../src/norm.c"
Pbase _auto__result ; 

#line 138 "../../src/norm.c"
if ( _auto_this -> _basetype__O1.__C1_b_xname ) { 
#line 138 "../../src/norm.c"
if ( _auto_this -> _node_base ) errorFPC__E ( ( char * ) 
#line 138 "../../src/norm.c"
"badBT:%n%n", _auto_this -> _basetype__O1.__C1_b_xname , _auto_n ) ; 
else 
#line 141 "../../src/norm.c"
{ 
#line 141 "../../src/norm.c"
_auto_this -> _node_base = 97 ; 

#line 143 "../../src/norm.c"
_auto_this -> _basetype_b_name = _auto_this -> _basetype__O1.__C1_b_xname ; 
} 
#line 145 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 
} 
#line 147 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = _auto_n ; 

#line 148 "../../src/norm.c"
{ 
#line 148 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 148 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 151 "../../src/norm.c"
Pbase _basetype_base_adj ( _auto_this , _auto_b ) register struct basetype * _auto_this ; 
struct basetype * _auto_b ; 

#line 152 "../../src/norm.c"
{ 
#line 152 "../../src/norm.c"
Pbase _auto__result ; 
Pname _auto_bn ; 

#line 153 "../../src/norm.c"
_auto_bn = _auto_b -> _basetype_b_name ; 

#line 155 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 155 "../../src/norm.c"
case 119 : case 121 : errorFPC__E ( ( char * ) 
#line 155 "../../src/norm.c"
"NX after%k%n", _auto_this -> _node_base , _auto_this -> _basetype_b_name ) ; 

#line 159 "../../src/norm.c"
{ 
#line 159 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 159 "../../src/norm.c"
return _auto__result ; 
} } } 
#line 162 "../../src/norm.c"
if ( _auto_this -> _node_base ) { 
#line 162 "../../src/norm.c"
if ( _auto_this -> _basetype_b_name ) errorFPC__E ( ( 
#line 162 "../../src/norm.c"
char * ) "badBT:%k%n%k%n", _auto_this -> _node_base , _auto_this -> _basetype_b_name , _auto_b -> _node_base , _auto_bn ) ; 
else 
#line 166 "../../src/norm.c"
errorFPC__E ( ( char * ) "badBT:%k%k%n", _auto_this -> _node_base , _auto_b -> _node_base , _auto_bn ) ; 
} else 
#line 168 "../../src/norm.c"
{ 
#line 168 "../../src/norm.c"
_auto_this -> _node_base = _auto_b -> _node_base ; 

#line 170 "../../src/norm.c"
_auto_this -> _basetype_b_name = _auto_bn ; 

#line 171 "../../src/norm.c"
_auto_this -> _basetype_b_table = _auto_b -> _basetype_b_table ; 
} 
#line 173 "../../src/norm.c"
{ 
#line 173 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 173 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 176 "../../src/norm.c"
Pbase _basetype_check ( _auto_this , _auto_n ) register struct basetype * _auto_this ; 
struct name * _auto_n ; 

#line 182 "../../src/norm.c"
{ 
#line 182 "../../src/norm.c"
Pbase _auto__result ; 

#line 183 "../../src/norm.c"
_auto_this -> _basetype_b_inline = 0 ; 

#line 184 "../../src/norm.c"
_auto_this -> _basetype_b_virtual = 0 ; 

#line 186 "../../src/norm.c"
if ( _auto_this -> _basetype__O1.__C1_b_xname && ( _auto_n -> _expr__O2.__C2_tp || _auto_n -> _expr__O3.__C3_string ) ) { 
#line 186 "../../src/norm.c"
if ( _auto_this -> 
#line 186 "../../src/norm.c"
_node_base ) 
#line 188 "../../src/norm.c"
errorFPC__E ( ( char * ) "badBT:%k%n", _auto_this -> _node_base , _auto_this -> _basetype__O1.__C1_b_xname ) ; 
else 
#line 189 "../../src/norm.c"
{ 
#line 189 "../../src/norm.c"
_auto_this -> _node_base = 97 ; 

#line 191 "../../src/norm.c"
_auto_this -> _basetype_b_name = _auto_this -> _basetype__O1.__C1_b_xname ; 
} 
#line 193 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 
} 
#line 196 "../../src/norm.c"
if ( _auto_this -> _basetype__O1.__C1_b_xname ) { 
#line 196 "../../src/norm.c"
if ( _auto_n -> _expr__O3.__C3_string ) errorFPC__E ( ( char * 
#line 196 "../../src/norm.c"
) "twoNs inD:%n%n", _auto_this -> _basetype__O1.__C1_b_xname , _auto_n ) ; 
else 
#line 199 "../../src/norm.c"
{ 
#line 199 "../../src/norm.c"
_auto_n -> _expr__O3.__C3_string = _auto_this -> _basetype__O1.__C1_b_xname -> _expr__O3.__C3_string ; 

#line 201 "../../src/norm.c"
_name_hide ( ( struct name * ) _auto_this -> _basetype__O1.__C1_b_xname ) ; 
} 
#line 203 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 
} 
#line 206 "../../src/norm.c"
if ( ( ( ( ( ccl == 0 ) && _auto_n ) && ( 
#line 206 "../../src/norm.c"
_auto_n -> _name_n_oper == 123 ) ) && ( _auto_n -> _name__O6.__C6_n_qualifier == 0 ) ) && _auto_n -> _expr__O3.__C3_string ) 
#line 206 "../../src/norm.c"

#line 210 "../../src/norm.c"
{ 
#line 210 "../../src/norm.c"
Pname _auto_nx ; 

#line 211 "../../src/norm.c"
_auto_nx = _table_look ( ( struct table * ) ktbl , _auto_n -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 211 "../../src/norm.c"
; 

#line 212 "../../src/norm.c"
if ( _auto_nx ) _name_hide ( ( struct name * ) _auto_nx ) ; 
} 
#line 215 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 215 "../../src/norm.c"
case 0 : _auto_this -> _node_base = 21 ; 

#line 218 "../../src/norm.c"
break ; 

#line 219 "../../src/norm.c"
case 121 : case 119 : if ( _auto_this -> _basetype_b_name -> _node_base == 123 ) errorFI_PC__E ( ( int ) 
#line 219 "../../src/norm.c"
'i' , ( char * ) "TN%n inCO %d", _auto_this -> _basetype_b_name , _auto_this ) ; 
} 
#line 225 "../../src/norm.c"
if ( _auto_this -> _basetype_b_long || _auto_this -> _basetype_b_short ) { 
#line 225 "../../src/norm.c"
TOK _auto_sl ; 

#line 226 "../../src/norm.c"
_auto_sl = ( _auto_this -> _basetype_b_short ? 29 : 22 ) ; 

#line 227 "../../src/norm.c"
if ( _auto_this -> _basetype_b_long && _auto_this -> _basetype_b_short ) errorFPC__E ( ( char * ) "badBT:long short%k%n", _auto_this -> _node_base , 
#line 227 "../../src/norm.c"
_auto_n ) ; 

#line 228 "../../src/norm.c"
if ( _auto_this -> _node_base != 21 ) errorFPC__E ( ( char * ) "badBT:%k%k%n", _auto_sl , _auto_this -> _node_base , 
#line 228 "../../src/norm.c"
_auto_n ) ; 
else 
#line 231 "../../src/norm.c"
_auto_this -> _node_base = _auto_sl ; 

#line 232 "../../src/norm.c"
_auto_this -> _basetype_b_short = ( _auto_this -> _basetype_b_long = 0 ) ; 
} 
#line 235 "../../src/norm.c"
if ( _auto_this -> _basetype_b_typedef && _auto_this -> _basetype_b_sto ) errorFPC__E ( ( char * ) "badBT:typedef%k%n", _auto_this -> 
#line 235 "../../src/norm.c"
_basetype_b_sto , _auto_n ) ; 

#line 236 "../../src/norm.c"
_auto_this -> _basetype_b_typedef = ( _auto_this -> _basetype_b_sto = 0 ) ; 

#line 238 "../../src/norm.c"
if ( Pfctvec_type == 0 ) { 
#line 238 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 238 "../../src/norm.c"
return _auto__result ; 
} } 
#line 240 "../../src/norm.c"
if ( _auto_this -> _basetype_b_const ) { 
#line 240 "../../src/norm.c"
if ( _auto_this -> _basetype_b_unsigned ) { 
#line 241 "../../src/norm.c"
switch ( 
#line 241 "../../src/norm.c"
_auto_this -> _node_base ) 
#line 242 "../../src/norm.c"
{ 
#line 242 "../../src/norm.c"
default : errorFPC__E ( ( char * ) "badBT: unsigned const %k%n", _auto_this -> _node_base , _auto_n ) 
#line 242 "../../src/norm.c"
; 

#line 245 "../../src/norm.c"
_auto_this -> _basetype_b_unsigned = 0 ; 

#line 246 "../../src/norm.c"
case 22 : case 29 : case 21 : case 5 : { 
#line 250 "../../src/norm.c"
{ _auto__result = ( struct basetype * 
#line 250 "../../src/norm.c"
) _auto_this ; 

#line 250 "../../src/norm.c"
return _auto__result ; 
} } } } 
#line 253 "../../src/norm.c"
{ 
#line 253 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 253 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 255 "../../src/norm.c"
if ( _auto_this -> _basetype_b_unsigned ) { 
#line 255 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 255 "../../src/norm.c"

#line 256 "../../src/norm.c"

#line 257 "../../src/norm.c"
case 22 : _delete ( ( int * ) _auto_this ) ; 

#line 259 "../../src/norm.c"
{ 
#line 259 "../../src/norm.c"
{ _auto__result = ulong_type ; 

#line 259 "../../src/norm.c"
return _auto__result ; 
} } 
#line 260 "../../src/norm.c"
case 29 : _delete ( ( int * ) _auto_this ) ; 

#line 262 "../../src/norm.c"
{ 
#line 262 "../../src/norm.c"
{ _auto__result = ushort_type ; 

#line 262 "../../src/norm.c"
return _auto__result ; 
} } 
#line 263 "../../src/norm.c"
case 21 : _delete ( ( int * ) _auto_this ) ; 

#line 265 "../../src/norm.c"
{ 
#line 265 "../../src/norm.c"
{ _auto__result = uint_type ; 

#line 265 "../../src/norm.c"
return _auto__result ; 
} } 
#line 266 "../../src/norm.c"
case 5 : _delete ( ( int * ) _auto_this ) ; 

#line 268 "../../src/norm.c"
{ 
#line 268 "../../src/norm.c"
{ _auto__result = uchar_type ; 

#line 268 "../../src/norm.c"
return _auto__result ; 
} } 
#line 269 "../../src/norm.c"
default : errorFPC__E ( ( char * ) "badBT: unsigned%k%n", _auto_this -> _node_base , _auto_n ) ; 
#line 269 "../../src/norm.c"

#line 271 "../../src/norm.c"
_auto_this -> _basetype_b_unsigned = 0 ; 

#line 272 "../../src/norm.c"
{ 
#line 272 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 272 "../../src/norm.c"
return _auto__result ; 
} } } } else 
#line 275 "../../src/norm.c"
{ 
#line 275 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 276 "../../src/norm.c"
case 22 : _delete ( 
#line 276 "../../src/norm.c"
( int * ) _auto_this ) ; 

#line 279 "../../src/norm.c"
{ 
#line 279 "../../src/norm.c"
{ _auto__result = long_type ; 

#line 279 "../../src/norm.c"
return _auto__result ; 
} } 
#line 280 "../../src/norm.c"
case 29 : _delete ( ( int * ) _auto_this ) ; 

#line 282 "../../src/norm.c"
{ 
#line 282 "../../src/norm.c"
{ _auto__result = short_type ; 

#line 282 "../../src/norm.c"
return _auto__result ; 
} } 
#line 283 "../../src/norm.c"
case 21 : if ( _auto_this != ( struct basetype * ) int_type ) _delete ( ( 
#line 283 "../../src/norm.c"
int * ) _auto_this ) ; 

#line 285 "../../src/norm.c"
{ 
#line 285 "../../src/norm.c"
{ _auto__result = int_type ; 

#line 285 "../../src/norm.c"
return _auto__result ; 
} } 
#line 286 "../../src/norm.c"
case 5 : _delete ( ( int * ) _auto_this ) ; 

#line 288 "../../src/norm.c"
{ 
#line 288 "../../src/norm.c"
{ _auto__result = char_type ; 

#line 288 "../../src/norm.c"
return _auto__result ; 
} } 
#line 289 "../../src/norm.c"
case 38 : _delete ( ( int * ) _auto_this ) ; 

#line 291 "../../src/norm.c"
{ 
#line 291 "../../src/norm.c"
{ _auto__result = void_type ; 

#line 291 "../../src/norm.c"
return _auto__result ; 
} } 
#line 292 "../../src/norm.c"
case 97 : if ( _auto_this -> _basetype_b_name -> _name__O6.__C6_n_qualifier ) { 
#line 295 "../../src/norm.c"
_delete ( ( int * 
#line 295 "../../src/norm.c"
) _auto_this ) ; 

#line 297 "../../src/norm.c"
{ 
#line 297 "../../src/norm.c"
{ _auto__result = ( ( ( struct basetype * ) ( _auto_this -> _basetype_b_name -> _name__O6.__C6_n_qualifier ) ) 
#line 297 "../../src/norm.c"
) ; 

#line 297 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 299 "../../src/norm.c"
{ 
#line 299 "../../src/norm.c"
_auto_this -> _node_permanent = 1 ; 

#line 301 "../../src/norm.c"
_auto_this -> _basetype_b_name -> _name__O6.__C6_n_qualifier = ( ( ( struct name * ) ( _auto_this ) ) ) ; 
#line 301 "../../src/norm.c"

#line 302 "../../src/norm.c"
{ 
#line 302 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 302 "../../src/norm.c"
return _auto__result ; 
} } } 
#line 304 "../../src/norm.c"
default : { 
#line 305 "../../src/norm.c"
{ _auto__result = ( struct basetype * ) _auto_this ; 

#line 305 "../../src/norm.c"
return _auto__result ; 
} } } } } ; 

#line 310 "../../src/norm.c"
Pname _basetype_aggr ( _auto_this ) register struct basetype * _auto_this ; 

#line 325 "../../src/norm.c"
{ 
#line 325 "../../src/norm.c"
Pname _auto__result ; 
Pname _auto_n ; 

#line 328 "../../src/norm.c"
if ( _auto_this -> _basetype__O1.__C1_b_xname ) { 
#line 328 "../../src/norm.c"
if ( _auto_this -> _node_base ) { 
#line 329 "../../src/norm.c"
Pname _auto_n ; 

#line 330 "../../src/norm.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_this -> _basetype__O1.__C1_b_xname -> 
#line 330 "../../src/norm.c"
_expr__O3.__C3_string ) ; 

#line 331 "../../src/norm.c"
_name_hide ( ( struct name * ) _auto_this -> _basetype__O1.__C1_b_xname ) ; 

#line 332 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 

#line 333 "../../src/norm.c"
{ 
#line 333 "../../src/norm.c"
{ _auto__result = _name_normalize ( ( struct name * ) _auto_n , ( struct basetype * ) _auto_this , 
#line 333 "../../src/norm.c"
( struct block * ) 0 , ( int ) 0 ) ; 

#line 333 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 335 "../../src/norm.c"
{ 
#line 335 "../../src/norm.c"
_auto_this -> _node_base = 97 ; 

#line 337 "../../src/norm.c"
_auto_this -> _basetype_b_name = _auto_this -> _basetype__O1.__C1_b_xname ; 

#line 338 "../../src/norm.c"
_auto_this -> _basetype__O1.__C1_b_xname = 0 ; 
} } 
#line 343 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 343 "../../src/norm.c"
case 119 : { 
#line 345 "../../src/norm.c"
Pclass _auto_cl ; 
char * _auto_s ; 

#line 345 "../../src/norm.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_this -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 
#line 345 "../../src/norm.c"

#line 346 "../../src/norm.c"
_auto_s = _auto_cl -> _classdef_string ; 

#line 348 "../../src/norm.c"
if ( _auto_this -> _basetype_b_name -> _node_base == 123 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 348 "../../src/norm.c"
) "TN%n inCO", _auto_this -> _basetype_b_name ) ; 

#line 349 "../../src/norm.c"
if ( _auto_this -> _basetype_b_const ) errorFPC__E ( ( char * ) "const%k%n", _auto_cl -> _classdef_csu , _auto_this -> _basetype_b_name ) 
#line 349 "../../src/norm.c"
; 

#line 351 "../../src/norm.c"
if ( _auto_cl -> _classdef_c_body == 2 ) { 
#line 351 "../../src/norm.c"
if ( ( ( _auto_s [ 0 ] ) 
#line 351 "../../src/norm.c"
== '_' ) && ( ( _auto_s [ 1 ] ) == 'C' ) ) 
#line 352 "../../src/norm.c"
{ 
#line 352 "../../src/norm.c"
char * 
#line 352 "../../src/norm.c"
_auto_ss ; 
Pname _auto_obj ; 

#line 353 "../../src/norm.c"
_auto_ss = ( ( ( char * ) ( _new ( ( long ) 5 ) ) 
#line 353 "../../src/norm.c"
) ) ; 

#line 354 "../../src/norm.c"
_auto_obj = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_ss ) ; 
#line 354 "../../src/norm.c"

#line 355 "../../src/norm.c"
if ( _auto_cl -> _classdef_csu == 36 ) { 
#line 355 "../../src/norm.c"
strcpy ( _auto_ss , _auto_s ) ; 

#line 357 "../../src/norm.c"
( _auto_ss [ 1 ] ) = 'O' ; 

#line 358 "../../src/norm.c"
_auto_cl -> _classdef_csu = 167 ; 

#line 359 "../../src/norm.c"
{ 
#line 359 "../../src/norm.c"
{ _auto__result = _name_normalize ( ( struct name * ) _auto_obj , ( struct basetype * ) _auto_this , 
#line 359 "../../src/norm.c"
( struct block * ) 0 , ( int ) 0 ) ; 

#line 359 "../../src/norm.c"
return _auto__result ; 
} } } 
#line 361 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "un-usable%k ignored", _auto_cl -> 
#line 361 "../../src/norm.c"
_classdef_csu ) ; 
} 
#line 363 "../../src/norm.c"
_auto_cl -> _classdef_c_body = 1 ; 

#line 364 "../../src/norm.c"
{ 
#line 364 "../../src/norm.c"
{ _auto__result = _auto_this -> _basetype_b_name ; 

#line 364 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 366 "../../src/norm.c"
{ 
#line 366 "../../src/norm.c"
if ( _auto_this -> _basetype_b_sto == 18 ) goto frr ; 

#line 368 "../../src/norm.c"
{ 
#line 368 "../../src/norm.c"
{ _auto__result = 0 ; 

#line 368 "../../src/norm.c"
return _auto__result ; 
} } } } 
#line 372 "../../src/norm.c"
case 121 : { 
#line 373 "../../src/norm.c"
Penum _auto_en ; 

#line 373 "../../src/norm.c"
_auto_en = ( ( ( struct enumdef * ) ( _auto_this -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 
#line 373 "../../src/norm.c"

#line 375 "../../src/norm.c"
if ( _auto_this -> _basetype_b_name -> _node_base == 123 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 375 "../../src/norm.c"
) "TN%n in enumO", _auto_this -> _basetype_b_name ) ; 

#line 376 "../../src/norm.c"
if ( _auto_this -> _basetype_b_const ) errorFPC__E ( ( char * ) "const enum%n", _auto_this -> _basetype_b_name ) ; 

#line 377 "../../src/norm.c"
if ( _auto_en -> _enumdef_e_body == 2 ) { 
#line 377 "../../src/norm.c"
_auto_en -> _enumdef_e_body = 1 ; 

#line 379 "../../src/norm.c"
{ 
#line 379 "../../src/norm.c"
{ _auto__result = _auto_this -> _basetype_b_name ; 

#line 379 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 381 "../../src/norm.c"
{ 
#line 381 "../../src/norm.c"
if ( _auto_this -> _basetype_b_sto == 18 ) goto frr ; 

#line 383 "../../src/norm.c"
{ 
#line 383 "../../src/norm.c"
{ _auto__result = 0 ; 

#line 383 "../../src/norm.c"
return _auto__result ; 
} } } } 
#line 387 "../../src/norm.c"
default : if ( _auto_this -> _basetype_b_typedef ) errorFI_PC__E ( ( int ) 
#line 387 "../../src/norm.c"
'w' , ( char * ) "illegal typedef ignored") ; 

#line 390 "../../src/norm.c"
if ( _auto_this -> _basetype_b_sto == 18 ) { 
#line 390 "../../src/norm.c"
frr : { 
#line 392 "../../src/norm.c"
Pname _auto_fr ; 

#line 392 "../../src/norm.c"
_auto_fr = _table_look ( ( struct table * ) ktbl , _auto_this -> _basetype_b_name -> _expr__O3.__C3_string , ( int ) 0 
#line 392 "../../src/norm.c"
) ; 

#line 393 "../../src/norm.c"
if ( _auto_fr == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 393 "../../src/norm.c"
"cannot find friend%n", _auto_this -> _basetype_b_name ) ; 

#line 394 "../../src/norm.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_this -> _basetype_b_name -> 
#line 394 "../../src/norm.c"
_expr__O3.__C3_string ) ; 

#line 395 "../../src/norm.c"
_auto_n -> _name_n_sto = 18 ; 

#line 396 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = _auto_fr -> _expr__O2.__C2_tp ; 

#line 397 "../../src/norm.c"
{ 
#line 397 "../../src/norm.c"
{ _auto__result = _auto_n ; 

#line 397 "../../src/norm.c"
return _auto__result ; 
} } } } else 
#line 399 "../../src/norm.c"
{ 
#line 399 "../../src/norm.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct 
#line 399 "../../src/norm.c"
name * ) 0 , ( char * ) make_name ( ( int ) 'D' ) ) 
#line 399 "../../src/norm.c"
; 

#line 401 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 402 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "NX inDL") ; 

#line 403 "../../src/norm.c"
{ 
#line 403 "../../src/norm.c"
{ _auto__result = _auto_n ; 

#line 403 "../../src/norm.c"
return _auto__result ; 
} } } } } ; 

#line 408 "../../src/norm.c"
int _name_hide ( _auto_this ) register struct name * _auto_this ; 

#line 412 "../../src/norm.c"
{ 
#line 412 "../../src/norm.c"
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 414 "../../src/norm.c"
if ( _auto_this -> _node_base != 123 ) { 
#line 414 "../../src/norm.c"
return ; 
} 
#line 415 "../../src/norm.c"
if ( _auto_this -> _node_n_key == 0 ) { 
#line 415 "../../src/norm.c"
if ( _auto_this -> _name_lex_level == bl_level ) { 
#line 415 "../../src/norm.c"

#line 417 "../../src/norm.c"

#line 418 "../../src/norm.c"
if ( _auto_this -> _node_base != 123 ) errorFPC__E ( ( char * ) "%n redefined", _auto_this ) ; 
else 
#line 420 "../../src/norm.c"
{ 
#line 420 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%n redefined", _auto_this ) ; 
#line 420 "../../src/norm.c"
} } 
#line 425 "../../src/norm.c"
modified_tn = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( 
#line 425 "../../src/norm.c"
( _auto__Xthis__ctor_name_list = ( struct name_list * ) _new ( ( long ) 8) ) , ( 
#line 425 "../../src/norm.c"
( _auto__Xthis__ctor_name_list -> _name_list_f = ( ( struct name * ) _auto_this ) ) , ( ( _auto__Xthis__ctor_name_list -> 
#line 425 "../../src/norm.c"
_name_list_l = ( ( struct name_list * ) modified_tn ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 
#line 425 "../../src/norm.c"

#line 426 "../../src/norm.c"
_auto_this -> _node_n_key = 159 ; 
} } ; 

#line 430 "../../src/norm.c"
extern int set_scope ( _auto_tn ) struct name * _auto_tn ; 

#line 434 "../../src/norm.c"
{ 
#line 434 "../../src/norm.c"
Pbase _auto_b ; 
Pclass _auto_cl ; 
Plist _auto_l ; 

#line 435 "../../src/norm.c"
if ( _auto_tn -> _node_base != 123 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 435 "../../src/norm.c"
"set_scope: not aTN %d %d", _auto_tn , _auto_tn -> _node_base ) ; 

#line 436 "../../src/norm.c"
_auto_b = ( ( ( struct basetype * ) ( _auto_tn -> _expr__O2.__C2_tp ) ) ) ; 

#line 437 "../../src/norm.c"
if ( _auto_b -> _basetype_b_name -> _expr__O2.__C2_tp -> _node_base != 6 ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 437 "../../src/norm.c"
* ) "T of%n not aC (%k)", _auto_tn , _auto_b -> _basetype_b_name -> _expr__O2.__C2_tp -> _node_base ) ; 

#line 438 "../../src/norm.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_b -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 
#line 438 "../../src/norm.c"

#line 439 "../../src/norm.c"
for ( _auto_l = _auto_cl -> _classdef_tn_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 439 "../../src/norm.c"
Pname _auto_n ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 440 "../../src/norm.c"
_auto_n = _auto_l -> _name_list_f ; 

#line 441 "../../src/norm.c"
_auto_n -> _node_n_key = ( _auto_n -> _name_lex_level ? 0: 159 ) ; 

#line 443 "../../src/norm.c"
modified_tn = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( ( _auto__Xthis__ctor_name_list = 
#line 443 "../../src/norm.c"
( struct name_list * ) _new ( ( long ) 8) ) , ( ( _auto__Xthis__ctor_name_list -> 
#line 443 "../../src/norm.c"
_name_list_f = ( ( struct name * ) _auto_n ) ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = ( 
#line 443 "../../src/norm.c"
( struct name_list * ) modified_tn ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 
} } ; 

#line 447 "../../src/norm.c"
extern int restore ( ) 
#line 448 "../../src/norm.c"
{ 
#line 448 "../../src/norm.c"
Plist _auto_l ; 

#line 449 "../../src/norm.c"
for ( _auto_l = modified_tn ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) { 
#line 449 "../../src/norm.c"
Pname _auto_n ; 

#line 450 "../../src/norm.c"
_auto_n = _auto_l -> _name_list_f ; 

#line 451 "../../src/norm.c"
_auto_n -> _node_n_key = ( ( _auto_n -> _name_lex_level <= bl_level ) ? 0: 159 ) ; 
} } ; 

#line 456 "../../src/norm.c"
extern Pbase start_cl ( _auto_t , _auto_c , _auto_b ) int _auto_t ; 
struct name * _auto_c ; 
struct name * _auto_b ; 

#line 457 "../../src/norm.c"
{ 
#line 457 "../../src/norm.c"
Pbase _auto__result ; 
Pname _auto_n ; 
Pbase _auto_bt ; 
Pclass _auto_occl ; 

#line 458 "../../src/norm.c"
if ( _auto_c == 0 ) _auto_c = ( struct name * ) _name__ctor ( ( struct name * 
#line 458 "../../src/norm.c"
) 0 , ( char * ) make_name ( ( int ) 'C' ) ) ; 
#line 458 "../../src/norm.c"

#line 460 "../../src/norm.c"
_auto_n = _name_tname ( ( struct name * ) _auto_c , _auto_t ) ; 

#line 461 "../../src/norm.c"
_auto_n -> _name_where = curloc ; 

#line 462 "../../src/norm.c"
_auto_bt = ( ( ( struct basetype * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 463 "../../src/norm.c"
if ( _auto_bt -> _node_base != 119 ) { 
#line 463 "../../src/norm.c"
errorFPC__E ( ( char * ) "twoDs of%n:%t andC", _auto_n , _auto_bt ) 
#line 463 "../../src/norm.c"
; 

#line 465 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "can't recover from previous errors") ; 
} 
#line 467 "../../src/norm.c"
_auto_occl = ccl ; 

#line 468 "../../src/norm.c"
ccl = ( ( ( struct classdef * ) ( _auto_bt -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 
#line 468 "../../src/norm.c"

#line 469 "../../src/norm.c"
if ( ccl -> _type_defined ) { 
#line 469 "../../src/norm.c"
errorFPC__E ( ( char * ) "C%n defined twice") ; 

#line 471 "../../src/norm.c"
ccl -> _type_defined |= 010 ; 
} 
#line 473 "../../src/norm.c"
ccl -> _type_defined |= 04 ; 

#line 474 "../../src/norm.c"
if ( ccl -> _classdef_in_class = _auto_occl ) _auto_occl -> _classdef_tn_list = modified_tn ; 

#line 475 "../../src/norm.c"
modified_tn = 0 ; 

#line 476 "../../src/norm.c"
ccl -> _classdef_string = _auto_n -> _expr__O3.__C3_string ; 

#line 477 "../../src/norm.c"
ccl -> _classdef_csu = _auto_t ; 

#line 478 "../../src/norm.c"
if ( _auto_b ) ccl -> _classdef_clbase = _name_tname ( ( struct name * ) _auto_b , _auto_t ) ; 

#line 479 "../../src/norm.c"
{ 
#line 479 "../../src/norm.c"
{ _auto__result = _auto_bt ; 

#line 479 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 482 "../../src/norm.c"
extern int end_cl ( ) 
#line 483 "../../src/norm.c"
{ 
#line 483 "../../src/norm.c"
Pclass _auto_occl ; 
Plist _auto_ol ; 

#line 484 "../../src/norm.c"
_auto_occl = ccl -> _classdef_in_class ; 

#line 485 "../../src/norm.c"
_auto_ol = ( _auto_occl ? _auto_occl -> _classdef_tn_list : ( ( ( struct name_list * ) ( 0 ) 
#line 485 "../../src/norm.c"
) ) ) ; 

#line 486 "../../src/norm.c"
ccl -> _classdef_c_body = 2 ; 

#line 487 "../../src/norm.c"
if ( modified_tn ) { 
#line 487 "../../src/norm.c"
Plist _auto_local ; 
Plist _auto_l ; 
Plist _auto_nl ; 

#line 488 "../../src/norm.c"
_auto_local = 0 ; 

#line 489 "../../src/norm.c"
{ _auto_l = modified_tn ; 

#line 489 "../../src/norm.c"
_auto_nl = 0 ; 
for ( ;_auto_l ;( _auto_l = _auto_nl ) ) 
#line 489 "../../src/norm.c"
{ 
#line 489 "../../src/norm.c"
_auto_nl = _auto_l -> _name_list_l ; 

#line 491 "../../src/norm.c"
{ 
#line 491 "../../src/norm.c"
Pname _auto_n ; 

#line 491 "../../src/norm.c"
_auto_n = _auto_l -> _name_list_f ; 

#line 492 "../../src/norm.c"
if ( _table_look ( ( struct table * ) ktbl , _auto_n -> _expr__O3.__C3_string , ( int ) 0 
#line 492 "../../src/norm.c"
) ) 
#line 492 "../../src/norm.c"
{ 
#line 492 "../../src/norm.c"
_auto_l -> _name_list_l = _auto_ol ; 

#line 495 "../../src/norm.c"
_auto_ol = _auto_l ; 
} else 
#line 497 "../../src/norm.c"
{ 
#line 497 "../../src/norm.c"
_auto_l -> _name_list_l = _auto_local ; 

#line 499 "../../src/norm.c"
_auto_local = _auto_l ; 
} } } } 
#line 502 "../../src/norm.c"
if ( ccl -> _classdef_tn_list = ( modified_tn = _auto_local ) ) restore ( ) 
#line 502 "../../src/norm.c"
; 
} 
#line 504 "../../src/norm.c"
modified_tn = _auto_ol ; 

#line 505 "../../src/norm.c"
ccl = _auto_occl ; 
} ; 

#line 508 "../../src/norm.c"
extern Pbase end_enum ( _auto_n , _auto_b ) struct name * _auto_n ; 
struct name * _auto_b ; 

#line 509 "../../src/norm.c"
{ 
#line 509 "../../src/norm.c"
Pbase _auto__result ; 
Pbase _auto_bt ; 
Penum _auto_en ; 

#line 510 "../../src/norm.c"
if ( _auto_n == 0 ) _auto_n = ( struct name * ) _name__ctor ( ( struct name * 
#line 510 "../../src/norm.c"
) 0 , ( char * ) make_name ( ( int ) 'E' ) ) ; 
#line 510 "../../src/norm.c"

#line 511 "../../src/norm.c"
_auto_n = ( struct name * ) _name_tname ( ( struct name * ) _auto_n , 13 ) ; 

#line 512 "../../src/norm.c"
_auto_bt = ( ( ( struct basetype * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 513 "../../src/norm.c"
if ( _auto_bt -> _node_base != 121 ) { 
#line 513 "../../src/norm.c"
errorFPC__E ( ( char * ) "twoDs of%n:%t and enum", _auto_n , _auto_bt ) 
#line 513 "../../src/norm.c"
; 

#line 515 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "can't recover from previous errors") ; 
} 
#line 517 "../../src/norm.c"
_auto_en = ( ( ( struct enumdef * ) ( _auto_bt -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) 
#line 517 "../../src/norm.c"
; 

#line 518 "../../src/norm.c"
_auto_en -> _enumdef_e_body = 2 ; 

#line 519 "../../src/norm.c"
_auto_en -> _enumdef_mem = name_unlist ( ( struct nlist * ) ( ( ( struct nlist * ) ( 
#line 519 "../../src/norm.c"
_auto_b ) ) ) ) ; 

#line 520 "../../src/norm.c"
if ( _auto_en -> _type_defined ) { 
#line 520 "../../src/norm.c"
errorFPC__E ( ( char * ) "enum%n defined twice", _auto_n ) ; 

#line 522 "../../src/norm.c"
_auto_en -> _type_defined |= 010 ; 
} 
#line 524 "../../src/norm.c"
_auto_en -> _type_defined |= 04 ; 

#line 525 "../../src/norm.c"
{ 
#line 525 "../../src/norm.c"
{ _auto__result = _auto_bt ; 

#line 525 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 528 "../../src/norm.c"
Pname _name_tdef ( _auto_this ) register struct name * _auto_this ; 

#line 532 "../../src/norm.c"
{ 
#line 532 "../../src/norm.c"
Pname _auto__result ; 
Pname _auto_n ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 534 "../../src/norm.c"
_auto_n = _table_insert ( ( struct table * ) ktbl , ( struct name * ) _auto_this , ( int 
#line 534 "../../src/norm.c"
) 0 ) ; 

#line 535 "../../src/norm.c"
if ( _auto_this -> _expr__O2.__C2_tp == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 535 "../../src/norm.c"
) "typedef%n tp==0", _auto_this ) ; 

#line 536 "../../src/norm.c"
_auto_n -> _node_base = ( _auto_this -> _node_base = 123 ) ; 

#line 537 "../../src/norm.c"
_auto_n -> _node_permanent = 1 ; 

#line 538 "../../src/norm.c"
_auto_this -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 539 "../../src/norm.c"
modified_tn = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( ( _auto__Xthis__ctor_name_list = 
#line 539 "../../src/norm.c"
( struct name_list * ) _new ( ( long ) 8) ) , ( ( _auto__Xthis__ctor_name_list -> 
#line 539 "../../src/norm.c"
_name_list_f = ( ( struct name * ) _auto_n ) ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = ( 
#line 539 "../../src/norm.c"
( struct name_list * ) modified_tn ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 

#line 540 "../../src/norm.c"
{ 
#line 540 "../../src/norm.c"
{ _auto__result = _auto_n ; 

#line 540 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 543 "../../src/norm.c"
Pname _name_tname ( _auto_this , _auto_csu ) register struct name * _auto_this ; 
int _auto_csu ; 

#line 551 "../../src/norm.c"
{ 
#line 551 "../../src/norm.c"
Pname _auto__result ; 

#line 553 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 553 "../../src/norm.c"
case 123 : { 
#line 555 "../../src/norm.c"
{ _auto__result = ( struct name * ) 
#line 555 "../../src/norm.c"
_auto_this ; 

#line 555 "../../src/norm.c"
return _auto__result ; 
} } 
#line 556 "../../src/norm.c"
case 85 : { 
#line 557 "../../src/norm.c"
Pname _auto_tn ; 
Pname _auto_on ; 
struct name_list * _auto__Xthis__ctor_name_list ; 
struct enumdef * _auto__Xthis__ctor_enumdef ; 

#line 557 "../../src/norm.c"
_auto_tn = _table_insert ( ( struct table * ) ktbl , ( struct name * ) _auto_this , ( int 
#line 557 "../../src/norm.c"
) 0 ) ; 

#line 559 "../../src/norm.c"
_auto_on = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 559 "../../src/norm.c"
* ) 0 ) ; 

#line 560 "../../src/norm.c"
_auto_tn -> _node_base = 123 ; 

#line 561 "../../src/norm.c"
_auto_tn -> _name_lex_level = _auto_this -> _name_lex_level ; 

#line 562 "../../src/norm.c"
modified_tn = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( ( _auto__Xthis__ctor_name_list = 
#line 562 "../../src/norm.c"
( struct name_list * ) _new ( ( long ) 8) ) , ( ( _auto__Xthis__ctor_name_list -> 
#line 562 "../../src/norm.c"
_name_list_f = ( ( struct name * ) _auto_tn ) ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = ( 
#line 562 "../../src/norm.c"
( struct name_list * ) modified_tn ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 

#line 563 "../../src/norm.c"
_auto_tn -> _name_n_list = ( _auto_this -> _name_n_list = 0 ) ; 

#line 564 "../../src/norm.c"
_auto_this -> _expr__O3.__C3_string = _auto_tn -> _expr__O3.__C3_string ; 

#line 565 "../../src/norm.c"
( * _auto_on ) = ( * _auto_this ) ; 

#line 566 "../../src/norm.c"
switch ( _auto_csu ) { 
#line 566 "../../src/norm.c"
case 13 : _auto_tn -> _expr__O2.__C2_tp = ( struct type * ) _basetype__ctor ( ( 
#line 566 "../../src/norm.c"
struct basetype * ) 0 , 121 , ( struct name * ) _auto_on ) ; 

#line 569 "../../src/norm.c"
_auto_on -> _expr__O2.__C2_tp = ( struct type * ) ( ( _auto__Xthis__ctor_enumdef = 0 ) , ( ( 
#line 569 "../../src/norm.c"
_auto__Xthis__ctor_enumdef = ( struct enumdef * ) _new ( ( long ) 20) ) , ( ( 
#line 569 "../../src/norm.c"
_auto__Xthis__ctor_enumdef -> _node_base = 13 ) , ( ( _auto__Xthis__ctor_enumdef -> _enumdef_mem = ( ( struct name * ) 0 
#line 569 "../../src/norm.c"
) ) , _auto__Xthis__ctor_enumdef ) ) ) ) ; 

#line 570 "../../src/norm.c"
break ; 

#line 571 "../../src/norm.c"
default : _auto_on -> _expr__O2.__C2_tp = ( struct type * ) _classdef__ctor ( ( struct classdef * ) 0 
#line 571 "../../src/norm.c"
, _auto_csu , ( struct name * ) 0 ) ; 

#line 573 "../../src/norm.c"
( ( ( struct classdef * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) -> _classdef_string = _auto_tn -> 
#line 573 "../../src/norm.c"
_expr__O3.__C3_string ; 

#line 574 "../../src/norm.c"
_auto_tn -> _expr__O2.__C2_tp = ( struct type * ) _basetype__ctor ( ( struct basetype * ) 0 , 119 , 
#line 574 "../../src/norm.c"
( struct name * ) _auto_on ) ; 

#line 575 "../../src/norm.c"
( ( ( struct basetype * ) ( _auto_tn -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_table = ( 
#line 575 "../../src/norm.c"
( ( struct classdef * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) -> _classdef_memtbl ; 
} 
#line 577 "../../src/norm.c"
_auto_tn -> _node_permanent = 1 ; 

#line 578 "../../src/norm.c"
_auto_tn -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 579 "../../src/norm.c"
_auto_on -> _node_permanent = 1 ; 

#line 580 "../../src/norm.c"
_auto_on -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 582 "../../src/norm.c"
{ 
#line 582 "../../src/norm.c"
{ _auto__result = _auto_tn ; 

#line 582 "../../src/norm.c"
return _auto__result ; 
} } } 
#line 584 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 584 "../../src/norm.c"
"tname(%s %d %k)", _auto_this -> _expr__O3.__C3_string , _auto_this , _auto_this -> _node_base ) ; 
} } ; 

#line 590 "../../src/norm.c"
Pname _name_normalize ( _auto_this , _auto_b , _auto_bl , _auto_cast ) register struct name * _auto_this ; 
struct basetype * _auto_b ; 
struct block * _auto_bl ; 
int _auto_cast ; 

#line 605 "../../src/norm.c"
{ 
#line 605 "../../src/norm.c"
Pname _auto__result ; 
Pname _auto_n ; 
Pname _auto_nn ; 
TOK _auto_stc ; 
bit _auto_tpdf ; 
bit _auto_inli ; 
bit _auto_virt ; 
Pfct _auto_f ; 
Pname _auto_nx ; 

#line 608 "../../src/norm.c"
_auto_stc = _auto_b -> _basetype_b_sto ; 

#line 609 "../../src/norm.c"
_auto_tpdf = _auto_b -> _basetype_b_typedef ; 

#line 610 "../../src/norm.c"
_auto_inli = _auto_b -> _basetype_b_inline ; 

#line 611 "../../src/norm.c"
_auto_virt = _auto_b -> _basetype_b_virtual ; 

#line 615 "../../src/norm.c"
if ( _auto_b == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 615 "../../src/norm.c"
"%d->N.normalize(0)", _auto_this ) ; 

#line 616 "../../src/norm.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 616 "../../src/norm.c"
"0->N.normalize(%k)", _auto_this -> _node_base ) ; 

#line 618 "../../src/norm.c"
if ( _auto_inli && ( _auto_stc == 14 ) ) { 
#line 618 "../../src/norm.c"
errorFPC__E ( ( char * ) "both extern and inline") 
#line 618 "../../src/norm.c"
; 

#line 620 "../../src/norm.c"
_auto_inli = 0 ; 
} 
#line 624 "../../src/norm.c"
if ( ( _auto_stc == 18 ) && ( _auto_this -> _expr__O2.__C2_tp == 0 ) ) { 
#line 624 "../../src/norm.c"

#line 624 "../../src/norm.c"

#line 632 "../../src/norm.c"
if ( _auto_b -> _node_base ) errorFI_PC__E ( ( int ) 0 , ( char * ) 
#line 632 "../../src/norm.c"
"T specified for friend") ; 

#line 633 "../../src/norm.c"
if ( _auto_this -> _name_n_list ) { 
#line 633 "../../src/norm.c"
errorFPC__E ( ( char * ) "L of friends") ; 

#line 635 "../../src/norm.c"
_auto_this -> _name_n_list = 0 ; 
} 
#line 637 "../../src/norm.c"
{ 
#line 637 "../../src/norm.c"
Pname _auto_nx ; 

#line 637 "../../src/norm.c"
_auto_nx = _name_tname ( _auto_this , 6 ) ; 

#line 638 "../../src/norm.c"
modified_tn = modified_tn -> _name_list_l ; 

#line 639 "../../src/norm.c"
_auto_this -> _name_n_sto = 18 ; 

#line 640 "../../src/norm.c"
_auto_this -> _expr__O2.__C2_tp = _auto_nx -> _expr__O2.__C2_tp ; 

#line 641 "../../src/norm.c"
{ 
#line 641 "../../src/norm.c"
{ _auto__result = ( struct name * ) _auto_this ; 

#line 641 "../../src/norm.c"
return _auto__result ; 
} } } } 
#line 644 "../../src/norm.c"
if ( ( _auto_this -> _expr__O2.__C2_tp && ( _auto_this -> _name_n_oper == 123 ) ) 
#line 644 "../../src/norm.c"
&& ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) ) 
#line 646 "../../src/norm.c"
{ 
#line 646 "../../src/norm.c"
Pfct _auto_f ; 
Pfct _auto_f2 ; 

#line 647 "../../src/norm.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 648 "../../src/norm.c"
_auto_f2 = ( ( ( struct fct * ) ( _auto_f -> _fct_returns ) ) ) ; 

#line 649 "../../src/norm.c"
if ( _auto_f2 && ( _auto_f2 -> _node_base == 108 ) ) { 
#line 649 "../../src/norm.c"
Pexpr _auto_e ; 

#line 650 "../../src/norm.c"
_auto_e = ( struct expr * ) _auto_f2 -> _fct_argtype ; 

#line 652 "../../src/norm.c"
if ( _auto_e -> _node_base == 140 ) { 
#line 652 "../../src/norm.c"
if ( _auto_e -> _expr__O4.__C4_e2 || ( _auto_e -> _expr__O3.__C3_e1 -> _node_base != 
#line 652 "../../src/norm.c"
111 ) ) 
#line 654 "../../src/norm.c"
goto zse1 ; 

#line 655 "../../src/norm.c"
{ 
#line 655 "../../src/norm.c"
Pname _auto_rn ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 655 "../../src/norm.c"
_auto_rn = ( ( ( struct name * ) ( _auto_e -> _expr__O3.__C3_e1 -> _expr__O3.__C3_e1 ) ) ) ; 
#line 655 "../../src/norm.c"

#line 656 "../../src/norm.c"
if ( _auto_rn -> _node_base != 85 ) goto zse1 ; 

#line 657 "../../src/norm.c"
_auto_f -> _fct_returns = ( struct type * ) ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( 
#line 657 "../../src/norm.c"
_auto__Xthis__ctor_ptr = ( struct ptr * ) _new ( ( long ) 16) ) , ( ( 
#line 657 "../../src/norm.c"
Nt ++ ) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( 
#line 657 "../../src/norm.c"
( struct type * ) 0 ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( 
#line 657 "../../src/norm.c"
int ) 0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ; 

#line 658 "../../src/norm.c"
_auto_b = ( struct basetype * ) _basetype__ctor ( ( struct basetype * ) 0 , 97 , ( 
#line 658 "../../src/norm.c"
struct name * ) _table_look ( ( struct table * ) ktbl , _auto_this -> _expr__O3.__C3_string , ( int ) 
#line 658 "../../src/norm.c"
0 ) ) ; 

#line 659 "../../src/norm.c"
_auto_this -> _name_n_oper = 0 ; 

#line 660 "../../src/norm.c"
_auto_this -> _expr__O3.__C3_string = _auto_rn -> _expr__O3.__C3_string ; 

#line 661 "../../src/norm.c"
_auto_this -> _node_base = 85 ; 
} } } } 
#line 666 "../../src/norm.c"
zse1 : if ( _auto_cast ) _auto_this -> _expr__O3.__C3_string = ""; 

#line 668 "../../src/norm.c"
_auto_b = ( struct basetype * ) _basetype_check ( ( struct basetype * ) _auto_b , ( struct name * 
#line 668 "../../src/norm.c"
) _auto_this ) ; 

#line 670 "../../src/norm.c"
switch ( _auto_b -> _node_base ) { 
#line 670 "../../src/norm.c"
case 119 : _auto_nn = _auto_b -> _basetype_b_name ; 

#line 675 "../../src/norm.c"
if ( ( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> 
#line 675 "../../src/norm.c"
_classdef_c_body == 2 ) 
#line 675 "../../src/norm.c"
{ 
#line 675 "../../src/norm.c"
if ( _auto_this -> _expr__O2.__C2_tp && ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) ) { 
#line 675 "../../src/norm.c"

#line 676 "../../src/norm.c"

#line 677 "../../src/norm.c"
error ( ( int ) 's' , ( struct loc * ) ( & _auto_this -> _name_where ) , 
#line 677 "../../src/norm.c"
( char * ) "%k%n defined as returnT for%n (did you forget a ';' after '}' ?)", ( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) 
#line 677 "../../src/norm.c"
) ) -> _classdef_csu , _auto_nn , _auto_this ) ; 

#line 678 "../../src/norm.c"
_auto_nn = ( struct name * ) _auto_this ; 

#line 679 "../../src/norm.c"
break ; 
} 
#line 681 "../../src/norm.c"
_auto_nn -> _name_n_list = ( struct name * ) _auto_this ; 

#line 682 "../../src/norm.c"
( ( ( struct classdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> _classdef_c_body = 1 ; 
#line 682 "../../src/norm.c"
} else 
#line 685 "../../src/norm.c"
_auto_nn = ( struct name * ) _auto_this ; 

#line 686 "../../src/norm.c"
break ; 

#line 687 "../../src/norm.c"
case 121 : _auto_nn = _auto_b -> _basetype_b_name ; 

#line 689 "../../src/norm.c"
if ( ( ( ( struct enumdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> 
#line 689 "../../src/norm.c"
_enumdef_e_body == 2 ) 
#line 689 "../../src/norm.c"
{ 
#line 689 "../../src/norm.c"
if ( _auto_this -> _expr__O2.__C2_tp && ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) ) { 
#line 689 "../../src/norm.c"

#line 690 "../../src/norm.c"

#line 691 "../../src/norm.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "enum%n defined as returnT for%n (did you forget a ';'?)", _auto_nn , _auto_this ) ; 

#line 692 "../../src/norm.c"
_auto_nn = ( struct name * ) _auto_this ; 

#line 693 "../../src/norm.c"
break ; 
} 
#line 695 "../../src/norm.c"
_auto_nn -> _name_n_list = ( struct name * ) _auto_this ; 

#line 696 "../../src/norm.c"
( ( ( struct enumdef * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> _enumdef_e_body = 1 ; 
#line 696 "../../src/norm.c"
} else 
#line 699 "../../src/norm.c"
_auto_nn = ( struct name * ) _auto_this ; 

#line 700 "../../src/norm.c"
break ; 

#line 701 "../../src/norm.c"
default : _auto_nn = ( struct name * ) _auto_this ; 
} 
#line 705 "../../src/norm.c"
for ( _auto_n = ( struct name * ) _auto_this ;_auto_n ;( _auto_n = _auto_nx ) ) { 
#line 705 "../../src/norm.c"
Ptype _auto_t ; 
#line 705 "../../src/norm.c"

#line 706 "../../src/norm.c"
_auto_t = _auto_n -> _expr__O2.__C2_tp ; 

#line 707 "../../src/norm.c"
_auto_nx = _auto_n -> _name_n_list ; 

#line 708 "../../src/norm.c"
_auto_n -> _name_n_sto = _auto_stc ; 

#line 732 "../../src/norm.c"
if ( _auto_n -> _node_base == 123 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 732 "../../src/norm.c"
"redefinition ofTN%n", _auto_n ) ; 

#line 734 "../../src/norm.c"
if ( _auto_t == 0 ) { 
#line 734 "../../src/norm.c"
if ( _auto_bl == 0 ) _auto_n -> _expr__O2.__C2_tp = ( 
#line 734 "../../src/norm.c"
_auto_t = ( struct type * ) _auto_b ) ; 
else 
#line 737 "../../src/norm.c"
{ 
#line 737 "../../src/norm.c"
errorFPC__E ( ( char * ) "body of nonF%n", _auto_n ) ; 

#line 739 "../../src/norm.c"
_auto_t = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( struct 
#line 739 "../../src/norm.c"
type * ) defa_type , ( struct name * ) 0 , ( int ) 0 ) 
#line 739 "../../src/norm.c"
; 
} } 
#line 743 "../../src/norm.c"
switch ( _auto_t -> _node_base ) { 
#line 743 "../../src/norm.c"
case 125 : case 158 : _auto_n -> _expr__O2.__C2_tp = _ptr_normalize ( 
#line 743 "../../src/norm.c"
( struct ptr * ) ( ( ( struct ptr * ) ( _auto_t ) ) ) 
#line 743 "../../src/norm.c"
, ( struct type * ) _auto_b ) ; 

#line 747 "../../src/norm.c"
break ; 

#line 748 "../../src/norm.c"
case 110 : _auto_n -> _expr__O2.__C2_tp = _vec_normalize ( ( struct vec * ) ( ( ( struct vec * 
#line 748 "../../src/norm.c"
) ( _auto_t ) ) ) , ( struct type * ) _auto_b ) ; 

#line 750 "../../src/norm.c"
break ; 

#line 751 "../../src/norm.c"
case 108 : _auto_n -> _expr__O2.__C2_tp = _fct_normalize ( ( struct fct * ) ( ( ( struct fct * 
#line 751 "../../src/norm.c"
) ( _auto_t ) ) ) , ( struct type * ) _auto_b ) ; 

#line 753 "../../src/norm.c"
break ; 

#line 754 "../../src/norm.c"
case 114 : if ( _auto_n -> _expr__O3.__C3_string == 0 ) _auto_n -> _expr__O3.__C3_string = make_name ( ( int ) 
#line 754 "../../src/norm.c"
'F' ) ; 

#line 756 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = _auto_t ; 

#line 757 "../../src/norm.c"
{ 
#line 757 "../../src/norm.c"
Pbase _auto_tb ; 

#line 757 "../../src/norm.c"
_auto_tb = _auto_b ; 

#line 758 "../../src/norm.c"
flatten : switch ( _auto_tb -> _node_base ) { 
#line 760 "../../src/norm.c"
case 97 : _auto_tb = ( ( ( struct basetype * 
#line 760 "../../src/norm.c"
) ( _auto_tb -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 

#line 763 "../../src/norm.c"
goto flatten ; 

#line 764 "../../src/norm.c"
case 21 : ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype__O1.__C1_b_fieldtype = 
#line 764 "../../src/norm.c"
( struct type * ) ( _auto_b -> _basetype_b_unsigned ? uint_type : int_type ) ; 

#line 766 "../../src/norm.c"
goto iii ; 

#line 767 "../../src/norm.c"
case 5 : ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype__O1.__C1_b_fieldtype = 
#line 767 "../../src/norm.c"
( struct type * ) ( _auto_b -> _basetype_b_unsigned ? uchar_type : char_type ) ; 

#line 769 "../../src/norm.c"
goto iii ; 

#line 770 "../../src/norm.c"
case 29 : ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype__O1.__C1_b_fieldtype = 
#line 770 "../../src/norm.c"
( struct type * ) ( _auto_b -> _basetype_b_unsigned ? ushort_type : short_type ) ; 

#line 772 "../../src/norm.c"
goto iii ; 

#line 773 "../../src/norm.c"
iii : ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_unsigned = _auto_b -> 
#line 773 "../../src/norm.c"
_basetype_b_unsigned ; 

#line 775 "../../src/norm.c"
( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_const = _auto_b -> _basetype_b_const ; 
#line 775 "../../src/norm.c"

#line 776 "../../src/norm.c"
break ; 

#line 777 "../../src/norm.c"
default : errorFPC__E ( ( char * ) "non-int field") ; 

#line 779 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) defa_type ; 
} 
#line 781 "../../src/norm.c"
break ; 
} } 
#line 784 "../../src/norm.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) 
#line 784 "../../src/norm.c"
; 

#line 786 "../../src/norm.c"
if ( _auto_f -> _node_base != 108 ) { 
#line 786 "../../src/norm.c"
if ( _auto_bl ) { 
#line 787 "../../src/norm.c"
errorFPC__E ( ( char * 
#line 787 "../../src/norm.c"
) "body for nonF%n", _auto_n ) ; 

#line 789 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) ( _auto_f = ( struct fct * ) _fct__ctor ( ( 
#line 789 "../../src/norm.c"
struct fct * ) 0 , ( struct type * ) defa_type , ( struct name * ) 
#line 789 "../../src/norm.c"
0 , ( int ) 0 ) ) ; 

#line 790 "../../src/norm.c"
continue ; 
} 
#line 792 "../../src/norm.c"
if ( _auto_inli ) errorFPC__E ( ( char * ) "inline nonF%n", _auto_n ) ; 

#line 793 "../../src/norm.c"
if ( _auto_virt ) errorFPC__E ( ( char * ) "virtual nonF%n", _auto_n ) ; 

#line 795 "../../src/norm.c"
if ( _auto_tpdf ) { 
#line 795 "../../src/norm.c"
if ( _auto_n -> _expr__O4.__C4_n_initializer ) { 
#line 796 "../../src/norm.c"
errorFPC__E ( ( char * ) 
#line 796 "../../src/norm.c"
"Ir for typedefN%n", _auto_n ) ; 

#line 798 "../../src/norm.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 
} 
#line 800 "../../src/norm.c"
_name_tdef ( ( struct name * ) _auto_n ) ; 
} 
#line 802 "../../src/norm.c"
continue ; 
} 
#line 805 "../../src/norm.c"
_auto_f -> _fct_f_inline = _auto_inli ; 

#line 806 "../../src/norm.c"
_auto_f -> _fct_f_virtual = _auto_virt ; 

#line 808 "../../src/norm.c"
if ( _auto_tpdf ) { 
#line 808 "../../src/norm.c"
if ( _auto_f -> _fct_body = _auto_bl ) errorFPC__E ( ( char * ) 
#line 808 "../../src/norm.c"
"typedef%n { ... }", _auto_n ) ; 

#line 810 "../../src/norm.c"
_name_tdef ( ( struct name * ) _auto_n ) ; 

#line 811 "../../src/norm.c"
continue ; 
} 
#line 814 "../../src/norm.c"
if ( _auto_f -> _fct_body = _auto_bl ) continue ; 

#line 824 "../../src/norm.c"
{ 
#line 824 "../../src/norm.c"
Pname _auto_cn ; 
bit _auto_clob ; 

#line 824 "../../src/norm.c"
_auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_f -> _fct_returns ) ; 

#line 825 "../../src/norm.c"
_auto_clob = ( _auto_cn || cl_obj_vec ) ; 

#line 827 "../../src/norm.c"
if ( _auto_f -> _fct_argtype ) { 
#line 827 "../../src/norm.c"
Pname _auto_nn ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 830 "../../src/norm.c"
for ( _auto_nn = _auto_f -> _fct_argtype ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 830 "../../src/norm.c"
if ( _auto_nn -> _node_base != 
#line 830 "../../src/norm.c"
85 ) 
#line 831 "../../src/norm.c"
{ 
#line 831 "../../src/norm.c"
if ( ! _auto_clob ) { 
#line 832 "../../src/norm.c"
errorFPC__E ( ( char * ) "ATX for%n", _auto_n ) 
#line 832 "../../src/norm.c"
; 

#line 834 "../../src/norm.c"
goto zzz ; 
} 
#line 836 "../../src/norm.c"
goto is_obj ; 
} 
#line 844 "../../src/norm.c"
if ( _auto_nn -> _expr__O2.__C2_tp ) goto ok ; 
} 
#line 846 "../../src/norm.c"
if ( ! _auto_clob ) { 
#line 846 "../../src/norm.c"
errorFPC__E ( ( char * ) "FALX") ; 

#line 848 "../../src/norm.c"
goto zzz ; 
} 
#line 850 "../../src/norm.c"
is_obj : _auto_n -> _expr__O2.__C2_tp = _auto_f -> _fct_returns ; 

#line 854 "../../src/norm.c"
if ( _auto_f -> _fct_argtype -> _node_base != 140 ) _auto_f -> _fct_argtype = ( ( ( struct name * ) 
#line 854 "../../src/norm.c"
( _expr__ctor ( ( struct expr * ) 0 , 140 , ( struct expr * ) ( 
#line 854 "../../src/norm.c"
( ( struct expr * ) ( _auto_f -> _fct_argtype ) ) ) , ( struct expr * 
#line 854 "../../src/norm.c"
) 0 ) ) ) ) ; 

#line 855 "../../src/norm.c"
_auto_n -> _expr__O4.__C4_n_initializer = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( 
#line 855 "../../src/norm.c"
( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( 
#line 855 "../../src/norm.c"
struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct expr * ) ( 
#line 855 "../../src/norm.c"
( ( struct expr * ) ( _auto_f -> _fct_argtype ) ) ) ) , ( struct 
#line 855 "../../src/norm.c"
expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct 
#line 855 "../../src/norm.c"
type * ) _auto_cn -> _expr__O2.__C2_tp ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 856 "../../src/norm.c"
goto ok ; 

#line 857 "../../src/norm.c"
zzz : if ( _auto_f -> _fct_argtype ) { 
#line 858 "../../src/norm.c"
if ( _auto_f -> _fct_argtype && ( _auto_f -> _fct_argtype -> _node_permanent == 
#line 858 "../../src/norm.c"
0 ) ) 
#line 859 "../../src/norm.c"
_name_del ( ( struct name * ) _auto_f -> _fct_argtype ) ; 

#line 860 "../../src/norm.c"
_auto_f -> _fct_argtype = 0 ; 

#line 861 "../../src/norm.c"
_auto_f -> _fct_nargs = 0 ; 

#line 862 "../../src/norm.c"
_auto_f -> _fct_nargs_known = ( ! fct_void ) ; 
} } else 
#line 865 "../../src/norm.c"
{ 
#line 865 "../../src/norm.c"
} ok : ; 
} } 
#line 877 "../../src/norm.c"
{ 
#line 877 "../../src/norm.c"
{ _auto__result = _auto_nn ; 

#line 877 "../../src/norm.c"
return _auto__result ; 
} } } ; 

#line 880 "../../src/norm.c"
Ptype _vec_normalize ( _auto_this , _auto_vecof ) register struct vec * _auto_this ; 
struct type * _auto_vecof ; 

#line 883 "../../src/norm.c"
{ 
#line 883 "../../src/norm.c"
Ptype _auto__result ; 
Ptype _auto_t ; 

#line 884 "../../src/norm.c"
_auto_t = _auto_this -> _vec_typ ; 

#line 885 "../../src/norm.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 885 "../../src/norm.c"
"0->vec.normalize()") ; 

#line 886 "../../src/norm.c"
_auto_this -> _vec_typ = _auto_vecof ; 

#line 888 "../../src/norm.c"
if ( _auto_t == 0 ) { 
#line 888 "../../src/norm.c"
{ _auto__result = ( struct type * ) _auto_this ; 

#line 888 "../../src/norm.c"
return _auto__result ; 
} } 
#line 890 "../../src/norm.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 891 "../../src/norm.c"
case 97 : _auto_t = ( ( ( 
#line 891 "../../src/norm.c"
struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 892 "../../src/norm.c"
goto xx ; 

#line 893 "../../src/norm.c"
case 125 : case 158 : { 
#line 894 "../../src/norm.c"
{ _auto__result = _ptr_normalize ( ( struct ptr * ) ( ( 
#line 894 "../../src/norm.c"
( struct ptr * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 894 "../../src/norm.c"
; 

#line 894 "../../src/norm.c"
return _auto__result ; 
} } 
#line 895 "../../src/norm.c"
case 110 : { 
#line 895 "../../src/norm.c"
{ _auto__result = _vec_normalize ( ( struct vec * ) ( ( 
#line 895 "../../src/norm.c"
( struct vec * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 895 "../../src/norm.c"
; 

#line 895 "../../src/norm.c"
return _auto__result ; 
} } 
#line 896 "../../src/norm.c"
case 108 : { 
#line 896 "../../src/norm.c"
{ _auto__result = _fct_normalize ( ( struct fct * ) ( ( 
#line 896 "../../src/norm.c"
( struct fct * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 896 "../../src/norm.c"
; 

#line 896 "../../src/norm.c"
return _auto__result ; 
} } 
#line 897 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "bad vectorT(%d)", 
#line 897 "../../src/norm.c"
_auto_t -> _node_base ) ; 
} } ; 

#line 901 "../../src/norm.c"
Ptype _ptr_normalize ( _auto_this , _auto_ptrto ) register struct ptr * _auto_this ; 
struct type * _auto_ptrto ; 

#line 902 "../../src/norm.c"
{ 
#line 902 "../../src/norm.c"
Ptype _auto__result ; 
Ptype _auto_t ; 

#line 903 "../../src/norm.c"
_auto_t = _auto_this -> _ptr_typ ; 

#line 904 "../../src/norm.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 904 "../../src/norm.c"
"0->ptr.normalize()") ; 

#line 905 "../../src/norm.c"
_auto_this -> _ptr_typ = _auto_ptrto ; 

#line 907 "../../src/norm.c"
if ( _auto_t == 0 ) { 
#line 907 "../../src/norm.c"
Pbase _auto_b ; 

#line 908 "../../src/norm.c"
_auto_b = ( ( ( struct basetype * ) ( _auto_ptrto ) ) ) ; 

#line 909 "../../src/norm.c"
if ( ( ( ( Pfctvec_type && ( _auto_this -> _ptr_rdo == 0 ) ) && ( 
#line 909 "../../src/norm.c"
_auto_b -> _basetype_b_unsigned == 0 ) ) && ( _auto_b -> _basetype_b_const == 0 ) ) && ( 
#line 909 "../../src/norm.c"
_auto_this -> _node_base == 125 ) ) 
#line 913 "../../src/norm.c"
{ 
#line 913 "../../src/norm.c"
switch ( _auto_b -> _node_base ) { 
#line 914 "../../src/norm.c"
case 21 : _delete ( ( 
#line 914 "../../src/norm.c"
int * ) _auto_this ) ; 

#line 917 "../../src/norm.c"
{ 
#line 917 "../../src/norm.c"
{ _auto__result = Pint_type ; 

#line 917 "../../src/norm.c"
return _auto__result ; 
} } 
#line 918 "../../src/norm.c"
case 5 : _delete ( ( int * ) _auto_this ) ; 

#line 920 "../../src/norm.c"
{ 
#line 920 "../../src/norm.c"
{ _auto__result = Pchar_type ; 

#line 920 "../../src/norm.c"
return _auto__result ; 
} } 
#line 921 "../../src/norm.c"
case 38 : _delete ( ( int * ) _auto_this ) ; 

#line 923 "../../src/norm.c"
{ 
#line 923 "../../src/norm.c"
{ _auto__result = Pvoid_type ; 

#line 923 "../../src/norm.c"
return _auto__result ; 
} } 
#line 924 "../../src/norm.c"
case 97 : break ; 
} } 
#line 928 "../../src/norm.c"
if ( ( _auto_this -> _node_base == 158 ) && ( _auto_b -> _node_base == 38 ) ) 
#line 928 "../../src/norm.c"

#line 928 "../../src/norm.c"
errorFPC__E ( ( char * ) "void& is not a validT") ; 

#line 929 "../../src/norm.c"
{ 
#line 929 "../../src/norm.c"
{ _auto__result = ( struct type * ) _auto_this ; 

#line 929 "../../src/norm.c"
return _auto__result ; 
} } } 
#line 932 "../../src/norm.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 933 "../../src/norm.c"
case 97 : _auto_t = ( ( 
#line 933 "../../src/norm.c"
( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 934 "../../src/norm.c"
goto xx ; 

#line 935 "../../src/norm.c"
case 125 : case 158 : { 
#line 936 "../../src/norm.c"
{ _auto__result = _ptr_normalize ( ( struct ptr * ) ( ( 
#line 936 "../../src/norm.c"
( struct ptr * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 936 "../../src/norm.c"
; 

#line 936 "../../src/norm.c"
return _auto__result ; 
} } 
#line 937 "../../src/norm.c"
case 110 : { 
#line 937 "../../src/norm.c"
{ _auto__result = _vec_normalize ( ( struct vec * ) ( ( 
#line 937 "../../src/norm.c"
( struct vec * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 937 "../../src/norm.c"
; 

#line 937 "../../src/norm.c"
return _auto__result ; 
} } 
#line 938 "../../src/norm.c"
case 108 : { 
#line 938 "../../src/norm.c"
{ _auto__result = _fct_normalize ( ( struct fct * ) ( ( 
#line 938 "../../src/norm.c"
( struct fct * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 938 "../../src/norm.c"
; 

#line 938 "../../src/norm.c"
return _auto__result ; 
} } 
#line 939 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "badPT(%d)", 
#line 939 "../../src/norm.c"
_auto_t -> _node_base ) ; 
} } ; 

#line 943 "../../src/norm.c"
Ptype _fct_normalize ( _auto_this , _auto_ret ) register struct fct * _auto_this ; 
struct type * _auto_ret ; 

#line 947 "../../src/norm.c"
{ 
#line 947 "../../src/norm.c"
Ptype _auto__result ; 
register Ptype _auto_t ; 

#line 948 "../../src/norm.c"
_auto_t = _auto_this -> _fct_returns ; 

#line 950 "../../src/norm.c"
if ( ( _auto_this == 0 ) || ( _auto_ret == 0 ) ) errorFI_PC__E ( ( 
#line 950 "../../src/norm.c"
int ) 'i' , ( char * ) "%d->fct.normalize(%d)", _auto_this , _auto_ret ) ; 

#line 952 "../../src/norm.c"
_auto_this -> _fct_returns = _auto_ret ; 

#line 953 "../../src/norm.c"
if ( _auto_t == 0 ) { 
#line 953 "../../src/norm.c"
{ _auto__result = ( struct type * ) _auto_this ; 

#line 953 "../../src/norm.c"
return _auto__result ; 
} } 
#line 955 "../../src/norm.c"
if ( _auto_this -> _fct_argtype ) { 
#line 955 "../../src/norm.c"
if ( _auto_this -> _fct_argtype -> _node_base != 85 ) { 
#line 955 "../../src/norm.c"

#line 956 "../../src/norm.c"

#line 957 "../../src/norm.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "syntax: ANX") ; 

#line 958 "../../src/norm.c"
_auto_this -> _fct_argtype = 0 ; 

#line 959 "../../src/norm.c"
_auto_this -> _fct_nargs = 0 ; 

#line 960 "../../src/norm.c"
_auto_this -> _fct_nargs_known = 0 ; 
} } 
#line 976 "../../src/norm.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 977 "../../src/norm.c"
case 125 : case 158 : { 
#line 979 "../../src/norm.c"
{ 
#line 979 "../../src/norm.c"

#line 979 "../../src/norm.c"
_auto__result = _ptr_normalize ( ( struct ptr * ) ( ( ( struct ptr * ) ( _auto_t ) 
#line 979 "../../src/norm.c"
) ) , ( struct type * ) _auto_this ) ; 

#line 979 "../../src/norm.c"
return _auto__result ; 
} } 
#line 980 "../../src/norm.c"
case 110 : { 
#line 980 "../../src/norm.c"
{ _auto__result = _vec_normalize ( ( struct vec * ) ( ( 
#line 980 "../../src/norm.c"
( struct vec * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 980 "../../src/norm.c"
; 

#line 980 "../../src/norm.c"
return _auto__result ; 
} } 
#line 981 "../../src/norm.c"
case 108 : { 
#line 981 "../../src/norm.c"
{ _auto__result = _fct_normalize ( ( struct fct * ) ( ( 
#line 981 "../../src/norm.c"
( struct fct * ) ( _auto_t ) ) ) , ( struct type * ) _auto_this ) 
#line 981 "../../src/norm.c"
; 

#line 981 "../../src/norm.c"
return _auto__result ; 
} } 
#line 982 "../../src/norm.c"
case 97 : _auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) 
#line 982 "../../src/norm.c"
) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 982 "../../src/norm.c"
goto xx ; 

#line 983 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "badFT:%k", _auto_t -> _node_base ) 
#line 983 "../../src/norm.c"
; 
} } ; 

#line 989 "../../src/norm.c"
int _fct_argdcl ( _auto_this , _auto_dcl , _auto_fn ) register struct fct * _auto_this ; 
struct name * _auto_dcl ; 
struct name * _auto_fn ; 

#line 996 "../../src/norm.c"
{ 
#line 996 "../../src/norm.c"
Pname _auto_n ; 

#line 999 "../../src/norm.c"
switch ( _auto_this -> _node_base ) { 
#line 999 "../../src/norm.c"
case 108 : break ; 

#line 1001 "../../src/norm.c"
case 141 : { 
#line 1001 "../../src/norm.c"
return ; 
} 
#line 1002 "../../src/norm.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "argdcl(%d)", _auto_this -> 
#line 1002 "../../src/norm.c"
_node_base ) ; 
} 
#line 1005 "../../src/norm.c"
if ( _auto_this -> _fct_argtype ) { 
#line 1005 "../../src/norm.c"
switch ( _auto_this -> _fct_argtype -> _node_base ) { 
#line 1006 "../../src/norm.c"
case 85 : 
#line 1006 "../../src/norm.c"

#line 1008 "../../src/norm.c"
if ( _auto_dcl ) errorFPC__E ( ( char * ) "badF definition syntax") ; 

#line 1009 "../../src/norm.c"
for ( _auto_n = _auto_this -> _fct_argtype ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 1009 "../../src/norm.c"
if ( _auto_n -> _expr__O3.__C3_string == 
#line 1009 "../../src/norm.c"
0 ) 
#line 1010 "../../src/norm.c"
_auto_n -> _expr__O3.__C3_string = make_name ( ( int ) 'A' ) ; 
} 
#line 1012 "../../src/norm.c"
{ 
#line 1012 "../../src/norm.c"
return ; 
} 
#line 1013 "../../src/norm.c"
case 140 : { 
#line 1015 "../../src/norm.c"
Pexpr _auto_e ; 
Pname _auto_nn ; 
Pname _auto_tail ; 

#line 1017 "../../src/norm.c"
_auto_tail = 0 ; 

#line 1018 "../../src/norm.c"
_auto_n = 0 ; 

#line 1019 "../../src/norm.c"
if ( old_fct_accepted == 0 ) error ( ( int ) 'w' , ( struct loc * ) 
#line 1019 "../../src/norm.c"
( & _auto_fn -> _name_where ) , ( char * ) "old style definition of%n", _auto_fn ) ; 

#line 1020 "../../src/norm.c"
for ( _auto_e = ( ( ( struct expr * ) ( _auto_this -> _fct_argtype ) ) ) 
#line 1020 "../../src/norm.c"
;_auto_e ;( _auto_e = _auto_e -> _expr__O4.__C4_e2 ) ) 
#line 1020 "../../src/norm.c"
{ 
#line 1020 "../../src/norm.c"
Pexpr _auto_id ; 

#line 1021 "../../src/norm.c"
_auto_id = _auto_e -> _expr__O3.__C3_e1 ; 

#line 1022 "../../src/norm.c"
if ( _auto_id -> _node_base != 85 ) { 
#line 1022 "../../src/norm.c"
errorFPC__E ( ( char * ) "NX inAL") ; 

#line 1024 "../../src/norm.c"
_auto_this -> _fct_argtype = 0 ; 

#line 1025 "../../src/norm.c"
_auto_dcl = 0 ; 

#line 1026 "../../src/norm.c"
break ; 
} 
#line 1028 "../../src/norm.c"
_auto_nn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_id -> 
#line 1028 "../../src/norm.c"
_expr__O3.__C3_string ) ; 

#line 1029 "../../src/norm.c"
if ( _auto_n ) _auto_tail = ( _auto_tail -> _name_n_list = _auto_nn ) ; 
else 
#line 1032 "../../src/norm.c"
_auto_tail = ( _auto_n = _auto_nn ) ; 
} 
#line 1034 "../../src/norm.c"
_auto_this -> _fct_argtype = _auto_n ; 

#line 1035 "../../src/norm.c"
break ; 
} 
#line 1037 "../../src/norm.c"
default : errorFPC__E ( ( char * ) "ALX(%d)", _auto_this -> _fct_argtype -> _node_base ) ; 

#line 1039 "../../src/norm.c"
_auto_this -> _fct_argtype = 0 ; 

#line 1040 "../../src/norm.c"
_auto_dcl = 0 ; 
} } else 
#line 1043 "../../src/norm.c"
{ 
#line 1043 "../../src/norm.c"
_auto_this -> _fct_nargs_known = ( ! fct_void ) ; 

#line 1045 "../../src/norm.c"
_auto_this -> _fct_nargs = 0 ; 

#line 1046 "../../src/norm.c"
if ( _auto_dcl ) errorFPC__E ( ( char * ) "ADL forF withoutAs") ; 

#line 1047 "../../src/norm.c"
{ 
#line 1047 "../../src/norm.c"
return ; 
} } 
#line 1050 "../../src/norm.c"
_auto_this -> _fct_nargs_known = 0 ; 

#line 1052 "../../src/norm.c"
if ( _auto_dcl ) { 
#line 1052 "../../src/norm.c"
Pname _auto_d ; 
Pname _auto_dx ; 

#line 1059 "../../src/norm.c"
for ( _auto_n = _auto_this -> _fct_argtype ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 1059 "../../src/norm.c"
char * _auto_s ; 

#line 1060 "../../src/norm.c"
_auto_s = _auto_n -> _expr__O3.__C3_string ; 

#line 1061 "../../src/norm.c"
if ( _auto_s == 0 ) { 
#line 1061 "../../src/norm.c"
errorFPC__E ( ( char * ) "AN missing inF definition") ; 

#line 1063 "../../src/norm.c"
_auto_n -> _expr__O3.__C3_string = ( _auto_s = make_name ( ( int ) 'A' ) ) ; 
} else 
#line 1065 "../../src/norm.c"
if ( _auto_n -> _expr__O2.__C2_tp ) errorFPC__E ( ( char * ) "twoTs forA %s", _auto_n -> _expr__O3.__C3_string ) 
#line 1065 "../../src/norm.c"
; 

#line 1067 "../../src/norm.c"
for ( _auto_d = _auto_dcl ;_auto_d ;( _auto_d = _auto_d -> _name_n_list ) ) { 
#line 1067 "../../src/norm.c"
if ( strcmp ( _auto_s , _auto_d -> 
#line 1067 "../../src/norm.c"
_expr__O3.__C3_string ) == 0 ) 
#line 1068 "../../src/norm.c"
{ 
#line 1068 "../../src/norm.c"
if ( _auto_d -> _expr__O2.__C2_tp -> _node_base == 38 ) { 
#line 1069 "../../src/norm.c"
errorFPC__E ( ( 
#line 1069 "../../src/norm.c"
char * ) "voidA%n", _auto_d ) ; 

#line 1071 "../../src/norm.c"
_auto_d -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} 
#line 1073 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = _auto_d -> _expr__O2.__C2_tp ; 

#line 1074 "../../src/norm.c"
_auto_n -> _name_n_sto = _auto_d -> _name_n_sto ; 

#line 1075 "../../src/norm.c"
_auto_d -> _expr__O2.__C2_tp = 0 ; 

#line 1076 "../../src/norm.c"
goto xx ; 
} } 
#line 1079 "../../src/norm.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) defa_type ; 

#line 1080 "../../src/norm.c"
xx : ; 

#line 1081 "../../src/norm.c"
if ( _auto_n -> _expr__O2.__C2_tp == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1081 "../../src/norm.c"
) "noT for %s", _auto_n -> _expr__O3.__C3_string ) ; 
} 
#line 1087 "../../src/norm.c"
for ( _auto_d = _auto_dcl ;_auto_d ;( _auto_d = _auto_dx ) ) { 
#line 1087 "../../src/norm.c"
_auto_dx = _auto_d -> _name_n_list ; 

#line 1089 "../../src/norm.c"
if ( _auto_d -> _expr__O2.__C2_tp ) { 
#line 1089 "../../src/norm.c"
switch ( _auto_d -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1091 "../../src/norm.c"
case 6 : case 
#line 1091 "../../src/norm.c"
13 : 
#line 1097 "../../src/norm.c"
_auto_d -> _name_n_list = _auto_this -> _fct_argtype ; 

#line 1098 "../../src/norm.c"
_auto_this -> _fct_argtype = _auto_d ; 

#line 1099 "../../src/norm.c"
break ; 

#line 1100 "../../src/norm.c"
default : errorFPC__E ( ( char * ) "%n inADL not inAL", _auto_d ) ; 
} } } } 
#line 1108 "../../src/norm.c"
for ( _auto_n = _auto_this -> _fct_argtype ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 1108 "../../src/norm.c"

#line 1108 "../../src/norm.c"

#line 1109 "../../src/norm.c"
if ( _auto_n -> _expr__O2.__C2_tp == 0 ) _auto_n -> _expr__O2.__C2_tp = ( struct type * ) defa_type ; 

#line 1110 "../../src/norm.c"
_auto_this -> _fct_nargs ++ ; 
} } ; 

#line 1114 "../../src/norm.c"
Pname cl_obj_vec ; 

#line 1115 "../../src/norm.c"
Pname eobj ; 

#line 1117 "../../src/norm.c"
Pname _type_is_cl_obj ( _auto_this ) register struct type * _auto_this ; 

#line 1126 "../../src/norm.c"
{ 
#line 1126 "../../src/norm.c"
Pname _auto__result ; 
bit _auto_v ; 
register Ptype _auto_t ; 

#line 1127 "../../src/norm.c"
_auto_v = 0 ; 

#line 1128 "../../src/norm.c"
_auto_t = ( struct type * ) _auto_this ; 

#line 1130 "../../src/norm.c"
eobj = 0 ; 

#line 1131 "../../src/norm.c"
cl_obj_vec = 0 ; 

#line 1132 "../../src/norm.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 1133 "../../src/norm.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 1133 "../../src/norm.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1136 "../../src/norm.c"
goto xx ; 

#line 1138 "../../src/norm.c"
case 119 : if ( _auto_v ) { 
#line 1139 "../../src/norm.c"
cl_obj_vec = ( ( ( struct basetype * ) ( 
#line 1139 "../../src/norm.c"
_auto_t ) ) ) -> _basetype_b_name ; 

#line 1141 "../../src/norm.c"
{ 
#line 1141 "../../src/norm.c"
{ _auto__result = 0 ; 

#line 1141 "../../src/norm.c"
return _auto__result ; 
} } } else 
#line 1144 "../../src/norm.c"
{ 
#line 1144 "../../src/norm.c"
{ _auto__result = ( ( ( struct basetype * ) ( 
#line 1144 "../../src/norm.c"
_auto_t ) ) ) -> _basetype_b_name ; 

#line 1144 "../../src/norm.c"
return _auto__result ; 
} } 
#line 1146 "../../src/norm.c"
case 110 : _auto_t = ( ( ( struct vec * ) ( _auto_t ) ) 
#line 1146 "../../src/norm.c"
) -> _vec_typ ; 

#line 1148 "../../src/norm.c"
_auto_v = 1 ; 

#line 1149 "../../src/norm.c"
goto xx ; 

#line 1151 "../../src/norm.c"
case 121 : eobj = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 1151 "../../src/norm.c"
_basetype_b_name ; 

#line 1153 "../../src/norm.c"
default : { 
#line 1154 "../../src/norm.c"
{ _auto__result = 0 ; 

#line 1154 "../../src/norm.c"
return _auto__result ; 
} } } } ; 

/* the end */
