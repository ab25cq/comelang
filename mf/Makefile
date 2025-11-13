#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/mf
sysconfdir=${prefix}/etc/mf
includedir=${prefix}/include/mf
datarootdir=${prefix}/share/mf
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -common-header -O2
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg 
LIBS=
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=mf
TARGET_DEBUG=mf-debug

#########################################
# main
#########################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -v -lncurses -lreadline 

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@ -lncurses -lreadline 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.c
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./mf "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/mf"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/mf/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c mf *.log *.out mf-debug tmp-common*.txt tmp-common-header*

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/mf
	rm -f "$(DESTDIR)/share/doc/mf/README.md"

run: mf
	rm -f *.log
	./mf

compile: mf

debug: mf-debug
	rm -f *.log
	./mf-debug
