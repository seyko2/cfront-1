/* @(#) time.h 1.2 1/27/86 17:47:18 */
/*ident	"@(#)cfront:incl/time.h	1.2"*/
struct	tm {	/* see ctime(3) */
	int	tm_sec;
	int	tm_min;
	int	tm_hour;
	int	tm_mday;
	int	tm_mon;
	int	tm_year;
	int	tm_wday;
	int	tm_yday;
	int	tm_isdst;
};
extern long time(long*),
            clock ();
extern tm *gmtime(long*),
          *localtime(long*);
extern char *ctime(long*),
            *asctime(tm*);
extern void tzset();
extern long timezone;
extern int daylight;
extern char *tzname[2];
