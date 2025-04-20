#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
CFLAGS_OPT=
CC=clang
INSTALL=/usr/bin/install -c
CFLAGS=-DPREFIX="\"${DESTDIR}/\""  -I/usr/local/include $(CFLAGS_OPT)
LIBS= -lutil -ldl -lm -lrt

#########################################
# main
#########################################
all: comelang-sh

comelang: 01main.c.o 02transpile.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05parse.c.o 05type.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o 
	comelang -o comelang 01main.c.o 02transpile.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05type.c.o 05parse.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o $(CFLAGS) 

01main.c.o: 01main.c
	comelang -S -C -o 01main.c.o -c 01main.c $(CFLAGS) 

02transpile.c.o: 02transpile.c
	comelang -S -C -o 02transpile.c.o -c 02transpile.c $(CFLAGS) 

03output_code.c.o: 03output_code.c
	comelang -S -C -o 03output_code.c.o -c 03output_code.c $(CFLAGS) 

04heap.c.o: 04heap.c
	comelang -S -C -o 04heap.c.o -c 04heap.c $(CFLAGS) 

05pre_op.c.o: 05pre_op.c
	comelang -S -C  -o 05pre_op.c.o -c 05pre_op.c $(CFLAGS) 

05call.c.o: 05call.c
	comelang -S -C -o 05call.c.o -c 05call.c $(CFLAGS) 

05function.c.o: 05function.c
	comelang -S -C -o 05function.c.o -c 05function.c $(CFLAGS) 

05number.c.o: 05number.c
	comelang -S -C -o 05number.c.o -c 05number.c $(CFLAGS) 

05type.c.o: 05type.c
	comelang -S -C -o 05type.c.o -c 05type.c $(CFLAGS) 

05parse.c.o: 05parse.c
	comelang -S -C -o 05parse.c.o -c 05parse.c $(CFLAGS) 

06str.c.o: 06str.c
	comelang -S -C -o 06str.c.o -c 06str.c $(CFLAGS) 

07var.c.o: 07var.c
	comelang -S -C -o 07var.c.o -c 07var.c $(CFLAGS) 

07gvar.c.o: 07gvar.c
	comelang -S -C -o 07gvar.c.o -c 07gvar.c $(CFLAGS) 

08if.c.o: 08if.c
	comelang -S -C -o 08if.c.o -c 08if.c $(CFLAGS) 

09while.c.o: 09while.c
	comelang -S -C -o 09while.c.o -c 09while.c $(CFLAGS) 

10do_while.c.o: 10do_while.c
	comelang -S -C -o 10do_while.c.o -c 10do_while.c $(CFLAGS) 

11for.c.o: 11for.c
	comelang -S -C -o 11for.c.o -c 11for.c $(CFLAGS) 

12switch.c.o: 12switch.c
	comelang -S -C -o 12switch.c.o -c 12switch.c $(CFLAGS) 

13op.c.o: 13op.c
	comelang -S -C -o 13op.c.o -c 13op.c $(CFLAGS) 

14struct.c.o: 14struct.c
	comelang -S -C -o 14struct.c.o -c 14struct.c $(CFLAGS) 

15union.c.o: 15union.c
	comelang -S -C -o 15union.c.o -c 15union.c $(CFLAGS) 

16enum.c.o: 16enum.c
	comelang -S -C -o 16enum.c.o -c 16enum.c $(CFLAGS) 

17typedef.c.o: 17typedef.c
	comelang -S -C -o 17typedef.c.o -c 17typedef.c $(CLAGS) 

18field.c.o: 18field.c
	comelang -S -C -o 18field.c.o -c 18field.c $(CFLAGS) 

19eq.c.o: 19eq.c
	comelang -S -C -o 19eq.c.o -c 19eq.c $(CFLAGS) 

20method.c.o: 20method.c
	comelang -S -C -o 20method.c.o -c 20method.c $(CFLAGS) 

21obj.c.o: 21obj.c
	comelang -S -C -o 21obj.c.o -c 21obj.c $(CFLAGS) 

