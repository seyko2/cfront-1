#line 1 "../../src/lalex.c"

/* <<cfront 10/10/85>> */
/* < ../../src/lalex.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/lalex.c"
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

#line 3 "../../src/yystype.h"
union _C10 { /* sizeof = 4 */
char * __C10_s ; 
TOK __C10_t ; 
int __C10_i ; 
struct loc __C10_l ; 
Pname __C10_pn ; 
Ptype __C10_pt ; 
Pexpr __C10_pe ; 
Pstmt __C10_ps ; 
PP __C10_p ; 
} ; 
typedef union _C10 YYSTYPE ; 

#line 14 "../../src/yystype.h"
extern union _C10 yylval ; 

#line 7 "../../src/tqueue.h"
extern int printf ( ) ; 

#line 8 "../../src/tqueue.h"
extern int fprintf ( ) ; 

#line 10 "../../src/tqueue.h"
struct toknode { /* sizeof = 16 */
TOK _toknode_tok ; 
union _C10 _toknode_retval ; 
struct toknode * _toknode_next ; 
struct toknode * _toknode_last ; 
} ; 
struct toknode * _toknode__ctor ( ) ; 

#line 18 "../../src/tqueue.h"
extern struct toknode * front ; 

#line 19 "../../src/tqueue.h"
extern struct toknode * rear ; 

#line 21 "../../src/tqueue.h"
extern int addtok ( ) ; 

#line 22 "../../src/tqueue.h"
extern TOK deltok ( ) ; 

#line 25 "../../src/tqueue.h"
extern int tlex ( ) ; 

#line 26 "../../src/tqueue.h"
extern TOK lalex ( ) ; 

#line 27 "../../src/tqueue.h"
extern int * malloc ( ) ; 

#line 29 "../../src/tqueue.h"
extern union _C10 yylval ; 

#line 30 "../../src/tqueue.h"
extern TOK tk ; 

#line 32 "../../src/tqueue.h"
extern char * image ( ) ; 

#line 32 "../../src/lalex.c"
struct toknode * front = 0 ; 

#line 33 "../../src/lalex.c"
struct toknode * rear = 0 ; 

#line 35 "../../src/lalex.c"
struct toknode * free_toks = 0 ; 

#line 37 "../../src/lalex.c"
struct toknode * _toknode__ctor ( _auto_this , _auto_t , _auto_r ) register struct toknode * _auto_this ; 
int _auto_t ; 
union _C10 _auto_r ; 

#line 38 "../../src/lalex.c"
{ 
#line 38 "../../src/lalex.c"
if ( free_toks == 0 ) { 
#line 39 "../../src/lalex.c"
register struct toknode * _auto_q ; 

#line 40 "../../src/lalex.c"
_auto_q = ( ( ( struct toknode * ) ( malloc ( ( unsigned int ) 256) 
#line 40 "../../src/lalex.c"
) ) ) ; 

#line 41 "../../src/lalex.c"
free_toks = _auto_q ; 

#line 42 "../../src/lalex.c"
for ( ( ( _auto_q += 15) , ( _auto_q -> _toknode_next = 0 ) ) ;( 
#line 42 "../../src/lalex.c"
_auto_q != free_toks ) ;( _auto_q -- ) ) 
#line 42 "../../src/lalex.c"
( _auto_q - 1 ) -> _toknode_next = _auto_q ; 
} 
#line 44 "../../src/lalex.c"
_auto_this = ( struct toknode * ) free_toks ; 

#line 45 "../../src/lalex.c"
free_toks = free_toks -> _toknode_next ; 

#line 46 "../../src/lalex.c"
_auto_this -> _toknode_tok = _auto_t ; 

#line 47 "../../src/lalex.c"
_auto_this -> _toknode_retval = _auto_r ; 

#line 48 "../../src/lalex.c"
_auto_this -> _toknode_next = ( _auto_this -> _toknode_last = 0 ) ; 

#line 49 "../../src/lalex.c"
return _auto_this ; 
} ; 

#line 51 "../../src/lalex.c"
; 

#line 59 "../../src/lalex.c"
extern int addtok ( _auto_t , _auto_r ) int _auto_t ; 
union _C10 _auto_r ; 

#line 60 "../../src/lalex.c"
{ 
#line 60 "../../src/lalex.c"
struct toknode * _auto_T ; 

#line 61 "../../src/lalex.c"
_auto_T = ( struct toknode * ) _toknode__ctor ( ( struct toknode * ) 0 , _auto_t , _auto_r ) 
#line 61 "../../src/lalex.c"
; 

#line 62 "../../src/lalex.c"
if ( front == 0 ) front = ( rear = _auto_T ) ; 
else 
#line 64 "../../src/lalex.c"
{ 
#line 64 "../../src/lalex.c"
rear -> _toknode_next = _auto_T ; 

#line 66 "../../src/lalex.c"
_auto_T -> _toknode_last = rear ; 

#line 67 "../../src/lalex.c"
rear = _auto_T ; 
} } ; 

#line 72 "../../src/lalex.c"
TOK tk ; 

#line 74 "../../src/lalex.c"
extern TOK deltok ( ) 
#line 75 "../../src/lalex.c"
{ 
#line 75 "../../src/lalex.c"
TOK _auto__result ; 
struct toknode * _auto_T ; 
struct toknode * _auto__Xthis__dtor_toknode ; 

#line 76 "../../src/lalex.c"
_auto_T = front ; 

#line 77 "../../src/lalex.c"
tk = _auto_T -> _toknode_tok ; 

#line 78 "../../src/lalex.c"
yylval = _auto_T -> _toknode_retval ; 

#line 79 "../../src/lalex.c"
if ( front = front -> _toknode_next ) front -> _toknode_last = 0 ; 

#line 80 "../../src/lalex.c"
{ 
#line 82 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = ( struct toknode * ) _auto_T ; 

#line 52 "../../src/lalex.c"
{ 
#line 52 "../../src/lalex.c"
_auto__Xthis__dtor_toknode -> _toknode_next = free_toks ; 

#line 54 "../../src/lalex.c"
free_toks = ( struct toknode * ) _auto__Xthis__dtor_toknode ; 

#line 55 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = 0 ; 

#line 56 "../../src/lalex.c"
if ( _auto__Xthis__dtor_toknode ) _delete ( ( int * ) _auto__Xthis__dtor_toknode ) ; 
} } 
#line 81 "../../src/lalex.c"
{ 
#line 81 "../../src/lalex.c"
{ _auto__result = tk ; 

#line 81 "../../src/lalex.c"
return _auto__result ; 
} } } ; 

