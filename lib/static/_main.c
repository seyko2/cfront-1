/* @(#) _main.c 1.2 1/27/86 17:47:56 */
/*ident	"@(#)cfront:lib/static/_main.c	1.2"*/
extern void
_main()
{
	typedef void (*PFV)();
	extern PFV _ctors[];
	for (PFV* pf=_ctors; *pf; pf++) (**pf)();
}
