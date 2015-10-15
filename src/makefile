#ident	"@(#)cfront:src/makefile	1.6"
CC	=	CC
#set $(PATCH) to -DPATCH if using the patch version:
#PATCH=-DPATCH
# set $(PATCH) to nothing if using nm/munch:
PATCH=
CCFLAGS=-O
OFILES	=	alloc.o dcl.o dcl2.o del.o error.o expand.o expr.o expr2.o \
		lalex.o lex.o main.o norm.o norm2.o print.o repr.o \
		simpl.o size.o table.o typ.o typ2.o y.tab.o
cfront:	$(OFILES)
	$(CC)	-o cfront $(OFILES)

cfront.h:	token.h typedef.h

y.tab.c:	gram.y
	yacc gram.y

alloc.o:	alloc.c cfront.h
	$(CC) $(CCFLAGS) -c alloc.c 

dcl.o:	dcl.c cfront.h size.h
	$(CC) $(CCFLAGS) -c dcl.c 

dcl2.o:	dcl2.c cfront.h size.h
	$(CC) $(CCFLAGS) -c dcl2.c 

del.o:	del.c cfront.h
	$(CC) $(CCFLAGS) -c del.c 

error.o:	error.c cfront.h size.h
	$(CC) $(CCFLAGS) -c error.c 

expand.o:	expand.c cfront.h
	$(CC) $(CCFLAGS) -c expand.c 

expr.o:	expr.c cfront.h size.h
	$(CC) $(CCFLAGS) -c expr.c 

expr2.o:	expr2.c cfront.h size.h
	$(CC) $(CCFLAGS) -c expr2.c 

lalex.o:	lalex.c cfront.h tqueue.h yystype.h
	$(CC) $(CCFLAGS) -c lalex.c 

lex.o:	lex.c cfront.h size.h tqueue.h yystype.h
	$(CC) $(CCFLAGS) -c lex.c 

main.o:	main.c cfront.h
	$(CC) $(PATCH) $(CCFLAGS) -c main.c 

norm.o:	norm.c cfront.h size.h
	$(CC) $(CCFLAGS) -c norm.c 

norm2.o:	norm2.c cfront.h size.h
	$(CC) $(CCFLAGS) -c norm2.c 

print.o:	print.c cfront.h
	$(CC) $(CCFLAGS) -c print.c 

repr.o:	repr.c cfront.h
	$(CC) $(CCFLAGS) -c repr.c 

simpl.o:	simpl.c cfront.h size.h
	$(CC) $(CCFLAGS) -c simpl.c 

size.o:	size.c cfront.h size.h
	$(CC) $(CCFLAGS) -c size.c 

table.o:	table.c cfront.h
	$(CC) $(CCFLAGS) -c table.c 

typ.o:	typ.c cfront.h size.h
	$(CC) $(CCFLAGS) -c typ.c 

typ2.o:	typ2.c cfront.h size.h
	$(CC) $(CCFLAGS) -c typ2.c 

y.tab.o:	y.tab.c cfront.h size.h
	$(CC) $(CCFLAGS) -c y.tab.c 
