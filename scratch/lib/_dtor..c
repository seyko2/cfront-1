#line 1 "../../lib/static/_dtor.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/static/_dtor.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/static/_dtor.c"
typedef int ( * PFV ) ( ) ; 

#line 4 "../../lib/static/_dtor.c"
extern PFV _dtors [ 1] ; 
PFV _dtors [ 1] = { 0 } ; 

/* the end */
