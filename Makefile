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
all: comelang2-sh

comelang2: 01main.c.o 02transpile.c.o 02constructors.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05type.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o libcomelang2.a libcomelang2-str.a libcomelang2-net.a libcomelang2-gc.a libcomelang2-str-gc.a libcomelang2-net-gc.a
	comelang2 -o comelang2 01main.c.o 02transpile.c.o 02constructors.c.o 03output_code.c.o 04heap.c.o 05pre_op.c.o 05call.c.o 05function.c.o 05number.c.o 05type.c.o 06str.c.o 07var.c.o 07gvar.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o 24module.c.o $(CFLAGS) -L.

01main.c.o: 01main.c
	comelang2 -S -o 01main.c.o -c 01main.c $(CFLAGS) 

02constructors.c.o: 02constructors.c
	comelang2 -S -o 02constructors.c.o -c 02constructors.c $(CFLAGS) 

02transpile.c.o: 02transpile.c
	comelang2 -S -o 02transpile.c.o -c 02transpile.c $(CFLAGS) 

03output_code.c.o: 03output_code.c
	comelang2 -S -o 03output_code.c.o -c 03output_code.c $(CFLAGS) 

04heap.c.o: 04heap.c
	comelang2 -S -o 04heap.c.o -c 04heap.c $(CFLAGS) 

05pre_op.c.o: 05pre_op.c
	comelang2 -S -o 05pre_op.c.o -c 05pre_op.c $(CFLAGS) 

05call.c.o: 05call.c
	comelang2 -S -o 05call.c.o -c 05call.c $(CFLAGS) 

05function.c.o: 05function.c
	comelang2 -S -o 05function.c.o -c 05function.c $(CFLAGS) 

05number.c.o: 05number.c
	comelang2 -S -o 05number.c.o -c 05number.c $(CFLAGS) 

05type.c.o: 05type.c
	comelang2 -S -o 05type.c.o -c 05type.c $(CFLAGS) 

06str.c.o: 06str.c
	comelang2 -S -o 06str.c.o -c 06str.c $(CFLAGS) 

07var.c.o: 07var.c
	comelang2 -S -o 07var.c.o -c 07var.c $(CFLAGS) 

07gvar.c.o: 07gvar.c
	comelang2 -S -o 07gvar.c.o -c 07gvar.c $(CFLAGS) 

08if.c.o: 08if.c
	comelang2 -S -o 08if.c.o -c 08if.c $(CFLAGS) 

09while.c.o: 09while.c
	comelang2 -S -o 09while.c.o -c 09while.c $(CFLAGS) 

10do_while.c.o: 10do_while.c
	comelang2 -S -o 10do_while.c.o -c 10do_while.c $(CFLAGS) 

11for.c.o: 11for.c
	comelang2 -S -o 11for.c.o -c 11for.c $(CFLAGS) 

12switch.c.o: 12switch.c
	comelang2 -S -o 12switch.c.o -c 12switch.c $(CFLAGS) 

13op.c.o: 13op.c
	comelang2 -S -o 13op.c.o -c 13op.c $(CFLAGS) 

14struct.c.o: 14struct.c
	comelang2 -S -o 14struct.c.o -c 14struct.c $(CFLAGS) 

15union.c.o: 15union.c
	comelang2 -S -o 15union.c.o -c 15union.c $(CFLAGS) 

16enum.c.o: 16enum.c
	comelang2 -S -o 16enum.c.o -c 16enum.c $(CFLAGS) 

17typedef.c.o: 17typedef.c
	comelang2 -S -o 17typedef.c.o -c 17typedef.c $(CLAGS) 

18field.c.o: 18field.c
	comelang2 -S -o 18field.c.o -c 18field.c $(CFLAGS) 

19eq.c.o: 19eq.c
	comelang2 -S -o 19eq.c.o -c 19eq.c $(CFLAGS) 

20method.c.o: 20method.c
	comelang2 -S -o 20method.c.o -c 20method.c $(CFLAGS) 

21obj.c.o: 21obj.c
	comelang2 -S -o 21obj.c.o -c 21obj.c $(CFLAGS) 

22impl.c.o: 22impl.c
	comelang2 -S -o 22impl.c.o -c 22impl.c $(CFLAGS) 

23interface.c.o: 23interface.c
	comelang2 -S -o 23interface.c.o -c 23interface.c $(CFLAGS) 

24module.c.o: 24module.c
	comelang2 -S -o 24module.c.o -c 24module.c $(CFLAGS) 

libcomelang2.a: libcomelang2.c
	comelang2 -S -c libcomelang2.c $(CFLAGS) 
	ar rcs libcomelang2.a libcomelang2.c.o

libcomelang2-str.a: libcomelang2-str.c
	comelang2 -str -S -c libcomelang2-str.c $(CFLAGS) 
	ar rcs libcomelang2-str.a libcomelang2-str.c.o

