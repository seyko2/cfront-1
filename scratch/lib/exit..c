#line 1 "../../lib/static/exit.c"

/* <<cfront 10/10/85>> */
/* < ../../lib/static/exit.c */
int * _new ( ) ; 
int _delete ( ) ; 
int * _vec_new ( ) ; 
int _vec_delete ( ) ; 

#line 1 "../../lib/static/exit.c"

#line 4 "../../lib/static/exit.c"
extern int _exit ( ) ; 

#line 5 "../../lib/static/exit.c"
extern int _cleanup ( ) ; 

#line 6 "../../lib/static/exit.c"
extern int dtors ( ) ; 

#line 8 "../../lib/static/exit.c"
extern int exit ( _auto_i ) int _auto_i ; 

#line 9 "../../lib/static/exit.c"
{ 
#line 9 "../../lib/static/exit.c"
dtors ( ) ; 

#line 11 "../../lib/static/exit.c"
_cleanup ( ) ; 

#line 12 "../../lib/static/exit.c"
_exit ( _auto_i ) ; 
} ; 

/* the end */
