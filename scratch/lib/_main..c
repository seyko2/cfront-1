#line 1 "../../lib/static/_main.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/static/_main.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/static/_main.c"

#line 4 "../../lib/static/_main.c"
extern int _main ( ) 
#line 5 "../../lib/static/_main.c"
{ 
#line 5 "../../lib/static/_main.c"
typedef int ( * PFV ) ( ) ; 

#line 7 "../../lib/static/_main.c"
extern PFV _ctors [ ] ; 

#line 9 "../../lib/static/_main.c"
extern int atexit ( ) ; 

#line 10 "../../lib/static/_main.c"
extern int dtors ( ) ; 
PFV * _auto_pf ; 

#line 11 "../../lib/static/_main.c"
atexit ( ( ( int * ) ( dtors ) ) ) ; 

#line 13 "../../lib/static/_main.c"
for ( _auto_pf = _ctors ;( * _auto_pf ) ;( _auto_pf ++ ) ) ( * ( * 
#line 13 "../../lib/static/_main.c"
_auto_pf ) ) ( ) ; 
} ; 

/* the end */
