#line 1 "../../src/lex.c"

/* <<cfront 10/10/85>> */
/* < ../../src/lex.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/lex.c"
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

#line 77 "../../src/lex.c"
static char inbuf [ 49152] ; 

#line 78 "../../src/lex.c"
char * txtmax = ( char * ) ( & ( inbuf [ 49151] ) ) 
#line 78 "../../src/lex.c"
; 

#line 79 "../../src/lex.c"
char * txtstart = 0 ; 

#line 80 "../../src/lex.c"
char * txtfree = 0 ; 

#line 85 "../../src/lex.c"
static char * file_name [ 508] ; 

#line 88 "../../src/lex.c"
static short file_stack [ 127] ; 

#line 89 "../../src/lex.c"
int curr_file = 0 ; 

#line 92 "../../src/lex.c"
struct loc curloc ; 

#line 93 "../../src/lex.c"
struct _iobuf * out_file = ( struct _iobuf * ) ( & ( _iob [ 1 ] ) ) 
#line 93 "../../src/lex.c"
; 

#line 94 "../../src/lex.c"
struct _iobuf * in_file = ( struct _iobuf * ) ( & ( _iob [ 0 ] ) 
#line 94 "../../src/lex.c"
) ; 

#line 95 "../../src/lex.c"
Ptable ktbl ; 

#line 96 "../../src/lex.c"
int br_level = 0 ; 

#line 97 "../../src/lex.c"
int bl_level = 0 ; 

#line 111 "../../src/lex.c"
static short lxmask [ 129] ; 

#line 113 "../../src/lex.c"
int saved = 0 ; 

#line 114 "../../src/lex.c"
extern int lxtitle ( ) ; 

#line 117 "../../src/lex.c"
; 

#line 118 "../../src/lex.c"
; 

#line 119 "../../src/lex.c"
; 

#line 120 "../../src/lex.c"
; 

#line 130 "../../src/lex.c"
extern int ktbl_init ( ) 
#line 135 "../../src/lex.c"
{ 
#line 135 "../../src/lex.c"
ktbl = ( struct table * ) _table__ctor ( ( struct table * 
#line 135 "../../src/lex.c"
) 0 , 123 , ( struct table * ) 0 , ( struct name * ) 
#line 135 "../../src/lex.c"
0 ) ; 

#line 138 "../../src/lex.c"
new_key ( ( char * ) "asm", 1 , ( int ) 0 ) ; 

#line 139 "../../src/lex.c"
new_key ( ( char * ) "auto", 2 , 97 ) ; 

#line 140 "../../src/lex.c"
new_key ( ( char * ) "break", 143 , 3 ) ; 

#line 141 "../../src/lex.c"
new_key ( ( char * ) "case", 143 , 4 ) ; 

#line 142 "../../src/lex.c"
new_key ( ( char * ) "continue", 143 , 7 ) ; 

#line 143 "../../src/lex.c"
new_key ( ( char * ) "char", 5 , 97 ) ; 

#line 144 "../../src/lex.c"
new_key ( ( char * ) "do", 143 , 10 ) ; 

#line 145 "../../src/lex.c"
new_key ( ( char * ) "double", 11 , 97 ) ; 

#line 146 "../../src/lex.c"
new_key ( ( char * ) "default", 143 , 8 ) ; 

#line 147 "../../src/lex.c"
new_key ( ( char * ) "enum", 13 , ( int ) 0 ) ; 

#line 148 "../../src/lex.c"
new_key ( ( char * ) "else", 143 , 12 ) ; 

#line 149 "../../src/lex.c"
new_key ( ( char * ) "extern", 14 , 97 ) ; 

#line 150 "../../src/lex.c"
new_key ( ( char * ) "float", 15 , 97 ) ; 

#line 151 "../../src/lex.c"
new_key ( ( char * ) "for", 143 , 16 ) ; 

#line 153 "../../src/lex.c"
new_key ( ( char * ) "goto", 143 , 19 ) ; 

#line 154 "../../src/lex.c"
new_key ( ( char * ) "if", 143 , 20 ) ; 

#line 155 "../../src/lex.c"
new_key ( ( char * ) "int", 21 , 97 ) ; 

#line 156 "../../src/lex.c"
new_key ( ( char * ) "long", 22 , 97 ) ; 

#line 157 "../../src/lex.c"
new_key ( ( char * ) "return", 143 , 28 ) ; 

#line 158 "../../src/lex.c"
new_key ( ( char * ) "register", 27 , 97 ) ; 

#line 159 "../../src/lex.c"
new_key ( ( char * ) "static", 31 , 97 ) ; 

#line 160 "../../src/lex.c"
new_key ( ( char * ) "struct", 32 , 156 ) ; 

#line 161 "../../src/lex.c"
new_key ( ( char * ) "sizeof", 30 , ( int ) 0 ) ; 

#line 162 "../../src/lex.c"
new_key ( ( char * ) "short", 29 , 97 ) ; 

#line 163 "../../src/lex.c"
new_key ( ( char * ) "switch", 143 , 33 ) ; 

#line 164 "../../src/lex.c"
new_key ( ( char * ) "typedef", 35 , 97 ) ; 

#line 165 "../../src/lex.c"
new_key ( ( char * ) "unsigned", 37 , 97 ) ; 

#line 166 "../../src/lex.c"
new_key ( ( char * ) "union", 36 , 156 ) ; 

#line 167 "../../src/lex.c"
new_key ( ( char * ) "void", 38 , 97 ) ; 

#line 168 "../../src/lex.c"
new_key ( ( char * ) "while", 143 , 39 ) ; 

#line 170 "../../src/lex.c"
new_key ( ( char * ) "class", 6 , 156 ) ; 

#line 171 "../../src/lex.c"
new_key ( ( char * ) "delete", 143 , 9 ) ; 

#line 172 "../../src/lex.c"
new_key ( ( char * ) "friend", 18 , 97 ) ; 

#line 173 "../../src/lex.c"
new_key ( ( char * ) "operator", 24 , ( int ) 0 ) ; 

#line 174 "../../src/lex.c"
new_key ( ( char * ) "new", 23 , ( int ) 0 ) ; 

#line 175 "../../src/lex.c"
new_key ( ( char * ) "public", 25 , ( int ) 0 ) ; 

#line 176 "../../src/lex.c"
new_key ( ( char * ) "const", 26 , 97 ) ; 

#line 177 "../../src/lex.c"
new_key ( ( char * ) "this", 34 , ( int ) 0 ) ; 

#line 178 "../../src/lex.c"
new_key ( ( char * ) "inline", 75 , 97 ) ; 

#line 179 "../../src/lex.c"
new_key ( ( char * ) "virtual", 77 , 97 ) ; 

#line 180 "../../src/lex.c"
new_key ( ( char * ) "overload", 76 , 97 ) ; 

#line 182 "../../src/lex.c"
new_key ( ( char * ) "volatile", 170 , 170 ) ; 

#line 183 "../../src/lex.c"
new_key ( ( char * ) "signed", 171 , 171 ) ; 
} ; 

#line 186 "../../src/lex.c"
extern char * src_file_name ; 

#line 187 "../../src/lex.c"
extern char * line_format ; 

#line 188 "../../src/lex.c"
struct loc last_line ; 

#line 190 "../../src/lex.c"
int _loc_putline ( _auto_this ) register struct loc * _auto_this ; 

#line 191 "../../src/lex.c"
{ 
#line 191 "../../src/lex.c"
if ( ( _auto_this -> _loc_file == 0 ) && ( _auto_this -> _loc_line == 0 ) 
#line 191 "../../src/lex.c"
) 
#line 192 "../../src/lex.c"
{ 
#line 192 "../../src/lex.c"
return ; 
} 
#line 193 "../../src/lex.c"
if ( ( 0 <= _auto_this -> _loc_file ) && ( _auto_this -> _loc_file < 127 ) ) 
#line 193 "../../src/lex.c"

#line 193 "../../src/lex.c"
{ 
#line 193 "../../src/lex.c"
char * _auto_f ; 

#line 194 "../../src/lex.c"
_auto_f = ( file_name [ _auto_this -> _loc_file ] ) ; 

#line 195 "../../src/lex.c"
if ( _auto_f == 0 ) _auto_f = ( src_file_name ? src_file_name : "") ; 

#line 196 "../../src/lex.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) line_format , _auto_this -> _loc_line , _auto_f ) 
#line 196 "../../src/lex.c"
; 

#line 197 "../../src/lex.c"
last_line = ( * _auto_this ) ; 
} } ; 

#line 201 "../../src/lex.c"
int _loc_put ( _auto_this , _auto_p ) register struct loc * _auto_this ; 
struct _iobuf * _auto_p ; 

#line 202 "../../src/lex.c"
{ 
#line 202 "../../src/lex.c"
if ( ( 0 <= _auto_this -> _loc_file ) && ( _auto_this -> _loc_file < 127 ) ) 
#line 202 "../../src/lex.c"

#line 203 "../../src/lex.c"
{ 
#line 203 "../../src/lex.c"
char * _auto_f ; 

#line 204 "../../src/lex.c"
_auto_f = ( file_name [ _auto_this -> _loc_file ] ) ; 

#line 205 "../../src/lex.c"
if ( _auto_f == 0 ) _auto_f = ( src_file_name ? src_file_name : "") ; 

#line 206 "../../src/lex.c"
fprintf ( ( struct _iobuf * ) _auto_p , ( char * ) "\"%s\", line %d: ", _auto_f , _auto_this -> _loc_line ) 
#line 206 "../../src/lex.c"
; 
} } ; 

#line 210 "../../src/lex.c"
int lxenter ( _auto_s , _auto_m ) register char * _auto_s ; 
int _auto_m ; 

#line 212 "../../src/lex.c"
{ 
#line 212 "../../src/lex.c"
register int _auto_c ; 

#line 215 "../../src/lex.c"
while ( _auto_c = ( * ( _auto_s ++ ) ) ) ( lxmask [ _auto_c + 1 ] 
#line 215 "../../src/lex.c"
) |= _auto_m ; 
} ; 

#line 220 "../../src/lex.c"
int lxget ( _auto_c , _auto_m ) register int _auto_c ; 
register int _auto_m ; 

#line 226 "../../src/lex.c"
{ 
#line 226 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 226 "../../src/lex.c"
"input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) ) 
#line 226 "../../src/lex.c"
= _auto_c ) ) ) ; 

#line 228 "../../src/lex.c"
while ( ( ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) 
#line 228 "../../src/lex.c"
? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( 
#line 228 "../../src/lex.c"
struct _iobuf * ) in_file ) ) ) , ( ( lxmask [ _auto_c + 1 ] ) & 
#line 228 "../../src/lex.c"
_auto_m ) ) ) 
#line 228 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char 
#line 228 "../../src/lex.c"
* ) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ 
#line 228 "../../src/lex.c"
) ) = _auto_c ) ) ) ; 

#line 229 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 

#line 230 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 230 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 230 "../../src/lex.c"
'\0' ) ) ) ; 
} ; 

#line 233 "../../src/lex.c"
struct LXDOPE { /* sizeof = 8 */
short _LXDOPE_lxch ; 
short _LXDOPE_lxact ; 
TOK _LXDOPE_lxtok ; 
} ; 

