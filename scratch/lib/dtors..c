#line 1 "../../lib/static/dtors.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/static/dtors.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/static/dtors.c"
typedef int ( * PFV ) ( ) ; 

#line 6 "../../lib/static/dtors.c"
int dtors ( ) 
#line 7 "../../lib/static/dtors.c"
{ 
#line 7 "../../lib/static/dtors.c"

#line 8 "../../lib/static/dtors.c"
extern PFV _dtors [ ] ; 

#line 9 "../../lib/static/dtors.c"
static int _static_ddone ; 

#line 10 "../../lib/static/dtors.c"
if ( _static_ddone == 0 ) { 
#line 10 "../../lib/static/dtors.c"
_static_ddone = 1 ; 

#line 12 "../../lib/static/dtors.c"
{ 
#line 12 "../../lib/static/dtors.c"
PFV * _auto_pf ; 

#line 12 "../../lib/static/dtors.c"
_auto_pf = _dtors ; 

#line 13 "../../lib/static/dtors.c"
while ( * _auto_pf ) _auto_pf ++ ; 

#line 14 "../../lib/static/dtors.c"
while ( _dtors < _auto_pf ) ( * ( * ( -- _auto_pf ) ) ) ( 
#line 14 "../../lib/static/dtors.c"
) ; 
} } } ; 

/* the end */
