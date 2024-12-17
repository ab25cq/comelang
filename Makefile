#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
CFLAGS_OPT=-O2
CC=clang
INSTALL=/usr/bin/install -c
CFLAGS=-DPREFIX="\"${DESTDIR}/\""  -I/usr/local/include -gdwarf-4 $(CFLAGS_OPT)
LIBS= -lutil -ldl -lm -lrt

#########################################
# main
#########################################
all: comelang-sh

comelang: 01main.c.o 02transpile.c.o 02constructors.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05type.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o libcomelang-str.a libcomelang-net.a libcomelang-pthread.a 
	comelang -o comelang 01main.c.o 02transpile.c.o 02constructors.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05type.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o $(CFLAGS) 

01main.c.o: 01main.c
	comelang -S -C -o 01main.c.o -c 01main.c $(CFLAGS) 

02constructors.c.o: 02constructors.c
	comelang -S -C -o 02constructors.c.o -c 02constructors.c $(CFLAGS) 

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

libcomelang-str.a: libcomelang-str.c
	comelang -str -C -S -c libcomelang-str.c $(CFLAGS) 
	ar rcs libcomelang-str.a libcomelang-str.c.o

libcomelang-net.a: libcomelang-net.c
	comelang -net -C -S -c libcomelang-net.c $(CFLAGS) 
	ar rcs libcomelang-net.a libcomelang-net.c.o

libcomelang-pthread.a: libcomelang-pthread.c
	comelang -pthread -C -S -c libcomelang-pthread.c $(CFLAGS) 
	ar rcs libcomelang-pthread.a libcomelang-pthread.c.o

comelang-sh: 01main.c.o.tmp 02constructors.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05pre_op.c.o.tmp 05call.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp libcomelang-str.c.o.tmp libcomelang-net.c.o.tmp libcomelang-pthread.c.o.tmp
	clang -o comelang-sh  01main.c.o.tmp 02transpile.c.o.tmp 02constructors.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05call.c.o.tmp 05pre_op.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp 
	cp -p comelang-sh comelang

01main.c.o.tmp: 01main.c.c
	clang -o 01main.c.o.tmp -c 01main.c.c $(CFLAGS) 2> /dev/null

02transpile.c.o.tmp: 02transpile.c.c
	clang -o 02transpile.c.o.tmp -c 02transpile.c.c $(CFLAGS) 2> /dev/null

02constructors.c.o.tmp: 02constructors.c.c
	clang -o 02constructors.c.o.tmp -c 02constructors.c.c $(CFLAGS) 2> /dev/null

03output_code.c.o.tmp: 03output_code.c.c
	clang -o 03output_code.c.o.tmp -c 03output_code.c.c $(CFLAGS) 2> /dev/null

04heap.c.o.tmp: 04heap.c.c
	clang -o 04heap.c.o.tmp -c 04heap.c.c $(CFLAGS) 2> /dev/null

05pre_op.c.o.tmp: 05pre_op.c.c
	clang -o 05pre_op.c.o.tmp -c 05pre_op.c.c $(CFLAGS) 2> /dev/null

05call.c.o.tmp: 05call.c.c
	clang -o 05call.c.o.tmp -c 05call.c.c $(CFLAGS) 2> /dev/null

05function.c.o.tmp: 05function.c.c
	clang -o 05function.c.o.tmp -c 05function.c.c $(CFLAGS) 2> /dev/null

05number.c.o.tmp: 05number.c.c
	clang -o 05number.c.o.tmp -c 05number.c.c $(CFLAGS) 2> /dev/null

05type.c.o.tmp: 05type.c.c
	clang -o 05type.c.o.tmp -c 05type.c.c $(CFLAGS) 2> /dev/null

06str.c.o.tmp: 06str.c.c
	clang  -o 06str.c.o.tmp -c 06str.c.c $(CFLAGS) 2> /dev/null

07var.c.o.tmp: 07var.c.c
	clang -o 07var.c.o.tmp -c 07var.c.c $(CFLAGS) 2> /dev/null

07gvar.c.o.tmp: 07gvar.c.c
	clang -o 07gvar.c.o.tmp -c 07gvar.c.c $(CFLAGS) 2> /dev/null

08if.c.o.tmp: 08if.c.c
	clang -o 08if.c.o.tmp -c 08if.c.c $(CFLAGS) 2> /dev/null

09while.c.o.tmp: 09while.c.c
	clang -o 09while.c.o.tmp -c 09while.c.c $(CFLAGS) 2> /dev/null

10do_while.c.o.tmp: 10do_while.c.c
	clang -o 10do_while.c.o.tmp -c 10do_while.c.c $(CFLAGS) 2> /dev/null

11for.c.o.tmp: 11for.c.c
	clang -o 11for.c.o.tmp -c 11for.c.c $(CFLAGS) 2> /dev/null

12switch.c.o.tmp: 12switch.c.c
	clang -o 12switch.c.o.tmp -c 12switch.c.c $(CFLAGS) 2> /dev/null

13op.c.o.tmp: 13op.c.c
	clang -o 13op.c.o.tmp -c 13op.c.c $(CFLAGS) 2> /dev/null