#line 237 "../../src/lex.c"
struct LXDOPE lxdope [ 33] = { '$' , 0 , 0 , '_' , 1 , 0 , 
#line 237 "../../src/lex.c"
'0' , 2 , 0 , ' ' , 10 , 0 , '\n' , 11 , 0 , '"' , 4 , 
#line 237 "../../src/lex.c"
0 , '\'' , 5 , 0 , '`' , 6 , 0 , '(' , 14 , 40 , ')' , 
#line 237 "../../src/lex.c"
15 , 41 , '{' , 12 , 73 , '}' , 13 , 74 , '[' , 3 , 42 , ']' , 3 , 43 , 
#line 237 "../../src/lex.c"
'*' , 26 , 50 , '?' , 3 , 68 , ':' , 28 , 69 , '+' , 27 , 54 , '-' , 25 , 
#line 237 "../../src/lex.c"
55 , '/' , 7 , 51 , '%' , 23 , 53 , '&' , 22 , 52 , '|' , 21 , 65 , '^' , 
#line 237 "../../src/lex.c"
20 , 64 , '!' , 24 , 46 , '~' , 3 , 47 , ',' , 3 , 71 , ';' , 3 , 72 , 
#line 237 "../../src/lex.c"
'.' , 8 , 45 , '<' , 18 , 58 , '>' , 19 , 60 , '=' , 17 , 70 , - 1 , 
#line 237 "../../src/lex.c"
16 , 0 } ; 

#line 274 "../../src/lex.c"
static struct LXDOPE * lxcp [ 129] ; 

#line 276 "../../src/lex.c"
extern int lex_init ( ) ; 

#line 278 "../../src/lex.c"
extern int lex_init ( ) 
#line 279 "../../src/lex.c"
{ 
#line 279 "../../src/lex.c"
register struct LXDOPE * _auto_p ; 
register int _auto_i ; 
register char * _auto_cp ; 

#line 286 "../../src/lex.c"
for ( _auto_i = 0 ;( _auto_i <= 128 ) ;( _auto_i ++ ) ) ( lxmask [ _auto_i ] 
#line 286 "../../src/lex.c"
) = 0 ; 

#line 288 "../../src/lex.c"
lxenter ( ( char * ) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_", 01 ) ; 

#line 289 "../../src/lex.c"
lxenter ( ( char * ) "0123456789", 02 ) ; 

#line 290 "../../src/lex.c"
lxenter ( ( char * ) "0123456789abcdefABCDEF", 010 ) ; 

#line 292 "../../src/lex.c"
lxenter ( ( char * ) " \t\r\b\f\013", 020 ) ; 

#line 293 "../../src/lex.c"
( lxmask [ 47] ) |= 040 ; 

#line 299 "../../src/lex.c"
for ( _auto_i = 0 ;( _auto_i <= 128 ) ;( ++ _auto_i ) ) ( lxcp [ _auto_i ] 
#line 299 "../../src/lex.c"
) = ( struct LXDOPE * ) lxdope ; 

#line 303 "../../src/lex.c"
for ( _auto_p = ( struct LXDOPE * ) lxdope ;;( ++ _auto_p ) ) { 
#line 303 "../../src/lex.c"
( lxcp [ 
#line 303 "../../src/lex.c"
_auto_p -> _LXDOPE_lxch + 1 ] ) = _auto_p ; 

#line 305 "../../src/lex.c"
if ( _auto_p -> _LXDOPE_lxch < 0 ) break ; 
} 
#line 311 "../../src/lex.c"
_auto_cp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

#line 312 "../../src/lex.c"
while ( * _auto_cp ) ( lxcp [ ( * ( _auto_cp ++ ) ) + 1 ] 
#line 312 "../../src/lex.c"
) = ( struct LXDOPE * ) ( & ( lxdope [ 1 ] ) ) ; 
#line 312 "../../src/lex.c"

#line 313 "../../src/lex.c"
_auto_cp = "123456789"; 

#line 314 "../../src/lex.c"
while ( * _auto_cp ) ( lxcp [ ( * ( _auto_cp ++ ) ) + 1 ] 
#line 314 "../../src/lex.c"
) = ( struct LXDOPE * ) ( & ( lxdope [ 2 ] ) ) ; 
#line 314 "../../src/lex.c"

#line 315 "../../src/lex.c"
_auto_cp = "\t\b\r\f\013"; 

#line 316 "../../src/lex.c"
while ( * _auto_cp ) ( lxcp [ ( * ( _auto_cp ++ ) ) + 1 ] 
#line 316 "../../src/lex.c"
) = ( struct LXDOPE * ) ( & ( lxdope [ 3 ] ) ) ; 
#line 316 "../../src/lex.c"

#line 318 "../../src/lex.c"
( file_name [ 0 ] ) = src_file_name ; 

#line 319 "../../src/lex.c"
curloc . _loc_file = 0 ; 

#line 320 "../../src/lex.c"
curloc . _loc_line = 1 ; 

#line 322 "../../src/lex.c"
ktbl_init ( ) ; 

#line 324 "../../src/lex.c"
lex_clear ( ) ; 

#line 326 "../../src/lex.c"
saved = lxtitle ( ) ; 
} ; 

#line 329 "../../src/lex.c"
extern int lex_clear ( ) 
#line 330 "../../src/lex.c"
{ 
#line 330 "../../src/lex.c"
txtstart = ( txtfree = inbuf ) ; 
} ; 

#line 334 "../../src/lex.c"
int int_val ( _auto_hex ) int _auto_hex ; 

#line 335 "../../src/lex.c"
{ 
#line 335 "../../src/lex.c"
int _auto__result ; 

#line 336 "../../src/lex.c"
switch ( _auto_hex ) { 
#line 336 "../../src/lex.c"
case '0' : case '1' : case '2' : case '3' : case '4' : 
#line 336 "../../src/lex.c"

#line 338 "../../src/lex.c"
case '5' : case '6' : case '7' : case '8' : case '9' : { 
#line 339 "../../src/lex.c"
{ _auto__result = ( 
#line 339 "../../src/lex.c"
_auto_hex - '0' ) ; 

#line 339 "../../src/lex.c"
return _auto__result ; 
} } 
#line 340 "../../src/lex.c"
case 'a' : case 'b' : case 'c' : case 'd' : case 'e' : case 'f' : 
#line 340 "../../src/lex.c"

#line 341 "../../src/lex.c"
{ 
#line 341 "../../src/lex.c"
{ _auto__result = ( ( _auto_hex - 'a' ) + 10 ) ; 

#line 341 "../../src/lex.c"
return _auto__result ; 
} } 
#line 342 "../../src/lex.c"
case 'A' : case 'B' : case 'C' : case 'D' : case 'E' : case 'F' : 
#line 342 "../../src/lex.c"

#line 343 "../../src/lex.c"
{ 
#line 343 "../../src/lex.c"
{ _auto__result = ( ( _auto_hex - 'A' ) + 10 ) ; 

#line 343 "../../src/lex.c"
return _auto__result ; 
} } } } ; 

#line 347 "../../src/lex.c"
int hex_to_oct ( ) 
#line 352 "../../src/lex.c"
{ 
#line 352 "../../src/lex.c"
int _auto_i ; 
int _auto_c ; 

#line 353 "../../src/lex.c"
_auto_i = 0 ; 

#line 355 "../../src/lex.c"
_auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 355 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 355 "../../src/lex.c"
) ; 

#line 356 "../../src/lex.c"
if ( ( lxmask [ _auto_c + 1 ] ) & 010 ) { 
#line 356 "../../src/lex.c"
_auto_i = int_val ( _auto_c ) ; 
#line 356 "../../src/lex.c"

#line 358 "../../src/lex.c"
_auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 358 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 358 "../../src/lex.c"
) ; 

#line 359 "../../src/lex.c"
if ( ( lxmask [ _auto_c + 1 ] ) & 010 ) { 
#line 359 "../../src/lex.c"
_auto_i = ( ( _auto_i << 
#line 359 "../../src/lex.c"
4 ) + int_val ( _auto_c ) ) ; 

#line 361 "../../src/lex.c"
_auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 361 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 361 "../../src/lex.c"
) ; 

#line 362 "../../src/lex.c"
if ( ( lxmask [ _auto_c + 1 ] ) & 010 ) { 
#line 362 "../../src/lex.c"
_auto_i = ( ( _auto_i << 
#line 362 "../../src/lex.c"
4 ) + int_val ( _auto_c ) ) ; 
} else 
#line 366 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 
} else 
#line 369 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 
} else 
#line 371 "../../src/lex.c"
{ 
#line 371 "../../src/lex.c"
errorFPC__E ( ( char * ) "hexadecimal digitE after \\x") ; 

#line 373 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 
} 
#line 376 "../../src/lex.c"
if ( 0777 < _auto_i ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 376 "../../src/lex.c"
"hexadecimal constant too large") ; 