22impl.c.o: 22impl.c
	comelang -S -C -o 22impl.c.o -c 22impl.c $(CFLAGS) 

23interface.c.o: 23interface.c
	comelang -S -C -o 23interface.c.o -c 23interface.c $(CFLAGS) 

24module.c.o: 24module.c
	comelang -S -C -o 24module.c.o -c 24module.c $(CFLAGS) 

valgrind:  01main.valgrind  02transpile.valgrind  03output_code.valgrind  04heap.valgrind  05pre_op.valgrind  05call.valgrind  05function.valgrind  05number.valgrind  05type.valgrind  05parse.valgrind 06str.valgrind  07var.valgrind  07gvar.valgrind  08if.valgrind  09while.valgrind  10do_while.valgrind  11for.valgrind  12switch.valgrind  13op.valgrind  14struct.valgrind  15union.valgrind  16enum.valgrind  17typedef.valgrind  18field.valgrind  19eq.valgrind  20method.valgrind  21obj.valgrind  22impl.valgrind  23interface.valgrind  24module.valgrind

01main.valgrind: 01main.c
	valgrind comelang -S -C -o 01main.c.o -c 01main.c $(CFLAGS) 2> 01main.valgrind

02transpile.valgrind: 02transpile.c
	valgrind comelang -S -C -o 02transpile.c.o -c 02transpile.c $(CFLAGS) 2> 02transpile.valgrind

03output_code.valgrind: 03output_code.c
	valgrind comelang -S -C -o 03output_code.c.o -c 03output_code.c $(CFLAGS) 2> 03output_code.valgrind

04heap.valgrind: 04heap.c
	valgrind comelang -S -C -o 04heap.c.o -c 04heap.c $(CFLAGS) 2> 04heap.valgrind

05pre_op.valgrind: 05pre_op.c
	valgrind comelang -S -C  -o 05pre_op.c.o -c 05pre_op.c $(CFLAGS) 2> 05pre_op.valgrind

05call.valgrind: 05call.c
	valgrind comelang -S -C -o 05call.c.o -c 05call.c $(CFLAGS) 2> 05call.valgrind

05function.valgrind: 05function.c
	valgrind comelang -S -C -o 05function.c.o -c 05function.c $(CFLAGS) 2> 05function.valgrind

05number.valgrind: 05number.c
	valgrind comelang -S -C -o 05number.c.o -c 05number.c $(CFLAGS) 2> 05number.valgrind

05type.valgrind: 05type.c
	valgrind comelang -S -C -o 05type.c.o -c 05type.c $(CFLAGS) 2> 05type.valgrind

05parse.valgrind: 05parse.c
	valgrind comelang -S -C -o 05parse.c.o -c 05parse.c $(CFLAGS) 2> 05parse.valgrind

06str.valgrind: 06str.c
	valgrind comelang -S -C -o 06str.c.o -c 06str.c $(CFLAGS) 2> 06str.valgrind

07var.valgrind: 07var.c
	valgrind comelang -S -C -o 07var.c.o -c 07var.c $(CFLAGS) 2> 07var.valgrind

07gvar.valgrind: 07gvar.c
	valgrind comelang -S -C -o 07gvar.c.o -c 07gvar.c $(CFLAGS) 2> 07gvar.valgrind

08if.valgrind: 08if.c
	valgrind comelang -S -C -o 08if.c.o -c 08if.c $(CFLAGS) 2> 08if.valgrind

09while.valgrind: 09while.c
	valgrind comelang -S -C -o 09while.c.o -c 09while.c $(CFLAGS) 2> 09while.valgrind

10do_while.valgrind: 10do_while.c
	valgrind comelang -S -C -o 10do_while.c.o -c 10do_while.c $(CFLAGS) 2> 10do_while.valgrind

11for.valgrind: 11for.c
	valgrind comelang -S -C -o 11for.c.o -c 11for.c $(CFLAGS) 2> 11for.valgrind

12switch.valgrind: 12switch.c
	valgrind comelang -S -C -o 12switch.c.o -c 12switch.c $(CFLAGS) 2> 12switch.valgrind

