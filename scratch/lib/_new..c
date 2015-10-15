#line 1 "../../lib/new/_new.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/new/_new.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/new/_new.c"
typedef int ( * PFVV ) ( ) ; 

#line 5 "../../lib/new/_new.c"
extern PFVV _new_handler ; 

#line 8 "../../lib/new/_new.c"
int * _new ( _auto_size ) long _auto_size ; 

#line 9 "../../lib/new/_new.c"
{ 
#line 9 "../../lib/new/_new.c"
int * _auto__result ; 

#line 10 "../../lib/new/_new.c"
extern char * malloc ( ) ; 
char * _auto_p ; 

#line 13 "../../lib/new/_new.c"
while ( ( _auto_p = malloc ( ( unsigned int ) _auto_size ) ) == 0 ) 
#line 13 "../../lib/new/_new.c"

#line 13 "../../lib/new/_new.c"
{ 
#line 13 "../../lib/new/_new.c"
if ( _new_handler ) ( * _new_handler ) ( ) ; 
else 
#line 17 "../../lib/new/_new.c"
{ 
#line 17 "../../lib/new/_new.c"
{ _auto__result = 0 ; 

#line 17 "../../lib/new/_new.c"
return _auto__result ; 
} } } 
#line 19 "../../lib/new/_new.c"
{ 
#line 19 "../../lib/new/_new.c"
{ _auto__result = ( ( ( int * ) ( _auto_p ) 
#line 19 "../../lib/new/_new.c"
) ) ; 

#line 19 "../../lib/new/_new.c"
return _auto__result ; 
} } } ; 

/* the end */
