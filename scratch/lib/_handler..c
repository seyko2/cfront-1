#line 1 "../../lib/new/_handler.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/new/_handler.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/new/_handler.c"
typedef int ( * PFVV ) ( ) ; 

#line 5 "../../lib/new/_handler.c"
extern PFVV _new_handler ; 
PFVV _new_handler = 0 ; 

#line 8 "../../lib/new/_handler.c"
extern PFVV set_new_handler ( _auto_handler ) int ( * _auto_handler ) ( ) ; 

#line 9 "../../lib/new/_handler.c"
{ 
#line 9 "../../lib/new/_handler.c"
PFVV _auto__result ; 
PFVV _auto_rr ; 

#line 10 "../../lib/new/_handler.c"
_auto_rr = _new_handler ; 

#line 11 "../../lib/new/_handler.c"
_new_handler = _auto_handler ; 

#line 12 "../../lib/new/_handler.c"
{ 
#line 12 "../../lib/new/_handler.c"
{ _auto__result = _auto_rr ; 

#line 12 "../../lib/new/_handler.c"
return _auto__result ; 
} } } ; 

/* the end */
