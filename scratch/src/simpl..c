#line 1 "../../src/simpl.c"

/* <<cfront 10/10/85>> */
/* < ../../src/simpl.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/simpl.c"
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

#line 13 "../../incl/ctype.h"
extern char _ctype [ ] ; 

#line 32 "../../incl/ctype.h"
extern int toupper ( ) ; 

#line 33 "../../incl/ctype.h"
extern int tolower ( ) ; 

#line 34 "../../src/simpl.c"
Pname new_fct ; 

#line 35 "../../src/simpl.c"
Pname del_fct ; 

#line 36 "../../src/simpl.c"
Pname vec_new_fct ; 

#line 37 "../../src/simpl.c"
Pname vec_del_fct ; 

#line 38 "../../src/simpl.c"
Pstmt del_list ; 

#line 39 "../../src/simpl.c"
Pstmt block_del_list ; 

#line 40 "../../src/simpl.c"
Pname ret_var ; 

#line 41 "../../src/simpl.c"
bit not_inl ; 

#line 42 "../../src/simpl.c"
Pname curr_fct ; 

#line 43 "../../src/simpl.c"
Pexpr init_list ; 

#line 44 "../../src/simpl.c"
Pexpr one ; 

#line 47 "../../src/simpl.c"
int simpl_init ( ) 
#line 48 "../../src/simpl.c"
{ 
#line 48 "../../src/simpl.c"
Pname _auto_nw ; 
Pname _auto_dl ; 
Pname _auto_vn ; 
Pname _auto_vd ; 
Pname _auto_a ; 
Pname _auto_al ; 

#line 49 "../../src/simpl.c"
_auto_nw = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 49 "../../src/simpl.c"
* ) oper_name ( 23 ) ) ; 

#line 50 "../../src/simpl.c"
_auto_dl = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 50 "../../src/simpl.c"
* ) oper_name ( 9 ) ) ; 

#line 51 "../../src/simpl.c"
_auto_vn = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 51 "../../src/simpl.c"
* ) "_vec_new") ; 

#line 52 "../../src/simpl.c"
_auto_vd = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 52 "../../src/simpl.c"
* ) "_vec_delete") ; 

#line 54 "../../src/simpl.c"
new_fct = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_nw , ( int 
#line 54 "../../src/simpl.c"
) 0 ) ; 

#line 55 "../../src/simpl.c"
_name__dtor ( ( struct name * ) _auto_nw , 1) ; 

#line 56 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 56 "../../src/simpl.c"
* ) 0 ) ; 

#line 57 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) long_type ; 

#line 58 "../../src/simpl.c"
new_fct -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 58 "../../src/simpl.c"
struct type * ) Pvoid_type , ( struct name * ) _auto_a , 1 ) ; 

#line 59 "../../src/simpl.c"
new_fct -> _name_n_scope = 14 ; 

#line 60 "../../src/simpl.c"
new_fct -> _node_permanent = 1 ; 

#line 61 "../../src/simpl.c"
new_fct -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 62 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) new_fct ) -> _name_n_used ++ ; 
} 
#line 63 "../../src/simpl.c"
_name_dcl_print ( ( struct name * ) new_fct , ( int ) 0 ) ; 

#line 65 "../../src/simpl.c"
del_fct = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_dl , ( int 
#line 65 "../../src/simpl.c"
) 0 ) ; 

#line 66 "../../src/simpl.c"
_name__dtor ( ( struct name * ) _auto_dl , 1) ; 

#line 67 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 67 "../../src/simpl.c"
* ) 0 ) ; 

#line 68 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = Pvoid_type ; 

#line 69 "../../src/simpl.c"
del_fct -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 69 "../../src/simpl.c"
struct type * ) void_type , ( struct name * ) _auto_a , 1 ) ; 

#line 70 "../../src/simpl.c"
del_fct -> _name_n_scope = 14 ; 

#line 71 "../../src/simpl.c"
del_fct -> _node_permanent = 1 ; 

#line 72 "../../src/simpl.c"
del_fct -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 73 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) del_fct ) -> _name_n_used ++ ; 
} 
#line 74 "../../src/simpl.c"
_name_dcl_print ( ( struct name * ) del_fct , ( int ) 0 ) ; 

#line 76 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 76 "../../src/simpl.c"
* ) 0 ) ; 

#line 77 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = Pvoid_type ; 

#line 78 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 79 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 79 "../../src/simpl.c"
* ) 0 ) ; 

#line 80 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 81 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 82 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 83 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 83 "../../src/simpl.c"
* ) 0 ) ; 

#line 84 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 85 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 86 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 87 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 87 "../../src/simpl.c"
* ) 0 ) ; 

#line 88 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = Pvoid_type ; 

#line 89 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 90 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 92 "../../src/simpl.c"
vec_new_fct = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_vn , ( int 
#line 92 "../../src/simpl.c"
) 0 ) ; 

#line 93 "../../src/simpl.c"
_name__dtor ( ( struct name * ) _auto_vn , 1) ; 

#line 94 "../../src/simpl.c"
vec_new_fct -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 94 "../../src/simpl.c"
struct type * ) Pvoid_type , ( struct name * ) _auto_al , 1 ) ; 

#line 95 "../../src/simpl.c"
vec_new_fct -> _name_n_scope = 14 ; 

#line 96 "../../src/simpl.c"
vec_new_fct -> _node_permanent = 1 ; 

#line 97 "../../src/simpl.c"
vec_new_fct -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 98 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) vec_new_fct ) -> _name_n_used ++ ; 
} 
#line 99 "../../src/simpl.c"
_name_dcl_print ( ( struct name * ) vec_new_fct , ( int ) 0 ) ; 

#line 101 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 101 "../../src/simpl.c"
* ) 0 ) ; 

#line 102 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 103 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 104 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 104 "../../src/simpl.c"
* ) 0 ) ; 

#line 105 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = Pvoid_type ; 

#line 106 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 107 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 108 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 108 "../../src/simpl.c"
* ) 0 ) ; 

#line 109 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 110 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 111 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 112 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 112 "../../src/simpl.c"
* ) 0 ) ; 

#line 113 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 114 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 115 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 116 "../../src/simpl.c"
_auto_a = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 116 "../../src/simpl.c"
* ) 0 ) ; 

#line 117 "../../src/simpl.c"
_auto_a -> _expr__O2.__C2_tp = Pvoid_type ; 

#line 118 "../../src/simpl.c"
_auto_a -> _name_n_list = _auto_al ; 

#line 119 "../../src/simpl.c"
_auto_al = _auto_a ; 

#line 121 "../../src/simpl.c"
vec_del_fct = _table_insert ( ( struct table * ) gtbl , ( struct name * ) _auto_vd , ( int 
#line 121 "../../src/simpl.c"
) 0 ) ; 

#line 122 "../../src/simpl.c"
_name__dtor ( ( struct name * ) _auto_vd , 1) ; 

#line 123 "../../src/simpl.c"
vec_del_fct -> _expr__O2.__C2_tp = ( struct type * ) _fct__ctor ( ( struct fct * ) 0 , ( 
#line 123 "../../src/simpl.c"
struct type * ) void_type , ( struct name * ) _auto_al , 1 ) ; 

#line 124 "../../src/simpl.c"
vec_del_fct -> _name_n_scope = 14 ; 

#line 125 "../../src/simpl.c"
vec_del_fct -> _node_permanent = 1 ; 

#line 126 "../../src/simpl.c"
vec_del_fct -> _expr__O2.__C2_tp -> _node_permanent = 1 ; 

#line 127 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) vec_del_fct ) -> _name_n_used ++ ; 
} 
#line 128 "../../src/simpl.c"
_name_dcl_print ( ( struct name * ) vec_del_fct , ( int ) 0 ) ; 

#line 130 "../../src/simpl.c"
one = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 130 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( 1 ) ) ) , 
#line 130 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 131 "../../src/simpl.c"
one -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 132 "../../src/simpl.c"
one -> _node_permanent = 1 ; 
} ; 

#line 135 "../../src/simpl.c"
Ptable scope ; 

#line 136 "../../src/simpl.c"
Pname expand_fn ; 

#line 137 "../../src/simpl.c"
Ptable expand_tbl ; 

#line 139 "../../src/simpl.c"
Pname _classdef_has_oper ( _auto_this , _auto_op ) register struct classdef * _auto_this ; 
int _auto_op ; 

#line 140 "../../src/simpl.c"
{ 
#line 140 "../../src/simpl.c"
Pname _auto__result ; 
char * _auto_s ; 
Pname _auto_n ; 

#line 141 "../../src/simpl.c"
_auto_s = oper_name ( _auto_op ) ; 

#line 143 "../../src/simpl.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 143 "../../src/simpl.c"
"0->has_oper(%s)", _auto_s ) ; 

#line 144 "../../src/simpl.c"
_auto_n = _table_lookc ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_s , ( int ) 0 ) 
#line 144 "../../src/simpl.c"
; 

#line 145 "../../src/simpl.c"
if ( _auto_n == 0 ) { 
#line 145 "../../src/simpl.c"
{ _auto__result = 0 ; 

#line 145 "../../src/simpl.c"
return _auto__result ; 
} } 
#line 146 "../../src/simpl.c"
switch ( _auto_n -> _name_n_scope ) { 
#line 146 "../../src/simpl.c"
case 0 : case 25 : { 
#line 148 "../../src/simpl.c"
{ 
#line 148 "../../src/simpl.c"

#line 148 "../../src/simpl.c"
_auto__result = _auto_n ; 

#line 148 "../../src/simpl.c"
return _auto__result ; 
} } 
#line 149 "../../src/simpl.c"
default : { 
#line 149 "../../src/simpl.c"
{ _auto__result = 0 ; 

#line 149 "../../src/simpl.c"
return _auto__result ; 
} } } } ; 

#line 153 "../../src/simpl.c"
int no_of_returns = 0 ; 

#line 155 "../../src/simpl.c"
int _name_simpl ( _auto_this ) register struct name * _auto_this ; 

#line 156 "../../src/simpl.c"
{ 
#line 156 "../../src/simpl.c"
if ( _auto_this -> _node_base == 25 ) { 
#line 157 "../../src/simpl.c"
return ; 
} 
#line 159 "../../src/simpl.c"
if ( _auto_this -> _expr__O2.__C2_tp == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char 
#line 159 "../../src/simpl.c"
* ) "%n->name.simple(tp==0)", _auto_this ) ; 

#line 161 "../../src/simpl.c"
switch ( _auto_this -> _expr__O2.__C2_tp -> _node_base ) { 
#line 161 "../../src/simpl.c"
case 0 : errorFI_PC__E ( ( int ) 'i' , 
#line 161 "../../src/simpl.c"
( char * ) "%n->name.simpl(tp->base==0)", _auto_this ) ; 

#line 165 "../../src/simpl.c"
case 76 : { 
#line 166 "../../src/simpl.c"
Plist _auto_gl ; 

#line 167 "../../src/simpl.c"
for ( _auto_gl = ( ( ( struct gen * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) 
#line 167 "../../src/simpl.c"
-> _gen_fct_list ;_auto_gl ;( _auto_gl = _auto_gl -> _name_list_l ) ) 
#line 167 "../../src/simpl.c"
_name_simpl ( ( struct name * ) _auto_gl -> _name_list_f ) ; 
#line 167 "../../src/simpl.c"

#line 168 "../../src/simpl.c"
break ; 
} 
#line 171 "../../src/simpl.c"
case 108 : { 
#line 172 "../../src/simpl.c"
Pfct _auto_f ; 
Pname _auto_n ; 
Pname _auto_th ; 

#line 172 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_this -> _expr__O2.__C2_tp ) ) ) ; 

#line 174 "../../src/simpl.c"
_auto_th = _auto_f -> _fct_f_this ; 

#line 176 "../../src/simpl.c"
if ( _auto_th ) { 
#line 176 "../../src/simpl.c"
_auto_th -> _name_n_list = _auto_f -> _fct_argtype ; 

#line 178 "../../src/simpl.c"
if ( _auto_this -> _name_n_oper == 161 ) _auto_f -> _fct_s_returns = _auto_th -> _expr__O2.__C2_tp ; 
} 
#line 181 "../../src/simpl.c"
if ( _auto_this -> _expr__O2.__C2_tp -> _type_defined & -2) { 
#line 181 "../../src/simpl.c"
return ; 
} 
#line 184 "../../src/simpl.c"
for ( _auto_n = ( _auto_th ? _auto_th : _auto_f -> _fct_argtype ) ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) 
#line 184 "../../src/simpl.c"

#line 184 "../../src/simpl.c"
_name_simpl ( ( struct name * ) _auto_n ) ; 

#line 186 "../../src/simpl.c"
if ( _auto_f -> _fct_body ) { 
#line 186 "../../src/simpl.c"
Ptable _auto_oscope ; 

#line 187 "../../src/simpl.c"
_auto_oscope = scope ; 

#line 188 "../../src/simpl.c"
scope = _auto_f -> _fct_body -> _stmt_memtbl ; 

#line 189 "../../src/simpl.c"
if ( scope == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 189 "../../src/simpl.c"
"%n memtbl missing", _auto_this ) ; 

#line 190 "../../src/simpl.c"
curr_fct = ( struct name * ) _auto_this ; 

#line 191 "../../src/simpl.c"
_fct_simpl ( ( struct fct * ) _auto_f ) ; 

#line 192 "../../src/simpl.c"
if ( _auto_f -> _fct_f_inline && ( debug == 0 ) ) { 
#line 192 "../../src/simpl.c"
if ( 8<= _auto_f -> 
#line 192 "../../src/simpl.c"
_fct_nargs ) 
#line 193 "../../src/simpl.c"
{ 
#line 193 "../../src/simpl.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "too many arguments for inline%n (inline ignored)", _auto_this ) ; 
#line 193 "../../src/simpl.c"

#line 195 "../../src/simpl.c"
_auto_f -> _fct_f_inline = 0 ; 

#line 196 "../../src/simpl.c"
scope = _auto_oscope ; 

#line 197 "../../src/simpl.c"
break ; 
} 
#line 199 "../../src/simpl.c"
{ 
#line 199 "../../src/simpl.c"
int _auto_i ; 

#line 199 "../../src/simpl.c"
_auto_i = 0 ; 

#line 200 "../../src/simpl.c"
for ( _auto_n = ( _auto_th ? _auto_th : _auto_f -> _fct_argtype ) ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 200 "../../src/simpl.c"

#line 200 "../../src/simpl.c"

#line 201 "../../src/simpl.c"
_auto_n -> _node_base = 169 ; 

#line 202 "../../src/simpl.c"
_auto_n -> _name_n_val = ( _auto_i ++ ) ; 

#line 203 "../../src/simpl.c"
if ( _auto_n -> _expr__O5.__C5_n_table != scope ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 203 "../../src/simpl.c"
"%s %d %d\n", _auto_n -> _expr__O3.__C3_string , _auto_n -> _expr__O5.__C5_n_table , scope ) ; 
} 
#line 205 "../../src/simpl.c"
expand_tbl = ( ( ( _auto_f -> _fct_returns -> _node_base != 38 ) || ( _auto_this -> _name_n_oper == 161 ) 
#line 205 "../../src/simpl.c"
) ? scope : ( ( ( struct table * ) ( 0 ) ) ) 
#line 205 "../../src/simpl.c"
) ; 

#line 206 "../../src/simpl.c"
expand_fn = ( struct name * ) _auto_this ; 

#line 207 "../../src/simpl.c"
if ( expand_tbl ) { 
#line 207 "../../src/simpl.c"
Pexpr _auto_ee ; 

#line 209 "../../src/simpl.c"
_auto_ee = ( ( ( struct expr * ) ( _stmt_expand ( ( struct stmt * ) _auto_f -> 
#line 209 "../../src/simpl.c"
_fct_body ) ) ) ) ; 

#line 211 "../../src/simpl.c"
_auto_f -> _fct_f_expr = ( ( _auto_ee -> _node_base == 71 ) ? _auto_ee : _expr__ctor ( ( struct expr * ) 
#line 211 "../../src/simpl.c"
0 , 71 , ( struct expr * ) zero , ( struct expr * ) _auto_ee ) ) 
#line 211 "../../src/simpl.c"
; 
} else 
#line 214 "../../src/simpl.c"
{ 
#line 214 "../../src/simpl.c"
_auto_f -> _fct_f_expr = 0 ; 

#line 216 "../../src/simpl.c"
_auto_f -> _fct_body = ( ( ( struct block * ) ( _stmt_expand ( ( struct stmt * ) 
#line 216 "../../src/simpl.c"
_auto_f -> _fct_body ) ) ) ) ; 
} 
#line 218 "../../src/simpl.c"
expand_fn = 0 ; 

#line 219 "../../src/simpl.c"
expand_tbl = 0 ; 
} } 
#line 221 "../../src/simpl.c"
scope = _auto_oscope ; 
} 
#line 223 "../../src/simpl.c"
break ; 
} 
#line 226 "../../src/simpl.c"
case 6 : _classdef_simpl ( ( struct classdef * ) ( ( ( struct classdef * ) 
#line 226 "../../src/simpl.c"
( _auto_this -> _expr__O2.__C2_tp ) ) ) ) ; 

#line 228 "../../src/simpl.c"
break ; 

#line 234 "../../src/simpl.c"
default : break ; 
} 
#line 239 "../../src/simpl.c"
if ( _auto_this -> _expr__O4.__C4_n_initializer ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_n_initializer ) ; 

#line 240 "../../src/simpl.c"
_auto_this -> _expr__O2.__C2_tp -> _type_defined |= 02 ; 
} ; 

#line 243 "../../src/simpl.c"
int _fct_simpl ( _auto_this ) register struct fct * _auto_this ; 

#line 265 "../../src/simpl.c"
{ 
#line 265 "../../src/simpl.c"
Pexpr _auto_th ; 
Ptable _auto_tbl ; 
Pstmt _auto_ss ; 
Pstmt _auto_tail ; 
Pname _auto_cln ; 
Pclass _auto_cl ; 
Pstmt _auto_dtail ; 
int _auto_ass_count ; 

#line 266 "../../src/simpl.c"
_auto_th = ( struct expr * ) _auto_this -> _fct_f_this ; 

#line 267 "../../src/simpl.c"
_auto_tbl = _auto_this -> _fct_body -> _stmt_memtbl ; 

#line 268 "../../src/simpl.c"
_auto_ss = 0 ; 

#line 272 "../../src/simpl.c"
_auto_dtail = 0 ; 

#line 274 "../../src/simpl.c"
not_inl = ( debug || ( _auto_this -> _fct_f_inline == 0 ) ) ; 

#line 275 "../../src/simpl.c"
ret_var = _table_look ( ( struct table * ) _auto_tbl , ( char * ) "_result", ( int 
#line 275 "../../src/simpl.c"
) 0 ) ; 

#line 276 "../../src/simpl.c"
if ( ret_var && ( not_inl == 0 ) ) ret_var -> _name_n_used = ( ret_var -> _name_n_assigned_to = ( 
#line 276 "../../src/simpl.c"
ret_var -> _name_n_addr_taken = 0 ) ) ; 

#line 278 "../../src/simpl.c"
del_list = 0 ; 

#line 279 "../../src/simpl.c"
block_del_list = 0 ; 

#line 280 "../../src/simpl.c"
scope = _auto_tbl ; 

#line 281 "../../src/simpl.c"
if ( scope == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 281 "../../src/simpl.c"
"fct.simpl()") ; 

#line 283 "../../src/simpl.c"
if ( _auto_th ) { 
#line 283 "../../src/simpl.c"
Pptr _auto_p ; 

#line 284 "../../src/simpl.c"
_auto_p = ( ( ( struct ptr * ) ( _auto_th -> _expr__O2.__C2_tp ) ) ) ; 

#line 285 "../../src/simpl.c"
_auto_cln = ( ( ( struct basetype * ) ( _auto_p -> _ptr_typ ) ) ) -> _basetype_b_name ; 
#line 285 "../../src/simpl.c"

#line 286 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 
} 
#line 289 "../../src/simpl.c"
if ( curr_fct -> _name_n_oper == 162 ) { 
#line 289 "../../src/simpl.c"
Pexpr _auto_ee ; 
Pstmt _auto_es ; 
struct ifstmt * _auto_ifs ; 
Pname _auto_bcln ; 
Pclass _auto_bcl ; 
Pname _auto_d ; 
Pname _auto_fa ; 
Pname _auto_free_arg ; 
Ptable _auto_tbl ; 
int _auto_i ; 
Pname _auto_m ; 
struct ifstmt * _auto__Xthis__ctor_ifstmt ; 

#line 293 "../../src/simpl.c"
_auto_bcln = _auto_cl -> _classdef_clbase ; 

#line 297 "../../src/simpl.c"
_auto_fa = ( struct name * ) _name__ctor ( ( struct name * ) 0 , ( char 
#line 297 "../../src/simpl.c"
* ) "_free") ; 

#line 298 "../../src/simpl.c"
_auto_fa -> _expr__O2.__C2_tp = ( struct type * ) int_type ; 

#line 299 "../../src/simpl.c"
_auto_free_arg = _name_dcl ( ( struct name * ) _auto_fa , ( struct table * ) _auto_this -> _fct_body -> _stmt_memtbl , 
#line 299 "../../src/simpl.c"
136 ) ; 

#line 300 "../../src/simpl.c"
_name__dtor ( ( struct name * ) _auto_fa , 1) ; 

#line 301 "../../src/simpl.c"
_auto_this -> _fct_f_this -> _name_n_list = _auto_free_arg ; 

#line 303 "../../src/simpl.c"
_auto_tbl = _auto_cl -> _classdef_memtbl ; 

#line 303 "../../src/simpl.c"
; 

#line 303 "../../src/simpl.c"
; 

#line 308 "../../src/simpl.c"
for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_m ;( _auto_m = _table_get_mem ( 
#line 308 "../../src/simpl.c"
( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 308 "../../src/simpl.c"
{ 
#line 308 "../../src/simpl.c"
Ptype _auto_t ; 
Pname _auto_cn ; 
Pclass _auto_cl ; 
Pname _auto_dtor ; 

#line 309 "../../src/simpl.c"
_auto_t = _auto_m -> _expr__O2.__C2_tp ; 

#line 313 "../../src/simpl.c"
if ( _auto_m -> _name_n_stclass == 31 ) continue ; 

#line 315 "../../src/simpl.c"
if ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_t ) ) { 
#line 315 "../../src/simpl.c"
_auto_cl = ( ( 
#line 315 "../../src/simpl.c"
( struct classdef * ) ( _auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 317 "../../src/simpl.c"
if ( _auto_dtor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 317 "../../src/simpl.c"
_auto_cl ) -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) 
#line 317 "../../src/simpl.c"
) 
#line 317 "../../src/simpl.c"
{ 
#line 317 "../../src/simpl.c"
Pexpr _auto_aa ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 319 "../../src/simpl.c"
_auto_aa = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 319 "../../src/simpl.c"
struct expr * ) zero , ( struct expr * ) 0 ) ; 

#line 320 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 320 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 320 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , 
#line 320 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 320 "../../src/simpl.c"
( struct name * ) _auto_m ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 321 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 321 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 321 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_ee ) , 
#line 321 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 321 "../../src/simpl.c"
( struct name * ) _auto_dtor ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 322 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 322 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 322 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_ee ) , 
#line 322 "../../src/simpl.c"
( ( struct expr * ) _auto_aa ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 323 "../../src/simpl.c"
_auto_ee -> _expr__O5.__C5_fct_name = _auto_dtor ; 

#line 324 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 325 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 325 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 325 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 325 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 325 "../../src/simpl.c"
_auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 326 "../../src/simpl.c"
if ( _auto_dtail ) _auto_dtail -> _stmt_s_list = _auto_es ; 
else 
#line 329 "../../src/simpl.c"
del_list = _auto_es ; 

#line 330 "../../src/simpl.c"
_auto_dtail = _auto_es ; 
} } else 
#line 333 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 333 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) 
#line 333 "../../src/simpl.c"
( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 335 "../../src/simpl.c"
if ( _auto_dtor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 335 "../../src/simpl.c"
_auto_cl ) -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) 
#line 335 "../../src/simpl.c"
) 
#line 335 "../../src/simpl.c"
{ 
#line 335 "../../src/simpl.c"
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_mm ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 336 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 337 "../../src/simpl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 337 "../../src/simpl.c"
( struct expr * ) ( _type_tsizeof ( ( struct type * ) _auto_t ) / _auto_esz ) ) 
#line 337 "../../src/simpl.c"
, ( struct expr * ) 0 ) ; 

#line 338 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 338 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 338 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 339 "../../src/simpl.c"
_auto_mm = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 339 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 339 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , 
#line 339 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 339 "../../src/simpl.c"
( struct name * ) _auto_m ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 340 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 340 "../../src/simpl.c"
struct expr * ) _auto_dtor , ( struct expr * ) zero ) ; 

#line 341 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_dtor , 112 ) ; 

#line 342 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 342 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 343 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 343 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 344 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 344 "../../src/simpl.c"
struct expr * ) _auto_mm , ( struct expr * ) _auto_arg ) ; 

#line 345 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 345 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 345 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_del_fct ) , 
#line 345 "../../src/simpl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 346 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 346 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 346 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 346 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 346 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 346 "../../src/simpl.c"
_auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 347 "../../src/simpl.c"
if ( _auto_dtail ) _auto_dtail -> _stmt_s_list = _auto_es ; 
else 
#line 350 "../../src/simpl.c"
del_list = _auto_es ; 

#line 351 "../../src/simpl.c"
_auto_dtail = _auto_es ; 
} } } 
#line 357 "../../src/simpl.c"
if ( ( _auto_bcln && ( _auto_bcl = ( ( ( struct classdef * 
#line 357 "../../src/simpl.c"
) ( _auto_bcln -> _expr__O2.__C2_tp ) ) ) ) ) && ( _auto_d = ( _table_look ( ( 
#line 357 "../../src/simpl.c"
struct table * ) ( ( struct classdef * ) _auto_bcl ) -> _classdef_memtbl , ( char * 
#line 357 "../../src/simpl.c"
) "_dtor", ( int ) 0 ) ) ) ) 
#line 359 "../../src/simpl.c"
{ 
#line 359 "../../src/simpl.c"
Pexpr _auto_aa ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 360 "../../src/simpl.c"
_auto_aa = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 360 "../../src/simpl.c"
struct expr * ) _auto_free_arg , ( struct expr * ) 0 ) ; 

#line 361 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 361 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 361 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , 
#line 361 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 361 "../../src/simpl.c"
( struct name * ) _auto_d ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 362 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 362 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 362 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_ee ) , 
#line 362 "../../src/simpl.c"
( ( struct expr * ) _auto_aa ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 364 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 365 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 365 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 365 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 365 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 365 "../../src/simpl.c"
_auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} else 
#line 367 "../../src/simpl.c"
{ 
#line 367 "../../src/simpl.c"
Pexpr _auto_aa ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 
struct ifstmt * _auto__Xthis__ctor_ifstmt ; 

#line 368 "../../src/simpl.c"
_auto_aa = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 368 "../../src/simpl.c"
struct expr * ) _auto_th , ( struct expr * ) 0 ) ; 

#line 369 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 369 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 369 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) del_fct ) , 
#line 369 "../../src/simpl.c"
( ( struct expr * ) _auto_aa ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 370 "../../src/simpl.c"
_auto_ee -> _expr__O5.__C5_fct_name = del_fct ; 

#line 371 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 372 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 372 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 372 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 372 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 372 "../../src/simpl.c"
_auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 373 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_ifstmt = 0 ) , ( ( ( 
#line 373 "../../src/simpl.c"
_auto__Xthis__ctor_ifstmt = 0 ) , ( _auto__Xthis__ctor_ifstmt = ( struct ifstmt * ) _stmt__ctor ( ( ( struct 
#line 373 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_ifstmt ) ) , 20 , curloc , ( ( struct stmt * ) _auto_es ) 
#line 373 "../../src/simpl.c"
) ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O8.__C8_e = ( ( struct expr * ) _auto_free_arg ) 
#line 373 "../../src/simpl.c"
) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O9.__C9_else_stmt = ( ( struct stmt * ) 0 ) ) 
#line 373 "../../src/simpl.c"
, _auto__Xthis__ctor_ifstmt ) ) ) ) ; 
} 
#line 375 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) _auto_free_arg ) -> _name_n_used ++ ; 
} 
#line 376 "../../src/simpl.c"
{ 
#line 561 "../../src/cfront.h"
( ( struct name * ) ( ( ( struct name * ) ( 
#line 561 "../../src/cfront.h"
_auto_th ) ) ) ) -> _name_n_used ++ ; 
} 
#line 377 "../../src/simpl.c"
if ( _auto_dtail ) _auto_dtail -> _stmt_s_list = _auto_es ; 
else 
#line 380 "../../src/simpl.c"
del_list = _auto_es ; 

#line 381 "../../src/simpl.c"
_auto_ifs = ( struct ifstmt * ) ( ( _auto__Xthis__ctor_ifstmt = 0 ) , ( ( ( 
#line 381 "../../src/simpl.c"
_auto__Xthis__ctor_ifstmt = 0 ) , ( _auto__Xthis__ctor_ifstmt = ( struct ifstmt * ) _stmt__ctor ( ( ( struct 
#line 381 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_ifstmt ) ) , 20 , curloc , ( ( struct stmt * ) del_list ) 
#line 381 "../../src/simpl.c"
) ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O8.__C8_e = ( ( struct expr * ) _auto_th ) 
#line 381 "../../src/simpl.c"
) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O9.__C9_else_stmt = ( ( struct stmt * ) 0 ) ) 
#line 381 "../../src/simpl.c"
, _auto__Xthis__ctor_ifstmt ) ) ) ) ; 

#line 390 "../../src/simpl.c"
del_list = ( struct stmt * ) _auto_ifs ; 

#line 392 "../../src/simpl.c"
if ( del_list ) _stmt_simpl ( ( struct stmt * ) del_list ) ; 
} 
#line 395 "../../src/simpl.c"
; 

#line 396 "../../src/simpl.c"
if ( curr_fct -> _name_n_oper == 161 ) { 
#line 396 "../../src/simpl.c"
Pexpr _auto_ee ; 
Ptable _auto_tbl ; 
Pname _auto_m ; 
int _auto_i ; 
Pname _auto_nn ; 

#line 398 "../../src/simpl.c"
_auto_tbl = _auto_cl -> _classdef_memtbl ; 

#line 406 "../../src/simpl.c"
if ( _auto_this -> _fct_b_init ) { 
#line 406 "../../src/simpl.c"
switch ( _auto_this -> _fct_b_init -> _node_base ) { 
#line 408 "../../src/simpl.c"
case 70 : case 
#line 408 "../../src/simpl.c"
71 : 
#line 411 "../../src/simpl.c"
break ; 

#line 412 "../../src/simpl.c"
default : { 
#line 413 "../../src/simpl.c"
Pcall _auto_cc ; 
Pname _auto_bn ; 
Pname _auto_tt ; 

#line 413 "../../src/simpl.c"
_auto_cc = ( ( ( struct call * ) ( _auto_this -> _fct_b_init ) ) ) ; 

#line 414 "../../src/simpl.c"
_auto_bn = _auto_cc -> _expr__O5.__C5_fct_name ; 

#line 415 "../../src/simpl.c"
_auto_tt = ( ( ( struct fct * ) ( _auto_bn -> _expr__O2.__C2_tp ) ) ) -> _fct_f_this ; 
#line 415 "../../src/simpl.c"

#line 416 "../../src/simpl.c"
_auto_ass_count = _auto_tt -> _name_n_assigned_to ; 

#line 417 "../../src/simpl.c"
_call_simpl ( ( struct call * ) _auto_cc ) ; 

#line 418 "../../src/simpl.c"
init_list = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 418 "../../src/simpl.c"
struct expr * ) _auto_th , ( struct expr * ) _auto_cc ) ; 
} } } else 
#line 422 "../../src/simpl.c"
{ 
#line 422 "../../src/simpl.c"
_auto_ass_count = 0 ; 

#line 424 "../../src/simpl.c"
init_list = 0 ; 
} 
#line 427 "../../src/simpl.c"
if ( _auto_cl -> _classdef_virt_count ) { 
#line 427 "../../src/simpl.c"
Pname _auto_vp ; 
Pexpr _auto_vtbl ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct text_expr * _auto__Xthis__ctor_text_expr ; 

#line 428 "../../src/simpl.c"
_auto_vp = _table_look ( ( struct table * ) _auto_cl -> _classdef_memtbl , ( char * ) "_vptr", ( 
#line 428 "../../src/simpl.c"
int ) 0 ) ; 

#line 429 "../../src/simpl.c"
_auto_vtbl = ( struct expr * ) ( ( _auto__Xthis__ctor_text_expr = 0 ) , ( ( _auto__Xthis__ctor_text_expr = 
#line 429 "../../src/simpl.c"
( struct text_expr * ) _new ( ( long ) 24) ) , ( ( _auto__Xthis__ctor_text_expr = 
#line 429 "../../src/simpl.c"
( struct text_expr * ) _expr__ctor ( ( ( struct expr * ) ( _auto__Xthis__ctor_text_expr ) ) , 
#line 429 "../../src/simpl.c"
165 , ( struct expr * ) 0 , ( struct expr * ) 0 ) ) 
#line 429 "../../src/simpl.c"
, ( ( _auto__Xthis__ctor_text_expr -> _expr__O3.__C3_string = _auto_cl -> _classdef_string ) , ( ( _auto__Xthis__ctor_text_expr -> _expr__O4.__C4_string2 = ( ( 
#line 429 "../../src/simpl.c"
char * ) "_vtbl") ) , _auto__Xthis__ctor_text_expr ) ) ) ) ) ; 

#line 430 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 430 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 430 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , 
#line 430 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 430 "../../src/simpl.c"
( struct name * ) _auto_vp ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 431 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 431 "../../src/simpl.c"
struct expr * ) _auto_ee , ( struct expr * ) _auto_vtbl ) ; 

#line 432 "../../src/simpl.c"
init_list = ( init_list ? _expr__ctor ( ( struct expr * ) 0 , 71 , ( struct expr * 
#line 432 "../../src/simpl.c"
) init_list , ( struct expr * ) _auto_ee ) : _auto_ee ) ; 
} 
#line 434 "../../src/simpl.c"
for ( _auto_nn = _auto_this -> _fct_f_init ;_auto_nn ;( _auto_nn = _auto_nn -> _name_n_list ) ) { 
#line 434 "../../src/simpl.c"
if ( _auto_nn -> 
#line 434 "../../src/simpl.c"
_expr__O4.__C4_n_initializer == 0 ) 
#line 435 "../../src/simpl.c"
continue ; 

#line 436 "../../src/simpl.c"
{ 
#line 436 "../../src/simpl.c"
Pname _auto_m ; 

#line 436 "../../src/simpl.c"
_auto_m = _table_look ( ( struct table * ) _auto_tbl , _auto_nn -> _expr__O3.__C3_string , ( int ) 0 ) 
#line 436 "../../src/simpl.c"
; 

#line 437 "../../src/simpl.c"
if ( _auto_m && ( _auto_m -> _expr__O5.__C5_n_table == _auto_tbl ) ) _auto_m -> _expr__O4.__C4_n_initializer = _auto_nn -> _expr__O4.__C4_n_initializer ; 
} } 
#line 440 "../../src/simpl.c"
for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_tbl , _auto_i = 1 ) ;_auto_m ;( 
#line 440 "../../src/simpl.c"
_auto_m = _table_get_mem ( ( struct table * ) _auto_tbl , ++ _auto_i ) ) ) 
#line 440 "../../src/simpl.c"
{ 
#line 440 "../../src/simpl.c"
Ptype _auto_t ; 
Pname _auto_cn ; 
Pclass _auto_cl ; 
Pname _auto_ctor ; 

#line 441 "../../src/simpl.c"
_auto_t = _auto_m -> _expr__O2.__C2_tp ; 

#line 446 "../../src/simpl.c"
switch ( _auto_m -> _name_n_stclass ) { 
#line 446 "../../src/simpl.c"
case 31 : case 13 : continue ; 
} 
#line 451 "../../src/simpl.c"
switch ( _auto_t -> _node_base ) { 
#line 451 "../../src/simpl.c"
case 108 : case 76 : case 6 : case 13 : 
#line 451 "../../src/simpl.c"

#line 456 "../../src/simpl.c"
continue ; 
} 
#line 458 "../../src/simpl.c"
if ( _auto_m -> _node_base == 25 ) continue ; 

#line 460 "../../src/simpl.c"
if ( _auto_cn = _type_is_cl_obj ( ( struct type * ) _auto_t ) ) { 
#line 460 "../../src/simpl.c"
Pexpr _auto_ee ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 

#line 461 "../../src/simpl.c"
_auto_ee = _auto_m -> _expr__O4.__C4_n_initializer ; 

#line 462 "../../src/simpl.c"
_auto_m -> _expr__O4.__C4_n_initializer = 0 ; 

#line 464 "../../src/simpl.c"
if ( _auto_ee == 0 ) { 
#line 464 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( 
#line 464 "../../src/simpl.c"
_auto_cn -> _expr__O2.__C2_tp ) ) ) ; 

#line 466 "../../src/simpl.c"
if ( _auto_ctor = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ) { 
#line 466 "../../src/simpl.c"
_auto_ee = ( struct 
#line 466 "../../src/simpl.c"
expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( _auto__Xthis__ctor_ref = 0 ) 
#line 466 "../../src/simpl.c"
, ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct expr * ) ( 
#line 466 "../../src/simpl.c"
_auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , ( struct expr * 
#line 466 "../../src/simpl.c"
) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( ( struct name * 
#line 466 "../../src/simpl.c"
) _auto_m ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 468 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 468 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 468 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_ee ) , 
#line 468 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 468 "../../src/simpl.c"
( struct name * ) _auto_ctor ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 469 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 469 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 469 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_ee ) , 
#line 469 "../../src/simpl.c"
( ( struct expr * ) 0 ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 
#line 469 "../../src/simpl.c"

#line 470 "../../src/simpl.c"
_auto_ee -> _expr__O5.__C5_fct_name = _auto_ctor ; 

#line 471 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 472 "../../src/simpl.c"
_auto_ee = _expr_typ ( ( struct expr * ) _auto_ee , ( struct table * ) _auto_tbl ) ; 
} else 
#line 473 "../../src/simpl.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * 
#line 473 "../../src/simpl.c"
) _auto_cl ) -> _classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) 
#line 473 "../../src/simpl.c"
) ) 
#line 473 "../../src/simpl.c"
{ 
#line 473 "../../src/simpl.c"
errorFPC__E ( ( char * ) "M%n needsIr (no default constructor forC %s)", _auto_m , _auto_cl -> _classdef_string ) ; 
} } 
#line 478 "../../src/simpl.c"
if ( _auto_ee ) { 
#line 478 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_ee ) ; 

#line 480 "../../src/simpl.c"
if ( init_list ) init_list = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 480 "../../src/simpl.c"
, 71 , ( struct expr * ) init_list , ( struct expr * ) _auto_ee ) ; 
else 
#line 483 "../../src/simpl.c"
init_list = _auto_ee ; 
} } else 
#line 486 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 486 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) 
#line 486 "../../src/simpl.c"
( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 488 "../../src/simpl.c"
if ( _auto_ctor = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ) { 
#line 488 "../../src/simpl.c"
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_mm ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 489 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 490 "../../src/simpl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 490 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _type_tsizeof ( ( struct type * 
#line 490 "../../src/simpl.c"
) _auto_t ) / _auto_esz ) ) ) , ( struct expr * ) 0 ) ; 
#line 490 "../../src/simpl.c"

#line 491 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 491 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 491 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 492 "../../src/simpl.c"
_auto_mm = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 492 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 492 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_th ) , 
#line 492 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 492 "../../src/simpl.c"
( struct name * ) _auto_m ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 493 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 493 "../../src/simpl.c"
struct expr * ) _auto_ctor , ( struct expr * ) 0 ) ; 

#line 495 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_ctor , 112 ) ; 

#line 496 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 496 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 497 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 497 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 498 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 498 "../../src/simpl.c"
struct expr * ) _auto_mm , ( struct expr * ) _auto_arg ) ; 

#line 499 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 499 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 499 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_new_fct ) , 
#line 499 "../../src/simpl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 500 "../../src/simpl.c"
_auto_ee -> _expr__O5.__C5_fct_name = vec_new_fct ; 

#line 501 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 503 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_ee ) ; 

#line 504 "../../src/simpl.c"
if ( init_list ) init_list = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 504 "../../src/simpl.c"
, 71 , ( struct expr * ) init_list , ( struct expr * ) _auto_ee ) ; 
else 
#line 508 "../../src/simpl.c"
init_list = _auto_ee ; 
} else 
#line 510 "../../src/simpl.c"
if ( ( _table_look ( ( struct table * ) ( ( struct classdef * 
#line 510 "../../src/simpl.c"
) _auto_cl ) -> _classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) 
#line 510 "../../src/simpl.c"
) ) 
#line 510 "../../src/simpl.c"
{ 
#line 510 "../../src/simpl.c"
errorFPC__E ( ( char * ) "M%n[] needsIr (no default constructor forC %s)", _auto_m , _auto_cl -> _classdef_string ) ; 
} } else 
#line 514 "../../src/simpl.c"
if ( _auto_m -> _expr__O4.__C4_n_initializer ) { 
#line 514 "../../src/simpl.c"
if ( init_list ) init_list = ( struct 
#line 514 "../../src/simpl.c"
expr * ) _expr__ctor ( ( struct expr * ) 0 , 71 , ( struct expr * ) 
#line 514 "../../src/simpl.c"
init_list , ( struct expr * ) _auto_m -> _expr__O4.__C4_n_initializer ) ; 
else 
#line 520 "../../src/simpl.c"
init_list = _auto_m -> _expr__O4.__C4_n_initializer ; 

#line 521 "../../src/simpl.c"
_auto_m -> _expr__O4.__C4_n_initializer = 0 ; 
} else 
#line 523 "../../src/simpl.c"
if ( _type_is_ref ( ( struct type * ) _auto_t ) ) { 
#line 523 "../../src/simpl.c"
errorFPC__E ( ( 
#line 523 "../../src/simpl.c"
char * ) "referenceM%n needsIr", _auto_m ) ; 
} else 
#line 526 "../../src/simpl.c"
if ( _type_tconst ( ( struct type * ) _auto_t ) && ( vec_const == 0 
#line 526 "../../src/simpl.c"
) ) 
#line 526 "../../src/simpl.c"
{ 
#line 526 "../../src/simpl.c"
errorFPC__E ( ( char * ) "constM%n needsIr", _auto_m ) ; 
} } } 
#line 532 "../../src/simpl.c"
no_of_returns = 0 ; 

#line 534 "../../src/simpl.c"
_auto_tail = _block_simpl ( ( struct block * ) _auto_this -> _fct_body ) ; 

#line 535 "../../src/simpl.c"
if ( _auto_this -> _fct_body -> _stmt_s == 0 ) _auto_this -> _fct_body -> _stmt__O9.__C9_empty = 1 ; 

#line 537 "../../src/simpl.c"
if ( _auto_this -> _fct_returns -> _node_base != 38 ) { 
#line 537 "../../src/simpl.c"
if ( no_of_returns ) { 
#line 538 "../../src/simpl.c"
switch ( _auto_tail -> 
#line 538 "../../src/simpl.c"
_node_base ) 
#line 539 "../../src/simpl.c"
{ 
#line 539 "../../src/simpl.c"
case 72 : switch ( _auto_tail -> _stmt__O8.__C8_e -> _node_base ) { 
#line 541 "../../src/simpl.c"
case 168 : case 146 : 
#line 541 "../../src/simpl.c"

#line 544 "../../src/simpl.c"
goto dontknow ; 
} 
#line 545 "../../src/simpl.c"
; 

#line 546 "../../src/simpl.c"
default : if ( strcmp ( curr_fct -> _expr__O3.__C3_string , ( char * ) "main") ) errorFI_PC__E ( 
#line 546 "../../src/simpl.c"
( int ) 'w' , ( char * ) "maybe no value returned from%n", curr_fct ) ; 

#line 550 "../../src/simpl.c"
if ( del_list ) goto zaq ; 

#line 551 "../../src/simpl.c"
break ; 

#line 552 "../../src/simpl.c"
case 28 : case 20 : case 33 : case 10 : case 16 : case 115 : case 116 : 
#line 552 "../../src/simpl.c"

#line 559 "../../src/simpl.c"
case 166 : case 19 : dontknow : break ; 
} } else 
#line 565 "../../src/simpl.c"
{ 
#line 565 "../../src/simpl.c"
if ( strcmp ( curr_fct -> _expr__O3.__C3_string , ( char * ) "main") 
#line 565 "../../src/simpl.c"
) 
#line 567 "../../src/simpl.c"
errorFI_PC__E ( ( int ) 'w' , ( char * ) "no value returned from%n", curr_fct ) ; 

#line 568 "../../src/simpl.c"
if ( del_list ) goto zaq ; 
} } else 
#line 571 "../../src/simpl.c"
if ( del_list ) { 
#line 571 "../../src/simpl.c"
zaq : if ( _auto_tail ) _auto_tail -> _stmt_s_list = del_list ; 
#line 571 "../../src/simpl.c"
else 
#line 576 "../../src/simpl.c"
_auto_this -> _fct_body -> _stmt_s = del_list ; 

#line 577 "../../src/simpl.c"
_auto_tail = _auto_dtail ; 
} 
#line 580 "../../src/simpl.c"
if ( curr_fct -> _name_n_oper == 161 ) { 
#line 580 "../../src/simpl.c"
if ( ( ( ( struct name * 
#line 580 "../../src/simpl.c"
) ( _auto_th ) ) ) -> _name_n_assigned_to == 0 ) 
#line 582 "../../src/simpl.c"
{ 
#line 582 "../../src/simpl.c"
( ( ( struct 
#line 582 "../../src/simpl.c"
name * ) ( _auto_th ) ) ) -> _name_n_assigned_to = ( _auto_ass_count ? _auto_ass_count : 111 ) ; 

#line 587 "../../src/simpl.c"
{ 
#line 587 "../../src/simpl.c"
Pexpr _auto_sz ; 
Pexpr _auto_ee ; 
struct call * _auto__Xthis__ctor_call ; 

#line 587 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 587 "../../src/simpl.c"
( struct expr * ) ( _type_tsizeof ( ( struct type * ) _auto_cl ) ) ) , 
#line 587 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 588 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 588 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) 0 ) ; 

#line 589 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 589 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 589 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) new_fct ) , 
#line 589 "../../src/simpl.c"
( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 590 "../../src/simpl.c"
_auto_ee -> _expr__O5.__C5_fct_name = new_fct ; 

#line 591 "../../src/simpl.c"
_auto_ee -> _node_base = 146 ; 

#line 592 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_ee ) ; 

#line 593 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 593 "../../src/simpl.c"
struct expr * ) _auto_th , ( struct expr * ) _auto_ee ) ; 

#line 594 "../../src/simpl.c"
{ 
#line 594 "../../src/simpl.c"
Pstmt _auto_es ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 594 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 594 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 594 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( struct stmt * ) 0 
#line 594 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 594 "../../src/simpl.c"
_auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 595 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 62 , ( 
#line 595 "../../src/simpl.c"
struct expr * ) _auto_th , ( struct expr * ) zero ) ; 

#line 596 "../../src/simpl.c"
{ 
#line 596 "../../src/simpl.c"
struct ifstmt * _auto_ifs ; 
struct estmt * _auto__Xthis__ctor_estmt ; 
struct ifstmt * _auto__Xthis__ctor_ifstmt ; 

#line 596 "../../src/simpl.c"
_auto_ifs = ( struct ifstmt * ) ( ( _auto__Xthis__ctor_ifstmt = 0 ) , ( ( ( 
#line 596 "../../src/simpl.c"
_auto__Xthis__ctor_ifstmt = 0 ) , ( _auto__Xthis__ctor_ifstmt = ( struct ifstmt * ) _stmt__ctor ( ( ( struct 
#line 596 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_ifstmt ) ) , 20 , curloc , ( ( struct stmt * ) _auto_es ) 
#line 596 "../../src/simpl.c"
) ) ) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O8.__C8_e = ( ( struct expr * ) _auto_ee ) 
#line 596 "../../src/simpl.c"
) , ( ( _auto__Xthis__ctor_ifstmt -> _stmt__O9.__C9_else_stmt = ( ( struct stmt * ) 0 ) ) 
#line 596 "../../src/simpl.c"
, _auto__Xthis__ctor_ifstmt ) ) ) ) ; 

#line 601 "../../src/simpl.c"
if ( init_list ) { 
#line 601 "../../src/simpl.c"
_auto_es = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) 
#line 601 "../../src/simpl.c"
, ( ( ( _auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) 
#line 601 "../../src/simpl.c"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , curloc , ( ( 
#line 601 "../../src/simpl.c"
struct stmt * ) 0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( 
#line 601 "../../src/simpl.c"
( struct expr * ) init_list ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 603 "../../src/simpl.c"
_auto_es -> _stmt_s_list = _auto_this -> _fct_body -> _stmt_s ; 

#line 604 "../../src/simpl.c"
_auto_this -> _fct_body -> _stmt_s = _auto_es ; 

#line 605 "../../src/simpl.c"
if ( _auto_tail == 0 ) _auto_tail = _auto_es ; 
} 
#line 607 "../../src/simpl.c"
_auto_ifs -> _stmt_s_list = _auto_this -> _fct_body -> _stmt_s ; 

#line 608 "../../src/simpl.c"
_auto_this -> _fct_body -> _stmt_s = ( struct stmt * ) _auto_ifs ; 

#line 609 "../../src/simpl.c"
if ( _auto_tail == 0 ) _auto_tail = ( struct stmt * ) _auto_ifs ; 
} } } } 
#line 612 "../../src/simpl.c"
{ 
#line 612 "../../src/simpl.c"
Pstmt _auto_st ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 612 "../../src/simpl.c"
_auto_st = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 612 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 612 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 28 , curloc , ( ( struct stmt * ) 0 
#line 612 "../../src/simpl.c"
) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) 
#line 612 "../../src/simpl.c"
_auto_th ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 613 "../../src/simpl.c"
if ( _auto_tail ) _auto_tail -> _stmt_s_list = _auto_st ; 
else 
#line 616 "../../src/simpl.c"
_auto_this -> _fct_body -> _stmt_s = _auto_st ; 

#line 617 "../../src/simpl.c"
_auto_tail = _auto_st ; 
} } } ; 

#line 621 "../../src/simpl.c"
Pstmt _block_simpl ( _auto_this ) register struct block * _auto_this ; 

#line 622 "../../src/simpl.c"
{ 
#line 622 "../../src/simpl.c"
Pstmt _auto__result ; 
int _auto_i ; 
Pname _auto_n ; 
Pstmt _auto_ss ; 
Pstmt _auto_sst ; 
Pstmt _auto_dd ; 
Pstmt _auto_ddt ; 
Pstmt _auto_stail ; 
Ptable _auto_old_scope ; 

#line 625 "../../src/simpl.c"
_auto_ss = 0 ; 

#line 626 "../../src/simpl.c"
_auto_dd = 0 ; 

#line 628 "../../src/simpl.c"
_auto_old_scope = scope ; 

#line 630 "../../src/simpl.c"
if ( _auto_this -> _stmt__O8.__C8_own_tbl == 0 ) { 
#line 630 "../../src/simpl.c"
Pstmt _auto_obd ; 

#line 631 "../../src/simpl.c"
_auto_obd = block_del_list ; 

#line 632 "../../src/simpl.c"
block_del_list = 0 ; 

#line 633 "../../src/simpl.c"
_auto_ss = ( _auto_this -> _stmt_s ? _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) : ( ( 
#line 633 "../../src/simpl.c"
( struct stmt * ) ( 0 ) ) ) ) ; 

#line 634 "../../src/simpl.c"
block_del_list = _auto_obd ; 

#line 635 "../../src/simpl.c"
{ 
#line 635 "../../src/simpl.c"
{ _auto__result = _auto_ss ; 

#line 635 "../../src/simpl.c"
return _auto__result ; 
} } } 
#line 638 "../../src/simpl.c"
scope = _auto_this -> _stmt_memtbl ; 

#line 639 "../../src/simpl.c"
if ( scope -> _table_init_stat == 0 ) scope -> _table_init_stat = 1 ; 

#line 641 "../../src/simpl.c"
for ( _auto_n = _table_get_mem ( ( struct table * ) scope , _auto_i = 1 ) ;_auto_n ;( _auto_n = _table_get_mem ( 
#line 641 "../../src/simpl.c"
( struct table * ) scope , ++ _auto_i ) ) ) 
#line 641 "../../src/simpl.c"
{ 
#line 641 "../../src/simpl.c"
Pstmt _auto_st ; 
Pname _auto_cln ; 
Pexpr _auto_in ; 

#line 642 "../../src/simpl.c"
_auto_st = 0 ; 

#line 644 "../../src/simpl.c"
_auto_in = _auto_n -> _expr__O4.__C4_n_initializer ; 

#line 646 "../../src/simpl.c"
if ( _auto_in ) scope -> _table_init_stat = 2 ; 

#line 648 "../../src/simpl.c"
switch ( _auto_n -> _name_n_scope ) { 
#line 648 "../../src/simpl.c"
case 136 : case 0 : case 25 : continue ; 
#line 648 "../../src/simpl.c"
} 
#line 655 "../../src/simpl.c"
if ( _auto_n -> _name_n_stclass == 31 ) continue ; 

#line 657 "../../src/simpl.c"
if ( _auto_in && ( _auto_in -> _node_base == 124 ) ) errorFI_PC__E ( ( int ) 's' , ( 
#line 657 "../../src/simpl.c"
char * ) "initialization of automatic aggregates") ; 

#line 660 "../../src/simpl.c"
if ( _auto_n -> _expr__O2.__C2_tp == 0 ) continue ; 

#line 662 "../../src/simpl.c"
if ( _auto_n -> _name_n_evaluated ) continue ; 

#line 665 "../../src/simpl.c"
{ 
#line 665 "../../src/simpl.c"
char * _auto_s ; 
register char _auto_c3 ; 

#line 665 "../../src/simpl.c"
_auto_s = _auto_n -> _expr__O3.__C3_string ; 

#line 666 "../../src/simpl.c"
_auto_c3 = ( _auto_s [ 3 ] ) ; 

#line 667 "../../src/simpl.c"
if ( ( ( ( _auto_s [ 0 ] ) == '_' ) && ( ( 
#line 667 "../../src/simpl.c"
_auto_s [ 1 ] ) == 'D' ) ) && ( ( ( _ctype + 1 ) [ _auto_c3 ] 
#line 667 "../../src/simpl.c"
) & 04 ) ) 
#line 667 "../../src/simpl.c"
continue ; 
} 
#line 670 "../../src/simpl.c"
if ( _auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) ) { 
#line 670 "../../src/simpl.c"
Pclass _auto_cl ; 
#line 670 "../../src/simpl.c"
Pname _auto_d ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 671 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 

#line 672 "../../src/simpl.c"
_auto_d = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 672 "../../src/simpl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 674 "../../src/simpl.c"
if ( _auto_d ) { 
#line 674 "../../src/simpl.c"
Pref _auto_r ; 
Pexpr _auto_ee ; 
Pcall _auto_dl ; 
Pstmt _auto_dls ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 675 "../../src/simpl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 675 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 675 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_n ) , 
#line 675 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 675 "../../src/simpl.c"
( struct name * ) _auto_d ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 676 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 676 "../../src/simpl.c"
struct expr * ) zero , ( struct expr * ) 0 ) ; 

#line 677 "../../src/simpl.c"
_auto_dl = ( struct call * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 677 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 677 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_r ) , 
#line 677 "../../src/simpl.c"
( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 678 "../../src/simpl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 678 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 678 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 678 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 678 "../../src/simpl.c"
) _auto_dl ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 679 "../../src/simpl.c"
_auto_dl -> _node_base = 146 ; 

#line 680 "../../src/simpl.c"
_auto_dl -> _expr__O5.__C5_fct_name = _auto_d ; 

#line 681 "../../src/simpl.c"
if ( _auto_dd ) _auto_ddt -> _stmt_s_list = _auto_dls ; 
else 
#line 684 "../../src/simpl.c"
_auto_dd = _auto_dls ; 

#line 685 "../../src/simpl.c"
_auto_ddt = _auto_dls ; 
} 
#line 688 "../../src/simpl.c"
if ( _auto_in ) { 
#line 688 "../../src/simpl.c"
switch ( _auto_in -> _node_base ) { 
#line 689 "../../src/simpl.c"
case 111 : if ( 
#line 689 "../../src/simpl.c"
_auto_in -> _expr__O3.__C3_e1 -> _node_base == 146 ) 
#line 691 "../../src/simpl.c"
{ 
#line 691 "../../src/simpl.c"
Pname _auto_fn ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 692 "../../src/simpl.c"
_auto_fn = _auto_in -> _expr__O3.__C3_e1 -> _expr__O5.__C5_fct_name ; 

#line 693 "../../src/simpl.c"
if ( ( _auto_fn == 0 ) || ( _auto_fn -> _name_n_oper != 161 ) ) goto ddd ; 
#line 693 "../../src/simpl.c"

#line 694 "../../src/simpl.c"
_auto_st = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 694 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 694 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 694 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 694 "../../src/simpl.c"
) _auto_in -> _expr__O3.__C3_e1 ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 695 "../../src/simpl.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 

#line 696 "../../src/simpl.c"
break ; 
} 
#line 698 "../../src/simpl.c"
goto ddd ; 

#line 699 "../../src/simpl.c"
case 70 : if ( _auto_in -> _expr__O3.__C3_e1 == ( struct expr * ) _auto_n ) { 
#line 700 "../../src/simpl.c"
_auto_st = ( 
#line 700 "../../src/simpl.c"
struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( _auto__Xthis__ctor_estmt = 0 
#line 700 "../../src/simpl.c"
) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct stmt * ) 
#line 700 "../../src/simpl.c"
( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 0 ) 
#line 700 "../../src/simpl.c"
) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * ) _auto_in ) 
#line 700 "../../src/simpl.c"
) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 702 "../../src/simpl.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 

#line 703 "../../src/simpl.c"
break ; 
} 
#line 705 "../../src/simpl.c"
default : goto ddd ; 
} } } else 
#line 710 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 710 "../../src/simpl.c"
Pclass _auto_cl ; 
Pname _auto_d ; 
Pname _auto_c ; 

#line 711 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 712 "../../src/simpl.c"
_auto_d = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 712 "../../src/simpl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 713 "../../src/simpl.c"
_auto_c = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ; 

#line 715 "../../src/simpl.c"
if ( _auto_in ) { 
#line 715 "../../src/simpl.c"
if ( _auto_c ) { 
#line 716 "../../src/simpl.c"
Pfct _auto_f ; 
Pblock _auto_b ; 

#line 717 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_c -> _expr__O2.__C2_tp ) ) ) ; 

#line 718 "../../src/simpl.c"
_auto_b = _auto_f -> _fct_body ; 

#line 719 "../../src/simpl.c"
if ( _auto_f -> _fct_f_inline && _auto_f -> _fct_body -> _stmt__O9.__C9_empty ) { 
#line 719 "../../src/simpl.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 

#line 721 "../../src/simpl.c"
goto skip ; 
} 
#line 723 "../../src/simpl.c"
{ 
#line 723 "../../src/simpl.c"
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 723 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 724 "../../src/simpl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 724 "../../src/simpl.c"
( struct expr * ) ( _type_tsizeof ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) / _auto_esz ) 
#line 724 "../../src/simpl.c"
) , ( struct expr * ) 0 ) ; 

#line 725 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 725 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 725 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 726 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 726 "../../src/simpl.c"
struct expr * ) _auto_c , ( struct expr * ) 0 ) ; 

#line 728 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_c , 112 ) ; 

#line 729 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 729 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 730 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 730 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 731 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 731 "../../src/simpl.c"
struct expr * ) _auto_n , ( struct expr * ) _auto_arg ) ; 

#line 732 "../../src/simpl.c"
_auto_arg = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 732 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 732 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_new_fct ) , 
#line 732 "../../src/simpl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 733 "../../src/simpl.c"
_auto_arg -> _node_base = 146 ; 

#line 734 "../../src/simpl.c"
_auto_arg -> _expr__O5.__C5_fct_name = vec_new_fct ; 

#line 735 "../../src/simpl.c"
_auto_st = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 735 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 735 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 735 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 735 "../../src/simpl.c"
) _auto_arg ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 736 "../../src/simpl.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 
} } else 
#line 739 "../../src/simpl.c"
goto ddd ; 

#line 740 "../../src/simpl.c"
skip : ; 
} 
#line 742 "../../src/simpl.c"
if ( _auto_d ) { 
#line 742 "../../src/simpl.c"
Pstmt _auto_dls ; 
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 744 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 745 "../../src/simpl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 745 "../../src/simpl.c"
( struct expr * ) ( _type_tsizeof ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) / _auto_esz ) 
#line 745 "../../src/simpl.c"
) , ( struct expr * ) 0 ) ; 

#line 746 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 746 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 746 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 747 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 747 "../../src/simpl.c"
struct expr * ) _auto_d , ( struct expr * ) zero ) ; 

#line 749 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_d , 112 ) ; 

#line 750 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 750 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 751 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 751 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 752 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 752 "../../src/simpl.c"
struct expr * ) _auto_n , ( struct expr * ) _auto_arg ) ; 

#line 753 "../../src/simpl.c"
_auto_arg = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 753 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 753 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_del_fct ) , 
#line 753 "../../src/simpl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 754 "../../src/simpl.c"
_auto_arg -> _node_base = 146 ; 

#line 755 "../../src/simpl.c"
_auto_arg -> _expr__O5.__C5_fct_name = vec_del_fct ; 

#line 756 "../../src/simpl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 756 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 756 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 756 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 756 "../../src/simpl.c"
) _auto_arg ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 757 "../../src/simpl.c"
if ( _auto_dd ) _auto_ddt -> _stmt_s_list = _auto_dls ; 
else 
#line 760 "../../src/simpl.c"
_auto_dd = _auto_dls ; 

#line 761 "../../src/simpl.c"
_auto_ddt = _auto_dls ; 
} } else 
#line 764 "../../src/simpl.c"
if ( _auto_in ) { 
#line 764 "../../src/simpl.c"
switch ( _auto_in -> _node_base ) { 
#line 765 "../../src/simpl.c"
case 124 : 
#line 765 "../../src/simpl.c"

#line 767 "../../src/simpl.c"
switch ( _auto_n -> _name_n_scope ) { 
#line 767 "../../src/simpl.c"
case 108 : case 136 : errorFI_PC__E ( ( int ) 's' , 
#line 767 "../../src/simpl.c"
( char * ) "Ir list for localV%n", _auto_n ) ; 
} 
#line 772 "../../src/simpl.c"
break ; 

#line 773 "../../src/simpl.c"
case 81 : if ( _auto_n -> _expr__O2.__C2_tp -> _node_base == 110 ) break ; 

#line 775 "../../src/simpl.c"
default : ddd : { 
#line 777 "../../src/simpl.c"
Pexpr _auto_ee ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 777 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 777 "../../src/simpl.c"
struct expr * ) _auto_n , ( struct expr * ) _auto_in ) ; 

#line 778 "../../src/simpl.c"
_auto_st = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 778 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 778 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 778 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 778 "../../src/simpl.c"
) _auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 779 "../../src/simpl.c"
_auto_n -> _expr__O4.__C4_n_initializer = 0 ; 
} } } 
#line 784 "../../src/simpl.c"
if ( _auto_st ) { 
#line 784 "../../src/simpl.c"
if ( _auto_ss ) _auto_sst -> _stmt_s_list = _auto_st ; 
else 
#line 788 "../../src/simpl.c"
_auto_ss = _auto_st ; 

#line 789 "../../src/simpl.c"
_auto_sst = _auto_st ; 
} } 
#line 793 "../../src/simpl.c"
if ( _auto_dd ) { 
#line 793 "../../src/simpl.c"
Pstmt _auto_od ; 
Pstmt _auto_obd ; 
struct pair * _auto__Xthis__ctor_pair ; 

#line 794 "../../src/simpl.c"
_auto_od = del_list ; 

#line 795 "../../src/simpl.c"
_auto_obd = block_del_list ; 

#line 797 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_dd ) ; 

#line 800 "../../src/simpl.c"
if ( _auto_od ) del_list = ( struct stmt * ) ( ( _auto__Xthis__ctor_pair = 0 ) , 
#line 800 "../../src/simpl.c"
( ( ( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( struct pair * ) _stmt__ctor ( 
#line 800 "../../src/simpl.c"
( ( struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , curloc , ( ( struct 
#line 800 "../../src/simpl.c"
stmt * ) _auto_dd ) ) ) ) , ( ( _auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( ( struct 
#line 800 "../../src/simpl.c"
stmt * ) _auto_od ) ) , _auto__Xthis__ctor_pair ) ) ) ; 
else 
#line 803 "../../src/simpl.c"
del_list = _auto_dd ; 

#line 804 "../../src/simpl.c"
block_del_list = _auto_dd ; 

#line 806 "../../src/simpl.c"
_auto_stail = ( _auto_this -> _stmt_s ? _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) : ( ( 
#line 806 "../../src/simpl.c"
( struct stmt * ) ( 0 ) ) ) ) ; 

#line 808 "../../src/simpl.c"
{ 
#line 808 "../../src/simpl.c"
Pfct _auto_f ; 

#line 808 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( curr_fct -> _expr__O2.__C2_tp ) ) ) ; 

#line 809 "../../src/simpl.c"
if ( ( ( _auto_this != ( struct block * ) _auto_f -> _fct_body ) || ( _auto_f -> 
#line 809 "../../src/simpl.c"
_fct_returns -> _node_base == 38 ) ) || ( strcmp ( curr_fct -> _expr__O3.__C3_string , ( char * ) "main") 
#line 809 "../../src/simpl.c"
== 0 ) ) 
#line 811 "../../src/simpl.c"
{ 
#line 811 "../../src/simpl.c"
if ( _auto_stail ) _auto_stail -> _stmt_s_list = _auto_dd ; 
else 
#line 816 "../../src/simpl.c"
_auto_this -> _stmt_s = _auto_dd ; 

#line 817 "../../src/simpl.c"
_auto_stail = _auto_ddt ; 
} 
#line 820 "../../src/simpl.c"
del_list = _auto_od ; 

#line 821 "../../src/simpl.c"
block_del_list = _auto_obd ; 
} } else 
#line 824 "../../src/simpl.c"
_auto_stail = ( _auto_this -> _stmt_s ? _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) 
#line 824 "../../src/simpl.c"
: ( ( ( struct stmt * ) ( 0 ) ) ) ) ; 
#line 824 "../../src/simpl.c"

#line 826 "../../src/simpl.c"
if ( _auto_ss ) { 
#line 826 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_ss ) ; 

#line 828 "../../src/simpl.c"
_auto_sst -> _stmt_s_list = _auto_this -> _stmt_s ; 

#line 829 "../../src/simpl.c"
_auto_this -> _stmt_s = _auto_ss ; 

#line 830 "../../src/simpl.c"
if ( _auto_stail == 0 ) _auto_stail = _auto_sst ; 
} 
#line 833 "../../src/simpl.c"
scope = _auto_old_scope ; 

#line 835 "../../src/simpl.c"
{ 
#line 835 "../../src/simpl.c"
{ _auto__result = _auto_stail ; 

#line 835 "../../src/simpl.c"
return _auto__result ; 
} } } ; 

#line 839 "../../src/simpl.c"
int _classdef_simpl ( _auto_this ) register struct classdef * _auto_this ; 

#line 840 "../../src/simpl.c"
{ 
#line 840 "../../src/simpl.c"
int _auto_i ; 
Pname _auto_m ; 
Pclass _auto_oc ; 
Plist _auto_fl ; 

#line 843 "../../src/simpl.c"
_auto_oc = _auto_this -> _classdef_in_class ; 

#line 845 "../../src/simpl.c"
_auto_this -> _classdef_in_class = ( struct classdef * ) _auto_this ; 

#line 846 "../../src/simpl.c"
for ( _auto_m = _table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , _auto_i = 1 ) ;_auto_m ;( _auto_m = 
#line 846 "../../src/simpl.c"
_table_get_mem ( ( struct table * ) _auto_this -> _classdef_memtbl , ++ _auto_i ) ) ) 
#line 846 "../../src/simpl.c"
{ 
#line 846 "../../src/simpl.c"
Pexpr _auto_i ; 

#line 847 "../../src/simpl.c"
_auto_i = _auto_m -> _expr__O4.__C4_n_initializer ; 

#line 848 "../../src/simpl.c"
_auto_m -> _expr__O4.__C4_n_initializer = 0 ; 

#line 849 "../../src/simpl.c"
_name_simpl ( ( struct name * ) _auto_m ) ; 

#line 850 "../../src/simpl.c"
_auto_m -> _expr__O4.__C4_n_initializer = _auto_i ; 
} 
#line 852 "../../src/simpl.c"
_auto_this -> _classdef_in_class = _auto_oc ; 

#line 854 "../../src/simpl.c"
; 

#line 855 "../../src/simpl.c"
for ( _auto_fl = _auto_this -> _classdef_friend_list ;_auto_fl ;( _auto_fl = _auto_fl -> _name_list_l ) ) { 
#line 855 "../../src/simpl.c"
Pname _auto_p ; 

#line 856 "../../src/simpl.c"
_auto_p = _auto_fl -> _name_list_f ; 

#line 857 "../../src/simpl.c"
switch ( _auto_p -> _expr__O2.__C2_tp -> _node_base ) { 
#line 857 "../../src/simpl.c"
case 108 : case 76 : _name_simpl ( ( struct name * 
#line 857 "../../src/simpl.c"
) _auto_p ) ; 
} } } ; 

#line 865 "../../src/simpl.c"
int _expr_simpl ( _auto_this ) register struct expr * _auto_this ; 

#line 866 "../../src/simpl.c"
{ 
#line 866 "../../src/simpl.c"
if ( ( _auto_this == 0 ) || ( _auto_this -> _node_permanent == 2 ) ) { 
#line 866 "../../src/simpl.c"

#line 868 "../../src/simpl.c"

#line 868 "../../src/simpl.c"
return ; 
} 
#line 870 "../../src/simpl.c"
switch ( _auto_this -> _node_base ) { 
#line 870 "../../src/simpl.c"
case 116 : case 72 : case 20 : case 16 : 
#line 870 "../../src/simpl.c"

#line 875 "../../src/simpl.c"
case 39 : case 33 : errorFI_PC__E ( ( int ) 'i' , ( char * ) "%k inE", 
#line 875 "../../src/simpl.c"
_auto_this -> _node_base ) ; 

#line 879 "../../src/simpl.c"
case 157 : errorFI_PC__E ( ( int ) 'i' , ( char * ) "expr.simpl(value)") ; 

#line 882 "../../src/simpl.c"
case 9 : { 
#line 888 "../../src/simpl.c"
Pname _auto_cln ; 
Pclass _auto_cl ; 
Pname _auto_n ; 
Ptype _auto_tt ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 891 "../../src/simpl.c"
_auto_tt = _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp ; 

#line 892 "../../src/simpl.c"
ttloop : switch ( _auto_tt -> _node_base ) { 
#line 893 "../../src/simpl.c"
case 97 : _auto_tt = ( ( ( struct basetype * 
#line 893 "../../src/simpl.c"
) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 894 "../../src/simpl.c"
goto ttloop ; 

#line 895 "../../src/simpl.c"
case 110 : case 125 : _auto_tt = ( ( ( struct ptr * ) ( _auto_tt ) ) 
#line 895 "../../src/simpl.c"
) -> _ptr_typ ; 

#line 896 "../../src/simpl.c"
break ; 
} 
#line 899 "../../src/simpl.c"
_auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_tt ) ; 

#line 900 "../../src/simpl.c"
if ( _auto_cln ) _auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) 
#line 900 "../../src/simpl.c"
) ; 

#line 901 "../../src/simpl.c"
if ( _auto_cln && ( _auto_n = ( _table_look ( ( struct table * ) ( ( struct 
#line 901 "../../src/simpl.c"
classdef * ) _auto_cl ) -> _classdef_memtbl , ( char * ) "_dtor", ( int ) 0 
#line 901 "../../src/simpl.c"
) ) ) ) 
#line 901 "../../src/simpl.c"
{ 
#line 901 "../../src/simpl.c"
if ( _auto_this -> _expr__O4.__C4_e2 == 0 ) { 
#line 903 "../../src/simpl.c"
_auto_this -> _node_base = 
#line 903 "../../src/simpl.c"
146 ; 

#line 905 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 905 "../../src/simpl.c"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 905 "../../src/simpl.c"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_this -> 
#line 905 "../../src/simpl.c"
_expr__O3.__C3_e1 ) , ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> 
#line 905 "../../src/simpl.c"
_expr__O5.__C5_mem = ( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 906 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 906 "../../src/simpl.c"
( struct expr * ) one , ( struct expr * ) 0 ) ; 

#line 907 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = _auto_n ; 
} else 
#line 909 "../../src/simpl.c"
{ 
#line 909 "../../src/simpl.c"
int _auto_esz ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 

#line 910 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 911 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 911 "../../src/simpl.c"
( struct expr * ) ( _auto_esz ) ) , ( struct expr * ) 0 ) 
#line 911 "../../src/simpl.c"
; 

#line 912 "../../src/simpl.c"
_auto_arg = one ; 

#line 913 "../../src/simpl.c"
if ( ( ( ( struct fct * ) ( _auto_n -> _expr__O2.__C2_tp ) ) ) -> 
#line 913 "../../src/simpl.c"
_fct_f_virtual ) 
#line 913 "../../src/simpl.c"
{ 
#line 913 "../../src/simpl.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _node_base != 85 ) errorFI_PC__E ( ( int ) 's' , ( 
#line 913 "../../src/simpl.c"
char * ) "PE too complicated for delete[]") ; 

#line 916 "../../src/simpl.c"
{ 
#line 916 "../../src/simpl.c"
Pexpr _auto_a ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 916 "../../src/simpl.c"
_auto_a = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 916 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 916 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) 
#line 916 "../../src/simpl.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 916 "../../src/simpl.c"
( ( struct name * ) _auto_n ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 917 "../../src/simpl.c"
_auto_a = _expr_address ( ( struct expr * ) _auto_a ) ; 

#line 918 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 918 "../../src/simpl.c"
struct expr * ) _auto_a , ( struct expr * ) _auto_arg ) ; 
} } else 
#line 920 "../../src/simpl.c"
{ 
#line 920 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 
#line 920 "../../src/simpl.c"
0 , 140 , ( struct expr * ) _auto_n , ( struct expr * ) _auto_arg ) ; 
#line 920 "../../src/simpl.c"

#line 922 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_n , 112 ) ; 
} 
#line 924 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 924 "../../src/simpl.c"
( struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 925 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 925 "../../src/simpl.c"
struct expr * ) _auto_this -> _expr__O4.__C4_e2 , ( struct expr * ) _auto_arg ) ; 

#line 926 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 926 "../../src/simpl.c"
struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) _auto_arg ) ; 

#line 927 "../../src/simpl.c"
_auto_this -> _node_base = 146 ; 

#line 928 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) vec_del_fct ; 

#line 929 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_arg ; 

#line 930 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = vec_del_fct ; 
} } else 
#line 933 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 933 "../../src/simpl.c"
errorFI_PC__E ( ( int ) 'i' , ( char 
#line 933 "../../src/simpl.c"
* ) "expr.simpl: delete vector") ; 
} else 
#line 936 "../../src/simpl.c"
{ 
#line 936 "../../src/simpl.c"
_auto_this -> _node_base = 146 ; 

#line 938 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 938 "../../src/simpl.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) 0 ) ; 

#line 939 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) ( _auto_this -> _expr__O5.__C5_fct_name = del_fct ) ; 
} 
#line 942 "../../src/simpl.c"
_call_simpl ( ( struct call * ) ( ( ( struct call * ) ( _auto_this ) 
#line 942 "../../src/simpl.c"
) ) ) ; 

#line 943 "../../src/simpl.c"
break ; 
} 
#line 946 "../../src/simpl.c"
case 145 : case 112 : _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 949 "../../src/simpl.c"
switch ( _auto_this -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 949 "../../src/simpl.c"
case 45 : case 44 : { 
#line 952 "../../src/simpl.c"
Pref _auto_r ; 
Pname _auto_m ; 

#line 952 "../../src/simpl.c"
_auto_r = ( ( ( struct ref * ) ( _auto_this -> _expr__O4.__C4_e2 ) ) ) ; 

#line 953 "../../src/simpl.c"
_auto_m = _auto_r -> _expr__O5.__C5_mem ; 

#line 954 "../../src/simpl.c"
if ( _auto_m -> _name_n_stclass == 31 ) { 
#line 954 "../../src/simpl.c"
Pexpr _auto_x ; 

#line 956 "../../src/simpl.c"
delp : _auto_x = _auto_this -> _expr__O4.__C4_e2 ; 

#line 958 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_m ; 

#line 959 "../../src/simpl.c"
_auto_r -> _expr__O5.__C5_mem = 0 ; 

#line 960 "../../src/simpl.c"
if ( _auto_x && ( _auto_x -> _node_permanent == 0 ) ) _expr_del ( ( struct expr * ) 
#line 960 "../../src/simpl.c"
_auto_x ) ; 
} else 
#line 962 "../../src/simpl.c"
if ( _auto_m -> _expr__O2.__C2_tp -> _node_base == 108 ) { 
#line 962 "../../src/simpl.c"
Pfct _auto_f ; 

#line 963 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_m -> _expr__O2.__C2_tp ) ) ) ; 

#line 964 "../../src/simpl.c"
if ( _auto_f -> _fct_f_virtual ) { 
#line 964 "../../src/simpl.c"
int _auto_index ; 
Pexpr _auto_ie ; 
Pname _auto_vp ; 

#line 966 "../../src/simpl.c"
_auto_index = _auto_f -> _fct_f_virtual ; 

#line 967 "../../src/simpl.c"
_auto_ie = ( ( 1 < _auto_index ) ? _expr__ctor ( ( struct expr * ) 0 , 150 , 
#line 967 "../../src/simpl.c"
( struct expr * ) ( ( ( struct expr * ) ( _auto_index - 1 ) ) 
#line 967 "../../src/simpl.c"
) , ( struct expr * ) 0 ) : ( ( ( struct expr * 
#line 967 "../../src/simpl.c"
) ( 0 ) ) ) ) ; 

#line 968 "../../src/simpl.c"
_auto_vp = _table_look ( ( struct table * ) _auto_m -> _expr__O5.__C5_n_table , ( char * ) "_vptr", ( 
#line 968 "../../src/simpl.c"
int ) 0 ) ; 

#line 969 "../../src/simpl.c"
_auto_r -> _expr__O5.__C5_mem = _auto_vp ; 

#line 970 "../../src/simpl.c"
_auto_this -> _node_base = 111 ; 

#line 971 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = _auto_this -> _expr__O4.__C4_e2 ; 

#line 972 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_ie ; 
} else 
#line 974 "../../src/simpl.c"
{ 
#line 974 "../../src/simpl.c"
goto delp ; 
} } } } 
#line 980 "../../src/simpl.c"
break ; 

#line 982 "../../src/simpl.c"
default : if ( _auto_this -> _expr__O3.__C3_e1 ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 
#line 982 "../../src/simpl.c"

#line 984 "../../src/simpl.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 985 "../../src/simpl.c"
break ; 

#line 987 "../../src/simpl.c"
case 85 : case 144 : case 82 : case 83 : case 84 : case 150 : case 151 : 
#line 987 "../../src/simpl.c"

#line 994 "../../src/simpl.c"
case 152 : case 81 : case 86 : case 124 : { 
#line 998 "../../src/simpl.c"
return ; 
} 
#line 1000 "../../src/simpl.c"
case 30 : _auto_this -> _node_base = 150 ; 

#line 1002 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( ( ( struct expr * ) ( _type_tsizeof ( ( struct type * ) 
#line 1002 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_tp2 ) ) ) ) ; 

#line 1003 "../../src/simpl.c"
if ( _auto_this -> _expr__O5.__C5_tp2 && ( _auto_this -> _expr__O5.__C5_tp2 -> _node_permanent == 0 ) ) _type_del ( ( struct 
#line 1003 "../../src/simpl.c"
type * ) _auto_this -> _expr__O5.__C5_tp2 ) ; 

#line 1004 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_tp2 = 0 ; 

#line 1005 "../../src/simpl.c"
break ; 

#line 1007 "../../src/simpl.c"
case 146 : case 109 : _call_simpl ( ( struct call * ) ( ( ( struct call * 
#line 1007 "../../src/simpl.c"
) ( _auto_this ) ) ) ) ; 

#line 1010 "../../src/simpl.c"
break ; 

#line 1012 "../../src/simpl.c"
case 68 : _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O5.__C5_cond ) ; 

#line 1014 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1015 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1016 "../../src/simpl.c"
break ; 

#line 1018 "../../src/simpl.c"
case 23 : { 
#line 1019 "../../src/simpl.c"
Pname _auto_cln ; 
Pname _auto_ctor ; 
int _auto_sz ; 
int _auto_esz ; 
Pexpr _auto_var_expr ; 
Pexpr _auto_const_expr ; 
Ptype _auto_tt ; 
Pexpr _auto_arg ; 

#line 1021 "../../src/simpl.c"
_auto_sz = 1 ; 

#line 1023 "../../src/simpl.c"
_auto_var_expr = 0 ; 

#line 1025 "../../src/simpl.c"
_auto_tt = _auto_this -> _expr__O5.__C5_tp2 ; 

#line 1028 "../../src/simpl.c"
if ( _auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_tt ) ) { 
#line 1028 "../../src/simpl.c"
Pclass _auto_cl ; 

#line 1029 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 

#line 1030 "../../src/simpl.c"
if ( _auto_ctor = ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 1030 "../../src/simpl.c"
_auto_cl ) -> _classdef_memtbl , ( char * ) "_ctor", ( int ) 0 ) ) 
#line 1030 "../../src/simpl.c"
) 
#line 1030 "../../src/simpl.c"
{ 
#line 1030 "../../src/simpl.c"
Pexpr _auto_p ; 

#line 1031 "../../src/simpl.c"
_auto_p = zero ; 

#line 1032 "../../src/simpl.c"
if ( _auto_ctor -> _expr__O5.__C5_n_table != _auto_cl -> _classdef_memtbl ) { 
#line 1032 "../../src/simpl.c"
int _auto_dsz ; 
Pexpr _auto_ce ; 

#line 1034 "../../src/simpl.c"
_auto_dsz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 1035 "../../src/simpl.c"
_auto_ce = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1035 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_dsz ) ) ) , 
#line 1035 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 1036 "../../src/simpl.c"
_auto_ce = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1036 "../../src/simpl.c"
struct expr * ) _auto_ce , ( struct expr * ) 0 ) ; 

#line 1037 "../../src/simpl.c"
_auto_p = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , ( 
#line 1037 "../../src/simpl.c"
struct expr * ) new_fct , ( struct expr * ) _auto_ce ) ; 

#line 1038 "../../src/simpl.c"
_auto_p -> _expr__O5.__C5_fct_name = new_fct ; 
} 
#line 1040 "../../src/simpl.c"
{ 
#line 1040 "../../src/simpl.c"
Pcall _auto_c ; 
struct ref * _auto__Xthis__ctor_ref ; 

#line 1040 "../../src/simpl.c"
_auto_c = ( ( ( struct call * ) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1041 "../../src/simpl.c"
_auto_c -> _expr__O3.__C3_e1 = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( 
#line 1041 "../../src/simpl.c"
( _auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( 
#line 1041 "../../src/simpl.c"
struct expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_p ) 
#line 1041 "../../src/simpl.c"
, ( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = 
#line 1041 "../../src/simpl.c"
( ( struct name * ) ( ( ( struct name * ) ( _auto_c -> _expr__O3.__C3_e1 ) 
#line 1041 "../../src/simpl.c"
) ) ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1043 "../../src/simpl.c"
_call_simpl ( ( struct call * ) _auto_c ) ; 

#line 1044 "../../src/simpl.c"
( * _auto_this ) = ( * ( ( ( struct expr * ) ( _auto_c ) 
#line 1044 "../../src/simpl.c"
) ) ) ; 

#line 1045 "../../src/simpl.c"
{ 
#line 1045 "../../src/simpl.c"
return ; 
} } } } else 
#line 1048 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 1048 "../../src/simpl.c"
Pclass _auto_cl ; 

#line 1049 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 1050 "../../src/simpl.c"
_auto_ctor = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ; 

#line 1051 "../../src/simpl.c"
if ( _auto_ctor == 0 ) { 
#line 1051 "../../src/simpl.c"
if ( ( _table_look ( ( struct table * ) 
#line 1051 "../../src/simpl.c"
( ( struct classdef * ) _auto_cl ) -> _classdef_memtbl , ( char * ) "_ctor", ( 
#line 1051 "../../src/simpl.c"
int ) 0 ) ) ) 
#line 1052 "../../src/simpl.c"
errorFPC__E ( ( char * ) "new %s[], no default constructor", _auto_cl -> _classdef_string ) 
#line 1052 "../../src/simpl.c"
; 

#line 1053 "../../src/simpl.c"
cl_obj_vec = 0 ; 
} } 
#line 1057 "../../src/simpl.c"
xxx : switch ( _auto_tt -> _node_base ) { 
#line 1058 "../../src/simpl.c"
case 97 : _auto_tt = ( ( ( 
#line 1058 "../../src/simpl.c"
struct basetype * ) ( _auto_tt ) ) ) -> _basetype_b_name -> _expr__O2.__C2_tp ; 

#line 1061 "../../src/simpl.c"
goto xxx ; 

#line 1062 "../../src/simpl.c"
default : _auto_esz = _type_tsizeof ( ( struct type * ) _auto_tt ) ; 

#line 1064 "../../src/simpl.c"
break ; 

#line 1065 "../../src/simpl.c"
case 110 : { 
#line 1066 "../../src/simpl.c"
Pvec _auto_v ; 

#line 1066 "../../src/simpl.c"
_auto_v = ( ( ( struct vec * ) ( _auto_tt ) ) ) ; 

#line 1067 "../../src/simpl.c"
if ( _auto_v -> _vec_size ) _auto_sz *= _auto_v -> _vec_size ; 
else 
#line 1069 "../../src/simpl.c"
if ( _auto_v -> _vec_dim ) _auto_var_expr = ( _auto_var_expr ? _expr__ctor ( ( struct expr * ) 0 
#line 1069 "../../src/simpl.c"
, 50 , ( struct expr * ) _auto_var_expr , ( struct expr * ) _auto_v -> _vec_dim ) : 
#line 1069 "../../src/simpl.c"
_auto_v -> _vec_dim ) ; 
else 
#line 1071 "../../src/simpl.c"
{ 
#line 1071 "../../src/simpl.c"
_auto_sz = SZ_WPTR ; 

#line 1073 "../../src/simpl.c"
break ; 
} 
#line 1075 "../../src/simpl.c"
_auto_tt = _auto_v -> _vec_typ ; 

#line 1076 "../../src/simpl.c"
goto xxx ; 
} } 
#line 1080 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 1080 "../../src/simpl.c"
Pfct _auto_f ; 
Pblock _auto_b ; 

#line 1081 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 1082 "../../src/simpl.c"
_auto_b = _auto_f -> _fct_body ; 

#line 1083 "../../src/simpl.c"
if ( _auto_f -> _fct_f_inline && _auto_b -> _stmt__O9.__C9_empty ) goto skip2 ; 

#line 1084 "../../src/simpl.c"
_auto_const_expr = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1084 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_sz ) ) ) , 
#line 1084 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 1085 "../../src/simpl.c"
{ 
#line 1085 "../../src/simpl.c"
Pexpr _auto_noe ; 

#line 1085 "../../src/simpl.c"
_auto_noe = ( _auto_var_expr ? ( ( _auto_sz != 1 ) ? _expr__ctor ( ( struct expr * ) 0 
#line 1085 "../../src/simpl.c"
, 50 , ( struct expr * ) _auto_const_expr , ( struct expr * ) _auto_var_expr ) : _auto_var_expr ) 
#line 1085 "../../src/simpl.c"
: _auto_const_expr ) ; 

#line 1086 "../../src/simpl.c"
_auto_const_expr = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1086 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 1086 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 1087 "../../src/simpl.c"
_auto_this -> _node_base = 109 ; 

#line 1088 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1088 "../../src/simpl.c"
struct expr * ) _auto_ctor , ( struct expr * ) 0 ) ; 

#line 1090 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_ctor , 112 ) ; 

#line 1091 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1091 "../../src/simpl.c"
struct expr * ) _auto_const_expr , ( struct expr * ) _auto_arg ) ; 

#line 1092 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1092 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 1093 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 1093 "../../src/simpl.c"
( struct expr * ) zero , ( struct expr * ) _auto_arg ) ; 

#line 1094 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) vec_new_fct ; 

#line 1095 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = vec_new_fct ; 

#line 1096 "../../src/simpl.c"
break ; 
} } 
#line 1098 "../../src/simpl.c"
skip2 : ; 

#line 1100 "../../src/simpl.c"
_auto_sz *= _auto_esz ; 

#line 1101 "../../src/simpl.c"
_auto_const_expr = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1101 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_sz ) ) ) , 
#line 1101 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 1102 "../../src/simpl.c"
_auto_arg = ( _auto_var_expr ? ( ( _auto_sz != 1 ) ? _expr__ctor ( ( struct expr * ) 0 
#line 1102 "../../src/simpl.c"
, 50 , ( struct expr * ) _auto_const_expr , ( struct expr * ) _auto_var_expr ) : _auto_var_expr ) 
#line 1102 "../../src/simpl.c"
: _auto_const_expr ) ; 

#line 1104 "../../src/simpl.c"
_auto_this -> _node_base = 113 ; 

#line 1105 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_tp2 = _auto_this -> _expr__O2.__C2_tp ; 

#line 1106 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 146 , 
#line 1106 "../../src/simpl.c"
( struct expr * ) new_fct , ( struct expr * ) _expr__ctor ( ( struct expr * ) 
#line 1106 "../../src/simpl.c"
0 , 140 , ( struct expr * ) _auto_arg , ( struct expr * ) 0 ) 
#line 1106 "../../src/simpl.c"
) ; 

#line 1107 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 -> _expr__O5.__C5_fct_name = new_fct ; 

#line 1108 "../../src/simpl.c"
_expr_simpl ( _auto_this ) ; 

#line 1109 "../../src/simpl.c"
break ; 
} 
#line 1111 "../../src/simpl.c"
case 113 : _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1113 "../../src/simpl.c"
break ; 

#line 1115 "../../src/simpl.c"
case 44 : _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1117 "../../src/simpl.c"
break ; 

#line 1118 "../../src/simpl.c"
case 45 : _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1120 "../../src/simpl.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 71 ) { 
#line 1120 "../../src/simpl.c"
Pexpr _auto_ex ; 

#line 1121 "../../src/simpl.c"
_auto_ex = _auto_this -> _expr__O3.__C3_e1 ; 

#line 1122 "../../src/simpl.c"
cfr : switch ( _auto_ex -> _expr__O4.__C4_e2 -> _node_base ) { 
#line 1123 "../../src/simpl.c"
case 85 : _auto_this -> _node_base = 44 ; 

#line 1126 "../../src/simpl.c"
_auto_ex -> _expr__O4.__C4_e2 = _expr_address ( ( struct expr * ) _auto_ex -> _expr__O4.__C4_e2 ) ; 

#line 1127 "../../src/simpl.c"
break ; 

#line 1128 "../../src/simpl.c"
case 71 : _auto_ex = _auto_ex -> _expr__O4.__C4_e2 ; 

#line 1130 "../../src/simpl.c"
goto cfr ; 
} } 
#line 1133 "../../src/simpl.c"
break ; 

#line 1135 "../../src/simpl.c"
case 70 : { 
#line 1136 "../../src/simpl.c"
Pfct _auto_f ; 
Pexpr _auto_th ; 

#line 1136 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( curr_fct -> _expr__O2.__C2_tp ) ) ) ; 

#line 1137 "../../src/simpl.c"
_auto_th = ( struct expr * ) _auto_f -> _fct_f_this ; 

#line 1139 "../../src/simpl.c"
if ( _auto_this -> _expr__O3.__C3_e1 ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1140 "../../src/simpl.c"
if ( _auto_this -> _expr__O4.__C4_e2 ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1142 "../../src/simpl.c"
if ( _auto_th && ( _auto_th == _auto_this -> _expr__O3.__C3_e1 ) ) { 
#line 1142 "../../src/simpl.c"
if ( curr_fct -> _name_n_oper == 161 ) 
#line 1142 "../../src/simpl.c"

#line 1143 "../../src/simpl.c"
{ 
#line 1143 "../../src/simpl.c"
if ( init_list ) { 
#line 1144 "../../src/simpl.c"
_auto_this -> _node_base = 71 ; 

#line 1147 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , 
#line 1147 "../../src/simpl.c"
( struct expr * ) _auto_this -> _expr__O3.__C3_e1 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1148 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = init_list ; 
} } } 
#line 1152 "../../src/simpl.c"
break ; 
} } 
#line 1156 "../../src/simpl.c"
if ( _auto_this -> _expr__O2.__C2_tp && ( _auto_this -> _expr__O2.__C2_tp -> _node_base == 21 ) ) { 
#line 1156 "../../src/simpl.c"
Neval = 
#line 1156 "../../src/simpl.c"
0 ; 

#line 1158 "../../src/simpl.c"
{ 
#line 1158 "../../src/simpl.c"
int _auto_i ; 

#line 1158 "../../src/simpl.c"
_auto_i = _expr_eval ( _auto_this ) ; 

#line 1159 "../../src/simpl.c"
if ( Neval == 0 ) { 
#line 1159 "../../src/simpl.c"
_auto_this -> _node_base = 150 ; 

#line 1161 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( ( ( struct expr * ) ( _auto_i ) ) ) ; 
} } } } ; 

#line 1168 "../../src/simpl.c"
int _call_simpl ( _auto_this ) register struct call * _auto_this ; 

#line 1177 "../../src/simpl.c"
{ 
#line 1177 "../../src/simpl.c"
Pname _auto_fn ; 
Pfct _auto_f ; 

#line 1178 "../../src/simpl.c"
_auto_fn = _auto_this -> _expr__O5.__C5_fct_name ; 

#line 1179 "../../src/simpl.c"
_auto_f = ( _auto_fn ? ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) 
#line 1179 "../../src/simpl.c"
: ( ( ( struct fct * ) ( 0 ) ) ) ) ; 
#line 1179 "../../src/simpl.c"

#line 1181 "../../src/simpl.c"
if ( _auto_fn == 0 ) _expr_simpl ( ( struct expr * ) _auto_this -> _expr__O3.__C3_e1 ) ; 

#line 1183 "../../src/simpl.c"
if ( _auto_f ) { 
#line 1183 "../../src/simpl.c"
switch ( _auto_f -> _node_base ) { 
#line 1184 "../../src/simpl.c"
case 141 : { 
#line 1186 "../../src/simpl.c"
return ; 
#line 1186 "../../src/simpl.c"
} 
#line 1187 "../../src/simpl.c"
case 108 : break ; 

#line 1189 "../../src/simpl.c"
case 76 : { 
#line 1190 "../../src/simpl.c"
Pgen _auto_g ; 

#line 1190 "../../src/simpl.c"
_auto_g = ( ( ( struct gen * ) ( _auto_f ) ) ) ; 

#line 1191 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = ( _auto_fn = _auto_g -> _gen_fct_list -> _name_list_f ) ; 

#line 1192 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 
} } } 
#line 1197 "../../src/simpl.c"
if ( _auto_f && ( curr_expr == ( struct expr * ) _auto_this ) ) 
#line 1197 "../../src/simpl.c"

#line 1197 "../../src/simpl.c"
{ 
#line 1197 "../../src/simpl.c"
Pname _auto_cln ; 

#line 1198 "../../src/simpl.c"
_auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_f -> _fct_returns ) ; 

#line 1199 "../../src/simpl.c"
if ( _auto_cln && ( _table_look ( ( struct table * ) ( ( struct classdef * ) 
#line 1199 "../../src/simpl.c"
( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ) -> _classdef_memtbl , 
#line 1199 "../../src/simpl.c"
( char * ) "_dtor", ( int ) 0 ) ) ) 
#line 1199 "../../src/simpl.c"
errorFI_PC__E ( ( 
#line 1199 "../../src/simpl.c"
int ) 's' , ( char * ) "%n returned by%n is not used (%n has destructor)", _auto_cln , _auto_fn , _auto_cln ) ; 
} 
#line 1202 "../../src/simpl.c"
switch ( _auto_this -> _expr__O3.__C3_e1 -> _node_base ) { 
#line 1202 "../../src/simpl.c"
case 45 : case 44 : { 
#line 1205 "../../src/simpl.c"
Pref _auto_r ; 
Pexpr _auto_a1 ; 

#line 1205 "../../src/simpl.c"
_auto_r = ( ( ( struct ref * ) ( _auto_this -> _expr__O3.__C3_e1 ) ) ) ; 

#line 1206 "../../src/simpl.c"
_auto_a1 = _auto_r -> _expr__O3.__C3_e1 ; 

#line 1208 "../../src/simpl.c"
if ( _auto_f && _auto_f -> _fct_f_virtual ) { 
#line 1208 "../../src/simpl.c"
Pexpr _auto_a11 ; 
int _auto_index ; 
Pexpr _auto_ie ; 
Pname _auto_vp ; 
Pexpr _auto_vptr ; 
Pexpr _auto_ee ; 
Ptype _auto_pft ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct ptr * _auto__Xthis__ctor_ptr ; 
struct texpr * _auto__Xthis__ctor_texpr ; 

#line 1209 "../../src/simpl.c"
_auto_a11 = 0 ; 

#line 1211 "../../src/simpl.c"
switch ( _auto_a1 -> _node_base ) { 
#line 1211 "../../src/simpl.c"
case 85 : _auto_a11 = _auto_a1 ; 

#line 1214 "../../src/simpl.c"
break ; 

#line 1215 "../../src/simpl.c"
case 112 : case 145 : if ( _auto_a1 -> _expr__O4.__C4_e2 -> _node_base == 85 ) _auto_a11 = _auto_a1 ; 

#line 1218 "../../src/simpl.c"
break ; 
} 
#line 1221 "../../src/simpl.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 45 ) { 
#line 1221 "../../src/simpl.c"
if ( _auto_a11 ) _auto_a11 = _expr_address ( ( 
#line 1221 "../../src/simpl.c"
struct expr * ) _auto_a11 ) ; 

#line 1223 "../../src/simpl.c"
_auto_a1 = _expr_address ( ( struct expr * ) _auto_a1 ) ; 
} 
#line 1226 "../../src/simpl.c"
if ( _auto_a11 == 0 ) { 
#line 1226 "../../src/simpl.c"
char * _auto_s ; 
Pname _auto_n ; 
Pcall _auto_cc ; 
struct call * _auto__Xthis__ctor_call ; 

#line 1230 "../../src/simpl.c"
_auto_s = make_name ( ( int ) 'K' ) ; 

#line 1231 "../../src/simpl.c"
_auto_n = ( struct name * ) _name__ctor ( ( struct name * ) 0 , _auto_s ) ; 
#line 1231 "../../src/simpl.c"

#line 1232 "../../src/simpl.c"
_auto_n -> _expr__O2.__C2_tp = _auto_a1 -> _expr__O2.__C2_tp ; 

#line 1233 "../../src/simpl.c"
_auto_n = _name_dcl ( ( struct name * ) _auto_n , ( struct table * ) scope , 136 ) ; 
#line 1233 "../../src/simpl.c"

#line 1234 "../../src/simpl.c"
_auto_n -> _name_n_scope = 108 ; 

#line 1235 "../../src/simpl.c"
_name_assign ( ( struct name * ) _auto_n ) ; 

#line 1236 "../../src/simpl.c"
_auto_a11 = ( struct expr * ) _auto_n ; 

#line 1237 "../../src/simpl.c"
_auto_a1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 70 , ( 
#line 1237 "../../src/simpl.c"
struct expr * ) _auto_n , ( struct expr * ) _auto_a1 ) ; 

#line 1238 "../../src/simpl.c"
_auto_a1 -> _expr__O2.__C2_tp = _auto_n -> _expr__O2.__C2_tp ; 

#line 1239 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_a1 ) ; 

#line 1240 "../../src/simpl.c"
_auto_cc = ( struct call * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1240 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1240 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) 0 ) 
#line 1240 "../../src/simpl.c"
, ( ( struct expr * ) 0 ) ) ) ) , _auto__Xthis__ctor_call ) ) 
#line 1240 "../../src/simpl.c"
; 

#line 1241 "../../src/simpl.c"
( * _auto_cc ) = ( * _auto_this ) ; 

#line 1242 "../../src/simpl.c"
_auto_this -> _node_base = 71 ; 

#line 1243 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = _auto_a1 ; 

#line 1244 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _auto_cc ; 

#line 1245 "../../src/simpl.c"
_auto_this = ( struct call * ) _auto_cc ; 
} 
#line 1247 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 
#line 1247 "../../src/simpl.c"
140 , ( struct expr * ) _auto_a11 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1248 "../../src/simpl.c"
_auto_index = _auto_f -> _fct_f_virtual ; 

#line 1248 "../../src/simpl.c"
_auto_ie = ( ( 1 < _auto_index ) ? _expr__ctor ( ( struct expr * ) 0 , 150 , 
#line 1248 "../../src/simpl.c"
( struct expr * ) ( ( ( struct expr * ) ( _auto_index - 1 ) ) 
#line 1248 "../../src/simpl.c"
) , ( struct expr * ) 0 ) : ( ( ( struct expr * 
#line 1248 "../../src/simpl.c"
) ( 0 ) ) ) ) ; 

#line 1248 "../../src/simpl.c"
_auto_vp = _table_look ( ( struct table * ) _auto_fn -> _expr__O5.__C5_n_table , ( char * ) "_vptr", ( 
#line 1248 "../../src/simpl.c"
int ) 0 ) ; 

#line 1248 "../../src/simpl.c"
_auto_vptr = ( struct expr * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1248 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1248 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 44 , ( ( struct expr * ) _auto_a11 ) , 
#line 1248 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1248 "../../src/simpl.c"
( struct name * ) _auto_vp ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1248 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 111 , ( 
#line 1248 "../../src/simpl.c"
struct expr * ) _auto_vptr , ( struct expr * ) _auto_ie ) ; 

#line 1248 "../../src/simpl.c"
_auto_pft = ( struct type * ) ( ( _auto__Xthis__ctor_ptr = 0 ) , ( ( _auto__Xthis__ctor_ptr = 
#line 1248 "../../src/simpl.c"
( struct ptr * ) _new ( ( long ) 16) ) , ( ( Nt ++ 
#line 1248 "../../src/simpl.c"
) , ( ( _auto__Xthis__ctor_ptr -> _node_base = 125 ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_typ = ( ( 
#line 1248 "../../src/simpl.c"
struct type * ) _auto_f ) ) , ( ( _auto__Xthis__ctor_ptr -> _ptr_rdo = ( ( int ) 
#line 1248 "../../src/simpl.c"
0 ) ) , _auto__Xthis__ctor_ptr ) ) ) ) ) ) ; 

#line 1254 "../../src/simpl.c"
_auto_ee = ( struct expr * ) ( ( _auto__Xthis__ctor_texpr = 0 ) , ( ( ( 
#line 1254 "../../src/simpl.c"
_auto__Xthis__ctor_texpr = 0 ) , ( _auto__Xthis__ctor_texpr = ( struct texpr * ) _expr__ctor ( ( ( struct 
#line 1254 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_texpr ) ) , 113 , ( ( struct expr * ) _auto_ee ) , 
#line 1254 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_texpr -> _expr__O5.__C5_tp2 = ( 
#line 1254 "../../src/simpl.c"
( struct type * ) _auto_pft ) ) , _auto__Xthis__ctor_texpr ) ) ) ; 

#line 1255 "../../src/simpl.c"
_auto_ee -> _expr__O2.__C2_tp = ( ( ( struct type * ) ( _auto_f -> _fct_f_this ) ) ) ; 
#line 1255 "../../src/simpl.c"

#line 1256 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 111 , 
#line 1256 "../../src/simpl.c"
( struct expr * ) _auto_ee , ( struct expr * ) 0 ) ; 

#line 1258 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = 0 ; 

#line 1259 "../../src/simpl.c"
_auto_fn = 0 ; 

#line 1260 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1261 "../../src/simpl.c"
{ 
#line 1261 "../../src/simpl.c"
return ; 
} } else 
#line 1263 "../../src/simpl.c"
{ 
#line 1263 "../../src/simpl.c"
if ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 45 ) _auto_a1 = _expr_address ( ( struct 
#line 1263 "../../src/simpl.c"
expr * ) _auto_a1 ) ; 

#line 1266 "../../src/simpl.c"
_auto_this -> _expr__O4.__C4_e2 = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , 
#line 1266 "../../src/simpl.c"
( struct expr * ) _auto_a1 , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1267 "../../src/simpl.c"
_auto_this -> _expr__O3.__C3_e1 = ( struct expr * ) _auto_r -> _expr__O5.__C5_mem ; 
} } } 
#line 1273 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1275 "../../src/simpl.c"
if ( ( _auto_this -> _expr__O3.__C3_e1 -> _node_base == 85 ) && ( _auto_this -> _expr__O3.__C3_e1 -> _expr__O2.__C2_tp -> _node_base == 108 ) 
#line 1275 "../../src/simpl.c"
) 
#line 1275 "../../src/simpl.c"
{ 
#line 1275 "../../src/simpl.c"
_auto_this -> _expr__O5.__C5_fct_name = ( _auto_fn = ( ( ( struct name * ) ( _auto_this -> 
#line 1275 "../../src/simpl.c"
_expr__O3.__C3_e1 ) ) ) ) ; 

#line 1278 "../../src/simpl.c"
_auto_f = ( ( ( struct fct * ) ( _auto_fn -> _expr__O2.__C2_tp ) ) ) ; 
} 
#line 1281 "../../src/simpl.c"
if ( ( _auto_fn && _auto_f -> _fct_f_inline ) && ( debug == 0 ) ) { 
#line 1281 "../../src/simpl.c"

#line 1281 "../../src/simpl.c"
Pexpr _auto_ee ; 

#line 1283 "../../src/simpl.c"
_auto_ee = _fct_expand ( ( struct fct * ) _auto_f , ( struct name * ) _auto_fn , ( struct 
#line 1283 "../../src/simpl.c"
table * ) scope , ( struct expr * ) _auto_this -> _expr__O4.__C4_e2 ) ; 

#line 1285 "../../src/simpl.c"
if ( _auto_ee ) ( * ( ( ( struct expr * ) ( _auto_this ) ) 
#line 1285 "../../src/simpl.c"
) ) = ( * _auto_ee ) ; 
} } ; 

#line 1289 "../../src/simpl.c"
Pexpr curr_expr ; 

#line 1294 "../../src/simpl.c"
Pstmt _stmt_simpl ( _auto_this ) register struct stmt * _auto_this ; 

#line 1298 "../../src/simpl.c"
{ 
#line 1298 "../../src/simpl.c"
Pstmt _auto__result ; 

#line 1299 "../../src/simpl.c"
if ( _auto_this == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 1299 "../../src/simpl.c"
"0->stmt.simpl()") ; 

#line 1302 "../../src/simpl.c"
curr_expr = _auto_this -> _stmt__O8.__C8_e ; 

#line 1304 "../../src/simpl.c"
switch ( _auto_this -> _node_base ) { 
#line 1304 "../../src/simpl.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char 
#line 1304 "../../src/simpl.c"
* ) "stmt.simpl(%k)", _auto_this -> _node_base ) ; 

#line 1308 "../../src/simpl.c"
case 1 : break ; 

#line 1311 "../../src/simpl.c"
case 3 : case 7 : if ( block_del_list ) { 
#line 1313 "../../src/simpl.c"
Pstmt _auto_bs ; 
Pstmt _auto_dl ; 
struct pair * _auto__Xthis__ctor_pair ; 

#line 1317 "../../src/simpl.c"
_auto_bs = ( struct stmt * ) _stmt__ctor ( ( struct stmt * ) 0 , ( int 
#line 1317 "../../src/simpl.c"
) _auto_this -> _node_base , _auto_this -> _stmt_where , ( struct stmt * ) 0 ) ; 

#line 1318 "../../src/simpl.c"
_auto_dl = _stmt_copy ( ( struct stmt * ) block_del_list ) ; 

#line 1319 "../../src/simpl.c"
_auto_this -> _node_base = 116 ; 

#line 1320 "../../src/simpl.c"
_auto_this -> _stmt_s = ( struct stmt * ) ( ( _auto__Xthis__ctor_pair = 0 ) , ( ( 
#line 1320 "../../src/simpl.c"
( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( struct pair * ) _stmt__ctor ( ( ( 
#line 1320 "../../src/simpl.c"
struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , _auto_this -> _stmt_where , ( ( struct stmt * 
#line 1320 "../../src/simpl.c"
) _auto_dl ) ) ) ) , ( ( _auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( ( struct stmt * 
#line 1320 "../../src/simpl.c"
) _auto_bs ) ) , _auto__Xthis__ctor_pair ) ) ) ; 

#line 1321 "../../src/simpl.c"
break ; 
} 
#line 1323 "../../src/simpl.c"
break ; 

#line 1325 "../../src/simpl.c"
case 8 : _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1327 "../../src/simpl.c"
break ; 

#line 1329 "../../src/simpl.c"
case 72 : if ( _auto_this -> _stmt__O8.__C8_e ) _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 
#line 1329 "../../src/simpl.c"

#line 1331 "../../src/simpl.c"
break ; 

#line 1333 "../../src/simpl.c"
case 28 : { 
#line 1334 "../../src/simpl.c"
no_of_returns ++ ; 

#line 1345 "../../src/simpl.c"
if ( not_inl ) { 
#line 1345 "../../src/simpl.c"
Pstmt _auto_as ; 
Pstmt _auto_dl ; 
Pstmt _auto_rs ; 
struct pair * _auto__Xthis__ctor_pair ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1347 "../../src/simpl.c"
if ( _auto_this -> _stmt__O8.__C8_e && ( _auto_this -> _stmt__O8.__C8_e != dummy ) ) { 
#line 1347 "../../src/simpl.c"
Pexpr _auto_ee ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1349 "../../src/simpl.c"
if ( ( ( ( _auto_this -> _stmt__O8.__C8_e -> _node_base == 146 ) && _auto_this -> _stmt__O8.__C8_e -> _expr__O5.__C5_fct_name ) && 
#line 1349 "../../src/simpl.c"
( _auto_this -> _stmt__O8.__C8_e -> _expr__O5.__C5_fct_name -> _name_n_oper == 161 ) ) && ( _auto_this -> _stmt__O8.__C8_e -> _expr__O3.__C3_e1 -> _node_base == 45 ) 
#line 1349 "../../src/simpl.c"
) 
#line 1352 "../../src/simpl.c"
{ 
#line 1352 "../../src/simpl.c"
Pref _auto_r ; 

#line 1353 "../../src/simpl.c"
_auto_r = ( ( ( struct ref * ) ( _auto_this -> _stmt__O8.__C8_e -> _expr__O3.__C3_e1 ) ) ) ; 
#line 1353 "../../src/simpl.c"

#line 1354 "../../src/simpl.c"
_auto_r -> _expr__O3.__C3_e1 = ( struct expr * ) ret_var ; 

#line 1355 "../../src/simpl.c"
_auto_ee = _auto_this -> _stmt__O8.__C8_e ; 
} else 
#line 1357 "../../src/simpl.c"
{ 
#line 1357 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 
#line 1357 "../../src/simpl.c"
, 70 , ( struct expr * ) ret_var , ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 
#line 1357 "../../src/simpl.c"
} 
#line 1360 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_ee ) ; 

#line 1361 "../../src/simpl.c"
_auto_as = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1361 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1361 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_this -> _stmt_where , ( ( struct stmt * ) 
#line 1361 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1361 "../../src/simpl.c"
) _auto_ee ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 
} else 
#line 1364 "../../src/simpl.c"
_auto_as = 0 ; 

#line 1366 "../../src/simpl.c"
_auto_this -> _node_base = 116 ; 

#line 1367 "../../src/simpl.c"
_auto_this -> _stmt_s = 0 ; 

#line 1368 "../../src/simpl.c"
_auto_this -> _stmt__O7.__C7_d = 0 ; 

#line 1369 "../../src/simpl.c"
_auto_this -> _stmt__O8.__C8_own_tbl = ( _auto_this -> _stmt_memtbl ? 1 : 0) ; 

#line 1370 "../../src/simpl.c"
_block_simpl ( ( struct block * ) ( ( ( struct block * ) ( _auto_this ) ) 
#line 1370 "../../src/simpl.c"
) ) ; 

#line 1372 "../../src/simpl.c"
_auto_dl = ( del_list ? _stmt_copy ( ( struct stmt * ) del_list ) : ( ( ( struct 
#line 1372 "../../src/simpl.c"
stmt * ) ( 0 ) ) ) ) ; 

#line 1373 "../../src/simpl.c"
if ( _auto_this -> _stmt_s ) _auto_dl = ( struct stmt * ) ( _auto_dl ? ( ( _auto__Xthis__ctor_pair = 
#line 1373 "../../src/simpl.c"
0 ) , ( ( ( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( struct 
#line 1373 "../../src/simpl.c"
pair * ) _stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , _auto_this -> 
#line 1373 "../../src/simpl.c"
_stmt_where , ( ( struct stmt * ) _auto_this -> _stmt_s ) ) ) ) , ( ( 
#line 1373 "../../src/simpl.c"
_auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( ( struct stmt * ) _auto_dl ) ) , _auto__Xthis__ctor_pair ) ) ) : 
#line 1373 "../../src/simpl.c"
( ( ( struct pair * ) ( _auto_this -> _stmt_s ) ) ) ) ; 

#line 1375 "../../src/simpl.c"
_auto_rs = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1375 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1375 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 28 , _auto_this -> _stmt_where , ( ( struct stmt * ) 
#line 1375 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1375 "../../src/simpl.c"
) ( ret_var ? ( ( ( struct expr * ) ( ret_var ) ) ) : 
#line 1375 "../../src/simpl.c"
( ( ( struct expr * ) ( 0 ) ) ) ) ) ) 
#line 1375 "../../src/simpl.c"
, _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1376 "../../src/simpl.c"
if ( _auto_as ) { 
#line 1376 "../../src/simpl.c"
if ( _auto_dl ) _auto_as = ( struct stmt * ) ( ( 
#line 1376 "../../src/simpl.c"
_auto__Xthis__ctor_pair = 0 ) , ( ( ( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( 
#line 1376 "../../src/simpl.c"
struct pair * ) _stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , 
#line 1376 "../../src/simpl.c"
_auto_this -> _stmt_where , ( ( struct stmt * ) _auto_as ) ) ) ) , ( ( 
#line 1376 "../../src/simpl.c"
_auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( ( struct stmt * ) _auto_dl ) ) , _auto__Xthis__ctor_pair ) ) ) ; 
#line 1376 "../../src/simpl.c"

#line 1378 "../../src/simpl.c"
_auto_this -> _stmt_s = ( struct stmt * ) ( ( _auto__Xthis__ctor_pair = 0 ) , ( ( 
#line 1378 "../../src/simpl.c"
( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( struct pair * ) _stmt__ctor ( ( ( 
#line 1378 "../../src/simpl.c"
struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , _auto_this -> _stmt_where , ( ( struct stmt * 
#line 1378 "../../src/simpl.c"
) _auto_as ) ) ) ) , ( ( _auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( ( struct stmt * 
#line 1378 "../../src/simpl.c"
) _auto_rs ) ) , _auto__Xthis__ctor_pair ) ) ) ; 
} else 
#line 1380 "../../src/simpl.c"
{ 
#line 1380 "../../src/simpl.c"
if ( curr_fct -> _name_n_oper == 161 ) { 
#line 1381 "../../src/simpl.c"
_auto_rs -> _stmt__O8.__C8_e = ( struct expr * 
#line 1381 "../../src/simpl.c"
) ( ( ( struct fct * ) ( curr_fct -> _expr__O2.__C2_tp ) ) ) -> _fct_f_this ; 
#line 1381 "../../src/simpl.c"
} 
#line 1384 "../../src/simpl.c"
_auto_this -> _stmt_s = ( struct stmt * ) ( _auto_dl ? ( ( _auto__Xthis__ctor_pair = 0 ) 
#line 1384 "../../src/simpl.c"
, ( ( ( _auto__Xthis__ctor_pair = 0 ) , ( _auto__Xthis__ctor_pair = ( struct pair * ) 
#line 1384 "../../src/simpl.c"
_stmt__ctor ( ( ( struct stmt * ) ( _auto__Xthis__ctor_pair ) ) , 166 , _auto_this -> _stmt_where , ( 
#line 1384 "../../src/simpl.c"
( struct stmt * ) _auto_dl ) ) ) ) , ( ( _auto__Xthis__ctor_pair -> _stmt__O8.__C8_s2 = ( 
#line 1384 "../../src/simpl.c"
( struct stmt * ) _auto_rs ) ) , _auto__Xthis__ctor_pair ) ) ) : ( ( ( 
#line 1384 "../../src/simpl.c"
struct pair * ) ( _auto_rs ) ) ) ) ; 
} } else 
#line 1387 "../../src/simpl.c"
{ 
#line 1387 "../../src/simpl.c"
if ( _auto_this -> _stmt__O8.__C8_e -> _node_base == 157 ) errorFI_PC__E ( ( int ) 
#line 1387 "../../src/simpl.c"
's' , ( char * ) "inlineF returns constructor") ; 

#line 1389 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 
} 
#line 1391 "../../src/simpl.c"
break ; 
} 
#line 1394 "../../src/simpl.c"
case 39 : case 10 : _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1397 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1398 "../../src/simpl.c"
break ; 

#line 1399 "../../src/simpl.c"
case 33 : _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1401 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1402 "../../src/simpl.c"
switch ( _auto_this -> _stmt_s -> _node_base ) { 
#line 1402 "../../src/simpl.c"
case 8 : case 115 : case 4 : break ; 
#line 1402 "../../src/simpl.c"

#line 1407 "../../src/simpl.c"
case 116 : if ( _auto_this -> _stmt_s -> _stmt_s ) switch ( _auto_this -> _stmt_s -> _stmt_s -> _node_base ) { 
#line 1407 "../../src/simpl.c"

#line 1409 "../../src/simpl.c"

#line 1410 "../../src/simpl.c"
case 3 : case 4 : case 115 : case 8 : break ; 

#line 1415 "../../src/simpl.c"
default : goto df ; 
} 
#line 1418 "../../src/simpl.c"
break ; 

#line 1419 "../../src/simpl.c"
default : df : error ( ( int ) 'w' , ( struct loc * ) ( & 
#line 1419 "../../src/simpl.c"
_auto_this -> _stmt_s -> _stmt_where ) , ( char * ) "statement not reached: case label missing") ; 
} 
#line 1423 "../../src/simpl.c"
break ; 

#line 1424 "../../src/simpl.c"
case 4 : _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1426 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1427 "../../src/simpl.c"
break ; 

#line 1428 "../../src/simpl.c"
case 115 : if ( del_list ) errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 1428 "../../src/simpl.c"
"label in block with destructors") ; 

#line 1430 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1431 "../../src/simpl.c"
break ; 

#line 1432 "../../src/simpl.c"
case 19 : { 
#line 1442 "../../src/simpl.c"
Pname _auto_n ; 

#line 1443 "../../src/simpl.c"
_auto_n = _table_look ( ( struct table * ) scope , _auto_this -> _stmt__O7.__C7_d -> _expr__O3.__C3_string , 115 ) ; 

#line 1444 "../../src/simpl.c"
if ( _auto_n == 0 ) error ( ( int ) 'i' , ( struct loc * ) 
#line 1444 "../../src/simpl.c"
( & _auto_this -> _stmt_where ) , ( char * ) "label%n missing", _auto_this -> _stmt__O7.__C7_d ) ; 

#line 1445 "../../src/simpl.c"
if ( _auto_n -> _name__O6.__C6_n_realscope != scope ) { 
#line 1445 "../../src/simpl.c"
Ptable _auto_r ; 

#line 1451 "../../src/simpl.c"
_auto_r = 0 ; 

#line 1453 "../../src/simpl.c"
{ 
#line 1453 "../../src/simpl.c"
Ptable _auto_q ; 

#line 1453 "../../src/simpl.c"
_auto_q = _auto_n -> _name__O6.__C6_n_realscope ; 

#line 1453 "../../src/simpl.c"
for ( ;( _auto_q != gtbl ) ;( _auto_q = _auto_q -> _table_next ) ) { 
#line 1453 "../../src/simpl.c"
{ 
#line 1454 "../../src/simpl.c"
Ptable _auto_p ; 

#line 1454 "../../src/simpl.c"
_auto_p = scope ; 

#line 1454 "../../src/simpl.c"
for ( ;( _auto_p != gtbl ) ;( _auto_p = _auto_p -> _table_next ) ) { 
#line 1454 "../../src/simpl.c"
if ( _auto_p == 
#line 1454 "../../src/simpl.c"
_auto_q ) 
#line 1455 "../../src/simpl.c"
{ 
#line 1455 "../../src/simpl.c"
_auto_r = _auto_p ; 

#line 1457 "../../src/simpl.c"
goto xyzzy ; 
} } } } 
#line 1462 "../../src/simpl.c"
xyzzy : if ( _auto_r == 0 ) error ( ( int ) 
#line 1462 "../../src/simpl.c"
'i' , ( struct loc * ) ( & _auto_this -> _stmt_where ) , ( char * ) 
#line 1462 "../../src/simpl.c"
"finding root of subtree") ; 

#line 1475 "../../src/simpl.c"
{ 
#line 1475 "../../src/simpl.c"
Ptable _auto_p ; 

#line 1475 "../../src/simpl.c"
_auto_p = _auto_n -> _name__O6.__C6_n_realscope ; 

#line 1475 "../../src/simpl.c"
for ( ;( _auto_p != _auto_r ) ;( _auto_p = _auto_p -> _table_next ) ) if ( _auto_p -> _table_init_stat == 
#line 1475 "../../src/simpl.c"
2 ) 
#line 1476 "../../src/simpl.c"
{ 
#line 1476 "../../src/simpl.c"
errorFPCloc__PC__E ( ( struct loc * ) ( & _auto_this -> _stmt_where ) , ( char 
#line 1476 "../../src/simpl.c"
* ) "goto%n pastD withIr", _auto_this -> _stmt__O7.__C7_d ) ; 

#line 1478 "../../src/simpl.c"
goto plugh ; 
} else 
#line 1480 "../../src/simpl.c"
if ( _auto_p -> _table_init_stat == 0 ) { 
#line 1480 "../../src/simpl.c"
int _auto_i ; 

#line 1482 "../../src/simpl.c"
{ 
#line 1482 "../../src/simpl.c"
Pname _auto_nn ; 

#line 1482 "../../src/simpl.c"
_auto_nn = _table_get_mem ( ( struct table * ) _auto_p , _auto_i = 1 ) ; 

#line 1482 "../../src/simpl.c"
for ( ;_auto_nn ;( _auto_nn = _table_get_mem ( ( struct table * ) _auto_p , ++ _auto_i ) ) ) 
#line 1482 "../../src/simpl.c"

#line 1483 "../../src/simpl.c"
if ( _auto_nn -> _expr__O4.__C4_n_initializer || _auto_nn -> _name_n_evaluated ) { 
#line 1483 "../../src/simpl.c"
errorFPCloc__PC__E ( ( struct loc * ) ( & 
#line 1483 "../../src/simpl.c"
_auto_nn -> _name_where ) , ( char * ) "goto%n pastId%n", _auto_this -> _stmt__O7.__C7_d , _auto_nn ) ; 

#line 1485 "../../src/simpl.c"
goto plugh ; 
} } } 
#line 1488 "../../src/simpl.c"
plugh : { 
#line 1498 "../../src/simpl.c"
Pstmt _auto_dd ; 
Pstmt _auto_ddt ; 

#line 1499 "../../src/simpl.c"
_auto_dd = 0 ; 

#line 1501 "../../src/simpl.c"
{ 
#line 1501 "../../src/simpl.c"
Ptable _auto_p ; 

#line 1501 "../../src/simpl.c"
_auto_p = scope ; 

#line 1501 "../../src/simpl.c"
for ( ;( _auto_p != _auto_r ) ;( _auto_p = _auto_p -> _table_next ) ) { 
#line 1501 "../../src/simpl.c"
int _auto_i ; 

#line 1503 "../../src/simpl.c"
{ 
#line 1503 "../../src/simpl.c"
Pname _auto_n ; 

#line 1503 "../../src/simpl.c"
_auto_n = _table_get_mem ( ( struct table * ) _auto_p , _auto_i = 1 ) ; 

#line 1503 "../../src/simpl.c"
for ( ;_auto_n ;( _auto_n = _table_get_mem ( ( struct table * ) _auto_p , ++ _auto_i ) ) ) 
#line 1503 "../../src/simpl.c"

#line 1503 "../../src/simpl.c"
{ 
#line 1503 "../../src/simpl.c"
Pname _auto_cln ; 

#line 1505 "../../src/simpl.c"
if ( _auto_n -> _expr__O2.__C2_tp == 0 ) continue ; 

#line 1507 "../../src/simpl.c"
if ( _auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_n -> _expr__O2.__C2_tp ) ) { 
#line 1507 "../../src/simpl.c"
Pclass _auto_cl ; 
Pname _auto_d ; 

#line 1508 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 

#line 1509 "../../src/simpl.c"
_auto_d = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 1509 "../../src/simpl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 1511 "../../src/simpl.c"
if ( _auto_d ) { 
#line 1511 "../../src/simpl.c"
Pref _auto_r ; 
Pexpr _auto_ee ; 
Pcall _auto_dl ; 
Pstmt _auto_dls ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1512 "../../src/simpl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1512 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1512 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_n ) , 
#line 1512 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1512 "../../src/simpl.c"
( struct name * ) _auto_d ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1513 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1513 "../../src/simpl.c"
struct expr * ) zero , ( struct expr * ) 0 ) ; 

#line 1514 "../../src/simpl.c"
_auto_dl = ( struct call * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1514 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1514 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_r ) , 
#line 1514 "../../src/simpl.c"
( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1515 "../../src/simpl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1515 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1515 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 1515 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1515 "../../src/simpl.c"
) _auto_dl ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1516 "../../src/simpl.c"
_auto_dl -> _node_base = 146 ; 

#line 1517 "../../src/simpl.c"
_auto_dl -> _expr__O5.__C5_fct_name = _auto_d ; 

#line 1518 "../../src/simpl.c"
if ( _auto_dd ) _auto_ddt -> _stmt_s_list = _auto_dls ; 
else 
#line 1521 "../../src/simpl.c"
_auto_dd = _auto_dls ; 

#line 1522 "../../src/simpl.c"
_auto_ddt = _auto_dls ; 
} } else 
#line 1526 "../../src/simpl.c"
if ( cl_obj_vec ) { 
#line 1526 "../../src/simpl.c"
Pclass _auto_cl ; 
Pname _auto_c ; 
Pname _auto_d ; 

#line 1527 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( cl_obj_vec -> _expr__O2.__C2_tp ) ) ) ; 

#line 1528 "../../src/simpl.c"
_auto_c = _classdef_has_ictor ( ( struct classdef * ) _auto_cl ) ; 

#line 1529 "../../src/simpl.c"
_auto_d = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 1529 "../../src/simpl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 1531 "../../src/simpl.c"
if ( _auto_d ) { 
#line 1531 "../../src/simpl.c"
Pstmt _auto_dls ; 
int _auto_esz ; 
Pexpr _auto_noe ; 
Pexpr _auto_sz ; 
Pexpr _auto_arg ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1533 "../../src/simpl.c"
_auto_esz = _type_tsizeof ( ( struct type * ) _auto_cl ) ; 

#line 1534 "../../src/simpl.c"
_auto_noe = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1534 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _type_tsizeof ( ( struct type * 
#line 1534 "../../src/simpl.c"
) _auto_n -> _expr__O2.__C2_tp ) / _auto_esz ) ) ) , ( struct expr * ) 0 ) 
#line 1534 "../../src/simpl.c"
; 

#line 1535 "../../src/simpl.c"
_auto_sz = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 150 , ( 
#line 1535 "../../src/simpl.c"
struct expr * ) ( ( ( struct expr * ) ( _auto_esz ) ) ) , 
#line 1535 "../../src/simpl.c"
( struct expr * ) 0 ) ; 

#line 1536 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1536 "../../src/simpl.c"
struct expr * ) _auto_d , ( struct expr * ) zero ) ; 

#line 1537 "../../src/simpl.c"
_expr_lval ( ( struct expr * ) _auto_d , 112 ) ; 

#line 1538 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1538 "../../src/simpl.c"
struct expr * ) _auto_sz , ( struct expr * ) _auto_arg ) ; 

#line 1539 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1539 "../../src/simpl.c"
struct expr * ) _auto_noe , ( struct expr * ) _auto_arg ) ; 

#line 1540 "../../src/simpl.c"
_auto_arg = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1540 "../../src/simpl.c"
struct expr * ) _auto_n , ( struct expr * ) _auto_arg ) ; 

#line 1541 "../../src/simpl.c"
_auto_arg = ( struct expr * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1541 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1541 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) vec_del_fct ) , 
#line 1541 "../../src/simpl.c"
( ( struct expr * ) _auto_arg ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1542 "../../src/simpl.c"
_auto_arg -> _node_base = 146 ; 

#line 1543 "../../src/simpl.c"
_auto_arg -> _expr__O5.__C5_fct_name = vec_del_fct ; 

#line 1544 "../../src/simpl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1544 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1544 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_n -> _name_where , ( ( struct stmt * ) 
#line 1544 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1544 "../../src/simpl.c"
) _auto_arg ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1545 "../../src/simpl.c"
if ( _auto_dd ) _auto_ddt -> _stmt_s_list = _auto_dls ; 
else 
#line 1548 "../../src/simpl.c"
_auto_dd = _auto_dls ; 

#line 1549 "../../src/simpl.c"
_auto_ddt = _auto_dls ; 
} } } } } 
#line 1557 "../../src/simpl.c"
if ( _auto_dd ) { 
#line 1557 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) 
#line 1557 "../../src/simpl.c"
_auto_dd ) ; 

#line 1559 "../../src/simpl.c"
{ 
#line 1559 "../../src/simpl.c"
Pstmt _auto_bs ; 

#line 1559 "../../src/simpl.c"
_auto_bs = ( struct stmt * ) _stmt__ctor ( ( struct stmt * ) 0 , ( int 
#line 1559 "../../src/simpl.c"
) _auto_this -> _node_base , _auto_this -> _stmt_where , ( struct stmt * ) 0 ) ; 

#line 1560 "../../src/simpl.c"
( * _auto_bs ) = ( * _auto_this ) ; 

#line 1561 "../../src/simpl.c"
_auto_this -> _node_base = 166 ; 

#line 1562 "../../src/simpl.c"
_auto_this -> _stmt_s = _auto_dd ; 

#line 1563 "../../src/simpl.c"
_auto_this -> _stmt__O8.__C8_s2 = _auto_bs ; 
} } } } } } } } 
#line 1568 "../../src/simpl.c"
break ; 

#line 1570 "../../src/simpl.c"
case 20 : _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1572 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1573 "../../src/simpl.c"
if ( _auto_this -> _stmt__O9.__C9_else_stmt ) _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_else_stmt ) ; 

#line 1574 "../../src/simpl.c"
break ; 

#line 1575 "../../src/simpl.c"
case 16 : if ( _auto_this -> _stmt__O9.__C9_for_init ) { 
#line 1577 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt__O9.__C9_for_init ) 
#line 1577 "../../src/simpl.c"
; 

#line 1579 "../../src/simpl.c"
if ( ( _auto_this -> _stmt__O9.__C9_for_init -> _node_base == 72 ) && ( _auto_this -> _stmt__O9.__C9_for_init -> _stmt__O8.__C8_e -> _expr__O2.__C2_tp == ( 
#line 1579 "../../src/simpl.c"
struct type * ) void_type ) ) 
#line 1580 "../../src/simpl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) 
#line 1580 "../../src/simpl.c"
"call of inline voidF in for-expression") ; 
} 
#line 1582 "../../src/simpl.c"
if ( _auto_this -> _stmt__O8.__C8_e ) _expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O8.__C8_e ) ; 

#line 1583 "../../src/simpl.c"
if ( _auto_this -> _stmt__O7.__C7_e2 ) { 
#line 1583 "../../src/simpl.c"
curr_expr = _auto_this -> _stmt__O7.__C7_e2 ; 

#line 1585 "../../src/simpl.c"
_expr_simpl ( ( struct expr * ) _auto_this -> _stmt__O7.__C7_e2 ) ; 

#line 1586 "../../src/simpl.c"
if ( ( _auto_this -> _stmt__O7.__C7_e2 -> _node_base == 168 ) && ( _auto_this -> _stmt__O7.__C7_e2 -> _expr__O2.__C2_tp == ( struct 
#line 1586 "../../src/simpl.c"
type * ) void_type ) ) 
#line 1587 "../../src/simpl.c"
errorFI_PC__E ( ( int ) 's' , ( char * ) "call of inline voidF in for-expression") 
#line 1587 "../../src/simpl.c"
; 
} 
#line 1589 "../../src/simpl.c"
_stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 

#line 1590 "../../src/simpl.c"
break ; 

#line 1591 "../../src/simpl.c"
case 116 : _block_simpl ( ( struct block * ) ( ( ( struct block * ) ( 
#line 1591 "../../src/simpl.c"
_auto_this ) ) ) ) ; 

#line 1593 "../../src/simpl.c"
break ; 

#line 1594 "../../src/simpl.c"
case 166 : break ; 
} 
#line 1599 "../../src/simpl.c"
if ( ( _auto_this -> _node_base != 116 ) && _auto_this -> _stmt_memtbl ) { 
#line 1599 "../../src/simpl.c"
int _auto_i ; 
Pstmt _auto_t1 ; 
Pstmt _auto_ss ; 
Pname _auto_cln ; 

#line 1601 "../../src/simpl.c"
_auto_t1 = ( _auto_this -> _stmt_s_list ? _stmt_simpl ( ( struct stmt * ) _auto_this -> _stmt_s_list ) : ( ( 
#line 1601 "../../src/simpl.c"
( struct stmt * ) ( 0 ) ) ) ) ; 

#line 1602 "../../src/simpl.c"
_auto_ss = 0 ; 

#line 1604 "../../src/simpl.c"
{ 
#line 1604 "../../src/simpl.c"
Pname _auto_tn ; 

#line 1604 "../../src/simpl.c"
_auto_tn = _table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , _auto_i = 1 ) ; 

#line 1604 "../../src/simpl.c"
for ( ;_auto_tn ;( _auto_tn = _table_get_mem ( ( struct table * ) _auto_this -> _stmt_memtbl , ++ _auto_i ) ) 
#line 1604 "../../src/simpl.c"
) 
#line 1604 "../../src/simpl.c"
{ 
#line 1604 "../../src/simpl.c"
if ( _auto_cln = _type_is_cl_obj ( ( struct type * ) _auto_tn -> _expr__O2.__C2_tp ) ) { 
#line 1604 "../../src/simpl.c"

#line 1606 "../../src/simpl.c"
Pclass _auto_cl ; 
Pname _auto_d ; 

#line 1607 "../../src/simpl.c"
_auto_cl = ( ( ( struct classdef * ) ( _auto_cln -> _expr__O2.__C2_tp ) ) ) ; 

#line 1608 "../../src/simpl.c"
_auto_d = ( _table_look ( ( struct table * ) ( ( struct classdef * ) _auto_cl ) -> 
#line 1608 "../../src/simpl.c"
_classdef_memtbl , ( char * ) "_dtor", ( int ) 0 ) ) ; 

#line 1609 "../../src/simpl.c"
if ( _auto_d ) { 
#line 1609 "../../src/simpl.c"
Pref _auto_r ; 
Pexpr _auto_ee ; 
Pcall _auto_dl ; 
Pstmt _auto_dls ; 
struct ref * _auto__Xthis__ctor_ref ; 
struct call * _auto__Xthis__ctor_call ; 
struct estmt * _auto__Xthis__ctor_estmt ; 

#line 1610 "../../src/simpl.c"
_auto_r = ( struct ref * ) ( ( _auto__Xthis__ctor_ref = 0 ) , ( ( ( 
#line 1610 "../../src/simpl.c"
_auto__Xthis__ctor_ref = 0 ) , ( _auto__Xthis__ctor_ref = ( struct ref * ) _expr__ctor ( ( ( struct 
#line 1610 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_ref ) ) , 45 , ( ( struct expr * ) _auto_tn ) , 
#line 1610 "../../src/simpl.c"
( struct expr * ) 0 ) ) ) , ( ( _auto__Xthis__ctor_ref -> _expr__O5.__C5_mem = ( 
#line 1610 "../../src/simpl.c"
( struct name * ) _auto_d ) ) , _auto__Xthis__ctor_ref ) ) ) ; 

#line 1611 "../../src/simpl.c"
_auto_ee = ( struct expr * ) _expr__ctor ( ( struct expr * ) 0 , 140 , ( 
#line 1611 "../../src/simpl.c"
struct expr * ) zero , ( struct expr * ) 0 ) ; 

#line 1612 "../../src/simpl.c"
_auto_dl = ( struct call * ) ( ( _auto__Xthis__ctor_call = 0 ) , ( ( ( 
#line 1612 "../../src/simpl.c"
_auto__Xthis__ctor_call = 0 ) , ( _auto__Xthis__ctor_call = ( struct call * ) _expr__ctor ( ( ( struct 
#line 1612 "../../src/simpl.c"
expr * ) ( _auto__Xthis__ctor_call ) ) , 109 , ( ( struct expr * ) _auto_r ) , 
#line 1612 "../../src/simpl.c"
( ( struct expr * ) _auto_ee ) ) ) ) , _auto__Xthis__ctor_call ) ) ; 

#line 1613 "../../src/simpl.c"
_auto_dls = ( struct stmt * ) ( ( _auto__Xthis__ctor_estmt = 0 ) , ( ( ( 
#line 1613 "../../src/simpl.c"
_auto__Xthis__ctor_estmt = 0 ) , ( _auto__Xthis__ctor_estmt = ( struct estmt * ) _stmt__ctor ( ( ( struct 
#line 1613 "../../src/simpl.c"
stmt * ) ( _auto__Xthis__ctor_estmt ) ) , 72 , _auto_tn -> _name_where , ( ( struct stmt * ) 
#line 1613 "../../src/simpl.c"
0 ) ) ) ) , ( ( _auto__Xthis__ctor_estmt -> _stmt__O8.__C8_e = ( ( struct expr * 
#line 1613 "../../src/simpl.c"
) _auto_dl ) ) , _auto__Xthis__ctor_estmt ) ) ) ; 

#line 1614 "../../src/simpl.c"
_auto_dl -> _node_base = 146 ; 

#line 1615 "../../src/simpl.c"
_auto_dl -> _expr__O5.__C5_fct_name = _auto_d ; 

#line 1616 "../../src/simpl.c"
_auto_dls -> _stmt_s_list = _auto_ss ; 

#line 1617 "../../src/simpl.c"
_auto_ss = _auto_dls ; 
} } } 
#line 1622 "../../src/simpl.c"
if ( _auto_ss ) { 
#line 1622 "../../src/simpl.c"
Pstmt _auto_t2 ; 

#line 1623 "../../src/simpl.c"
_auto_t2 = _stmt_simpl ( ( struct stmt * ) _auto_ss ) ; 

#line 1624 "../../src/simpl.c"
switch ( _auto_this -> _node_base ) { 
#line 1624 "../../src/simpl.c"
case 20 : { 
#line 1626 "../../src/simpl.c"
Pstmt _auto_es ; 

#line 1626 "../../src/simpl.c"
_auto_es = _stmt_copy ( ( struct stmt * ) _auto_ss ) ; 

#line 1627 "../../src/simpl.c"
if ( _auto_this -> _stmt__O9.__C9_else_stmt ) { 
#line 1627 "../../src/simpl.c"
{ 
#line 1628 "../../src/simpl.c"
Pstmt _auto_t ; 

#line 1628 "../../src/simpl.c"
_auto_t = _auto_es ; 

#line 1628 "../../src/simpl.c"
for ( ;_auto_t -> _stmt_s_list ;( _auto_t = _auto_t -> _stmt_s_list ) ) ; 

#line 1629 "../../src/simpl.c"
_auto_t -> _stmt_s_list = _auto_this -> _stmt__O9.__C9_else_stmt ; 
} } 
#line 1631 "../../src/simpl.c"
_auto_this -> _stmt__O9.__C9_else_stmt = _auto_es ; 

#line 1632 "../../src/simpl.c"
_auto_t2 -> _stmt_s_list = _auto_this -> _stmt_s ; 

#line 1633 "../../src/simpl.c"
_auto_this -> _stmt_s = _auto_ss ; 

#line 1634 "../../src/simpl.c"
break ; 

#line 1635 "../../src/simpl.c"
case 28 : case 39 : case 16 : case 10 : case 33 : errorFI_PC__E ( ( int ) 
#line 1635 "../../src/simpl.c"
's' , ( char * ) "E in%kS needs temporary ofC%n with destructor", _auto_this -> _node_base , _auto_cln ) ; 

#line 1641 "../../src/simpl.c"
break ; 

#line 1642 "../../src/simpl.c"
default : if ( _auto_t1 ) { 
#line 1643 "../../src/simpl.c"
_auto_t2 -> _stmt_s_list = _auto_this -> _stmt_s_list ; 

#line 1645 "../../src/simpl.c"
_auto_this -> _stmt_s_list = _auto_ss ; 

#line 1646 "../../src/simpl.c"
{ 
#line 1646 "../../src/simpl.c"
{ _auto__result = _auto_t1 ; 

#line 1646 "../../src/simpl.c"
return _auto__result ; 
} } } 
#line 1648 "../../src/simpl.c"
_auto_this -> _stmt_s_list = _auto_ss ; 

#line 1649 "../../src/simpl.c"
{ 
#line 1649 "../../src/simpl.c"
{ _auto__result = _auto_t2 ; 

#line 1649 "../../src/simpl.c"
return _auto__result ; 
} } } } } 
#line 1652 "../../src/simpl.c"
{ 
#line 1652 "../../src/simpl.c"
{ _auto__result = ( _auto_t1 ? _auto_t1 : _auto_this ) ; 

#line 1652 "../../src/simpl.c"
return _auto__result ; 
} } } } 
#line 1655 "../../src/simpl.c"
{ 
#line 1655 "../../src/simpl.c"
{ _auto__result = ( _auto_this -> _stmt_s_list ? _stmt_simpl ( ( struct stmt * 
#line 1655 "../../src/simpl.c"
) _auto_this -> _stmt_s_list ) : _auto_this ) ; 

#line 1655 "../../src/simpl.c"
return _auto__result ; 
} } } ; 

#line 1658 "../../src/simpl.c"
Pstmt _stmt_copy ( _auto_this ) register struct stmt * _auto_this ; 

#line 1661 "../../src/simpl.c"
{ 
#line 1661 "../../src/simpl.c"
Pstmt _auto__result ; 
Pstmt _auto_ns ; 

#line 1662 "../../src/simpl.c"
_auto_ns = ( struct stmt * ) _stmt__ctor ( ( struct stmt * ) 0 , ( int 
#line 1662 "../../src/simpl.c"
) 0 , curloc , ( struct stmt * ) 0 ) ; 

#line 1664 "../../src/simpl.c"
( * _auto_ns ) = ( * _auto_this ) ; 

#line 1665 "../../src/simpl.c"
if ( _auto_this -> _stmt_s ) _auto_ns -> _stmt_s = _stmt_copy ( ( struct stmt * ) _auto_this -> _stmt_s ) ; 
#line 1665 "../../src/simpl.c"

#line 1666 "../../src/simpl.c"
if ( _auto_this -> _stmt_s_list ) _auto_ns -> _stmt_s_list = _stmt_copy ( ( struct stmt * ) _auto_this -> _stmt_s_list ) ; 
#line 1666 "../../src/simpl.c"

#line 1668 "../../src/simpl.c"
switch ( _auto_this -> _node_base ) { 
#line 1668 "../../src/simpl.c"
case 166 : _auto_ns -> _stmt__O8.__C8_s2 = _stmt_copy ( ( struct stmt * ) 
#line 1668 "../../src/simpl.c"
_auto_this -> _stmt__O8.__C8_s2 ) ; 

#line 1671 "../../src/simpl.c"
break ; 
} 
#line 1674 "../../src/simpl.c"
{ 
#line 1674 "../../src/simpl.c"
{ _auto__result = _auto_ns ; 

#line 1674 "../../src/simpl.c"
return _auto__result ; 
} } } ; 

/* the end */
