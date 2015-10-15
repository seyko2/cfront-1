#line 1 "../../src/norm2.c"

/* <<cfront 10/10/85>> */
/* < ../../src/norm2.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../src/norm2.c"
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

#line 23 "../../src/norm2.c"
extern char * malloc ( ) ; 

#line 25 "../../src/norm2.c"
struct fct * _fct__ctor ( _auto_this , _auto_t , _auto_arg , _auto_known ) register struct fct * _auto_this ; 
struct type * _auto_t ; 
struct name * _auto_arg ; 
int _auto_known ; 

#line 26 "../../src/norm2.c"
{ 
#line 26 "../../src/norm2.c"
register Pname _auto_n ; 

#line 57 "../../src/norm2.c"
if ( _auto_this == 0 ) _auto_this = ( struct fct * ) _new ( ( long ) 
#line 57 "../../src/norm2.c"
52) ; 

#line 27 "../../src/norm2.c"
Nt ++ ; 

#line 28 "../../src/norm2.c"
_auto_this -> _node_base = 108 ; 

#line 29 "../../src/norm2.c"
_auto_this -> _fct_nargs_known = _auto_known ; 

#line 30 "../../src/norm2.c"
_auto_this -> _fct_returns = _auto_t ; 

#line 31 "../../src/norm2.c"
_auto_this -> _fct_argtype = _auto_arg ; 

#line 34 "../../src/norm2.c"
if ( ( _auto_arg == 0 ) || ( _auto_arg -> _node_base == 140 ) ) { 
#line 34 "../../src/norm2.c"
return 
#line 34 "../../src/norm2.c"
_auto_this ; 
} 
#line 36 "../../src/norm2.c"
; 

#line 37 "../../src/norm2.c"
for ( _auto_n = _auto_arg ;_auto_n ;( _auto_n = _auto_n -> _name_n_list ) ) { 
#line 37 "../../src/norm2.c"
switch ( _auto_n -> _expr__O2.__C2_tp -> _node_base ) 
#line 37 "../../src/norm2.c"

#line 38 "../../src/norm2.c"
{ 
#line 38 "../../src/norm2.c"
case 38 : _auto_this -> _fct_argtype = 0 ; 

#line 41 "../../src/norm2.c"
_auto_this -> _fct_nargs = 0 ; 

#line 42 "../../src/norm2.c"
_auto_this -> _fct_nargs_known = 1 ; 

#line 43 "../../src/norm2.c"
if ( _auto_n -> _expr__O3.__C3_string ) errorFPC__E ( ( char * ) "voidFA%n", _auto_n ) ; 
else 
#line 45 "../../src/norm2.c"
if ( _auto_this -> _fct_nargs || _auto_n -> _name_n_list ) { 
#line 45 "../../src/norm2.c"
errorFPC__E ( ( char * ) "voidFA") 
#line 45 "../../src/norm2.c"
; 

#line 47 "../../src/norm2.c"
_auto_this -> _fct_nargs_known = 0 ; 
} 
#line 49 "../../src/norm2.c"
break ; 

#line 50 "../../src/norm2.c"
case 6 : case 13 : break ; 

#line 53 "../../src/norm2.c"
default : _auto_this -> _fct_nargs ++ ; 
} } 
#line 57 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 59 "../../src/norm2.c"
Pexpr expr_free ; 

#line 62 "../../src/norm2.c"
struct expr * _expr__ctor ( _auto_this , _auto_ba , _auto_a , _auto_b ) register struct expr * _auto_this ; 
int _auto_ba ; 
struct expr * _auto_a ; 
struct expr * _auto_b ; 

#line 63 "../../src/norm2.c"
{ 
#line 63 "../../src/norm2.c"
register Pexpr _auto_p ; 

#line 66 "../../src/norm2.c"
if ( _auto_this ) goto ret ; 

#line 68 "../../src/norm2.c"
if ( ( _auto_p = expr_free ) == 0 ) { 
#line 68 "../../src/norm2.c"
register Pexpr _auto_q ; 

#line 69 "../../src/norm2.c"
_auto_q = ( ( ( struct expr * ) ( malloc ( 6000) ) ) ) ; 
#line 69 "../../src/norm2.c"

#line 70 "../../src/norm2.c"
for ( _auto_p = ( expr_free = ( & ( _auto_q [ 249] ) ) ) ;( 
#line 70 "../../src/norm2.c"
_auto_q < _auto_p ) ;( _auto_p -- ) ) 
#line 70 "../../src/norm2.c"
_auto_p -> _expr__O3.__C3_e1 = ( _auto_p - 1 ) ; 

#line 71 "../../src/norm2.c"
( _auto_p + 1 ) -> _expr__O3.__C3_e1 = 0 ; 
} else 
#line 75 "../../src/norm2.c"
expr_free = _auto_p -> _expr__O3.__C3_e1 ; 

#line 86 "../../src/norm2.c"
{ 
#line 86 "../../src/norm2.c"
register int * _auto_pp ; 

#line 87 "../../src/norm2.c"
_auto_pp = ( ( ( int * ) ( _auto_p + 1 ) ) ) ; 

#line 88 "../../src/norm2.c"
while ( ( ( ( int * ) ( _auto_p ) ) ) < _auto_pp ) 
#line 88 "../../src/norm2.c"

#line 88 "../../src/norm2.c"
( * ( -- _auto_pp ) ) = 0 ; 
} 
#line 91 "../../src/norm2.c"
_auto_this = ( struct expr * ) _auto_p ; 

#line 94 "../../src/norm2.c"
ret : Ne ++ ; 

#line 96 "../../src/norm2.c"
_auto_this -> _node_base = _auto_ba ; 

#line 97 "../../src/norm2.c"
_auto_this -> _expr__O3.__C3_e1 = _auto_a ; 

#line 98 "../../src/norm2.c"
_auto_this -> _expr__O4.__C4_e2 = _auto_b ; 

#line 99 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 101 "../../src/norm2.c"
int _expr__dtor ( _auto_this , _auto__free ) register struct expr * _auto_this ; 
int _auto__free ; 

#line 102 "../../src/norm2.c"
{ 
#line 102 "../../src/norm2.c"
NFe ++ ; 

#line 105 "../../src/norm2.c"
_auto_this -> _expr__O3.__C3_e1 = expr_free ; 

#line 106 "../../src/norm2.c"
expr_free = ( struct expr * ) _auto_this ; 

#line 107 "../../src/norm2.c"
_auto_this = 0 ; 

#line 108 "../../src/norm2.c"
if ( _auto_this ) if ( _auto__free ) _delete ( ( int * ) _auto_this ) ; 
} ; 

#line 110 "../../src/norm2.c"
Pstmt stmt_free ; 

#line 113 "../../src/norm2.c"
struct stmt * _stmt__ctor ( _auto_this , _auto_ba , _auto_ll , _auto_a ) register struct stmt * _auto_this ; 
int _auto_ba ; 
struct loc _auto_ll ; 
struct stmt * _auto_a ; 

#line 114 "../../src/norm2.c"
{ 
#line 114 "../../src/norm2.c"
register Pstmt _auto_p ; 

#line 117 "../../src/norm2.c"
if ( ( _auto_p = stmt_free ) == 0 ) { 
#line 117 "../../src/norm2.c"
register Pstmt _auto_q ; 

#line 118 "../../src/norm2.c"
_auto_q = ( ( ( struct stmt * ) ( malloc ( 9000) ) ) ) ; 
#line 118 "../../src/norm2.c"

#line 119 "../../src/norm2.c"
for ( _auto_p = ( stmt_free = ( & ( _auto_q [ 249] ) ) ) ;( 
#line 119 "../../src/norm2.c"
_auto_q < _auto_p ) ;( _auto_p -- ) ) 
#line 119 "../../src/norm2.c"
_auto_p -> _stmt_s_list = ( _auto_p - 1 ) ; 

#line 120 "../../src/norm2.c"
( _auto_p + 1 ) -> _stmt_s_list = 0 ; 
} else 
#line 123 "../../src/norm2.c"
stmt_free = _auto_p -> _stmt_s_list ; 

#line 134 "../../src/norm2.c"
{ 
#line 134 "../../src/norm2.c"
register int * _auto_pp ; 

#line 135 "../../src/norm2.c"
_auto_pp = ( ( ( int * ) ( _auto_p + 1 ) ) ) ; 

#line 136 "../../src/norm2.c"
while ( ( ( ( int * ) ( _auto_p ) ) ) < _auto_pp ) 
#line 136 "../../src/norm2.c"

#line 136 "../../src/norm2.c"
( * ( -- _auto_pp ) ) = 0 ; 
} 
#line 139 "../../src/norm2.c"
_auto_this = ( struct stmt * ) _auto_p ; 

#line 141 "../../src/norm2.c"
Ns ++ ; 

#line 142 "../../src/norm2.c"
_auto_this -> _node_base = _auto_ba ; 

#line 143 "../../src/norm2.c"
_auto_this -> _stmt_where = _auto_ll ; 

#line 144 "../../src/norm2.c"
_auto_this -> _stmt_s = _auto_a ; 

#line 145 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 147 "../../src/norm2.c"
int _stmt__dtor ( _auto_this , _auto__free ) register struct stmt * _auto_this ; 
int _auto__free ; 

#line 148 "../../src/norm2.c"
{ 
#line 148 "../../src/norm2.c"
NFs ++ ; 

#line 150 "../../src/norm2.c"
_auto_this -> _stmt_s_list = stmt_free ; 

#line 151 "../../src/norm2.c"
stmt_free = ( struct stmt * ) _auto_this ; 

#line 152 "../../src/norm2.c"
_auto_this = 0 ; 

#line 153 "../../src/norm2.c"
if ( _auto_this ) if ( _auto__free ) _delete ( ( int * ) _auto_this ) ; 
} ; 

#line 155 "../../src/norm2.c"
struct classdef * _classdef__ctor ( _auto_this , _auto_b , _auto_n ) register struct classdef * _auto_this ; 
int _auto_b ; 
struct name * _auto_n ; 

#line 156 "../../src/norm2.c"
{ 
#line 156 "../../src/norm2.c"
if ( _auto_this == 0 ) _auto_this = ( struct classdef * ) _new ( ( long 
#line 156 "../../src/norm2.c"
) 76) ; 

#line 157 "../../src/norm2.c"
_auto_this -> _node_base = 6 ; 

#line 158 "../../src/norm2.c"
_auto_this -> _classdef_csu = _auto_b ; 

#line 159 "../../src/norm2.c"
_auto_this -> _classdef_pubmem = _auto_n ; 

#line 160 "../../src/norm2.c"
_auto_this -> _classdef_memtbl = ( struct table * ) _table__ctor ( ( struct table * ) 0 , 12 , 
#line 160 "../../src/norm2.c"
( struct table * ) 0 , ( struct name * ) 0 ) ; 

#line 161 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 163 "../../src/norm2.c"
struct basetype * _basetype__ctor ( _auto_this , _auto_b , _auto_n ) register struct basetype * _auto_this ; 
int _auto_b ; 
struct name * _auto_n ; 

#line 164 "../../src/norm2.c"
{ 
#line 164 "../../src/norm2.c"
if ( _auto_this == 0 ) _auto_this = ( struct basetype * ) _new ( ( long 
#line 164 "../../src/norm2.c"
) 36) ; 

#line 166 "../../src/norm2.c"
Nbt ++ ; 

#line 167 "../../src/norm2.c"
switch ( _auto_b ) { 
#line 167 "../../src/norm2.c"
case 0 : break ; 

#line 169 "../../src/norm2.c"
case 35 : _auto_this -> _basetype_b_typedef = 1 ; 

#line 169 "../../src/norm2.c"
break ; 

#line 170 "../../src/norm2.c"
case 75 : _auto_this -> _basetype_b_inline = 1 ; 

#line 170 "../../src/norm2.c"
break ; 

#line 171 "../../src/norm2.c"
case 77 : _auto_this -> _basetype_b_virtual = 1 ; 

#line 171 "../../src/norm2.c"
break ; 

#line 172 "../../src/norm2.c"
case 26 : _auto_this -> _basetype_b_const = 1 ; 

#line 172 "../../src/norm2.c"
break ; 

#line 173 "../../src/norm2.c"
case 37 : _auto_this -> _basetype_b_unsigned = 1 ; 

#line 173 "../../src/norm2.c"
break ; 

#line 174 "../../src/norm2.c"
case 18 : case 76 : case 14 : case 31 : case 2 : case 27 : _auto_this -> _basetype_b_sto = 
#line 174 "../../src/norm2.c"
_auto_b ; 

#line 179 "../../src/norm2.c"
break ; 

#line 180 "../../src/norm2.c"
case 29 : _auto_this -> _basetype_b_short = 1 ; 

#line 180 "../../src/norm2.c"
break ; 

#line 181 "../../src/norm2.c"
case 22 : _auto_this -> _basetype_b_long = 1 ; 

#line 181 "../../src/norm2.c"
break ; 

#line 182 "../../src/norm2.c"
case 141 : case 138 : case 38 : case 5 : case 21 : case 15 : case 11 : 
#line 182 "../../src/norm2.c"

#line 188 "../../src/norm2.c"
_auto_this -> _node_base = _auto_b ; 

#line 188 "../../src/norm2.c"
break ; 

#line 189 "../../src/norm2.c"
case 97 : case 119 : case 121 : case 114 : case 1 : _auto_this -> _node_base = _auto_b ; 

#line 195 "../../src/norm2.c"
_auto_this -> _basetype_b_name = _auto_n ; 

#line 196 "../../src/norm2.c"
break ; 

#line 197 "../../src/norm2.c"
default : errorFI_PC__E ( ( int ) 'i' , ( char * ) "badBT:%k", _auto_b ) ; 
#line 197 "../../src/norm2.c"
} 
#line 200 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 203 "../../src/norm2.c"
Pname name_free ; 

#line 205 "../../src/norm2.c"
struct name * _name__ctor ( _auto_this , _auto_s ) register struct name * _auto_this ; 
char * _auto_s ; 

#line 206 "../../src/norm2.c"
{ 
#line 206 "../../src/norm2.c"
register Pname _auto_p ; 

#line 209 "../../src/norm2.c"
if ( ( _auto_p = name_free ) == 0 ) { 
#line 209 "../../src/norm2.c"
register Pname _auto_q ; 

#line 210 "../../src/norm2.c"
_auto_q = ( ( ( struct name * ) ( malloc ( 17000) ) ) ) ; 
#line 210 "../../src/norm2.c"

#line 211 "../../src/norm2.c"
for ( _auto_p = ( name_free = ( & ( _auto_q [ 249] ) ) ) ;( 
#line 211 "../../src/norm2.c"
_auto_q < _auto_p ) ;( _auto_p -- ) ) 
#line 211 "../../src/norm2.c"
_auto_p -> _name_n_tbl_list = ( _auto_p - 1 ) ; 

#line 212 "../../src/norm2.c"
( _auto_p + 1 ) -> _name_n_tbl_list = 0 ; 
} else 
#line 216 "../../src/norm2.c"
name_free = _auto_p -> _name_n_tbl_list ; 

#line 227 "../../src/norm2.c"
{ 
#line 227 "../../src/norm2.c"
register int * _auto_pp ; 

#line 228 "../../src/norm2.c"
_auto_pp = ( ( ( int * ) ( _auto_p + 1 ) ) ) ; 

#line 229 "../../src/norm2.c"
while ( ( ( ( int * ) ( _auto_p ) ) ) < _auto_pp ) 
#line 229 "../../src/norm2.c"

#line 229 "../../src/norm2.c"
( * ( -- _auto_pp ) ) = 0 ; 
} 
#line 232 "../../src/norm2.c"
( ( _auto_this = ( struct name * ) _auto_p ) , ( _auto_this = ( struct 
#line 232 "../../src/norm2.c"
name * ) _expr__ctor ( ( ( struct expr * ) ( _auto_this ) ) , 85 , ( 
#line 232 "../../src/norm2.c"
struct expr * ) 0 , ( struct expr * ) 0 ) ) ) ; 
#line 232 "../../src/norm2.c"

#line 235 "../../src/norm2.c"
Nn ++ ; 

#line 236 "../../src/norm2.c"
_auto_this -> _expr__O3.__C3_string = _auto_s ; 

#line 237 "../../src/norm2.c"
_auto_this -> _name_where = curloc ; 

#line 238 "../../src/norm2.c"
_auto_this -> _name_lex_level = bl_level ; 

#line 239 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 242 "../../src/norm2.c"
int _name__dtor ( _auto_this , _auto__free ) register struct name * _auto_this ; 
int _auto__free ; 

#line 243 "../../src/norm2.c"
{ 
#line 243 "../../src/norm2.c"
NFn ++ ; 

#line 246 "../../src/norm2.c"
_auto_this -> _name_n_tbl_list = name_free ; 

#line 247 "../../src/norm2.c"
name_free = ( struct name * ) _auto_this ; 

#line 248 "../../src/norm2.c"
_auto_this = 0 ; 

#line 249 "../../src/norm2.c"
if ( _auto_this ) _expr__dtor ( ( struct expr * ) _auto_this , _auto__free ) ; 
} ; 

#line 252 "../../src/norm2.c"
struct nlist * _nlist__ctor ( _auto_this , _auto_n ) register struct nlist * _auto_this ; 
struct name * _auto_n ; 

#line 253 "../../src/norm2.c"
{ 
#line 253 "../../src/norm2.c"
Pname _auto_nn ; 

#line 262 "../../src/norm2.c"
if ( _auto_this == 0 ) _auto_this = ( struct nlist * ) _new ( ( long ) 
#line 262 "../../src/norm2.c"
8) ; 

#line 256 "../../src/norm2.c"
if ( _auto_n == 0 ) errorFI_PC__E ( ( int ) 'i' , ( char * ) 
#line 256 "../../src/norm2.c"
"nlist.nlist(0)") ; 

#line 258 "../../src/norm2.c"
_auto_this -> _nlist_head = _auto_n ; 

#line 259 "../../src/norm2.c"
for ( _auto_nn = _auto_n ;_auto_nn -> _name_n_list ;( _auto_nn = _auto_nn -> _name_n_list ) ) ; 

#line 260 "../../src/norm2.c"
_auto_this -> _nlist_tail = _auto_nn ; 

#line 261 "../../src/norm2.c"
Nl ++ ; 

#line 262 "../../src/norm2.c"
return _auto_this ; 
} ; 

#line 264 "../../src/norm2.c"
int _nlist_add_list ( _auto_this , _auto_n ) register struct nlist * _auto_this ; 
struct name * _auto_n ; 

#line 265 "../../src/norm2.c"
{ 
#line 265 "../../src/norm2.c"
Pname _auto_nn ; 

#line 266 "../../src/norm2.c"
if ( _auto_n -> _expr__O2.__C2_tp -> _type_defined & 010 ) { 
#line 266 "../../src/norm2.c"
return ; 
} 
#line 267 "../../src/norm2.c"
; 

#line 269 "../../src/norm2.c"
_auto_this -> _nlist_tail -> _name_n_list = _auto_n ; 

#line 270 "../../src/norm2.c"
for ( _auto_nn = _auto_n ;_auto_nn -> _name_n_list ;( _auto_nn = _auto_nn -> _name_n_list ) ) ; 

#line 271 "../../src/norm2.c"
_auto_this -> _nlist_tail = _auto_nn ; 
} ; 

#line 274 "../../src/norm2.c"
int NFl = 0 ; 

#line 276 "../../src/norm2.c"
extern Pname name_unlist ( _auto_l ) struct nlist * _auto_l ; 

#line 277 "../../src/norm2.c"
{ 
#line 277 "../../src/norm2.c"
Pname _auto__result ; 
Pname _auto_n ; 

#line 279 "../../src/norm2.c"
if ( _auto_l == 0 ) { 
#line 279 "../../src/norm2.c"
{ _auto__result = 0 ; 

#line 279 "../../src/norm2.c"
return _auto__result ; 
} } 
#line 280 "../../src/norm2.c"
_auto_n = _auto_l -> _nlist_head ; 

#line 281 "../../src/norm2.c"
NFl ++ ; 

#line 282 "../../src/norm2.c"
_delete ( ( int * ) _auto_l ) ; 

#line 283 "../../src/norm2.c"
{ 
#line 283 "../../src/norm2.c"
{ _auto__result = _auto_n ; 

#line 283 "../../src/norm2.c"
return _auto__result ; 
} } } ; 

#line 286 "../../src/norm2.c"
extern Pstmt stmt_unlist ( _auto_l ) struct slist * _auto_l ; 

#line 287 "../../src/norm2.c"
{ 
#line 287 "../../src/norm2.c"
Pstmt _auto__result ; 
Pstmt _auto_s ; 

#line 289 "../../src/norm2.c"
if ( _auto_l == 0 ) { 
#line 289 "../../src/norm2.c"
{ _auto__result = 0 ; 

#line 289 "../../src/norm2.c"
return _auto__result ; 
} } 
#line 290 "../../src/norm2.c"
_auto_s = _auto_l -> _slist_head ; 

#line 291 "../../src/norm2.c"
NFl ++ ; 

#line 292 "../../src/norm2.c"
_delete ( ( int * ) _auto_l ) ; 

#line 293 "../../src/norm2.c"
{ 
#line 293 "../../src/norm2.c"
{ _auto__result = _auto_s ; 

#line 293 "../../src/norm2.c"
return _auto__result ; 
} } } ; 

#line 296 "../../src/norm2.c"
extern Pexpr expr_unlist ( _auto_l ) struct elist * _auto_l ; 

#line 297 "../../src/norm2.c"
{ 
#line 297 "../../src/norm2.c"
Pexpr _auto__result ; 
Pexpr _auto_e ; 

#line 299 "../../src/norm2.c"
if ( _auto_l == 0 ) { 
#line 299 "../../src/norm2.c"
{ _auto__result = 0 ; 

#line 299 "../../src/norm2.c"
return _auto__result ; 
} } 
#line 300 "../../src/norm2.c"
_auto_e = _auto_l -> _elist_head ; 

#line 301 "../../src/norm2.c"
NFl ++ ; 

#line 302 "../../src/norm2.c"
_delete ( ( int * ) _auto_l ) ; 

#line 303 "../../src/norm2.c"
{ 
#line 303 "../../src/norm2.c"
{ _auto__result = _auto_e ; 

#line 303 "../../src/norm2.c"
return _auto__result ; 
} } } ; 

/* the end */
