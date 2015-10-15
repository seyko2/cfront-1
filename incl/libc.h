/* @(#) libc.h 1.3 1/27/86 17:46:47 */
/*ident	"@(#)cfront:incl/libc.h	1.3"*/

	/*	some functions from the UNIX manual section 3

	  	INCOMPLETE: contains only declarations of functions that
		(1) is not declared with their data structures
		(2) are identically declared in UNIX5.2 and bsd4.2
	*/

extern int abort(...);
extern long a64l (const char*);
extern char *l64a (long);
extern char* crypt(const char*, const char*);
extern void setkey(const char*);
extern void encrypt(char*, int);
extern char* ecvt(double, int, int*, int*);
extern char* fcvt(double, int ,int*, int*);
extern char* gcvt(double, int, char*);
extern double frexp(double, int*);
extern double ldexp(double, int);
extern double modf(double, double*);
extern char* getenv(const char*);
extern char* getlogin();
extern char* getpass(const char*);
extern int getpw(int, char*);
extern void l3tol(long*, const char*, int);
extern void ltol3(char*, const long*, int);
extern char* mktemp(char*);
extern void perror(const char*);
extern void swab(const char*, char*, int);
extern int system(const char*);
extern char* ttyname(int);
extern int isatty(int);
extern int ttyslot();