#line 378 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 378 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 378 "../../src/lex.c"
( '0' + ( _auto_i >> 6 ) ) ) ) ) ; 

#line 379 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 379 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 379 "../../src/lex.c"
( '0' + ( ( _auto_i & 070 ) >> 3 ) ) ) ) ) ; 

#line 380 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 380 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 380 "../../src/lex.c"
( '0' + ( _auto_i & 7 ) ) ) ) ) ; 
} ; 

#line 384 "../../src/lex.c"
char * chconst ( ) 
#line 388 "../../src/lex.c"
{ 
#line 388 "../../src/lex.c"
char * _auto__result ; 
register int _auto_c ; 
int _auto_nch ; 

#line 390 "../../src/lex.c"
_auto_nch = 0 ; 

#line 392 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 392 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 392 "../../src/lex.c"
'\'' ) ) ) ; 

#line 394 "../../src/lex.c"
for ( ;;) { 
#line 394 "../../src/lex.c"
if ( SZ_INT < ( _auto_nch ++ ) ) { 
#line 395 "../../src/lex.c"
errorFPC__E ( ( 
#line 395 "../../src/lex.c"
char * ) "char constant too long") ; 

#line 397 "../../src/lex.c"
goto ex ; 
} 
#line 400 "../../src/lex.c"
switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? 
#line 400 "../../src/lex.c"
( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct 
#line 400 "../../src/lex.c"
_iobuf * ) in_file ) ) ) 
#line 400 "../../src/lex.c"
{ 
#line 400 "../../src/lex.c"
case '\'' : goto ex ; 

#line 403 "../../src/lex.c"
case -1: errorFPC__E ( ( char * ) "eof in char constant") ; 

#line 405 "../../src/lex.c"
goto ex ; 

#line 406 "../../src/lex.c"
case '\n' : errorFPC__E ( ( char * ) "newline in char constant") ; 

#line 408 "../../src/lex.c"
goto ex ; 

#line 409 "../../src/lex.c"
case '\\' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 409 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 409 "../../src/lex.c"
) = _auto_c ) ) ) ; 

#line 411 "../../src/lex.c"
switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 411 "../../src/lex.c"
( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * 
#line 411 "../../src/lex.c"
) in_file ) ) ) 
#line 411 "../../src/lex.c"
{ 
#line 411 "../../src/lex.c"
case '\n' : ++ curloc . _loc_line ; 

#line 414 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 414 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 414 "../../src/lex.c"
) = _auto_c ) ) ) ; 

#line 416 "../../src/lex.c"
break ; 

#line 417 "../../src/lex.c"
case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case '6' : 
#line 417 "../../src/lex.c"

#line 418 "../../src/lex.c"
case '7' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 418 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 418 "../../src/lex.c"
) = _auto_c ) ) ) ; 

#line 420 "../../src/lex.c"
_auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 420 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 420 "../../src/lex.c"
) ; 

#line 421 "../../src/lex.c"
if ( ( ( lxmask [ _auto_c + 1 ] ) & 02 ) && ( _auto_c < '8' ) 
#line 421 "../../src/lex.c"
) 
#line 421 "../../src/lex.c"
{ 
#line 421 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 421 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 421 "../../src/lex.c"
) = _auto_c ) ) ) ; 

#line 423 "../../src/lex.c"
_auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 423 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 423 "../../src/lex.c"
) ; 

#line 424 "../../src/lex.c"
if ( ( ( lxmask [ _auto_c + 1 ] ) & 02 ) && ( _auto_c < '8' ) 
#line 424 "../../src/lex.c"
) 
#line 425 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 425 "../../src/lex.c"
"input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) ) 
#line 425 "../../src/lex.c"
= _auto_c ) ) ) ; 
else 
#line 427 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 
} else 
#line 430 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 

#line 431 "../../src/lex.c"
break ; 

#line 432 "../../src/lex.c"
case 'x' : hex_to_oct ( ) ; 

#line 434 "../../src/lex.c"
break ; 
} 
#line 435 "../../src/lex.c"
; 

#line 436 "../../src/lex.c"
break ; 

#line 437 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 437 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 437 "../../src/lex.c"
) = _auto_c ) ) ) ; 
} } 
#line 441 "../../src/lex.c"
ex : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char 
#line 441 "../../src/lex.c"
* ) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ 
#line 441 "../../src/lex.c"
) ) = '\'' ) ) ) ; 

#line 443 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 443 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 443 "../../src/lex.c"
'\0' ) ) ) ; 

#line 444 "../../src/lex.c"
{ 
#line 444 "../../src/lex.c"
{ _auto__result = txtstart ; 

#line 444 "../../src/lex.c"
return _auto__result ; 
} } } ; 

#line 447 "../../src/lex.c"
int lxcom ( ) 
#line 449 "../../src/lex.c"
{ 
#line 449 "../../src/lex.c"
register int _auto_c ; 

#line 452 "../../src/lex.c"
for ( ;;) switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 452 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 452 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 453 "../../src/lex.c"
{ 
#line 453 "../../src/lex.c"
case -1: errorFPC__E ( ( char * 
#line 453 "../../src/lex.c"
) "eof in comment") ; 

#line 456 "../../src/lex.c"
{ 
#line 456 "../../src/lex.c"
return ; 
} 
#line 457 "../../src/lex.c"
case '\n' : curloc . _loc_line ++ ; 

#line 459 "../../src/lex.c"
Nline ++ ; 

#line 460 "../../src/lex.c"
break ; 

#line 461 "../../src/lex.c"
case '*' : if ( ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 461 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 461 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) == '/' ) 
#line 462 "../../src/lex.c"
{ 
#line 462 "../../src/lex.c"
return ; 
} 
#line 463 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 

#line 464 "../../src/lex.c"
break ; 

#line 465 "../../src/lex.c"
case '/' : if ( ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 465 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 465 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) == '*' ) 
#line 466 "../../src/lex.c"
errorFI_PC__E ( ( int ) 'w' , 
#line 466 "../../src/lex.c"
( char * ) "``/*'' in comment") ; 

#line 467 "../../src/lex.c"
ungetc ( _auto_c , ( struct _iobuf * ) in_file ) ; 

#line 468 "../../src/lex.c"
break ; 
} } ; 

#line 473 "../../src/lex.c"
int linecom ( ) 
#line 475 "../../src/lex.c"
{ 
#line 475 "../../src/lex.c"
register int _auto_c ; 

#line 478 "../../src/lex.c"
for ( ;;) switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 478 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 478 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 479 "../../src/lex.c"
{ 
#line 479 "../../src/lex.c"
case -1: errorFPC__E ( ( char * 
#line 479 "../../src/lex.c"
) "eof in comment") ; 

#line 482 "../../src/lex.c"
{ 
#line 482 "../../src/lex.c"
return ; 
} 
#line 483 "../../src/lex.c"
case '\n' : curloc . _loc_line ++ ; 

#line 485 "../../src/lex.c"
Nline ++ ; 

#line 486 "../../src/lex.c"
saved = lxtitle ( ) ; 

#line 487 "../../src/lex.c"
{ 
#line 487 "../../src/lex.c"
return ; 
} } } ; 

#line 492 "../../src/lex.c"
extern int tlex ( ) 
#line 493 "../../src/lex.c"
{ 
#line 493 "../../src/lex.c"
TOK _auto_ret ; 
Pname _auto_n ; 

#line 497 "../../src/lex.c"
Ntoken ++ ; 

#line 499 "../../src/lex.c"
for ( ;;) { 
#line 499 "../../src/lex.c"
register int _auto_lxchar ; 
register struct LXDOPE * _auto_p ; 
union _C10 _auto__Xy_rtFI___global ; 
union _C10 _auto__Xy_rt_global ; 
char * _auto__Xx_rt_global ; 
union _C10 _auto__Xy_rtFCloc____global ; 

#line 503 "../../src/lex.c"
txtstart = txtfree ; 

#line 505 "../../src/lex.c"
if ( saved ) { 
#line 505 "../../src/lex.c"
_auto_lxchar = saved ; 

#line 507 "../../src/lex.c"
saved = 0 ; 
} else 
#line 510 "../../src/lex.c"
_auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 510 "../../src/lex.c"
( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * 
#line 510 "../../src/lex.c"
) in_file ) ) ; 

#line 512 "../../src/lex.c"
switch ( ( _auto_p = ( lxcp [ _auto_lxchar + 1 ] ) ) -> _LXDOPE_lxact ) { 
#line 512 "../../src/lex.c"
case 
#line 512 "../../src/lex.c"
3 : 
#line 515 "../../src/lex.c"
{ 
#line 515 "../../src/lex.c"
addtok ( ( int ) _auto_p -> _LXDOPE_lxtok , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( 
#line 515 "../../src/lex.c"
int ) _auto_p -> _LXDOPE_lxtok ) ) , _auto__Xy_rtFI___global ) ) ; 

