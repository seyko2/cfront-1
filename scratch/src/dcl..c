#line 1 "../../src/dcl.c"

/* <<cfront 10/10/85>> */
/* < ../../src/dcl.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/dcl.c"
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

#line 28 "../../src/dcl.c"
struct dcl_context ccvec [ 20] ; 

#line 28 "../../src/dcl.c"
struct dcl_context * cc = ( struct dcl_context * ) ccvec ; 

#line 29 "../../src/dcl.c"
int byte_offset = 0 ; 

#line 30 "../../src/dcl.c"
int bit_offset = 0 ; 

#line 31 "../../src/dcl.c"
int max_align = 0 ; 

#line 32 "../../src/dcl.c"
int stack_size = 0 ; 

#line 33 "../../src/dcl.c"
int enum_count = 0 ; 

#line 34 "../../src/dcl.c"
int friend_in_class = 0 ; 

#line 36 "../../src/dcl.c"
int _name_check_oper ( _auto_this , _auto_cn ) register struct name * _auto_this ; 
struct name * _auto_cn ; 

#line 40 "../../src/dcl.c"
{ 
#line 40 "../../src/dcl.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 41 "../../src/dcl.c"
case 109 : if ( _auto_cn == 0 ) errorFPC__E ( 
#line 41 "../../src/dcl.c"
( char * ) "operator() must be aM") ; 

#line 44 "../../src/dcl.c"
break ; 

#line 45 "../../src/dcl.c"
case 111 : if ( _auto_cn == 0 ) errorFPC__E ( ( char * ) "operator[] must be aM") ; 
#line 45 "../../src/dcl.c"

#line 47 "../../src/dcl.c"
break ; 

#line 48 "../../src/dcl.c"
case 0 : case 123 : if ( _auto_cn && ( strcmp ( _auto_cn -> _expr__O3.__C3_string , _auto_this -> _expr__O3.__C3_string ) 
#line 48 "../../src/dcl.c"
== 0 ) ) 
#line 50 "../../src/dcl.c"
{ 
#line 50 "../../src/dcl.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 51 "../../src/dcl.c"
Pfct _auto_f ; 

#line 52 "../../src/dcl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 53 "../../src/dcl.c"
if ( ( _auto_f -> _fct_returns != ( struct type * ) defa_type ) && ( fct_void == 0 
#line 53 "../../src/dcl.c"
) ) 
#line 54 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%s::%s() with returnT", _auto_this -> _expr__O3.__C3_string , _auto_this -> _expr__O3.__C3_string ) ; 

#line 55 "../../src/dcl.c"
_auto_f -> _fct_returns = ( struct type * ) void_type ; 

#line 56 "../../src/dcl.c"
_auto_this -> _expr__O3.__C3_string = "_ctor"; 

#line 57 "../../src/dcl.c"
_auto_this -> _name_n_oper = 161 ; 
} else 
#line 60 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "struct%cnM%n", _auto_cn , _auto_cn ) 
#line 60 "../../src/dcl.c"
; 
} else 
#line 63 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 

#line 64 "../../src/dcl.c"
break ; 

#line 65 "../../src/dcl.c"
case 162 : if ( _auto_cn == 0 ) { 
#line 66 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 

#line 68 "../../src/dcl.c"
errorFPC__E ( ( char * ) "destructor ~%s() not inC", _auto_this -> _expr__O3.__C3_string ) ; 
} else 
#line 70 "../../src/dcl.c"
if ( strcmp ( _auto_cn -> _expr__O3.__C3_string , _auto_this -> _expr__O3.__C3_string ) == 0 ) { 
#line 70 "../../src/dcl.c"
Pfct _auto_f ; 
#line 70 "../../src/dcl.c"

#line 71 "../../src/dcl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 72 "../../src/dcl.c"
_auto_this -> _expr__O3.__C3_string = "_dtor"; 

#line 73 "../../src/dcl.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _node_base != 108 ) { 
#line 73 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%s::~%s notF", _auto_cn -> 
#line 73 "../../src/dcl.c"
_expr__O3.__C3_string , _auto_cn -> _expr__O3.__C3_string ) ; 

#line 75 "../../src/dcl.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 75 "../../src/dcl.c"
struct type * ) void_type , ( struct name * ) 0 , 1 ) ; 
} else 
#line 77 "../../src/dcl.c"
if ( ( _auto_f -> _fct_returns != ( struct type * ) defa_type ) && ( 
#line 77 "../../src/dcl.c"
fct_void == 0 ) ) 
#line 78 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%s::~%s() with returnT", _auto_cn -> _expr__O3.__C3_string , _auto_cn -> _expr__O3.__C3_string ) 
#line 78 "../../src/dcl.c"
; 

#line 79 "../../src/dcl.c"
if ( _auto_f -> _fct_argtype ) { 
#line 79 "../../src/dcl.c"
if ( fct_void == 0 ) errorFPC__E ( ( char * 
#line 79 "../../src/dcl.c"
) "%s::~%s() withAs", _auto_cn -> _expr__O3.__C3_string , _auto_cn -> _expr__O3.__C3_string ) ; 

#line 81 "../../src/dcl.c"
_auto_f -> _fct_nargs = 0 ; 

#line 82 "../../src/dcl.c"
_auto_f -> _fct_nargs_known = 1 ; 

#line 83 "../../src/dcl.c"
_auto_f -> _fct_argtype = 0 ; 
} 
#line 85 "../../src/dcl.c"
_auto_f -> _fct_returns = ( struct type * ) void_type ; 
} else 
#line 87 "../../src/dcl.c"
{ 
#line 87 "../../src/dcl.c"
errorFPC__E ( ( char * ) "~%s in %s", _auto_this -> _expr__O3.__C3_string , _auto_cn -> _expr__O3.__C3_string ) ; 
#line 87 "../../src/dcl.c"

#line 89 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 
} 
#line 91 "../../src/dcl.c"
break ; 

#line 92 "../../src/dcl.c"
case 97 : if ( _auto_cn == 0 ) { 
#line 93 "../../src/dcl.c"
errorFPC__E ( ( char * ) "operator%t() not aM", 
#line 93 "../../src/dcl.c"
( ( struct type * ) ( _auto_this -> _expr__O4.__C4_n_initializer ) ) ) ; 

#line 95 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 

#line 96 "../../src/dcl.c"
_auto_this -> _expr__O4.__C4_n_initializer = 0 ; 
} else 
#line 97 "../../src/dcl.c"
{ 
#line 97 "../../src/dcl.c"
Pfct _auto_f ; 
Ptype _auto_tx ; 
Pname _auto_nx ; 
char _auto_buf [ 128] ; 
char * _auto_bb ; 
int _auto_l2 ; 
char * _auto_p ; 

#line 98 "../../src/dcl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 99 "../../src/dcl.c"
_auto_tx = ( ( ( struct type * ) ( _auto_this -> _expr__O4.__C4_n_initializer ) ) ) ; 

#line 101 "../../src/dcl.c"
_auto_this -> _expr__O4.__C4_n_initializer = 0 ; 

#line 102 "../../src/dcl.c"
if ( _auto_f -> _node_base != 108 ) errorFPC__E ( ( char * ) "badT for%n::operator%t()", _auto_cn , _auto_tx ) ; 
#line 102 "../../src/dcl.c"

#line 103 "../../src/dcl.c"
if ( _auto_f -> _fct_returns != ( struct type * ) defa_type ) { 
#line 103 "../../src/dcl.c"
if ( _type_check ( ( 
#line 103 "../../src/dcl.c"
struct type * ) _auto_f -> _fct_returns , ( struct type * ) _auto_tx , ( int ) 0 
#line 103 "../../src/dcl.c"
) ) 
#line 104 "../../src/dcl.c"
errorFPC__E ( ( char * ) "bad resultT for%n::operator%t()", _auto_cn , _auto_tx ) ; 

#line 105 "../../src/dcl.c"
if ( _auto_f -> _fct_returns && ( _auto_f -> _fct_returns -> _node_permanent == 0 ) ) _type_del ( ( struct 
#line 105 "../../src/dcl.c"
type * ) _auto_f -> _fct_returns ) ; 
} 
#line 107 "../../src/dcl.c"
if ( _auto_f -> _fct_argtype ) { 
#line 107 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n::operator%t() withAs", _auto_cn , _auto_tx ) 
#line 107 "../../src/dcl.c"
; 

#line 109 "../../src/dcl.c"
_auto_f -> _fct_argtype = 0 ; 
} 
#line 111 "../../src/dcl.c"
_auto_f -> _fct_returns = _auto_tx ; 

#line 112 "../../src/dcl.c"
_auto_nx = _type_is_cl_obj ( ( struct type * ) _auto_tx ) ; 

#line 113 "../../src/dcl.c"
if ( _auto_nx && can_coerce ( ( struct type * ) _auto_tx , ( struct type * ) _auto_cn -> 
#line 113 "../../src/dcl.c"
_expr__O2.__C2_tp ) ) 
#line 113 "../../src/dcl.c"
errorFPC__E ( ( char * ) "both %n::%n(%n) and %n::operator%t()", _auto_cn , _auto_cn , _auto_nx , _auto_tx ) ; 

#line 114 "../../src/dcl.c"
; 

#line 114 "../../src/dcl.c"
_auto_bb = _type_signature ( ( struct type * ) _auto_tx , ( char * ) _auto_buf ) ; 

#line 114 "../../src/dcl.c"
_auto_l2 = ( ( _auto_bb - _auto_buf ) - 1 ) ; 

#line 114 "../../src/dcl.c"
_auto_p = ( ( ( char * ) ( _new ( ( long ) ( _auto_l2 + 
#line 114 "../../src/dcl.c"
3 ) ) ) ) ) ; 

#line 118 "../../src/dcl.c"
( _auto_p [ 0 ] ) = '_' ; 

#line 119 "../../src/dcl.c"
( _auto_p [ 1 ] ) = 'O' ; 

#line 120 "../../src/dcl.c"
strcpy ( _auto_p + 2 , ( char * ) _auto_buf ) ; 

#line 121 "../../src/dcl.c"
_auto_this -> _expr__O3.__C3_string = _auto_p ; 
} 
#line 123 "../../src/dcl.c"
break ; 
} } ; 

#line 127 "../../src/dcl.c"
Pname _name_dcl ( _auto_this , _auto_tbl , _auto_scope ) register struct name * _auto_this ; 
struct table * _auto_tbl ; 
int _auto_scope ; 

#line 164 "../../src/dcl.c"
{ 
#line 164 "../../src/dcl.c"
Pname _auto__result ; 
Pname _auto_nn ; 
Ptype _auto_nnt ; 
Pname _auto_odcl ; 

#line 166 "../../src/dcl.c"
_auto_nnt = 0 ; 

#line 167 "../../src/dcl.c"
_auto_odcl = Cdcl ; 

#line 169 "../../src/dcl.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 169 "../../src/dcl.c"
"0->name.dcl()") ; 

#line 170 "../../src/dcl.c"
if ( _auto_tbl == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 170 "../../src/dcl.c"
"%n->name.dcl(tbl=0,%k)", _auto_this , _auto_scope ) ; 

#line 171 "../../src/dcl.c"
if ( _auto_tbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 171 "../../src/dcl.c"
"%n->name.dcl(tbl=%d,%k)", _auto_this , _auto_tbl -> _node_base , _auto_scope ) ; 

#line 172 "../../src/dcl.c"
if ( _auto_this -> _expr__O2.__C2_tp == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 172 "../../src/dcl.c"
) "name.dcl(%n,%k)T missing", _auto_this , _auto_scope ) ; 

#line 174 "../../src/dcl.c"
Cdcl = ( struct name * ) _auto_this ; 

#line 175 "../../src/dcl.c"
switch ( _auto_this -> _node_base ) { 
#line 175 "../../src/dcl.c"
case 123 : _type_dcl ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , 
#line 175 "../../src/dcl.c"
_auto_tbl ) ; 

#line 178 "../../src/dcl.c"
_auto_this -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 179 "../../src/dcl.c"
_auto_nn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_this -> _expr__O3.__C3_string ) 
#line 179 "../../src/dcl.c"
; 

#line 180 "../../src/dcl.c"
_auto_nn -> _node_base = 123 ; 

#line 181 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = _auto_this -> _expr__O2.__C2_tp ; 

#line 182 "../../src/dcl.c"
_table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_nn , ( int ) 
#line 182 "../../src/dcl.c"
0 ) ; 

#line 183 "../../src/dcl.c"
_name__dtor ( ( struct name * ) _auto_nn , 1) ; 

#line 184 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 185 "../../src/dcl.c"
{ 
#line 185 "../../src/dcl.c"
{ _auto__result = ( struct name * ) _auto_this ; 

#line 185 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 186 "../../src/dcl.c"
case 85 : switch ( _auto_this -> _name_n_oper ) { 
#line 187 "../../src/dcl.c"
case 123 : if ( _auto_this -> 
#line 187 "../../src/dcl.c"
_expr__O2.__C2_tp -> _node_base != 108 ) 
#line 189 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 

#line 190 "../../src/dcl.c"
break ; 

#line 191 "../../src/dcl.c"
case 47 : if ( _auto_this -> _expr__O2.__C2_tp -> _node_base != 108 ) { 
#line 192 "../../src/dcl.c"
errorFPC__E ( ( char * ) 
#line 192 "../../src/dcl.c"
"~%s notF", _auto_this -> _expr__O3.__C3_string ) ; 

#line 194 "../../src/dcl.c"
_auto_this -> _name_n_oper = 0 ; 
} 
#line 196 "../../src/dcl.c"
break ; 
} 
#line 198 "../../src/dcl.c"
break ; 

#line 199 "../../src/dcl.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "NX in name.dcl()") ; 
} 
#line 203 "../../src/dcl.c"
if ( _auto_this -> _name__O6.__C6_n_qualifier ) { 
#line 203 "../../src/dcl.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _node_base != 108 ) { 
#line 204 "../../src/dcl.c"
errorFPC__E ( 
#line 204 "../../src/dcl.c"
( char * ) "QdN%n inD of nonF", _auto_this ) ; 

#line 206 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 207 "../../src/dcl.c"
{ 
#line 207 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 207 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 210 "../../src/dcl.c"
{ 
#line 210 "../../src/dcl.c"
Pname _auto_cn ; 
Pclass _auto_cl ; 

#line 210 "../../src/dcl.c"
_auto_cn = _auto_this -> _name__O6.__C6_n_qualifier ; 

#line 211 "../../src/dcl.c"
switch ( _auto_cn -> _node_base ) { 
#line 211 "../../src/dcl.c"
case 123 : break ; 

#line 214 "../../src/dcl.c"
case 85 : _auto_cn = _table_look ( ( struct table * ) gtbl , _auto_cn -> _expr__O3.__C3_string , ( int ) 
#line 214 "../../src/dcl.c"
0 ) ; 

#line 216 "../../src/dcl.c"
if ( _auto_cn && ( _auto_cn -> _node_base == 123 ) ) break ; 

#line 217 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "badQr%n for%n", _auto_this -> _name__O6.__C6_n_qualifier , _auto_this ) ; 

#line 219 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 220 "../../src/dcl.c"
{ 
#line 220 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 220 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 222 "../../src/dcl.c"
_auto_cn = ( ( ( struct basetype * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) 
#line 222 "../../src/dcl.c"
) -> _basetype_b_name ; 

#line 223 "../../src/dcl.c"
if ( _auto_this -> _name_n_oper ) _name_check_oper ( _auto_this , ( struct name * ) _auto_cn ) ; 

#line 225 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 226 "../../src/dcl.c"
if ( _auto_cl == cc -> _dcl_context_cot ) { 
#line 226 "../../src/dcl.c"
_auto_this -> _name__O6.__C6_n_qualifier = 0 ; 

#line 228 "../../src/dcl.c"
goto xdr ; 
} else 
#line 230 "../../src/dcl.c"
if ( ( _auto_cl -> _type_defined & 3) == 0 ) { 
#line 230 "../../src/dcl.c"
errorFPC__E ( ( 
#line 230 "../../src/dcl.c"
char * ) "C%nU", _auto_cn ) ; 

#line 232 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 233 "../../src/dcl.c"
{ 
#line 233 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 233 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 236 "../../src/dcl.c"
{ 
#line 236 "../../src/dcl.c"
Ptable _auto_etbl ; 
Pname _auto_x ; 

#line 236 "../../src/dcl.c"
_auto_etbl = _auto_cl -> _classdef_memtbl ; 

#line 237 "../../src/dcl.c"
_auto_x = _table_look ( ( struct table * ) _auto_etbl , _auto_this -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 237 "../../src/dcl.c"
; 

#line 238 "../../src/dcl.c"
if ( ( _auto_x == 0 ) || ( _auto_x -> _expr__O5.__C5_n_table != _auto_etbl ) ) { 
#line 238 "../../src/dcl.c"
errorFPC__E ( 
#line 238 "../../src/dcl.c"
( char * ) "%n is not aM of%n", _auto_this , _auto_cn ) ; 

#line 240 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 241 "../../src/dcl.c"
{ 
#line 241 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 241 "../../src/dcl.c"
return _auto__result ; 
} } } } } } 
#line 244 "../../src/dcl.c"
xdr : if ( ( _auto_this -> _name_n_oper && ( _auto_this -> 
#line 244 "../../src/dcl.c"
_expr__O2.__C2_tp -> _node_base != 108 ) ) && ( _auto_this -> _name_n_sto != 76 ) ) 
#line 246 "../../src/dcl.c"
errorFPC__E ( ( char * 
#line 246 "../../src/dcl.c"
) "operator%k not aF", _auto_this -> _name_n_oper ) ; 

#line 256 "../../src/dcl.c"
_auto_this -> _name_n_stclass = _auto_this -> _name_n_sto ; 

#line 257 "../../src/dcl.c"
_auto_this -> _name_n_scope = _auto_scope ; 

#line 259 "../../src/dcl.c"
switch ( _auto_this -> _name_n_sto ) { 
#line 259 "../../src/dcl.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 259 "../../src/dcl.c"
* ) "unX %k", _auto_this -> _name_n_sto ) ; 

#line 262 "../../src/dcl.c"
case 18 : { 
#line 263 "../../src/dcl.c"
Pclass _auto_cl ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 264 "../../src/dcl.c"
_auto_cl = cc -> _dcl_context_cot ; 

#line 266 "../../src/dcl.c"
switch ( _auto_scope ) { 
#line 266 "../../src/dcl.c"
case 0 : case 25 : break ; 

#line 270 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "friend%n not in classD(%k)", _auto_this , _auto_scope ) ; 

#line 272 "../../src/dcl.c"
_auto_this -> _node_base = 0 ; 

#line 273 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 274 "../../src/dcl.c"
{ 
#line 274 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 274 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 277 "../../src/dcl.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 277 "../../src/dcl.c"
case 0 : case 23 : case 
#line 277 "../../src/dcl.c"
9 : 
#line 281 "../../src/dcl.c"
case 161 : case 162 : case 97 : _auto_this -> _name_n_sto = 0 ; 

#line 285 "../../src/dcl.c"
break ; 

#line 286 "../../src/dcl.c"
default : _auto_this -> _name_n_sto = 76 ; 
} 
#line 290 "../../src/dcl.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 290 "../../src/dcl.c"
case 119 : _auto_nn = ( ( ( struct 
#line 290 "../../src/dcl.c"
basetype * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_name ; 

#line 298 "../../src/dcl.c"
break ; 

#line 299 "../../src/dcl.c"
case 6 : _auto_nn = ( struct name * ) _auto_this ; 

#line 301 "../../src/dcl.c"
break ; 

#line 302 "../../src/dcl.c"
case 108 : { 
#line 705 "../../src/cfront.h"
cc ++ ; 

#line 705 "../../src/cfront.h"
( * cc ) = ( * ( cc - 1 ) ) ; 
} 
#line 304 "../../src/dcl.c"
cc -> _dcl_context_not = 0 ; 

#line 305 "../../src/dcl.c"
cc -> _dcl_context_tot = 0 ; 

#line 306 "../../src/dcl.c"
cc -> _dcl_context_cot = 0 ; 

#line 307 "../../src/dcl.c"
friend_in_class ++ ; 

#line 308 "../../src/dcl.c"
_auto_this -> _name_n_sto = 14 ; 

#line 309 "../../src/dcl.c"
_auto_nn = _name_dcl ( _auto_this , ( struct table * ) gtbl , 14 ) ; 

#line 310 "../../src/dcl.c"
friend_in_class -- ; 

#line 312 "../../src/dcl.c"
{ 
#line 706 "../../src/cfront.h"
cc -- ; 
} 
#line 313 "../../src/dcl.c"
if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base == 76 ) { 
#line 313 "../../src/dcl.c"
Pgen _auto_g ; 

#line 314 "../../src/dcl.c"
_auto_g = ( ( ( struct gen * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 315 "../../src/dcl.c"
_auto_nn = _gen_find ( ( struct gen * ) _auto_g , ( struct fct * ) ( ( ( 
#line 315 "../../src/dcl.c"
struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ) ; 
} 
#line 317 "../../src/dcl.c"
break ; 

#line 318 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "badT%t of friend%n", _auto_this -> _expr__O2.__C2_tp , _auto_this ) ; 
} 
#line 321 "../../src/dcl.c"
_auto_nn -> _node_permanent = 1 ; 

#line 322 "../../src/dcl.c"
_auto_cl -> _classdef_friend_list = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( ( 
#line 322 "../../src/dcl.c"
_auto__Xthis__ctor_name_list = ( struct name_list * ) _new ( ( long ) 8) ) , ( ( 
#line 322 "../../src/dcl.c"
_auto__Xthis__ctor_name_list -> _name_list_f = ( ( struct name * ) _auto_nn ) ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = 
#line 322 "../../src/dcl.c"
( ( struct name_list * ) _auto_cl -> _classdef_friend_list ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 
#line 322 "../../src/dcl.c"

#line 323 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 324 "../../src/dcl.c"
{ 
#line 324 "../../src/dcl.c"
{ _auto__result = _auto_nn ; 

#line 324 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 326 "../../src/dcl.c"
case 76 : _auto_this -> _name_n_sto = 0 ; 

#line 328 "../../src/dcl.c"
switch ( _auto_scope ) { 
#line 328 "../../src/dcl.c"
case 0 : case 25 : errorFI_PC__E ( ( int ) 'w' , 
#line 328 "../../src/dcl.c"
( char * ) "overload inCD (ignored)") ; 

#line 332 "../../src/dcl.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 332 "../../src/dcl.c"
case 21 : _auto_this -> _node_base = 0 ; 

#line 335 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 336 "../../src/dcl.c"
{ 
#line 336 "../../src/dcl.c"
{ _auto__result = ( struct name * ) _auto_this ; 

#line 336 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 337 "../../src/dcl.c"
case 108 : { 
#line 338 "../../src/dcl.c"
{ _auto__result = _name_dcl ( _auto_this , _auto_tbl , _auto_scope ) ; 

#line 338 "../../src/dcl.c"
return _auto__result ; 
} } } } 
#line 341 "../../src/dcl.c"
if ( _auto_this -> _name_n_oper && ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) ) 
#line 341 "../../src/dcl.c"

#line 341 "../../src/dcl.c"
break ; 

#line 342 "../../src/dcl.c"
_auto_nn = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_this , ( int 
#line 342 "../../src/dcl.c"
) 0 ) ; 

#line 344 "../../src/dcl.c"
if ( Nold ) { 
#line 344 "../../src/dcl.c"
if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base != 76 ) { 
#line 345 "../../src/dcl.c"
errorFPC__E ( ( char 
#line 345 "../../src/dcl.c"
* ) "%n redefined as overloaded", _auto_this ) ; 

#line 347 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = ( struct type * ) _gen__ctor ( ( struct gen * ) 0 , _auto_this -> 
#line 347 "../../src/dcl.c"
_expr__O3.__C3_string ) ; 
} } else 
#line 350 "../../src/dcl.c"
{ 
#line 350 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = ( struct type * ) _gen__ctor ( ( struct gen * 
#line 350 "../../src/dcl.c"
) 0 , _auto_this -> _expr__O3.__C3_string ) ; 
} 
#line 354 "../../src/dcl.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 354 "../../src/dcl.c"
case 21 : _auto_this -> _node_base = 0 ; 

#line 357 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 358 "../../src/dcl.c"
{ 
#line 358 "../../src/dcl.c"
{ _auto__result = _auto_nn ; 

#line 358 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 359 "../../src/dcl.c"
case 108 : break ; 

#line 361 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "N%n ofT%k cannot be overloaded", _auto_this , _auto_this -> _expr__O2.__C2_tp -> _node_base ) ; 

#line 363 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 364 "../../src/dcl.c"
{ 
#line 364 "../../src/dcl.c"
{ _auto__result = _auto_nn ; 

#line 364 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 366 "../../src/dcl.c"
break ; 

#line 367 "../../src/dcl.c"
case 27 : if ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 368 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 368 "../../src/dcl.c"
( char * ) "%n: register (ignored)", _auto_this ) ; 

#line 370 "../../src/dcl.c"
goto ddd ; 
} 
#line 372 "../../src/dcl.c"
case 2 : switch ( _auto_scope ) { 
#line 373 "../../src/dcl.c"
case 0 : case 25 : case 14 : 
#line 373 "../../src/dcl.c"

#line 377 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%k not inF", _auto_this -> _name_n_sto ) ; 

#line 378 "../../src/dcl.c"
goto ddd ; 
} 
#line 380 "../../src/dcl.c"
break ; 

#line 381 "../../src/dcl.c"
case 14 : switch ( _auto_scope ) { 
#line 382 "../../src/dcl.c"
case 136 : errorFPC__E ( ( char * ) "externA") 
#line 382 "../../src/dcl.c"
; 

#line 385 "../../src/dcl.c"
goto ddd ; 

#line 386 "../../src/dcl.c"
case 0 : case 25 : if ( _auto_this -> _expr__O2.__C2_tp -> _node_base != 108 ) errorFPC__E ( ( char 
#line 386 "../../src/dcl.c"
* ) "externM%n", _auto_this ) ; 

#line 390 "../../src/dcl.c"
goto ddd ; 
} 
#line 392 "../../src/dcl.c"
_auto_this -> _name_n_stclass = 31 ; 

#line 393 "../../src/dcl.c"
_auto_this -> _name_n_scope = 14 ; 

#line 394 "../../src/dcl.c"
break ; 

#line 395 "../../src/dcl.c"
case 31 : switch ( _auto_scope ) { 
#line 396 "../../src/dcl.c"
case 136 : errorFPC__E ( ( char * ) "static used forA%n", 
#line 396 "../../src/dcl.c"
_auto_this ) ; 

#line 399 "../../src/dcl.c"
goto ddd ; 

#line 400 "../../src/dcl.c"
case 0 : case 25 : _auto_this -> _name_n_stclass = 31 ; 

#line 403 "../../src/dcl.c"
_auto_this -> _name_n_scope = _auto_scope ; 

#line 404 "../../src/dcl.c"
break ; 

#line 405 "../../src/dcl.c"
default : _auto_this -> _name_n_scope = 31 ; 
} 
#line 408 "../../src/dcl.c"
break ; 

#line 409 "../../src/dcl.c"
case 0 : ddd : switch ( _auto_scope ) { 
#line 411 "../../src/dcl.c"
case 14 : _auto_this -> _name_n_scope = 14 ; 

#line 414 "../../src/dcl.c"
_auto_this -> _name_n_stclass = 31 ; 

#line 415 "../../src/dcl.c"
break ; 

#line 416 "../../src/dcl.c"
case 108 : if ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 417 "../../src/dcl.c"
_auto_this -> _name_n_stclass = 31 ; 

#line 419 "../../src/dcl.c"
_auto_this -> _name_n_scope = 14 ; 
} else 
#line 422 "../../src/dcl.c"
_auto_this -> _name_n_stclass = 2 ; 

#line 423 "../../src/dcl.c"
break ; 

#line 424 "../../src/dcl.c"
case 136 : _auto_this -> _name_n_stclass = 2 ; 

#line 426 "../../src/dcl.c"
break ; 

#line 427 "../../src/dcl.c"
case 0 : case 25 : _auto_this -> _name_n_stclass = 0 ; 

#line 430 "../../src/dcl.c"
break ; 
} } 
#line 442 "../../src/dcl.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 442 "../../src/dcl.c"
case 1 : { 
#line 444 "../../src/dcl.c"
Pbase _auto_b ; 
Pname _auto_n ; 

#line 444 "../../src/dcl.c"
_auto_b = ( ( ( struct basetype * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 445 "../../src/dcl.c"
_auto_n = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_this , ( int 
#line 445 "../../src/dcl.c"
) 0 ) ; 

#line 446 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_n ) ; 

#line 447 "../../src/dcl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_n ) -> _name_n_used ++ ; 
} 
#line 448 "../../src/dcl.c"
{ 
#line 448 "../../src/dcl.c"
{ _auto__result = ( struct name * ) _auto_this ; 

#line 448 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 451 "../../src/dcl.c"
case 6 : { 
#line 452 "../../src/dcl.c"
Pclass _auto_cl ; 
Pbase _auto_bt ; 
Pname _auto_bn ; 
Pname _auto_nx ; 

#line 456 "../../src/dcl.c"
_auto_nx = _table_look ( ( struct table * ) ktbl , _auto_this -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 456 "../../src/dcl.c"
; 

#line 458 "../../src/dcl.c"
if ( _auto_nx == 0 ) { 
#line 458 "../../src/dcl.c"
int _auto_tn ; 

#line 463 "../../src/dcl.c"
_auto_tn = 0 ; 

#line 464 "../../src/dcl.c"
for ( _auto_nx = _table_look ( ( struct table * ) ktbl , _auto_this -> _expr__O3.__C3_string , 159 ) ;_auto_nx ;( _auto_nx = 
#line 464 "../../src/dcl.c"
_auto_nx -> _name_n_tbl_list ) ) 
#line 464 "../../src/dcl.c"
{ 
#line 464 "../../src/dcl.c"
if ( _auto_nx -> _node_n_key != 159 ) continue ; 

#line 467 "../../src/dcl.c"
if ( _auto_nx -> _expr__O2.__C2_tp -> _node_base != 119 ) { 
#line 467 "../../src/dcl.c"
_auto_tn = 1 ; 

#line 469 "../../src/dcl.c"
continue ; 
} 
#line 471 "../../src/dcl.c"
_auto_bt = ( ( ( struct basetype * ) ( _auto_nx -> _expr__O2.__C2_tp ) ) ) ; 
#line 471 "../../src/dcl.c"

#line 472 "../../src/dcl.c"
_auto_bn = _auto_bt -> _basetype_b_name ; 

#line 473 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) ; 

#line 474 "../../src/dcl.c"
if ( _auto_cl == 0 ) continue ; 

#line 480 "../../src/dcl.c"
goto bbb ; 
} 
#line 482 "../../src/dcl.c"
if ( _auto_tn ) errorFPC__E ( ( char * ) "%n redefined using typedef") ; 
else 
#line 485 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "%n is not aCN", _auto_this ) ; 
} else 
#line 487 "../../src/dcl.c"
{ 
#line 487 "../../src/dcl.c"
if ( _auto_tbl != ( struct table * ) gtbl ) { 
#line 488 "../../src/dcl.c"
if ( 
#line 488 "../../src/dcl.c"
_auto_nx -> _name_lex_level == 0 ) 
#line 491 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "localC%n and globalC%n", 
#line 491 "../../src/dcl.c"
_auto_this , _auto_nx ) ; 
} 
#line 493 "../../src/dcl.c"
_auto_bt = ( ( ( struct basetype * ) ( _auto_nx -> _expr__O2.__C2_tp ) ) ) ; 
#line 493 "../../src/dcl.c"

#line 494 "../../src/dcl.c"
_auto_bn = _auto_bt -> _basetype_b_name ; 
} 
#line 497 "../../src/dcl.c"
bbb : { 
#line 499 "../../src/dcl.c"
Pname _auto_ln ; 

#line 499 "../../src/dcl.c"
_auto_ln = _table_look ( ( struct table * ) _auto_tbl , _auto_bn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 499 "../../src/dcl.c"
; 

#line 501 "../../src/dcl.c"
if ( _auto_ln && ( _auto_ln -> _expr__O5.__C5_n_table == _auto_tbl ) ) errorFI_PC__E ( ( int ) 'w' , ( 
#line 501 "../../src/dcl.c"
char * ) "%n redefined", _auto_ln ) ; 

#line 502 "../../src/dcl.c"
_auto_bn -> _name_where = _auto_nx -> _name_where ; 

#line 503 "../../src/dcl.c"
{ 
#line 503 "../../src/dcl.c"
Pname _auto_bnn ; 

#line 503 "../../src/dcl.c"
_auto_bnn = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_bn , 6 ) ; 
#line 503 "../../src/dcl.c"

#line 504 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) ; 

#line 507 "../../src/dcl.c"
if ( _auto_cl -> _type_defined & 3) errorFPC__E ( ( char * ) "C%n defined twice", _auto_this ) ; 
else 
#line 509 "../../src/dcl.c"
{ 
#line 509 "../../src/dcl.c"
if ( _auto_bn -> _name_n_scope == 136 ) _auto_bn -> _name_n_scope = 139 ; 

#line 511 "../../src/dcl.c"
_classdef_dcl ( ( struct classdef * ) _auto_cl , ( struct name * ) _auto_bn , _auto_tbl ) ; 
} 
#line 523 "../../src/dcl.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) _auto_cl ; 

#line 524 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 525 "../../src/dcl.c"
{ 
#line 525 "../../src/dcl.c"
{ _auto__result = _auto_bnn ; 

#line 525 "../../src/dcl.c"
return _auto__result ; 
} } } } } 
#line 528 "../../src/dcl.c"
case 13 : { 
#line 529 "../../src/dcl.c"
Pname _auto_nx ; 

#line 529 "../../src/dcl.c"
_auto_nx = _table_look ( ( struct table * ) ktbl , _auto_this -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 529 "../../src/dcl.c"
; 

#line 530 "../../src/dcl.c"
if ( _auto_nx == 0 ) { 
#line 530 "../../src/dcl.c"
_auto_nx = _table_look ( ( struct table * ) ktbl , _auto_this -> 
#line 530 "../../src/dcl.c"
_expr__O3.__C3_string , 159 ) ; 
} 
#line 533 "../../src/dcl.c"
{ 
#line 533 "../../src/dcl.c"
Pbase _auto_bt ; 
Pname _auto_bn ; 
Pname _auto_bnn ; 
Penum _auto_en ; 

#line 533 "../../src/dcl.c"
_auto_bt = ( ( ( struct basetype * ) ( _auto_nx -> _expr__O2.__C2_tp ) ) ) ; 

#line 534 "../../src/dcl.c"
_auto_bn = _auto_bt -> _basetype_b_name ; 

#line 535 "../../src/dcl.c"
_auto_bnn = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_bn , 6 ) ; 
#line 535 "../../src/dcl.c"

#line 536 "../../src/dcl.c"
_auto_en = ( ( ( struct enumdef * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) ; 

#line 537 "../../src/dcl.c"
if ( _auto_en -> _type_defined & 3) errorFPC__E ( ( char * ) "enum%n defined twice", _auto_this ) ; 
else 
#line 539 "../../src/dcl.c"
{ 
#line 539 "../../src/dcl.c"
if ( _auto_bn -> _name_n_scope == 136 ) _auto_bn -> _name_n_scope = 139 ; 

#line 541 "../../src/dcl.c"
_enumdef_dcl ( ( struct enumdef * ) _auto_en , ( struct name * ) _auto_bn , _auto_tbl ) ; 
} 
#line 543 "../../src/dcl.c"
_auto_this -> _expr__O2.__C2_tp = ( struct type * ) _auto_en ; 

#line 544 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 545 "../../src/dcl.c"
{ 
#line 545 "../../src/dcl.c"
{ _auto__result = _auto_bnn ; 

#line 545 "../../src/dcl.c"
return _auto__result ; 
} } } } 
#line 548 "../../src/dcl.c"
case 108 : { 
#line 549 "../../src/dcl.c"
Pfct _auto_f ; 
Pname _auto_class_name ; 
Ptable _auto_etbl ; 
int _auto_can_overload ; 
int _auto_in_class_dcl ; 
int _auto_just_made ; 

#line 549 "../../src/dcl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 553 "../../src/dcl.c"
_auto_in_class_dcl = ( ( ( int ) ( cc -> _dcl_context_not ) ) ) ; 

#line 554 "../../src/dcl.c"
_auto_just_made = 0 ; 

#line 556 "../../src/dcl.c"
if ( _auto_f -> _fct_f_inline ) _auto_this -> _name_n_sto = 31 ; 

#line 558 "../../src/dcl.c"
if ( _auto_f -> _fct_argtype ) { 
#line 558 "../../src/dcl.c"
Pname _auto_a ; 
int _auto_oo ; 

#line 560 "../../src/dcl.c"
_auto_oo = const_save ; 

#line 561 "../../src/dcl.c"
const_save = 1 ; 

#line 562 "../../src/dcl.c"
for ( _auto_a = _auto_f -> _fct_argtype ;_auto_a ;( _auto_a = _auto_a -> _name_n_list ) ) { 
#line 562 "../../src/dcl.c"
Pexpr _auto_init ; 

#line 564 "../../src/dcl.c"
if ( _auto_init = _auto_a -> _expr__O4.__C4_n_initializer ) { 
#line 564 "../../src/dcl.c"
Pname _auto_cln ; 

#line 567 "../../src/dcl.c"
if ( _auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_a -> _expr__O2.__C2_tp ) ) { 
#line 567 "../../src/dcl.c"
if ( 
#line 567 "../../src/dcl.c"
_auto_init -> _node_base == 157 ) 
#line 569 "../../src/dcl.c"
{ 
#line 569 "../../src/dcl.c"
switch ( _auto_init -> _expr__O5.__C5_tp2 -> _node_base ) { 
#line 570 "../../src/dcl.c"
case 6 : if ( 
#line 570 "../../src/dcl.c"
( ( ( struct classdef * ) ( _auto_init -> _expr__O5.__C5_tp2 ) ) ) != ( ( 
#line 570 "../../src/dcl.c"
( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) 
#line 572 "../../src/dcl.c"
goto inin2 ; 

#line 573 "../../src/dcl.c"
break ; 

#line 574 "../../src/dcl.c"
default : { 
#line 575 "../../src/dcl.c"
Pname _auto_n2 ; 

#line 575 "../../src/dcl.c"
_auto_n2 = _type_is_cl_obj ( ( struct type * ) _auto_init -> _expr__O5.__C5_tp2 ) ; 

#line 576 "../../src/dcl.c"
if ( ( _auto_n2 == 0 ) || ( ( ( ( struct classdef * ) 
#line 576 "../../src/dcl.c"
( _auto_n2 -> _expr__O2.__C2_tp ) ) ) != ( ( ( struct classdef * ) ( _auto_cln -> 
#line 576 "../../src/dcl.c"
_expr__O2.__C2_tp ) ) ) ) ) 
#line 576 "../../src/dcl.c"
goto inin2 ; 
} } 
#line 578 "../../src/dcl.c"
_auto_init -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_a ; 

#line 579 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 580 "../../src/dcl.c"
_expr_simpl ( ( struct expr * ) _auto_init ) ; 

#line 581 "../../src/dcl.c"
_auto_init -> _node_permanent = 2 ; 

#line 582 "../../src/dcl.c"
_auto_a -> _expr__O4.__C4_n_initializer = _auto_init ; 

#line 583 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "constructor as defaultA") ; 
} else 
#line 585 "../../src/dcl.c"
{ 
#line 585 "../../src/dcl.c"
inin2 : if ( _auto_init -> _node_base == 124 ) errorFI_PC__E ( ( int ) 's' , 
#line 585 "../../src/dcl.c"
( char * ) "list as AIr") ; 

#line 589 "../../src/dcl.c"
{ 
#line 589 "../../src/dcl.c"
Pexpr _auto_i ; 

#line 589 "../../src/dcl.c"
_auto_i = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 590 "../../src/dcl.c"
_auto_init = class_init ( ( struct expr * ) _auto_a , ( struct type * ) _auto_a -> _expr__O2.__C2_tp , ( 
#line 590 "../../src/dcl.c"
struct expr * ) _auto_i , _auto_tbl ) ; 

#line 591 "../../src/dcl.c"
if ( ( _auto_i != _auto_init ) && ( _auto_init -> _node_base == 111 ) ) errorFI_PC__E ( ( int 
#line 591 "../../src/dcl.c"
) 's' , ( char * ) "constructor needed forAIr") ; 

#line 592 "../../src/dcl.c"
_expr_simpl ( ( struct expr * ) _auto_init ) ; 

#line 593 "../../src/dcl.c"
_auto_init -> _node_permanent = 2 ; 

#line 594 "../../src/dcl.c"
_auto_a -> _expr__O4.__C4_n_initializer = _auto_init ; 
} } } else 
#line 597 "../../src/dcl.c"
if ( _type_is_ref ( ( struct type * ) _auto_a -> _expr__O2.__C2_tp ) ) 
#line 597 "../../src/dcl.c"

#line 597 "../../src/dcl.c"
{ 
#line 597 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 600 "../../src/dcl.c"
{ 
#line 600 "../../src/dcl.c"
int _auto_tcount ; 

#line 600 "../../src/dcl.c"
_auto_tcount = stcount ; 

#line 601 "../../src/dcl.c"
_auto_init = ref_init ( ( ( struct ptr * ) ( _auto_a -> _expr__O2.__C2_tp ) ) , ( struct 
#line 601 "../../src/dcl.c"
expr * ) _auto_init , _auto_tbl ) ; 

#line 602 "../../src/dcl.c"
if ( _auto_tcount != stcount ) errorFI_PC__E ( ( int ) 's' , ( char * ) "needs temporaryV to evaluateAIr") 
#line 602 "../../src/dcl.c"
; 

#line 603 "../../src/dcl.c"
_expr_simpl ( ( struct expr * ) _auto_init ) ; 

#line 604 "../../src/dcl.c"
_auto_init -> _node_permanent = 2 ; 

#line 605 "../../src/dcl.c"
_auto_a -> _expr__O4.__C4_n_initializer = _auto_init ; 
} } else 
#line 608 "../../src/dcl.c"
{ 
#line 608 "../../src/dcl.c"
int _auto_i ; 

#line 609 "../../src/dcl.c"
_auto_i = 0 ; 

#line 610 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 611 "../../src/dcl.c"
if ( ( _type_check ( ( struct type * ) _auto_a -> _expr__O2.__C2_tp , ( struct type * ) 
#line 611 "../../src/dcl.c"
_auto_init -> _expr__O2.__C2_tp , 136 ) == 0 ) || ( _auto_i = can_coerce ( ( struct type * ) 
#line 611 "../../src/dcl.c"
_auto_a -> _expr__O2.__C2_tp , ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) ) ) 
#line 612 "../../src/dcl.c"
{ 
#line 612 "../../src/dcl.c"
if ( 1 < 
#line 612 "../../src/dcl.c"
_auto_i ) 
#line 613 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%d possible conversions for defaultA", _auto_i ) ; 

#line 614 "../../src/dcl.c"
if ( Ncoerce ) { 
#line 614 "../../src/dcl.c"
Pname _auto_cn ; 
Pclass _auto_cl ; 
Pref _auto_r ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 615 "../../src/dcl.c"
_auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) ; 

#line 616 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 617 "../../src/dcl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 617 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 617 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_init ) , 
#line 617 "../../src/dcl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 617 "../../src/dcl.c"
( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 618 "../../src/dcl.c"
_auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 618 "../../src/dcl.c"
struct expr * ) _auto_r , ( struct expr * ) 0 ) ; 

#line 619 "../../src/dcl.c"
_auto_init -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 620 "../../src/dcl.c"
_auto_init -> _expr__O2.__C2_tp = _auto_a -> _expr__O2.__C2_tp ; 
} 
#line 622 "../../src/dcl.c"
_expr_simpl ( ( struct expr * ) _auto_init ) ; 

#line 623 "../../src/dcl.c"
_auto_init -> _node_permanent = 2 ; 

#line 624 "../../src/dcl.c"
_auto_a -> _expr__O4.__C4_n_initializer = _auto_init ; 

#line 625 "../../src/dcl.c"
Neval = 0 ; 

#line 626 "../../src/dcl.c"
{ 
#line 626 "../../src/dcl.c"
int _auto_i ; 

#line 626 "../../src/dcl.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_init ) ; 

#line 627 "../../src/dcl.c"
if ( Neval == 0 ) { 
#line 627 "../../src/dcl.c"
_auto_a -> _name_n_evaluated = 1 ; 

#line 629 "../../src/dcl.c"
_auto_a -> _name_n_val = _auto_i ; 
} } } else 
#line 632 "../../src/dcl.c"
{ 
#line 632 "../../src/dcl.c"
errorFPC__E ( ( char * ) "badIrT%t forA%n", _auto_init -> _expr__O2.__C2_tp , _auto_a ) 
#line 632 "../../src/dcl.c"
; 

#line 634 "../../src/dcl.c"
if ( _auto_init && ( _auto_init -> _node_permanent == 0 ) ) _expr_del ( ( struct expr * ) 
#line 634 "../../src/dcl.c"
_auto_init ) ; 

#line 635 "../../src/dcl.c"
_auto_a -> _expr__O4.__C4_n_initializer = 0 ; 
} } } 
#line 639 "../../src/dcl.c"
flatten1 : switch ( _auto_a -> _expr__O2.__C2_tp -> _node_base ) { 
#line 640 "../../src/dcl.c"
case 97 : _auto_a -> _expr__O2.__C2_tp = 
#line 640 "../../src/dcl.c"
( ( ( struct basetype * ) ( _auto_a -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 
#line 640 "../../src/dcl.c"

#line 643 "../../src/dcl.c"
goto flatten1 ; 

#line 644 "../../src/dcl.c"
case 5 : case 29 : _auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 648 "../../src/dcl.c"
break ; 

#line 649 "../../src/dcl.c"
case 15 : _auto_a -> _expr__O2.__C2_tp = ( struct type * ) double_type ; 

#line 652 "../../src/dcl.c"
break ; 
} } 
#line 655 "../../src/dcl.c"
const_save = _auto_oo ; 
} 
#line 658 "../../src/dcl.c"
_type_dcl ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , _auto_tbl ) ; 

#line 660 "../../src/dcl.c"
if ( _auto_this -> _name__O6.__C6_n_qualifier ) { 
#line 660 "../../src/dcl.c"
if ( _auto_in_class_dcl ) { 
#line 661 "../../src/dcl.c"
errorFPC__E ( ( char * ) 
#line 661 "../../src/dcl.c"
"unXQN%n", _auto_this ) ; 

#line 663 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 664 "../../src/dcl.c"
{ 
#line 664 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 664 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 666 "../../src/dcl.c"
_auto_class_name = ( ( ( struct basetype * ) ( _auto_this -> _name__O6.__C6_n_qualifier -> _expr__O2.__C2_tp ) 
#line 666 "../../src/dcl.c"
) ) -> _basetype_b_name ; 

#line 667 "../../src/dcl.c"
_auto_etbl = ( ( ( struct classdef * ) ( _auto_class_name -> _expr__O2.__C2_tp ) ) ) -> _classdef_memtbl ; 
#line 667 "../../src/dcl.c"
} else 
#line 669 "../../src/dcl.c"
{ 
#line 669 "../../src/dcl.c"
_auto_class_name = cc -> _dcl_context_not ; 

#line 672 "../../src/dcl.c"
if ( _auto_class_name && ( _auto_tbl != ( struct table * ) cc -> _dcl_context_cot -> _classdef_memtbl ) ) { 
#line 672 "../../src/dcl.c"

#line 672 "../../src/dcl.c"

#line 673 "../../src/dcl.c"
_auto_class_name = 0 ; 

#line 674 "../../src/dcl.c"
_auto_in_class_dcl = 0 ; 
} 
#line 676 "../../src/dcl.c"
if ( _auto_this -> _name_n_oper ) _name_check_oper ( _auto_this , ( struct name * ) _auto_class_name ) ; 

#line 677 "../../src/dcl.c"
_auto_etbl = _auto_tbl ; 
} 
#line 680 "../../src/dcl.c"
if ( ( _auto_etbl == 0 ) || ( _auto_etbl -> _node_base != 142 ) ) errorFI_PC__E ( 
#line 680 "../../src/dcl.c"
( int ) 'i' , ( char * ) "N.dcl: etbl=%d", _auto_etbl ) ; 

#line 682 "../../src/dcl.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 682 "../../src/dcl.c"
case 23 : case 9 : switch ( _auto_scope ) { 
#line 685 "../../src/dcl.c"
case 
#line 685 "../../src/dcl.c"
0 : 
#line 687 "../../src/dcl.c"
case 25 : errorFPC__E ( ( char * ) "%nMF", _auto_this ) ; 
} 
#line 690 "../../src/dcl.c"
case 0 : _auto_can_overload = _auto_in_class_dcl ; 

#line 692 "../../src/dcl.c"
break ; 

#line 693 "../../src/dcl.c"
case 161 : if ( _auto_f -> _fct_f_virtual ) { 
#line 694 "../../src/dcl.c"
errorFPC__E ( ( char * ) "virtual constructor") ; 
#line 694 "../../src/dcl.c"

#line 696 "../../src/dcl.c"
_auto_f -> _fct_f_virtual = 0 ; 
} 
#line 698 "../../src/dcl.c"
case 162 : if ( fct_void ) _auto_this -> _name_n_scope = 25 ; 

#line 700 "../../src/dcl.c"
_auto_can_overload = _auto_in_class_dcl ; 

#line 701 "../../src/dcl.c"
break ; 

#line 702 "../../src/dcl.c"
case 97 : _auto_can_overload = 0 ; 

#line 704 "../../src/dcl.c"
break ; 

#line 705 "../../src/dcl.c"
case 70 : if ( _auto_class_name && ( _auto_f -> _fct_nargs == 1 ) ) { 
#line 707 "../../src/dcl.c"
Ptype _auto_t ; 
Pname _auto_an ; 

#line 708 "../../src/dcl.c"
_auto_t = _auto_f -> _fct_argtype -> _expr__O2.__C2_tp ; 

#line 709 "../../src/dcl.c"
_auto_an = _type_is_cl_obj ( ( struct type * ) _auto_t ) ; 

#line 710 "../../src/dcl.c"
if ( ( _auto_an == 0 ) && _type_is_ref ( ( struct type * ) _auto_t ) ) 
#line 710 "../../src/dcl.c"

#line 710 "../../src/dcl.c"
{ 
#line 710 "../../src/dcl.c"
_auto_t = ( ( ( struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 
#line 710 "../../src/dcl.c"

#line 712 "../../src/dcl.c"
rx1 : switch ( _auto_t -> _node_base ) { 
#line 713 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 713 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 716 "../../src/dcl.c"
goto rx1 ; 

#line 717 "../../src/dcl.c"
case 119 : _auto_an = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 717 "../../src/dcl.c"
_basetype_b_name ; 
} } 
#line 721 "../../src/dcl.c"
if ( _auto_an && ( _auto_an == _auto_class_name ) ) ( ( ( struct classdef * 
#line 721 "../../src/dcl.c"
) ( _auto_an -> _expr__O2.__C2_tp ) ) ) -> _classdef_bit_ass = 0 ; 
} else 
#line 724 "../../src/dcl.c"
if ( _auto_f -> _fct_nargs == 2 ) { 
#line 724 "../../src/dcl.c"
Ptype _auto_t ; 
Pname _auto_an1 ; 

#line 725 "../../src/dcl.c"
_auto_t = _auto_f -> _fct_argtype -> _expr__O2.__C2_tp ; 

#line 727 "../../src/dcl.c"
if ( _type_is_ref ( ( struct type * ) _auto_t ) ) { 
#line 727 "../../src/dcl.c"
_auto_t = ( ( ( 
#line 727 "../../src/dcl.c"
struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 

#line 729 "../../src/dcl.c"
rx2 : switch ( _auto_t -> _node_base ) { 
#line 730 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 730 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 733 "../../src/dcl.c"
goto rx2 ; 

#line 734 "../../src/dcl.c"
case 119 : _auto_an1 = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 734 "../../src/dcl.c"
_basetype_b_name ; 
} } 
#line 738 "../../src/dcl.c"
_auto_t = _auto_f -> _fct_argtype -> _name_n_list -> _expr__O2.__C2_tp ; 

#line 739 "../../src/dcl.c"
{ 
#line 739 "../../src/dcl.c"
Pname _auto_an2 ; 

#line 739 "../../src/dcl.c"
_auto_an2 = _type_is_cl_obj ( ( struct type * ) _auto_t ) ; 

#line 740 "../../src/dcl.c"
if ( ( _auto_an2 == 0 ) && _type_is_ref ( ( struct type * ) _auto_t ) ) 
#line 740 "../../src/dcl.c"

#line 740 "../../src/dcl.c"
{ 
#line 740 "../../src/dcl.c"
_auto_t = ( ( ( struct ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 
#line 740 "../../src/dcl.c"

#line 742 "../../src/dcl.c"
rx3 : switch ( _auto_t -> _node_base ) { 
#line 743 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 743 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 746 "../../src/dcl.c"
goto rx3 ; 

#line 747 "../../src/dcl.c"
case 119 : _auto_an2 = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 747 "../../src/dcl.c"
_basetype_b_name ; 
} } 
#line 751 "../../src/dcl.c"
if ( _auto_an1 && ( _auto_an1 == _auto_an2 ) ) ( ( ( struct classdef * 
#line 751 "../../src/dcl.c"
) ( _auto_an1 -> _expr__O2.__C2_tp ) ) ) -> _classdef_bit_ass = 0 ; 
} } 
#line 753 "../../src/dcl.c"
default : _auto_can_overload = 1 ; 
} 
#line 757 "../../src/dcl.c"
switch ( _auto_scope ) { 
#line 757 "../../src/dcl.c"
case 108 : case 136 : { 
#line 760 "../../src/dcl.c"
Pname _auto_nx ; 

#line 760 "../../src/dcl.c"
_auto_nx = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_this , ( int 
#line 760 "../../src/dcl.c"
) 0 ) ; 

#line 761 "../../src/dcl.c"
_auto_this -> _expr__O5.__C5_n_table = 0 ; 

#line 762 "../../src/dcl.c"
_auto_this -> _name_n_tbl_list = 0 ; 

#line 763 "../../src/dcl.c"
if ( Nold && _type_check ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , ( struct type * ) 
#line 763 "../../src/dcl.c"
_auto_nx -> _expr__O2.__C2_tp , ( int ) 0 ) ) 
#line 763 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , ( 
#line 763 "../../src/dcl.c"
char * ) "%n has been declared both as%t and as%t", _auto_this , _auto_nx -> _expr__O2.__C2_tp , _auto_this -> _expr__O2.__C2_tp ) ; 
} 
#line 766 "../../src/dcl.c"
default : _auto_nn = _table_insert ( ( struct table * ) _auto_etbl , ( struct name * ) 
#line 766 "../../src/dcl.c"
_auto_this , ( int ) 0 ) ; 

#line 768 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_nn ) ; 

#line 769 "../../src/dcl.c"
_auto_this -> _expr__O5.__C5_n_table = _auto_etbl ; 

#line 770 "../../src/dcl.c"
break ; 
} 
#line 774 "../../src/dcl.c"
if ( Nold ) { 
#line 774 "../../src/dcl.c"
Pfct _auto_nf ; 

#line 775 "../../src/dcl.c"
_auto_nf = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 777 "../../src/dcl.c"
if ( ( _auto_nf -> _node_base == 141 ) || ( _auto_f -> _node_base == 141 ) ) ; 
else 
#line 779 "../../src/dcl.c"
if ( _auto_nf -> _node_base == 76 ) { 
#line 779 "../../src/dcl.c"
Pgen _auto_g ; 

#line 780 "../../src/dcl.c"
_auto_g = ( ( ( struct gen * ) ( _auto_nf ) ) ) ; 

#line 781 "../../src/dcl.c"
_auto_nn = _gen_add ( ( struct gen * ) _auto_g , ( struct name * ) _auto_this , ( int 
#line 781 "../../src/dcl.c"
) 0 ) ; 

#line 782 "../../src/dcl.c"
_auto_this -> _expr__O3.__C3_string = _auto_nn -> _expr__O3.__C3_string ; 

#line 783 "../../src/dcl.c"
if ( Nold == 0 ) { 
#line 783 "../../src/dcl.c"
if ( _auto_f -> _fct_body ) { 
#line 784 "../../src/dcl.c"
if ( _auto_this -> 
#line 784 "../../src/dcl.c"
_name__O6.__C6_n_qualifier ) 
#line 785 "../../src/dcl.c"
{ 
#line 785 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 0 , ( char * ) "badAL for overloaded %n::%s()", _auto_this -> 
#line 785 "../../src/dcl.c"
_name__O6.__C6_n_qualifier , _auto_g -> _gen_string ) ; 

#line 787 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 788 "../../src/dcl.c"
{ 
#line 788 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 788 "../../src/dcl.c"
return _auto__result ; 
} } } } 
#line 793 "../../src/dcl.c"
goto thth ; 
} else 
#line 795 "../../src/dcl.c"
{ 
#line 795 "../../src/dcl.c"
if ( ( _auto_f -> _fct_body == 0 ) && ( friend_in_class == 0 
#line 795 "../../src/dcl.c"
) ) 
#line 796 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "overloaded%n redeclared", _auto_nn ) ; 
#line 796 "../../src/dcl.c"
} 
#line 799 "../../src/dcl.c"
_auto_nf = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 
#line 799 "../../src/dcl.c"

#line 801 "../../src/dcl.c"
if ( _auto_f -> _fct_body && _auto_nf -> _fct_body ) { 
#line 801 "../../src/dcl.c"
errorFPC__E ( ( char * ) "two definitions of overloaded%n", _auto_nn ) 
#line 801 "../../src/dcl.c"
; 

#line 803 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 804 "../../src/dcl.c"
{ 
#line 804 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 804 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 807 "../../src/dcl.c"
if ( _auto_f -> _fct_body ) goto bdbd ; 

#line 809 "../../src/dcl.c"
goto stst ; 
} else 
#line 811 "../../src/dcl.c"
if ( _auto_nf -> _node_base != 108 ) { 
#line 811 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n declared both as%t and asF", 
#line 811 "../../src/dcl.c"
_auto_this , _auto_nf ) ; 

#line 813 "../../src/dcl.c"
_auto_f -> _fct_body = 0 ; 
} else 
#line 815 "../../src/dcl.c"
if ( _auto_can_overload ) { 
#line 815 "../../src/dcl.c"
if ( _type_check ( ( struct type * ) _auto_nf , 
#line 815 "../../src/dcl.c"
( struct type * ) _auto_f , 76 ) || vrp_equiv ) 
#line 816 "../../src/dcl.c"
{ 
#line 816 "../../src/dcl.c"
if ( _auto_f -> _fct_body && _auto_this -> 
#line 816 "../../src/dcl.c"
_name__O6.__C6_n_qualifier ) 
#line 817 "../../src/dcl.c"
{ 
#line 817 "../../src/dcl.c"
errorFPC__E ( ( char * ) "badAT for%n", _auto_nn ) ; 

#line 819 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 820 "../../src/dcl.c"
{ 
#line 820 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 820 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 822 "../../src/dcl.c"
{ 
#line 822 "../../src/dcl.c"
Pgen _auto_g ; 
Pname _auto_n1 ; 
Pname _auto_n2 ; 

#line 822 "../../src/dcl.c"
_auto_g = ( struct gen * ) _gen__ctor ( ( struct gen * ) 0 , _auto_this -> _expr__O3.__C3_string ) 
#line 822 "../../src/dcl.c"
; 

#line 823 "../../src/dcl.c"
_auto_n1 = _gen_add ( ( struct gen * ) _auto_g , ( struct name * ) _auto_nn , _auto_in_class_dcl ) ; 
#line 823 "../../src/dcl.c"

#line 824 "../../src/dcl.c"
_auto_n2 = _gen_add ( ( struct gen * ) _auto_g , ( struct name * ) _auto_this , ( int 
#line 824 "../../src/dcl.c"
) 0 ) ; 

#line 826 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( _auto_g ) ) ) ; 

#line 827 "../../src/dcl.c"
_auto_nn -> _expr__O3.__C3_string = _auto_g -> _gen_string ; 

#line 828 "../../src/dcl.c"
_auto_nn = _auto_n2 ; 

#line 829 "../../src/dcl.c"
goto thth ; 
} } 
#line 832 "../../src/dcl.c"
if ( _auto_in_class_dcl ) { 
#line 832 "../../src/dcl.c"
errorFPC__E ( ( char * ) "two declarations of%n", _auto_this ) ; 
#line 832 "../../src/dcl.c"

#line 834 "../../src/dcl.c"
_auto_f -> _fct_body = 0 ; 

#line 835 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 836 "../../src/dcl.c"
{ 
#line 836 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 836 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 839 "../../src/dcl.c"
if ( _auto_nf -> _fct_body && _auto_f -> _fct_body ) { 
#line 839 "../../src/dcl.c"
errorFPC__E ( ( char * 
#line 839 "../../src/dcl.c"
) "two definitions of%n", _auto_this ) ; 

#line 841 "../../src/dcl.c"
_auto_f -> _fct_body = 0 ; 

#line 842 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 843 "../../src/dcl.c"
{ 
#line 843 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 843 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 846 "../../src/dcl.c"
if ( _auto_f -> _fct_body ) goto bdbd ; 

#line 848 "../../src/dcl.c"
goto stst ; 
} else 
#line 850 "../../src/dcl.c"
if ( _type_check ( ( struct type * ) _auto_nf , ( struct type * ) 
#line 850 "../../src/dcl.c"
_auto_f , ( int ) 0 ) ) 
#line 850 "../../src/dcl.c"
{ 
#line 850 "../../src/dcl.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 851 "../../src/dcl.c"
case 
#line 851 "../../src/dcl.c"
161 : 
#line 853 "../../src/dcl.c"
case 162 : _auto_f -> _fct_s_returns = _auto_nf -> _fct_s_returns ; 
} 
#line 856 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%nT mismatch:%t and%t", _auto_this , _auto_nf , _auto_f ) ; 

#line 857 "../../src/dcl.c"
_auto_f -> _fct_body = 0 ; 
} else 
#line 859 "../../src/dcl.c"
if ( _auto_nf -> _fct_body && _auto_f -> _fct_body ) { 
#line 859 "../../src/dcl.c"
errorFPC__E ( ( char * ) 
#line 859 "../../src/dcl.c"
"two definitions of%n", _auto_this ) ; 

#line 861 "../../src/dcl.c"
_auto_f -> _fct_body = 0 ; 
} else 
#line 863 "../../src/dcl.c"
if ( _auto_f -> _fct_body ) { 
#line 863 "../../src/dcl.c"
Pname _auto_a1 ; 
Pname _auto_a2 ; 

#line 865 "../../src/dcl.c"
bdbd : if ( _auto_f -> _fct_nargs_known && _auto_nf -> _fct_nargs_known ) for ( ( ( _auto_a1 = _auto_f -> _fct_argtype ) 
#line 865 "../../src/dcl.c"
, ( _auto_a2 = _auto_nf -> _fct_argtype ) ) ;_auto_a1 ;( ( _auto_a1 = _auto_a1 -> _name_n_list ) , ( _auto_a2 = 
#line 865 "../../src/dcl.c"
_auto_a2 -> _name_n_list ) ) ) 
#line 867 "../../src/dcl.c"
{ 
#line 867 "../../src/dcl.c"
int _auto_i1 ; 
int _auto_i2 ; 

#line 868 "../../src/dcl.c"
_auto_i1 = ( _auto_a1 -> _expr__O4.__C4_n_initializer || _auto_a1 -> _name_n_evaluated ) ; 

#line 869 "../../src/dcl.c"
_auto_i2 = ( _auto_a2 -> _expr__O4.__C4_n_initializer || _auto_a2 -> _name_n_evaluated ) ; 

#line 871 "../../src/dcl.c"
if ( _auto_i1 ) { 
#line 871 "../../src/dcl.c"
if ( _auto_i2 && ( ( ( _auto_a1 -> _name_n_evaluated == 0 ) 
#line 871 "../../src/dcl.c"
|| ( _auto_a2 -> _name_n_evaluated == 0 ) ) || ( _auto_a1 -> _name_n_val != _auto_a2 -> _name_n_val ) ) 
#line 871 "../../src/dcl.c"
) 
#line 877 "../../src/dcl.c"
errorFPC__E ( ( char * ) "twoIrs for%nA%n", _auto_nn , _auto_a1 ) ; 
} else 
#line 879 "../../src/dcl.c"
if ( _auto_i2 ) { 
#line 879 "../../src/dcl.c"
_auto_a1 -> _expr__O4.__C4_n_initializer = _auto_a2 -> _expr__O4.__C4_n_initializer ; 

#line 881 "../../src/dcl.c"
_auto_a1 -> _name_n_evaluated = _auto_a2 -> _name_n_evaluated ; 

#line 882 "../../src/dcl.c"
_auto_a1 -> _name_n_val = _auto_a2 -> _name_n_val ; 
} } 
#line 885 "../../src/dcl.c"
_auto_f -> _fct_f_virtual = _auto_nf -> _fct_f_virtual ; 

#line 886 "../../src/dcl.c"
_auto_f -> _fct_f_this = _auto_nf -> _fct_f_this ; 

#line 888 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 

#line 889 "../../src/dcl.c"
if ( _auto_f -> _fct_f_inline ) { 
#line 889 "../../src/dcl.c"
if ( ( _auto_nf -> _fct_f_inline == 0 ) && _auto_nn -> 
#line 889 "../../src/dcl.c"
_name_n_used ) 
#line 891 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n called before defined as inline", _auto_nn ) ; 

#line 892 "../../src/dcl.c"
_auto_nf -> _fct_f_inline = 1 ; 

#line 893 "../../src/dcl.c"
_auto_nn -> _name_n_sto = 31 ; 
} else 
#line 895 "../../src/dcl.c"
if ( _auto_nf -> _fct_f_inline ) { 
#line 895 "../../src/dcl.c"
_auto_f -> _fct_f_inline = 1 ; 
} 
#line 899 "../../src/dcl.c"
goto stst2 ; 
} else 
#line 901 "../../src/dcl.c"
{ 
#line 901 "../../src/dcl.c"
Pname _auto_a1 ; 
Pname _auto_a2 ; 

#line 903 "../../src/dcl.c"
_auto_f -> _fct_f_this = _auto_nf -> _fct_f_this ; 

#line 904 "../../src/dcl.c"
stst : if ( _auto_f -> _fct_nargs_known && _auto_nf -> _fct_nargs_known ) for ( ( ( _auto_a1 = _auto_f -> _fct_argtype ) 
#line 904 "../../src/dcl.c"
, ( _auto_a2 = _auto_nf -> _fct_argtype ) ) ;_auto_a1 ;( ( _auto_a1 = _auto_a1 -> _name_n_list ) , ( _auto_a2 = 
#line 904 "../../src/dcl.c"
_auto_a2 -> _name_n_list ) ) ) 
#line 906 "../../src/dcl.c"
{ 
#line 906 "../../src/dcl.c"
int _auto_i1 ; 
int _auto_i2 ; 

#line 907 "../../src/dcl.c"
_auto_i1 = ( _auto_a1 -> _expr__O4.__C4_n_initializer || _auto_a1 -> _name_n_evaluated ) ; 

#line 908 "../../src/dcl.c"
_auto_i2 = ( _auto_a2 -> _expr__O4.__C4_n_initializer || _auto_a2 -> _name_n_evaluated ) ; 

#line 910 "../../src/dcl.c"
if ( _auto_i1 ) { 
#line 910 "../../src/dcl.c"
if ( _auto_i2 ) { 
#line 911 "../../src/dcl.c"
if ( ( ( _auto_a1 -> _name_n_evaluated == 
#line 911 "../../src/dcl.c"
0 ) || ( _auto_a2 -> _name_n_evaluated == 0 ) ) || ( _auto_a1 -> _name_n_val != _auto_a2 -> 
#line 911 "../../src/dcl.c"
_name_n_val ) ) 
#line 915 "../../src/dcl.c"
errorFPC__E ( ( char * ) "twoIrs for%nA%n", _auto_nn , _auto_a1 ) ; 
} else 
#line 917 "../../src/dcl.c"
if ( _auto_class_name ) errorFPC__E ( ( char * ) "defaultA for%n", _auto_nn ) ; 
} else 
#line 920 "../../src/dcl.c"
if ( _auto_i2 ) { 
#line 920 "../../src/dcl.c"
_auto_a1 -> _expr__O4.__C4_n_initializer = _auto_a2 -> _expr__O4.__C4_n_initializer ; 

#line 922 "../../src/dcl.c"
_auto_a1 -> _name_n_evaluated = _auto_a2 -> _name_n_evaluated ; 

#line 923 "../../src/dcl.c"
_auto_a1 -> _name_n_val = _auto_a2 -> _name_n_val ; 
} } 
#line 926 "../../src/dcl.c"
stst2 : if ( _auto_f -> _fct_f_inline ) _auto_this -> _name_n_sto = 31 ; 

#line 928 "../../src/dcl.c"
if ( ( ( _auto_this -> _name_n_sto && ( _auto_nn -> _name_n_scope != _auto_this -> _name_n_sto ) ) && ( 
#line 928 "../../src/dcl.c"
friend_in_class == 0 ) ) && ( _auto_f -> _fct_f_inline == 0 ) ) 
#line 931 "../../src/dcl.c"
{ 
#line 931 "../../src/dcl.c"
if ( 
#line 931 "../../src/dcl.c"
_auto_this -> _name_n_sto == 31 ) 
#line 932 "../../src/dcl.c"
_auto_nn -> _name_n_sto = 31 ; 
else 
#line 933 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n both%k and%k", _auto_this , _auto_this -> _name_n_sto , _auto_nn -> _name_n_scope ) ; 
} 
#line 935 "../../src/dcl.c"
_auto_this -> _name_n_scope = _auto_nn -> _name_n_scope ; 

#line 936 "../../src/dcl.c"
_auto_this -> _name_n_sto = _auto_nn -> _name_n_sto ; 
} } else 
#line 941 "../../src/dcl.c"
{ 
#line 941 "../../src/dcl.c"
if ( ( _auto_tbl == ( struct table * ) gtbl ) && 
#line 941 "../../src/dcl.c"
_auto_this -> _name_n_oper ) 
#line 942 "../../src/dcl.c"
{ 
#line 942 "../../src/dcl.c"
Pgen _auto_g ; 
Pname _auto_n1 ; 

#line 943 "../../src/dcl.c"
_auto_g = ( struct gen * ) _gen__ctor ( ( struct gen * ) 0 , _auto_this -> _expr__O3.__C3_string ) 
#line 943 "../../src/dcl.c"
; 

#line 944 "../../src/dcl.c"
_auto_n1 = _gen_add ( ( struct gen * ) _auto_g , ( struct name * ) _auto_nn , 1 ) ; 
#line 944 "../../src/dcl.c"

#line 946 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( _auto_g ) ) ) ; 

#line 947 "../../src/dcl.c"
_auto_nn -> _expr__O3.__C3_string = _auto_g -> _gen_string ; 

#line 948 "../../src/dcl.c"
_auto_this -> _expr__O3.__C3_string = _auto_n1 -> _expr__O3.__C3_string ; 

#line 949 "../../src/dcl.c"
_auto_nn = _auto_n1 ; 
} 
#line 951 "../../src/dcl.c"
thth : _auto_just_made = 1 ; 

#line 953 "../../src/dcl.c"
if ( _auto_f -> _fct_f_inline ) _auto_nn -> _name_n_sto = 31 ; 
else 
#line 955 "../../src/dcl.c"
if ( ( ( _auto_class_name == 0 ) && ( _auto_this -> _name_n_sto == 0 ) 
#line 955 "../../src/dcl.c"
) && ( _auto_f -> _fct_body == 0 ) ) 
#line 958 "../../src/dcl.c"
_auto_nn -> _name_n_sto = 14 ; 

#line 960 "../../src/dcl.c"
if ( _auto_class_name && ( _auto_etbl != gtbl ) ) { 
#line 960 "../../src/dcl.c"
Pname _auto_cn ; 
Pname _auto_tt ; 

#line 961 "../../src/dcl.c"
_auto_cn = _auto_nn -> _expr__O5.__C5_n_table -> _table_t_name ; 

#line 962 "../../src/dcl.c"
_auto_tt = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 962 "../../src/dcl.c"
* ) "this") ; 

#line 963 "../../src/dcl.c"
_auto_tt -> _name_n_scope = 136 ; 

#line 964 "../../src/dcl.c"
_auto_tt -> _name_n_sto = 27 ; 

#line 965 "../../src/dcl.c"
_auto_tt -> _expr__O2.__C2_tp = ( ( ( struct classdef * ) ( _auto_class_name -> _expr__O2.__C2_tp ) ) ) -> 
#line 965 "../../src/dcl.c"
_classdef_this_type ; 

#line 966 "../../src/dcl.c"
_auto_tt -> _node_permanent = 1 ; 

#line 967 "../../src/dcl.c"
( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> _fct_f_this = ( 
#line 967 "../../src/dcl.c"
_auto_f -> _fct_f_this = _auto_tt ) ; 

#line 968 "../../src/dcl.c"
_auto_tt -> _name_n_list = _auto_f -> _fct_argtype ; 
} 
#line 971 "../../src/dcl.c"
if ( _auto_f -> _fct_f_virtual ) { 
#line 971 "../../src/dcl.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 972 "../../src/dcl.c"
default : errorFPC__E ( 
#line 972 "../../src/dcl.c"
( char * ) "nonC virtual%n", _auto_this ) ; 

#line 975 "../../src/dcl.c"
break ; 

#line 976 "../../src/dcl.c"
case 0 : case 25 : cc -> _dcl_context_cot -> _classdef_virt_count = 1 ; 

#line 979 "../../src/dcl.c"
( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) -> _fct_f_virtual = 1 ; 
#line 979 "../../src/dcl.c"

#line 980 "../../src/dcl.c"
break ; 
} } } 
#line 988 "../../src/dcl.c"
switch ( _auto_this -> _name_n_oper ) { 
#line 988 "../../src/dcl.c"
case 161 : if ( _auto_f -> _fct_nargs == 
#line 988 "../../src/dcl.c"
1 ) 
#line 990 "../../src/dcl.c"
{ 
#line 990 "../../src/dcl.c"
Ptype _auto_t ; 

#line 991 "../../src/dcl.c"
_auto_t = _auto_f -> _fct_argtype -> _expr__O2.__C2_tp ; 

#line 992 "../../src/dcl.c"
clll : switch ( _auto_t -> _node_base ) { 
#line 993 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 993 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 996 "../../src/dcl.c"
goto clll ; 

#line 997 "../../src/dcl.c"
case 158 : _auto_t = ( ( ( struct ptr * ) ( _auto_t ) ) ) -> 
#line 997 "../../src/dcl.c"
_ptr_typ ; 

#line 999 "../../src/dcl.c"
cxll : switch ( _auto_t -> _node_base ) { 
#line 1000 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 1000 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1003 "../../src/dcl.c"
goto cxll ; 

#line 1004 "../../src/dcl.c"
case 119 : if ( _auto_class_name == ( ( ( struct basetype * ) ( _auto_t ) ) 
#line 1004 "../../src/dcl.c"
) -> _basetype_b_name ) 
#line 1006 "../../src/dcl.c"
( ( ( struct classdef * ) ( _auto_class_name -> _expr__O2.__C2_tp ) ) ) 
#line 1006 "../../src/dcl.c"
-> _classdef_itor = _auto_nn ; 
} 
#line 1008 "../../src/dcl.c"
break ; 

#line 1009 "../../src/dcl.c"
case 119 : if ( _auto_class_name == ( ( ( struct basetype * ) ( _auto_t ) ) 
#line 1009 "../../src/dcl.c"
) -> _basetype_b_name ) 
#line 1011 "../../src/dcl.c"
errorFPC__E ( ( char * ) "impossible constructor: %s(%s)", _auto_class_name -> _expr__O3.__C3_string , _auto_class_name -> _expr__O3.__C3_string ) ; 
#line 1011 "../../src/dcl.c"
} } 
#line 1014 "../../src/dcl.c"
break ; 

#line 1015 "../../src/dcl.c"
case 97 : if ( _auto_just_made ) { 
#line 1017 "../../src/dcl.c"
_auto_nn -> _name_n_list = ( ( ( struct classdef * ) 
#line 1017 "../../src/dcl.c"
( _auto_class_name -> _expr__O2.__C2_tp ) ) ) -> _classdef_conv ; 

#line 1019 "../../src/dcl.c"
( ( ( struct classdef * ) ( _auto_class_name -> _expr__O2.__C2_tp ) ) ) -> _classdef_conv = _auto_nn ; 
#line 1019 "../../src/dcl.c"
} 
#line 1021 "../../src/dcl.c"
break ; 

#line 1022 "../../src/dcl.c"
case 162 : case 23 : case 9 : case 109 : case 0 : break ; 

#line 1028 "../../src/dcl.c"
default : if ( _auto_f -> _fct_nargs_known != 1 ) { 
#line 1029 "../../src/dcl.c"
errorFPC__E ( ( char * ) "ATs must be fully specified for%n", 
#line 1029 "../../src/dcl.c"
_auto_nn ) ; 
} else 
#line 1032 "../../src/dcl.c"
if ( _auto_class_name == 0 ) { 
#line 1032 "../../src/dcl.c"
Pname _auto_a ; 

#line 1034 "../../src/dcl.c"
switch ( _auto_f -> _fct_nargs ) { 
#line 1034 "../../src/dcl.c"
case 1 : case 2 : for ( _auto_a = _auto_f -> _fct_argtype ;_auto_a ;( 
#line 1034 "../../src/dcl.c"
_auto_a = _auto_a -> _name_n_list ) ) 
#line 1037 "../../src/dcl.c"
{ 
#line 1037 "../../src/dcl.c"
Ptype _auto_tx ; 

#line 1038 "../../src/dcl.c"
_auto_tx = _auto_a -> _expr__O2.__C2_tp ; 

#line 1039 "../../src/dcl.c"
if ( _auto_tx -> _node_base == 158 ) _auto_tx = ( ( ( struct ptr * ) ( _auto_tx ) 
#line 1039 "../../src/dcl.c"
) ) -> _ptr_typ ; 

#line 1040 "../../src/dcl.c"
if ( _type_is_cl_obj ( ( struct type * ) _auto_tx ) ) goto cok ; 
} 
#line 1042 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n must take at least oneCTA", _auto_nn ) ; 

#line 1043 "../../src/dcl.c"
break ; 

#line 1044 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "%n must take 1 or 2As", _auto_nn ) ; 
} } else 
#line 1048 "../../src/dcl.c"
{ 
#line 1048 "../../src/dcl.c"
switch ( _auto_f -> _fct_nargs ) { 
#line 1049 "../../src/dcl.c"
case 0 : case 1 : 
#line 1049 "../../src/dcl.c"

#line 1052 "../../src/dcl.c"
break ; 

#line 1053 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "%n must take 0 or 1As", _auto_nn ) ; 
} } 
#line 1057 "../../src/dcl.c"
cok : ; 
} 
#line 1064 "../../src/dcl.c"
if ( _auto_f -> _fct_body ) _fct_dcl ( ( struct fct * ) _auto_f , ( struct name * 
#line 1064 "../../src/dcl.c"
) _auto_nn ) ; 

#line 1065 "../../src/dcl.c"
break ; 
} 
#line 1068 "../../src/dcl.c"
case 114 : { 
#line 1069 "../../src/dcl.c"
Pbase _auto_fld ; 

#line 1069 "../../src/dcl.c"
_auto_fld = ( ( ( struct basetype * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 1071 "../../src/dcl.c"
switch ( _auto_this -> _name_n_stclass ) { 
#line 1071 "../../src/dcl.c"
case 0 : case 25 : break ; 

#line 1075 "../../src/dcl.c"
default : errorFPC__E ( ( char * ) "%k field", _auto_this -> _name_n_stclass ) ; 

#line 1077 "../../src/dcl.c"
_auto_this -> _name_n_stclass = 0 ; 
} 
#line 1080 "../../src/dcl.c"
if ( ( cc -> _dcl_context_not == 0 ) || ( cc -> _dcl_context_cot -> _classdef_csu == 36 ) 
#line 1080 "../../src/dcl.c"
) 
#line 1080 "../../src/dcl.c"
{ 
#line 1080 "../../src/dcl.c"
errorFPC__E ( ( char * ) ( cc -> _dcl_context_not ? "field in union": "field not inC") ) ; 
#line 1080 "../../src/dcl.c"

#line 1082 "../../src/dcl.c"
_auto_this -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 1083 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1084 "../../src/dcl.c"
{ 
#line 1084 "../../src/dcl.c"
{ _auto__result = ( struct name * ) _auto_this ; 

#line 1084 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 1087 "../../src/dcl.c"
if ( _auto_this -> _expr__O3.__C3_string ) { 
#line 1087 "../../src/dcl.c"
_auto_nn = _table_insert ( ( struct table * ) 
#line 1087 "../../src/dcl.c"
_auto_tbl , ( struct name * ) _auto_this , ( int ) 0 ) ; 

#line 1089 "../../src/dcl.c"
_auto_this -> _expr__O5.__C5_n_table = _auto_nn -> _expr__O5.__C5_n_table ; 

#line 1090 "../../src/dcl.c"
if ( Nold ) errorFPC__E ( ( char * ) "twoDs of field%n", _auto_this ) ; 
} 
#line 1093 "../../src/dcl.c"
_type_dcl ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , _auto_tbl ) ; 

#line 1096 "../../src/dcl.c"
{ 
#line 1096 "../../src/dcl.c"
int _auto_a ; 

#line 1096 "../../src/dcl.c"
_auto_a = ( F_SENSITIVE ? _type_align ( ( struct type * ) ( ( ( struct basetype * ) 
#line 1096 "../../src/dcl.c"
( _auto_this -> _expr__O2.__C2_tp ) ) ) -> _basetype__O1.__C1_b_fieldtype ) : SZ_WORD ) ; 

#line 1097 "../../src/dcl.c"
if ( max_align < _auto_a ) max_align = _auto_a ; 

#line 1099 "../../src/dcl.c"
if ( _auto_fld -> _basetype_b_bits == 0 ) { 
#line 1099 "../../src/dcl.c"
int _auto_b ; 

#line 1101 "../../src/dcl.c"
if ( bit_offset ) _auto_fld -> _basetype_b_bits = ( BI_IN_WORD - bit_offset ) ; 
else 
#line 1103 "../../src/dcl.c"
if ( _auto_b = ( byte_offset % SZ_WORD ) ) _auto_fld -> _basetype_b_bits = ( _auto_b * BI_IN_BYTE ) ; 
#line 1103 "../../src/dcl.c"

#line 1105 "../../src/dcl.c"
if ( max_align < SZ_WORD ) max_align = SZ_WORD ; 
} else 
#line 1107 "../../src/dcl.c"
if ( bit_offset == 0 ) { 
#line 1107 "../../src/dcl.c"
int _auto_b ; 

#line 1108 "../../src/dcl.c"
_auto_b = ( byte_offset % SZ_WORD ) ; 

#line 1109 "../../src/dcl.c"
if ( _auto_b ) { 
#line 1109 "../../src/dcl.c"
byte_offset -= _auto_b ; 

#line 1111 "../../src/dcl.c"
bit_offset = ( _auto_b * BI_IN_BYTE ) ; 
} } 
#line 1115 "../../src/dcl.c"
{ 
#line 1115 "../../src/dcl.c"
int _auto_x ; 

#line 1115 "../../src/dcl.c"
_auto_x = ( bit_offset += _auto_fld -> _basetype_b_bits ) ; 

#line 1116 "../../src/dcl.c"
if ( BI_IN_WORD < _auto_x ) { 
#line 1116 "../../src/dcl.c"
_auto_fld -> _basetype_b_offset = 0 ; 

#line 1118 "../../src/dcl.c"
byte_offset += SZ_WORD ; 

#line 1119 "../../src/dcl.c"
bit_offset = _auto_fld -> _basetype_b_bits ; 
} else 
#line 1121 "../../src/dcl.c"
{ 
#line 1121 "../../src/dcl.c"
_auto_fld -> _basetype_b_offset = bit_offset ; 

#line 1123 "../../src/dcl.c"
if ( BI_IN_WORD == _auto_x ) { 
#line 1123 "../../src/dcl.c"
bit_offset = 0 ; 

#line 1125 "../../src/dcl.c"
byte_offset += SZ_WORD ; 
} else 
#line 1128 "../../src/dcl.c"
bit_offset = _auto_x ; 
} 
#line 1130 "../../src/dcl.c"
_auto_this -> _name_n_offset = byte_offset ; 

#line 1131 "../../src/dcl.c"
break ; 
} } } 
#line 1134 "../../src/dcl.c"
case 119 : { 
#line 1135 "../../src/dcl.c"
Pclass _auto_cl ; 

#line 1135 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( ( ( ( struct basetype * ) 
#line 1135 "../../src/dcl.c"
( _auto_this -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 

#line 1137 "../../src/dcl.c"
if ( _auto_cl -> _classdef_csu == 167 ) { 
#line 1137 "../../src/dcl.c"
Pname _auto_nn ; 
int _auto_i ; 
int _auto_uindex ; 
Ptable _auto_mtbl ; 
char * _auto_p ; 

#line 1141 "../../src/dcl.c"
_auto_mtbl = _auto_cl -> _classdef_memtbl ; 

#line 1142 "../../src/dcl.c"
_auto_p = _auto_cl -> _classdef_string ; 

#line 1144 "../../src/dcl.c"
if ( _auto_tbl == ( struct table * ) gtbl ) errorFI_PC__E ( ( int ) 's' , ( 
#line 1144 "../../src/dcl.c"
char * ) "global anonymous union") ; 

#line 1145 "../../src/dcl.c"
while ( ( * ( _auto_p ++ ) ) != 'C' ) ; 

#line 1146 "../../src/dcl.c"
_auto_uindex = str_to_int ( _auto_p ) ; 

#line 1147 "../../src/dcl.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_mtbl , _auto_i = 1 ) ;_auto_nn ;( _auto_nn = _table_get_mem ( 
#line 1147 "../../src/dcl.c"
( struct table * ) _auto_mtbl , ++ _auto_i ) ) ) 
#line 1147 "../../src/dcl.c"
{ 
#line 1147 "../../src/dcl.c"
Ptable _auto_tb ; 

#line 1148 "../../src/dcl.c"
_auto_tb = _auto_nn -> _expr__O5.__C5_n_table ; 

#line 1149 "../../src/dcl.c"
_auto_nn -> _expr__O5.__C5_n_table = 0 ; 

#line 1150 "../../src/dcl.c"
{ 
#line 1150 "../../src/dcl.c"
Pname _auto_n ; 

#line 1150 "../../src/dcl.c"
_auto_n = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_nn , ( int 
#line 1150 "../../src/dcl.c"
) 0 ) ; 

#line 1151 "../../src/dcl.c"
_auto_n -> _name_n_union = _auto_uindex ; 

#line 1152 "../../src/dcl.c"
_auto_nn -> _expr__O5.__C5_n_table = _auto_tb ; 
} } } 
#line 1155 "../../src/dcl.c"
goto cde ; 
} 
#line 1158 "../../src/dcl.c"
case 110 : case 125 : case 158 : _type_dcl ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , 
#line 1158 "../../src/dcl.c"
_auto_tbl ) ; 

#line 1163 "../../src/dcl.c"
default : cde : _auto_nn = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) 
#line 1163 "../../src/dcl.c"
_auto_this , ( int ) 0 ) ; 

#line 1167 "../../src/dcl.c"
_auto_this -> _expr__O5.__C5_n_table = _auto_nn -> _expr__O5.__C5_n_table ; 

#line 1169 "../../src/dcl.c"
if ( Nold ) { 
#line 1169 "../../src/dcl.c"
if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base == 141 ) goto zzz ; 

#line 1172 "../../src/dcl.c"
if ( _type_check ( ( struct type * ) _auto_this -> _expr__O2.__C2_tp , ( struct type * ) _auto_nn -> 
#line 1172 "../../src/dcl.c"
_expr__O2.__C2_tp , ( int ) 0 ) ) 
#line 1172 "../../src/dcl.c"
{ 
#line 1172 "../../src/dcl.c"
errorFPC__E ( ( char * ) "twoDs of%n;Ts:%t and%t", 
#line 1172 "../../src/dcl.c"
_auto_this , _auto_nn -> _expr__O2.__C2_tp , _auto_this -> _expr__O2.__C2_tp ) ; 

#line 1174 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1175 "../../src/dcl.c"
{ 
#line 1175 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1175 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 1178 "../../src/dcl.c"
if ( _auto_this -> _name_n_sto && ( _auto_this -> _name_n_sto != _auto_nn -> _name_n_scope ) ) errorFPC__E ( 
#line 1178 "../../src/dcl.c"
( char * ) "%n both%k and not%k", _auto_this , _auto_this -> _name_n_sto , _auto_this -> _name_n_sto ) ; 
else 
#line 1180 "../../src/dcl.c"
if ( ( _auto_nn -> _name_n_scope == 31 ) && ( _auto_this -> _name_n_scope == 14 ) ) errorFPC__E ( 
#line 1180 "../../src/dcl.c"
( char * ) "%n both static and extern", _auto_this ) ; 
else 
#line 1182 "../../src/dcl.c"
if ( ( _auto_nn -> _name_n_sto == 31 ) && ( _auto_this -> _name_n_sto == 31 ) ) errorFPC__E ( 
#line 1182 "../../src/dcl.c"
( char * ) "static%n declared twice", _auto_this ) ; 
else 
#line 1184 "../../src/dcl.c"
{ 
#line 1184 "../../src/dcl.c"
_auto_this -> _name_n_scope = _auto_nn -> _name_n_scope ; 

#line 1188 "../../src/dcl.c"
switch ( _auto_scope ) { 
#line 1188 "../../src/dcl.c"
case 108 : errorFPC__E ( ( char * ) "twoDs of%n", _auto_this ) ; 
#line 1188 "../../src/dcl.c"

#line 1191 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1192 "../../src/dcl.c"
{ 
#line 1192 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1192 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 1193 "../../src/dcl.c"
case 136 : errorFPC__E ( ( char * ) "two arguments%n", _auto_this ) ; 

#line 1195 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1196 "../../src/dcl.c"
{ 
#line 1196 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1196 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 1197 "../../src/dcl.c"
case 0 : case 25 : errorFPC__E ( ( char * ) "twoDs ofM%n", _auto_this ) 
#line 1197 "../../src/dcl.c"
; 

#line 1200 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1201 "../../src/dcl.c"
{ 
#line 1201 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1201 "../../src/dcl.c"
return _auto__result ; 
} } 
#line 1202 "../../src/dcl.c"
case 14 : if ( ( ( fct_void == 0 ) && ( _auto_this -> 
#line 1202 "../../src/dcl.c"
_name_n_sto == 0 ) ) && ( _auto_nn -> _name_n_sto == 0 ) ) 
#line 1205 "../../src/dcl.c"
{ 
#line 1205 "../../src/dcl.c"
errorFPC__E ( ( 
#line 1205 "../../src/dcl.c"
char * ) "two definitions of%n", _auto_this ) ; 

#line 1207 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1208 "../../src/dcl.c"
{ 
#line 1208 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1208 "../../src/dcl.c"
return _auto__result ; 
} } } } } 
#line 1212 "../../src/dcl.c"
_auto_this -> _name_n_scope = _auto_nn -> _name_n_scope ; 

#line 1214 "../../src/dcl.c"
if ( _auto_this -> _expr__O4.__C4_n_initializer ) { 
#line 1214 "../../src/dcl.c"
if ( _auto_nn -> _expr__O4.__C4_n_initializer || _auto_nn -> _name_n_val ) errorFPC__E ( ( char 
#line 1214 "../../src/dcl.c"
* ) "twoIrs for%n", _auto_this ) ; 

#line 1216 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = _auto_this -> _expr__O4.__C4_n_initializer ; 
} } else 
#line 1219 "../../src/dcl.c"
{ 
#line 1219 "../../src/dcl.c"
} zzz : if ( _auto_this -> _node_base != 123 ) { 
#line 1229 "../../src/dcl.c"
Ptype _auto_t ; 

#line 1230 "../../src/dcl.c"
_auto_t = _auto_nn -> _expr__O2.__C2_tp ; 

#line 1232 "../../src/dcl.c"
if ( _auto_t -> _node_base == 97 ) { 
#line 1232 "../../src/dcl.c"
Ptype _auto_tt ; 

#line 1233 "../../src/dcl.c"
_auto_tt = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 
#line 1233 "../../src/dcl.c"

#line 1234 "../../src/dcl.c"
if ( _auto_tt -> _node_base == 108 ) _auto_nn -> _expr__O2.__C2_tp = ( _auto_t = _auto_tt ) ; 
} 
#line 1237 "../../src/dcl.c"
switch ( _auto_nn -> _name_n_stclass ) { 
#line 1237 "../../src/dcl.c"
default : switch ( _auto_t -> _node_base ) { 
#line 1239 "../../src/dcl.c"
case 
#line 1239 "../../src/dcl.c"
108 : 
#line 1241 "../../src/dcl.c"
case 76 : break ; 

#line 1243 "../../src/dcl.c"
default : { 
#line 1244 "../../src/dcl.c"
int _auto_x ; 
int _auto_y ; 

#line 1244 "../../src/dcl.c"
_auto_x = _type_align ( ( struct type * ) _auto_t ) ; 

#line 1245 "../../src/dcl.c"
_auto_y = _type_tsizeof ( ( struct type * ) _auto_t ) ; 

#line 1247 "../../src/dcl.c"
if ( max_align < _auto_x ) max_align = _auto_x ; 

#line 1249 "../../src/dcl.c"
while ( 0 < bit_offset ) { 
#line 1249 "../../src/dcl.c"
byte_offset ++ ; 

#line 1251 "../../src/dcl.c"
bit_offset -= BI_IN_BYTE ; 
} 
#line 1253 "../../src/dcl.c"
bit_offset = 0 ; 

#line 1255 "../../src/dcl.c"
if ( byte_offset && ( 1 < _auto_x ) ) byte_offset = ( ( ( ( byte_offset - 1 ) 
#line 1255 "../../src/dcl.c"
/ _auto_x ) * _auto_x ) + _auto_x ) ; 

#line 1256 "../../src/dcl.c"
_auto_nn -> _name_n_offset = byte_offset ; 

#line 1257 "../../src/dcl.c"
byte_offset += _auto_y ; 
} } 
#line 1260 "../../src/dcl.c"
break ; 

#line 1261 "../../src/dcl.c"
case 31 : switch ( _auto_t -> _node_base ) { 
#line 1262 "../../src/dcl.c"
case 108 : case 76 : break ; 

#line 1266 "../../src/dcl.c"
default : _type_tsizeof ( ( struct type * ) _auto_t ) ; 
} 
#line 1269 "../../src/dcl.c"
break ; 
} } 
#line 1273 "../../src/dcl.c"
{ 
#line 1273 "../../src/dcl.c"
Ptype _auto_t ; 
int _auto_const_old ; 
bit _auto_vec_seen ; 
Pexpr _auto_init ; 

#line 1273 "../../src/dcl.c"
_auto_t = _auto_nn -> _expr__O2.__C2_tp ; 

#line 1274 "../../src/dcl.c"
_auto_const_old = const_save ; 

#line 1275 "../../src/dcl.c"
_auto_vec_seen = 0 ; 

#line 1276 "../../src/dcl.c"
_auto_init = _auto_this -> _expr__O4.__C4_n_initializer ; 

#line 1278 "../../src/dcl.c"
if ( _auto_init ) { 
#line 1278 "../../src/dcl.c"
switch ( _auto_this -> _name_n_scope ) { 
#line 1279 "../../src/dcl.c"
case 0 : case 25 : 
#line 1279 "../../src/dcl.c"

#line 1282 "../../src/dcl.c"
if ( _auto_this -> _name_n_stclass != 31 ) errorFPC__E ( ( char * ) "Ir forM%n", _auto_this ) ; 

#line 1283 "../../src/dcl.c"
break ; 
} } 
#line 1289 "../../src/dcl.c"
lll : switch ( _auto_t -> _node_base ) { 
#line 1290 "../../src/dcl.c"
case 158 : if ( _auto_init ) { 
#line 1290 "../../src/dcl.c"

#line 1292 "../../src/dcl.c"

#line 1293 "../../src/dcl.c"
if ( _auto_nn -> _name_n_scope == 136 ) break ; 

#line 1294 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 1295 "../../src/dcl.c"
if ( ( _auto_this -> _name_n_sto == 31 ) && ( _expr_lval ( ( struct expr * ) _auto_init , 
#line 1295 "../../src/dcl.c"
( int ) 0 ) == 0 ) ) 
#line 1296 "../../src/dcl.c"
errorFPC__E ( ( char * ) 
#line 1296 "../../src/dcl.c"
"Ir for static reference%n not an lvalue", _auto_this ) ; 
else 
#line 1297 "../../src/dcl.c"
{ 
#line 1297 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = ( _auto_this -> _expr__O4.__C4_n_initializer = ref_init ( ( ( struct ptr * ) ( 
#line 1297 "../../src/dcl.c"
_auto_t ) ) , ( struct expr * ) _auto_init , _auto_tbl ) ) ; 
} 
#line 1302 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_nn ) ; 
} else 
#line 1304 "../../src/dcl.c"
{ 
#line 1304 "../../src/dcl.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 1305 "../../src/dcl.c"
default : if ( _auto_this -> _name_n_sto == 
#line 1305 "../../src/dcl.c"
14 ) 
#line 1307 "../../src/dcl.c"
break ; 

#line 1308 "../../src/dcl.c"
errorFPC__E ( ( char * ) "unId reference%n", _auto_this ) ; 

#line 1309 "../../src/dcl.c"
case 136 : break ; 

#line 1311 "../../src/dcl.c"
case 25 : case 0 : if ( _auto_this -> _name_n_sto == 31 ) errorFPC__E ( ( char * 
#line 1311 "../../src/dcl.c"
) "a staticM%n cannot be a reference", _auto_this ) ; 

#line 1314 "../../src/dcl.c"
break ; 
} } 
#line 1317 "../../src/dcl.c"
break ; 

#line 1318 "../../src/dcl.c"
case 119 : { 
#line 1319 "../../src/dcl.c"
Pname _auto_cn ; 
Pclass _auto_cl ; 
Pname _auto_ctor ; 
Pname _auto_dtor ; 

#line 1319 "../../src/dcl.c"
_auto_cn = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name ; 

#line 1320 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1321 "../../src/dcl.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 1321 "../../src/dcl.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 1322 "../../src/dcl.c"
_auto_dtor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 1322 "../../src/dcl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 1324 "../../src/dcl.c"
if ( _auto_dtor ) { 
#line 1324 "../../src/dcl.c"
Pstmt _auto_dls ; 

#line 1326 "../../src/dcl.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 1326 "../../src/dcl.c"
case 14 : if ( _auto_this -> _name_n_sto == 14 ) break ; 
#line 1326 "../../src/dcl.c"

#line 1329 "../../src/dcl.c"
case 31 : { 
#line 1330 "../../src/dcl.c"
Ptable _auto_otbl ; 

#line 1330 "../../src/dcl.c"
_auto_otbl = _auto_tbl ; 

#line 1334 "../../src/dcl.c"
if ( std_tbl == 0 ) std_tbl = ( struct table * ) _table__ctor ( ( struct table * 
#line 1334 "../../src/dcl.c"
) 0 , 8 , ( struct table * ) gtbl , ( struct name * ) 0 
#line 1334 "../../src/dcl.c"
) ; 

#line 1335 "../../src/dcl.c"
_auto_tbl = ( struct table * ) std_tbl ; 

#line 1336 "../../src/dcl.c"
if ( _auto_vec_seen ) { 
#line 1336 "../../src/dcl.c"
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1337 "../../src/dcl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 1338 "../../src/dcl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1338 "../../src/dcl.c"
struct expr * ) ( ( ( struct expr * ) ( _type_tsizeof ( ( struct type * 
#line 1338 "../../src/dcl.c"
) _auto_nn -> _expr__O2.__C2_tp ) / _auto_esz ) ) ) , ( struct expr * ) 0 ) 
#line 1338 "../../src/dcl.c"
; 

#line 1339 "../../src/dcl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1339 "../../src/dcl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 1339 "../../src/dcl.c"
( struct expr * ) 0 ) ; 

#line 1340 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1340 "../../src/dcl.c"
struct expr * ) _auto_dtor , ( struct expr * ) zero ) ; 

#line 1341 "../../src/dcl.c"
_expr_lval ( ( struct expr * ) _auto_dtor , 112 ) ; 

#line 1342 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1342 "../../src/dcl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 1343 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1343 "../../src/dcl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 1344 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1344 "../../src/dcl.c"
struct expr * ) _auto_nn , ( struct expr * ) _auto_arg ) ; 

#line 1345 "../../src/dcl.c"
_auto_arg = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1345 "../../src/dcl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1345 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_del_fct ) , 
#line 1345 "../../src/dcl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1346 "../../src/dcl.c"
_auto_arg -> _node_base = 146 ; 

#line 1347 "../../src/dcl.c"
_auto_arg -> _expr__O5.__C5_fct_name = vec_del_fct ; 

#line 1348 "../../src/dcl.c"
_auto_arg -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 

#line 1349 "../../src/dcl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1349 "../../src/dcl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1349 "../../src/dcl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_nn -> _name_where , ( ( struct stmt * ) 
#line 1349 "../../src/dcl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1349 "../../src/dcl.c"
) _auto_arg ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} else 
#line 1351 "../../src/dcl.c"
{ 
#line 1351 "../../src/dcl.c"
Pref _auto_r ; 
Pexpr _auto_ee ; 
Pcall _auto_dl ; 
struct estmt * _auto__Xthis__ctor_estmt ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 

#line 1352 "../../src/dcl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1352 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1352 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_nn ) , 
#line 1352 "../../src/dcl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1352 "../../src/dcl.c"
( struct name * ) _auto_dtor ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1353 "../../src/dcl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1353 "../../src/dcl.c"
struct expr * ) zero , ( struct expr * ) 0 ) ; 

#line 1354 "../../src/dcl.c"
_auto_dl = ( struct call * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1354 "../../src/dcl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1354 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_r ) , 
#line 1354 "../../src/dcl.c"
( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1355 "../../src/dcl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1355 "../../src/dcl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1355 "../../src/dcl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_nn -> _name_where , ( ( struct stmt * ) 
#line 1355 "../../src/dcl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1355 "../../src/dcl.c"
) _auto_dl ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1356 "../../src/dcl.c"
_auto_dl -> _node_base = 146 ; 

#line 1357 "../../src/dcl.c"
_auto_dl -> _expr__O5.__C5_fct_name = _auto_dtor ; 

#line 1358 "../../src/dcl.c"
_auto_dl -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} 
#line 1361 "../../src/dcl.c"
if ( st_dlist ) _auto_dls -> _stmt_s_list = st_dlist ; 

#line 1362 "../../src/dcl.c"
st_dlist = _auto_dls ; 

#line 1363 "../../src/dcl.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 
} } } 
#line 1367 "../../src/dcl.c"
if ( _auto_ctor ) { 
#line 1367 "../../src/dcl.c"
Pexpr _auto_oo ; 

#line 1368 "../../src/dcl.c"
_auto_oo = ( struct expr * ) _auto_nn ; 

#line 1369 "../../src/dcl.c"
{ 
#line 1369 "../../src/dcl.c"
int _auto_vi ; 

#line 1369 "../../src/dcl.c"
_auto_vi = _auto_vec_seen ; 

#line 1369 "../../src/dcl.c"
for ( ;_auto_vi ;( _auto_vi -- ) ) _auto_oo = _expr_contents ( ( struct expr * ) _auto_oo ) ; 
#line 1369 "../../src/dcl.c"

#line 1370 "../../src/dcl.c"
{ 
#line 1370 "../../src/dcl.c"
int _auto_sti ; 

#line 1370 "../../src/dcl.c"
_auto_sti = 0 ; 

#line 1372 "../../src/dcl.c"
switch ( _auto_nn -> _name_n_scope ) { 
#line 1372 "../../src/dcl.c"
case 14 : if ( ( _auto_init == 0 ) && 
#line 1372 "../../src/dcl.c"
( _auto_this -> _name_n_sto == 14 ) ) 
#line 1374 "../../src/dcl.c"
goto ggg ; 

#line 1375 "../../src/dcl.c"
case 31 : _auto_sti = 1 ; 

#line 1377 "../../src/dcl.c"
if ( _auto_tbl != ( struct table * ) gtbl ) { 
#line 1377 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 's' , 
#line 1377 "../../src/dcl.c"
( char * ) "local static%n of class with constructor", _auto_this ) ; 
} 
#line 1382 "../../src/dcl.c"
default : if ( _auto_vec_seen && _auto_init ) { 
#line 1383 "../../src/dcl.c"
errorFPC__E ( ( char * ) "Ir forCO%n\[\]", 
#line 1383 "../../src/dcl.c"
_auto_this ) ; 

#line 1385 "../../src/dcl.c"
_auto_this -> _expr__O4.__C4_n_initializer = ( _auto_init = 0 ) ; 
} 
#line 1387 "../../src/dcl.c"
break ; 

#line 1388 "../../src/dcl.c"
case 136 : case 25 : case 0 : goto ggg ; 
} 
#line 1405 "../../src/dcl.c"
const_save = 1 ; 

#line 1406 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_nn ) ; 

#line 1408 "../../src/dcl.c"
{ 
#line 1408 "../../src/dcl.c"
Ptable _auto_otbl ; 
Pname _auto_c ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1408 "../../src/dcl.c"
_auto_otbl = _auto_tbl ; 

#line 1409 "../../src/dcl.c"
if ( _auto_sti ) { 
#line 1409 "../../src/dcl.c"
if ( sti_tbl == 0 ) sti_tbl = ( struct table * ) 
#line 1409 "../../src/dcl.c"
_table__ctor ( ( struct table * ) 0 , 8 , ( struct table * ) gtbl , ( 
#line 1409 "../../src/dcl.c"
struct name * ) 0 ) ; 

#line 1413 "../../src/dcl.c"
_auto_tbl = ( struct table * ) sti_tbl ; 

#line 1414 "../../src/dcl.c"
if ( _auto_this -> _name_n_sto == 14 ) _auto_nn -> _name_n_sto = ( _auto_this -> _name_n_sto = 0 ) ; 
} 
#line 1417 "../../src/dcl.c"
if ( _auto_init ) { 
#line 1417 "../../src/dcl.c"
if ( _auto_init -> _node_base == 157 ) { 
#line 1418 "../../src/dcl.c"
switch ( _auto_init -> 
#line 1418 "../../src/dcl.c"
_expr__O5.__C5_tp2 -> _node_base ) 
#line 1420 "../../src/dcl.c"
{ 
#line 1420 "../../src/dcl.c"
case 6 : if ( ( ( ( struct classdef * ) ( 
#line 1420 "../../src/dcl.c"
_auto_init -> _expr__O5.__C5_tp2 ) ) ) != ( struct classdef * ) _auto_cl ) 
#line 1422 "../../src/dcl.c"
goto inin ; 

#line 1423 "../../src/dcl.c"
break ; 

#line 1424 "../../src/dcl.c"
default : { 
#line 1425 "../../src/dcl.c"
Pname _auto_n2 ; 

#line 1425 "../../src/dcl.c"
_auto_n2 = _type_is_cl_obj ( ( struct type * ) _auto_init -> _expr__O5.__C5_tp2 ) ; 

#line 1426 "../../src/dcl.c"
if ( ( _auto_n2 == 0 ) || ( ( ( ( struct classdef * ) 
#line 1426 "../../src/dcl.c"
( _auto_n2 -> _expr__O2.__C2_tp ) ) ) != ( struct classdef * ) _auto_cl ) ) 
#line 1426 "../../src/dcl.c"
goto inin ; 
#line 1426 "../../src/dcl.c"
} } 
#line 1428 "../../src/dcl.c"
_auto_init -> _expr__O4.__C4_e2 = _auto_oo ; 

#line 1429 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 
} else 
#line 1431 "../../src/dcl.c"
{ 
#line 1431 "../../src/dcl.c"
inin : _auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 1435 "../../src/dcl.c"
_auto_init = class_init ( ( struct expr * ) _auto_nn , ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( 
#line 1435 "../../src/dcl.c"
struct expr * ) _auto_init , _auto_tbl ) ; 
} } else 
#line 1438 "../../src/dcl.c"
{ 
#line 1438 "../../src/dcl.c"
_auto_init = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) 
#line 1438 "../../src/dcl.c"
, ( ( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) 
#line 1438 "../../src/dcl.c"
_expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , ( ( struct 
#line 1438 "../../src/dcl.c"
expr * ) 0 ) , ( struct expr * ) 0 ) ) ) , 
#line 1438 "../../src/dcl.c"
( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) _auto_cl ) ) , _auto__Xthis__ctor_texpr ) ) 
#line 1438 "../../src/dcl.c"
) ; 

#line 1440 "../../src/dcl.c"
_auto_init -> _expr__O4.__C4_e2 = _auto_oo ; 

#line 1441 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 
} 
#line 1443 "../../src/dcl.c"
; 

#line 1444 "../../src/dcl.c"
if ( _auto_vec_seen ) { 
#line 1444 "../../src/dcl.c"
_auto_c = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ; 

#line 1446 "../../src/dcl.c"
if ( _auto_c == 0 ) errorFPC__E ( ( char * ) "vector ofC%n that do not have a constructor taking noAs", _auto_cn ) ; 
else 
#line 1448 "../../src/dcl.c"
if ( ( ( ( struct fct * ) ( _auto_c -> _expr__O2.__C2_tp ) ) ) 
#line 1448 "../../src/dcl.c"
-> _fct_nargs ) 
#line 1449 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "defaultAs for constructor for vector ofC%n", _auto_cn ) ; 
#line 1449 "../../src/dcl.c"
} 
#line 1452 "../../src/dcl.c"
if ( _auto_sti ) { 
#line 1452 "../../src/dcl.c"
if ( _auto_vec_seen ) { 
#line 1453 "../../src/dcl.c"
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 

#line 1454 "../../src/dcl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 1455 "../../src/dcl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1455 "../../src/dcl.c"
struct expr * ) ( ( ( struct expr * ) ( _type_tsizeof ( ( struct type * 
#line 1455 "../../src/dcl.c"
) _auto_nn -> _expr__O2.__C2_tp ) / _auto_esz ) ) ) , ( struct expr * ) 0 ) 
#line 1455 "../../src/dcl.c"
; 

#line 1456 "../../src/dcl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1456 "../../src/dcl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 1456 "../../src/dcl.c"
( struct expr * ) 0 ) ; 

#line 1457 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1457 "../../src/dcl.c"
struct expr * ) _auto_c , ( struct expr * ) 0 ) ; 

#line 1458 "../../src/dcl.c"
_expr_lval ( ( struct expr * ) _auto_c , 112 ) ; 

#line 1459 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1459 "../../src/dcl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 1460 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1460 "../../src/dcl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 1461 "../../src/dcl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1461 "../../src/dcl.c"
struct expr * ) _auto_nn , ( struct expr * ) _auto_arg ) ; 

#line 1462 "../../src/dcl.c"
_auto_init = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1462 "../../src/dcl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1462 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_new_fct ) , 
#line 1462 "../../src/dcl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1463 "../../src/dcl.c"
_auto_init -> _node_base = 146 ; 

#line 1464 "../../src/dcl.c"
_auto_init -> _expr__O5.__C5_fct_name = vec_new_fct ; 

#line 1465 "../../src/dcl.c"
_auto_init -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} else 
#line 1467 "../../src/dcl.c"
{ 
#line 1467 "../../src/dcl.c"
switch ( _auto_init -> _node_base ) { 
#line 1469 "../../src/dcl.c"
case 111 : if ( _auto_init -> _expr__O3.__C3_e1 -> 
#line 1469 "../../src/dcl.c"
_node_base == 146 ) 
#line 1471 "../../src/dcl.c"
{ 
#line 1471 "../../src/dcl.c"
Pname _auto_fn ; 

#line 1472 "../../src/dcl.c"
_auto_fn = _auto_init -> _expr__O3.__C3_e1 -> _expr__O5.__C5_fct_name ; 

#line 1473 "../../src/dcl.c"
if ( ( _auto_fn == 0 ) || ( _auto_fn -> _name_n_oper != 161 ) ) goto as ; 
#line 1473 "../../src/dcl.c"

#line 1474 "../../src/dcl.c"
_auto_init = _auto_init -> _expr__O3.__C3_e1 ; 

#line 1475 "../../src/dcl.c"
break ; 
} 
#line 1477 "../../src/dcl.c"
goto as ; 

#line 1478 "../../src/dcl.c"
case 70 : if ( _auto_init -> _expr__O3.__C3_e1 == ( struct expr * ) _auto_nn ) break ; 

#line 1480 "../../src/dcl.c"
as : default : _auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 1480 "../../src/dcl.c"
, 70 , ( struct expr * ) _auto_nn , ( struct expr * ) _auto_init ) ; 
} } 
#line 1485 "../../src/dcl.c"
{ 
#line 1485 "../../src/dcl.c"
Pstmt _auto_ist ; 

#line 1487 "../../src/dcl.c"
static Pstmt _static_itail = 0 ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1485 "../../src/dcl.c"
_auto_ist = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1485 "../../src/dcl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1485 "../../src/dcl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_nn -> _name_where , ( ( struct stmt * ) 
#line 1485 "../../src/dcl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1485 "../../src/dcl.c"
) _auto_init ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1488 "../../src/dcl.c"
if ( st_ilist == 0 ) st_ilist = _auto_ist ; 
else 
#line 1491 "../../src/dcl.c"
_static_itail -> _stmt_s_list = _auto_ist ; 

#line 1492 "../../src/dcl.c"
_static_itail = _auto_ist ; 

#line 1493 "../../src/dcl.c"
_auto_init = 0 ; 
} } 
#line 1495 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = ( _auto_this -> _expr__O4.__C4_n_initializer = _auto_init ) ; 

#line 1496 "../../src/dcl.c"
const_save = _auto_const_old ; 

#line 1497 "../../src/dcl.c"
_auto_tbl = ( struct table * ) _auto_otbl ; 
} } } } else 
#line 1499 "../../src/dcl.c"
if ( _auto_init == 0 ) goto str ; 
else 
#line 1501 "../../src/dcl.c"
if ( ( ( ( ( ( ( struct classdef * ) _auto_cl ) -> 
#line 1501 "../../src/dcl.c"
_classdef_csu == 6 ) ? 0: ( ( ( int ) ( ( ( struct classdef * 
#line 1501 "../../src/dcl.c"
) _auto_cl ) -> _classdef_csu ) ) ) ) ) && ( _auto_cl -> _classdef_csu != 36 ) ) 
#line 1501 "../../src/dcl.c"
&& ( _auto_cl -> _classdef_csu != 167 ) ) 
#line 1502 "../../src/dcl.c"
goto str ; 
else 
#line 1503 "../../src/dcl.c"
if ( _auto_init -> _node_base == 124 ) { 
#line 1503 "../../src/dcl.c"
errorFPC__E ( ( char * ) "cannotI%n withIrL", _auto_nn ) 
#line 1503 "../../src/dcl.c"
; 
} else 
#line 1506 "../../src/dcl.c"
{ 
#line 1506 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 

#line 1510 "../../src/dcl.c"
if ( _type_check ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( struct type * ) _auto_init -> 
#line 1510 "../../src/dcl.c"
_expr__O2.__C2_tp , 70 ) == 0 ) 
#line 1511 "../../src/dcl.c"
goto str ; 
else 
#line 1513 "../../src/dcl.c"
errorFPC__E ( ( char * ) "cannotI%n:C %s has privateMs but no constructor", _auto_nn , _auto_cl -> _classdef_string ) ; 
} 
#line 1515 "../../src/dcl.c"
break ; 
} 
#line 1517 "../../src/dcl.c"
case 110 : _auto_t = ( ( ( struct vec * ) ( _auto_t ) ) ) 
#line 1517 "../../src/dcl.c"
-> _vec_typ ; 

#line 1519 "../../src/dcl.c"
_auto_vec_seen ++ ; 

#line 1520 "../../src/dcl.c"
goto lll ; 

#line 1521 "../../src/dcl.c"
case 97 : if ( ( _auto_init == 0 ) && ( ( ( struct basetype * 
#line 1521 "../../src/dcl.c"
) ( _auto_t ) ) ) -> _basetype_b_const ) 
#line 1522 "../../src/dcl.c"
{ 
#line 1522 "../../src/dcl.c"
switch ( _auto_this -> _name_n_scope ) { 
#line 1523 "../../src/dcl.c"
case 
#line 1523 "../../src/dcl.c"
136 : 
#line 1525 "../../src/dcl.c"
case 0 : case 25 : break ; 

#line 1528 "../../src/dcl.c"
default : if ( _auto_this -> _name_n_sto != 14 ) errorFPC__E ( ( char * ) "unId const%n", _auto_this ) 
#line 1528 "../../src/dcl.c"
; 
} } 
#line 1532 "../../src/dcl.c"
_auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 1532 "../../src/dcl.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1533 "../../src/dcl.c"
goto lll ; 

#line 1534 "../../src/dcl.c"
default : str : if ( _auto_init == 0 ) { 
#line 1537 "../../src/dcl.c"
switch ( _auto_this -> _name_n_scope ) { 
#line 1537 "../../src/dcl.c"

#line 1538 "../../src/dcl.c"

#line 1539 "../../src/dcl.c"
case 136 : case 0 : case 25 : break ; 

#line 1543 "../../src/dcl.c"
default : if ( ( _auto_this -> _name_n_sto != 14 ) && _type_tconst ( ( struct type * ) 
#line 1543 "../../src/dcl.c"
_auto_t ) ) 
#line 1544 "../../src/dcl.c"
errorFPC__E ( ( char * ) "unId const%n", _auto_this ) ; 
} 
#line 1547 "../../src/dcl.c"
break ; 
} 
#line 1552 "../../src/dcl.c"
const_save = ( ( const_save || ( _auto_this -> _name_n_scope == 136 ) ) || ( _type_tconst ( ( 
#line 1552 "../../src/dcl.c"
struct type * ) _auto_t ) && ( vec_const == 0 ) ) ) ; 

#line 1553 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = ( _auto_this -> _expr__O4.__C4_n_initializer = ( _auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) 
#line 1553 "../../src/dcl.c"
) ) ; 

#line 1554 "../../src/dcl.c"
if ( const_save ) _auto_init -> _node_permanent = 1 ; 

#line 1555 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_nn ) ; 

#line 1556 "../../src/dcl.c"
const_save = _auto_const_old ; 

#line 1558 "../../src/dcl.c"
switch ( _auto_init -> _node_base ) { 
#line 1558 "../../src/dcl.c"
case 124 : new_list ( ( struct expr * ) _auto_init ) ; 
#line 1558 "../../src/dcl.c"

#line 1561 "../../src/dcl.c"
list_check ( ( struct name * ) _auto_nn , ( struct type * ) _auto_nn -> _expr__O2.__C2_tp , ( struct 
#line 1561 "../../src/dcl.c"
expr * ) 0 ) ; 

#line 1562 "../../src/dcl.c"
if ( next_elem ( ) ) errorFPC__E ( ( char * ) "IrL too long") ; 

#line 1563 "../../src/dcl.c"
break ; 

#line 1564 "../../src/dcl.c"
case 81 : if ( _auto_nn -> _expr__O2.__C2_tp -> _node_base == 110 ) { 
#line 1565 "../../src/dcl.c"
Pvec _auto_v ; 

#line 1566 "../../src/dcl.c"
_auto_v = ( ( ( struct vec * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1567 "../../src/dcl.c"
if ( _auto_v -> _vec_typ -> _node_base == 5 ) { 
#line 1567 "../../src/dcl.c"
int _auto_sz ; 
int _auto_isz ; 

#line 1569 "../../src/dcl.c"
_auto_sz = _auto_v -> _vec_size ; 

#line 1570 "../../src/dcl.c"
_auto_isz = ( ( ( struct vec * ) ( _auto_init -> _expr__O2.__C2_tp ) ) ) -> _vec_size ; 
#line 1570 "../../src/dcl.c"

#line 1571 "../../src/dcl.c"
if ( _auto_sz == 0 ) _auto_v -> _vec_size = _auto_isz ; 
else 
#line 1573 "../../src/dcl.c"
if ( _auto_sz < _auto_isz ) errorFPC__E ( ( char * ) "Ir too long (%d characters) for%n[%d]", _auto_isz , _auto_nn , _auto_sz ) 
#line 1573 "../../src/dcl.c"
; 

#line 1575 "../../src/dcl.c"
break ; 
} } 
#line 1578 "../../src/dcl.c"
default : { 
#line 1579 "../../src/dcl.c"
Ptype _auto_nt ; 

#line 1579 "../../src/dcl.c"
_auto_nt = _auto_nn -> _expr__O2.__C2_tp ; 

#line 1581 "../../src/dcl.c"
if ( _auto_vec_seen ) { 
#line 1581 "../../src/dcl.c"
errorFPC__E ( ( char * ) "badIr for vector%n", _auto_nn ) ; 

#line 1583 "../../src/dcl.c"
break ; 
} 
#line 1585 "../../src/dcl.c"
tlx : switch ( _auto_nt -> _node_base ) { 
#line 1586 "../../src/dcl.c"
case 97 : _auto_nt = ( ( ( struct 
#line 1586 "../../src/dcl.c"
basetype * ) ( _auto_nt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1589 "../../src/dcl.c"
goto tlx ; 

#line 1590 "../../src/dcl.c"
case 21 : case 5 : case 29 : if ( ( _auto_init -> _node_base == 82 ) && ( 
#line 1590 "../../src/dcl.c"
_auto_init -> _expr__O2.__C2_tp == ( struct type * ) long_type ) ) 
#line 1594 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , ( 
#line 1594 "../../src/dcl.c"
char * ) "longIr constant for%k%n", _auto_nn -> _expr__O2.__C2_tp -> _node_base , _auto_nn ) ; 

#line 1595 "../../src/dcl.c"
case 22 : if ( ( ( ( ( struct basetype * ) ( _auto_nt ) ) 
#line 1595 "../../src/dcl.c"
) -> _basetype_b_unsigned && ( _auto_init -> _node_base == 107 ) ) && ( _auto_init -> _expr__O4.__C4_e2 -> _node_base == 82 ) 
#line 1595 "../../src/dcl.c"
) 
#line 1599 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "negativeIr for unsigned%n", _auto_nn ) ; 

#line 1600 "../../src/dcl.c"
if ( ( ( ( struct basetype * ) ( _auto_nt ) ) ) -> _basetype_b_const ) 
#line 1600 "../../src/dcl.c"

#line 1600 "../../src/dcl.c"
{ 
#line 1600 "../../src/dcl.c"
int _auto_i ; 

#line 1602 "../../src/dcl.c"
Neval = 0 ; 

#line 1603 "../../src/dcl.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_init ) ; 

#line 1604 "../../src/dcl.c"
if ( Neval == 0 ) { 
#line 1604 "../../src/dcl.c"
if ( _auto_init && ( _auto_init -> _node_permanent == 0 ) 
#line 1604 "../../src/dcl.c"
) 
#line 1605 "../../src/dcl.c"
_expr_del ( ( struct expr * ) _auto_init ) ; 

#line 1606 "../../src/dcl.c"
_auto_nn -> _name_n_evaluated = ( _auto_this -> _name_n_evaluated = 1 ) ; 

#line 1607 "../../src/dcl.c"
_auto_nn -> _name_n_val = ( _auto_this -> _name_n_val = _auto_i ) ; 

#line 1608 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = ( _auto_this -> _expr__O4.__C4_n_initializer = 0 ) ; 
} } 
#line 1611 "../../src/dcl.c"
goto cvcv ; 

#line 1612 "../../src/dcl.c"
case 125 : { 
#line 1613 "../../src/dcl.c"
Pfct _auto_ef ; 

#line 1613 "../../src/dcl.c"
_auto_ef = ( ( ( struct fct * ) ( ( ( ( struct ptr * ) 
#line 1613 "../../src/dcl.c"
( _auto_nt ) ) ) -> _ptr_typ ) ) ) ; 

#line 1614 "../../src/dcl.c"
if ( _auto_ef -> _node_base == 108 ) { 
#line 1614 "../../src/dcl.c"
Pfct _auto_f ; 
Pname _auto_n ; 

#line 1616 "../../src/dcl.c"
_auto_n = 0 ; 

#line 1617 "../../src/dcl.c"
switch ( _auto_init -> _node_base ) { 
#line 1617 "../../src/dcl.c"
case 85 : _auto_f = ( ( ( struct fct * ) 
#line 1617 "../../src/dcl.c"
( _auto_init -> _expr__O2.__C2_tp ) ) ) ; 

#line 1620 "../../src/dcl.c"
_auto_n = ( ( ( struct name * ) ( _auto_init ) ) ) ; 

#line 1621 "../../src/dcl.c"
switch ( _auto_f -> _node_base ) { 
#line 1621 "../../src/dcl.c"
case 108 : case 76 : _auto_init = ( struct expr * ) 
#line 1621 "../../src/dcl.c"
_expr__ctor ( ( struct expr * ) 0 , 145 , ( struct expr * ) 0 , 
#line 1621 "../../src/dcl.c"
( struct expr * ) _auto_init ) ; 

#line 1625 "../../src/dcl.c"
_auto_init -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 
} 
#line 1627 "../../src/dcl.c"
goto ad ; 

#line 1628 "../../src/dcl.c"
case 45 : case 44 : _auto_f = ( ( ( struct fct * ) ( _auto_init -> _expr__O5.__C5_mem -> 
#line 1628 "../../src/dcl.c"
_expr__O2.__C2_tp ) ) ) ; 

#line 1631 "../../src/dcl.c"
switch ( _auto_f -> _node_base ) { 
#line 1631 "../../src/dcl.c"
case 108 : case 76 : _auto_n = ( ( ( struct 
#line 1631 "../../src/dcl.c"
name * ) ( _auto_init -> _expr__O5.__C5_mem ) ) ) ; 

#line 1635 "../../src/dcl.c"
_auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 145 , ( 
#line 1635 "../../src/dcl.c"
struct expr * ) 0 , ( struct expr * ) _auto_init ) ; 

#line 1636 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_tbl ) ; 
} 
#line 1638 "../../src/dcl.c"
goto ad ; 

#line 1639 "../../src/dcl.c"
case 112 : case 145 : _auto_f = ( ( ( struct fct * ) ( _auto_init -> _expr__O4.__C4_e2 -> 
#line 1639 "../../src/dcl.c"
_expr__O2.__C2_tp ) ) ) ; 

#line 1642 "../../src/dcl.c"
ad : if ( _auto_f -> _node_base == 76 ) { 
#line 1643 "../../src/dcl.c"
Pgen _auto_g ; 

#line 1644 "../../src/dcl.c"
_auto_g = ( ( ( struct gen * ) ( _auto_f ) ) ) ; 

#line 1645 "../../src/dcl.c"
_auto_n = _gen_find ( ( struct gen * ) _auto_g , ( struct fct * ) _auto_ef ) ; 

#line 1646 "../../src/dcl.c"
if ( _auto_n == 0 ) { 
#line 1646 "../../src/dcl.c"
errorFPC__E ( ( char * ) "cannot deduceT for &overloaded %s()", _auto_g -> _gen_string ) 
#line 1646 "../../src/dcl.c"
; 
} 
#line 1649 "../../src/dcl.c"
_auto_init -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_n ; 

#line 1650 "../../src/dcl.c"
_auto_this -> _expr__O4.__C4_n_initializer = _auto_init ; 

#line 1651 "../../src/dcl.c"
_expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 

#line 1652 "../../src/dcl.c"
goto stgg ; 
} 
#line 1654 "../../src/dcl.c"
if ( _auto_n ) _expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 
} } } } 
#line 1659 "../../src/dcl.c"
cvcv : { 
#line 1660 "../../src/dcl.c"
Pname _auto_cn ; 
int _auto_i ; 

#line 1662 "../../src/dcl.c"
if ( ( ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) ) && 
#line 1662 "../../src/dcl.c"
( _auto_i = can_coerce ( ( struct type * ) _auto_nt , ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) 
#line 1662 "../../src/dcl.c"
) ) && Ncoerce ) 
#line 1664 "../../src/dcl.c"
{ 
#line 1664 "../../src/dcl.c"
if ( 1 < _auto_i ) errorFPC__E ( ( char * ) 
#line 1664 "../../src/dcl.c"
"%d possible conversions forIr", _auto_i ) ; 

#line 1667 "../../src/dcl.c"
{ 
#line 1667 "../../src/dcl.c"
Pclass _auto_cl ; 
Pref _auto_r ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1667 "../../src/dcl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1668 "../../src/dcl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1668 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1668 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_init ) , 
#line 1668 "../../src/dcl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1668 "../../src/dcl.c"
( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1669 "../../src/dcl.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1669 "../../src/dcl.c"
struct expr * ) _auto_r , ( struct expr * ) 0 ) ; 

#line 1670 "../../src/dcl.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 1671 "../../src/dcl.c"
_auto_c -> _expr__O2.__C2_tp = _auto_nt ; 

#line 1672 "../../src/dcl.c"
_auto_this -> _expr__O4.__C4_n_initializer = _auto_c ; 

#line 1673 "../../src/dcl.c"
goto stgg ; 
} } } 
#line 1676 "../../src/dcl.c"
if ( _type_check ( ( struct type * ) _auto_nt , ( struct type * 
#line 1676 "../../src/dcl.c"
) _auto_init -> _expr__O2.__C2_tp , 70 ) ) 
#line 1677 "../../src/dcl.c"
errorFPC__E ( ( char * ) "badIrT%t for%n (%tX)", _auto_init -> _expr__O2.__C2_tp , _auto_this , 
#line 1677 "../../src/dcl.c"
_auto_nn -> _expr__O2.__C2_tp ) ; 
else 
#line 1678 "../../src/dcl.c"
{ 
#line 1678 "../../src/dcl.c"
stgg : if ( _auto_init && ( _auto_this -> _name_n_stclass == 31 ) ) { 
#line 1680 "../../src/dcl.c"
switch ( 
#line 1680 "../../src/dcl.c"
_auto_init -> _node_base ) 
#line 1683 "../../src/dcl.c"
{ 
#line 1683 "../../src/dcl.c"
case 85 : if ( _type_tconst ( ( struct type * ) _auto_init -> _expr__O2.__C2_tp ) 
#line 1683 "../../src/dcl.c"
== 0 ) 
#line 1685 "../../src/dcl.c"
errorFPC__E ( ( char * ) "V%n used inIr for%n", _auto_init , _auto_nn ) ; 

#line 1686 "../../src/dcl.c"
break ; 

#line 1687 "../../src/dcl.c"
case 111 : case 45 : case 44 : case 109 : case 146 : errorFPC__E ( ( char * 
#line 1687 "../../src/dcl.c"
) "%k inIr of static%n", _auto_init -> _node_base , _auto_nn ) ; 
} } } } } } } } 
#line 1702 "../../src/dcl.c"
ggg : _auto_nn -> _node_permanent = 1 ; 

#line 1704 "../../src/dcl.c"
switch ( _auto_this -> _name_n_scope ) { 
#line 1704 "../../src/dcl.c"
case 108 : _auto_nn -> _expr__O4.__C4_n_initializer = _auto_this -> _expr__O4.__C4_n_initializer ; 

#line 1707 "../../src/dcl.c"
break ; 

#line 1708 "../../src/dcl.c"
default : { 
#line 1709 "../../src/dcl.c"
Ptype _auto_t ; 

#line 1710 "../../src/dcl.c"
_auto_t = _auto_nn -> _expr__O2.__C2_tp ; 

#line 1712 "../../src/dcl.c"
px : _auto_t -> _node_permanent = 1 ; 

#line 1714 "../../src/dcl.c"
switch ( _auto_t -> _node_base ) { 
#line 1714 "../../src/dcl.c"
case 125 : case 158 : _auto_t = ( ( ( struct 
#line 1714 "../../src/dcl.c"
ptr * ) ( _auto_t ) ) ) -> _ptr_typ ; 

#line 1716 "../../src/dcl.c"
goto px ; 

#line 1717 "../../src/dcl.c"
case 110 : _auto_t = ( ( ( struct vec * ) ( _auto_t ) ) ) -> 
#line 1717 "../../src/dcl.c"
_vec_typ ; 

#line 1717 "../../src/dcl.c"
goto px ; 

#line 1718 "../../src/dcl.c"
case 97 : _auto_t = ( ( ( struct basetype * ) ( _auto_t ) ) ) -> 
#line 1718 "../../src/dcl.c"
_basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1718 "../../src/dcl.c"
goto px ; 

#line 1719 "../../src/dcl.c"
case 108 : _auto_t = ( ( ( struct fct * ) ( _auto_t ) ) ) -> 
#line 1719 "../../src/dcl.c"
_fct_returns ; 

#line 1719 "../../src/dcl.c"
goto px ; 
} } } 
#line 1724 "../../src/dcl.c"
Cdcl = _auto_odcl ; 

#line 1725 "../../src/dcl.c"
{ 
#line 1725 "../../src/dcl.c"
{ _auto__result = _auto_nn ; 

#line 1725 "../../src/dcl.c"
return _auto__result ; 
} } } ; 

#line 1729 "../../src/dcl.c"
int inline_restr = 0 ; 

#line 1733 "../../src/dcl.c"
int _fct_dcl ( _auto_this , _auto_n ) register struct fct * _auto_this ; 
struct name * _auto_n ; 

#line 1734 "../../src/dcl.c"
{ 
#line 1734 "../../src/dcl.c"
int _auto_nmem ; 
Pname _auto_a ; 
Pname _auto_ll ; 
Ptable _auto_ftbl ; 
Pptr _auto_cct ; 
int _auto_const_old ; 
int _auto_bit_old ; 
int _auto_byte_old ; 
int _auto_max_old ; 
int _auto_stack_old ; 
Pname _auto_ax ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 1735 "../../src/dcl.c"
_auto_nmem = 20 ; 

#line 1740 "../../src/dcl.c"
_auto_cct = 0 ; 

#line 1741 "../../src/dcl.c"
_auto_const_old = const_save ; 

#line 1743 "../../src/dcl.c"
_auto_bit_old = bit_offset ; 

#line 1744 "../../src/dcl.c"
_auto_byte_old = byte_offset ; 

#line 1745 "../../src/dcl.c"
_auto_max_old = max_align ; 

#line 1746 "../../src/dcl.c"
_auto_stack_old = stack_size ; 

#line 1748 "../../src/dcl.c"
if ( _auto_this -> _node_base != 108 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1748 "../../src/dcl.c"
"fct.dcl(%d)", _auto_this -> _node_base ) ; 

#line 1749 "../../src/dcl.c"
if ( _auto_this -> _fct_body == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1749 "../../src/dcl.c"
) "fct.dcl(body=%d)", _auto_this -> _fct_body ) ; 

#line 1750 "../../src/dcl.c"
if ( ( _auto_n == 0 ) || ( _auto_n -> _node_base != 85 ) ) errorFI_PC__E ( ( 
#line 1750 "../../src/dcl.c"
int ) 'i' , ( char * ) "fct.dcl(name=%d %d)", _auto_n , _auto_n ? ( ( ( int 
#line 1750 "../../src/dcl.c"
) ( _auto_n -> _node_base ) ) ) : 0) ; 

#line 1752 "../../src/dcl.c"
if ( _auto_this -> _fct_body -> _stmt_memtbl == 0 ) _auto_this -> _fct_body -> _stmt_memtbl = ( struct table * ) 
#line 1752 "../../src/dcl.c"
_table__ctor ( ( struct table * ) 0 , _auto_nmem + 3 , ( struct table * ) _auto_n -> 
#line 1752 "../../src/dcl.c"
_expr__O5.__C5_n_table , ( struct name * ) 0 ) ; 

#line 1753 "../../src/dcl.c"
_auto_ftbl = _auto_this -> _fct_body -> _stmt_memtbl ; 

#line 1754 "../../src/dcl.c"
_auto_this -> _fct_body -> _stmt__O8.__C8_own_tbl = 1 ; 

#line 1755 "../../src/dcl.c"
_auto_ftbl -> _table_real_block = ( struct stmt * ) _auto_this -> _fct_body ; 

#line 1757 "../../src/dcl.c"
max_align = AL_FRAME ; 

#line 1758 "../../src/dcl.c"
stack_size = ( byte_offset = SZ_BOTTOM ) ; 

#line 1759 "../../src/dcl.c"
bit_offset = 0 ; 

#line 1761 "../../src/dcl.c"
{ 
#line 705 "../../src/cfront.h"
cc ++ ; 

#line 705 "../../src/cfront.h"
( * cc ) = ( * ( cc - 1 ) ) ; 
} 
#line 1762 "../../src/dcl.c"
cc -> _dcl_context_nof = _auto_n ; 

#line 1763 "../../src/dcl.c"
cc -> _dcl_context_ftbl = _auto_ftbl ; 

#line 1765 "../../src/dcl.c"
switch ( _auto_n -> _name_n_scope ) { 
#line 1765 "../../src/dcl.c"
case 0 : case 25 : cc -> _dcl_context_not = _auto_n -> _expr__O5.__C5_n_table -> 
#line 1765 "../../src/dcl.c"
_table_t_name ; 

#line 1769 "../../src/dcl.c"
cc -> _dcl_context_cot = ( ( ( struct classdef * ) ( cc -> _dcl_context_not -> _expr__O2.__C2_tp ) ) ) 
#line 1769 "../../src/dcl.c"
; 

#line 1770 "../../src/dcl.c"
cc -> _dcl_context_tot = cc -> _dcl_context_cot -> _classdef_this_type ; 

#line 1771 "../../src/dcl.c"
if ( ( _auto_this -> _fct_f_this == 0 ) || ( cc -> _dcl_context_tot == 0 ) ) 
#line 1771 "../../src/dcl.c"

#line 1771 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "fct.dcl(%n): f_this=%d cc->tot=%d", _auto_n , _auto_this -> _fct_f_this , cc -> 
#line 1771 "../../src/dcl.c"
_dcl_context_tot ) ; 

#line 1772 "../../src/dcl.c"
_auto_this -> _fct_f_this -> _expr__O5.__C5_n_table = _auto_ftbl ; 

#line 1773 "../../src/dcl.c"
cc -> _dcl_context_c_this = _auto_this -> _fct_f_this ; 
} 
#line 1777 "../../src/dcl.c"
; 

#line 1778 "../../src/dcl.c"
for ( ( ( _auto_a = _auto_this -> _fct_argtype ) , ( _auto_ll = 0 ) ) ;_auto_a ;( 
#line 1778 "../../src/dcl.c"
_auto_a = _auto_ax ) ) 
#line 1778 "../../src/dcl.c"
{ 
#line 1778 "../../src/dcl.c"
_auto_ax = _auto_a -> _name_n_list ; 

#line 1780 "../../src/dcl.c"
{ 
#line 1780 "../../src/dcl.c"
Pname _auto_nn ; 

#line 1780 "../../src/dcl.c"
_auto_nn = _name_dcl ( ( struct name * ) _auto_a , ( struct table * ) _auto_ftbl , 136 ) ; 
#line 1780 "../../src/dcl.c"

#line 1781 "../../src/dcl.c"
_auto_nn -> _name_n_assigned_to = ( _auto_nn -> _name_n_used = ( _auto_nn -> _name_n_addr_taken = 0 ) ) ; 

#line 1782 "../../src/dcl.c"
_auto_nn -> _name_n_list = 0 ; 

#line 1783 "../../src/dcl.c"
switch ( _auto_a -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1783 "../../src/dcl.c"
case 6 : case 13 : _auto_a -> _name_n_list = dcl_list ; 

#line 1787 "../../src/dcl.c"
dcl_list = _auto_a ; 

#line 1788 "../../src/dcl.c"
break ; 

#line 1789 "../../src/dcl.c"
default : if ( _auto_ll ) _auto_ll -> _name_n_list = _auto_nn ; 
else 
#line 1792 "../../src/dcl.c"
{ 
#line 1792 "../../src/dcl.c"
_auto_this -> _fct_argtype = _auto_nn ; 

#line 1794 "../../src/dcl.c"
if ( _auto_this -> _fct_f_this ) _auto_this -> _fct_f_this -> _name_n_list = _auto_this -> _fct_argtype ; 
} 
#line 1796 "../../src/dcl.c"
_auto_ll = _auto_nn ; 

#line 1797 "../../src/dcl.c"
_name__dtor ( ( struct name * ) _auto_a , 1) ; 
} } } 
#line 1810 "../../src/dcl.c"
if ( _auto_n -> _name_n_oper != 161 ) { 
#line 1810 "../../src/dcl.c"
if ( _auto_this -> _fct_f_init ) errorFI_PC__E ( 
#line 1810 "../../src/dcl.c"
( int ) 0 , ( char * ) "unXAL: not a constructor") ; 
} else 
#line 1813 "../../src/dcl.c"
{ 
#line 1813 "../../src/dcl.c"
if ( _auto_this -> _fct_f_init ) { 
#line 1815 "../../src/dcl.c"
Pname _auto_bn ; 
Ptable _auto_tbl ; 
Pexpr _auto_binit ; 
Pname _auto_nx ; 
Pname _auto_nn ; 

#line 1816 "../../src/dcl.c"
_auto_bn = cc -> _dcl_context_cot -> _classdef_clbase ; 

#line 1817 "../../src/dcl.c"
_auto_tbl = cc -> _dcl_context_cot -> _classdef_memtbl ; 

#line 1818 "../../src/dcl.c"
_auto_binit = 0 ; 

#line 1820 "../../src/dcl.c"
const_save = 1 ; 

#line 1821 "../../src/dcl.c"
for ( _auto_nn = _auto_this -> _fct_f_init ;_auto_nn ;( _auto_nn = _auto_nx ) ) { 
#line 1821 "../../src/dcl.c"
_auto_nx = _auto_nn -> _name_n_list ; 

#line 1823 "../../src/dcl.c"
{ 
#line 1823 "../../src/dcl.c"
Pexpr _auto_i ; 

#line 1823 "../../src/dcl.c"
_auto_i = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 1825 "../../src/dcl.c"
if ( _auto_nn -> _expr__O3.__C3_string ) { 
#line 1825 "../../src/dcl.c"
Pname _auto_m ; 

#line 1826 "../../src/dcl.c"
_auto_m = _table_look ( ( struct table * ) _auto_tbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 1826 "../../src/dcl.c"
; 

#line 1827 "../../src/dcl.c"
if ( _auto_m && ( _auto_m -> _expr__O5.__C5_n_table == _auto_tbl ) ) _auto_nn -> _expr__O4.__C4_n_initializer = _fct_mem_init ( _auto_this , ( struct 
#line 1827 "../../src/dcl.c"
name * ) _auto_m , ( struct expr * ) _auto_i , ( struct table * ) _auto_ftbl ) ; 
#line 1827 "../../src/dcl.c"
else 
#line 1829 "../../src/dcl.c"
{ 
#line 1829 "../../src/dcl.c"
errorFPC__E ( ( char * ) "%n not inC%n", _auto_m , _auto_n ) ; 

#line 1831 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = 0 ; 
} } else 
#line 1834 "../../src/dcl.c"
if ( _auto_bn ) { 
#line 1834 "../../src/dcl.c"
_auto_binit = _fct_base_init ( _auto_this , ( struct name * ) 
#line 1834 "../../src/dcl.c"
_auto_bn , ( struct expr * ) _auto_i , ( struct table * ) _auto_ftbl ) ; 

#line 1836 "../../src/dcl.c"
_auto_nn -> _expr__O4.__C4_n_initializer = 0 ; 
} else 
#line 1839 "../../src/dcl.c"
errorFPC__E ( ( char * ) "unXAL: noBC") ; 
} } 
#line 1841 "../../src/dcl.c"
const_save = _auto_const_old ; 

#line 1842 "../../src/dcl.c"
_auto_this -> _fct_b_init = _auto_binit ; 
} 
#line 1845 "../../src/dcl.c"
if ( _auto_this -> _fct_b_init == 0 ) { 
#line 1845 "../../src/dcl.c"
Pname _auto_bn ; 

#line 1846 "../../src/dcl.c"
_auto_bn = cc -> _dcl_context_cot -> _classdef_clbase ; 

#line 1847 "../../src/dcl.c"
if ( _auto_bn && ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 1847 "../../src/dcl.c"
( ( ( struct classdef * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , 
#line 1847 "../../src/dcl.c"
( char * ) "_ctor", ( int ) 0 ) ) ) 
#line 1848 "../../src/dcl.c"
_auto_this -> _fct_b_init = 
#line 1848 "../../src/dcl.c"
_fct_base_init ( _auto_this , ( struct name * ) _auto_bn , ( struct expr * ) 0 , ( 
#line 1848 "../../src/dcl.c"
struct table * ) _auto_ftbl ) ; 
} } 
#line 1853 "../../src/dcl.c"
_auto_this -> _fct_returns -> _node_permanent = 1 ; 

#line 1854 "../../src/dcl.c"
if ( _auto_this -> _fct_returns -> _node_base != 38 ) { 
#line 1854 "../../src/dcl.c"
Pname _auto_rv ; 

#line 1855 "../../src/dcl.c"
_auto_rv = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 1855 "../../src/dcl.c"
* ) "_result") ; 

#line 1856 "../../src/dcl.c"
_auto_rv -> _expr__O2.__C2_tp = _auto_this -> _fct_returns ; 

#line 1857 "../../src/dcl.c"
_table_insert ( ( struct table * ) _auto_ftbl , ( struct name * ) _auto_rv , ( int ) 
#line 1857 "../../src/dcl.c"
0 ) ; 

#line 1858 "../../src/dcl.c"
_name__dtor ( ( struct name * ) _auto_rv , 1) ; 
} 
#line 1861 "../../src/dcl.c"
const_save = ( _auto_this -> _fct_f_inline ? 1 : 0) ; 

#line 1862 "../../src/dcl.c"
inline_restr = 0 ; 

#line 1863 "../../src/dcl.c"
_block_dcl ( ( struct block * ) _auto_this -> _fct_body , ( struct table * ) _auto_ftbl ) ; 

#line 1864 "../../src/dcl.c"
if ( ( _auto_this -> _fct_f_inline && inline_restr ) && ( _auto_this -> _fct_returns -> _node_base != 38 ) ) { 
#line 1864 "../../src/dcl.c"

#line 1864 "../../src/dcl.c"

#line 1865 "../../src/dcl.c"
_auto_this -> _fct_f_inline = 0 ; 

#line 1870 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "\"inline\" ignored, %n contains%s%s%s%s", _auto_n , ( inline_restr & 8 ) 
#line 1870 "../../src/dcl.c"
? " loop": "", ( inline_restr & 4 ) ? " switch": "", ( inline_restr & 2 ) ? " goto": 
#line 1870 "../../src/dcl.c"
"", ( inline_restr & 1 ) ? " label": "") ; 
} 
#line 1872 "../../src/dcl.c"
const_save = _auto_const_old ; 

#line 1874 "../../src/dcl.c"
if ( _auto_this -> _fct_f_inline ) isf_list = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) 
#line 1874 "../../src/dcl.c"
, ( ( _auto__Xthis__ctor_name_list = ( struct name_list * ) _new ( ( long ) 8) ) 
#line 1874 "../../src/dcl.c"
, ( ( _auto__Xthis__ctor_name_list -> _name_list_f = _auto_n ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = ( ( struct 
#line 1874 "../../src/dcl.c"
name_list * ) isf_list ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 

#line 1876 "../../src/dcl.c"
_auto_this -> _type_defined |= 01 ; 

#line 1878 "../../src/dcl.c"
_auto_this -> _fct_frame_size = ( stack_size + SZ_TOP ) ; 

#line 1879 "../../src/dcl.c"
_auto_this -> _fct_frame_size = ( ( ( ( _auto_this -> _fct_frame_size - 1 ) / AL_FRAME ) * AL_FRAME ) + 
#line 1879 "../../src/dcl.c"
AL_FRAME ) ; 

#line 1880 "../../src/dcl.c"
bit_offset = _auto_bit_old ; 

#line 1881 "../../src/dcl.c"
byte_offset = _auto_byte_old ; 

#line 1882 "../../src/dcl.c"
max_align = _auto_max_old ; 

#line 1883 "../../src/dcl.c"
stack_size = _auto_stack_old ; 

#line 1885 "../../src/dcl.c"
{ 
#line 706 "../../src/cfront.h"
cc -- ; 
} } ; 

#line 1889 "../../src/dcl.c"
Pexpr _fct_base_init ( _auto_this , _auto_bn , _auto_i , _auto_ftbl ) register struct fct * _auto_this ; 
struct name * _auto_bn ; 
struct expr * _auto_i ; 
struct table * _auto_ftbl ; 

#line 1895 "../../src/dcl.c"
{ 
#line 1895 "../../src/dcl.c"
Pexpr _auto__result ; 
Pclass _auto_bcl ; 
Pname _auto_bnw ; 

#line 1896 "../../src/dcl.c"
_auto_bcl = ( ( ( struct classdef * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1897 "../../src/dcl.c"
_auto_bnw = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_bcl ) -> 
#line 1897 "../../src/dcl.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 1899 "../../src/dcl.c"
if ( _auto_bnw ) { 
#line 1899 "../../src/dcl.c"
Ptype _auto_t ; 
Pfct _auto_f ; 
Ptype _auto_ty ; 
Pexpr _auto_th ; 
Pexpr _auto_v ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1900 "../../src/dcl.c"
_auto_t = _auto_bnw -> _expr__O2.__C2_tp ; 

#line 1901 "../../src/dcl.c"
_auto_f = ( ( ( struct fct * ) ( ( _auto_t -> _node_base == 108 ) ? _auto_t : 
#line 1901 "../../src/dcl.c"
( ( ( struct gen * ) ( _auto_t ) ) ) -> _gen_fct_list -> _name_list_f -> _expr__O2.__C2_tp ) 
#line 1901 "../../src/dcl.c"
) ) ; 

#line 1902 "../../src/dcl.c"
_auto_ty = _auto_f -> _fct_f_this -> _expr__O2.__C2_tp ; 

#line 1903 "../../src/dcl.c"
_auto_th = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( 
#line 1903 "../../src/dcl.c"
_auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct 
#line 1903 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * ) _auto_this -> _fct_f_this ) 
#line 1903 "../../src/dcl.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = 
#line 1903 "../../src/dcl.c"
( ( struct type * ) _auto_ty ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1904 "../../src/dcl.c"
_auto_v = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( 
#line 1904 "../../src/dcl.c"
_auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct 
#line 1904 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_texpr ) ) , 157 , _auto_i , ( struct expr * ) 0 ) 
#line 1904 "../../src/dcl.c"
) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) _auto_bcl ) ) 
#line 1904 "../../src/dcl.c"
, _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1905 "../../src/dcl.c"
_auto_v -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 111 , 
#line 1905 "../../src/dcl.c"
( struct expr * ) _auto_th , ( struct expr * ) 0 ) ; 

#line 1906 "../../src/dcl.c"
_auto_v = _expr_typ ( ( struct expr * ) _auto_v , _auto_ftbl ) ; 

#line 1908 "../../src/dcl.c"
switch ( _auto_v -> _node_base ) { 
#line 1908 "../../src/dcl.c"
case 111 : { 
#line 1910 "../../src/dcl.c"
Pexpr _auto_vv ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1910 "../../src/dcl.c"
_auto_vv = _auto_v ; 

#line 1911 "../../src/dcl.c"
_auto_v = _auto_v -> _expr__O3.__C3_e1 ; 

#line 1912 "../../src/dcl.c"
_expr__dtor ( ( struct expr * ) _auto_vv , 1) ; 

#line 1913 "../../src/dcl.c"
break ; 

#line 1914 "../../src/dcl.c"
case 70 : _auto_th = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( 
#line 1914 "../../src/dcl.c"
( ( _auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( 
#line 1914 "../../src/dcl.c"
( struct expr * ) ( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * ) 
#line 1914 "../../src/dcl.c"
_auto_this -> _fct_f_this ) , ( struct expr * ) 0 ) ) ) , ( ( 
#line 1914 "../../src/dcl.c"
_auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( ( struct type * ) _auto_ty ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 
#line 1914 "../../src/dcl.c"

#line 1916 "../../src/dcl.c"
_auto_v = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( 
#line 1916 "../../src/dcl.c"
struct expr * ) _auto_v , ( struct expr * ) _auto_th ) ; 

#line 1917 "../../src/dcl.c"
_auto_v = _expr_typ ( ( struct expr * ) _auto_v , _auto_ftbl ) ; 

#line 1918 "../../src/dcl.c"
break ; 

#line 1919 "../../src/dcl.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "fct.base_init: unX%k", _auto_v -> _node_base ) 
#line 1919 "../../src/dcl.c"
; 
} } 
#line 1922 "../../src/dcl.c"
{ 
#line 1922 "../../src/dcl.c"
{ _auto__result = _auto_v ; 

#line 1922 "../../src/dcl.c"
return _auto__result ; 
} } } else 
#line 1924 "../../src/dcl.c"
errorFI_PC__E ( ( int ) 0 , ( char * ) 
#line 1924 "../../src/dcl.c"
"unXAL: noBC constructor") ; 

#line 1925 "../../src/dcl.c"
{ 
#line 1925 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1925 "../../src/dcl.c"
return _auto__result ; 
} } } ; 

#line 1929 "../../src/dcl.c"
Pexpr _fct_mem_init ( _auto_this , _auto_member , _auto_i , _auto_ftbl ) register struct fct * _auto_this ; 
struct name * _auto_member ; 
struct expr * _auto_i ; 
struct table * _auto_ftbl ; 

#line 1933 "../../src/dcl.c"
{ 
#line 1933 "../../src/dcl.c"
Pexpr _auto__result ; 
Pname _auto_cn ; 

#line 1935 "../../src/dcl.c"
if ( _auto_member -> _name_n_stclass == 31 ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 1935 "../../src/dcl.c"
"MIr for static%n", _auto_member ) ; 

#line 1936 "../../src/dcl.c"
_auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_member -> _expr__O2.__C2_tp ) ; 

#line 1937 "../../src/dcl.c"
if ( _auto_cn ) { 
#line 1937 "../../src/dcl.c"
Pclass _auto_mcl ; 
Pname _auto_ctor ; 

#line 1938 "../../src/dcl.c"
_auto_mcl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 1939 "../../src/dcl.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_mcl ) -> 
#line 1939 "../../src/dcl.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 1941 "../../src/dcl.c"
if ( _auto_ctor ) { 
#line 1941 "../../src/dcl.c"
Pref _auto_tn ; 
Pref _auto_ct ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1942 "../../src/dcl.c"
_auto_tn = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1942 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1942 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_this -> _fct_f_this ) 
#line 1942 "../../src/dcl.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1942 "../../src/dcl.c"
_auto_member ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1943 "../../src/dcl.c"
_auto_ct = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1943 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1943 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_tn ) , 
#line 1943 "../../src/dcl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1943 "../../src/dcl.c"
( struct name * ) _auto_ctor ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1944 "../../src/dcl.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1944 "../../src/dcl.c"
struct expr * ) _auto_ct , _auto_i ) ; 

#line 1945 "../../src/dcl.c"
{ 
#line 1945 "../../src/dcl.c"
{ _auto__result = _expr_typ ( ( struct expr * ) _auto_c , _auto_ftbl ) ; 

#line 1945 "../../src/dcl.c"
return _auto__result ; 
} } } else 
#line 1947 "../../src/dcl.c"
errorFPC__E ( ( char * ) "init of member %m with no ctor", _auto_member ) ; 
} else 
#line 1948 "../../src/dcl.c"
if ( cl_obj_vec ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 1948 "../../src/dcl.c"
"init of Cmember vector with ctor") ; 
else 
#line 1950 "../../src/dcl.c"
if ( _type_tconst ( ( struct type * ) _auto_member -> _expr__O2.__C2_tp ) ) { 
#line 1950 "../../src/dcl.c"
TOK _auto_t ; 
Pref _auto_tn ; 
Pexpr _auto_init ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1951 "../../src/dcl.c"
_auto_t = _type_set_const ( ( struct type * ) _auto_member -> _expr__O2.__C2_tp , ( int ) 0 ) ; 
#line 1951 "../../src/dcl.c"

#line 1952 "../../src/dcl.c"
switch ( _auto_t ) { 
#line 1952 "../../src/dcl.c"
case 141 : case 110 : case 158 : errorFPC__E ( ( char * 
#line 1952 "../../src/dcl.c"
) "MIr for%kM%n", _auto_member ) ; 

#line 1957 "../../src/dcl.c"
{ 
#line 1957 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1957 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 1959 "../../src/dcl.c"
_auto_tn = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , 
#line 1959 "../../src/dcl.c"
( ( ( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( 
#line 1959 "../../src/dcl.c"
( ( struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * 
#line 1959 "../../src/dcl.c"
) _auto_this -> _fct_f_this ) , ( struct expr * ) 0 ) ) ) , ( 
#line 1959 "../../src/dcl.c"
( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = _auto_member ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1959 "../../src/dcl.c"
_auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 1959 "../../src/dcl.c"
struct expr * ) _auto_tn , _auto_i ) ; 

#line 1961 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_init , _auto_ftbl ) ; 

#line 1962 "../../src/dcl.c"
_type_set_const ( ( struct type * ) _auto_member -> _expr__O2.__C2_tp , 1 ) ; 

#line 1963 "../../src/dcl.c"
{ 
#line 1963 "../../src/dcl.c"
{ _auto__result = _auto_init ; 

#line 1963 "../../src/dcl.c"
return _auto__result ; 
} } } else 
#line 1965 "../../src/dcl.c"
if ( _type_is_ref ( ( struct type * ) _auto_member -> _expr__O2.__C2_tp ) ) 
#line 1965 "../../src/dcl.c"

#line 1965 "../../src/dcl.c"
{ 
#line 1965 "../../src/dcl.c"
Pexpr _auto_init ; 

#line 1966 "../../src/dcl.c"
_auto_init = _expr_typ ( ( struct expr * ) _auto_i , _auto_ftbl ) ; 

#line 1967 "../../src/dcl.c"
_auto_init = ref_init ( ( ( struct ptr * ) ( _auto_member -> _expr__O2.__C2_tp ) ) , ( struct 
#line 1967 "../../src/dcl.c"
expr * ) _auto_init , _auto_ftbl ) ; 

#line 1968 "../../src/dcl.c"
_name_assign ( ( struct name * ) _auto_member ) ; 

#line 1969 "../../src/dcl.c"
{ 
#line 1969 "../../src/dcl.c"
{ _auto__result = _auto_init ; 

#line 1969 "../../src/dcl.c"
return _auto__result ; 
} } } else 
#line 1971 "../../src/dcl.c"
{ 
#line 1971 "../../src/dcl.c"
Pref _auto_tn ; 
Pexpr _auto_init ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1972 "../../src/dcl.c"
_auto_tn = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1972 "../../src/dcl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1972 "../../src/dcl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_this -> _fct_f_this ) 
#line 1972 "../../src/dcl.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1972 "../../src/dcl.c"
_auto_member ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1973 "../../src/dcl.c"
_auto_init = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 1973 "../../src/dcl.c"
struct expr * ) _auto_tn , _auto_i ) ; 

#line 1974 "../../src/dcl.c"
{ 
#line 1974 "../../src/dcl.c"
{ _auto__result = _expr_typ ( ( struct expr * ) _auto_init , _auto_ftbl ) ; 

#line 1974 "../../src/dcl.c"
return _auto__result ; 
} } } 
#line 1976 "../../src/dcl.c"
{ 
#line 1976 "../../src/dcl.c"
{ _auto__result = 0 ; 

#line 1976 "../../src/dcl.c"
return _auto__result ; 
} } } ; 

/* the end */
