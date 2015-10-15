/*ident	"@(#)cfront:patch/dtors.c	1.2"*/
/* dtors() for the patch version of the C++ translator*/
struct __link {
	struct __link *next;
	int (*ctor)();
	int (*dtor)();
	};
extern struct __link *__HEAD;

extern void
dtors()
{
	static int one_time = 0;
	struct __link *ptr;
	if (one_time == 0)
	{
		one_time = 1;
		for (ptr = __HEAD; ptr; ptr = ptr->next)
		{
			if (ptr->dtor)
				(*(ptr->dtor))();
		}
	}
}
