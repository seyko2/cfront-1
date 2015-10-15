/* @(#) stdlib.h 1.4 1/27/86 17:47:01 */
/*ident	"@(#)cfront:incl/stdlib.h	1.4"*/
extern int     abort();
extern double  atof (const char*);
extern long    atoi (const char*);
extern long    atol (const char*);
extern char*   calloc (unsigned,unsigned);
extern void    exit (int);
extern void    free (char*);
extern char*   getenv (const char*);
extern char*   malloc (unsigned);
extern int     rand ();
extern char*   realloc (char*, unsigned);
extern void    srand  (unsigned);
extern double  strtod (const char*, char**);
extern long    strtol (const char*, char**, int);
extern int     system (const char*);
