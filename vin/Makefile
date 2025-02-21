##########################################
# installed directories
##########################################
prefix=/usr/local exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/com
sysconfdir=${prefix}/etc/comelang
includedir=${prefix}/include/comelang
datarootdir=${prefix}/share/comelang
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib


#########################################
# environmnet variables
##########################################
CC=clang
NCC=@NCC@
INSTALL=/usr/bin/install -c
CFLAGS=-I$(HOME)/include -I.  -gdwarf-4 -O2 -I/opt/homebrew/opt/ncurses/include -L/opt/homebrew/opt/ncurses/lib
LIBS= -ldl -lm -lpcre -lncursesw -lreadline -lpthread
OS=
DESTDIR=/usr/local

#########################################
# main
##########################################
all: vin

vin: main.c.o main.c 01init.c.o 01init.c 02base.c.o 02base.c 03insert_mode.c.o 03insert_mode.c 04word.c 04word.c.o 05undo.c 05undo.c.o 06file.c.o 07yank.c.o 08visual.c.o 09search.c.o 10edit.c.o 11move.c.o 12command.c.o 13completion.c.o 14dot.c.o 16mark.c.o 17hvisual.c.o 18vvisual.c.o 19rewrite_mode.c.o 20shell_mode.c.o 21binary_mode.c.o
	comelang -o vin main.c.o 01init.c.o 02base.c.o 03insert_mode.c.o 04word.c.o 05undo.c.o 06file.c.o 07yank.c.o 08visual.c.o 09search.c.o 10edit.c.o 11move.c.o 12command.c.o 13completion.c.o 14dot.c.o 16mark.c.o 17hvisual.c.o 18vvisual.c.o 19rewrite_mode.c.o 20shell_mode.c.o 21binary_mode.c.o -L/opt/local/lib $(CFLAGS) $(LIBS) -L/usr/local/lib -str -lncurses

main.c.o: main.c common.h
	comelang -c  main.c -Isrc $(CFLAGS) -I/usr/local/include -I.

01init.c.o: 01init.c common.h
	comelang -c  01init.c -Isrc $(CFLAGS) -I/usr/local/include -I.

02base.c.o: 02base.c common.h
	comelang -c  02base.c -Isrc $(CFLAGS) -I/usr/local/include -I.

03insert_mode.c.o: 03insert_mode.c common.h
	comelang -c  03insert_mode.c -Isrc $(CFLAGS) -I/usr/local/include -I.

04word.c.o: 04word.c common.h
	comelang -c  04word.c -Isrc $(CFLAGS) -I/usr/local/include -I.

05undo.c.o: 05undo.c common.h
	comelang -c  05undo.c -Isrc $(CFLAGS) -I/usr/local/include -I.

06file.c.o: 06file.c common.h
	comelang -c  06file.c -Isrc $(CFLAGS) -I/usr/local/include -I.

07yank.c.o: 07yank.c common.h
	comelang -c  07yank.c -Isrc $(CFLAGS) -I/usr/local/include -I.

08visual.c.o: 08visual.c common.h
	comelang -c  08visual.c -Isrc $(CFLAGS) -I/usr/local/include -I.

09search.c.o: 09search.c common.h
	comelang -c  09search.c -Isrc $(CFLAGS) -I/usr/local/include -I.

10edit.c.o: 10edit.c common.h
	comelang -c  10edit.c -Isrc $(CFLAGS) -I/usr/local/include -I.

11move.c.o: 11move.c common.h
	comelang -c  11move.c -Isrc $(CFLAGS) -I/usr/local/include -I.

12command.c.o: 12command.c common.h
	comelang -c  12command.c -Isrc $(CFLAGS) -I/usr/local/include -I.

13completion.c.o: 13completion.c common.h
	comelang -c  13completion.c -Isrc $(CFLAGS) -I/usr/local/include -I.

14dot.c.o: 14dot.c common.h
	comelang -c  14dot.c -Isrc $(CFLAGS) -I/usr/local/include -I.

16mark.c.o: 16mark.c common.h
	comelang -c  16mark.c -Isrc $(CFLAGS) -I/usr/local/include -I.

17hvisual.c.o: 17hvisual.c common.h
	comelang -c  17hvisual.c -Isrc $(CFLAGS) -I/usr/local/include -I.

18vvisual.c.o: 18vvisual.c common.h
	comelang -c  18vvisual.c -Isrc $(CFLAGS) -I/usr/local/include -I.

19rewrite_mode.c.o: 19rewrite_mode.c common.h
	comelang -c  19rewrite_mode.c -Isrc $(CFLAGS) -I/usr/local/include -I.
	mkdir -p ~/.vin/backup

20shell_mode.c.o: 20shell_mode.c common.h
	comelang -c  20shell_mode.c -Isrc $(CFLAGS) -I/usr/local/include -I.

21binary_mode.c.o: 21binary_mode.c common.h
	comelang -c  21binary_mode.c -Isrc $(CFLAGS) -I/usr/local/include -I.

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./vin "$(DESTDIR)/bin"

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/vin
	rm -Rf ~/.vin/

#########################################
# permission
#########################################
permission:
	chmod 644 *
	chmod 755 .git man 
	chmod 644 *.c
	chmod 644 *.h

#########################################
# clean
#########################################
clean:
	rm -fR *.ll *.bc *.c.tmp *.out *.o valgrind.txt *.i aaa AAA BBB bbb vin.dSYM *.c.c *.out
	rm -fR vin

test:
	rm -f valgrind.txt
	valgrind ./vin a.txt 2> aaa

