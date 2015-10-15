/* @(#) size.h 1.5 1/27/86 17:49:31 */ 
/*ident	"@(#)cfront:src/size.h	1.5" */
/***********************************************************************
   Size.h: used to specify sizes and alignments.
   These macros can be selectively overridden at compile time by the +x
   option; see size.c for details.
   A list of the macros in this file follows.
   All sizes and alignments are in bytes, unless otherwise noted:
    DBI_IN_WORD	//Number of bits in a word (for bitfields)
    DBI_IN_BYTE	//Number of bits in a byte (for bitfields)
    DSZ_CHAR	//Size of char (in bytes)
    DAL_CHAR	//Alignment of char (in bytes)
    DSZ_SHORT	//Size of short
    DAL_SHORT	//Alignment of short
    DSZ_INT	//Size of int
    DAL_INT	//Alignment of int
    DSZ_LONG	//Size of long
    DAL_LONG	//Alignment of long
    DSZ_FLOAT	//Size of float
    DAL_FLOAT	//Alignment of float
    DSZ_DOUBLE	//Size of double
    DAL_DOUBLE	//Alignment of double
    DSZ_STRUCT	//Minimum size of a structure
    DAL_STRUCT	//Minimum alignment of a structure
    DSZ_FRAME	//Not used
    DAL_FRAME	//Minimum alignment of stack variables
    DSZ_WORD	//Size of word in bytes (for bitfields)
    DSZ_WPTR	//Size of a pointer to a word
    DAL_WPTR	//Alignment of a pointer to a word
    DSZ_BPTR	//Size of a pointer to a byte
    DAL_BPTR	//Alignment of a pointer to a byte
    DSZ_TOP	//Size of additional material in a stack frame
    DSZ_BOTTOM	//Offset of first stack variable
    DLARGEST_INT	//Largest possible int- as a string
    DF_SENSITIVE	//Is the compiler sensitive to the type of bitfields
			//i.e. is char:4 aligned differently from int:4;
    DF_OPTIMIZED	//Not used

*************************************************************/

extern BI_IN_WORD;
extern BI_IN_BYTE;
				/*	byte sizes */
extern SZ_CHAR;
extern AL_CHAR;

extern SZ_SHORT;
extern AL_SHORT;

extern SZ_INT;
extern AL_INT;

extern SZ_LONG;
extern AL_LONG;

extern SZ_FLOAT;
extern AL_FLOAT;

extern SZ_DOUBLE;
extern AL_DOUBLE;

extern SZ_STRUCT;	/* minimum struct size */
extern AL_STRUCT;

extern SZ_FRAME;
extern AL_FRAME;

extern SZ_WORD;

extern SZ_WPTR;
extern AL_WPTR;

extern SZ_BPTR;
extern AL_BPTR;		/*	space at top and bottom of stack frame
				(for registers, return ptr, etc.)
			*/
extern SZ_TOP;
extern SZ_BOTTOM;

extern char* LARGEST_INT;
extern int F_SENSITIVE;	// is field alignment sensitive to the type of the field?
extern int F_OPTIMIZED;	// can the compiler fit a small int field into a char?

				// default sizes:
#if defined(u3b) || defined(u3b2) || defined(u3b5)
#define DBI_IN_WORD 32
#define DBI_IN_BYTE 8
#define DSZ_CHAR 1
#define DAL_CHAR 1
#define DSZ_SHORT 2
#define DAL_SHORT 2
#define DSZ_INT 4
#define DAL_INT 4
#define DSZ_LONG 4
#define DAL_LONG 4
#define DSZ_FLOAT 4
#define DAL_FLOAT 4
#define DSZ_DOUBLE 8
#define DAL_DOUBLE 4
#define DSZ_STRUCT 4
#define DAL_STRUCT 4
#define DSZ_FRAME 4
#define DAL_FRAME 4
#define DSZ_WORD 4
#define DSZ_WPTR 4
#define DAL_WPTR 4
#define DSZ_BPTR 4
#define DAL_BPTR 4
#define DSZ_TOP 0
#define DSZ_BOTTOM 0
#define DLARGEST_INT "2147483647"	/* 2**31 - 1 */
#define DF_SENSITIVE 0
#define DF_OPTIMIZED 1
#else					// defaults for a VAX (running V8)
#define DBI_IN_WORD 32
#define DBI_IN_BYTE 8
#define DSZ_CHAR 1
#define DAL_CHAR 1
#define DSZ_SHORT 2
#define DAL_SHORT 2
#define DSZ_INT 4
#define DAL_INT 4
#define DSZ_LONG 4
#define DAL_LONG 4
#define DSZ_FLOAT 4
#define DAL_FLOAT 4
#define DSZ_DOUBLE 8
#define DAL_DOUBLE 4
#define DSZ_STRUCT 1
#define DAL_STRUCT 1
#define DSZ_FRAME 4
#define DAL_FRAME 4
#define DSZ_WORD 4
#define DSZ_WPTR 4
#define DAL_WPTR 4
#define DSZ_BPTR 4
#define DAL_BPTR 4
#define DSZ_TOP 0
#define DSZ_BOTTOM 0
#define DLARGEST_INT "2147483647"	/* 2**31 - 1 */
#define DF_SENSITIVE 1
#define DF_OPTIMIZED 1
#endif

			/* 	table sizes */
#define KTBLSIZE	123
#define GTBLSIZE	257
				/*	initial class table size */
#define CTBLSIZE	12
				/*	initial block table size */
#define TBLSIZE		20

#define BLMAX		50	/*	max block nesting */
#define TBUFSZ		48*1024	/*	(lex) input buffer size */
#define MAXFILE		127	/*	max include file nesting */

#define MAXERR		20	/* maximum number of errors before terminating */
