#line 1 "../../lib/new/_vec.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/new/_vec.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/new/_vec.c"
typedef int * PV ; 
typedef int ( * PF ) ( ) ; 

#line 7 "../../lib/new/_vec.c"
PV _vec_new ( _auto_op , _auto_n , _auto_sz , _auto_f ) int * _auto_op ; 
int _auto_n ; 
int _auto_sz ; 
int * _auto_f ; 

#line 12 "../../lib/new/_vec.c"
{ 
#line 12 "../../lib/new/_vec.c"
PV _auto__result ; 
register int _auto_i ; 
register char * _auto_p ; 

#line 15 "../../lib/new/_vec.c"
if ( _auto_op == 0 ) _auto_op = ( ( ( int * ) ( ( 
#line 15 "../../lib/new/_vec.c"
( char * ) ( _new ( ( long ) ( _auto_n * _auto_sz ) ) ) 
#line 15 "../../lib/new/_vec.c"
) ) ) ) ; 

#line 16 "../../lib/new/_vec.c"
_auto_p = ( ( ( char * ) ( _auto_op ) ) ) ; 

#line 17 "../../lib/new/_vec.c"
for ( _auto_i = 0 ;( _auto_i < _auto_n ) ;( _auto_i ++ ) ) ( * ( 
#line 17 "../../lib/new/_vec.c"
( ( int ( * ) ( ) ) ( _auto_f ) ) ) ) 
#line 17 "../../lib/new/_vec.c"
( ( int * ) ( ( ( int * ) ( _auto_p + ( 
#line 17 "../../lib/new/_vec.c"
_auto_i * _auto_sz ) ) ) ) ) ; 

#line 18 "../../lib/new/_vec.c"
{ 
#line 18 "../../lib/new/_vec.c"
{ _auto__result = ( ( ( int * ) ( _auto_p ) ) ) ; 
#line 18 "../../lib/new/_vec.c"

#line 18 "../../lib/new/_vec.c"
return _auto__result ; 
} } } ; 

#line 22 "../../lib/new/_vec.c"
int _vec_delete ( _auto_op , _auto_n , _auto_sz , _auto_f , _auto__A1 ) int * _auto_op ; 
int _auto_n ; 
int _auto_sz ; 
int * _auto_f ; 
int _auto__A1 ; 

#line 23 "../../lib/new/_vec.c"
{ 
#line 23 "../../lib/new/_vec.c"
register int _auto_i ; 
register char * _auto_p ; 

#line 25 "../../lib/new/_vec.c"
_auto_p = ( ( ( char * ) ( _auto_op ) ) ) ; 

#line 26 "../../lib/new/_vec.c"
for ( _auto_i = 0 ;( _auto_i < _auto_n ) ;( _auto_i ++ ) ) ( * ( 
#line 26 "../../lib/new/_vec.c"
( ( int ( * ) ( ) ) ( _auto_f ) ) ) ) 
#line 26 "../../lib/new/_vec.c"
( ( ( int * ) ( _auto_p + ( _auto_i * _auto_sz ) ) ) ) 
#line 26 "../../lib/new/_vec.c"
; 
} ; 

/* the end */
