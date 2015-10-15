/* @(#) utime.h 1.1 1/27/86 17:47:25 */
/*ident	"@(#)cfront:incl/utime.h	1.1"*/
#ifndef utimbuf
struct utimbuf {
          time_t actime;
          time_t modtime;
       }

xtern int utime (const char*, utimbuf*);