#line 515 "../../src/lex.c"
{ 
#line 515 "../../src/lex.c"
return ; 
} } 
#line 515 "../../src/lex.c"
; 

#line 517 "../../src/lex.c"
case 16 : if ( br_level || bl_level ) errorFPC__E ( ( char * ) "'%s' missing at end of input", bl_level ? "}": 
#line 517 "../../src/lex.c"
")") ; 

#line 520 "../../src/lex.c"
{ 
#line 520 "../../src/lex.c"
addtok ( ( int ) 0 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int 
#line 520 "../../src/lex.c"
) 0 ) ) , _auto__Xy_rtFI___global ) ) ; 

#line 520 "../../src/lex.c"
{ 
#line 520 "../../src/lex.c"
return ; 
} } 
#line 520 "../../src/lex.c"
; 

#line 522 "../../src/lex.c"
case 0 : if ( _auto_lxchar == '#' ) { 
#line 523 "../../src/lex.c"
ungetc ( ( int ) '#' , ( 
#line 523 "../../src/lex.c"
struct _iobuf * ) in_file ) ; 

#line 526 "../../src/lex.c"
saved = lxtitle ( ) ; 

#line 527 "../../src/lex.c"
continue ; 
} 
#line 529 "../../src/lex.c"
if ( ( ' ' <= _auto_lxchar ) && ( _auto_lxchar <= '~' ) ) errorFPC__E ( ( char 
#line 529 "../../src/lex.c"
* ) "illegal character '%c' (ignored)", _auto_lxchar ) ; 
else 
#line 532 "../../src/lex.c"
errorFPC__E ( ( char * ) "illegal character '0%o' (ignored)", _auto_lxchar ) ; 

#line 533 "../../src/lex.c"
continue ; 

#line 535 "../../src/lex.c"
case 1 : lxget ( _auto_lxchar , 3) ; 

#line 539 "../../src/lex.c"
if ( _auto_n = _table_look ( ( struct table * ) ktbl , txtstart , ( int ) 0 
#line 539 "../../src/lex.c"
) ) 
#line 539 "../../src/lex.c"
{ 
#line 539 "../../src/lex.c"
TOK _auto_x ; 
union _C10 _auto__Xy_rtFPV___global ; 
union _C10 _auto__Xy_rtFCloc____global ; 
union _C10 _auto__Xy_rtFI___global ; 

#line 541 "../../src/lex.c"
txtfree = txtstart ; 

#line 542 "../../src/lex.c"
switch ( _auto_x = _auto_n -> _node_base ) { 
#line 542 "../../src/lex.c"
case 123 : { 
#line 544 "../../src/lex.c"
addtok ( 123 , ( ( _auto__Xy_rtFPV___global . 
#line 544 "../../src/lex.c"
__C10_pn = ( ( ( struct name * ) ( ( ( int * ) ( 
#line 544 "../../src/lex.c"
( ( struct node * ) ( _auto_n ) ) ) ) ) ) ) ) 
#line 544 "../../src/lex.c"
, _auto__Xy_rtFPV___global ) ) ; 

#line 544 "../../src/lex.c"
{ 
#line 544 "../../src/lex.c"
return ; 
} } 
#line 544 "../../src/lex.c"
; 

#line 545 "../../src/lex.c"
break ; 

#line 546 "../../src/lex.c"
case 143 : { 
#line 547 "../../src/lex.c"
addtok ( _auto_n -> _expr__O2.__C2_syn_class , ( ( _auto__Xy_rtFCloc____global . __C10_l = curloc ) , _auto__Xy_rtFCloc____global ) ) 
#line 547 "../../src/lex.c"
; 

#line 547 "../../src/lex.c"
{ 
#line 547 "../../src/lex.c"
return ; 
} } 
#line 547 "../../src/lex.c"
; 

#line 548 "../../src/lex.c"
default : { 
#line 549 "../../src/lex.c"
addtok ( _auto_n -> _expr__O2.__C2_syn_class , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 
#line 549 "../../src/lex.c"
_auto_x ) ) , _auto__Xy_rtFI___global ) ) ; 

#line 549 "../../src/lex.c"
{ 
#line 549 "../../src/lex.c"
return ; 
} } 
#line 549 "../../src/lex.c"
; 
} } else 
#line 552 "../../src/lex.c"
{ 
#line 552 "../../src/lex.c"
{ 
#line 553 "../../src/lex.c"
addtok ( 80 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) 
#line 553 "../../src/lex.c"
) ; 

#line 553 "../../src/lex.c"
{ 
#line 553 "../../src/lex.c"
return ; 
} } 
#line 553 "../../src/lex.c"
; 
} 
#line 556 "../../src/lex.c"
case 2 : _auto_ret = 82 ; 

#line 560 "../../src/lex.c"
if ( _auto_lxchar == '0' ) { 
#line 560 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , 
#line 560 "../../src/lex.c"
( char * ) "input buffer overflow") : ( ( ( int ) ( ( * 
#line 560 "../../src/lex.c"
( txtfree ++ ) ) = '0' ) ) ) ; 

#line 562 "../../src/lex.c"
switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 562 "../../src/lex.c"
( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * 
#line 562 "../../src/lex.c"
) in_file ) ) ) 
#line 562 "../../src/lex.c"
{ 
#line 562 "../../src/lex.c"
case 'l' : case 'L' : ( txtmax <= txtfree ) ? errorFI_PC__E ( 
#line 562 "../../src/lex.c"
( int ) 'i' , ( char * ) "input buffer overflow") : ( ( ( int 
#line 562 "../../src/lex.c"
) ( ( * ( txtfree ++ ) ) = 'L' ) ) ) ; 

#line 566 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 566 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 566 "../../src/lex.c"
0 ) ) ) ; 

#line 567 "../../src/lex.c"
{ 
#line 567 "../../src/lex.c"
addtok ( 82 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 567 "../../src/lex.c"
{ 
#line 567 "../../src/lex.c"
return ; 
} } 
#line 567 "../../src/lex.c"
; 

#line 568 "../../src/lex.c"
case 'x' : case 'X' : lxget ( ( int ) 'X' , 010 ) ; 

#line 571 "../../src/lex.c"
if ( ( txtfree - txtstart ) < 4 ) errorFPC__E ( ( char * ) "hexadecimal digitX after \"0x\"") ; 
#line 571 "../../src/lex.c"

#line 573 "../../src/lex.c"
switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 573 "../../src/lex.c"
( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * 
#line 573 "../../src/lex.c"
) in_file ) ) ) 
#line 573 "../../src/lex.c"
{ 
#line 573 "../../src/lex.c"
case 'l' : case 'L' : txtfree -- ; 

#line 577 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 577 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 577 "../../src/lex.c"
'L' ) ) ) ; 

#line 578 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 578 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 578 "../../src/lex.c"
0 ) ) ) ; 

#line 579 "../../src/lex.c"
break ; 

#line 580 "../../src/lex.c"
default : saved = _auto_lxchar ; 
} 
#line 583 "../../src/lex.c"
{ 
#line 583 "../../src/lex.c"
addtok ( 82 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 583 "../../src/lex.c"
{ 
#line 583 "../../src/lex.c"
return ; 
} } 
#line 583 "../../src/lex.c"
; 

#line 584 "../../src/lex.c"
case '8' : case '9' : errorFPC__E ( ( char * ) "8 or 9 used as octal digit") ; 

#line 587 "../../src/lex.c"
case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case '6' : 
#line 587 "../../src/lex.c"

#line 594 "../../src/lex.c"
case '7' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 594 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 594 "../../src/lex.c"
) = _auto_lxchar ) ) ) ; 

#line 596 "../../src/lex.c"
ox : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? 
#line 596 "../../src/lex.c"
( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct 
#line 596 "../../src/lex.c"
_iobuf * ) in_file ) ) ) 
#line 597 "../../src/lex.c"
{ 
#line 597 "../../src/lex.c"
case '8' : case '9' : errorFPC__E ( ( char * 
#line 597 "../../src/lex.c"
) "8 or 9 used as octal digit") ; 

#line 601 "../../src/lex.c"
case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case '6' : 
#line 601 "../../src/lex.c"

#line 608 "../../src/lex.c"
case '7' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 608 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 608 "../../src/lex.c"
) = _auto_lxchar ) ) ) ; 

#line 610 "../../src/lex.c"
goto ox ; 

#line 611 "../../src/lex.c"
case 'l' : case 'L' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( 
#line 611 "../../src/lex.c"
char * ) "input buffer overflow") : ( ( ( int ) ( ( * ( 
#line 611 "../../src/lex.c"
txtfree ++ ) ) = 'L' ) ) ) ; 

#line 614 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 614 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 614 "../../src/lex.c"
0 ) ) ) ; 

#line 615 "../../src/lex.c"
break ; 

#line 616 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 616 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 616 "../../src/lex.c"
) = 0 ) ) ) ; 

#line 618 "../../src/lex.c"
saved = _auto_lxchar ; 
} 
#line 620 "../../src/lex.c"
{ 
#line 620 "../../src/lex.c"
addtok ( 82 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 620 "../../src/lex.c"
{ 
#line 620 "../../src/lex.c"
return ; 
} } 
#line 620 "../../src/lex.c"
; 

#line 621 "../../src/lex.c"
case '.' : lxget ( ( int ) '.' , 02 ) ; 

#line 623 "../../src/lex.c"
goto getfp ; 

#line 624 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 626 "../../src/lex.c"
{ 
#line 626 "../../src/lex.c"
addtok ( 86 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) ) 
#line 626 "../../src/lex.c"
, _auto__Xy_rtFI___global ) ) ; 