#line 84 "../../src/lalex.c"
int scan_type ( ) ; 

#line 85 "../../src/lalex.c"
int scan_mod ( ) ; 

#line 86 "../../src/lalex.c"
int scan_tlist ( ) ; 

#line 87 "../../src/lalex.c"
int scan_suf ( ) ; 

#line 88 "../../src/lalex.c"
int get_tag ( ) ; 

#line 89 "../../src/lalex.c"
int scan_e ( ) ; 

#line 92 "../../src/lalex.c"
struct toknode * latok = 0 ; 

#line 94 "../../src/lalex.c"
; 

#line 101 "../../src/lalex.c"
; 

#line 108 "../../src/lalex.c"
; 

#line 114 "../../src/lalex.c"
int insert_tok ( _auto_t ) int _auto_t ; 

#line 115 "../../src/lalex.c"
{ 
#line 115 "../../src/lalex.c"
struct toknode * _auto_nt ; 

#line 116 "../../src/lalex.c"
_auto_nt = ( struct toknode * ) _toknode__ctor ( ( struct toknode * ) 0 , _auto_t , yylval ) 
#line 116 "../../src/lalex.c"
; 

#line 117 "../../src/lalex.c"
_auto_nt -> _toknode_last = latok -> _toknode_last ; 

#line 118 "../../src/lalex.c"
_auto_nt -> _toknode_last -> _toknode_next = _auto_nt ; 

#line 119 "../../src/lalex.c"
_auto_nt -> _toknode_next = latok ; 

#line 120 "../../src/lalex.c"
latok -> _toknode_last = _auto_nt ; 

#line 121 "../../src/lalex.c"
latok = _auto_nt ; 
} ; 

#line 124 "../../src/lalex.c"
int rep_cast ( ) 
#line 126 "../../src/lalex.c"
{ 
#line 126 "../../src/lalex.c"
struct toknode * _auto_tt ; 
struct toknode * _auto_junk ; 
struct toknode * _auto__Xthis__dtor_toknode ; 

#line 127 "../../src/lalex.c"
_auto_tt = front -> _toknode_next ; 

#line 128 "../../src/lalex.c"
_auto_junk = _auto_tt -> _toknode_next ; 

#line 129 "../../src/lalex.c"
if ( _auto_junk == latok ) { 
#line 129 "../../src/lalex.c"
return ; 
} 
#line 130 "../../src/lalex.c"
_auto_tt -> _toknode_tok = 97 ; 

#line 131 "../../src/lalex.c"
_auto_tt -> _toknode_retval . __C10_pt = ( struct type * ) any_type ; 

#line 132 "../../src/lalex.c"
_auto_tt -> _toknode_next = latok ; 

#line 133 "../../src/lalex.c"
latok -> _toknode_last -> _toknode_next = 0 ; 

#line 134 "../../src/lalex.c"
latok -> _toknode_last = _auto_tt ; 

#line 135 "../../src/lalex.c"
for ( _auto_tt = _auto_junk ;_auto_tt ;( _auto_tt = _auto_tt -> _toknode_next ) ) { 
#line 136 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = ( struct toknode * ) 
#line 136 "../../src/lalex.c"
_auto_tt ; 

#line 52 "../../src/lalex.c"
{ 
#line 52 "../../src/lalex.c"
_auto__Xthis__dtor_toknode -> _toknode_next = free_toks ; 

#line 54 "../../src/lalex.c"
free_toks = ( struct toknode * ) _auto__Xthis__dtor_toknode ; 

#line 55 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = 0 ; 

#line 56 "../../src/lalex.c"
if ( _auto__Xthis__dtor_toknode ) _delete ( ( int * ) _auto__Xthis__dtor_toknode ) ; 
} } } ; 

#line 144 "../../src/lalex.c"
int bad_cast = 0 ; 

