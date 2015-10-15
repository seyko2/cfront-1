/*ident	"@(#)cfront:patch/_main.c	1.2"*/
/* _main for the patch version of the C++ translator*/
/* See patch.c for details*/
struct __link {
	struct __link *next;
	int (*ctor)();
	int (*dtor)();
	};
extern struct __link *__HEAD ;
struct __link *__HEAD = (__link *)0;
_main()
{
	struct __link *ptr;
	for (ptr = __HEAD; ptr; ptr = ptr->next)
	{
		if (ptr->ctor)
			(*(ptr->ctor))();
	}
}

