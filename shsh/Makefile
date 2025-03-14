#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/shsh
sysconfdir=${prefix}/etc/shsh
includedir=${prefix}/include/shsh
datarootdir=${prefix}/share/shsh
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang
INSTALL=install
CFLAGS= -common-header -O2 -str -I/opt/homebrew/opt/readline/include -L/opt/homebrew/opt/readline/lib -lreadline
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg -lreadline -str
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=shsh
TARGET_DEBUG=shsh-debug

#########################################
# main
#########################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.c
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# header
#########################################

header: common.h

common.h: $(SINGLE_SRCS)
	comelang header -common-header $(SINGLE_SRCS)

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./shsh "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/shsh"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/shsh/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c shsh *.log *.out common.h shsh-debug tmp-common*.txt

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/shsh
	rm -f "$(DESTDIR)/share/doc/shsh/README.md"

run: shsh
	rm -f *.log
	./shsh

compile: shsh

debug: shsh-debug
	rm -f *.log
	./shsh-debug