#line 146 "../../src/lalex.c"
extern TOK lalex ( ) 
#line 147 "../../src/lalex.c"
{ 
#line 147 "../../src/lalex.c"
TOK _auto__result ; 

#line 148 "../../src/lalex.c"
static int _static_nocast = 0 ; 

#line 150 "../../src/lalex.c"
static int _static_incast = 0 ; 

#line 151 "../../src/lalex.c"
static int _static_in_enum ; 

#line 152 "../../src/lalex.c"
static int _static_fr ; 
char _auto_en ; 

#line 153 "../../src/lalex.c"
_auto_en = 0 ; 

#line 155 "../../src/lalex.c"
switch ( ( ( ( front == 0 ) ? tlex ( ) : 0 ) 
#line 155 "../../src/lalex.c"
, ( ( latok = front ) , latok -> _toknode_tok ) ) ) 
#line 155 "../../src/lalex.c"
{ 
#line 155 "../../src/lalex.c"
case 170 : case 
#line 155 "../../src/lalex.c"
171 : 
#line 158 "../../src/lalex.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "keyword%k (ignored)", latok -> _toknode_tok ) ; 
#line 158 "../../src/lalex.c"

#line 159 "../../src/lalex.c"
{ 
#line 159 "../../src/lalex.c"
{ _auto__result = lalex ( ) ; 

#line 159 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 160 "../../src/lalex.c"
case 13 : _auto_en = 1 ; 

#line 162 "../../src/lalex.c"
case 156 : switch ( tk ) { 
#line 163 "../../src/lalex.c"
case 0 : case 40 : case 71 : case 
#line 163 "../../src/lalex.c"
23 : 
#line 174 "../../src/lalex.c"
case 113 : case 41 : case 24 : case 10 : case 97 : case 69 : case 
#line 174 "../../src/lalex.c"
72 : 
#line 181 "../../src/lalex.c"
case 74 : case 73 : break ; 

#line 184 "../../src/lalex.c"
default : errorFPCloc__PC__E ( ( struct loc * ) ( & curloc ) , ( char * 
#line 184 "../../src/lalex.c"
) "';' missing afterS orD before\"%k\"", latok -> _toknode_tok ) ; 

#line 186 "../../src/lalex.c"
{ 
#line 186 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 186 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 189 "../../src/lalex.c"
{ 
#line 189 "../../src/lalex.c"
TOK _auto_t ; 
TOK _auto_x ; 

#line 189 "../../src/lalex.c"
_auto_t = ( ( ( latok == rear ) ? tlex ( ) : 0 ) , ( 
#line 189 "../../src/lalex.c"
( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ; 

#line 192 "../../src/lalex.c"
switch ( _auto_t ) { 
#line 192 "../../src/lalex.c"
case 123 : _auto_x = ( ( ( latok == rear ) ? tlex ( 
#line 192 "../../src/lalex.c"
) : 0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) 
#line 192 "../../src/lalex.c"
; 

#line 195 "../../src/lalex.c"
break ; 

#line 196 "../../src/lalex.c"
case 80 : _auto_x = ( ( ( latok == rear ) ? tlex ( ) : 0 ) 
#line 196 "../../src/lalex.c"
, ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ; 

#line 198 "../../src/lalex.c"
{ 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 109 "../../src/lalex.c"
* ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 200 "../../src/lalex.c"
switch ( _auto_x ) { 
#line 200 "../../src/lalex.c"
case 73 : _static_in_enum = _auto_en ; 

#line 203 "../../src/lalex.c"
case 69 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 205 "../../src/lalex.c"
_static_fr = 0 ; 

#line 206 "../../src/lalex.c"
goto ret ; 

#line 207 "../../src/lalex.c"
default : { 
#line 208 "../../src/lalex.c"
Pname _auto_n ; 

#line 208 "../../src/lalex.c"
_auto_n = _table_look ( ( struct table * ) ktbl , latok -> _toknode_retval . __C10_s , 159 ) ; 

#line 209 "../../src/lalex.c"
if ( _auto_n == 0 ) { 
#line 209 "../../src/lalex.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct 
#line 209 "../../src/lalex.c"
name * ) 0 , latok -> _toknode_retval . __C10_s ) ; 

#line 211 "../../src/lalex.c"
_auto_n -> _name_lex_level = 0 ; 

#line 212 "../../src/lalex.c"
_auto_n = _name_tname ( ( struct name * ) _auto_n , ( int ) latok -> _toknode_last -> _toknode_retval . __C10_t ) 
#line 212 "../../src/lalex.c"
; 

#line 213 "../../src/lalex.c"
modified_tn = modified_tn -> _name_list_l ; 
} else 
#line 215 "../../src/lalex.c"
{ 
#line 215 "../../src/lalex.c"
switch ( _auto_n -> _expr__O2.__C2_tp -> _node_base ) { 
#line 216 "../../src/lalex.c"
case 119 : case 121 : break 
#line 216 "../../src/lalex.c"
; 

#line 220 "../../src/lalex.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "hidden%n:%t", _auto_n , _auto_n -> 
#line 220 "../../src/lalex.c"
_expr__O2.__C2_tp ) ; 
} } 
#line 224 "../../src/lalex.c"
latok -> _toknode_tok = 123 ; 

#line 225 "../../src/lalex.c"
latok -> _toknode_retval . __C10_pn = _auto_n ; 
} } 
#line 228 "../../src/lalex.c"
( ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 228 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) ) ; 
#line 228 "../../src/lalex.c"

#line 229 "../../src/lalex.c"
break ; 

#line 230 "../../src/lalex.c"
case 73 : _static_in_enum = _auto_en ; 

#line 232 "../../src/lalex.c"
default : _static_fr = 0 ; 

#line 234 "../../src/lalex.c"
goto ret ; 
} 
#line 235 "../../src/lalex.c"
; 

#line 238 "../../src/lalex.c"
switch ( _auto_x ) { 
#line 238 "../../src/lalex.c"
case 73 : _static_in_enum = _auto_en ; 

#line 241 "../../src/lalex.c"
case 69 : _static_fr = 0 ; 

#line 243 "../../src/lalex.c"
goto ret ; 

#line 244 "../../src/lalex.c"
case 72 : if ( ( tk != 23 ) && ( _static_fr == 0 ) ) { 
#line 244 "../../src/lalex.c"

#line 245 "../../src/lalex.c"

#line 246 "../../src/lalex.c"
deltok ( ) ; 

#line 247 "../../src/lalex.c"
deltok ( ) ; 

#line 248 "../../src/lalex.c"
deltok ( ) ; 

#line 249 "../../src/lalex.c"
{ 
#line 249 "../../src/lalex.c"
{ _auto__result = lalex ( ) ; 

#line 249 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 252 "../../src/lalex.c"
default : deltok ( ) ; 

#line 254 "../../src/lalex.c"
_static_fr = 0 ; 

#line 255 "../../src/lalex.c"
goto ret ; 
} } 
#line 259 "../../src/lalex.c"
case 40 : _static_fr = 0 ; 

#line 262 "../../src/lalex.c"
if ( _static_nocast ) { 
#line 262 "../../src/lalex.c"
_static_nocast = 0 ; 

#line 264 "../../src/lalex.c"
goto ret ; 
} else 
#line 268 "../../src/lalex.c"
if ( _static_incast ) goto ret ; 

#line 271 "../../src/lalex.c"
bad_cast = 0 ; 

#line 272 "../../src/lalex.c"
if ( scan_type ( ) ) { 
#line 272 "../../src/lalex.c"
if ( scan_mod ( ) ) { 
#line 273 "../../src/lalex.c"
if ( 
#line 273 "../../src/lalex.c"
( ( ( latok == rear ) ? tlex ( ) : 0 ) , ( ( 
#line 273 "../../src/lalex.c"
latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 274 "../../src/lalex.c"
goto ret ; 

#line 275 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( ) : 0 ) , 
#line 275 "../../src/lalex.c"
( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 275 "../../src/lalex.c"
{ 
#line 275 "../../src/lalex.c"
case 71 : case 
#line 275 "../../src/lalex.c"
41 : 
#line 276 "../../src/lalex.c"
case 72 : case 73 : case 70 : if ( tk != 30 ) goto ret ; 

#line 279 "../../src/lalex.c"
break ; 

#line 281 "../../src/lalex.c"
case 54 : case 55 : case 50 : case 52 : case 23 : case 9 : case 30 : 
#line 281 "../../src/lalex.c"

#line 282 "../../src/lalex.c"
case 160 : case 46 : case 47 : case 95 : case 40 : case 113 : case 80 : 
#line 282 "../../src/lalex.c"

#line 285 "../../src/lalex.c"
case 97 : case 123 : case 34 : case 24 : case 86 : case 82 : case 83 : 
#line 285 "../../src/lalex.c"

#line 287 "../../src/lalex.c"
case 84 : case 81 : break ; 

#line 290 "../../src/lalex.c"
default : if ( bad_cast ) goto ret ; 
else 
#line 295 "../../src/lalex.c"
break ; 
} 
#line 297 "../../src/lalex.c"
{ 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , ( 
#line 109 "../../src/lalex.c"
char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 298 "../../src/lalex.c"
front -> _toknode_tok = 113 ; 

#line 299 "../../src/lalex.c"
latok -> _toknode_tok = 122 ; 

#line 300 "../../src/lalex.c"
if ( bad_cast ) { 
#line 300 "../../src/lalex.c"
errorFPC__E ( ( char * ) "can't cast to function") ; 

#line 302 "../../src/lalex.c"
rep_cast ( ) ; 
} 
#line 304 "../../src/lalex.c"
_static_incast = 1 ; 
} } 
#line 307 "../../src/lalex.c"
goto ret ; 

#line 308 "../../src/lalex.c"
case 113 : _static_incast ++ ; 

#line 310 "../../src/lalex.c"
goto ret ; 

#line 311 "../../src/lalex.c"
case 122 : if ( ( -- _static_incast ) == 0 ) _static_nocast = 0 ; 

#line 313 "../../src/lalex.c"
goto ret ; 

#line 314 "../../src/lalex.c"
case 80 : { 
#line 315 "../../src/lalex.c"
char * _auto_s ; 

#line 315 "../../src/lalex.c"
_auto_s = front -> _toknode_retval . __C10_s ; 

#line 317 "../../src/lalex.c"
_static_fr = 0 ; 

#line 318 "../../src/lalex.c"
_static_nocast = 1 ; 

#line 319 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( ) : 0 ) , 
#line 319 "../../src/lalex.c"
( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 319 "../../src/lalex.c"
{ 
#line 319 "../../src/lalex.c"
case 80 : { 
#line 319 "../../src/lalex.c"

#line 321 "../../src/lalex.c"
char * _auto_s2 ; 

#line 323 "../../src/lalex.c"
_auto_s2 = latok -> _toknode_retval . __C10_s ; 

#line 324 "../../src/lalex.c"
{ 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 109 "../../src/lalex.c"
* ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 325 "../../src/lalex.c"
{ 
#line 325 "../../src/lalex.c"
Pname _auto_n ; 

#line 325 "../../src/lalex.c"
_auto_n = _table_look ( ( struct table * ) ktbl , _auto_s , 159 ) ; 

#line 326 "../../src/lalex.c"
if ( _auto_n == 0 ) { 
#line 326 "../../src/lalex.c"
errorFPC__E ( ( char * ) "%s %s:TX (%s is not a TN)", _auto_s , _auto_s2 , 
#line 326 "../../src/lalex.c"
_auto_s ) ; 

#line 328 "../../src/lalex.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 328 "../../src/lalex.c"

#line 329 "../../src/lalex.c"
_auto_n -> _name_lex_level = 0 ; 

#line 330 "../../src/lalex.c"
_auto_n = _name_tname ( ( struct name * ) _auto_n , ( int ) 0 ) ; 

#line 331 "../../src/lalex.c"
modified_tn = modified_tn -> _name_list_l ; 

#line 332 "../../src/lalex.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} else 
#line 334 "../../src/lalex.c"
{ 
#line 334 "../../src/lalex.c"
errorFPC__E ( ( char * ) "%s %s: %s is hidden", _auto_s , _auto_s2 , _auto_s ) ; 
} 
#line 337 "../../src/lalex.c"
latok -> _toknode_tok = 123 ; 

#line 338 "../../src/lalex.c"
latok -> _toknode_retval . __C10_pn = _auto_n ; 

#line 339 "../../src/lalex.c"
break ; 
} } 
#line 341 "../../src/lalex.c"
case 73 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int 
#line 109 "../../src/lalex.c"
) 'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 343 "../../src/lalex.c"
front -> _toknode_retval . __C10_pn = ( struct name * ) _name__ctor ( ( struct name * ) 0 
#line 343 "../../src/lalex.c"
, _auto_s ) ; 

#line 344 "../../src/lalex.c"
front -> _toknode_retval . __C10_pn -> _name_lex_level -- ; 

#line 345 "../../src/lalex.c"
break ; 

#line 346 "../../src/lalex.c"
default : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 348 "../../src/lalex.c"
front -> _toknode_retval . __C10_pn = ( struct name * ) _name__ctor ( ( struct name * ) 0 
#line 348 "../../src/lalex.c"
, _auto_s ) ; 
} 
#line 350 "../../src/lalex.c"
goto ret ; 
} 
#line 352 "../../src/lalex.c"
case 4 : case 8 : case 25 : case 12 : _static_fr = 0 ; 

#line 357 "../../src/lalex.c"
switch ( tk ) { 
#line 357 "../../src/lalex.c"
case 69 : case 72 : case 74 : case 73 : goto ret ; 
#line 357 "../../src/lalex.c"

#line 363 "../../src/lalex.c"
default : errorFPCloc__PC__E ( ( struct loc * ) ( & curloc ) , ( char * 
#line 363 "../../src/lalex.c"
) "';' missing afterS orD before\"%k\"", latok -> _toknode_tok ) ; 

#line 365 "../../src/lalex.c"
{ 
#line 365 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 365 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 367 "../../src/lalex.c"
case 10 : case 19 : case 7 : case 3 : case 28 : _static_fr = 
#line 367 "../../src/lalex.c"
0 ; 

#line 373 "../../src/lalex.c"
switch ( tk ) { 
#line 373 "../../src/lalex.c"
case 12 : case 10 : case 69 : case 41 : case 72 : 
#line 373 "../../src/lalex.c"

#line 379 "../../src/lalex.c"
case 74 : case 73 : goto ret ; 

#line 382 "../../src/lalex.c"
default : errorFPCloc__PC__E ( ( struct loc * ) ( & curloc ) , ( char * 
#line 382 "../../src/lalex.c"
) "';' missing afterS orD before\"%k\"", latok -> _toknode_tok ) ; 

#line 384 "../../src/lalex.c"
{ 
#line 384 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 384 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 386 "../../src/lalex.c"
case 20 : case 39 : case 16 : case 33 : _static_fr = 0 ; 
#line 386 "../../src/lalex.c"

#line 391 "../../src/lalex.c"
switch ( tk ) { 
#line 391 "../../src/lalex.c"
case 12 : case 10 : case 69 : case 41 : case 72 : 
#line 391 "../../src/lalex.c"

#line 397 "../../src/lalex.c"
case 74 : case 73 : _static_nocast = 1 ; 

#line 400 "../../src/lalex.c"
goto ret ; 

#line 401 "../../src/lalex.c"
default : errorFPCloc__PC__E ( ( struct loc * ) ( & curloc ) , ( char * 
#line 401 "../../src/lalex.c"
) "';' missing afterS orD before\"%k\"", latok -> _toknode_tok ) ; 

#line 403 "../../src/lalex.c"
{ 
#line 403 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 403 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 405 "../../src/lalex.c"
case 97 : _static_fr = 0 ; 

#line 408 "../../src/lalex.c"
switch ( tk ) { 
#line 408 "../../src/lalex.c"
case 80 : case 43 : errorFPCloc__PC__E ( ( struct loc * ) ( 
#line 408 "../../src/lalex.c"
& curloc ) , ( char * ) "';' missing afterS orD before\"%k\"", latok -> _toknode_tok ) ; 

#line 413 "../../src/lalex.c"
{ 
#line 413 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 413 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 415 "../../src/lalex.c"
if ( latok -> _toknode_retval . __C10_t == 18 ) _static_fr = 1 ; 

#line 416 "../../src/lalex.c"
_static_nocast = 1 ; 

#line 417 "../../src/lalex.c"
goto ret ; 

#line 418 "../../src/lalex.c"
case 123 : { 
#line 419 "../../src/lalex.c"
Pname _auto_n ; 

#line 419 "../../src/lalex.c"
_auto_n = latok -> _toknode_retval . __C10_pn ; 

#line 420 "../../src/lalex.c"
if ( _static_fr ) { 
#line 420 "../../src/lalex.c"
_static_nocast = 1 ; 

#line 422 "../../src/lalex.c"
_static_fr = 0 ; 

#line 423 "../../src/lalex.c"
goto ret ; 
} 
#line 425 "../../src/lalex.c"
_static_fr = 0 ; 

#line 427 "../../src/lalex.c"
switch ( tk ) { 
#line 427 "../../src/lalex.c"
case 97 : switch ( ( ( ( latok == rear ) ? 
#line 427 "../../src/lalex.c"
tlex ( ) : 0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) 
#line 427 "../../src/lalex.c"
) ) 
#line 430 "../../src/lalex.c"
{ 
#line 430 "../../src/lalex.c"
case 72 : case 43 : case 69 : case 70 : goto hid ; 

#line 437 "../../src/lalex.c"
default : _static_nocast = 1 ; 

#line 439 "../../src/lalex.c"
goto ret ; 
} 
#line 441 "../../src/lalex.c"
case 123 : switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 441 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 442 "../../src/lalex.c"
{ 
#line 442 "../../src/lalex.c"

#line 442 "../../src/lalex.c"

#line 443 "../../src/lalex.c"
case 160 : case 45 : _static_nocast = 1 ; 

#line 446 "../../src/lalex.c"
goto ret ; 
} 
#line 448 "../../src/lalex.c"
hid : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 450 "../../src/lalex.c"
_name_hide ( ( struct name * ) _auto_n ) ; 

#line 451 "../../src/lalex.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_n -> _expr__O3.__C3_string ) 
#line 451 "../../src/lalex.c"
; 

#line 452 "../../src/lalex.c"
_auto_n -> _name_n_oper = 123 ; 

#line 453 "../../src/lalex.c"
latok -> _toknode_tok = 80 ; 

#line 454 "../../src/lalex.c"
latok -> _toknode_retval . __C10_pn = _auto_n ; 
} } 
#line 457 "../../src/lalex.c"
case 23 : _static_fr = 0 ; 

#line 459 "../../src/lalex.c"
_static_nocast = 1 ; 

#line 460 "../../src/lalex.c"
goto ret ; 

#line 480 "../../src/lalex.c"
case 74 : _static_fr = 0 ; 

#line 483 "../../src/lalex.c"
switch ( tk ) { 
#line 483 "../../src/lalex.c"
case 74 : case 73 : case 72 : break ; 

#line 488 "../../src/lalex.c"
default : { 
#line 489 "../../src/lalex.c"
TOK _auto_t ; 
struct loc _auto_x ; 

#line 490 "../../src/lalex.c"
_auto_x = curloc ; 

#line 491 "../../src/lalex.c"
switch ( _auto_t = ( ( ( latok == rear ) ? tlex ( ) : 0 ) 
#line 491 "../../src/lalex.c"
, ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 491 "../../src/lalex.c"
{ 
#line 491 "../../src/lalex.c"
case 12 : 
#line 491 "../../src/lalex.c"

#line 493 "../../src/lalex.c"
case 74 : case 71 : case 72 : case 41 : break ; 

#line 498 "../../src/lalex.c"
default : if ( _static_in_enum == 0 ) { 
#line 502 "../../src/lalex.c"
errorFPCloc__PC__E ( ( struct loc * ) ( 
#line 502 "../../src/lalex.c"
& _auto_x ) , ( char * ) "';'X at end ofS orD before '}'") ; 

#line 504 "../../src/lalex.c"
{ 
#line 504 "../../src/lalex.c"
{ _auto__result = ( tk = 72 ) ; 

#line 504 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 506 "../../src/lalex.c"
_static_in_enum = 0 ; 
} } } 
#line 510 "../../src/lalex.c"
_static_in_enum = 0 ; 

#line 511 "../../src/lalex.c"
default : _static_fr = 0 ; 

#line 513 "../../src/lalex.c"
_static_nocast = 0 ; 

#line 514 "../../src/lalex.c"
goto ret ; 
} 
#line 516 "../../src/lalex.c"
ret : { 
#line 520 "../../src/lalex.c"
struct toknode * _auto_T ; 
struct toknode * _auto__Xthis__dtor_toknode ; 

#line 520 "../../src/lalex.c"
_auto_T = front ; 

#line 521 "../../src/lalex.c"
tk = _auto_T -> _toknode_tok ; 

#line 522 "../../src/lalex.c"
yylval = _auto_T -> _toknode_retval ; 

#line 523 "../../src/lalex.c"
if ( front = front -> _toknode_next ) front -> _toknode_last = 0 ; 

#line 524 "../../src/lalex.c"
{ 
#line 529 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = ( struct toknode * ) _auto_T ; 

#line 52 "../../src/lalex.c"
{ 
#line 52 "../../src/lalex.c"
_auto__Xthis__dtor_toknode -> _toknode_next = free_toks ; 

#line 54 "../../src/lalex.c"
free_toks = ( struct toknode * ) _auto__Xthis__dtor_toknode ; 

#line 55 "../../src/lalex.c"
_auto__Xthis__dtor_toknode = 0 ; 

#line 56 "../../src/lalex.c"
if ( _auto__Xthis__dtor_toknode ) _delete ( ( int * ) _auto__Xthis__dtor_toknode ) ; 
} } 
#line 526 "../../src/lalex.c"
{ 
#line 526 "../../src/lalex.c"
{ _auto__result = tk ; 

#line 526 "../../src/lalex.c"
return _auto__result ; 
} } } } ; 

#line 532 "../../src/lalex.c"
extern int scan_type ( ) 
#line 533 "../../src/lalex.c"
{ 
#line 533 "../../src/lalex.c"
int _auto__result ; 
int _auto_is_type ; 

#line 534 "../../src/lalex.c"
_auto_is_type = 0 ; 

#line 535 "../../src/lalex.c"
for ( ;;) switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 535 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 536 "../../src/lalex.c"
{ 
#line 536 "../../src/lalex.c"

#line 536 "../../src/lalex.c"

#line 537 "../../src/lalex.c"
case 156 : case 13 : get_tag ( ) ; 

#line 540 "../../src/lalex.c"
case 97 : case 123 : _auto_is_type = 1 ; 

#line 543 "../../src/lalex.c"
continue ; 

#line 544 "../../src/lalex.c"
default : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 546 "../../src/lalex.c"
{ 
#line 546 "../../src/lalex.c"
{ _auto__result = _auto_is_type ; 

#line 546 "../../src/lalex.c"
return _auto__result ; 
} } } } ; 

#line 551 "../../src/lalex.c"
extern int scan_mod ( ) 
#line 558 "../../src/lalex.c"
{ 
#line 558 "../../src/lalex.c"
int _auto__result ; 

#line 559 "../../src/lalex.c"
for ( ;;) switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 559 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 560 "../../src/lalex.c"
{ 
#line 560 "../../src/lalex.c"

#line 560 "../../src/lalex.c"

#line 561 "../../src/lalex.c"
case 52 : case 50 : continue ; 

#line 564 "../../src/lalex.c"
case 40 : switch ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 564 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 565 "../../src/lalex.c"
{ 
#line 565 "../../src/lalex.c"
case 
#line 565 "../../src/lalex.c"
52 : 
#line 567 "../../src/lalex.c"
case 50 : case 40 : case 42 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) 
#line 109 "../../src/lalex.c"

#line 110 "../../src/lalex.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 571 "../../src/lalex.c"
if ( ! scan_mod ( ) ) { 
#line 571 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 571 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 572 "../../src/lalex.c"
if ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 572 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 572 "../../src/lalex.c"
{ 
#line 572 "../../src/lalex.c"

#line 572 "../../src/lalex.c"

#line 572 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 572 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 573 "../../src/lalex.c"
if ( ! scan_suf ( ) ) { 
#line 573 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 573 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 574 "../../src/lalex.c"
{ 
#line 574 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 574 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 575 "../../src/lalex.c"
case 156 : case 13 : case 97 : case 123 : { 
#line 109 "../../src/lalex.c"
if ( latok -> 
#line 109 "../../src/lalex.c"
_toknode_last == 0 ) 
#line 110 "../../src/lalex.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "token q backup") ; 
#line 110 "../../src/lalex.c"

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 577 "../../src/lalex.c"
if ( ! scan_tlist ( ) ) { 
#line 577 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 577 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 578 "../../src/lalex.c"
if ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 578 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 578 "../../src/lalex.c"
{ 
#line 578 "../../src/lalex.c"

#line 578 "../../src/lalex.c"

#line 578 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 578 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 580 "../../src/lalex.c"
case 41 : bad_cast = 1 ; 

#line 582 "../../src/lalex.c"
if ( ! scan_suf ( ) ) { 
#line 582 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 582 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 583 "../../src/lalex.c"
{ 
#line 583 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 583 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 584 "../../src/lalex.c"
default : { 
#line 585 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 585 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 587 "../../src/lalex.c"
case 42 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( 
#line 109 "../../src/lalex.c"
int ) 'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 589 "../../src/lalex.c"
if ( ! scan_suf ( ) ) { 
#line 589 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 589 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 590 "../../src/lalex.c"
{ 
#line 590 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 590 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 591 "../../src/lalex.c"
case 41 : case 71 : case 155 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 
#line 109 "../../src/lalex.c"
) 
#line 110 "../../src/lalex.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 595 "../../src/lalex.c"
{ 
#line 595 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 595 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 596 "../../src/lalex.c"
default : { 
#line 597 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 597 "../../src/lalex.c"
return _auto__result ; 
} } } } ; 

#line 602 "../../src/lalex.c"
extern int scan_suf ( ) 
#line 608 "../../src/lalex.c"
{ 
#line 608 "../../src/lalex.c"
int _auto__result ; 
int _auto_found ; 

#line 609 "../../src/lalex.c"
_auto_found = 0 ; 

#line 610 "../../src/lalex.c"
for ( ;;) switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 610 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 611 "../../src/lalex.c"
{ 
#line 611 "../../src/lalex.c"

#line 611 "../../src/lalex.c"

#line 612 "../../src/lalex.c"
case 42 : scan_e ( ) ; 

#line 614 "../../src/lalex.c"
_auto_found = 1 ; 

#line 615 "../../src/lalex.c"
continue ; 

#line 616 "../../src/lalex.c"
case 40 : if ( ! scan_tlist ( ) ) { 
#line 617 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 617 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 618 "../../src/lalex.c"
if ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 618 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 618 "../../src/lalex.c"
{ 
#line 618 "../../src/lalex.c"

#line 618 "../../src/lalex.c"

#line 618 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 618 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 619 "../../src/lalex.c"
if ( _auto_found ) { 
#line 619 "../../src/lalex.c"
bad_cast = 1 ; 
} else 
#line 621 "../../src/lalex.c"
_auto_found = 1 ; 

#line 622 "../../src/lalex.c"
continue ; 

#line 623 "../../src/lalex.c"
default : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 625 "../../src/lalex.c"
{ 
#line 625 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 625 "../../src/lalex.c"
return _auto__result ; 
} } } } ; 

#line 630 "../../src/lalex.c"
extern int scan_tlist ( ) 
#line 635 "../../src/lalex.c"
{ 
#line 635 "../../src/lalex.c"
int _auto__result ; 

#line 636 "../../src/lalex.c"
for ( ;;) { 
#line 636 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( ) 
#line 636 "../../src/lalex.c"
: 0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 636 "../../src/lalex.c"

#line 637 "../../src/lalex.c"
{ 
#line 637 "../../src/lalex.c"
case 156 : case 13 : get_tag ( ) ; 

#line 641 "../../src/lalex.c"
case 97 : case 123 : scan_type ( ) ; 

#line 644 "../../src/lalex.c"
break ; 

#line 645 "../../src/lalex.c"
case 155 : if ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 645 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 646 "../../src/lalex.c"
{ 
#line 646 "../../src/lalex.c"

#line 646 "../../src/lalex.c"

#line 647 "../../src/lalex.c"
errorFPC__E ( ( char * ) "missing ')' after '...'") ; 

#line 648 "../../src/lalex.c"
insert_tok ( 41 ) ; 
} 
#line 650 "../../src/lalex.c"
case 41 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 
#line 109 "../../src/lalex.c"
'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 652 "../../src/lalex.c"
{ 
#line 652 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 652 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 653 "../../src/lalex.c"
default : { 
#line 654 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 654 "../../src/lalex.c"
return _auto__result ; 
} } } 
#line 658 "../../src/lalex.c"
if ( ! scan_mod ( ) ) { 
#line 658 "../../src/lalex.c"
{ _auto__result = 0 ; 
#line 658 "../../src/lalex.c"

#line 658 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 660 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 660 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 660 "../../src/lalex.c"
{ 
#line 660 "../../src/lalex.c"
case 
#line 660 "../../src/lalex.c"
71 : 
#line 662 "../../src/lalex.c"
continue ; 

#line 663 "../../src/lalex.c"
case 155 : if ( ( ( ( latok == rear ) ? tlex ( ) : 0 
#line 663 "../../src/lalex.c"
) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) != 41 ) 
#line 664 "../../src/lalex.c"
{ 
#line 664 "../../src/lalex.c"

#line 664 "../../src/lalex.c"

#line 665 "../../src/lalex.c"
errorFPC__E ( ( char * ) "missing ')' after '...'") ; 

#line 666 "../../src/lalex.c"
insert_tok ( 41 ) ; 
} 
#line 668 "../../src/lalex.c"
case 41 : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 
#line 109 "../../src/lalex.c"
'i' , ( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 670 "../../src/lalex.c"
{ 
#line 670 "../../src/lalex.c"
{ _auto__result = 1 ; 

#line 670 "../../src/lalex.c"
return _auto__result ; 
} } 
#line 671 "../../src/lalex.c"
default : { 
#line 672 "../../src/lalex.c"
{ _auto__result = 0 ; 

#line 672 "../../src/lalex.c"
return _auto__result ; 
} } } } } ; 

#line 677 "../../src/lalex.c"
extern int get_tag ( ) 
#line 679 "../../src/lalex.c"
{ 
#line 679 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( 
#line 679 "../../src/lalex.c"
) : 0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) 
#line 679 "../../src/lalex.c"
) 
#line 680 "../../src/lalex.c"
{ 
#line 680 "../../src/lalex.c"
default : errorFI_PC__E ( ( int ) 'e' , ( char * ) "missing tag") 
#line 680 "../../src/lalex.c"
; 

#line 683 "../../src/lalex.c"
insert_tok ( 80 ) ; 

#line 684 "../../src/lalex.c"
latok -> _toknode_retval . __C10_s = "__MISSING__"; 

#line 685 "../../src/lalex.c"
case 80 : { 
#line 686 "../../src/lalex.c"
Pname _auto_n ; 

#line 687 "../../src/lalex.c"
_auto_n = _table_look ( ( struct table * ) ktbl , latok -> _toknode_retval . __C10_s , 159 ) ; 

#line 688 "../../src/lalex.c"
if ( _auto_n == 0 ) { 
#line 688 "../../src/lalex.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct 
#line 688 "../../src/lalex.c"
name * ) 0 , latok -> _toknode_retval . __C10_s ) ; 

#line 690 "../../src/lalex.c"
_auto_n -> _name_lex_level = 0 ; 

#line 691 "../../src/lalex.c"
_auto_n = _name_tname ( ( struct name * ) _auto_n , ( int ) latok -> _toknode_last -> _toknode_retval . __C10_t ) 
#line 691 "../../src/lalex.c"
; 

#line 692 "../../src/lalex.c"
modified_tn = modified_tn -> _name_list_l ; 
} else 
#line 694 "../../src/lalex.c"
{ 
#line 694 "../../src/lalex.c"
switch ( _auto_n -> _expr__O2.__C2_tp -> _node_base ) { 
#line 695 "../../src/lalex.c"
case 119 : case 121 : break 
#line 695 "../../src/lalex.c"
; 

#line 699 "../../src/lalex.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "hidden%n:%t", _auto_n , _auto_n -> 
#line 699 "../../src/lalex.c"
_expr__O2.__C2_tp ) ; 
} } 
#line 703 "../../src/lalex.c"
latok -> _toknode_tok = 123 ; 

#line 704 "../../src/lalex.c"
latok -> _toknode_retval . __C10_pn = _auto_n ; 

#line 705 "../../src/lalex.c"
break ; 
} 
#line 707 "../../src/lalex.c"
case 123 : break ; 
} 
#line 711 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) ? tlex ( ) : 0 ) 
#line 711 "../../src/lalex.c"
, ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 711 "../../src/lalex.c"
{ 
#line 711 "../../src/lalex.c"
default : 
#line 711 "../../src/lalex.c"

#line 713 "../../src/lalex.c"
{ 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 109 "../../src/lalex.c"
* ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 713 "../../src/lalex.c"
{ 
#line 713 "../../src/lalex.c"
return ; 
} 
#line 714 "../../src/lalex.c"
case 69 : switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 714 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 715 "../../src/lalex.c"
{ 
#line 715 "../../src/lalex.c"

#line 715 "../../src/lalex.c"

#line 716 "../../src/lalex.c"
case 80 : case 123 : case 73 : break ; 

#line 718 "../../src/lalex.c"
default : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 719 "../../src/lalex.c"
{ 
#line 719 "../../src/lalex.c"
return ; 
} } 
#line 721 "../../src/lalex.c"
case 73 : { 
#line 721 "../../src/lalex.c"
int _auto_level ; 

#line 721 "../../src/lalex.c"
_auto_level = 1 ; 

#line 722 "../../src/lalex.c"
for ( ;;) switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 722 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 722 "../../src/lalex.c"
{ 
#line 722 "../../src/lalex.c"

#line 722 "../../src/lalex.c"

#line 723 "../../src/lalex.c"
case 73 : _auto_level ++ ; 

#line 723 "../../src/lalex.c"
break ; 

#line 724 "../../src/lalex.c"
case 74 : if ( ( -- _auto_level ) == 0 ) { 
#line 724 "../../src/lalex.c"
return ; 
} 
#line 725 "../../src/lalex.c"
break ; 

#line 726 "../../src/lalex.c"
case 0 : errorFI_PC__E ( ( int ) 'i' , ( char * ) "unexpected eof") ; 
#line 726 "../../src/lalex.c"
} } } } ; 

#line 733 "../../src/lalex.c"
extern int scan_e ( ) 
#line 735 "../../src/lalex.c"
{ 
#line 735 "../../src/lalex.c"
long _auto_brcount ; 
int _auto_localcast ; 

#line 736 "../../src/lalex.c"
_auto_brcount = 1L ; 

#line 737 "../../src/lalex.c"
_auto_localcast = 0 ; 

#line 738 "../../src/lalex.c"
for ( ;;) switch ( ( ( ( latok == rear ) ? tlex ( ) : 
#line 738 "../../src/lalex.c"
0 ) , ( ( latok = latok -> _toknode_next ) , latok -> _toknode_tok ) ) ) 
#line 739 "../../src/lalex.c"
{ 
#line 739 "../../src/lalex.c"

#line 739 "../../src/lalex.c"

#line 740 "../../src/lalex.c"
case 43 : if ( ( -- _auto_brcount ) == 0L ) { 
#line 741 "../../src/lalex.c"
return ; 
} 
#line 742 "../../src/lalex.c"
continue ; 

#line 743 "../../src/lalex.c"
case 42 : _auto_brcount ++ ; 

#line 745 "../../src/lalex.c"
continue ; 

#line 746 "../../src/lalex.c"
case 40 : if ( _auto_localcast ) continue ; 

#line 749 "../../src/lalex.c"
{ 
#line 749 "../../src/lalex.c"
struct toknode * _auto_mark ; 

#line 749 "../../src/lalex.c"
_auto_mark = latok ; 

#line 750 "../../src/lalex.c"
if ( scan_type ( ) ) if ( scan_mod ( ) ) if ( ( ( 
#line 750 "../../src/lalex.c"
( latok == rear ) ? tlex ( ) : 0 ) , ( ( latok = latok -> 
#line 750 "../../src/lalex.c"
_toknode_next ) , latok -> _toknode_tok ) ) == 41 ) 
#line 753 "../../src/lalex.c"
switch ( ( ( ( latok == rear ) 
#line 753 "../../src/lalex.c"
? tlex ( ) : 0 ) , ( ( latok = latok -> _toknode_next ) , latok -> 
#line 753 "../../src/lalex.c"
_toknode_tok ) ) ) 
#line 753 "../../src/lalex.c"
{ 
#line 753 "../../src/lalex.c"
case 71 : case 41 : case 72 : case 73 : case 70 : 
#line 753 "../../src/lalex.c"

#line 759 "../../src/lalex.c"
break ; 

#line 760 "../../src/lalex.c"
default : { 
#line 109 "../../src/lalex.c"
if ( latok -> _toknode_last == 0 ) errorFI_PC__E ( ( int ) 'i' , 
#line 109 "../../src/lalex.c"
( char * ) "token q backup") ; 

#line 111 "../../src/lalex.c"
latok = latok -> _toknode_last ; 
} 
#line 762 "../../src/lalex.c"
_auto_mark -> _toknode_tok = 113 ; 

#line 763 "../../src/lalex.c"
latok -> _toknode_tok = 122 ; 
} 
#line 765 "../../src/lalex.c"
continue ; 

#line 766 "../../src/lalex.c"
case 113 : _auto_localcast ++ ; 

#line 772 "../../src/lalex.c"
continue ; 

#line 773 "../../src/lalex.c"
case 122 : _auto_localcast -- ; 

#line 775 "../../src/lalex.c"
continue ; 

#line 776 "../../src/lalex.c"
default : continue ; 
} } } ; 

/* the end */
