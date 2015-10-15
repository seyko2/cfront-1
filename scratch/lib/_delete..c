#line 1 "../../lib/new/_delete.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/new/_delete.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/new/_delete.c"

#line 3 "../../lib/new/_delete.c"
int free ( ) ; 

#line 5 "../../lib/new/_delete.c"
int _delete ( _auto_p ) int * _auto_p ; 

#line 6 "../../lib/new/_delete.c"
{ 
#line 6 "../../lib/new/_delete.c"
if ( _auto_p ) free ( ( ( char * ) ( _auto_p ) ) ) 
#line 6 "../../lib/new/_delete.c"
; 
} ; 

/* the end */
