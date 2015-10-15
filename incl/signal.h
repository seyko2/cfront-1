/* @(#) signal.h 1.3 1/27/86 17:46:59 */
/*ident	"@(#)cfront:incl/signal.h	1.3"*/
/*	3.0 SID #	1.3	*/
#include<sys/signal.h>

typedef int (*PF) ();

extern int (*sigset(int, PF))();
extern int (*ssignal (int, PF))();
extern int gsignal (int);
extern int kill (int, int);
