#line 1 "../../lib/static/_ctor.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/static/_ctor.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/static/_ctor.c"
typedef int ( * PFV ) ( ) ; 

#line 4 "../../lib/static/_ctor.c"
extern PFV _ctors [ 1] ; 
PFV _ctors [ 1] = { 0 } ; 

/* the end */
