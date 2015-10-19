#ident	"@(#)cfront:src/makefile	1.6"

XCC	?=	g++
CCFLAGS	=	-O -I../incl

# set $(PATCH) to -DPATCH if using the patch version:
# set $(PATCH) to nothing if using nm/munch:
PATCH	=

OFILES	=	alloc.o dcl.o dcl2.o del.o error.o expand.o expr.o expr2.o \
		lalex.o lex.o main.o norm.o norm2.o print.o repr.o \
		simpl.o size.o table.o typ.o typ2.o y.tab.o

COMDEP0	= 	szal.result Makefile \
		cfront.h size.h token.h tqueue.h typedef.h

COMDEP	=	$(COMDEP0) yystype.h

cfront:	$(OFILES)
	$(XCC)	-o cfront $(OFILES)

y.tab.C yystype.h: gram.y $(COMDEP0)
	yacc -d gram.y
	mv y.tab.c y.tab.C
	mv y.tab.h yystype.h
	sed -i -e 's/^#ifdef __cplusplus/#if 0/' y.tab.C

szal.result: szal/szal.c
	gcc -o szal/szal szal/szal.c
	./szal/szal > szal.result

alloc.o: alloc.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c alloc.C 

dcl.o:	dcl.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c dcl.C 

dcl2.o:	dcl2.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c dcl2.C 

del.o:	del.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c del.C 

error.o: error.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c error.C 

expand.o: expand.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c expand.C 

expr.o:	expr.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c expr.C 

expr2.o: expr2.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c expr2.C 

lalex.o: lalex.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c lalex.C 

lex.o:	lex.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c lex.C 

main.o:	main.C $(COMDEP)
	$(XCC) $(PATCH) $(CCFLAGS) -c main.C 

norm.o:	norm.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c norm.C 

norm2.o: norm2.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c norm2.C 

print.o: print.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c print.C 

repr.o:	repr.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c repr.C 

simpl.o: simpl.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c simpl.C 

size.o:	size.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c size.C 

table.o: table.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c table.C 

typ.o:	typ.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c typ.C 

typ2.o:	typ2.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c typ2.C 

y.tab.o: y.tab.C $(COMDEP)
	$(XCC) $(CCFLAGS) -c y.tab.C 

clean:
	-@rm szal.result szal/szal
	-@rm y.tab.C yystype.h
	-@rm *.o cfront