#line 626 "../../src/lex.c"
{ 
#line 626 "../../src/lex.c"
return ; 
} } 
#line 626 "../../src/lex.c"
; 
} } else 
#line 630 "../../src/lex.c"
lxget ( _auto_lxchar , 02 ) ; 

#line 632 "../../src/lex.c"
if ( ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? 
#line 632 "../../src/lex.c"
( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct 
#line 632 "../../src/lex.c"
_iobuf * ) in_file ) ) ) == '.' ) 
#line 632 "../../src/lex.c"
{ 
#line 632 "../../src/lex.c"
txtfree -- ; 

#line 634 "../../src/lex.c"
lxget ( ( int ) '.' , 02 ) ; 

#line 635 "../../src/lex.c"
getfp : _auto_ret = 83 ; 

#line 637 "../../src/lex.c"
_auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 637 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 637 "../../src/lex.c"
) ; 
} 
#line 638 "../../src/lex.c"
; 

#line 640 "../../src/lex.c"
switch ( _auto_lxchar ) { 
#line 640 "../../src/lex.c"
case 'e' : case 'E' : txtfree -- ; 

#line 644 "../../src/lex.c"
switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( 
#line 644 "../../src/lex.c"
( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * 
#line 644 "../../src/lex.c"
) in_file ) ) ) 
#line 644 "../../src/lex.c"
{ 
#line 644 "../../src/lex.c"
case '-' : case '+' : ( txtmax <= txtfree ) ? errorFI_PC__E ( 
#line 644 "../../src/lex.c"
( int ) 'i' , ( char * ) "input buffer overflow") : ( ( ( int 
#line 644 "../../src/lex.c"
) ( ( * ( txtfree ++ ) ) = 'e' ) ) ) ; 

#line 648 "../../src/lex.c"
break ; 

#line 649 "../../src/lex.c"
default : ungetc ( _auto_lxchar , ( struct _iobuf * ) in_file ) ; 

#line 651 "../../src/lex.c"
_auto_lxchar = 'e' ; 
} 
#line 652 "../../src/lex.c"
; 

#line 653 "../../src/lex.c"
lxget ( _auto_lxchar , 02 ) ; 

#line 654 "../../src/lex.c"
_auto_ret = 83 ; 

#line 655 "../../src/lex.c"
break ; 

#line 656 "../../src/lex.c"
case 'l' : case 'L' : txtfree -- ; 

#line 659 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 659 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 659 "../../src/lex.c"
'L' ) ) ) ; 

#line 660 "../../src/lex.c"
break ; 

#line 661 "../../src/lex.c"
default : saved = _auto_lxchar ; 
} 
#line 663 "../../src/lex.c"
; 

#line 665 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 665 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 665 "../../src/lex.c"
0 ) ) ) ; 

#line 666 "../../src/lex.c"
{ 
#line 666 "../../src/lex.c"
addtok ( ( int ) _auto_ret , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) 
#line 666 "../../src/lex.c"
; 

#line 666 "../../src/lex.c"
{ 
#line 666 "../../src/lex.c"
return ; 
} } 
#line 666 "../../src/lex.c"
; 

#line 668 "../../src/lex.c"
case 8 : if ( ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 668 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 668 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) == '.' ) 
#line 669 "../../src/lex.c"
{ 
#line 669 "../../src/lex.c"
if ( ( _auto_lxchar = 
#line 669 "../../src/lex.c"
( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * ( 
#line 669 "../../src/lex.c"
in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) ) 
#line 669 "../../src/lex.c"
) != '.' ) 
#line 670 "../../src/lex.c"
{ 
#line 670 "../../src/lex.c"
errorFPC__E ( ( char * ) "token .. ?") ; 

#line 672 "../../src/lex.c"
saved = _auto_lxchar ; 
} 
#line 674 "../../src/lex.c"
{ 
#line 674 "../../src/lex.c"
addtok ( 155 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) 
#line 674 "../../src/lex.c"
) , _auto__Xy_rtFI___global ) ) ; 

#line 674 "../../src/lex.c"
{ 
#line 674 "../../src/lex.c"
return ; 
} } 
#line 674 "../../src/lex.c"
; 
} 
#line 676 "../../src/lex.c"
if ( ( lxmask [ _auto_lxchar + 1 ] ) & 02 ) { 
#line 676 "../../src/lex.c"
ungetc ( _auto_lxchar , ( 
#line 676 "../../src/lex.c"
struct _iobuf * ) in_file ) ; 

#line 678 "../../src/lex.c"
lxget ( ( int ) '.' , 02 ) ; 

#line 679 "../../src/lex.c"
goto getfp ; 
} 
#line 681 "../../src/lex.c"
saved = _auto_lxchar ; 

#line 682 "../../src/lex.c"
{ 
#line 682 "../../src/lex.c"
addtok ( 45 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) ) 
#line 682 "../../src/lex.c"
, _auto__Xy_rtFI___global ) ) ; 

#line 682 "../../src/lex.c"
{ 
#line 682 "../../src/lex.c"
return ; 
} } 
#line 682 "../../src/lex.c"
; 

#line 684 "../../src/lex.c"
case 4 : for ( ;;) switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) 
#line 684 "../../src/lex.c"
>= 0 ) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) 
#line 684 "../../src/lex.c"
: _filbuf ( ( struct _iobuf * ) in_file ) ) ) 
#line 687 "../../src/lex.c"
{ 
#line 687 "../../src/lex.c"
case '\\' : ( txtmax <= 
#line 687 "../../src/lex.c"
txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") : ( 
#line 687 "../../src/lex.c"
( ( int ) ( ( * ( txtfree ++ ) ) = '\\' ) ) 
#line 687 "../../src/lex.c"
) ; 

#line 690 "../../src/lex.c"
_auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * 
#line 690 "../../src/lex.c"
( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) 
#line 690 "../../src/lex.c"
) ; 

#line 691 "../../src/lex.c"
if ( _auto_lxchar == 'x' ) hex_to_oct ( ) ; 
else 
#line 694 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 694 "../../src/lex.c"
"input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) ) 
#line 694 "../../src/lex.c"
= _auto_lxchar ) ) ) ; 

#line 695 "../../src/lex.c"
break ; 

#line 696 "../../src/lex.c"
case '"' : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 696 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 696 "../../src/lex.c"
) = 0 ) ) ) ; 

#line 698 "../../src/lex.c"
{ 
#line 698 "../../src/lex.c"
addtok ( 81 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 698 "../../src/lex.c"
{ 
#line 698 "../../src/lex.c"
return ; 
} } 
#line 698 "../../src/lex.c"
; 

#line 699 "../../src/lex.c"
case '\n' : errorFPC__E ( ( char * ) "newline in string") ; 

#line 701 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 701 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 701 "../../src/lex.c"
0 ) ) ) ; 

#line 702 "../../src/lex.c"
{ 
#line 702 "../../src/lex.c"
addtok ( 81 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 702 "../../src/lex.c"
{ 
#line 702 "../../src/lex.c"
return ; 
} } 
#line 702 "../../src/lex.c"
; 

#line 703 "../../src/lex.c"
case -1: errorFPC__E ( ( char * ) "eof in string") ; 

#line 705 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 705 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 705 "../../src/lex.c"
0 ) ) ) ; 

#line 706 "../../src/lex.c"
{ 
#line 706 "../../src/lex.c"
addtok ( 81 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 706 "../../src/lex.c"
{ 
#line 706 "../../src/lex.c"
return ; 
} } 
#line 706 "../../src/lex.c"
; 

#line 707 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 707 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 707 "../../src/lex.c"
) = _auto_lxchar ) ) ) ; 
} 
#line 711 "../../src/lex.c"
case 5 : { 
#line 713 "../../src/lex.c"
addtok ( 84 , ( ( _auto__Xx_rt_global = chconst ( ) ) , ( 
#line 713 "../../src/lex.c"
( _auto__Xy_rt_global . __C10_s = _auto__Xx_rt_global ) , _auto__Xy_rt_global ) ) ) ; 

#line 713 "../../src/lex.c"
{ 
#line 713 "../../src/lex.c"
return ; 
} } 
#line 713 "../../src/lex.c"
; 

#line 715 "../../src/lex.c"
case 6 : { 
#line 716 "../../src/lex.c"
register int _auto_i ; 
int _auto_j ; 
union _C10 _auto__Xy_rt_global ; 

#line 720 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 720 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 720 "../../src/lex.c"
'`' ) ) ) ; 

#line 722 "../../src/lex.c"
for ( _auto_i = 0 ;( _auto_i < 7 ) ;( ++ _auto_i ) ) { 
#line 722 "../../src/lex.c"
( txtmax <= 
#line 722 "../../src/lex.c"
txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") : ( 
#line 722 "../../src/lex.c"
( ( int ) ( ( * ( txtfree ++ ) ) = ( _auto_j = 
#line 722 "../../src/lex.c"
( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * ( 
#line 722 "../../src/lex.c"
in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) ) 
#line 722 "../../src/lex.c"
) ) ) ) ; 

#line 724 "../../src/lex.c"
if ( _auto_j == '`' ) break ; 
} 
#line 726 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 726 "../../src/lex.c"
"input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) ) 
#line 726 "../../src/lex.c"
= 0 ) ) ) ; 

#line 727 "../../src/lex.c"
if ( 6 < _auto_i ) errorFPC__E ( ( char * ) "bcd constant exceeds 6 characters") ; 

