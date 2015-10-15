#ident	"@(#)cfront:lib/mk/makefile	1.6"
O_COMPLEX	=	abs.o arg.o cos.o error.o exp.o io.o log.o oper.o \
			polar.o pow.o sin.o sqrt.o
O_GENERIC	=	generic.o
O_NEW		=	_delete.o _handler.o _new.o _vec.o
O_STATIC	=	_ctor.o _dtor.o _main.o exit.o dtors.o
O_STREAM	=	circbuf.o filebuf.o in.o out.o streambuf.o
O_TASK		=	obj.o qhead.o qtail.o sched.o sim.o \
			swap.o task.o timer.o
OFILES	=	$(O_COMPLEX) $(O_GENERIC) $(O_NEW) \
			$(O_STATIC) $(O_STREAM) $(O_TASK)
CC	=	CC
CCFLAGS	=

libC.a:	$(O_COMPLEX) $(O_GENERIC) $(O_NEW) $(O_STATIC) $(O_STREAM) Task
	ar r libC.a $(OFILES)
	if test "$(BSD)" ; then ranlib libC.a; fi


Task:
	if vax; then \
		$(CC) $(CCFLAGS) -c -I../task ../task/*.c ../task/vax_swap.s; \
		mv vax_swap.o swap.o ; \
	elif u3b||u3b5||u3b2 ; then \
		$(CC) $(CCFLAGS) -c -I../task ../task/*.c ../task/3b_swap.s; \
		mv 3b_swap.o swap.o ; \
	else echo "task lib not implemented on this machine"; \
	fi

abs.o:	../complex/abs.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/abs.c

arg.o:	../complex/arg.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/arg.c

cos.o:	../complex/cos.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/cos.c

error.o:	../complex/error.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/error.c

exp.o:	../complex/exp.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/exp.c

io.o:	../complex/io.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/io.c

log.o:	../complex/log.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/log.c

oper.o:	../complex/oper.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/oper.c

polar.o:	../complex/polar.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/polar.c

pow.o:	../complex/pow.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/pow.c

sin.o:	../complex/sin.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/sin.c

sqrt.o:	../complex/sqrt.c
	$(CC) $(CCFLAGS) -I../complex -c ../complex/sqrt.c

generic.o:	../generic/generic.c
	$(CC) $(CCFLAGS) -I../generic -c ../generic/generic.c
_delete.o:	../new/_delete.c
	$(CC) $(CCFLAGS) -I../new -c ../new/_delete.c

_handler.o:	../new/_handler.c
	$(CC) $(CCFLAGS) -I../new -c ../new/_handler.c

_new.o:	../new/_new.c
	$(CC) $(CCFLAGS) -I../new -c ../new/_new.c

_vec.o:	../new/_vec.c
	$(CC) $(CCFLAGS) -I../new -c ../new/_vec.c

_ctor.o:	../static/_ctor.c
	$(CC) $(CCFLAGS) -I../static -c ../static/_ctor.c

_dtor.o:	../static/_dtor.c
	$(CC) $(CCFLAGS) -I../static -c ../static/_dtor.c

_main.o:	../static/_main.c
	$(CC) $(CCFLAGS) -I../static -c ../static/_main.c

dtors.o:	../static/dtors.c
	$(CC) $(CCFLAGS) -I../static -c ../static/dtors.c

exit.o:	../static/exit.c
	$(CC) $(CCFLAGS) -I../static -c ../static/exit.c

munch.o:	../static/munch.c
	$(CC) $(CCFLAGS) -I../static -c ../static/munch.c

circbuf.o:	../stream/circbuf.c
	$(CC) $(CCFLAGS) -I../stream -c ../stream/circbuf.c

filebuf.o:	../stream/filebuf.c
	$(CC) $(CCFLAGS) -I../stream -c ../stream/filebuf.c

in.o:	../stream/in.c
	$(CC) $(CCFLAGS) -I../stream -c ../stream/in.c

out.o:	../stream/out.c
	$(CC) $(CCFLAGS) -I../stream -c ../stream/out.c

streambuf.o:	../stream/streambuf.c
	$(CC) $(CCFLAGS) -I../stream -c ../stream/streambuf.c

