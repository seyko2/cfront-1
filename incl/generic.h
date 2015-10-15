/* @(#) generic.h 1.2 1/27/86 17:46:42 */
/*ident	"@(#)cfront:incl/generic.h	1.2"*/
#define GENERICH 1
#define name2(a,b) a\
b
#define name3(a,b,c) a\
b\
c
#define name4(a,b,c,d) a\
b\
c\
d

#define declare(a,t) name2(a,declare)(t)
#define implement(a,t) name2(a,implement)(t)
#define declare2(a,t1,t2) name2(a,declare2)(t1,t2)
#define implement2(a,t1,t2) name2(a,implement2)(t1,t2)


extern genericerror(int,char*);
typedef int (*GPT)(int,char*);
#define set_handler(generic,type,x) name4(set_,type,generic,_handler)(x)
#define errorhandler(generic,type) name3(type,generic,handler)
#define callerror(generic,type,a,b) (*errorhandler(generic,type))(a,b)

#ifndef _name2_aux
#define _name2_aux(a,b) a##b
#define _name3_aux(a,b,c) a##b##c
#define _name4_aux(a,b,c,d)  a##b##c##d
#endif
#undef name2
#undef name3
#undef name4
#define name2(a,b) _name2_aux(a,b)
#define name3(a,b,c) _name3_aux(a,b,c)
#define name4(a,b,c,d) _name4_aux(a,b,c,d)