13op.valgrind: 13op.c
	valgrind comelang -S -C -o 13op.c.o -c 13op.c $(CFLAGS) 2> 13op.valgrind

14struct.valgrind: 14struct.c
	valgrind comelang -S -C -o 14struct.c.o -c 14struct.c $(CFLAGS) 2> 14struct.valgrind

15union.valgrind: 15union.c
	valgrind comelang -S -C -o 15union.c.o -c 15union.c $(CFLAGS) 2> 15union.valgrind

16enum.valgrind: 16enum.c
	valgrind comelang -S -C -o 16enum.c.o -c 16enum.c $(CFLAGS) 2> 16enum.valgrind

17typedef.valgrind: 17typedef.c
	valgrind comelang -S -C -o 17typedef.c.o -c 17typedef.c $(CLAGS) 2> 17typedef.valgrind

18field.valgrind: 18field.c
	valgrind comelang -S -C -o 18field.c.o -c 18field.c $(CFLAGS) 2> 18field.valgrind

19eq.valgrind: 19eq.c
	valgrind comelang -S -C -o 19eq.c.o -c 19eq.c $(CFLAGS) 2> 19eq.valgrind

20method.valgrind: 20method.c
	valgrind comelang -S -C -o 20method.c.o -c 20method.c $(CFLAGS) 2> 20method.valgrind

21obj.valgrind: 21obj.c
	valgrind comelang -S -C -o 21obj.c.o -c 21obj.c $(CFLAGS) 2> 21obj.valgrind

22impl.valgrind: 22impl.c
	valgrind comelang -S -C -o 22impl.c.o -c 22impl.c $(CFLAGS) 2> 22impl.valgrind

23interface.valgrind: 23interface.c
	valgrind comelang -S -C -o 23interface.c.o -c 23interface.c $(CFLAGS) 2> 23interface.valgrind

24module.valgrind: 24module.c
	comelang -S -C -o 24module.c.o -c 24module.c $(CFLAGS) 2> 24module.valgrind

comelang-sh: 01main.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05pre_op.c.o.tmp 05call.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 05parse.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp 
	$(CC) -o comelang-sh  01main.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05call.c.o.tmp 05pre_op.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 05parse.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp
	cp -p comelang-sh comelang

01main.c.o.tmp: 01main.c.c
	$(CC) -o 01main.c.o.tmp -c 01main.c.c $(CFLAGS) 2> /dev/null

02transpile.c.o.tmp: 02transpile.c.c
	$(CC) -o 02transpile.c.o.tmp -c 02transpile.c.c $(CFLAGS) 2> /dev/null

03output_code.c.o.tmp: 03output_code.c.c
	$(CC) -o 03output_code.c.o.tmp -c 03output_code.c.c $(CFLAGS) 2> /dev/null

04heap.c.o.tmp: 04heap.c.c
	$(CC) -o 04heap.c.o.tmp -c 04heap.c.c $(CFLAGS) 2> /dev/null

05pre_op.c.o.tmp: 05pre_op.c.c
	$(CC) -o 05pre_op.c.o.tmp -c 05pre_op.c.c $(CFLAGS) 2> /dev/null

05call.c.o.tmp: 05call.c.c
	$(CC) -o 05call.c.o.tmp -c 05call.c.c $(CFLAGS) 2> /dev/null

05function.c.o.tmp: 05function.c.c
	$(CC) -o 05function.c.o.tmp -c 05function.c.c $(CFLAGS) 2> /dev/null

05number.c.o.tmp: 05number.c.c
	$(CC) -o 05number.c.o.tmp -c 05number.c.c $(CFLAGS) 2> /dev/null

05type.c.o.tmp: 05type.c.c
	$(CC) -o 05type.c.o.tmp -c 05type.c.c $(CFLAGS) 2> /dev/null

05parse.c.o.tmp: 05parse.c.c
	$(CC) -o 05parse.c.o.tmp -c 05parse.c.c $(CFLAGS) 2> /dev/null

06str.c.o.tmp: 06str.c.c
	$(CC)  -o 06str.c.o.tmp -c 06str.c.c $(CFLAGS) 2> /dev/null