#line 729 "../../src/lex.c"
{ 
#line 729 "../../src/lex.c"
addtok ( 84 , ( ( _auto__Xy_rt_global . __C10_s = txtstart ) , _auto__Xy_rt_global ) ) ; 

#line 729 "../../src/lex.c"
{ 
#line 729 "../../src/lex.c"
return ; 
} } 
#line 729 "../../src/lex.c"
; 
} 
#line 732 "../../src/lex.c"
case 7 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 732 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 732 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 733 "../../src/lex.c"
{ 
#line 733 "../../src/lex.c"
case '*' : lxcom ( ) ; 

#line 736 "../../src/lex.c"
break ; 

#line 737 "../../src/lex.c"
case '/' : linecom ( ) ; 

#line 739 "../../src/lex.c"
break ; 

#line 740 "../../src/lex.c"
case '=' : { 
#line 741 "../../src/lex.c"
addtok ( 90 , ( ( _auto__Xy_rtFI___global . __C10_t = 129 ) , _auto__Xy_rtFI___global ) ) ; 
#line 741 "../../src/lex.c"

#line 741 "../../src/lex.c"
{ 
#line 741 "../../src/lex.c"
return ; 
} } 
#line 741 "../../src/lex.c"
; 

#line 742 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 744 "../../src/lex.c"
{ 
#line 744 "../../src/lex.c"
addtok ( 93 , ( ( _auto__Xy_rtFI___global . __C10_t = 51 ) , _auto__Xy_rtFI___global ) ) ; 

#line 744 "../../src/lex.c"
{ 
#line 744 "../../src/lex.c"
return ; 
} } 
#line 744 "../../src/lex.c"
; 
} 
#line 747 "../../src/lex.c"
case 10 : continue ; 

#line 750 "../../src/lex.c"
case 11 : ++ curloc . _loc_line ; 

#line 752 "../../src/lex.c"
Nline ++ ; 

#line 753 "../../src/lex.c"
saved = lxtitle ( ) ; 

#line 754 "../../src/lex.c"
continue ; 

#line 756 "../../src/lex.c"
case 12 : if ( 50 <= ( bl_level ++ ) ) { 
#line 757 "../../src/lex.c"
errorFI_PC__E ( ( int ) 
#line 757 "../../src/lex.c"
's' , ( char * ) "blocks too deaply nested") ; 

#line 759 "../../src/lex.c"
ext ( 3 ) ; 
} 
#line 761 "../../src/lex.c"
{ 
#line 761 "../../src/lex.c"
addtok ( 73 , ( ( _auto__Xy_rtFCloc____global . __C10_l = curloc ) , _auto__Xy_rtFCloc____global ) ) ; 

#line 761 "../../src/lex.c"
{ 
#line 761 "../../src/lex.c"
return ; 
} } 
#line 761 "../../src/lex.c"
; 

#line 763 "../../src/lex.c"
case 13 : if ( ( bl_level -- ) <= 0 ) { 
#line 764 "../../src/lex.c"
errorFPC__E ( ( char 
#line 764 "../../src/lex.c"
* ) "unX '}'") ; 

#line 766 "../../src/lex.c"
bl_level = 0 ; 
} 
#line 768 "../../src/lex.c"
{ 
#line 768 "../../src/lex.c"
addtok ( 74 , ( ( _auto__Xy_rtFCloc____global . __C10_l = curloc ) , _auto__Xy_rtFCloc____global ) ) ; 

#line 768 "../../src/lex.c"
{ 
#line 768 "../../src/lex.c"
return ; 
} } 
#line 768 "../../src/lex.c"
; 

#line 770 "../../src/lex.c"
case 14 : br_level ++ ; 

#line 772 "../../src/lex.c"
{ 
#line 772 "../../src/lex.c"
addtok ( 40 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) ) 
#line 772 "../../src/lex.c"
, _auto__Xy_rtFI___global ) ) ; 

#line 772 "../../src/lex.c"
{ 
#line 772 "../../src/lex.c"
return ; 
} } 
#line 772 "../../src/lex.c"
; 

#line 774 "../../src/lex.c"
case 15 : if ( ( br_level -- ) <= 0 ) { 
#line 775 "../../src/lex.c"
errorFPC__E ( ( char 
#line 775 "../../src/lex.c"
* ) "unX ')'") ; 

#line 777 "../../src/lex.c"
br_level = 0 ; 
} 
#line 779 "../../src/lex.c"
{ 
#line 779 "../../src/lex.c"
addtok ( 41 , ( ( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) 
#line 779 "../../src/lex.c"
) , _auto__Xy_rtFI___global ) ) ; 

#line 779 "../../src/lex.c"
{ 
#line 779 "../../src/lex.c"
return ; 
} } 
#line 779 "../../src/lex.c"
; 