14struct.c.o.tmp: 14struct.c.c
	clang -o 14struct.c.o.tmp -c 14struct.c.c $(CFLAGS) 2> /dev/null

15union.c.o.tmp: 15union.c.c
	clang -o 15union.c.o.tmp -c 15union.c.c $(CFLAGS) 2> /dev/null

16enum.c.o.tmp: 16enum.c.c
	clang -o 16enum.c.o.tmp -c 16enum.c.c $(CFLAGS) 2> /dev/null

17typedef.c.o.tmp: 17typedef.c.c
	clang -o 17typedef.c.o.tmp -c 17typedef.c.c $(CFLAGS) 2> /dev/null

18field.c.o.tmp: 18field.c.c
	clang -o 18field.c.o.tmp -c 18field.c.c $(CFLAGS) 2> /dev/null

19eq.c.o.tmp: 19eq.c.c
	clang -o 19eq.c.o.tmp -c 19eq.c.c $(CFLAGS) 2> /dev/null

20method.c.o.tmp: 20method.c.c
	clang -o 20method.c.o.tmp -c 20method.c.c $(CFLAGS) 2> /dev/null

21obj.c.o.tmp: 21obj.c.c
	clang -o 21obj.c.o.tmp -c 21obj.c.c $(CFLAGS) 2> /dev/null

22impl.c.o.tmp: 22impl.c.c
	clang -o 22impl.c.o.tmp -c 22impl.c.c $(CFLAGS) 2> /dev/null

23interface.c.o.tmp: 23interface.c.c
	clang -o 23interface.c.o.tmp -c 23interface.c.c $(CFLAGS) 2> /dev/null

24module.c.o.tmp: 24module.c.c
	clang -o 24module.c.o.tmp -c 24module.c.c $(CFLAGS) 2> /dev/null

libcomelang-str.c.o.tmp: libcomelang-str.c.c
	clang -o libcomelang-str.c.o.tmp -c libcomelang-str.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang-str.a libcomelang-str.c.o.tmp

libcomelang-net.c.o.tmp: libcomelang-net.c.c
	clang -o libcomelang-net.c.o.tmp -c libcomelang-net.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang-net.a libcomelang-net.c.o.tmp

libcomelang-pthread.c.o.tmp: libcomelang-pthread.c.c
	clang -o libcomelang-pthread.c.o.tmp -c libcomelang-pthread.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang-pthread.a libcomelang-pthread.c.o.tmp

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./comelang "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/include/newlib-nano"
	$(INSTALL) -m 644 ./comelang.h "$(DESTDIR)/include"
	cp -Rf ./include-newlib-nano/* "$(DESTDIR)/include/newlib-nano"
	$(INSTALL) -m 644 ./comelang-str.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang-net.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang-pthread.h "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang-str.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang-net.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang-pthread.a "$(DESTDIR)/lib"
	if test -e ./libcomelang-str.c.o; then $(INSTALL) -m 644 ./libcomelang-str.c.o "$(DESTDIR)/lib"; fi
	if test -e ./libcomelang-net.c.o; then $(INSTALL) -m 644 ./libcomelang-net.c.o "$(DESTDIR)/lib"; fi
	if test -e ./libcomelang-pthtread.c.o; then $(INSTALL) -m 644 ./libcomelang-pthread.c.o "$(DESTDIR)/lib"; fi
	mkdir -p "$(DESTDIR)/share/doc/comelang"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/comelang/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.log *.c.o comelang libcomelang.a libcomelang-str.a libcomelang-net.a libcomelang-gc.a libcomelang-str-gc.a libcomelang-net-gc.a libcomelang-pthread.a libcomelang-pthread-gc.a *.o a *.tmp comelang-val comelang-sh comelang-inf *.i *.val *.out *.log a.c.c b.c.c b c c.c.c

distclean: clean
	rm -fR  config.h autom4te.cache 

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/comelang
	rm -f "$(DESTDIR)"/include/comelang.h
	rm -rf "$(DESTDIR)"/include/pico/
	rm -f "$(DESTDIR)"/include/comelang-pico.h
	rm -f "$(DESTDIR)"/include/comelang-str.h
	rm -f "$(DESTDIR)"/include/comelang-net.h
	rm -f "$(DESTDIR)"/include/comelang-pthread.h
	rm -f "$(DESTDIR)"/lib/libcomelang.a
	rm -f "$(DESTDIR)"/lib/libcomelang-str.a
	rm -f "$(DESTDIR)"/lib/libcomelang-net.a
	rm -f "$(DESTDIR)"/lib/libcomelang-pthread.a
	rm -f "$(DESTDIR)"/lib/libcomelang-gc.a
	rm -f "$(DESTDIR)"/lib/libcomelang-str-gc.a
	rm -f "$(DESTDIR)"/lib/libcomelang-net-gc.a
	rm -f "$(DESTDIR)"/lib/libcomelang-pthread-gc.a
	rm -f "$(DESTDIR)"/lib/libcomelang.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-str.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-net.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-pthread.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-gc.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-str-gc.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-net-gc.c.o
	rm -f "$(DESTDIR)"/lib/libcomelang-pthread-gc.c.o
	rm -f "$(DESTDIR)/share/doc/comelang/README.md"