07var.c.o.tmp: 07var.c.c
	$(CC) -o 07var.c.o.tmp -c 07var.c.c $(CFLAGS) 2> /dev/null

07gvar.c.o.tmp: 07gvar.c.c
	$(CC) -o 07gvar.c.o.tmp -c 07gvar.c.c $(CFLAGS) 2> /dev/null

08if.c.o.tmp: 08if.c.c
	$(CC) -o 08if.c.o.tmp -c 08if.c.c $(CFLAGS) 2> /dev/null

09while.c.o.tmp: 09while.c.c
	$(CC) -o 09while.c.o.tmp -c 09while.c.c $(CFLAGS) 2> /dev/null

10do_while.c.o.tmp: 10do_while.c.c
	$(CC) -o 10do_while.c.o.tmp -c 10do_while.c.c $(CFLAGS) 2> /dev/null

11for.c.o.tmp: 11for.c.c
	$(CC) -o 11for.c.o.tmp -c 11for.c.c $(CFLAGS) 2> /dev/null

12switch.c.o.tmp: 12switch.c.c
	$(CC) -o 12switch.c.o.tmp -c 12switch.c.c $(CFLAGS) 2> /dev/null

13op.c.o.tmp: 13op.c.c
	$(CC) -o 13op.c.o.tmp -c 13op.c.c $(CFLAGS) 2> /dev/null

14struct.c.o.tmp: 14struct.c.c
	$(CC) -o 14struct.c.o.tmp -c 14struct.c.c $(CFLAGS) 2> /dev/null

15union.c.o.tmp: 15union.c.c
	$(CC) -o 15union.c.o.tmp -c 15union.c.c $(CFLAGS) 2> /dev/null

16enum.c.o.tmp: 16enum.c.c
	$(CC) -o 16enum.c.o.tmp -c 16enum.c.c $(CFLAGS) 2> /dev/null

17typedef.c.o.tmp: 17typedef.c.c
	$(CC) -o 17typedef.c.o.tmp -c 17typedef.c.c $(CFLAGS) 2> /dev/null

18field.c.o.tmp: 18field.c.c
	$(CC) -o 18field.c.o.tmp -c 18field.c.c $(CFLAGS) 2> /dev/null

19eq.c.o.tmp: 19eq.c.c
	$(CC) -o 19eq.c.o.tmp -c 19eq.c.c $(CFLAGS) 2> /dev/null

20method.c.o.tmp: 20method.c.c
	$(CC) -o 20method.c.o.tmp -c 20method.c.c $(CFLAGS) 2> /dev/null

21obj.c.o.tmp: 21obj.c.c
	$(CC) -o 21obj.c.o.tmp -c 21obj.c.c $(CFLAGS) 2> /dev/null

22impl.c.o.tmp: 22impl.c.c
	$(CC) -o 22impl.c.o.tmp -c 22impl.c.c $(CFLAGS) 2> /dev/null

23interface.c.o.tmp: 23interface.c.c
	$(CC) -o 23interface.c.o.tmp -c 23interface.c.c $(CFLAGS) 2> /dev/null

24module.c.o.tmp: 24module.c.c
	$(CC) -o 24module.c.o.tmp -c 24module.c.c $(CFLAGS) 2> /dev/null

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./comelang "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang-str.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang-net.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang-pthread.h "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/share/doc/comelang"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/comelang/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.log *.c.o comelang *.o a *.tmp comelang-val comelang-sh comelang-inf *.i *.val *.out *.log a.c.c b.c.c b c c.c.c *.valgrind aa aaa

distclean: clean
	rm -fR  config.h autom4te.cache 

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/comelang
	rm -f "$(DESTDIR)"/include/comelang.h
	rm -f "$(DESTDIR)"/include/comelang-str.h
	rm -f "$(DESTDIR)"/include/comelang-net.h
	rm -f "$(DESTDIR)"/include/comelang-pthread.h
	rm -f "$(DESTDIR)/share/doc/comelang/README.md"