#line 781 "../../src/lex.c"
case 17 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) 
#line 781 "../../src/lex.c"
? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( 
#line 781 "../../src/lex.c"
struct _iobuf * ) in_file ) ) ) 
#line 782 "../../src/lex.c"
{ 
#line 782 "../../src/lex.c"
case '=' : { 
#line 784 "../../src/lex.c"
addtok ( 92 , ( ( 
#line 784 "../../src/lex.c"
_auto__Xy_rtFI___global . __C10_t = 62 ) , _auto__Xy_rtFI___global ) ) ; 

#line 784 "../../src/lex.c"
{ 
#line 784 "../../src/lex.c"
return ; 
} } 
#line 784 "../../src/lex.c"
; 

#line 785 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 787 "../../src/lex.c"
{ 
#line 787 "../../src/lex.c"
addtok ( 70 , ( ( _auto__Xy_rtFI___global . __C10_t = 70 ) , _auto__Xy_rtFI___global ) ) ; 

#line 787 "../../src/lex.c"
{ 
#line 787 "../../src/lex.c"
return ; 
} } 
#line 787 "../../src/lex.c"
; 
} 
#line 790 "../../src/lex.c"
case 28 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 790 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 790 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 791 "../../src/lex.c"
{ 
#line 791 "../../src/lex.c"
case ':' : { 
#line 793 "../../src/lex.c"
addtok ( 160 , ( 
#line 793 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = ( ( int ) 0 ) ) , _auto__Xy_rtFI___global ) ) ; 
#line 793 "../../src/lex.c"

#line 793 "../../src/lex.c"
{ 
#line 793 "../../src/lex.c"
return ; 
} } 
#line 793 "../../src/lex.c"
; 

#line 794 "../../src/lex.c"
case '=' : errorFPC__E ( ( char * ) "':=' is not a c++ operator") ; 

#line 796 "../../src/lex.c"
{ 
#line 796 "../../src/lex.c"
addtok ( 70 , ( ( _auto__Xy_rtFI___global . __C10_t = 70 ) , _auto__Xy_rtFI___global ) ) ; 

#line 796 "../../src/lex.c"
{ 
#line 796 "../../src/lex.c"
return ; 
} } 
#line 796 "../../src/lex.c"
; 

#line 797 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 799 "../../src/lex.c"
{ 
#line 799 "../../src/lex.c"
addtok ( 69 , ( ( _auto__Xy_rtFI___global . __C10_t = 69 ) , _auto__Xy_rtFI___global ) ) ; 

#line 799 "../../src/lex.c"
{ 
#line 799 "../../src/lex.c"
return ; 
} } 
#line 799 "../../src/lex.c"
; 
} 
#line 801 "../../src/lex.c"
case 24 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 801 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 801 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 802 "../../src/lex.c"
{ 
#line 802 "../../src/lex.c"
case '=' : { 
#line 804 "../../src/lex.c"
addtok ( 92 , ( 
#line 804 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 63 ) , _auto__Xy_rtFI___global ) ) ; 

#line 804 "../../src/lex.c"
{ 
#line 804 "../../src/lex.c"
return ; 
} } 
#line 804 "../../src/lex.c"
; 

#line 805 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 807 "../../src/lex.c"
{ 
#line 807 "../../src/lex.c"
addtok ( 46 , ( ( _auto__Xy_rtFI___global . __C10_t = 46 ) , _auto__Xy_rtFI___global ) ) ; 

#line 807 "../../src/lex.c"
{ 
#line 807 "../../src/lex.c"
return ; 
} } 
#line 807 "../../src/lex.c"
; 
} 
#line 809 "../../src/lex.c"
case 19 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 809 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 809 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 810 "../../src/lex.c"
{ 
#line 810 "../../src/lex.c"
case '>' : switch ( _auto_lxchar = ( 
#line 810 "../../src/lex.c"
( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * ( in_file -> 
#line 810 "../../src/lex.c"
__iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) ) ) 
#line 810 "../../src/lex.c"

#line 812 "../../src/lex.c"
{ 
#line 812 "../../src/lex.c"
case '=' : { 
#line 814 "../../src/lex.c"
addtok ( 90 , ( ( _auto__Xy_rtFI___global . __C10_t = 135 ) , _auto__Xy_rtFI___global ) ) 
#line 814 "../../src/lex.c"
; 

#line 814 "../../src/lex.c"
{ 
#line 814 "../../src/lex.c"
return ; 
} } 
#line 814 "../../src/lex.c"
; 

#line 815 "../../src/lex.c"
break ; 

#line 816 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 818 "../../src/lex.c"
{ 
#line 818 "../../src/lex.c"
addtok ( 94 , ( ( _auto__Xy_rtFI___global . __C10_t = 57 ) , _auto__Xy_rtFI___global ) ) ; 

#line 818 "../../src/lex.c"
{ 
#line 818 "../../src/lex.c"
return ; 
} } 
#line 818 "../../src/lex.c"
; 
} 
#line 820 "../../src/lex.c"
case '=' : { 
#line 821 "../../src/lex.c"
addtok ( 91 , ( ( _auto__Xy_rtFI___global . __C10_t = 61 ) , _auto__Xy_rtFI___global ) ) 
#line 821 "../../src/lex.c"
; 

#line 821 "../../src/lex.c"
{ 
#line 821 "../../src/lex.c"
return ; 
} } 
#line 821 "../../src/lex.c"
; 

#line 822 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 824 "../../src/lex.c"
{ 
#line 824 "../../src/lex.c"
addtok ( 91 , ( ( _auto__Xy_rtFI___global . __C10_t = 60 ) , _auto__Xy_rtFI___global ) ) ; 

#line 824 "../../src/lex.c"
{ 
#line 824 "../../src/lex.c"
return ; 
} } 
#line 824 "../../src/lex.c"
; 
} 
#line 826 "../../src/lex.c"
case 18 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 826 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 826 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 827 "../../src/lex.c"
{ 
#line 827 "../../src/lex.c"
case '<' : switch ( _auto_lxchar = ( 
#line 827 "../../src/lex.c"
( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? ( ( * ( in_file -> 
#line 827 "../../src/lex.c"
__iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct _iobuf * ) in_file ) ) ) 
#line 827 "../../src/lex.c"

#line 829 "../../src/lex.c"
{ 
#line 829 "../../src/lex.c"
case '=' : { 
#line 831 "../../src/lex.c"
addtok ( 90 , ( ( _auto__Xy_rtFI___global . __C10_t = 134 ) , _auto__Xy_rtFI___global ) ) 
#line 831 "../../src/lex.c"
; 

#line 831 "../../src/lex.c"
{ 
#line 831 "../../src/lex.c"
return ; 
} } 
#line 831 "../../src/lex.c"
; 

#line 832 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 834 "../../src/lex.c"
{ 
#line 834 "../../src/lex.c"
addtok ( 94 , ( ( _auto__Xy_rtFI___global . __C10_t = 56 ) , _auto__Xy_rtFI___global ) ) ; 

#line 834 "../../src/lex.c"
{ 
#line 834 "../../src/lex.c"
return ; 
} } 
#line 834 "../../src/lex.c"
; 
} 
#line 836 "../../src/lex.c"
case '=' : { 
#line 837 "../../src/lex.c"
addtok ( 91 , ( ( _auto__Xy_rtFI___global . __C10_t = 59 ) , _auto__Xy_rtFI___global ) ) 
#line 837 "../../src/lex.c"
; 

#line 837 "../../src/lex.c"
{ 
#line 837 "../../src/lex.c"
return ; 
} } 
#line 837 "../../src/lex.c"
; 

#line 838 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 840 "../../src/lex.c"
{ 
#line 840 "../../src/lex.c"
addtok ( 91 , ( ( _auto__Xy_rtFI___global . __C10_t = 58 ) , _auto__Xy_rtFI___global ) ) ; 

#line 840 "../../src/lex.c"
{ 
#line 840 "../../src/lex.c"
return ; 
} } 
#line 840 "../../src/lex.c"
; 
} 
#line 842 "../../src/lex.c"
case 22 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 842 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 842 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 843 "../../src/lex.c"
{ 
#line 843 "../../src/lex.c"
case '&' : { 
#line 845 "../../src/lex.c"
addtok ( 66 , ( 
#line 845 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 66 ) , _auto__Xy_rtFI___global ) ) ; 

#line 845 "../../src/lex.c"
{ 
#line 845 "../../src/lex.c"
return ; 
} } 
#line 845 "../../src/lex.c"
; 

#line 846 "../../src/lex.c"
case '=' : { 
#line 847 "../../src/lex.c"
addtok ( 90 , ( ( _auto__Xy_rtFI___global . __C10_t = 131 ) , _auto__Xy_rtFI___global ) ) ; 
#line 847 "../../src/lex.c"

#line 847 "../../src/lex.c"
{ 
#line 847 "../../src/lex.c"
return ; 
} } 
#line 847 "../../src/lex.c"
; 

#line 848 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 850 "../../src/lex.c"
{ 
#line 850 "../../src/lex.c"
addtok ( 52 , ( ( _auto__Xy_rtFI___global . __C10_t = 52 ) , _auto__Xy_rtFI___global ) ) ; 

#line 850 "../../src/lex.c"
{ 
#line 850 "../../src/lex.c"
return ; 
} } 
#line 850 "../../src/lex.c"
; 
} 
#line 852 "../../src/lex.c"
case 21 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 852 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 852 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 853 "../../src/lex.c"
{ 
#line 853 "../../src/lex.c"
case '|' : { 
#line 855 "../../src/lex.c"
addtok ( 67 , ( 
#line 855 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 67 ) , _auto__Xy_rtFI___global ) ) ; 

#line 855 "../../src/lex.c"
{ 
#line 855 "../../src/lex.c"
return ; 
} } 
#line 855 "../../src/lex.c"
; 

#line 856 "../../src/lex.c"
case '=' : { 
#line 857 "../../src/lex.c"
addtok ( 90 , ( ( _auto__Xy_rtFI___global . __C10_t = 132 ) , _auto__Xy_rtFI___global ) ) ; 
#line 857 "../../src/lex.c"

#line 857 "../../src/lex.c"
{ 
#line 857 "../../src/lex.c"
return ; 
} } 
#line 857 "../../src/lex.c"
; 

#line 858 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 860 "../../src/lex.c"
{ 
#line 860 "../../src/lex.c"
addtok ( 65 , ( ( _auto__Xy_rtFI___global . __C10_t = 65 ) , _auto__Xy_rtFI___global ) ) ; 

#line 860 "../../src/lex.c"
{ 
#line 860 "../../src/lex.c"
return ; 
} } 
#line 860 "../../src/lex.c"
; 
} 
#line 862 "../../src/lex.c"
case 20 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 862 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 862 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 863 "../../src/lex.c"
{ 
#line 863 "../../src/lex.c"
case '=' : { 
#line 865 "../../src/lex.c"
addtok ( 90 , ( 
#line 865 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 133 ) , _auto__Xy_rtFI___global ) ) ; 

#line 865 "../../src/lex.c"
{ 
#line 865 "../../src/lex.c"
return ; 
} } 
#line 865 "../../src/lex.c"
; 

#line 866 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 868 "../../src/lex.c"
{ 
#line 868 "../../src/lex.c"
addtok ( 64 , ( ( _auto__Xy_rtFI___global . __C10_t = 64 ) , _auto__Xy_rtFI___global ) ) ; 

#line 868 "../../src/lex.c"
{ 
#line 868 "../../src/lex.c"
return ; 
} } 
#line 868 "../../src/lex.c"
; 
} 
#line 870 "../../src/lex.c"
case 27 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 870 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 870 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 871 "../../src/lex.c"
{ 
#line 871 "../../src/lex.c"
case '=' : { 
#line 873 "../../src/lex.c"
addtok ( 90 , ( 
#line 873 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 126 ) , _auto__Xy_rtFI___global ) ) ; 

#line 873 "../../src/lex.c"
{ 
#line 873 "../../src/lex.c"
return ; 
} } 
#line 873 "../../src/lex.c"
; 

#line 874 "../../src/lex.c"
case '+' : { 
#line 875 "../../src/lex.c"
addtok ( 95 , ( ( _auto__Xy_rtFI___global . __C10_t = 48 ) , _auto__Xy_rtFI___global ) ) ; 
#line 875 "../../src/lex.c"

#line 875 "../../src/lex.c"
{ 
#line 875 "../../src/lex.c"
return ; 
} } 
#line 875 "../../src/lex.c"
; 

#line 876 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 878 "../../src/lex.c"
{ 
#line 878 "../../src/lex.c"
addtok ( 54 , ( ( _auto__Xy_rtFI___global . __C10_t = 54 ) , _auto__Xy_rtFI___global ) ) ; 

#line 878 "../../src/lex.c"
{ 
#line 878 "../../src/lex.c"
return ; 
} } 
#line 878 "../../src/lex.c"
; 
} 
#line 880 "../../src/lex.c"
case 25 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 880 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 880 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 881 "../../src/lex.c"
{ 
#line 881 "../../src/lex.c"
case '=' : { 
#line 883 "../../src/lex.c"
addtok ( 90 , ( 
#line 883 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 127 ) , _auto__Xy_rtFI___global ) ) ; 

#line 883 "../../src/lex.c"
{ 
#line 883 "../../src/lex.c"
return ; 
} } 
#line 883 "../../src/lex.c"
; 

#line 884 "../../src/lex.c"
case '-' : { 
#line 885 "../../src/lex.c"
addtok ( 95 , ( ( _auto__Xy_rtFI___global . __C10_t = 49 ) , _auto__Xy_rtFI___global ) ) ; 
#line 885 "../../src/lex.c"

#line 885 "../../src/lex.c"
{ 
#line 885 "../../src/lex.c"
return ; 
} } 
#line 885 "../../src/lex.c"
; 

#line 886 "../../src/lex.c"
case '>' : { 
#line 887 "../../src/lex.c"
addtok ( 44 , ( ( _auto__Xy_rtFI___global . __C10_t = 44 ) , _auto__Xy_rtFI___global ) ) ; 
#line 887 "../../src/lex.c"

#line 887 "../../src/lex.c"
{ 
#line 887 "../../src/lex.c"
return ; 
} } 
#line 887 "../../src/lex.c"
; 

#line 888 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 890 "../../src/lex.c"
{ 
#line 890 "../../src/lex.c"
addtok ( 55 , ( ( _auto__Xy_rtFI___global . __C10_t = 55 ) , _auto__Xy_rtFI___global ) ) ; 

#line 890 "../../src/lex.c"
{ 
#line 890 "../../src/lex.c"
return ; 
} } 
#line 890 "../../src/lex.c"
; 
} 
#line 892 "../../src/lex.c"
case 26 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 892 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 892 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 893 "../../src/lex.c"
{ 
#line 893 "../../src/lex.c"
case '=' : { 
#line 895 "../../src/lex.c"
addtok ( 90 , ( 
#line 895 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 128 ) , _auto__Xy_rtFI___global ) ) ; 

#line 895 "../../src/lex.c"
{ 
#line 895 "../../src/lex.c"
return ; 
} } 
#line 895 "../../src/lex.c"
; 

#line 896 "../../src/lex.c"
case '/' : errorFI_PC__E ( ( int ) 'w' , ( char * ) "*/ not as end of comment") ; 

#line 898 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 900 "../../src/lex.c"
{ 
#line 900 "../../src/lex.c"
addtok ( 50 , ( ( _auto__Xy_rtFI___global . __C10_t = 50 ) , _auto__Xy_rtFI___global ) ) ; 

#line 900 "../../src/lex.c"
{ 
#line 900 "../../src/lex.c"
return ; 
} } 
#line 900 "../../src/lex.c"
; 
} 
#line 902 "../../src/lex.c"
case 23 : switch ( _auto_lxchar = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 902 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 902 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 903 "../../src/lex.c"
{ 
#line 903 "../../src/lex.c"
case '=' : { 
#line 905 "../../src/lex.c"
addtok ( 90 , ( 
#line 905 "../../src/lex.c"
( _auto__Xy_rtFI___global . __C10_t = 130 ) , _auto__Xy_rtFI___global ) ) ; 

#line 905 "../../src/lex.c"
{ 
#line 905 "../../src/lex.c"
return ; 
} } 
#line 905 "../../src/lex.c"
; 

#line 906 "../../src/lex.c"
default : saved = _auto_lxchar ; 

#line 908 "../../src/lex.c"
{ 
#line 908 "../../src/lex.c"
addtok ( 93 , ( ( _auto__Xy_rtFI___global . __C10_t = 53 ) , _auto__Xy_rtFI___global ) ) ; 

#line 908 "../../src/lex.c"
{ 
#line 908 "../../src/lex.c"
return ; 
} } 
#line 908 "../../src/lex.c"
; 
} 
#line 910 "../../src/lex.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "lex act==%d getc()->%d", _auto_p , 
#line 910 "../../src/lex.c"
_auto_lxchar ) ; 
} 
#line 915 "../../src/lex.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "lex, main switch") ; 
} } ; 

#line 921 "../../src/lex.c"
extern int lxtitle ( ) 
#line 925 "../../src/lex.c"
{ 
#line 925 "../../src/lex.c"
int _auto__result ; 
register int _auto_c ; 
char * _auto_fn ; 

#line 928 "../../src/lex.c"
for ( ;;) switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 928 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 928 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 929 "../../src/lex.c"
{ 
#line 929 "../../src/lex.c"
default : { 
#line 931 "../../src/lex.c"
{ _auto__result = _auto_c ; 
#line 931 "../../src/lex.c"

#line 931 "../../src/lex.c"
return _auto__result ; 
} } 
#line 934 "../../src/lex.c"
case '\n' : curloc . _loc_line ++ ; 

#line 936 "../../src/lex.c"
Nline ++ ; 

#line 937 "../../src/lex.c"
break ; 

#line 938 "../../src/lex.c"
ll : break ; 

#line 940 "../../src/lex.c"
case '#' : curloc . _loc_line = 0 ; 

#line 942 "../../src/lex.c"
for ( ;;) switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 942 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 942 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 943 "../../src/lex.c"
{ 
#line 943 "../../src/lex.c"
case '"' : txtstart = txtfree ; 

#line 946 "../../src/lex.c"
for ( ;;) switch ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 
#line 946 "../../src/lex.c"
) ? ( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( 
#line 946 "../../src/lex.c"
( struct _iobuf * ) in_file ) ) ) 
#line 947 "../../src/lex.c"
{ 
#line 947 "../../src/lex.c"
case '"' : ( txtmax <= txtfree ) ? 
#line 947 "../../src/lex.c"
errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") : ( ( ( 
#line 947 "../../src/lex.c"
int ) ( ( * ( txtfree ++ ) ) = '\0' ) ) ) ; 
#line 947 "../../src/lex.c"

#line 950 "../../src/lex.c"
if ( ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? 
#line 950 "../../src/lex.c"
( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct 
#line 950 "../../src/lex.c"
_iobuf * ) in_file ) ) ) != '\n' ) 
#line 950 "../../src/lex.c"
errorFPC__E ( ( char * ) "unX eol on # line") ; 
#line 950 "../../src/lex.c"

#line 951 "../../src/lex.c"
if ( * txtstart ) { 
#line 951 "../../src/lex.c"
if ( curr_file == 0 ) goto push ; 

#line 954 "../../src/lex.c"
; 

#line 956 "../../src/lex.c"
if ( ( _auto_fn = ( file_name [ file_stack [ curr_file ] ] ) ) && ( strcmp ( 
#line 956 "../../src/lex.c"
txtstart , _auto_fn ) == 0 ) ) 
#line 957 "../../src/lex.c"
{ 
#line 957 "../../src/lex.c"
} else if ( ( _auto_fn = ( 
#line 957 "../../src/lex.c"
file_name [ file_stack [ curr_file - 1 ] ] ) ) && ( strcmp ( txtstart , _auto_fn ) == 0 
#line 957 "../../src/lex.c"
) ) 
#line 961 "../../src/lex.c"
{ 
#line 961 "../../src/lex.c"
curr_file -- ; 
} else 
#line 965 "../../src/lex.c"
{ 
#line 965 "../../src/lex.c"
push : if ( 508< ( Nfile ++ ) ) errorFI_PC__E ( ( int 
#line 965 "../../src/lex.c"
) 'i' , ( char * ) "fileN buffer overflow") ; 

#line 968 "../../src/lex.c"
if ( 127 < ( curr_file ++ ) ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 968 "../../src/lex.c"
* ) "fileN stack overflow") ; 

#line 969 "../../src/lex.c"
( file_stack [ curr_file ] ) = Nfile ; 

#line 971 "../../src/lex.c"
{ 
#line 971 "../../src/lex.c"
char * _auto_p ; 

#line 971 "../../src/lex.c"
_auto_p = ( ( ( char * ) ( _new ( ( long ) ( ( 
#line 971 "../../src/lex.c"
txtfree - txtstart ) + 1 ) ) ) ) ) ; 

#line 972 "../../src/lex.c"
( ( strcpy ( _auto_p , txtstart ) ) ) ; 

#line 973 "../../src/lex.c"
( file_name [ Nfile ] ) = _auto_p ; 

#line 974 "../../src/lex.c"
Nstr ++ ; 
} } } else 
#line 977 "../../src/lex.c"
{ 
#line 977 "../../src/lex.c"
curr_file = 0 ; 
} 
#line 980 "../../src/lex.c"
txtfree = txtstart ; 

#line 981 "../../src/lex.c"
curloc . _loc_file = ( file_stack [ curr_file ] ) ; 

#line 982 "../../src/lex.c"
goto ll ; 

#line 983 "../../src/lex.c"
case '\n' : errorFPC__E ( ( char * ) "unX end of line on '# line'") ; 

#line 985 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 985 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 985 "../../src/lex.c"
) = _auto_c ) ) ) ; 
} 
#line 988 "../../src/lex.c"
case ' ' : break ; 

#line 990 "../../src/lex.c"
case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case '6' : 
#line 990 "../../src/lex.c"

#line 997 "../../src/lex.c"
case '7' : case '8' : case '9' : curloc . _loc_line = ( ( ( curloc . _loc_line * 10 ) 
#line 997 "../../src/lex.c"
+ _auto_c ) - '0' ) ; 

#line 1001 "../../src/lex.c"
break ; 

#line 1002 "../../src/lex.c"
default : ( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * 
#line 1002 "../../src/lex.c"
) "input buffer overflow") : ( ( ( int ) ( ( * ( txtfree ++ ) 
#line 1002 "../../src/lex.c"
) = '#' ) ) ) ; 

#line 1004 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 1004 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 1004 "../../src/lex.c"
'i' ) ) ) ; 

#line 1005 "../../src/lex.c"
while ( ( _auto_c = ( ( ( -- in_file -> __iobuf__cnt ) >= 0 ) ? 
#line 1005 "../../src/lex.c"
( ( * ( in_file -> __iobuf__ptr ++ ) ) & 0377 ) : _filbuf ( ( struct 
#line 1005 "../../src/lex.c"
_iobuf * ) in_file ) ) ) != '\n' ) 
#line 1005 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int 
#line 1005 "../../src/lex.c"
) 'i' , ( char * ) "input buffer overflow") : ( ( ( int ) ( 
#line 1005 "../../src/lex.c"
( * ( txtfree ++ ) ) = _auto_c ) ) ) ; 

#line 1006 "../../src/lex.c"
( txtmax <= txtfree ) ? errorFI_PC__E ( ( int ) 'i' , ( char * ) "input buffer overflow") 
#line 1006 "../../src/lex.c"
: ( ( ( int ) ( ( * ( txtfree ++ ) ) = 
#line 1006 "../../src/lex.c"
'\0' ) ) ) ; 

#line 1007 "../../src/lex.c"
fprintf ( ( struct _iobuf * ) out_file , ( char * ) "\n%s\n", txtstart ) ; 

#line 1008 "../../src/lex.c"
curloc . _loc_line ++ ; 

#line 1009 "../../src/lex.c"
Nline ++ ; 

#line 1010 "../../src/lex.c"
goto ll ; 

#line 1011 "../../src/lex.c"
case '\n' : _loc_putline ( ( struct loc * ) ( & curloc ) ) ; 

#line 1013 "../../src/lex.c"
goto ll ; 
} } } ; 

/* the end */
