#
# Project manager generated MAKEFILE
#
TITLE = ff_v850
DEVFILE = C:\Program Files\NEC Electronics Tools\DEV\DF3340.800
PROJDIR = C:\user\Prj_V850\ff_v850
TOOLDIR = C:\Program Files\NEC Electronics Tools\PM+\V6.11\BIN
WORKDIR = C:\user\Prj_V850\ff_v850
DEBUG = 

INTDIR	= obj
FINDIR	= obj
CC	= "C:\Program Files\NEC Electronics Tools\CA850\V3.50\bin\ca850.exe"
CFLAGS	= -cpu F3340 -Fo=$(INTDIR) -ansi -w2 -Xr -woff=2782 -Wa,-woff=3029
AS	= "C:\Program Files\NEC Electronics Tools\CA850\V3.50\bin\as850.exe"
ASFLAGS	= -cpu F3340 -g
LD	= "C:\Program Files\NEC Electronics Tools\CA850\V3.50\bin\ld850.exe"
LIBDIR	= C:\Program Files\NEC Electronics Tools\CA850\V3.50\lib850\r32
STARTUP	= $(INTDIR)\startup.o
DEP_STARTUP = 
LINKDIR	= C:\user\Prj_V850\ff_v850\ff_v850.dir
LDFLAGS	= -cpu F3340 -o $(FINDIR)\a.out -D $(LINKDIR)
LIBRARY	= "$(LIBDIR)\libm.a" \
	  "$(LIBDIR)\libc.a" \
	  "$(LIBDIR)\libr.a"
ROMPCRT	= "$(LIBDIR)\rompcrt.o"
LDLIBS	= -lm -lc -lr $(ROMPCRT)
ROMP	= "C:\Program Files\NEC Electronics Tools\CA850\V3.50\bin\romp850.exe"
RPFLAGS	= -o $(FINDIR)\romp.out
HX	= "C:\Program Files\NEC Electronics Tools\CA850\V3.50\bin\hx850.exe"
HXFLAGS	= -o $(FINDIR)\ff_v850.hex

OBJS = obj\uart_v850es.o  \
	obj\xprintf.o  \
	obj\ff.o  \
	obj\ffunicode.o  \
	obj\main.o  \
	obj\mmc_v850es.o 

DEP_uart_v850es_c = C:\user\Prj_V850\ff_v850\uart_v850es.h \
	C:\user\Prj_V850\ff_v850\v850es.h

DEP_xprintf_c = C:\user\Prj_V850\ff_v850\xprintf.h \
	"C:\Program Files (x86)\NEC Electronics Tools\CA850\V3.50\inc850\stdarg.h"

DEP_ff_c = C:\user\Prj_V850\ff_v850\ff.h \
	C:\user\Prj_V850\ff_v850\ffconf.h \
	C:\user\Prj_V850\ff_v850\diskio.h \
	"C:\Program Files (x86)\NEC Electronics Tools\CA850\V3.50\inc850\stdarg.h"

DEP_ffunicode_c = C:\user\Prj_V850\ff_v850\ff.h \
	C:\user\Prj_V850\ff_v850\ffconf.h

DEP_main_c = "C:\Program Files\NEC Electronics Tools\CA850\V3.50\inc850\string.h" \
	"C:\Program Files\NEC Electronics Tools\CA850\V3.50\inc850\stddef.h" \
	C:\user\Prj_V850\ff_v850\uart_v850es.h \
	C:\user\Prj_V850\ff_v850\v850es.h \
	C:\user\Prj_V850\ff_v850\xprintf.h \
	C:\user\Prj_V850\ff_v850\ff.h \
	C:\user\Prj_V850\ff_v850\ffconf.h \
	C:\user\Prj_V850\ff_v850\diskio.h

DEP_mmc_v850es_c = C:\user\Prj_V850\ff_v850\v850es.h \
	C:\user\Prj_V850\ff_v850\diskio.h \
	C:\user\Prj_V850\ff_v850\ff.h \
	C:\user\Prj_V850\ff_v850\ffconf.h

GOAL : C:\user\Prj_V850\ff_v850\obj\romp.out

BeforeBuild:		#ビルド前の処理(疑似ターゲット)
	C:\WINDOWS\system32\cmd.exe /c if not exist obj mkdir obj














obj\uart_v850es.o : uart_v850es.c $(DEP_uart_v850es_c)
	$(CC) $(CFLAGS) -Os -g -c uart_v850es.c

obj\xprintf.o : xprintf.c $(DEP_xprintf_c)
	$(CC) $(CFLAGS) -Os -g -c xprintf.c

obj\ff.o : ff.c $(DEP_ff_c)
	$(CC) $(CFLAGS) -Os -g -c ff.c

obj\ffunicode.o : ffunicode.c $(DEP_ffunicode_c)
	$(CC) $(CFLAGS) -Os -g -c ffunicode.c

obj\main.o : main.c $(DEP_main_c)
	$(CC) $(CFLAGS) -Os -g -c main.c

obj\mmc_v850es.o : mmc_v850es.c $(DEP_mmc_v850es_c)
	$(CC) $(CFLAGS) -Os -g -c mmc_v850es.c

obj\startup.o : C:\user\Prj_V850\ff_v850\startup.s $(DEP_STARTUP)
	$(AS) -cpu F3340 -g -o $(INTDIR)\startup.o C:\user\Prj_V850\ff_v850\startup.s

obj\romp.out : $(STARTUP) $(LINKDIR) $(OBJS) $(LIBRARY) $(ROMPCRT)
	$(LD) @ff_v850.cld
	$(ROMP) $(RPFLAGS) $(FINDIR)\a.out
	$(HX) $(HXFLAGS) $(FINDIR)\romp.out

