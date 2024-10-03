#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/webweb
sysconfdir=${prefix}/etc/webweb
includedir=${prefix}/include/webweb
datarootdir=${prefix}/share/webweb
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang
INSTALL=install
CFLAGS= -common-header -O2  -net
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg 
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=webweb
TARGET_DEBUG=webweb-debug

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
	$(INSTALL) -m 755 ./webweb "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/webweb"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/webweb/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c webweb *.log *.out common.h webweb-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/webweb
	rm -f "$(DESTDIR)/share/doc/webweb/README.md"

run: webweb
	rm -f *.log
	./webweb

compile: webweb

debug: webweb-debug
	rm -f *.log
	./webweb-debug