libcomelang2-net.a: libcomelang2-net.c
	comelang2 -net -S -c libcomelang2-net.c $(CFLAGS) 
	ar rcs libcomelang2-net.a libcomelang2-net.c.o

libcomelang2-gc.a: libcomelang2-gc.c
	comelang2 -gc -S -c libcomelang2-gc.c -DENABLE_GC $(CFLAGS) 
	ar rcs libcomelang2-gc.a libcomelang2-gc.c.o

libcomelang2-str-gc.a: libcomelang2-str-gc.c
	comelang2 -str -g -S -c libcomelang2-str-gc.c -DENABLE_GC $(CFLAGS) 
	ar rcs libcomelang2-str-gc.a libcomelang2-str-gc.c.o

libcomelang2-net-gc.a: libcomelang2-net-gc.c
	comelang2 -net -gc -DENABLE_GC -S -c libcomelang2-net-gc.c $(CFLAGS) 
	ar rcs libcomelang2-net-gc.a libcomelang2-net-gc.c.o

comelang2-sh: 01main.c.o.tmp 02constructors.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05pre_op.c.o.tmp 05call.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp libcomelang2.c.o.tmp libcomelang2-str.c.o.tmp libcomelang2-net.c.o.tmp libcomelang2-gc.c.o.tmp libcomelang2-str-gc.c.o.tmp libcomelang2-net-gc.c.o.tmp
	clang -o comelang2-sh  01main.c.o.tmp 02transpile.c.o.tmp 02constructors.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 05call.c.o.tmp 05pre_op.c.o.tmp 05function.c.o.tmp 05number.c.o.tmp 05type.c.o.tmp 06str.c.o.tmp 07var.c.o.tmp 07gvar.c.o.tmp 08if.c.o.tmp 09while.c.o.tmp 10do_while.c.o.tmp 11for.c.o.tmp 12switch.c.o.tmp 13op.c.o.tmp 14struct.c.o.tmp 15union.c.o.tmp 16enum.c.o.tmp 17typedef.c.o.tmp 18field.c.o.tmp 19eq.c.o.tmp 20method.c.o.tmp 21obj.c.o.tmp 22impl.c.o.tmp 23interface.c.o.tmp 24module.c.o.tmp libcomelang2.c.o.tmp 
	cp -p comelang2-sh comelang2

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

libcomelang2.c.o.tmp: libcomelang2.c.c
	clang -o libcomelang2.c.o.tmp -c libcomelang2.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2.a libcomelang2.c.o.tmp

libcomelang2-str.c.o.tmp: libcomelang2-str.c.c
	clang -o libcomelang2-str.c.o.tmp -c libcomelang2-str.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2-str.a libcomelang2-str.c.o.tmp

libcomelang2-net.c.o.tmp: libcomelang2-net.c.c
	clang -o libcomelang2-net.c.o.tmp -c libcomelang2-net.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2-net.a libcomelang2-net.c.o.tmp

libcomelang2-gc.c.o.tmp: libcomelang2-gc.c.c
	clang -o libcomelang2-gc.c.o.tmp -c libcomelang2-gc.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2-gc.a libcomelang2-gc.c.o.tmp

libcomelang2-str-gc.c.o.tmp: libcomelang2-str-gc.c.c
	clang -o libcomelang2-str-gc.c.o.tmp -c libcomelang2-str-gc.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2-str-gc.a libcomelang2-str-gc.c.o.tmp

libcomelang2-net-gc.c.o.tmp: libcomelang2-net.c.c
	clang -o libcomelang2-net-gc.c.o.tmp -c libcomelang2-net-gc.c.c $(CFLAGS) 2> /dev/null
	ar rcs libcomelang2-net-gc.a libcomelang2-net-gc.c.o.tmp

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./comelang2 "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang2.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang2-str.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./comelang2-net.h "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2-str.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2-net.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2-gc.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2-str-gc.a "$(DESTDIR)/lib"
	$(INSTALL) -m 644 ./libcomelang2-net-gc.a "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/comelang2"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/comelang2/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.log *.c.o comelang2 libcomelang2.a libcomelang2-str.a libcomelang2-net.a libcomelang2-gc.a libcomelang2-str-gc.a libcomelang2-net-gc.a *.o a *.tmp comelang2-val comelang2-sh comelang2-inf *.i *.val *.out *.log a.c.c b.c.c b c c.c.c

distclean: clean
	rm -fR  config.h autom4te.cache 

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/comelang2
	rm -f "$(DESTDIR)"/include/comelang2.h
	rm -f "$(DESTDIR)"/include/comelang2-str.h
	rm -f "$(DESTDIR)"/lib/libcomelang2.a
	rm -f "$(DESTDIR)"/lib/libcomelang2-str.a
	rm -f "$(DESTDIR)/share/doc/comelang2/README.md"

