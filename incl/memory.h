/* @(#) memory.h 1.3 1/27/86 17:46:50 */
/*ident	"@(#)cfront:incl/memory.h	1.3"*/
extern char
	*memccpy(char*, const char*, int, int),
	*memchr(const char*, int, int),
	*memcpy(char*, const char*, int),
	*memset(char*, int, int);
extern int memcmp(const char*, const char*, int);
