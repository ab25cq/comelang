#########################################
# istalled directories
#########################################
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/blotus
sysconfdir=${prefix}/etc/blotus
includedir=${prefix}/include/blotus
datarootdir=${prefix}/share/blotus
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang
INSTALL=install
CFLAGS= -common-header -O2 
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg 
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=blotus
TARGET_DEBUG=blotus-debug

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
	$(INSTALL) -m 755 ./blotus "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/blotus"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/blotus/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c blotus *.log *.out common.h blotus-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/blotus
	rm -f "$(DESTDIR)/share/doc/blotus/README.md"

run: blotus
	rm -f *.log
	./blotus

compile: blotus

debug: blotus-debug
	rm -f *.log
	./blotus-debug
