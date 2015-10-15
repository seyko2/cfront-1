#line 1 "../../src/dcl2.c"

/* <<cfront 10/10/85>> */
/* < ../../src/dcl2.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/dcl2.c"
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

#line 19 "../../src/dcl2.c"
Pname _classdef_has_ictor ( _auto_this ) register struct classdef * _auto_this ; 

#line 23 "../../src/dcl2.c"
{ 
#line 23 "../../src/dcl2.c"
Pname _auto__result ; 
Pname _auto_c ; 
Pfct _auto_f ; 
Plist _auto_l ; 

#line 24 "../../src/dcl2.c"
_auto_c = ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) "_ctor", 
#line 24 "../../src/dcl2.c"
( int ) 0 ) ) ; 

#line 28 "../../src/dcl2.c"
if ( _auto_c == 0 ) { 
#line 28 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 28 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 30 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_c -> _expr__O2.__C2_tp ) ) ) 
#line 30 "../../src/dcl2.c"
; 

#line 32 "../../src/dcl2.c"
switch ( _auto_f -> _node_base ) { 
#line 32 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 32 "../../src/dcl2.c"
* ) "%s: bad constructor (%k)", _auto_this -> _classdef_string , _auto_c -> _expr__O2.__C2_tp -> _node_base ) ; 

#line 36 "../../src/dcl2.c"
case 108 : switch ( _auto_f -> _fct_nargs ) { 
#line 37 "../../src/dcl2.c"
case 0 : { 
#line 38 "../../src/dcl2.c"
{ _auto__result = _auto_c ; 
#line 38 "../../src/dcl2.c"

#line 38 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 39 "../../src/dcl2.c"
default : if ( _auto_f -> _fct_argtype -> _expr__O4.__C4_n_initializer ) { 
#line 39 "../../src/dcl2.c"
{ _auto__result = _auto_c ; 

#line 39 "../../src/dcl2.c"
return _auto__result ; 
} } } 
#line 41 "../../src/dcl2.c"
{ 
#line 41 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 41 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 43 "../../src/dcl2.c"
case 76 : for ( _auto_l = ( ( ( struct gen * ) ( 
#line 43 "../../src/dcl2.c"
_auto_f ) ) ) -> _gen_fct_list ;_auto_l ;( _auto_l = _auto_l -> _name_list_l ) ) 
#line 44 "../../src/dcl2.c"
{ 
#line 44 "../../src/dcl2.c"
Pname _auto_n ; 

#line 45 "../../src/dcl2.c"
_auto_n = _auto_l -> _name_list_f ; 

#line 46 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 47 "../../src/dcl2.c"
switch ( _auto_f -> _fct_nargs ) { 
#line 47 "../../src/dcl2.c"
case 0 : { 
#line 48 "../../src/dcl2.c"
{ _auto__result = _auto_n ; 

#line 48 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 49 "../../src/dcl2.c"
default : if ( _auto_f -> _fct_argtype -> _expr__O4.__C4_n_initializer ) { 
#line 49 "../../src/dcl2.c"
{ _auto__result = _auto_n ; 

#line 49 "../../src/dcl2.c"
return _auto__result ; 
} } } } 
#line 52 "../../src/dcl2.c"
{ 
#line 52 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 52 "../../src/dcl2.c"
return _auto__result ; 
} } } } ; 

#line 56 "../../src/dcl2.c"
struct gen * _gen__ctor ( _auto_this , _auto_s ) register struct gen * _auto_this ; 
char * _auto_s ; 

#line 57 "../../src/dcl2.c"
{ 
#line 57 "../../src/dcl2.c"
char * _auto_p ; 

#line 63 "../../src/dcl2.c"
if ( _auto_this == 0 ) _auto_this = ( struct gen * ) _new ( ( long ) 
#line 63 "../../src/dcl2.c"
16) ; 

#line 58 "../../src/dcl2.c"
_auto_p = ( ( ( char * ) ( _new ( ( long ) ( strlen ( 
#line 58 "../../src/dcl2.c"
_auto_s ) + 1 ) ) ) ) ) ; 

#line 59 "../../src/dcl2.c"
_auto_this -> _node_base = 76 ; 

#line 60 "../../src/dcl2.c"
strcpy ( _auto_p , _auto_s ) ; 

#line 61 "../../src/dcl2.c"
_auto_this -> _gen_string = _auto_p ; 

#line 62 "../../src/dcl2.c"
_auto_this -> _gen_fct_list = 0 ; 

#line 63 "../../src/dcl2.c"
return _auto_this ; 
} ; 

#line 65 "../../src/dcl2.c"
Pname _gen_add ( _auto_this , _auto_n , _auto_sig ) register struct gen * _auto_this ; 
struct name * _auto_n ; 
int _auto_sig ; 

#line 74 "../../src/dcl2.c"
{ 
#line 74 "../../src/dcl2.c"
Pname _auto__result ; 
Pfct _auto_f ; 
Pname _auto_nx ; 

#line 75 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 78 "../../src/dcl2.c"
if ( _auto_f -> _node_base != 108 ) errorFI_PC__E ( ( int ) 0 , ( char * 
#line 78 "../../src/dcl2.c"
) "%n: overloaded non-F", _auto_n ) ; 

#line 80 "../../src/dcl2.c"
if ( _auto_this -> _gen_fct_list && ( _auto_nx = _gen_find ( _auto_this , ( struct fct * ) _auto_f ) ) 
#line 80 "../../src/dcl2.c"
) 
#line 80 "../../src/dcl2.c"
{ 
#line 80 "../../src/dcl2.c"
Nold = 1 ; 
} else 
#line 95 "../../src/dcl2.c"
{ 
#line 95 "../../src/dcl2.c"
char * _auto_s ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 96 "../../src/dcl2.c"
_auto_s = _auto_this -> _gen_string ; 

#line 99 "../../src/dcl2.c"
if ( ( _auto_this -> _gen_fct_list || _auto_sig ) || _auto_n -> _name_n_oper ) { 
#line 99 "../../src/dcl2.c"
char _auto_buf [ 128] ; 
#line 99 "../../src/dcl2.c"
char * _auto_bb ; 
int _auto_l1 ; 
int _auto_l2 ; 
char * _auto_p ; 

#line 101 "../../src/dcl2.c"
_auto_bb = _type_signature ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp , ( char * ) _auto_buf ) ; 
#line 101 "../../src/dcl2.c"

#line 102 "../../src/dcl2.c"
_auto_l1 = strlen ( _auto_s ) ; 

#line 103 "../../src/dcl2.c"
_auto_l2 = ( ( _auto_bb - _auto_buf ) - 1 ) ; 

#line 104 "../../src/dcl2.c"
_auto_p = ( ( ( char * ) ( _new ( ( long ) ( ( 
#line 104 "../../src/dcl2.c"
_auto_l1 + _auto_l2 ) + 1 ) ) ) ) ) ; 

#line 105 "../../src/dcl2.c"
strcpy ( _auto_p , _auto_s ) ; 

#line 106 "../../src/dcl2.c"
strcpy ( _auto_p + _auto_l1 , ( char * ) _auto_buf ) ; 

#line 107 "../../src/dcl2.c"
_auto_n -> _expr__O3.__C3_string = _auto_p ; 
} else 
#line 110 "../../src/dcl2.c"
_auto_n -> _expr__O3.__C3_string = _auto_s ; 

#line 112 "../../src/dcl2.c"
_auto_nx = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 112 "../../src/dcl2.c"
* ) 0 ) ; 

#line 113 "../../src/dcl2.c"
( * _auto_nx ) = ( * _auto_n ) ; 

#line 114 "../../src/dcl2.c"
_auto_nx -> _node_permanent = 1 ; 

#line 115 "../../src/dcl2.c"
Nold = 0 ; 

#line 116 "../../src/dcl2.c"
if ( _auto_this -> _gen_fct_list ) { 
#line 116 "../../src/dcl2.c"
Plist _auto_gl ; 
struct name_list * _auto__Xthis__ctor_name_list ; 

#line 118 "../../src/dcl2.c"
for ( _auto_gl = _auto_this -> _gen_fct_list ;_auto_gl -> _name_list_l ;( _auto_gl = _auto_gl -> _name_list_l ) ) ; 

#line 119 "../../src/dcl2.c"
_auto_gl -> _name_list_l = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , ( ( 
#line 119 "../../src/dcl2.c"
_auto__Xthis__ctor_name_list = ( struct name_list * ) _new ( ( long ) 8) ) , ( ( 
#line 119 "../../src/dcl2.c"
_auto__Xthis__ctor_name_list -> _name_list_f = ( ( struct name * ) _auto_nx ) ) , ( ( _auto__Xthis__ctor_name_list -> _name_list_l = 
#line 119 "../../src/dcl2.c"
( ( struct name_list * ) 0 ) ) , _auto__Xthis__ctor_name_list ) ) ) ) ; 
#line 119 "../../src/dcl2.c"
} else 
#line 122 "../../src/dcl2.c"
_auto_this -> _gen_fct_list = ( struct name_list * ) ( ( _auto__Xthis__ctor_name_list = 0 ) , 
#line 122 "../../src/dcl2.c"
( ( _auto__Xthis__ctor_name_list = ( struct name_list * ) _new ( ( long ) 8) ) , 
#line 122 "../../src/dcl2.c"
( ( _auto__Xthis__ctor_name_list -> _name_list_f = ( ( struct name * ) _auto_nx ) ) , ( ( 
#line 122 "../../src/dcl2.c"
_auto__Xthis__ctor_name_list -> _name_list_l = ( ( struct name_list * ) 0 ) ) , _auto__Xthis__ctor_name_list ) ) ) 
#line 122 "../../src/dcl2.c"
) ; 

#line 123 "../../src/dcl2.c"
_auto_nx -> _name_n_list = 0 ; 
} 
#line 125 "../../src/dcl2.c"
{ 
#line 125 "../../src/dcl2.c"
{ _auto__result = _auto_nx ; 

#line 125 "../../src/dcl2.c"
return _auto__result ; 
} } } ; 

#line 128 "../../src/dcl2.c"
Pname _gen_find ( _auto_this , _auto_f ) register struct gen * _auto_this ; 
struct fct * _auto_f ; 

#line 129 "../../src/dcl2.c"
{ 
#line 129 "../../src/dcl2.c"
Pname _auto__result ; 
Plist _auto_gl ; 

#line 132 "../../src/dcl2.c"
for ( _auto_gl = _auto_this -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 132 "../../src/dcl2.c"
Pname _auto_nx ; 
Pfct _auto_fx ; 
Pname _auto_a ; 
Pname _auto_ax ; 
int _auto_vp ; 

#line 133 "../../src/dcl2.c"
_auto_nx = _auto_gl -> _name_list_f ; 

#line 134 "../../src/dcl2.c"
_auto_fx = ( ( ( struct fct * ) ( _auto_nx -> _expr__O2.__C2_tp ) ) ) ; 

#line 136 "../../src/dcl2.c"
_auto_vp = 0 ; 

#line 140 "../../src/dcl2.c"
if ( _auto_fx -> _fct_nargs_known != _auto_f -> _fct_nargs_known ) { 
#line 140 "../../src/dcl2.c"
if ( _auto_fx -> _fct_nargs && ( _auto_fx -> _fct_nargs_known != 
#line 140 "../../src/dcl2.c"
155 ) ) 
#line 141 "../../src/dcl2.c"
continue ; 
} 
#line 143 "../../src/dcl2.c"
for ( ( ( _auto_ax = _auto_fx -> _fct_argtype ) , ( _auto_a = _auto_f -> _fct_argtype ) ) 
#line 143 "../../src/dcl2.c"
;( _auto_a && _auto_ax ) ;( ( _auto_ax = _auto_ax -> _name_n_list ) , ( _auto_a = _auto_a -> _name_n_list ) ) 
#line 143 "../../src/dcl2.c"
) 
#line 143 "../../src/dcl2.c"
{ 
#line 143 "../../src/dcl2.c"
Ptype _auto_at ; 

#line 145 "../../src/dcl2.c"
_auto_at = _auto_ax -> _expr__O2.__C2_tp ; 

#line 146 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_at , ( struct type * ) _auto_a -> _expr__O2.__C2_tp , 
#line 146 "../../src/dcl2.c"
( int ) 0 ) ) 
#line 146 "../../src/dcl2.c"
goto xx ; 

#line 147 "../../src/dcl2.c"
if ( vrp_equiv ) _auto_vp = 1 ; 

#line 148 "../../src/dcl2.c"
switch ( _auto_at -> _node_base ) { 
#line 148 "../../src/dcl2.c"
case 5 : case 29 : case 21 : case 22 : if 
#line 148 "../../src/dcl2.c"
( ( ( ( struct basetype * ) ( _auto_at ) ) ) -> _basetype_b_unsigned ^ ( 
#line 148 "../../src/dcl2.c"
( ( struct basetype * ) ( _auto_a -> _expr__O2.__C2_tp ) ) ) -> _basetype_b_unsigned ) 
#line 153 "../../src/dcl2.c"
errorFI_PC__E ( ( 
#line 153 "../../src/dcl2.c"
int ) 'w' , ( char * ) "the overloading mechanism cannot tell an unsigned%k from a%k", _auto_at -> _node_base , _auto_at -> _node_base ) ; 
} } 
#line 157 "../../src/dcl2.c"
if ( _auto_ax ) { 
#line 157 "../../src/dcl2.c"
if ( _auto_ax -> _expr__O4.__C4_n_initializer ) errorFPC__E ( ( char * 
#line 157 "../../src/dcl2.c"
) "Ir makes overloaded %s() ambiguous", _auto_this -> _gen_string ) ; 

#line 160 "../../src/dcl2.c"
continue ; 
} 
#line 163 "../../src/dcl2.c"
if ( _auto_a ) { 
#line 163 "../../src/dcl2.c"
if ( _auto_a -> _expr__O4.__C4_n_initializer ) errorFPC__E ( ( char * ) 
#line 163 "../../src/dcl2.c"
"Ir makes overloaded %s() ambiguous", _auto_this -> _gen_string ) ; 

#line 166 "../../src/dcl2.c"
continue ; 
} 
#line 169 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_fx -> _fct_returns , ( struct type * ) 
#line 169 "../../src/dcl2.c"
_auto_f -> _fct_returns , ( int ) 0 ) ) 
#line 170 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "two different return valueTs for overloaded %s: %t and %t", 
#line 170 "../../src/dcl2.c"
_auto_this -> _gen_string , _auto_fx -> _fct_returns , _auto_f -> _fct_returns ) ; 

#line 172 "../../src/dcl2.c"
if ( _auto_vp ) errorFI_PC__E ( ( int ) 'w' , ( char * ) "ATs differ (only): [] vs *") ; 
#line 172 "../../src/dcl2.c"

#line 173 "../../src/dcl2.c"
{ 
#line 173 "../../src/dcl2.c"
{ _auto__result = _auto_nx ; 

#line 173 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 174 "../../src/dcl2.c"
xx : ; 
} 
#line 177 "../../src/dcl2.c"
{ 
#line 177 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 177 "../../src/dcl2.c"
return _auto__result ; 
} } } ; 

#line 180 "../../src/dcl2.c"
int _classdef_dcl ( _auto_this , _auto_cname , _auto_tbl ) register struct classdef * _auto_this ; 
struct name * _auto_cname ; 
struct table * _auto_tbl ; 

#line 181 "../../src/dcl2.c"
{ 
#line 181 "../../src/dcl2.c"
int _auto_nmem ; 
Pname _auto_p ; 
Pptr _auto_cct ; 
Pbase _auto_bt ; 
Pname _auto_px ; 
Ptable _auto_btbl ; 
int _auto_bvirt ; 
Pclass _auto_bcl ; 
int _auto_i ; 
int _auto_fct_seen ; 
int _auto_static_seen ; 
int _auto_local ; 
int _auto_byte_old ; 
int _auto_bit_old ; 
int _auto_max_old ; 
int _auto_boff ; 
int _auto_in_union ; 
int _auto_usz ; 
int _auto_make_ctor ; 
int _auto_make_dtor ; 
Pname _auto_pnx ; 
struct ptr * _auto__Xthis__ctor_ptr ; 

#line 191 "../../src/dcl2.c"
_auto_fct_seen = 0 ; 

#line 192 "../../src/dcl2.c"
_auto_static_seen = 0 ; 

#line 193 "../../src/dcl2.c"
_auto_local = ( _auto_tbl != ( struct table * ) gtbl ) ; 

#line 195 "../../src/dcl2.c"
_auto_byte_old = byte_offset ; 

#line 196 "../../src/dcl2.c"
_auto_bit_old = bit_offset ; 

#line 197 "../../src/dcl2.c"
_auto_max_old = max_align ; 

#line 202 "../../src/dcl2.c"
_auto_make_ctor = 0 ; 

#line 203 "../../src/dcl2.c"
_auto_make_dtor = 0 ; 

#line 206 "../../src/dcl2.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 206 "../../src/dcl2.c"
"0->Cdef.dcl(%d)", _auto_tbl ) ; 

#line 207 "../../src/dcl2.c"
if ( _auto_this -> _node_base != 6 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 207 "../../src/dcl2.c"
"Cdef.dcl(%d)", _auto_this -> _node_base ) ; 

#line 208 "../../src/dcl2.c"
if ( _auto_cname == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 208 "../../src/dcl2.c"
"unNdC") ; 

#line 209 "../../src/dcl2.c"
if ( _auto_cname -> _expr__O2.__C2_tp != ( struct type * ) _auto_this ) errorFI_PC__E ( ( int ) 'i' , 
#line 209 "../../src/dcl2.c"
( char * ) "badCdef") ; 

#line 210 "../../src/dcl2.c"
if ( _auto_tbl == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 210 "../../src/dcl2.c"
"Cdef.dcl(%n,0)", _auto_cname ) ; 

#line 211 "../../src/dcl2.c"
if ( _auto_tbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 211 "../../src/dcl2.c"
"Cdef.dcl(%n,tbl=%d)", _auto_cname , _auto_tbl -> _node_base ) ; 

#line 213 "../../src/dcl2.c"
_auto_nmem = ( ( _name_no_of_names ( ( struct name * ) _auto_this -> _classdef_pubmem ) + _name_no_of_names ( ( struct 
#line 213 "../../src/dcl2.c"
name * ) _auto_this -> _classdef_privmem ) ) + _name_no_of_names ( ( struct name * ) _auto_this -> _classdef_pubdef ) ) 
#line 213 "../../src/dcl2.c"
; 

#line 214 "../../src/dcl2.c"
_auto_in_union = ( ( _auto_this -> _classdef_csu == 36 ) || ( _auto_this -> _classdef_csu == 167 ) ) ; 

#line 216 "../../src/dcl2.c"
if ( _auto_this -> _classdef_clbase ) { 
#line 216 "../../src/dcl2.c"
if ( _auto_this -> _classdef_clbase -> _node_base != 123 ) errorFPC__E ( ( char 
#line 216 "../../src/dcl2.c"
* ) "BC%nU", _auto_this -> _classdef_clbase ) ; 

#line 218 "../../src/dcl2.c"
_auto_this -> _classdef_clbase = ( ( ( struct basetype * ) ( _auto_this -> _classdef_clbase -> _expr__O2.__C2_tp ) ) ) 
#line 218 "../../src/dcl2.c"
-> _basetype_b_name ; 

#line 219 "../../src/dcl2.c"
_auto_bcl = ( ( ( struct classdef * ) ( _auto_this -> _classdef_clbase -> _expr__O2.__C2_tp ) ) ) ; 
#line 219 "../../src/dcl2.c"

#line 220 "../../src/dcl2.c"
if ( ( _auto_bcl -> _type_defined & 02 ) == 0 ) errorFPC__E ( ( char * ) 
#line 220 "../../src/dcl2.c"
"BC%nU", _auto_this -> _classdef_clbase ) ; 

#line 221 "../../src/dcl2.c"
_auto_tbl = ( struct table * ) _auto_bcl -> _classdef_memtbl ; 

#line 222 "../../src/dcl2.c"
if ( _auto_tbl -> _node_base != 142 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 222 "../../src/dcl2.c"
"badBC table %d", _auto_tbl ) ; 

#line 223 "../../src/dcl2.c"
_auto_btbl = _auto_tbl ; 

#line 224 "../../src/dcl2.c"
_auto_bvirt = _auto_bcl -> _classdef_virt_count ; 

#line 225 "../../src/dcl2.c"
if ( _auto_bcl -> _classdef_csu == 36 ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 225 "../../src/dcl2.c"
"C derived from union") ; 

#line 226 "../../src/dcl2.c"
if ( _auto_in_union ) errorFPC__E ( ( char * ) "derived union") ; 
else 
#line 229 "../../src/dcl2.c"
if ( _auto_this -> _classdef_pubbase == 0 ) _auto_this -> _classdef_csu = 6 ; 

#line 230 "../../src/dcl2.c"
_auto_boff = _auto_bcl -> _classdef_real_size ; 

#line 231 "../../src/dcl2.c"
max_align = _type_align ( ( struct type * ) _auto_bcl ) ; 

#line 232 "../../src/dcl2.c"
_auto_this -> _classdef_bit_ass = _auto_bcl -> _classdef_bit_ass ; 
} else 
#line 234 "../../src/dcl2.c"
{ 
#line 234 "../../src/dcl2.c"
_auto_btbl = 0 ; 

#line 236 "../../src/dcl2.c"
_auto_bvirt = 0 ; 

#line 237 "../../src/dcl2.c"
_auto_boff = 0 ; 

#line 238 "../../src/dcl2.c"
if ( ! _auto_in_union ) _auto_this -> _classdef_csu = ( _auto_this -> _classdef_virt_count ? 6 : 32 ) ; 

#line 239 "../../src/dcl2.c"
while ( ( _auto_tbl != ( struct table * ) gtbl ) && _auto_tbl -> _table_t_name ) _auto_tbl = ( 
#line 239 "../../src/dcl2.c"
struct table * ) _auto_tbl -> _table_next ; 

#line 240 "../../src/dcl2.c"
max_align = AL_STRUCT ; 

#line 241 "../../src/dcl2.c"
_auto_this -> _classdef_bit_ass = 1 ; 
} 
#line 244 "../../src/dcl2.c"
{ 
#line 174 "../../src/cfront.h"
( ( struct table * ) _auto_this -> _classdef_memtbl ) -> _table_next = _auto_tbl ; 
} 
#line 245 "../../src/dcl2.c"
{ 
#line 175 "../../src/cfront.h"
( ( struct table * ) _auto_this -> _classdef_memtbl ) -> _table_t_name = _auto_cname ; 
} 
#line 246 "../../src/dcl2.c"
if ( _auto_nmem ) _table_grow ( ( struct table * ) _auto_this -> _classdef_memtbl , ( _auto_nmem <= 2 ) 
#line 246 "../../src/dcl2.c"
? 3 : _auto_nmem ) ; 

#line 248 "../../src/dcl2.c"
{ 
#line 705 "../../src/cfront.h"
cc ++ ; 

#line 705 "../../src/cfront.h"
( * cc ) = ( * ( cc - 1 ) ) ; 
} 
#line 249 "../../src/dcl2.c"
cc -> _dcl_context_not = _auto_cname ; 

#line 250 "../../src/dcl2.c"
cc -> _dcl_context_cot = ( struct classdef * ) _auto_this ; 

#line 252 "../../src/dcl2.c"
byte_offset = ( _auto_usz = _auto_boff ) ; 

#line 253 "../../src/dcl2.c"
bit_offset = 0 ; 

#line 255 "../../src/dcl2.c"
_auto_bt = ( struct basetype * ) _basetype__ctor ( ( struct basetype * ) 0 , 119 , _auto_cname ) 
#line 255 "../../src/dcl2.c"
; 

#line 256 "../../src/dcl2.c"
_auto_bt -> _basetype_b_table = _auto_this -> _classdef_memtbl ; 

#line 257 "../../src/dcl2.c"
_auto_this -> _classdef_this_type = ( cc -> _dcl_context_tot = ( struct type * ) ( _auto_cct = ( struct ptr * 
#line 257 "../../src/dcl2.c"
) ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = ( struct ptr * ) 
#line 257 "../../src/dcl2.c"
_new ( ( long ) 16) ) , ( ( Nt ++ ) , ( ( 
#line 257 "../../src/dcl2.c"
_auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( struct type * ) _auto_bt ) 
#line 257 "../../src/dcl2.c"
) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 0 ) ) , 
#line 257 "../../src/dcl2.c"
_auto__Xthis__ctor_ptr ) ) ) ) ) ) ) ) ; 

#line 258 "../../src/dcl2.c"
_auto_cct -> _node_permanent = 1 ; 

#line 259 "../../src/dcl2.c"
_auto_bt -> _node_permanent = 1 ; 

#line 261 "../../src/dcl2.c"
for ( _auto_p = _auto_this -> _classdef_privmem ;_auto_p ;( _auto_p = _auto_px ) ) { 
#line 261 "../../src/dcl2.c"
Pname _auto_m ; 

#line 263 "../../src/dcl2.c"
_auto_px = _auto_p -> _name_n_list ; 

#line 265 "../../src/dcl2.c"
if ( _auto_p -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 265 "../../src/dcl2.c"
Pfct _auto_f ; 
Pblock _auto_b ; 

#line 266 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 267 "../../src/dcl2.c"
_auto_b = _auto_f -> _fct_body ; 

#line 268 "../../src/dcl2.c"
_auto_f -> _fct_body = 0 ; 

#line 269 "../../src/dcl2.c"
switch ( _auto_p -> _name_n_sto ) { 
#line 269 "../../src/dcl2.c"
case 2 : case 31 : case 27 : case 14 : errorFPC__E ( 
#line 269 "../../src/dcl2.c"
( char * ) "M%n cannot be%k", _auto_p , _auto_p -> _name_n_sto ) ; 

#line 275 "../../src/dcl2.c"
_auto_p -> _name_n_sto = 0 ; 
} 
#line 277 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_p , ( struct table * ) _auto_this -> _classdef_memtbl , 
#line 277 "../../src/dcl2.c"
( int ) 0 ) ; 

#line 278 "../../src/dcl2.c"
if ( _auto_b ) { 
#line 278 "../../src/dcl2.c"
if ( _auto_m -> _expr__O2.__C2_tp -> _type_defined & 3) errorFPC__E ( ( char * 
#line 278 "../../src/dcl2.c"
) "two definitions of%n", _auto_m ) ; 
else 
#line 281 "../../src/dcl2.c"
if ( _auto_p -> _name_where . _loc_line != _auto_m -> _name_where . _loc_line ) errorFI_PC__E ( ( int ) 's' , 
#line 281 "../../src/dcl2.c"
( char * ) "previously declared%n cannot be defined inCD", _auto_p ) ; 
else 
#line 284 "../../src/dcl2.c"
( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) -> _fct_body = 
#line 284 "../../src/dcl2.c"
_auto_b ; 
} 
#line 286 "../../src/dcl2.c"
_auto_fct_seen = 1 ; 
} else 
#line 288 "../../src/dcl2.c"
{ 
#line 288 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_p , ( struct table * ) 
#line 288 "../../src/dcl2.c"
_auto_this -> _classdef_memtbl , ( int ) 0 ) ; 

#line 290 "../../src/dcl2.c"
if ( _auto_m ) { 
#line 290 "../../src/dcl2.c"
if ( _auto_m -> _name_n_stclass == 31 ) { 
#line 291 "../../src/dcl2.c"
_auto_static_seen = 1 ; 

#line 293 "../../src/dcl2.c"
_auto_m -> _name_n_sto = ( ( _auto_tbl == ( struct table * ) gtbl ) ? 0: 31 ) ; 
#line 293 "../../src/dcl2.c"

#line 294 "../../src/dcl2.c"
if ( _auto_m -> _expr__O4.__C4_n_initializer ) errorFI_PC__E ( ( int ) 's' , ( char * ) "staticM%n withIr", 
#line 294 "../../src/dcl2.c"
_auto_m ) ; 
} 
#line 296 "../../src/dcl2.c"
if ( _auto_in_union ) { 
#line 296 "../../src/dcl2.c"
if ( _auto_usz < byte_offset ) _auto_usz = byte_offset ; 

#line 298 "../../src/dcl2.c"
byte_offset = 0 ; 
} } } } 
#line 303 "../../src/dcl2.c"
if ( _auto_this -> _classdef_privmem && ( _auto_this -> _classdef_csu == 32 ) ) _auto_this -> 
#line 303 "../../src/dcl2.c"
_classdef_csu = 6 ; 

#line 305 "../../src/dcl2.c"
for ( _auto_p = _auto_this -> _classdef_pubmem ;_auto_p ;( _auto_p = _auto_px ) ) { 
#line 305 "../../src/dcl2.c"
Pname _auto_m ; 

#line 307 "../../src/dcl2.c"
_auto_px = _auto_p -> _name_n_list ; 

#line 309 "../../src/dcl2.c"
if ( _auto_p -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 309 "../../src/dcl2.c"
Pfct _auto_f ; 
Pblock _auto_b ; 

#line 310 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 311 "../../src/dcl2.c"
_auto_b = _auto_f -> _fct_body ; 

#line 312 "../../src/dcl2.c"
_auto_f -> _fct_body = 0 ; 

#line 313 "../../src/dcl2.c"
switch ( _auto_p -> _name_n_sto ) { 
#line 313 "../../src/dcl2.c"
case 2 : case 31 : case 27 : case 14 : errorFPC__E ( 
#line 313 "../../src/dcl2.c"
( char * ) "M%n cannot be%k", _auto_p , _auto_p -> _name_n_sto ) ; 

#line 319 "../../src/dcl2.c"
_auto_p -> _name_n_sto = 0 ; 
} 
#line 321 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_p , ( struct table * ) _auto_this -> _classdef_memtbl , 
#line 321 "../../src/dcl2.c"
25 ) ; 

#line 322 "../../src/dcl2.c"
if ( _auto_b ) { 
#line 322 "../../src/dcl2.c"
if ( _auto_m -> _expr__O2.__C2_tp -> _type_defined & 3) errorFPC__E ( ( char * 
#line 322 "../../src/dcl2.c"
) "two definitions of%n", _auto_m ) ; 
else 
#line 325 "../../src/dcl2.c"
if ( _auto_p -> _name_where . _loc_line != _auto_m -> _name_where . _loc_line ) errorFI_PC__E ( ( int ) 's' , 
#line 325 "../../src/dcl2.c"
( char * ) "previously declared%n cannot be defined inCD", _auto_p ) ; 
else 
#line 328 "../../src/dcl2.c"
( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) -> _fct_body = 
#line 328 "../../src/dcl2.c"
_auto_b ; 
} 
#line 330 "../../src/dcl2.c"
_auto_fct_seen = 1 ; 
} else 
#line 332 "../../src/dcl2.c"
{ 
#line 332 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_p , ( struct table * ) 
#line 332 "../../src/dcl2.c"
_auto_this -> _classdef_memtbl , 25 ) ; 

#line 334 "../../src/dcl2.c"
if ( _auto_m ) { 
#line 334 "../../src/dcl2.c"
if ( _auto_m -> _name_n_stclass == 31 ) { 
#line 335 "../../src/dcl2.c"
_auto_m -> _name_n_sto = ( ( 
#line 335 "../../src/dcl2.c"
_auto_tbl == ( struct table * ) gtbl ) ? 0: 31 ) ; 

#line 337 "../../src/dcl2.c"
_auto_static_seen = 1 ; 

#line 338 "../../src/dcl2.c"
if ( _auto_m -> _expr__O4.__C4_n_initializer ) errorFI_PC__E ( ( int ) 's' , ( char * ) "staticM%n withIr", 
#line 338 "../../src/dcl2.c"
_auto_m ) ; 
} 
#line 340 "../../src/dcl2.c"
if ( _auto_in_union ) { 
#line 340 "../../src/dcl2.c"
if ( _auto_usz < byte_offset ) _auto_usz = byte_offset ; 

#line 342 "../../src/dcl2.c"
byte_offset = 0 ; 
} } } } 
#line 352 "../../src/dcl2.c"
if ( _auto_in_union ) byte_offset = _auto_usz ; 

#line 354 "../../src/dcl2.c"
if ( _auto_this -> _classdef_virt_count || _auto_bvirt ) { 
#line 354 "../../src/dcl2.c"
Pname _auto_vp [ 100] ; 
Pname _auto_nn ; 

#line 358 "../../src/dcl2.c"
_auto_nn = ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) "_ctor", 
#line 358 "../../src/dcl2.c"
( int ) 0 ) ) ; 

#line 359 "../../src/dcl2.c"
if ( ( _auto_nn == 0 ) || ( _auto_nn -> _expr__O5.__C5_n_table != _auto_this -> _classdef_memtbl ) ) _auto_make_ctor = 
#line 359 "../../src/dcl2.c"
1 ; 

#line 361 "../../src/dcl2.c"
{ 
#line 361 "../../src/dcl2.c"
char * _auto_s ; 
Pname _auto_n ; 
Pname _auto_nn ; 

#line 362 "../../src/dcl2.c"
_auto_s = ( ( ( char * ) ( _new ( ( long ) 20 ) ) 
#line 362 "../../src/dcl2.c"
) ) ; 

#line 363 "../../src/dcl2.c"
sprintf ( _auto_s , ( char * ) "%s__vtbl", _auto_this -> _classdef_string ) ; 

#line 364 "../../src/dcl2.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 364 "../../src/dcl2.c"

#line 365 "../../src/dcl2.c"
_auto_n -> _expr__O2.__C2_tp = Pfctvec_type ; 

#line 366 "../../src/dcl2.c"
_auto_nn = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_n , ( int 
#line 366 "../../src/dcl2.c"
) 0 ) ; 

#line 367 "../../src/dcl2.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> _name_n_used ++ ; 
} } 
#line 370 "../../src/dcl2.c"
if ( _auto_this -> _classdef_virt_count = _auto_bvirt ) for ( _auto_i = 0 ;( _auto_i < _auto_bvirt ) 
#line 370 "../../src/dcl2.c"
;( _auto_i ++ ) ) 
#line 371 "../../src/dcl2.c"
( _auto_vp [ _auto_i ] ) = ( _auto_bcl -> _classdef_virt_init [ _auto_i ] ) 
#line 371 "../../src/dcl2.c"
; 

#line 373 "../../src/dcl2.c"
for ( _auto_nn = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_nn ;( _auto_nn = 
#line 373 "../../src/dcl2.c"
_table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 373 "../../src/dcl2.c"
{ 
#line 373 "../../src/dcl2.c"
switch ( 
#line 373 "../../src/dcl2.c"
_auto_nn -> _expr__O2.__C2_tp -> _node_base ) 
#line 374 "../../src/dcl2.c"
{ 
#line 374 "../../src/dcl2.c"
case 108 : { 
#line 376 "../../src/dcl2.c"
Pfct _auto_f ; 

#line 376 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 377 "../../src/dcl2.c"
if ( _auto_bvirt ) { 
#line 377 "../../src/dcl2.c"
Pname _auto_vn ; 
Pfct _auto_vnf ; 

#line 378 "../../src/dcl2.c"
_auto_vn = _table_look ( ( struct table * ) _auto_btbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 378 "../../src/dcl2.c"
; 

#line 379 "../../src/dcl2.c"
if ( _auto_vn ) { 
#line 379 "../../src/dcl2.c"
if ( _auto_vn -> _expr__O5.__C5_n_table == gtbl ) goto vvv ; 

#line 381 "../../src/dcl2.c"
; 

#line 382 "../../src/dcl2.c"
switch ( _auto_vn -> _expr__O2.__C2_tp -> _node_base ) { 
#line 382 "../../src/dcl2.c"
case 108 : _auto_vnf = ( ( ( struct fct * 
#line 382 "../../src/dcl2.c"
) ( _auto_vn -> _expr__O2.__C2_tp ) ) ) ; 

#line 385 "../../src/dcl2.c"
if ( _auto_vnf -> _fct_f_virtual ) { 
#line 385 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_vnf , ( 
#line 385 "../../src/dcl2.c"
struct type * ) _auto_f , ( int ) 0 ) ) 
#line 386 "../../src/dcl2.c"
errorFPC__E ( ( char * 
#line 386 "../../src/dcl2.c"
) "virtual%nT mismatch:%t and%t", _auto_nn , _auto_f , _auto_vnf ) ; 

#line 387 "../../src/dcl2.c"
_auto_f -> _fct_f_virtual = _auto_vnf -> _fct_f_virtual ; 

#line 388 "../../src/dcl2.c"
( _auto_vp [ _auto_f -> _fct_f_virtual - 1 ] ) = _auto_nn ; 
} else 
#line 391 "../../src/dcl2.c"
goto vvv ; 

#line 392 "../../src/dcl2.c"
break ; 

#line 393 "../../src/dcl2.c"
case 76 : { 
#line 394 "../../src/dcl2.c"
Pgen _auto_g ; 

#line 394 "../../src/dcl2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_vn -> _expr__O2.__C2_tp ) ) ) ; 

#line 395 "../../src/dcl2.c"
if ( _auto_f -> _fct_f_virtual || ( ( ( struct fct * ) ( _auto_g -> _gen_fct_list -> _name_list_f -> 
#line 395 "../../src/dcl2.c"
_expr__O2.__C2_tp ) ) ) -> _fct_f_virtual ) 
#line 397 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 397 "../../src/dcl2.c"
"virtual%n overloaded inBC but not in derivedC", _auto_nn ) ; 

#line 398 "../../src/dcl2.c"
break ; 
} 
#line 400 "../../src/dcl2.c"
default : goto vvv ; 
} } else 
#line 405 "../../src/dcl2.c"
goto vvv ; 
} else 
#line 407 "../../src/dcl2.c"
{ 
#line 407 "../../src/dcl2.c"
vvv : if ( _auto_f -> _fct_f_virtual ) { 
#line 410 "../../src/dcl2.c"
_auto_f -> _fct_f_virtual = ( ++ _auto_this -> 
#line 410 "../../src/dcl2.c"
_classdef_virt_count ) ; 

#line 412 "../../src/dcl2.c"
switch ( _auto_f -> _fct_f_virtual ) { 
#line 412 "../../src/dcl2.c"
case 1 : { 
#line 414 "../../src/dcl2.c"
Pname _auto_vpn ; 

#line 414 "../../src/dcl2.c"
_auto_vpn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 414 "../../src/dcl2.c"
* ) "_vptr") ; 

#line 415 "../../src/dcl2.c"
_auto_vpn -> _expr__O2.__C2_tp = Pfctvec_type ; 

#line 416 "../../src/dcl2.c"
( ( _name_dcl ( ( struct name * ) _auto_vpn , ( struct table * ) _auto_this -> _classdef_memtbl , 
#line 416 "../../src/dcl2.c"
25 ) ) ) ; 

#line 417 "../../src/dcl2.c"
_name__dtor ( ( struct name * ) _auto_vpn , 1) ; 
} 
#line 419 "../../src/dcl2.c"
default : ( _auto_vp [ _auto_f -> _fct_f_virtual - 1 ] ) = _auto_nn ; 
} } } 
#line 424 "../../src/dcl2.c"
break ; 
} 
#line 427 "../../src/dcl2.c"
case 76 : { 
#line 428 "../../src/dcl2.c"
Plist _auto_gl ; 
Pgen _auto_g ; 

#line 429 "../../src/dcl2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_nn -> _expr__O2.__C2_tp ) ) ) ; 

#line 431 "../../src/dcl2.c"
if ( _auto_bvirt ) { 
#line 431 "../../src/dcl2.c"
Pname _auto_vn ; 
Pgen _auto_g2 ; 
Pfct _auto_f2 ; 

#line 432 "../../src/dcl2.c"
_auto_vn = _table_look ( ( struct table * ) _auto_btbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 432 "../../src/dcl2.c"
; 

#line 435 "../../src/dcl2.c"
if ( _auto_vn ) { 
#line 435 "../../src/dcl2.c"
if ( _auto_vn -> _expr__O5.__C5_n_table == gtbl ) goto ovvv ; 

#line 438 "../../src/dcl2.c"
switch ( _auto_vn -> _expr__O2.__C2_tp -> _node_base ) { 
#line 438 "../../src/dcl2.c"
default : goto ovvv ; 

#line 441 "../../src/dcl2.c"
case 108 : _auto_f2 = ( ( ( struct fct * ) ( _auto_vn -> _expr__O2.__C2_tp ) ) ) 
#line 441 "../../src/dcl2.c"
; 

#line 443 "../../src/dcl2.c"
if ( _auto_f2 -> _fct_f_virtual || ( ( ( struct fct * ) ( _auto_g -> _gen_fct_list -> _name_list_f -> 
#line 443 "../../src/dcl2.c"
_expr__O2.__C2_tp ) ) ) -> _fct_f_virtual ) 
#line 445 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 445 "../../src/dcl2.c"
"virtual%n overloaded in derivedC but not inBC", _auto_nn ) ; 

#line 446 "../../src/dcl2.c"
break ; 

#line 447 "../../src/dcl2.c"
case 76 : _auto_g2 = ( ( ( struct gen * ) ( _auto_vn -> _expr__O2.__C2_tp ) ) ) 
#line 447 "../../src/dcl2.c"
; 

#line 450 "../../src/dcl2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 450 "../../src/dcl2.c"
Pname _auto_fn ; 
Pfct _auto_f ; 
Pname _auto_vn2 ; 

#line 451 "../../src/dcl2.c"
_auto_fn = _auto_gl -> _name_list_f ; 

#line 452 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 

#line 453 "../../src/dcl2.c"
_auto_vn2 = _gen_find ( ( struct gen * ) _auto_g2 , ( struct fct * ) _auto_f ) ; 

#line 455 "../../src/dcl2.c"
if ( _auto_vn2 == 0 ) { 
#line 455 "../../src/dcl2.c"
if ( _auto_f -> _fct_f_virtual ) errorFI_PC__E ( ( int ) 
#line 455 "../../src/dcl2.c"
's' , ( char * ) "virtual overloaded%n not found inBC", _auto_fn ) ; 
} else 
#line 458 "../../src/dcl2.c"
{ 
#line 458 "../../src/dcl2.c"
Pfct _auto_vn2f ; 

#line 459 "../../src/dcl2.c"
_auto_vn2f = ( ( ( struct fct * ) ( _auto_vn2 -> _expr__O2.__C2_tp ) ) ) ; 

#line 460 "../../src/dcl2.c"
if ( _auto_vn2f -> _fct_f_virtual ) { 
#line 460 "../../src/dcl2.c"
_auto_f -> _fct_f_virtual = _auto_vn2f -> _fct_f_virtual ; 

#line 462 "../../src/dcl2.c"
( _auto_vp [ _auto_f -> _fct_f_virtual - 1 ] ) = _auto_fn ; 
} } } 
#line 466 "../../src/dcl2.c"
break ; 
} } else 
#line 470 "../../src/dcl2.c"
goto ovvv ; 
} else 
#line 472 "../../src/dcl2.c"
{ 
#line 472 "../../src/dcl2.c"
ovvv : for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 472 "../../src/dcl2.c"

#line 474 "../../src/dcl2.c"
Pname _auto_fn ; 
Pfct _auto_f ; 

#line 475 "../../src/dcl2.c"
_auto_fn = _auto_gl -> _name_list_f ; 

#line 476 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 

#line 479 "../../src/dcl2.c"
if ( _auto_f -> _fct_f_virtual ) { 
#line 479 "../../src/dcl2.c"
_auto_f -> _fct_f_virtual = ( ++ _auto_this -> _classdef_virt_count ) ; 

#line 481 "../../src/dcl2.c"
switch ( _auto_f -> _fct_f_virtual ) { 
#line 481 "../../src/dcl2.c"
case 1 : { 
#line 483 "../../src/dcl2.c"
Pname _auto_vpn ; 

#line 483 "../../src/dcl2.c"
_auto_vpn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 483 "../../src/dcl2.c"
* ) "_vptr") ; 

#line 484 "../../src/dcl2.c"
_auto_vpn -> _expr__O2.__C2_tp = Pfctvec_type ; 

#line 485 "../../src/dcl2.c"
( ( _name_dcl ( ( struct name * ) _auto_vpn , ( struct table * ) _auto_this -> _classdef_memtbl , 
#line 485 "../../src/dcl2.c"
( int ) 0 ) ) ) ; 

#line 486 "../../src/dcl2.c"
_name__dtor ( ( struct name * ) _auto_vpn , 1) ; 
} 
#line 488 "../../src/dcl2.c"
default : ( _auto_vp [ _auto_f -> _fct_f_virtual - 1 ] ) = _auto_fn ; 
} } } } 
#line 494 "../../src/dcl2.c"
break ; 
} } } 
#line 498 "../../src/dcl2.c"
_auto_this -> _classdef_virt_init = ( ( ( struct name * * ) ( _new ( 
#line 498 "../../src/dcl2.c"
( long ) ( 4* _auto_this -> _classdef_virt_count ) ) ) ) ) ; 

#line 499 "../../src/dcl2.c"
for ( _auto_i = 0 ;( _auto_i < _auto_this -> _classdef_virt_count ) ;( _auto_i ++ ) ) ( _auto_this -> 
#line 499 "../../src/dcl2.c"
_classdef_virt_init [ _auto_i ] ) = ( _auto_vp [ _auto_i ] ) ; 
} 
#line 502 "../../src/dcl2.c"
; 

#line 503 "../../src/dcl2.c"
for ( _auto_p = _auto_this -> _classdef_pubdef ;_auto_p ;( _auto_p = _auto_pnx ) ) { 
#line 503 "../../src/dcl2.c"
char * _auto_qs ; 
char * _auto_ms ; 
Pname _auto_cx ; 
Ptable _auto_ctbl ; 
Pname _auto_mx ; 

#line 504 "../../src/dcl2.c"
_auto_qs = _auto_p -> _name__O6.__C6_n_qualifier -> _expr__O3.__C3_string ; 

#line 505 "../../src/dcl2.c"
_auto_ms = _auto_p -> _expr__O3.__C3_string ; 

#line 509 "../../src/dcl2.c"
_auto_pnx = _auto_p -> _name_n_list ; 

#line 511 "../../src/dcl2.c"
if ( strcmp ( _auto_ms , _auto_qs ) == 0 ) _auto_ms = "_ctor"; 

#line 513 "../../src/dcl2.c"
for ( _auto_cx = _auto_this -> _classdef_clbase ;_auto_cx ;( _auto_cx = ( ( ( struct classdef * ) ( _auto_cx -> 
#line 513 "../../src/dcl2.c"
_expr__O2.__C2_tp ) ) ) -> _classdef_clbase ) ) 
#line 513 "../../src/dcl2.c"
{ 
#line 513 "../../src/dcl2.c"
if ( strcmp ( _auto_cx -> _expr__O3.__C3_string , _auto_qs ) == 
#line 513 "../../src/dcl2.c"
0 ) 
#line 514 "../../src/dcl2.c"
goto ok ; 
} 
#line 516 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "publicQr %s not aBC", _auto_qs ) ; 

#line 517 "../../src/dcl2.c"
continue ; 

#line 518 "../../src/dcl2.c"
ok : _auto_ctbl = ( ( ( struct classdef * ) ( _auto_cx -> _expr__O2.__C2_tp ) ) ) -> 
#line 518 "../../src/dcl2.c"
_classdef_memtbl ; 

#line 520 "../../src/dcl2.c"
_auto_mx = _table_lookc ( ( struct table * ) _auto_ctbl , _auto_ms , ( int ) 0 ) ; 
#line 520 "../../src/dcl2.c"

#line 522 "../../src/dcl2.c"
if ( Ebase ) { 
#line 522 "../../src/dcl2.c"
if ( ! _classdef_has_friend ( ( struct classdef * ) Ebase , ( 
#line 522 "../../src/dcl2.c"
struct name * ) cc -> _dcl_context_nof ) ) 
#line 523 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "QdMN%n is in privateBC", _auto_p ) ; 
#line 523 "../../src/dcl2.c"
} else 
#line 525 "../../src/dcl2.c"
if ( Epriv ) { 
#line 525 "../../src/dcl2.c"
if ( ! _classdef_has_friend ( ( struct classdef * ) 
#line 525 "../../src/dcl2.c"
Epriv , ( struct name * ) cc -> _dcl_context_nof ) ) 
#line 526 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "QdMN%n is private", 
#line 526 "../../src/dcl2.c"
_auto_p ) ; 
} 
#line 529 "../../src/dcl2.c"
if ( _auto_mx == 0 ) { 
#line 529 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "C%n does not have aM %s", _auto_cx , 
#line 529 "../../src/dcl2.c"
_auto_p -> _expr__O3.__C3_string ) ; 

#line 531 "../../src/dcl2.c"
_auto_p -> _expr__O2.__C2_tp = ( struct type * ) any_type ; 
} else 
#line 533 "../../src/dcl2.c"
{ 
#line 533 "../../src/dcl2.c"
if ( _auto_mx -> _expr__O2.__C2_tp -> _node_base == 76 ) errorFI_PC__E ( ( int ) 's' , 
#line 533 "../../src/dcl2.c"
( char * ) "public specification of overloaded%n", _auto_mx ) ; 

#line 535 "../../src/dcl2.c"
_auto_p -> _node_base = 25 ; 
} 
#line 538 "../../src/dcl2.c"
_auto_p -> _name__O6.__C6_n_qualifier = _auto_mx ; 

#line 539 "../../src/dcl2.c"
( ( _table_insert ( ( struct table * ) _auto_this -> _classdef_memtbl , ( struct name * ) _auto_p , 
#line 539 "../../src/dcl2.c"
( int ) 0 ) ) ) ; 

#line 541 "../../src/dcl2.c"
if ( Nold ) errorFPC__E ( ( char * ) "twoDs of CM%n", _auto_p ) ; 
} 
#line 543 "../../src/dcl2.c"
_auto_this -> _classdef_pubdef = 0 ; 

#line 545 "../../src/dcl2.c"
if ( bit_offset ) byte_offset += ( ( bit_offset / BI_IN_BYTE ) + 1 ) ; 

#line 546 "../../src/dcl2.c"
_auto_this -> _classdef_real_size = byte_offset ; 

#line 548 "../../src/dcl2.c"
if ( byte_offset < SZ_STRUCT ) byte_offset = SZ_STRUCT ; 

#line 549 "../../src/dcl2.c"
{ 
#line 549 "../../src/dcl2.c"
int _auto_waste ; 
Plist _auto_fl ; 

#line 549 "../../src/dcl2.c"
_auto_waste = ( byte_offset % max_align ) ; 

#line 550 "../../src/dcl2.c"
if ( _auto_waste ) byte_offset += ( max_align - _auto_waste ) ; 

#line 552 "../../src/dcl2.c"
_auto_this -> _classdef_obj_size = byte_offset ; 

#line 553 "../../src/dcl2.c"
_auto_this -> _classdef_obj_align = max_align ; 

#line 555 "../../src/dcl2.c"
if ( ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) 
#line 555 "../../src/dcl2.c"
"_dtor", ( int ) 0 ) ) && ( ( _table_look ( ( struct table * 
#line 555 "../../src/dcl2.c"
) _auto_this -> _classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) 
#line 555 "../../src/dcl2.c"
== 0 ) ) 
#line 556 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%s has destructor but no constructor", 
#line 556 "../../src/dcl2.c"
_auto_this -> _classdef_string ) ; 

#line 558 "../../src/dcl2.c"
{ 
#line 558 "../../src/dcl2.c"
Pname _auto_m ; 
Pclass _auto_oc ; 
int _auto_ct ; 
int _auto_dt ; 
int _auto_un ; 
Pname _auto_statc ; 
Pname _auto_statd ; 

#line 560 "../../src/dcl2.c"
_auto_oc = _auto_this -> _classdef_in_class ; 

#line 561 "../../src/dcl2.c"
_auto_ct = ( ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) 
#line 561 "../../src/dcl2.c"
"_ctor", ( int ) 0 ) ) == 0 ) ; 

#line 562 "../../src/dcl2.c"
_auto_dt = ( ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) 
#line 562 "../../src/dcl2.c"
"_dtor", ( int ) 0 ) ) == 0 ) ; 

#line 563 "../../src/dcl2.c"
_auto_un = ( _auto_this -> _classdef_csu == 36 ) ; 

#line 564 "../../src/dcl2.c"
_auto_statc = 0 ; 

#line 565 "../../src/dcl2.c"
_auto_statd = 0 ; 

#line 567 "../../src/dcl2.c"
for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_m ;( _auto_m = 
#line 567 "../../src/dcl2.c"
_table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 567 "../../src/dcl2.c"
{ 
#line 567 "../../src/dcl2.c"
if ( 
#line 567 "../../src/dcl2.c"
_auto_m -> _node_base == 25 ) 
#line 569 "../../src/dcl2.c"
continue ; 

#line 571 "../../src/dcl2.c"
{ 
#line 571 "../../src/dcl2.c"
Ptype _auto_t ; 

#line 571 "../../src/dcl2.c"
_auto_t = _auto_m -> _expr__O2.__C2_tp ; 

#line 572 "../../src/dcl2.c"
switch ( _auto_t -> _node_base ) { 
#line 572 "../../src/dcl2.c"
default : if ( _auto_ct && ( _auto_make_ctor == 0 ) 
#line 572 "../../src/dcl2.c"
) 
#line 574 "../../src/dcl2.c"
{ 
#line 574 "../../src/dcl2.c"
if ( _type_is_ref ( ( struct type * ) _auto_t ) ) errorFPC__E ( ( char 
#line 574 "../../src/dcl2.c"
* ) "reference%n inC %s without constructor", _auto_m , _auto_this -> _classdef_string ) ; 

#line 576 "../../src/dcl2.c"
if ( _type_tconst ( ( struct type * ) _auto_t ) && ( vec_const == 0 ) ) 
#line 576 "../../src/dcl2.c"

#line 576 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "constant%n inC %s without constructor", _auto_m , _auto_this -> _classdef_string ) ; 
} 
#line 578 "../../src/dcl2.c"
break ; 

#line 579 "../../src/dcl2.c"
case 108 : case 76 : case 6 : case 13 : continue ; 

#line 584 "../../src/dcl2.c"
case 110 : break ; 
} 
#line 587 "../../src/dcl2.c"
{ 
#line 587 "../../src/dcl2.c"
Pname _auto_cn ; 

#line 587 "../../src/dcl2.c"
_auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_t ) ; 

#line 588 "../../src/dcl2.c"
if ( _auto_cn == 0 ) _auto_cn = cl_obj_vec ; 

#line 589 "../../src/dcl2.c"
if ( _auto_cn ) { 
#line 589 "../../src/dcl2.c"
Pclass _auto_cl ; 

#line 590 "../../src/dcl2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 591 "../../src/dcl2.c"
if ( _auto_cl -> _classdef_bit_ass == 0 ) _auto_this -> _classdef_bit_ass = 0 ; 

#line 592 "../../src/dcl2.c"
if ( ( _auto_ct || _auto_dt ) || _auto_un ) { 
#line 592 "../../src/dcl2.c"
Pname _auto_ctor ; 
Pname _auto_dtor ; 

#line 593 "../../src/dcl2.c"
_auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 593 "../../src/dcl2.c"
_classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) ; 

#line 594 "../../src/dcl2.c"
_auto_dtor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 594 "../../src/dcl2.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 595 "../../src/dcl2.c"
if ( _auto_ctor ) { 
#line 595 "../../src/dcl2.c"
if ( _auto_m -> _name_n_stclass == 31 ) { 
#line 596 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 
#line 596 "../../src/dcl2.c"
's' , ( char * ) "staticM%n ofC%n with constructor", _auto_m , _auto_cn ) ; 

#line 598 "../../src/dcl2.c"
_auto_statc = _auto_m ; 
} else 
#line 600 "../../src/dcl2.c"
if ( _auto_un ) errorFPC__E ( ( char * ) "M%n ofC%n with constructor in union", _auto_m , _auto_cn ) ; 
#line 600 "../../src/dcl2.c"
else 
#line 602 "../../src/dcl2.c"
if ( _auto_ct ) { 
#line 602 "../../src/dcl2.c"
if ( _auto_statc ) errorFI_PC__E ( ( int ) 's' , ( 
#line 602 "../../src/dcl2.c"
char * ) "staticM%n ofC%t with constructor", _auto_statc , _auto_statc -> _expr__O2.__C2_tp ) ; 

#line 604 "../../src/dcl2.c"
_auto_make_ctor = 1 ; 

#line 605 "../../src/dcl2.c"
_auto_ct = 0 ; 
} } 
#line 608 "../../src/dcl2.c"
if ( _auto_dtor ) { 
#line 608 "../../src/dcl2.c"
if ( _auto_m -> _name_n_stclass == 31 ) { 
#line 609 "../../src/dcl2.c"
errorFI_PC__E ( ( 
#line 609 "../../src/dcl2.c"
int ) 's' , ( char * ) "staticM%n ofC%n with destructor", _auto_m , _auto_cn ) ; 

#line 611 "../../src/dcl2.c"
_auto_statd = _auto_m ; 
} else 
#line 613 "../../src/dcl2.c"
if ( _auto_un ) errorFPC__E ( ( char * ) "M%n ofC%n with destructor in union", _auto_m , _auto_cn ) ; 
#line 613 "../../src/dcl2.c"
else 
#line 615 "../../src/dcl2.c"
if ( _auto_dt ) { 
#line 615 "../../src/dcl2.c"
if ( _auto_statd ) errorFI_PC__E ( ( int ) 's' , ( 
#line 615 "../../src/dcl2.c"
char * ) "staticM%n ofC%t with constructor", _auto_statd , _auto_statd -> _expr__O2.__C2_tp ) ; 

#line 617 "../../src/dcl2.c"
_auto_make_dtor = 1 ; 

#line 618 "../../src/dcl2.c"
_auto_dt = 0 ; 
} } } } } } } } 
#line 626 "../../src/dcl2.c"
if ( _auto_make_ctor ) { 
#line 626 "../../src/dcl2.c"
Pname _auto_ct ; 

#line 627 "../../src/dcl2.c"
_auto_ct = ( _table_look ( ( struct table * ) _auto_this -> _classdef_memtbl , ( char * ) "_ctor", 
#line 627 "../../src/dcl2.c"
( int ) 0 ) ) ; 

#line 628 "../../src/dcl2.c"
if ( ( _auto_ct == 0 ) || ( _auto_ct -> _expr__O5.__C5_n_table != _auto_this -> _classdef_memtbl ) ) { 
#line 628 "../../src/dcl2.c"

#line 628 "../../src/dcl2.c"

#line 631 "../../src/dcl2.c"
if ( _auto_ct && ( _classdef_has_ictor ( _auto_this ) == 0 ) ) errorFPC__E ( ( char * 
#line 631 "../../src/dcl2.c"
) "%k %s needs a constructor", _auto_this -> _classdef_csu , _auto_this -> _classdef_string ) ; 

#line 632 "../../src/dcl2.c"
{ 
#line 632 "../../src/dcl2.c"
Pname _auto_n ; 
Pfct _auto_f ; 

#line 632 "../../src/dcl2.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_this -> _classdef_string ) 
#line 632 "../../src/dcl2.c"
; 

#line 633 "../../src/dcl2.c"
_auto_f = ( struct fct * ) _fct__ctor ( ( struct fct * ) 0 , ( struct 
#line 633 "../../src/dcl2.c"
type * ) defa_type , ( struct name * ) 0 , 1 ) ; 

#line 634 "../../src/dcl2.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 

#line 635 "../../src/dcl2.c"
_auto_n -> _name_n_oper = 123 ; 

#line 636 "../../src/dcl2.c"
{ 
#line 636 "../../src/dcl2.c"
Pname _auto_m ; 
struct block * _auto__Xthis__ctor_block ; 

#line 636 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) _auto_this -> _classdef_memtbl , 25 ) 
#line 636 "../../src/dcl2.c"
; 

#line 637 "../../src/dcl2.c"
( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) -> _fct_body = ( 
#line 637 "../../src/dcl2.c"
struct block * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( ( _auto__Xthis__ctor_block = 0 
#line 637 "../../src/dcl2.c"
) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( struct stmt * ) 
#line 637 "../../src/dcl2.c"
( _auto__Xthis__ctor_block ) ) , 116 , curloc , ( ( struct stmt * ) 0 ) ) 
#line 637 "../../src/dcl2.c"
) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct name * ) 0 ) 
#line 637 "../../src/dcl2.c"
) , _auto__Xthis__ctor_block ) ) ) ; 
} } } } 
#line 641 "../../src/dcl2.c"
if ( _auto_make_dtor && ( ( _table_look ( ( struct table * ) 
#line 641 "../../src/dcl2.c"
_auto_this -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) == 
#line 641 "../../src/dcl2.c"
0 ) ) 
#line 641 "../../src/dcl2.c"
{ 
#line 641 "../../src/dcl2.c"
Pname _auto_n ; 
Pfct _auto_f ; 

#line 643 "../../src/dcl2.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_this -> _classdef_string ) 
#line 643 "../../src/dcl2.c"
; 

#line 644 "../../src/dcl2.c"
_auto_f = ( struct fct * ) _fct__ctor ( ( struct fct * ) 0 , ( struct 
#line 644 "../../src/dcl2.c"
type * ) defa_type , ( struct name * ) 0 , 1 ) ; 

#line 645 "../../src/dcl2.c"
_auto_n -> _expr__O2.__C2_tp = ( struct type * ) _auto_f ; 

#line 646 "../../src/dcl2.c"
_auto_n -> _name_n_oper = 162 ; 

#line 647 "../../src/dcl2.c"
{ 
#line 647 "../../src/dcl2.c"
Pname _auto_m ; 
struct block * _auto__Xthis__ctor_block ; 

#line 647 "../../src/dcl2.c"
_auto_m = _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) _auto_this -> _classdef_memtbl , 25 ) 
#line 647 "../../src/dcl2.c"
; 

#line 648 "../../src/dcl2.c"
( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) -> _fct_body = ( 
#line 648 "../../src/dcl2.c"
struct block * ) ( ( _auto__Xthis__ctor_block = 0 ) , ( ( ( _auto__Xthis__ctor_block = 0 
#line 648 "../../src/dcl2.c"
) , ( _auto__Xthis__ctor_block = ( struct block * ) _stmt__ctor ( ( ( struct stmt * ) 
#line 648 "../../src/dcl2.c"
( _auto__Xthis__ctor_block ) ) , 116 , curloc , ( ( struct stmt * ) 0 ) ) 
#line 648 "../../src/dcl2.c"
) ) , ( ( _auto__Xthis__ctor_block -> _stmt__O7.__C7_d = ( ( struct name * ) 0 ) 
#line 648 "../../src/dcl2.c"
) , _auto__Xthis__ctor_block ) ) ) ; 
} } 
#line 651 "../../src/dcl2.c"
_auto_this -> _type_defined |= 01 ; 

#line 653 "../../src/dcl2.c"
for ( _auto_p = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_p ;( _auto_p = 
#line 653 "../../src/dcl2.c"
_table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 653 "../../src/dcl2.c"
{ 
#line 653 "../../src/dcl2.c"
switch ( 
#line 653 "../../src/dcl2.c"
_auto_p -> _expr__O2.__C2_tp -> _node_base ) 
#line 656 "../../src/dcl2.c"
{ 
#line 656 "../../src/dcl2.c"
case 108 : { 
#line 658 "../../src/dcl2.c"
Pfct _auto_f ; 

#line 658 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 659 "../../src/dcl2.c"
if ( _auto_f -> _fct_body ) { 
#line 659 "../../src/dcl2.c"
_auto_f -> _fct_f_inline = 1 ; 

#line 661 "../../src/dcl2.c"
_auto_p -> _name_n_sto = 31 ; 

#line 662 "../../src/dcl2.c"
_fct_dcl ( ( struct fct * ) _auto_f , ( struct name * ) _auto_p ) ; 
} 
#line 664 "../../src/dcl2.c"
break ; 
} 
#line 666 "../../src/dcl2.c"
case 76 : { 
#line 667 "../../src/dcl2.c"
Pgen _auto_g ; 
Plist _auto_gl ; 

#line 667 "../../src/dcl2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 669 "../../src/dcl2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 669 "../../src/dcl2.c"
Pname _auto_n ; 
Pfct _auto_f ; 

#line 670 "../../src/dcl2.c"
_auto_n = _auto_gl -> _name_list_f ; 

#line 671 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 672 "../../src/dcl2.c"
if ( _auto_f -> _fct_body ) { 
#line 672 "../../src/dcl2.c"
_auto_f -> _fct_f_inline = 1 ; 

#line 674 "../../src/dcl2.c"
_auto_n -> _name_n_sto = 31 ; 

#line 675 "../../src/dcl2.c"
_fct_dcl ( ( struct fct * ) _auto_f , ( struct name * ) _auto_n ) ; 
} } } } } 
#line 682 "../../src/dcl2.c"
; 

#line 683 "../../src/dcl2.c"
for ( _auto_fl = _auto_this -> _classdef_friend_list ;_auto_fl ;( _auto_fl = _auto_fl -> _name_list_l ) ) { 
#line 683 "../../src/dcl2.c"
Pname _auto_p ; 

#line 684 "../../src/dcl2.c"
_auto_p = _auto_fl -> _name_list_f ; 

#line 685 "../../src/dcl2.c"
switch ( _auto_p -> _expr__O2.__C2_tp -> _node_base ) { 
#line 685 "../../src/dcl2.c"
case 108 : { 
#line 687 "../../src/dcl2.c"
Pfct _auto_f ; 

#line 687 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 688 "../../src/dcl2.c"
if ( _auto_f -> _fct_body && ( ( _auto_f -> _type_defined & 3) == 0 ) ) { 
#line 688 "../../src/dcl2.c"

#line 689 "../../src/dcl2.c"

#line 690 "../../src/dcl2.c"
_auto_f -> _fct_f_inline = 1 ; 

#line 691 "../../src/dcl2.c"
_auto_p -> _name_n_sto = 31 ; 

#line 692 "../../src/dcl2.c"
_fct_dcl ( ( struct fct * ) _auto_f , ( struct name * ) _auto_p ) ; 
} 
#line 694 "../../src/dcl2.c"
break ; 
} 
#line 696 "../../src/dcl2.c"
case 76 : { 
#line 697 "../../src/dcl2.c"
Pgen _auto_g ; 
Plist _auto_gl ; 

#line 697 "../../src/dcl2.c"
_auto_g = ( ( ( struct gen * ) ( _auto_p -> _expr__O2.__C2_tp ) ) ) ; 

#line 699 "../../src/dcl2.c"
for ( _auto_gl = _auto_g -> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) { 
#line 699 "../../src/dcl2.c"
Pname _auto_n ; 
Pfct _auto_f ; 

#line 700 "../../src/dcl2.c"
_auto_n = _auto_gl -> _name_list_f ; 

#line 701 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) ; 

#line 702 "../../src/dcl2.c"
if ( _auto_f -> _fct_body && ( ( _auto_f -> _type_defined & 3) == 0 ) ) { 
#line 702 "../../src/dcl2.c"

#line 703 "../../src/dcl2.c"

#line 704 "../../src/dcl2.c"
_auto_f -> _fct_f_inline = 1 ; 

#line 705 "../../src/dcl2.c"
_auto_n -> _name_n_sto = 31 ; 

#line 706 "../../src/dcl2.c"
_fct_dcl ( ( struct fct * ) _auto_f , ( struct name * ) _auto_n ) ; 
} } } } } 
#line 713 "../../src/dcl2.c"
byte_offset = _auto_byte_old ; 

#line 714 "../../src/dcl2.c"
bit_offset = _auto_bit_old ; 

#line 715 "../../src/dcl2.c"
max_align = _auto_max_old ; 

#line 717 "../../src/dcl2.c"
{ 
#line 706 "../../src/cfront.h"
cc -- ; 
} } } ; 

#line 720 "../../src/dcl2.c"
int _enumdef_dcl ( _auto_this , _auto__A10 , _auto_tbl ) register struct enumdef * _auto_this ; 
struct name * _auto__A10 ; 
struct table * _auto_tbl ; 

#line 721 "../../src/dcl2.c"
{ 
#line 721 "../../src/dcl2.c"
int _auto_nmem ; 
Pname _auto_p ; 
Pname _auto_ns ; 
Pname _auto_nl ; 
int _auto_enum_old ; 

#line 723 "../../src/dcl2.c"
_auto_nmem = _name_no_of_names ( ( struct name * ) _auto_this -> _enumdef_mem ) ; 

#line 725 "../../src/dcl2.c"
_auto_ns = 0 ; 

#line 727 "../../src/dcl2.c"
_auto_enum_old = enum_count ; 

#line 728 "../../src/dcl2.c"
_auto_this -> _enumdef_no_of_enumerators = _auto_nmem ; 

#line 730 "../../src/dcl2.c"
enum_count = 0 ; 

#line 732 "../../src/dcl2.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 732 "../../src/dcl2.c"
"0->enumdef.dcl(%d)", _auto_tbl ) ; 

#line 734 "../../src/dcl2.c"
for ( ( ( _auto_p = _auto_this -> _enumdef_mem ) , ( _auto_this -> _enumdef_mem = 0 ) ) 
#line 734 "../../src/dcl2.c"
;_auto_p ;( _auto_p = _auto_p -> _name_n_list ) ) 
#line 734 "../../src/dcl2.c"
{ 
#line 734 "../../src/dcl2.c"
Pname _auto_nn ; 

#line 736 "../../src/dcl2.c"
if ( _auto_p -> _expr__O4.__C4_n_initializer ) { 
#line 736 "../../src/dcl2.c"
Pexpr _auto_i ; 

#line 737 "../../src/dcl2.c"
_auto_i = _expr_typ ( ( struct expr * ) _auto_p -> _expr__O4.__C4_n_initializer , _auto_tbl ) ; 

#line 738 "../../src/dcl2.c"
Neval = 0 ; 

#line 739 "../../src/dcl2.c"
enum_count = _expr_eval ( ( struct expr * ) _auto_i ) ; 

#line 740 "../../src/dcl2.c"
if ( Neval ) errorFPC__E ( ( char * ) "%s", Neval ) ; 

#line 741 "../../src/dcl2.c"
if ( _auto_i && ( _auto_i -> _node_permanent == 0 ) ) _expr_del ( ( struct expr * ) 
#line 741 "../../src/dcl2.c"
_auto_i ) ; 

#line 742 "../../src/dcl2.c"
_auto_p -> _expr__O4.__C4_n_initializer = 0 ; 
} 
#line 744 "../../src/dcl2.c"
_auto_p -> _name_n_evaluated = 1 ; 

#line 745 "../../src/dcl2.c"
_auto_p -> _name_n_val = ( enum_count ++ ) ; 

#line 746 "../../src/dcl2.c"
_auto_nn = _table_insert ( ( struct table * ) _auto_tbl , ( struct name * ) _auto_p , ( int 
#line 746 "../../src/dcl2.c"
) 0 ) ; 

#line 747 "../../src/dcl2.c"
if ( Nold ) { 
#line 747 "../../src/dcl2.c"
if ( _auto_nn -> _name_n_stclass == 13 ) errorFI_PC__E ( ( _auto_p -> _name_n_val != _auto_nn -> 
#line 747 "../../src/dcl2.c"
_name_n_val ) ? 0: 119, ( char * ) "enumerator%n declared twice", _auto_nn ) ; 
else 
#line 751 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "incompatibleDs of%n", _auto_nn ) ; 
} else 
#line 753 "../../src/dcl2.c"
{ 
#line 753 "../../src/dcl2.c"
_auto_nn -> _name_n_stclass = 13 ; 

#line 755 "../../src/dcl2.c"
if ( _auto_ns ) _auto_nl -> _name_n_list = _auto_nn ; 
else 
#line 758 "../../src/dcl2.c"
_auto_ns = _auto_nn ; 

#line 759 "../../src/dcl2.c"
_auto_nl = _auto_nn ; 
} 
#line 761 "../../src/dcl2.c"
_name__dtor ( ( struct name * ) _auto_p , 1) ; 
} 
#line 764 "../../src/dcl2.c"
_auto_this -> _enumdef_mem = _auto_ns ; 

#line 766 "../../src/dcl2.c"
enum_count = _auto_enum_old ; 

#line 767 "../../src/dcl2.c"
_auto_this -> _type_defined |= 01 ; 
} ; 

#line 770 "../../src/dcl2.c"
Pstmt curr_loop ; 

#line 771 "../../src/dcl2.c"
Pstmt curr_switch ; 

#line 772 "../../src/dcl2.c"
Pblock curr_block ; 

#line 774 "../../src/dcl2.c"
int _stmt_reached ( _auto_this ) register struct stmt * _auto_this ; 

#line 775 "../../src/dcl2.c"
{ 
#line 775 "../../src/dcl2.c"
register Pstmt _auto_ss ; 

#line 776 "../../src/dcl2.c"
_auto_ss = _auto_this -> _stmt_s_list ; 

#line 778 "../../src/dcl2.c"
if ( _auto_ss == 0 ) { 
#line 778 "../../src/dcl2.c"
return ; 
} 
#line 780 "../../src/dcl2.c"
switch ( _auto_ss -> _node_base ) { 
#line 780 "../../src/dcl2.c"
case 115 : case 4 : case 8 : break ; 
#line 780 "../../src/dcl2.c"

#line 785 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 'w' , ( char * ) "statement not reached") ; 

#line 788 "../../src/dcl2.c"
for ( ;_auto_ss ;( _auto_ss = _auto_ss -> _stmt_s_list ) ) { 
#line 788 "../../src/dcl2.c"
switch ( _auto_ss -> _node_base ) { 
#line 789 "../../src/dcl2.c"
case 
#line 789 "../../src/dcl2.c"
115 : 
#line 791 "../../src/dcl2.c"
case 4 : case 8 : _auto_this -> _stmt_s_list = _auto_ss ; 

#line 794 "../../src/dcl2.c"
{ 
#line 794 "../../src/dcl2.c"
return ; 
} 
#line 795 "../../src/dcl2.c"
case 20 : case 10 : case 39 : case 33 : case 16 : case 116 : _auto_this -> 
#line 795 "../../src/dcl2.c"
_stmt_s_list = _auto_ss ; 

#line 802 "../../src/dcl2.c"
{ 
#line 802 "../../src/dcl2.c"
return ; 
} } } 
#line 805 "../../src/dcl2.c"
_auto_this -> _stmt_s_list = 0 ; 
} } ; 

#line 809 "../../src/dcl2.c"
bit arg_err_suppress ; 

#line 811 "../../src/dcl2.c"
extern Pexpr check_cond ( _auto_e , _auto_b , _auto_tbl ) struct expr * _auto_e ; 
int _auto_b ; 
struct table * _auto_tbl ; 

#line 812 "../../src/dcl2.c"
{ 
#line 812 "../../src/dcl2.c"
Pexpr _auto__result ; 
Pname _auto_cn ; 

#line 815 "../../src/dcl2.c"
if ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_e -> _expr__O2.__C2_tp ) ) { 
#line 815 "../../src/dcl2.c"
Pclass _auto_cl ; 
int _auto_i ; 
Pname _auto_found ; 
Pname _auto_on ; 

#line 816 "../../src/dcl2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 817 "../../src/dcl2.c"
_auto_i = 0 ; 

#line 818 "../../src/dcl2.c"
_auto_found = 0 ; 

#line 819 "../../src/dcl2.c"
for ( _auto_on = _auto_cl -> _classdef_conv ;_auto_on ;( _auto_on = _auto_on -> _name_n_list ) ) { 
#line 819 "../../src/dcl2.c"
Pfct _auto_f ; 
Ptype _auto_t ; 

#line 820 "../../src/dcl2.c"
_auto_f = ( ( ( struct fct * ) ( _auto_on -> _expr__O2.__C2_tp ) ) ) ; 

#line 821 "../../src/dcl2.c"
_auto_t = _auto_f -> _fct_returns ; 

#line 822 "../../src/dcl2.c"
xx : switch ( _auto_t -> _node_base ) { 
#line 823 "../../src/dcl2.c"
case 97 : _auto_t = ( ( ( struct basetype * 
#line 823 "../../src/dcl2.c"
) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 826 "../../src/dcl2.c"
goto xx ; 

#line 827 "../../src/dcl2.c"
case 5 : case 29 : case 21 : case 22 : case 121 : case 15 : case 11 : 
#line 827 "../../src/dcl2.c"

#line 834 "../../src/dcl2.c"
case 125 : _auto_i ++ ; 

#line 836 "../../src/dcl2.c"
_auto_found = _auto_on ; 
} } 
#line 839 "../../src/dcl2.c"
switch ( _auto_i ) { 
#line 839 "../../src/dcl2.c"
case 0 : errorFPC__E ( ( char * ) 
#line 839 "../../src/dcl2.c"
"%nO in%kE", _auto_cn , _auto_b ) ; 

#line 842 "../../src/dcl2.c"
{ 
#line 842 "../../src/dcl2.c"
{ _auto__result = _auto_e ; 

#line 842 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 843 "../../src/dcl2.c"
case 1 : { 
#line 844 "../../src/dcl2.c"
Pclass _auto_cl ; 
Pref _auto_r ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 846 "../../src/dcl2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 847 "../../src/dcl2.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 847 "../../src/dcl2.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 847 "../../src/dcl2.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , _auto_e , ( struct expr * ) 0 ) 
#line 847 "../../src/dcl2.c"
) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * ) _auto_found ) ) 
#line 847 "../../src/dcl2.c"
, _auto__Xthis__ctor_ref ) ) ) ; 

#line 848 "../../src/dcl2.c"
_auto_r -> _expr__O2.__C2_tp = _auto_found -> _expr__O2.__C2_tp ; 

#line 849 "../../src/dcl2.c"
{ 
#line 849 "../../src/dcl2.c"
Pexpr _auto_c ; 

#line 849 "../../src/dcl2.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 849 "../../src/dcl2.c"
struct expr * ) _auto_r , ( struct expr * ) 0 ) ; 

#line 850 "../../src/dcl2.c"
_auto_c -> _expr__O5.__C5_fct_name = _auto_found ; 

#line 852 "../../src/dcl2.c"
{ 
#line 852 "../../src/dcl2.c"
{ _auto__result = _expr_typ ( ( struct expr * ) _auto_c , _auto_tbl ) ; 

#line 852 "../../src/dcl2.c"
return _auto__result ; 
} } } } 
#line 854 "../../src/dcl2.c"
default : errorFPC__E ( ( char * ) "%d possible conversions for%nO in%kE", _auto_i , _auto_cn , 
#line 854 "../../src/dcl2.c"
_auto_b ) ; 

#line 856 "../../src/dcl2.c"
{ 
#line 856 "../../src/dcl2.c"
{ _auto__result = _auto_e ; 

#line 856 "../../src/dcl2.c"
return _auto__result ; 
} } } } 
#line 860 "../../src/dcl2.c"
( _type_kind ( ( ( struct type * ) _auto_e -> _expr__O2.__C2_tp ) , 
#line 860 "../../src/dcl2.c"
_auto_b , ( int ) 'P' ) ) ; 

#line 861 "../../src/dcl2.c"
{ 
#line 861 "../../src/dcl2.c"
{ _auto__result = _auto_e ; 

#line 861 "../../src/dcl2.c"
return _auto__result ; 
} } } ; 

#line 864 "../../src/dcl2.c"
int _stmt_dcl ( _auto_this ) register struct stmt * _auto_this ; 

#line 868 "../../src/dcl2.c"
{ 
#line 868 "../../src/dcl2.c"
Pstmt _auto_ss ; 
Pname _auto_n ; 
Pname _auto_nn ; 
Pstmt _auto_ostmt ; 

#line 872 "../../src/dcl2.c"
_auto_ostmt = Cstmt ; 

#line 874 "../../src/dcl2.c"
for ( _auto_ss = ( struct stmt * ) _auto_this ;_auto_ss ;( _auto_ss = _auto_ss -> _stmt_s_list ) ) { 
#line 874 "../../src/dcl2.c"
Pstmt _auto_old_loop ; 
#line 874 "../../src/dcl2.c"
Pstmt _auto_old_switch ; 
Ptable _auto_tbl ; 

#line 876 "../../src/dcl2.c"
Cstmt = _auto_ss ; 

#line 877 "../../src/dcl2.c"
_auto_tbl = curr_block -> _stmt_memtbl ; 

#line 879 "../../src/dcl2.c"
switch ( _auto_ss -> _node_base ) { 
#line 879 "../../src/dcl2.c"
case 3 : if ( ( curr_loop == 0 ) && 
#line 879 "../../src/dcl2.c"
( curr_switch == 0 ) ) 
#line 882 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "%k not in loop or switch", 3 ) ; 

#line 883 "../../src/dcl2.c"
_stmt_reached ( ( struct stmt * ) _auto_ss ) ; 

#line 884 "../../src/dcl2.c"
break ; 

#line 886 "../../src/dcl2.c"
case 7 : if ( curr_loop == 0 ) errorFPC__E ( ( char * ) "%k not in loop", 7 ) 
#line 886 "../../src/dcl2.c"
; 

#line 888 "../../src/dcl2.c"
_stmt_reached ( ( struct stmt * ) _auto_ss ) ; 

#line 889 "../../src/dcl2.c"
break ; 

#line 891 "../../src/dcl2.c"
case 8 : if ( curr_switch == 0 ) { 
#line 892 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "default not in switch") 
#line 892 "../../src/dcl2.c"
; 

#line 894 "../../src/dcl2.c"
break ; 
} 
#line 896 "../../src/dcl2.c"
if ( curr_switch -> _stmt__O7.__C7_has_default ) errorFPC__E ( ( char * ) "two defaults in switch") ; 

#line 897 "../../src/dcl2.c"
curr_switch -> _stmt__O7.__C7_has_default = _auto_ss ; 

#line 898 "../../src/dcl2.c"
_auto_ss -> _stmt_s -> _stmt_s_list = _auto_ss -> _stmt_s_list ; 

#line 899 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = 0 ; 

#line 900 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 901 "../../src/dcl2.c"
break ; 

#line 903 "../../src/dcl2.c"
case 72 : switch ( _auto_ss -> _stmt__O8.__C8_e -> _node_base ) { 
#line 904 "../../src/dcl2.c"
case 144 : _auto_ss -> _stmt__O8.__C8_e = 0 ; 
#line 904 "../../src/dcl2.c"

#line 907 "../../src/dcl2.c"
break ; 

#line 912 "../../src/dcl2.c"
case 62 : case 63 : case 54 : case 55 : case 44 : case 45 : case 50 : 
#line 912 "../../src/dcl2.c"

#line 919 "../../src/dcl2.c"
case 51 : case 112 : case 52 : case 65 : case 64 : case 111 : case 66 : 
#line 919 "../../src/dcl2.c"

#line 926 "../../src/dcl2.c"
case 67 : case 85 : if ( _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ) break ; 

#line 929 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) _auto_tbl ) 
#line 929 "../../src/dcl2.c"
; 

#line 930 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp -> _node_base != 38 ) errorFI_PC__E ( ( int ) 'w' , ( char 
#line 930 "../../src/dcl2.c"
* ) "result of%kE not used", _auto_ss -> _stmt__O8.__C8_e -> _node_base ) ; 

#line 931 "../../src/dcl2.c"
break ; 

#line 932 "../../src/dcl2.c"
default : _auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * 
#line 932 "../../src/dcl2.c"
) _auto_tbl ) ; 
} 
#line 936 "../../src/dcl2.c"
break ; 

#line 938 "../../src/dcl2.c"
case 28 : { 
#line 939 "../../src/dcl2.c"
Pname _auto_fn ; 
Ptype _auto_rt ; 
Pexpr _auto_v ; 

#line 939 "../../src/dcl2.c"
_auto_fn = cc -> _dcl_context_nof ; 

#line 940 "../../src/dcl2.c"
_auto_rt = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) -> _fct_returns ; 
#line 940 "../../src/dcl2.c"

#line 941 "../../src/dcl2.c"
_auto_v = _auto_ss -> _stmt__O8.__C8_e ; 

#line 942 "../../src/dcl2.c"
if ( _auto_v != dummy ) { 
#line 942 "../../src/dcl2.c"
if ( _auto_rt -> _node_base == 38 ) { 
#line 943 "../../src/dcl2.c"
errorFI_PC__E ( ( int 
#line 943 "../../src/dcl2.c"
) 'w' , ( char * ) "unX return value") ; 

#line 946 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = dummy ; 
} else 
#line 948 "../../src/dcl2.c"
{ 
#line 948 "../../src/dcl2.c"
_auto_v = _expr_typ ( ( struct expr * ) _auto_v , ( struct table * ) 
#line 948 "../../src/dcl2.c"
_auto_tbl ) ; 

#line 950 "../../src/dcl2.c"
lx : switch ( _auto_rt -> _node_base ) { 
#line 952 "../../src/dcl2.c"
case 97 : _auto_rt = ( ( ( struct basetype * 
#line 952 "../../src/dcl2.c"
) ( _auto_rt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 955 "../../src/dcl2.c"
goto lx ; 

#line 956 "../../src/dcl2.c"
case 158 : _auto_ss -> _stmt__O8.__C8_e = ref_init ( ( ( struct ptr * ) ( _auto_rt ) ) , 
#line 956 "../../src/dcl2.c"
( struct expr * ) _auto_v , ( struct table * ) _auto_tbl ) ; 

#line 958 "../../src/dcl2.c"
if ( ( _expr_lval ( ( struct expr * ) _auto_v , ( int ) 0 ) 
#line 958 "../../src/dcl2.c"
== 0 ) && ( _type_tconst ( ( struct type * ) _auto_v -> _expr__O2.__C2_tp ) == 0 
#line 958 "../../src/dcl2.c"
) ) 
#line 960 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "reference to non-lvalue returned") ; 
else 
#line 961 "../../src/dcl2.c"
if ( ( _auto_v -> _node_base == 85 ) && ( ( ( ( struct name * 
#line 961 "../../src/dcl2.c"
) ( _auto_v ) ) ) -> _name_n_scope == 108 ) ) 
#line 963 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 963 "../../src/dcl2.c"
( char * ) "reference to local variable returned") ; 

#line 966 "../../src/dcl2.c"
break ; 

#line 967 "../../src/dcl2.c"
case 119 : { 
#line 968 "../../src/dcl2.c"
Pname _auto_rv ; 

#line 968 "../../src/dcl2.c"
_auto_rv = _table_look ( ( struct table * ) _auto_tbl , ( char * ) "_result", ( int 
#line 968 "../../src/dcl2.c"
) 0 ) ; 

#line 969 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = class_init ( ( struct expr * ) _auto_rv , ( struct type * ) _auto_rt , ( 
#line 969 "../../src/dcl2.c"
struct expr * ) _auto_v , ( struct table * ) _auto_tbl ) ; 

#line 971 "../../src/dcl2.c"
break ; 
} 
#line 973 "../../src/dcl2.c"
case 141 : break ; 

#line 975 "../../src/dcl2.c"
case 21 : case 5 : case 22 : case 29 : if ( ( ( ( ( 
#line 975 "../../src/dcl2.c"
struct basetype * ) ( _auto_rt ) ) ) -> _basetype_b_unsigned && ( _auto_v -> _node_base == 107 ) ) 
#line 975 "../../src/dcl2.c"
&& ( _auto_v -> _expr__O4.__C4_e2 -> _node_base == 82 ) ) 
#line 982 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char 
#line 982 "../../src/dcl2.c"
* ) "negative retured fromF returning unsigned") ; 

#line 983 "../../src/dcl2.c"
default : { 
#line 984 "../../src/dcl2.c"
Pname _auto_cn ; 
int _auto_i ; 

#line 986 "../../src/dcl2.c"
if ( ( ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_v -> _expr__O2.__C2_tp ) ) && 
#line 986 "../../src/dcl2.c"
( _auto_i = can_coerce ( ( struct type * ) _auto_rt , ( struct type * ) _auto_v -> _expr__O2.__C2_tp ) 
#line 986 "../../src/dcl2.c"
) ) && Ncoerce ) 
#line 988 "../../src/dcl2.c"
{ 
#line 988 "../../src/dcl2.c"
if ( 1 < _auto_i ) errorFPC__E ( ( char * ) 
#line 988 "../../src/dcl2.c"
"%d possible conversions for return value", _auto_i ) ; 

#line 990 "../../src/dcl2.c"
{ 
#line 990 "../../src/dcl2.c"
Pclass _auto_cl ; 
Pref _auto_r ; 
Pexpr _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 990 "../../src/dcl2.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 991 "../../src/dcl2.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 991 "../../src/dcl2.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 991 "../../src/dcl2.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_v ) , 
#line 991 "../../src/dcl2.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 991 "../../src/dcl2.c"
( struct name * ) Ncoerce ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 992 "../../src/dcl2.c"
_auto_c = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 992 "../../src/dcl2.c"
struct expr * ) _auto_r , ( struct expr * ) 0 ) ; 

#line 993 "../../src/dcl2.c"
_auto_c -> _expr__O5.__C5_fct_name = Ncoerce ; 

#line 994 "../../src/dcl2.c"
_auto_c -> _expr__O2.__C2_tp = _auto_rt ; 

#line 995 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _auto_c ; 

#line 996 "../../src/dcl2.c"
break ; 
} } } 
#line 999 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _auto_v ; 

#line 1000 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_rt , ( struct type * ) _auto_v -> _expr__O2.__C2_tp , 
#line 1000 "../../src/dcl2.c"
70 ) ) 
#line 1001 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "bad return valueT for%n:%t (%tX)", _auto_fn , _auto_v -> _expr__O2.__C2_tp , _auto_rt ) ; 
} } } else 
#line 1005 "../../src/dcl2.c"
{ 
#line 1005 "../../src/dcl2.c"
if ( _auto_rt -> _node_base != 38 ) errorFI_PC__E ( ( int ) 
#line 1005 "../../src/dcl2.c"
'w' , ( char * ) "return valueX") ; 
} 
#line 1008 "../../src/dcl2.c"
_stmt_reached ( ( struct stmt * ) _auto_ss ) ; 

#line 1009 "../../src/dcl2.c"
break ; 
} 
#line 1012 "../../src/dcl2.c"
case 10 : inline_restr |= 8 ; 

#line 1013 "../../src/dcl2.c"
_auto_old_loop = curr_loop ; 

#line 1014 "../../src/dcl2.c"
curr_loop = _auto_ss ; 

#line 1015 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s -> _node_base == 118 ) errorFI_PC__E ( ( int ) 's' , ( char * 
#line 1015 "../../src/dcl2.c"
) "D as onlyS in do-loop") ; 

#line 1016 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1018 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) _auto_tbl ) 
#line 1018 "../../src/dcl2.c"
; 

#line 1019 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = check_cond ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , 10 , ( struct table * ) 
#line 1019 "../../src/dcl2.c"
_auto_tbl ) ; 

#line 1020 "../../src/dcl2.c"
curr_loop = _auto_old_loop ; 

#line 1021 "../../src/dcl2.c"
break ; 

#line 1023 "../../src/dcl2.c"
case 39 : inline_restr |= 8 ; 

#line 1025 "../../src/dcl2.c"
_auto_old_loop = curr_loop ; 

#line 1026 "../../src/dcl2.c"
curr_loop = _auto_ss ; 

#line 1027 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) _auto_tbl ) 
#line 1027 "../../src/dcl2.c"
; 

#line 1029 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = check_cond ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , 39 , ( struct table * ) 
#line 1029 "../../src/dcl2.c"
_auto_tbl ) ; 

#line 1030 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s -> _node_base == 118 ) errorFI_PC__E ( ( int ) 's' , ( char * 
#line 1030 "../../src/dcl2.c"
) "D as onlyS in while-loop") ; 

#line 1031 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1032 "../../src/dcl2.c"
curr_loop = _auto_old_loop ; 

#line 1033 "../../src/dcl2.c"
break ; 

#line 1035 "../../src/dcl2.c"
case 33 : { 
#line 1036 "../../src/dcl2.c"
int _auto_ne ; 

#line 1036 "../../src/dcl2.c"
_auto_ne = 0 ; 

#line 1037 "../../src/dcl2.c"
inline_restr |= 4 ; 

#line 1038 "../../src/dcl2.c"
_auto_old_switch = curr_switch ; 

#line 1039 "../../src/dcl2.c"
curr_switch = _auto_ss ; 

#line 1040 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) _auto_tbl ) 
#line 1040 "../../src/dcl2.c"
; 

#line 1042 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = check_cond ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , 33 , ( struct table * ) 
#line 1042 "../../src/dcl2.c"
_auto_tbl ) ; 

#line 1043 "../../src/dcl2.c"
{ 
#line 1043 "../../src/dcl2.c"
Ptype _auto_tt ; 

#line 1043 "../../src/dcl2.c"
_auto_tt = _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ; 

#line 1044 "../../src/dcl2.c"
sii : switch ( _auto_tt -> _node_base ) { 
#line 1045 "../../src/dcl2.c"
case 97 : _auto_tt = ( ( ( struct basetype * 
#line 1045 "../../src/dcl2.c"
) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1047 "../../src/dcl2.c"
goto sii ; 

#line 1048 "../../src/dcl2.c"
case 121 : _auto_ne = ( ( ( struct enumdef * ) ( ( ( ( struct 
#line 1048 "../../src/dcl2.c"
basetype * ) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) -> _enumdef_no_of_enumerators ; 

#line 1050 "../../src/dcl2.c"
case 138 : case 141 : case 5 : case 29 : case 21 : case 22 : case 114 : 
#line 1050 "../../src/dcl2.c"

#line 1057 "../../src/dcl2.c"
break ; 

#line 1058 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 's' , ( char * ) "%t switchE", _auto_ss -> _stmt__O8.__C8_e -> 
#line 1058 "../../src/dcl2.c"
_expr__O2.__C2_tp ) ; 
} } 
#line 1062 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1063 "../../src/dcl2.c"
if ( _auto_ne ) { 
#line 1063 "../../src/dcl2.c"
int _auto_i ; 
Pstmt _auto_cs ; 

#line 1066 "../../src/dcl2.c"
_auto_i = 0 ; 

#line 1068 "../../src/dcl2.c"
for ( _auto_cs = _auto_ss -> _stmt__O9.__C9_case_list ;_auto_cs ;( _auto_cs = _auto_cs -> _stmt__O9.__C9_case_list ) ) _auto_i ++ ; 

#line 1069 "../../src/dcl2.c"
if ( _auto_i && ( _auto_i != _auto_ne ) ) { 
#line 1069 "../../src/dcl2.c"
if ( _auto_ne < _auto_i ) { 
#line 1070 "../../src/dcl2.c"
ee : 
#line 1070 "../../src/dcl2.c"

#line 1071 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "switch (%t) with %d cases (%d enumerators)", _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp , _auto_i , 
#line 1071 "../../src/dcl2.c"
_auto_ne ) ; 
} else 
#line 1073 "../../src/dcl2.c"
{ 
#line 1073 "../../src/dcl2.c"
switch ( _auto_ne - _auto_i ) { 
#line 1074 "../../src/dcl2.c"
case 1 : if ( 3 < _auto_ne ) 
#line 1074 "../../src/dcl2.c"

#line 1075 "../../src/dcl2.c"
goto ee ; 

#line 1076 "../../src/dcl2.c"
case 2 : if ( 7 < _auto_ne ) goto ee ; 

#line 1077 "../../src/dcl2.c"
case 3 : if ( 23 < _auto_ne ) goto ee ; 

#line 1078 "../../src/dcl2.c"
case 4 : if ( 60 < _auto_ne ) goto ee ; 

#line 1079 "../../src/dcl2.c"
case 5 : if ( 99 < _auto_ne ) goto ee ; 
} } } } 
#line 1084 "../../src/dcl2.c"
curr_switch = _auto_old_switch ; 

#line 1085 "../../src/dcl2.c"
break ; 
} 
#line 1087 "../../src/dcl2.c"
case 4 : if ( curr_switch == 0 ) { 
#line 1088 "../../src/dcl2.c"
errorFPC__E ( ( char * ) 
#line 1088 "../../src/dcl2.c"
"case not in switch") ; 

#line 1090 "../../src/dcl2.c"
break ; 
} 
#line 1092 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) 
#line 1092 "../../src/dcl2.c"
_auto_tbl ) ; 

#line 1093 "../../src/dcl2.c"
( _type_kind ( ( ( struct type * ) _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ) , 4 , ( int 
#line 1093 "../../src/dcl2.c"
) 'P' ) ) ; 

#line 1094 "../../src/dcl2.c"
{ 
#line 1094 "../../src/dcl2.c"
Ptype _auto_tt ; 

#line 1094 "../../src/dcl2.c"
_auto_tt = _auto_ss -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp ; 

#line 1095 "../../src/dcl2.c"
iii : switch ( _auto_tt -> _node_base ) { 
#line 1096 "../../src/dcl2.c"
case 97 : _auto_tt = ( ( ( struct basetype * 
#line 1096 "../../src/dcl2.c"
) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1098 "../../src/dcl2.c"
goto iii ; 

#line 1099 "../../src/dcl2.c"
case 138 : case 141 : case 5 : case 29 : case 21 : case 22 : break ; 
#line 1099 "../../src/dcl2.c"

#line 1106 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 's' , ( char * ) "%t caseE", _auto_ss -> _stmt__O8.__C8_e -> 
#line 1106 "../../src/dcl2.c"
_expr__O2.__C2_tp ) ; 
} } 
#line 1110 "../../src/dcl2.c"
{ 
#line 1110 "../../src/dcl2.c"
Neval = 0 ; 

#line 1112 "../../src/dcl2.c"
{ 
#line 1112 "../../src/dcl2.c"
int _auto_i ; 

#line 1112 "../../src/dcl2.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e ) ; 

#line 1113 "../../src/dcl2.c"
if ( Neval == 0 ) { 
#line 1113 "../../src/dcl2.c"
Pstmt _auto_cs ; 

#line 1115 "../../src/dcl2.c"
for ( _auto_cs = curr_switch -> _stmt__O9.__C9_case_list ;_auto_cs ;( _auto_cs = _auto_cs -> _stmt__O9.__C9_case_list ) ) { 
#line 1115 "../../src/dcl2.c"
if ( _auto_cs -> _stmt__O7.__C7_case_value == 
#line 1115 "../../src/dcl2.c"
_auto_i ) 
#line 1116 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "case %d used twice in switch", _auto_i ) ; 
} 
#line 1118 "../../src/dcl2.c"
_auto_ss -> _stmt__O7.__C7_case_value = _auto_i ; 

#line 1119 "../../src/dcl2.c"
_auto_ss -> _stmt__O9.__C9_case_list = curr_switch -> _stmt__O9.__C9_case_list ; 

#line 1120 "../../src/dcl2.c"
curr_switch -> _stmt__O9.__C9_case_list = _auto_ss ; 
} else 
#line 1123 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "bad case label: %s", Neval ) ; 
} } 
#line 1125 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s -> _stmt_s_list ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 1125 "../../src/dcl2.c"
* ) "case%k", _auto_ss -> _stmt_s -> _stmt_s_list -> _node_base ) ; 

#line 1126 "../../src/dcl2.c"
_auto_ss -> _stmt_s -> _stmt_s_list = _auto_ss -> _stmt_s_list ; 

#line 1127 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = 0 ; 

#line 1128 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1129 "../../src/dcl2.c"
break ; 

#line 1131 "../../src/dcl2.c"
case 19 : inline_restr |= 2 ; 

#line 1133 "../../src/dcl2.c"
_stmt_reached ( ( struct stmt * ) _auto_ss ) ; 

#line 1134 "../../src/dcl2.c"
case 115 : _auto_n = _auto_ss -> _stmt__O7.__C7_d ; 

#line 1139 "../../src/dcl2.c"
_auto_nn = _table_insert ( ( struct table * ) cc -> _dcl_context_ftbl , ( struct name * ) _auto_n , 115 ) 
#line 1139 "../../src/dcl2.c"
; 

#line 1145 "../../src/dcl2.c"
if ( _auto_ss -> _node_base == 115 ) { 
#line 1145 "../../src/dcl2.c"
_auto_nn -> _name__O6.__C6_n_realscope = curr_block -> _stmt_memtbl ; 

#line 1147 "../../src/dcl2.c"
inline_restr |= 1 ; 
} 
#line 1150 "../../src/dcl2.c"
if ( Nold ) { 
#line 1150 "../../src/dcl2.c"
if ( _auto_ss -> _node_base == 115 ) { 
#line 1151 "../../src/dcl2.c"
if ( _auto_nn -> 
#line 1151 "../../src/dcl2.c"
_expr__O4.__C4_n_initializer ) 
#line 1152 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "twoDs of label%n", _auto_n ) ; 

#line 1153 "../../src/dcl2.c"
_auto_nn -> _expr__O4.__C4_n_initializer = ( ( ( struct expr * ) ( 1 ) ) ) ; 
} 
#line 1155 "../../src/dcl2.c"
if ( _auto_n != _auto_nn ) _auto_ss -> _stmt__O7.__C7_d = _auto_nn ; 
} else 
#line 1157 "../../src/dcl2.c"
{ 
#line 1157 "../../src/dcl2.c"
if ( _auto_ss -> _node_base == 115 ) _auto_nn -> _expr__O4.__C4_n_initializer = ( ( ( struct 
#line 1157 "../../src/dcl2.c"
expr * ) ( 1 ) ) ) ; 

#line 1159 "../../src/dcl2.c"
_auto_nn -> _name_where = _auto_ss -> _stmt_where ; 
} 
#line 1161 "../../src/dcl2.c"
if ( _auto_ss -> _node_base == 19 ) { 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_nn ) -> 
#line 561 "../../src/cfront.h"
_name_n_used ++ ; 
} else 
#line 1163 "../../src/dcl2.c"
{ 
#line 1163 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s -> _stmt_s_list ) errorFI_PC__E ( ( int ) 'i' , ( 
#line 1163 "../../src/dcl2.c"
char * ) "label%k", _auto_ss -> _stmt_s -> _stmt_s_list -> _node_base ) ; 

#line 1165 "../../src/dcl2.c"
_auto_ss -> _stmt_s -> _stmt_s_list = _auto_ss -> _stmt_s_list ; 

#line 1166 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = 0 ; 

#line 1167 "../../src/dcl2.c"
_name_assign ( ( struct name * ) _auto_nn ) ; 
} 
#line 1169 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s ) _stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1170 "../../src/dcl2.c"
break ; 

#line 1172 "../../src/dcl2.c"
case 20 : { 
#line 1173 "../../src/dcl2.c"
Pexpr _auto_ee ; 

#line 1173 "../../src/dcl2.c"
_auto_ee = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * ) _auto_tbl ) ; 
#line 1173 "../../src/dcl2.c"

#line 1174 "../../src/dcl2.c"
if ( _auto_ee -> _node_base == 70 ) { 
#line 1174 "../../src/dcl2.c"
Neval = 0 ; 

#line 1176 "../../src/dcl2.c"
( ( _expr_eval ( ( struct expr * ) _auto_ee -> _expr__O4.__C4_e2 ) ) ) ; 

#line 1177 "../../src/dcl2.c"
if ( Neval == 0 ) errorFI_PC__E ( ( int ) 'w' , ( char * ) 
#line 1177 "../../src/dcl2.c"
"constant assignment in condition") ; 
} 
#line 1180 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = ( _auto_ee = check_cond ( ( struct expr * ) _auto_ee , 20 , ( struct 
#line 1180 "../../src/dcl2.c"
table * ) _auto_tbl ) ) ; 

#line 1182 "../../src/dcl2.c"
switch ( _auto_ee -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1182 "../../src/dcl2.c"
case 21 : case 138 : { 
#line 1185 "../../src/dcl2.c"
int _auto_i ; 

#line 1186 "../../src/dcl2.c"
Neval = 0 ; 

#line 1187 "../../src/dcl2.c"
_auto_i = _expr_eval ( ( struct expr * ) _auto_ee ) ; 

#line 1189 "../../src/dcl2.c"
if ( Neval == 0 ) { 
#line 1189 "../../src/dcl2.c"
Pstmt _auto_sl ; 

#line 1190 "../../src/dcl2.c"
_auto_sl = _auto_ss -> _stmt_s_list ; 

#line 1191 "../../src/dcl2.c"
if ( _auto_i ) { 
#line 1191 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O9.__C9_else_stmt && ( _auto_ss -> _stmt__O9.__C9_else_stmt -> _node_permanent == 0 ) 
#line 1191 "../../src/dcl2.c"
) 
#line 1192 "../../src/dcl2.c"
_stmt_del ( ( struct stmt * ) _auto_ss -> _stmt__O9.__C9_else_stmt ) ; 

#line 1193 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1194 "../../src/dcl2.c"
( * _auto_ss ) = ( * _auto_ss -> _stmt_s ) ; 
} else 
#line 1196 "../../src/dcl2.c"
{ 
#line 1196 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s && ( _auto_ss -> _stmt_s -> _node_permanent == 0 ) ) 
#line 1196 "../../src/dcl2.c"

#line 1197 "../../src/dcl2.c"
_stmt_del ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1198 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O9.__C9_else_stmt ) { 
#line 1198 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt__O9.__C9_else_stmt ) ; 

#line 1200 "../../src/dcl2.c"
( * _auto_ss ) = ( * _auto_ss -> _stmt__O9.__C9_else_stmt ) ; 
} else 
#line 1202 "../../src/dcl2.c"
{ 
#line 1202 "../../src/dcl2.c"
_auto_ss -> _node_base = 72 ; 

#line 1204 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = dummy ; 

#line 1205 "../../src/dcl2.c"
_auto_ss -> _stmt_s = 0 ; 
} } 
#line 1208 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = _auto_sl ; 

#line 1209 "../../src/dcl2.c"
continue ; 
} } } 
#line 1213 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1214 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O9.__C9_else_stmt ) _stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt__O9.__C9_else_stmt ) ; 

#line 1215 "../../src/dcl2.c"
break ; 
} 
#line 1217 "../../src/dcl2.c"
case 16 : inline_restr |= 8 ; 

#line 1219 "../../src/dcl2.c"
_auto_old_loop = curr_loop ; 

#line 1220 "../../src/dcl2.c"
curr_loop = _auto_ss ; 

#line 1221 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O9.__C9_for_init ) { 
#line 1221 "../../src/dcl2.c"
Pstmt _auto_fi ; 

#line 1222 "../../src/dcl2.c"
_auto_fi = _auto_ss -> _stmt__O9.__C9_for_init ; 

#line 1223 "../../src/dcl2.c"
switch ( _auto_fi -> _node_base ) { 
#line 1223 "../../src/dcl2.c"
case 72 : if ( _auto_fi -> _stmt__O8.__C8_e == dummy ) { 
#line 1225 "../../src/dcl2.c"
_auto_ss -> 
#line 1225 "../../src/dcl2.c"
_stmt__O9.__C9_for_init = 0 ; 

#line 1227 "../../src/dcl2.c"
break ; 
} 
#line 1229 "../../src/dcl2.c"
default : _stmt_dcl ( ( struct stmt * ) _auto_fi ) ; 

#line 1231 "../../src/dcl2.c"
break ; 

#line 1232 "../../src/dcl2.c"
case 118 : _stmt_dcl ( ( struct stmt * ) _auto_fi ) ; 

#line 1235 "../../src/dcl2.c"
switch ( _auto_fi -> _node_base ) { 
#line 1235 "../../src/dcl2.c"
case 116 : { 
#line 1237 "../../src/dcl2.c"
Pstmt _auto_tmp ; 

#line 1242 "../../src/dcl2.c"
_auto_tmp = ( struct stmt * ) _stmt__ctor ( ( struct stmt * ) 0 , 72 , curloc , 
#line 1242 "../../src/dcl2.c"
( struct stmt * ) 0 ) ; 

#line 1243 "../../src/dcl2.c"
( * _auto_tmp ) = ( * _auto_ss ) ; 

#line 1244 "../../src/dcl2.c"
_auto_tmp -> _stmt__O9.__C9_for_init = 0 ; 

#line 1245 "../../src/dcl2.c"
( * _auto_ss ) = ( * _auto_fi ) ; 

#line 1246 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s ) _auto_ss -> _stmt_s -> _stmt_s_list = _auto_tmp ; 
else 
#line 1249 "../../src/dcl2.c"
_auto_ss -> _stmt_s = _auto_tmp ; 

#line 1250 "../../src/dcl2.c"
curr_block = ( ( ( struct block * ) ( _auto_ss ) ) ) ; 

#line 1251 "../../src/dcl2.c"
_auto_tbl = curr_block -> _stmt_memtbl ; 

#line 1252 "../../src/dcl2.c"
_auto_ss = _auto_tmp ; 

#line 1253 "../../src/dcl2.c"
break ; 
} } } } 
#line 1258 "../../src/dcl2.c"
if ( _auto_ss -> _stmt__O8.__C8_e == dummy ) _auto_ss -> _stmt__O8.__C8_e = 0 ; 
else 
#line 1260 "../../src/dcl2.c"
{ 
#line 1260 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , ( struct table * 
#line 1260 "../../src/dcl2.c"
) _auto_tbl ) ; 

#line 1262 "../../src/dcl2.c"
_auto_ss -> _stmt__O8.__C8_e = check_cond ( ( struct expr * ) _auto_ss -> _stmt__O8.__C8_e , 16 , ( struct table * ) 
#line 1262 "../../src/dcl2.c"
_auto_tbl ) ; 
} 
#line 1264 "../../src/dcl2.c"
if ( _auto_ss -> _stmt_s -> _node_base == 118 ) errorFI_PC__E ( ( int ) 's' , ( char 
#line 1264 "../../src/dcl2.c"
* ) "D as onlyS in for-loop") ; 

#line 1265 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_ss -> _stmt_s ) ; 

#line 1266 "../../src/dcl2.c"
_auto_ss -> _stmt__O7.__C7_e2 = ( ( _auto_ss -> _stmt__O7.__C7_e2 == dummy ) ? ( ( ( struct expr * ) 
#line 1266 "../../src/dcl2.c"
( 0 ) ) ) : _expr_typ ( ( struct expr * ) _auto_ss -> _stmt__O7.__C7_e2 , ( 
#line 1266 "../../src/dcl2.c"
struct table * ) _auto_tbl ) ) ; 

#line 1267 "../../src/dcl2.c"
curr_loop = _auto_old_loop ; 

#line 1268 "../../src/dcl2.c"
break ; 

#line 1270 "../../src/dcl2.c"
case 118 : { 
#line 1271 "../../src/dcl2.c"
int _auto_non_trivial ; 
int _auto_count ; 
Pname _auto_tail ; 

#line 1275 "../../src/dcl2.c"
_auto_non_trivial = 0 ; 

#line 1276 "../../src/dcl2.c"
_auto_count = 0 ; 

#line 1277 "../../src/dcl2.c"
_auto_tail = _auto_ss -> _stmt__O7.__C7_d ; 

#line 1278 "../../src/dcl2.c"
{ 
#line 1278 "../../src/dcl2.c"
Pname _auto_nn ; 

#line 1278 "../../src/dcl2.c"
_auto_nn = _auto_tail ; 

#line 1278 "../../src/dcl2.c"
for ( ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 1278 "../../src/dcl2.c"
_auto_count ++ ; 

#line 1283 "../../src/dcl2.c"
if ( _auto_nn -> _name_n_list ) _auto_tail = _auto_nn -> _name_n_list ; 

#line 1284 "../../src/dcl2.c"
{ 
#line 1284 "../../src/dcl2.c"
Pname _auto_n ; 

#line 1284 "../../src/dcl2.c"
_auto_n = _table_look ( ( struct table * ) _auto_tbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 1284 "../../src/dcl2.c"
; 

#line 1285 "../../src/dcl2.c"
if ( _auto_n && ( _auto_n -> _expr__O5.__C5_n_table == _auto_tbl ) ) _auto_non_trivial = 2 ; 

#line 1286 "../../src/dcl2.c"
if ( _auto_non_trivial == 2 ) continue ; 

#line 1287 "../../src/dcl2.c"
if ( ( _auto_nn -> _name_n_sto == 31 ) || _type_is_ref ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp ) 
#line 1287 "../../src/dcl2.c"
) 
#line 1287 "../../src/dcl2.c"
{ 
#line 1287 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 

#line 1289 "../../src/dcl2.c"
continue ; 
} 
#line 1291 "../../src/dcl2.c"
{ 
#line 1291 "../../src/dcl2.c"
Pexpr _auto_in ; 

#line 1291 "../../src/dcl2.c"
_auto_in = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 1292 "../../src/dcl2.c"
if ( _auto_in ) switch ( _auto_in -> _node_base ) { 
#line 1293 "../../src/dcl2.c"
case 124 : case 81 : _auto_non_trivial = 2 ; 
#line 1293 "../../src/dcl2.c"

#line 1297 "../../src/dcl2.c"
continue ; 

#line 1298 "../../src/dcl2.c"
default : _auto_non_trivial = 1 ; 
} 
#line 1301 "../../src/dcl2.c"
{ 
#line 1301 "../../src/dcl2.c"
Pname _auto_cln ; 

#line 1301 "../../src/dcl2.c"
_auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp ) ; 

#line 1302 "../../src/dcl2.c"
if ( _auto_cln == 0 ) _auto_cln = cl_obj_vec ; 

#line 1303 "../../src/dcl2.c"
if ( _auto_cln == 0 ) continue ; 

#line 1304 "../../src/dcl2.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) ( 
#line 1304 "../../src/dcl2.c"
( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , ( 
#line 1304 "../../src/dcl2.c"
char * ) "_dtor", ( int ) 0 ) ) ) 
#line 1304 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 

#line 1305 "../../src/dcl2.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) ( 
#line 1305 "../../src/dcl2.c"
( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , ( 
#line 1305 "../../src/dcl2.c"
char * ) "_ctor", ( int ) 0 ) ) ) 
#line 1305 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 
} } } } 
#line 1308 "../../src/dcl2.c"
while ( _auto_ss -> _stmt_s_list && ( _auto_ss -> _stmt_s_list -> _node_base == 118 ) ) 
#line 1308 "../../src/dcl2.c"

#line 1308 "../../src/dcl2.c"
{ 
#line 1308 "../../src/dcl2.c"
Pstmt _auto_sx ; 

#line 1309 "../../src/dcl2.c"
_auto_sx = _auto_ss -> _stmt_s_list ; 

#line 1310 "../../src/dcl2.c"
_auto_tail = ( _auto_tail -> _name_n_list = _auto_sx -> _stmt__O7.__C7_d ) ; 

#line 1311 "../../src/dcl2.c"
for ( _auto_nn = _auto_sx -> _stmt__O7.__C7_d ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 1311 "../../src/dcl2.c"
_auto_count ++ ; 

#line 1315 "../../src/dcl2.c"
if ( _auto_nn -> _name_n_list ) _auto_tail = _auto_nn -> _name_n_list ; 

#line 1316 "../../src/dcl2.c"
{ 
#line 1316 "../../src/dcl2.c"
Pname _auto_n ; 

#line 1316 "../../src/dcl2.c"
_auto_n = _table_look ( ( struct table * ) _auto_tbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 1316 "../../src/dcl2.c"
; 

#line 1317 "../../src/dcl2.c"
if ( _auto_n && ( _auto_n -> _expr__O5.__C5_n_table == _auto_tbl ) ) _auto_non_trivial = 2 ; 

#line 1318 "../../src/dcl2.c"
if ( _auto_non_trivial == 2 ) continue ; 

#line 1319 "../../src/dcl2.c"
if ( ( _auto_nn -> _name_n_sto == 31 ) || _type_is_ref ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp ) 
#line 1319 "../../src/dcl2.c"
) 
#line 1319 "../../src/dcl2.c"
{ 
#line 1319 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 

#line 1321 "../../src/dcl2.c"
continue ; 
} 
#line 1323 "../../src/dcl2.c"
{ 
#line 1323 "../../src/dcl2.c"
Pexpr _auto_in ; 

#line 1323 "../../src/dcl2.c"
_auto_in = _auto_nn -> _expr__O4.__C4_n_initializer ; 

#line 1324 "../../src/dcl2.c"
if ( _auto_in ) switch ( _auto_in -> _node_base ) { 
#line 1325 "../../src/dcl2.c"
case 124 : case 81 : _auto_non_trivial = 2 ; 
#line 1325 "../../src/dcl2.c"

#line 1329 "../../src/dcl2.c"
continue ; 
} 
#line 1331 "../../src/dcl2.c"
_auto_non_trivial = 1 ; 

#line 1332 "../../src/dcl2.c"
{ 
#line 1332 "../../src/dcl2.c"
Pname _auto_cln ; 

#line 1332 "../../src/dcl2.c"
_auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_nn -> _expr__O2.__C2_tp ) ; 

#line 1333 "../../src/dcl2.c"
if ( _auto_cln == 0 ) _auto_cln = cl_obj_vec ; 

#line 1334 "../../src/dcl2.c"
if ( _auto_cln == 0 ) continue ; 

#line 1335 "../../src/dcl2.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) ( 
#line 1335 "../../src/dcl2.c"
( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , ( 
#line 1335 "../../src/dcl2.c"
char * ) "_ctor", ( int ) 0 ) ) ) 
#line 1335 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 

#line 1336 "../../src/dcl2.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * ) ( 
#line 1336 "../../src/dcl2.c"
( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , ( 
#line 1336 "../../src/dcl2.c"
char * ) "_dtor", ( int ) 0 ) ) ) 
#line 1336 "../../src/dcl2.c"
_auto_non_trivial = 2 ; 
} } } } 
#line 1338 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = _auto_sx -> _stmt_s_list ; 
} 
#line 1341 "../../src/dcl2.c"
{ 
#line 1341 "../../src/dcl2.c"
Pstmt _auto_next_st ; 

#line 1341 "../../src/dcl2.c"
_auto_next_st = _auto_ss -> _stmt_s_list ; 

#line 1343 "../../src/dcl2.c"
if ( ( _auto_non_trivial == 2 ) || ( ( _auto_non_trivial == 1 ) && ( ( curr_block -> 
#line 1343 "../../src/dcl2.c"
_stmt__O8.__C8_own_tbl == 0 ) || ( inline_restr & 3 ) ) ) ) 
#line 1348 "../../src/dcl2.c"
{ 
#line 1348 "../../src/dcl2.c"
_auto_ss -> _node_base = 116 ; 
#line 1348 "../../src/dcl2.c"

#line 1359 "../../src/dcl2.c"
for ( _auto_nn = _auto_ss -> _stmt__O7.__C7_d ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 1359 "../../src/dcl2.c"
Pname _auto_n ; 

#line 1361 "../../src/dcl2.c"
if ( ( curr_block -> _stmt__O8.__C8_own_tbl && ( _auto_n = _table_look ( ( struct table * ) curr_block -> _stmt_memtbl , 
#line 1361 "../../src/dcl2.c"
_auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) ) ) && ( _auto_n -> _expr__O5.__C5_n_table -> _table_real_block == 
#line 1361 "../../src/dcl2.c"
curr_block -> _stmt_memtbl -> _table_real_block ) ) 
#line 1364 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "twoDs of%n", _auto_n ) ; 
} 
#line 1370 "../../src/dcl2.c"
_auto_ss -> _stmt_s = _auto_next_st ; 

#line 1371 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = 0 ; 

#line 1376 "../../src/dcl2.c"
_auto_ss -> _stmt_memtbl = ( struct table * ) _table__ctor ( ( struct table * ) 0 , _auto_count + 
#line 1376 "../../src/dcl2.c"
4 , ( struct table * ) _auto_tbl , ( struct name * ) 0 ) ; 

#line 1377 "../../src/dcl2.c"
_auto_ss -> _stmt_memtbl -> _table_real_block = curr_block -> _stmt_memtbl -> _table_real_block ; 

#line 1379 "../../src/dcl2.c"
_block_dcl ( ( struct block * ) ( ( ( struct block * ) ( _auto_ss ) ) 
#line 1379 "../../src/dcl2.c"
) , ( struct table * ) _auto_ss -> _stmt_memtbl ) ; 
} else 
#line 1381 "../../src/dcl2.c"
{ 
#line 1381 "../../src/dcl2.c"
Pstmt _auto_sss ; 

#line 1387 "../../src/dcl2.c"
_auto_sss = _auto_ss ; 

#line 1388 "../../src/dcl2.c"
for ( _auto_nn = _auto_ss -> _stmt__O7.__C7_d ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 1388 "../../src/dcl2.c"
Pname _auto_n ; 

#line 1389 "../../src/dcl2.c"
_auto_n = _name_dcl ( ( struct name * ) _auto_nn , ( struct table * ) _auto_tbl , 108 ) ; 
#line 1389 "../../src/dcl2.c"

#line 1391 "../../src/dcl2.c"
if ( _auto_n == 0 ) continue ; 

#line 1392 "../../src/dcl2.c"
{ 
#line 1392 "../../src/dcl2.c"
Pexpr _auto_in ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1392 "../../src/dcl2.c"
_auto_in = _auto_n -> _expr__O4.__C4_n_initializer ; 

#line 1393 "../../src/dcl2.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 

#line 1394 "../../src/dcl2.c"
if ( _auto_ss ) { 
#line 1394 "../../src/dcl2.c"
_auto_sss -> _node_base = 72 ; 

#line 1396 "../../src/dcl2.c"
_auto_ss = 0 ; 
} else 
#line 1399 "../../src/dcl2.c"
_auto_sss = ( _auto_sss -> _stmt_s_list = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 
#line 1399 "../../src/dcl2.c"
) , ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * 
#line 1399 "../../src/dcl2.c"
) _stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_sss -> _stmt_where , 
#line 1399 "../../src/dcl2.c"
( ( struct stmt * ) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> 
#line 1399 "../../src/dcl2.c"
_stmt__O8.__C8_e = ( ( struct expr * ) 0 ) ) , _auto__Xthis__ctor_estmt ) ) ) ) 
#line 1399 "../../src/dcl2.c"
; 

#line 1400 "../../src/dcl2.c"
if ( _auto_in ) { 
#line 1400 "../../src/dcl2.c"
switch ( _auto_in -> _node_base ) { 
#line 1401 "../../src/dcl2.c"
case 146 : { 
#line 1403 "../../src/dcl2.c"
Pname _auto_fn ; 

#line 1404 "../../src/dcl2.c"
_auto_fn = _auto_in -> _expr__O5.__C5_fct_name ; 

#line 1405 "../../src/dcl2.c"
if ( _auto_fn && ( _auto_fn -> _name_n_oper == 161 ) ) break ; 
} 
#line 1407 "../../src/dcl2.c"
default : _auto_in = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 1407 "../../src/dcl2.c"
, 70 , ( struct expr * ) _auto_n , ( struct expr * ) _auto_in ) ; 
} 
#line 1410 "../../src/dcl2.c"
_auto_sss -> _stmt__O8.__C8_e = _expr_typ ( ( struct expr * ) _auto_in , ( struct table * ) _auto_tbl ) 
#line 1410 "../../src/dcl2.c"
; 
} else 
#line 1413 "../../src/dcl2.c"
_auto_sss -> _stmt__O8.__C8_e = dummy ; 
} } 
#line 1415 "../../src/dcl2.c"
_auto_ss = _auto_sss ; 

#line 1416 "../../src/dcl2.c"
_auto_ss -> _stmt_s_list = _auto_next_st ; 
} 
#line 1418 "../../src/dcl2.c"
break ; 
} } } 
#line 1421 "../../src/dcl2.c"
case 116 : _block_dcl ( ( struct block * ) ( ( ( struct 
#line 1421 "../../src/dcl2.c"
block * ) ( _auto_ss ) ) ) , ( struct table * ) _auto_tbl ) ; 

#line 1423 "../../src/dcl2.c"
break ; 

#line 1425 "../../src/dcl2.c"
case 1 : break ; 

#line 1429 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "badS(%d %d)", _auto_ss , _auto_ss -> 
#line 1429 "../../src/dcl2.c"
_node_base ) ; 
} } 
#line 1434 "../../src/dcl2.c"
Cstmt = _auto_ostmt ; 
} ; 

#line 1437 "../../src/dcl2.c"
int _block_dcl ( _auto_this , _auto_tbl ) register struct block * _auto_this ; 
struct table * _auto_tbl ; 

#line 1443 "../../src/dcl2.c"
{ 
#line 1443 "../../src/dcl2.c"
int _auto_bit_old ; 
int _auto_byte_old ; 
int _auto_max_old ; 
Pblock _auto_block_old ; 

#line 1444 "../../src/dcl2.c"
_auto_bit_old = bit_offset ; 

#line 1445 "../../src/dcl2.c"
_auto_byte_old = byte_offset ; 

#line 1446 "../../src/dcl2.c"
_auto_max_old = max_align ; 

#line 1447 "../../src/dcl2.c"
_auto_block_old = curr_block ; 

#line 1449 "../../src/dcl2.c"
if ( _auto_this -> _node_base != 116 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1449 "../../src/dcl2.c"
"block.dcl(%d)", _auto_this -> _node_base ) ; 

#line 1451 "../../src/dcl2.c"
curr_block = ( struct block * ) _auto_this ; 

#line 1453 "../../src/dcl2.c"
if ( _auto_this -> _stmt__O7.__C7_d ) { 
#line 1453 "../../src/dcl2.c"
Pname _auto_n ; 
Pname _auto_nx ; 

#line 1455 "../../src/dcl2.c"
_auto_this -> _stmt__O8.__C8_own_tbl = 1 ; 

#line 1456 "../../src/dcl2.c"
if ( _auto_this -> _stmt_memtbl == 0 ) { 
#line 1456 "../../src/dcl2.c"
int _auto_nmem ; 

#line 1457 "../../src/dcl2.c"
_auto_nmem = ( _name_no_of_names ( ( struct name * ) _auto_this -> _stmt__O7.__C7_d ) + 4 ) ; 

#line 1458 "../../src/dcl2.c"
_auto_this -> _stmt_memtbl = ( struct table * ) _table__ctor ( ( struct table * ) 0 , _auto_nmem , 
#line 1458 "../../src/dcl2.c"
_auto_tbl , ( struct name * ) 0 ) ; 

#line 1459 "../../src/dcl2.c"
_auto_this -> _stmt_memtbl -> _table_real_block = ( struct stmt * ) _auto_this ; 
} else 
#line 1465 "../../src/dcl2.c"
if ( _auto_this -> _stmt_memtbl != _auto_tbl ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 1465 "../../src/dcl2.c"
* ) "block.dcl(?)") ; 

#line 1467 "../../src/dcl2.c"
; 

#line 1468 "../../src/dcl2.c"
for ( _auto_n = _auto_this -> _stmt__O7.__C7_d ;_auto_n ;( _auto_n = _auto_nx ) ) { 
#line 1468 "../../src/dcl2.c"
_auto_nx = _auto_n -> _name_n_list ; 

#line 1470 "../../src/dcl2.c"
_name_dcl ( ( struct name * ) _auto_n , ( struct table * ) _auto_this -> _stmt_memtbl , 108 ) ; 
#line 1470 "../../src/dcl2.c"

#line 1471 "../../src/dcl2.c"
switch ( _auto_n -> _expr__O2.__C2_tp -> _node_base ) { 
#line 1471 "../../src/dcl2.c"
case 6 : case 167 : case 13 : break ; 
#line 1471 "../../src/dcl2.c"

#line 1476 "../../src/dcl2.c"
default : _name__dtor ( ( struct name * ) _auto_n , 1) ; 
} } } else 
#line 1482 "../../src/dcl2.c"
_auto_this -> _stmt_memtbl = _auto_tbl ; 

#line 1484 "../../src/dcl2.c"
if ( _auto_this -> _stmt_s ) { 
#line 1484 "../../src/dcl2.c"
Pname _auto_odcl ; 
Pname _auto_m ; 
int _auto_i ; 

#line 1485 "../../src/dcl2.c"
_auto_odcl = Cdcl ; 

#line 1489 "../../src/dcl2.c"
_stmt_dcl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1491 "../../src/dcl2.c"
if ( _auto_this -> _stmt__O8.__C8_own_tbl ) for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , 
#line 1491 "../../src/dcl2.c"
_auto_i = 1 ) ;_auto_m ;( _auto_m = _table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , ++ _auto_i ) ) 
#line 1491 "../../src/dcl2.c"
) 
#line 1492 "../../src/dcl2.c"
{ 
#line 1492 "../../src/dcl2.c"
Ptype _auto_t ; 

#line 1493 "../../src/dcl2.c"
_auto_t = _auto_m -> _expr__O2.__C2_tp ; 

#line 1495 "../../src/dcl2.c"
if ( _auto_t == 0 ) { 
#line 1495 "../../src/dcl2.c"
if ( _auto_m -> _name_n_assigned_to == 0 ) errorFI_PC__E ( ( 
#line 1495 "../../src/dcl2.c"
int ) 'w' , ( char * ) "undefined label %s", _auto_m -> _expr__O3.__C3_string ) ; 

#line 1498 "../../src/dcl2.c"
if ( _auto_m -> _name_n_used == 0 ) errorFI_PC__E ( ( int ) 'w' , ( char * 
#line 1498 "../../src/dcl2.c"
) "label %s not used", _auto_m -> _expr__O3.__C3_string ) ; 

#line 1500 "../../src/dcl2.c"
continue ; 
} 
#line 1502 "../../src/dcl2.c"
ll : switch ( _auto_t -> _node_base ) { 
#line 1503 "../../src/dcl2.c"
case 97 : _auto_t = ( ( ( struct 
#line 1503 "../../src/dcl2.c"
basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1504 "../../src/dcl2.c"
goto ll ; 

#line 1505 "../../src/dcl2.c"
case 6 : case 13 : case 108 : case 110 : continue ; 
} 
#line 1511 "../../src/dcl2.c"
if ( _auto_m -> _name_n_addr_taken == 0 ) { 
#line 1511 "../../src/dcl2.c"
if ( _auto_m -> _name_n_used ) { 
#line 1512 "../../src/dcl2.c"
if 
#line 1512 "../../src/dcl2.c"
( _auto_m -> _name_n_assigned_to ) 
#line 1513 "../../src/dcl2.c"
{ 
#line 1513 "../../src/dcl2.c"
} else { 
#line 1515 "../../src/dcl2.c"
switch ( _auto_m -> _name_n_scope ) { 
#line 1516 "../../src/dcl2.c"
case 108 : 
#line 1516 "../../src/dcl2.c"

#line 1518 "../../src/dcl2.c"
Cdcl = _auto_m ; 

#line 1519 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%n used but not set", _auto_m ) ; 
} } } else 
#line 1523 "../../src/dcl2.c"
{ 
#line 1523 "../../src/dcl2.c"
if ( _auto_m -> _name_n_assigned_to ) { 
#line 1524 "../../src/dcl2.c"
} else { 
#line 1526 "../../src/dcl2.c"
switch 
#line 1526 "../../src/dcl2.c"
( _auto_m -> _name_n_scope ) 
#line 1527 "../../src/dcl2.c"
{ 
#line 1527 "../../src/dcl2.c"
case 136 : if ( ( ( _auto_m -> _expr__O3.__C3_string [ 0 ] 
#line 1527 "../../src/dcl2.c"
) == '_' ) && ( ( _auto_m -> _expr__O3.__C3_string [ 1 ] ) == 'A' ) ) 
#line 1529 "../../src/dcl2.c"
break 
#line 1529 "../../src/dcl2.c"
; 

#line 1530 "../../src/dcl2.c"
case 108 : Cdcl = _auto_m ; 

#line 1532 "../../src/dcl2.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "%n not used", _auto_m ) ; 
} } } } } 
#line 1538 "../../src/dcl2.c"
Cdcl = _auto_odcl ; 
} 
#line 1541 "../../src/dcl2.c"
_auto_this -> _stmt__O7.__C7_d = 0 ; 

#line 1543 "../../src/dcl2.c"
if ( bit_offset ) byte_offset += SZ_WORD ; 

#line 1544 "../../src/dcl2.c"
if ( stack_size < byte_offset ) stack_size = byte_offset ; 

#line 1545 "../../src/dcl2.c"
bit_offset = _auto_bit_old ; 

#line 1546 "../../src/dcl2.c"
byte_offset = _auto_byte_old ; 

#line 1547 "../../src/dcl2.c"
curr_block = _auto_block_old ; 
} ; 

#line 1550 "../../src/dcl2.c"
int _name_no_of_names ( _auto_this ) register struct name * _auto_this ; 

#line 1551 "../../src/dcl2.c"
{ 
#line 1551 "../../src/dcl2.c"
int _auto__result ; 
register int _auto_i ; 
register Pname _auto_n ; 

#line 1552 "../../src/dcl2.c"
_auto_i = 0 ; 

#line 1554 "../../src/dcl2.c"
for ( _auto_n = ( struct name * ) _auto_this ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) _auto_i ++ ; 
#line 1554 "../../src/dcl2.c"

#line 1555 "../../src/dcl2.c"
{ 
#line 1555 "../../src/dcl2.c"
{ _auto__result = _auto_i ; 

#line 1555 "../../src/dcl2.c"
return _auto__result ; 
} } } ; 

#line 1558 "../../src/dcl2.c"
static Pexpr lvec [ 20] ; 

#line 1558 "../../src/dcl2.c"
static Pexpr * lll ; 

#line 1559 "../../src/dcl2.c"
static Pexpr list_back = 0 ; 

#line 1562 "../../src/dcl2.c"
extern int new_list ( _auto_lx ) struct expr * _auto_lx ; 

#line 1563 "../../src/dcl2.c"
{ 
#line 1563 "../../src/dcl2.c"
if ( _auto_lx -> _node_base != 124 ) errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1563 "../../src/dcl2.c"
) "IrLX") ; 

#line 1566 "../../src/dcl2.c"
lll = lvec ; 

#line 1567 "../../src/dcl2.c"
lll ++ ; 

#line 1568 "../../src/dcl2.c"
( * lll ) = _auto_lx -> _expr__O3.__C3_e1 ; 
} ; 

#line 1571 "../../src/dcl2.c"
extern Pexpr next_elem ( ) 
#line 1572 "../../src/dcl2.c"
{ 
#line 1572 "../../src/dcl2.c"
Pexpr _auto__result ; 
Pexpr _auto_e ; 
Pexpr _auto_lx ; 

#line 1576 "../../src/dcl2.c"
if ( lll == lvec ) { 
#line 1576 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 1576 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 1578 "../../src/dcl2.c"
_auto_lx = ( * lll ) ; 

#line 1580 "../../src/dcl2.c"
if ( list_back ) { 
#line 1580 "../../src/dcl2.c"
_auto_e = list_back ; 

#line 1582 "../../src/dcl2.c"
list_back = 0 ; 

#line 1583 "../../src/dcl2.c"
{ 
#line 1583 "../../src/dcl2.c"
{ _auto__result = _auto_e ; 

#line 1583 "../../src/dcl2.c"
return _auto__result ; 
} } } 
#line 1586 "../../src/dcl2.c"
if ( _auto_lx == 0 ) { 
#line 1586 "../../src/dcl2.c"
lll -- ; 

#line 1588 "../../src/dcl2.c"
{ 
#line 1588 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 1588 "../../src/dcl2.c"
return _auto__result ; 
} } } 
#line 1591 "../../src/dcl2.c"
switch ( _auto_lx -> _node_base ) { 
#line 1591 "../../src/dcl2.c"
case 140 : _auto_e = _auto_lx -> _expr__O3.__C3_e1 ; 

#line 1594 "../../src/dcl2.c"
( * lll ) = _auto_lx -> _expr__O4.__C4_e2 ; 

#line 1595 "../../src/dcl2.c"
switch ( _auto_e -> _node_base ) { 
#line 1595 "../../src/dcl2.c"
case 124 : lll ++ ; 

#line 1598 "../../src/dcl2.c"
( * lll ) = _auto_e -> _expr__O3.__C3_e1 ; 

#line 1599 "../../src/dcl2.c"
{ 
#line 1599 "../../src/dcl2.c"
{ _auto__result = ( ( ( struct expr * ) ( 1 ) ) ) ; 
#line 1599 "../../src/dcl2.c"

#line 1599 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 1600 "../../src/dcl2.c"
case 140 : errorFPC__E ( ( char * ) "nestedEL") ; 

#line 1602 "../../src/dcl2.c"
{ 
#line 1602 "../../src/dcl2.c"
{ _auto__result = 0 ; 

#line 1602 "../../src/dcl2.c"
return _auto__result ; 
} } 
#line 1603 "../../src/dcl2.c"
default : { 
#line 1604 "../../src/dcl2.c"
{ _auto__result = _auto_e ; 

#line 1604 "../../src/dcl2.c"
return _auto__result ; 
} } } 
#line 1606 "../../src/dcl2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1606 "../../src/dcl2.c"
"IrL") ; 
} } ; 

#line 1611 "../../src/dcl2.c"
extern int list_check ( _auto_nn , _auto_t , _auto_il ) struct name * _auto_nn ; 
struct type * _auto_t ; 
struct expr * _auto_il ; 

#line 1617 "../../src/dcl2.c"
{ 
#line 1617 "../../src/dcl2.c"
Pexpr _auto_e ; 
bit _auto_lst ; 
int _auto_i ; 
Pclass _auto_cl ; 

#line 1619 "../../src/dcl2.c"
_auto_lst = 0 ; 

#line 1623 "../../src/dcl2.c"
switch ( ( ( int ) ( _auto_il ) ) ) { 
#line 1623 "../../src/dcl2.c"
case 0 : 
#line 1623 "../../src/dcl2.c"

#line 1624 "../../src/dcl2.c"
break ; 

#line 1625 "../../src/dcl2.c"
case 1 : _auto_lst = 1 ; 

#line 1625 "../../src/dcl2.c"
break ; 

#line 1626 "../../src/dcl2.c"
default : list_back = _auto_il ; 

#line 1626 "../../src/dcl2.c"
; 
} 
#line 1629 "../../src/dcl2.c"
zzz : switch ( _auto_t -> _node_base ) { 
#line 1630 "../../src/dcl2.c"
case 97 : _auto_t = ( struct type * ) 
#line 1630 "../../src/dcl2.c"
( ( ( struct basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1633 "../../src/dcl2.c"
goto zzz ; 

#line 1635 "../../src/dcl2.c"
case 110 : { 
#line 1636 "../../src/dcl2.c"
Pvec _auto_v ; 
Ptype _auto_vt ; 

#line 1636 "../../src/dcl2.c"
_auto_v = ( ( ( struct vec * ) ( _auto_t ) ) ) ; 

#line 1637 "../../src/dcl2.c"
_auto_vt = _auto_v -> _vec_typ ; 

#line 1639 "../../src/dcl2.c"
if ( _auto_v -> _vec_size ) { 
#line 1639 "../../src/dcl2.c"
if ( _auto_v -> _vec_typ -> _node_base == 5 ) { 
#line 1640 "../../src/dcl2.c"
_auto_e = next_elem ( 
#line 1640 "../../src/dcl2.c"
) ; 

#line 1642 "../../src/dcl2.c"
if ( _auto_e -> _node_base == 81 ) { 
#line 1642 "../../src/dcl2.c"
int _auto_isz ; 

#line 1643 "../../src/dcl2.c"
_auto_isz = ( ( ( struct vec * ) ( _auto_e -> _expr__O2.__C2_tp ) ) ) -> _vec_size ; 
#line 1643 "../../src/dcl2.c"

#line 1644 "../../src/dcl2.c"
if ( _auto_v -> _vec_size < _auto_isz ) errorFPC__E ( ( char * ) "Ir too long (%d characters) for%n[%d]", _auto_isz , _auto_nn , _auto_v -> 
#line 1644 "../../src/dcl2.c"
_vec_size ) ; 

#line 1645 "../../src/dcl2.c"
break ; 
} else 
#line 1648 "../../src/dcl2.c"
list_back = _auto_e ; 

#line 1648 "../../src/dcl2.c"
; 
} 
#line 1650 "../../src/dcl2.c"
for ( _auto_i = 0 ;( _auto_i < _auto_v -> _vec_size ) ;( _auto_i ++ ) ) { 
#line 1650 "../../src/dcl2.c"

#line 1650 "../../src/dcl2.c"

#line 1651 "../../src/dcl2.c"
ee : _auto_e = next_elem ( ) ; 

#line 1653 "../../src/dcl2.c"
if ( _auto_e == 0 ) goto xsw ; 

#line 1654 "../../src/dcl2.c"
vtz : switch ( _auto_vt -> _node_base ) { 
#line 1656 "../../src/dcl2.c"
case 97 : _auto_vt = ( ( ( struct basetype * 
#line 1656 "../../src/dcl2.c"
) ( _auto_vt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1659 "../../src/dcl2.c"
goto vtz ; 

#line 1660 "../../src/dcl2.c"
case 110 : case 119 : list_check ( _auto_nn , ( struct type * ) _auto_vt , ( struct expr * 
#line 1660 "../../src/dcl2.c"
) _auto_e ) ; 

#line 1663 "../../src/dcl2.c"
break ; 

#line 1664 "../../src/dcl2.c"
default : if ( _auto_e == ( ( ( struct expr * ) ( 1 ) ) 
#line 1664 "../../src/dcl2.c"
) ) 
#line 1665 "../../src/dcl2.c"
{ 
#line 1665 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "unXIrL") ; 

#line 1667 "../../src/dcl2.c"
goto ee ; 
} 
#line 1669 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_vt , ( struct type * ) _auto_e -> 
#line 1669 "../../src/dcl2.c"
_expr__O2.__C2_tp , 70 ) ) 
#line 1670 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "badIrT for%n:%t (%tX)", _auto_nn , _auto_e -> _expr__O2.__C2_tp , _auto_vt ) ; 
#line 1670 "../../src/dcl2.c"
} } 
#line 1673 "../../src/dcl2.c"
if ( _auto_lst && ( _auto_e = next_elem ( ) ) ) errorFPC__E ( ( char 
#line 1673 "../../src/dcl2.c"
* ) "end ofIrLX after vector") ; 

#line 1674 "../../src/dcl2.c"
xsw : ; 
} else 
#line 1676 "../../src/dcl2.c"
{ 
#line 1676 "../../src/dcl2.c"
_auto_i = 0 ; 

#line 1678 "../../src/dcl2.c"
xx : while ( _auto_e = next_elem ( ) ) { 
#line 1679 "../../src/dcl2.c"
_auto_i ++ ; 

#line 1681 "../../src/dcl2.c"
vtzz : switch ( _auto_vt -> _node_base ) { 
#line 1683 "../../src/dcl2.c"
case 97 : _auto_vt = ( ( ( struct basetype * 
#line 1683 "../../src/dcl2.c"
) ( _auto_vt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1686 "../../src/dcl2.c"
goto vtzz ; 

#line 1687 "../../src/dcl2.c"
case 110 : case 119 : list_check ( _auto_nn , ( struct type * ) _auto_vt , ( struct expr * 
#line 1687 "../../src/dcl2.c"
) _auto_e ) ; 

#line 1690 "../../src/dcl2.c"
break ; 

#line 1691 "../../src/dcl2.c"
default : if ( _auto_e == ( ( ( struct expr * ) ( 1 ) ) 
#line 1691 "../../src/dcl2.c"
) ) 
#line 1692 "../../src/dcl2.c"
{ 
#line 1692 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "unXIrL") ; 

#line 1694 "../../src/dcl2.c"
goto xx ; 
} 
#line 1696 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_vt , ( struct type * ) _auto_e -> 
#line 1696 "../../src/dcl2.c"
_expr__O2.__C2_tp , 70 ) ) 
#line 1697 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "badIrT for%n:%t (%tX)", _auto_nn , _auto_e -> _expr__O2.__C2_tp , _auto_vt ) ; 
#line 1697 "../../src/dcl2.c"
} } 
#line 1700 "../../src/dcl2.c"
_auto_v -> _vec_size = _auto_i ; 
} 
#line 1702 "../../src/dcl2.c"
break ; 
} 
#line 1705 "../../src/dcl2.c"
case 6 : _auto_cl = ( ( ( struct classdef * ) ( _auto_t ) ) ) 
#line 1705 "../../src/dcl2.c"
; 

#line 1707 "../../src/dcl2.c"
goto ccc ; 

#line 1709 "../../src/dcl2.c"
case 119 : _auto_cl = ( ( ( struct classdef * ) ( ( ( ( struct 
#line 1709 "../../src/dcl2.c"
basetype * ) ( _auto_t ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ) ) ) ; 

#line 1711 "../../src/dcl2.c"
ccc : { 
#line 1712 "../../src/dcl2.c"
Ptable _auto_tbl ; 
Pname _auto_m ; 

#line 1712 "../../src/dcl2.c"
_auto_tbl = _auto_cl -> _classdef_memtbl ; 

#line 1715 "../../src/dcl2.c"
if ( _auto_cl -> _classdef_clbase ) list_check ( _auto_nn , ( struct type * ) _auto_cl -> _classdef_clbase -> _expr__O2.__C2_tp , ( 
#line 1715 "../../src/dcl2.c"
struct expr * ) 0 ) ; 

#line 1717 "../../src/dcl2.c"
for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_m ;( _auto_m = _table_get_mem ( 
#line 1717 "../../src/dcl2.c"
( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 1717 "../../src/dcl2.c"
{ 
#line 1717 "../../src/dcl2.c"
Ptype _auto_mt ; 

#line 1718 "../../src/dcl2.c"
_auto_mt = _auto_m -> _expr__O2.__C2_tp ; 

#line 1719 "../../src/dcl2.c"
switch ( _auto_mt -> _node_base ) { 
#line 1719 "../../src/dcl2.c"
case 108 : case 76 : case 6 : case 13 : continue 
#line 1719 "../../src/dcl2.c"
; 
} 
#line 1726 "../../src/dcl2.c"
if ( _auto_m -> _name_n_stclass == 31 ) continue ; 

#line 1728 "../../src/dcl2.c"
dd : _auto_e = next_elem ( ) ; 

#line 1730 "../../src/dcl2.c"
if ( _auto_e == 0 ) { 
#line 1730 "../../src/dcl2.c"
return ; 
} 
#line 1731 "../../src/dcl2.c"
mtz : switch ( _auto_mt -> _node_base ) { 
#line 1733 "../../src/dcl2.c"
case 97 : _auto_mt = ( ( ( struct 
#line 1733 "../../src/dcl2.c"
basetype * ) ( _auto_mt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1736 "../../src/dcl2.c"
goto mtz ; 

#line 1737 "../../src/dcl2.c"
case 6 : case 13 : break ; 

#line 1740 "../../src/dcl2.c"
case 110 : case 119 : list_check ( _auto_nn , ( struct type * ) _auto_m -> _expr__O2.__C2_tp , ( struct 
#line 1740 "../../src/dcl2.c"
expr * ) _auto_e ) ; 

#line 1743 "../../src/dcl2.c"
break ; 

#line 1744 "../../src/dcl2.c"
default : if ( _auto_e == ( ( ( struct expr * ) ( 1 ) ) 
#line 1744 "../../src/dcl2.c"
) ) 
#line 1745 "../../src/dcl2.c"
{ 
#line 1745 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "unXIrL") ; 

#line 1747 "../../src/dcl2.c"
goto dd ; 
} 
#line 1749 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_mt , ( struct type * ) _auto_e -> 
#line 1749 "../../src/dcl2.c"
_expr__O2.__C2_tp , 70 ) ) 
#line 1750 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "badIrT for%n:%t (%tX)", _auto_m , _auto_e -> _expr__O2.__C2_tp , _auto_m -> _expr__O2.__C2_tp ) 
#line 1750 "../../src/dcl2.c"
; 
} } 
#line 1753 "../../src/dcl2.c"
if ( _auto_lst && ( _auto_e = next_elem ( ) ) ) errorFPC__E ( ( char 
#line 1753 "../../src/dcl2.c"
* ) "end ofIrLX afterCO") ; 

#line 1754 "../../src/dcl2.c"
break ; 
} 
#line 1756 "../../src/dcl2.c"
default : _auto_e = next_elem ( ) ; 

#line 1759 "../../src/dcl2.c"
if ( _auto_e == 0 ) { 
#line 1759 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "noIr forO") ; 

#line 1761 "../../src/dcl2.c"
break ; 
} 
#line 1764 "../../src/dcl2.c"
if ( _auto_e == ( ( ( struct expr * ) ( 1 ) ) ) 
#line 1764 "../../src/dcl2.c"
) 
#line 1764 "../../src/dcl2.c"
{ 
#line 1764 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "unXIrL") ; 

#line 1766 "../../src/dcl2.c"
break ; 
} 
#line 1768 "../../src/dcl2.c"
if ( _type_check ( ( struct type * ) _auto_t , ( struct type * ) _auto_e -> 
#line 1768 "../../src/dcl2.c"
_expr__O2.__C2_tp , 70 ) ) 
#line 1768 "../../src/dcl2.c"
errorFPC__E ( ( char * ) "badIrT for%n:%t (%tX)", _auto_nn , _auto_e -> _expr__O2.__C2_tp , _auto_t ) ; 
#line 1768 "../../src/dcl2.c"

#line 1769 "../../src/dcl2.c"
if ( _auto_lst && ( _auto_e = next_elem ( ) ) ) errorFPC__E ( ( char * ) 
#line 1769 "../../src/dcl2.c"
"end ofIrLX afterO") ; 

#line 1770 "../../src/dcl2.c"
break ; 
} } ; 

/* the end */
