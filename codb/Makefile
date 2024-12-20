#########################################
# istalled directories
#########################################
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/codb
sysconfdir=${prefix}/etc/codb
includedir=${prefix}/include/codb
datarootdir=${prefix}/share/codb
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang
INSTALL=install
CFLAGS= -common-header -O2  -lelf -str
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg -ldwarf -lelf
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=codb
TARGET_DEBUG=codb-debug

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
	$(INSTALL) -m 755 ./codb "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/codb"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/codb/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c codb *.log *.out common.h codb-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/codb
	rm -f "$(DESTDIR)/share/doc/codb/README.md"

run: codb
	rm -f *.log
	./codb ./a target_function

compile: codb

debug: codb-debug
	rm -f *.log
	./codb-debug
