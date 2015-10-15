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

y.tab.C yystype.h: gram.y
	yacc -d gram.y
	mv y.tab.c y.tab.C
	mv y.tab.h yystype.h
	sed -i -e 's/^#ifdef __cplusplus/#if 0/' y.tab.C

alloc.o:	alloc.C cfront.h
	$(CC) $(CCFLAGS) -c alloc.C 

dcl.o:	dcl.C cfront.h size.h
	$(CC) $(CCFLAGS) -c dcl.C 

dcl2.o:	dcl2.C cfront.h size.h
	$(CC) $(CCFLAGS) -c dcl2.C 

del.o:	del.C cfront.h
	$(CC) $(CCFLAGS) -c del.C 

error.o:	error.C cfront.h size.h
	$(CC) $(CCFLAGS) -c error.C 

expand.o:	expand.C cfront.h
	$(CC) $(CCFLAGS) -c expand.C 

expr.o:	expr.C cfront.h size.h
	$(CC) $(CCFLAGS) -c expr.C 

expr2.o:	expr2.C cfront.h size.h
	$(CC) $(CCFLAGS) -c expr2.C 

lalex.o:	lalex.C cfront.h tqueue.h yystype.h
	$(CC) $(CCFLAGS) -c lalex.C 

lex.o:	lex.C cfront.h size.h tqueue.h yystype.h
	$(CC) $(CCFLAGS) -c lex.C 

main.o:	main.C cfront.h
	$(CC) $(PATCH) $(CCFLAGS) -c main.C 

norm.o:	norm.C cfront.h size.h
	$(CC) $(CCFLAGS) -c norm.C 

norm2.o:	norm2.C cfront.h size.h
	$(CC) $(CCFLAGS) -c norm2.C 

print.o:	print.C cfront.h
	$(CC) $(CCFLAGS) -c print.C 

repr.o:	repr.C cfront.h
	$(CC) $(CCFLAGS) -c repr.C 

simpl.o:	simpl.C cfront.h size.h
	$(CC) $(CCFLAGS) -c simpl.C 

size.o:	size.C cfront.h size.h
	$(CC) $(CCFLAGS) -c size.C 

table.o:	table.C cfront.h
	$(CC) $(CCFLAGS) -c table.C 

typ.o:	typ.C cfront.h size.h
	$(CC) $(CCFLAGS) -c typ.C 

typ2.o:	typ2.C cfront.h size.h
	$(CC) $(CCFLAGS) -c typ2.C 

y.tab.o:	y.tab.C cfront.h size.h
	$(CC) $(CCFLAGS) -c y.tab.C 
