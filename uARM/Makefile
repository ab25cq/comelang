APP	= uARM
CC	= gcc
LD	= gcc

BUILD ?= debug

ifeq ($(BUILD), avr)

	CC_FLAGS	= -O2 -mmcu=atmega1284p -I/usr/lib/avr/include -DEMBEDDED -D_SIM -ffunction-sections
	LD_FLAGS	= -O2 -mmcu=atmega1284p -Wl,--gc-sections
	CC		= avr-gcc
	LD		= avr-gcc
	EXTRA		= avr-size -Ax $(APP) && avr-objcopy -j .text -j .data -O ihex $(APP) $(APP).hex
	EXTRA_OBJS	= SD.o main_avr.o avr_asm.o
endif

ifeq ($(BUILD), debug)
	CC_FLAGS	= -Wall -W -O0 -g -ggdb -ggdb3 -D_FILE_OFFSET_BITS=64 -D__USE_LARGEFILE64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -DLCD_SUPPORT
	LD_FLAGS	= -O0 -g -ggdb -ggdb3
	EXTRA_OBJS	= main_pc.o
endif

ifeq ($(BUILD), profile)
	CC_FLAGS	= -O3 -g -pg -fno-omit-frame-pointer -march=core2 -mpreferred-stack-boundary=4  -D_FILE_OFFSET_BITS=64 -D__USE_LARGEFILE64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE
	LD_FLAGS	= -O3 -g -pg
	EXTRA_OBJS	= main_pc.o
endif

ifeq ($(BUILD), opt)
	CC_FLAGS	= -O3 -fomit-frame-pointer -march=core2 -mpreferred-stack-boundary=4 -momit-leaf-frame-pointer -D_FILE_OFFSET_BITS=64 -D__USE_LARGEFILE64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE
	LD_FLAGS	= -O3
	EXTRA_OBJS	= main_pc.o
endif

ifeq ($(BUILD), opt64)
	CC_FLAGS	= -O3 -fomit-frame-pointer -march=core2 -momit-leaf-frame-pointer -D_FILE_OFFSET_BITS=64 -D__USE_LARGEFILE64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE
	LD_FLAGS	= -O3
	EXTRA_OBJS	= main_pc.o
endif

LDFLAGS = $(LD_FLAGS) -Wall -Wextra
CCFLAGS = $(CC_FLAGS) -Wall -Wextra

OBJS	= $(EXTRA_OBJS) rt.o math64.o CPU.o MMU.o cp14.o cp15.o mem.o RAM.o callout_RAM.o SoC.o pxa255_IC.o icache.o pxa255_TIMR.o pxa255_RTC.o pxa255_UART.o pxa255_PwrClk.o pxa255_GPIO.o pxa255_DMA.o pxa255_DSP.o pxa255_LCD.o

$(APP): $(OBJS)
	$(LD) $(LDFLAGS) -o $(APP) $(OBJS)
	$(EXTRA)

AVR:	$(APP)
	sudo avrdude -V -p ATmega1284p -c avrisp2 -P usb -U flash:w:$(APP).hex:i

math64.o: math64.c math64.h types.h
	$(CC) $(CCFLAGS) -o math64.o -c math64.c

CPU.o: CPU.c CPU.h types.h math64.h icache.h
	$(CC) $(CCFLAGS) -o CPU.o -c CPU.c

icache.o: icache.c icache.h types.h CPU.h
	$(CC) $(CCFLAGS) -o icache.o -c icache.c

dcache.o: dcache.c dcache.h types.h CPU.h
	$(CC) $(CCFLAGS) -o dcache.o -c dcache.c

MMU.o: MMU.c MMU.h types.h
	$(CC) $(CCFLAGS) -o MMU.o -c MMU.c

cp14.o: cp14.c cp14.h CPU.h types.h pxa255_IC.h
	$(CC) $(CCFLAGS) -o cp14.o -c cp14.c

cp15.o: cp15.c cp15.h CPU.h types.h
	$(CC) $(CCFLAGS) -o cp15.o -c cp15.c

mem.o: mem.c mem.h types.h
	$(CC) $(CCFLAGS) -o mem.o -c mem.c

avr_asm.o: avr_asm.S
	$(CC) $(CCFLAGS) -o avr_asm.o -c avr_asm.S

RAM.o: RAM.c RAM.h mem.h types.h
	$(CC) $(CCFLAGS) -o RAM.o -c RAM.c

callout_RAM.o: callout_RAM.c callout_RAM.h mem.h types.h
	$(CC) $(CCFLAGS) -o callout_RAM.o -c callout_RAM.c

SD.o: SD.c SD.h types.h
	$(CC) $(CCFLAGS) -o SD.o -c SD.c

SoC.o: SoC.c SoC.h RAM.h mem.h CPU.h MMU.h pxa255_IC.h math64.h icache.h
	$(CC) $(CCFLAGS) -o SoC.o -c SoC.c

pxa255_IC.o: pxa255_IC.c pxa255_IC.h mem.h CPU.h
	$(CC) $(CCFLAGS) -o pxa255_IC.o -c pxa255_IC.c

pxa255_TIMR.o: pxa255_TIMR.c pxa255_TIMR.h pxa255_IC.h mem.h CPU.h
	$(CC) $(CCFLAGS) -o pxa255_TIMR.o -c pxa255_TIMR.c
	
pxa255_RTC.o: pxa255_RTC.c pxa255_RTC.h pxa255_IC.h mem.h CPU.h
	$(CC) $(CCFLAGS) -o pxa255_RTC.o -c pxa255_RTC.c

pxa255_LCD.o: pxa255_LCD.c pxa255_LCD.h pxa255_IC.h mem.h CPU.h
	$(CC) $(CCFLAGS) -o pxa255_LCD.o -c pxa255_LCD.c

pxa255_UART.o: pxa255_UART.c pxa255_UART.h pxa255_IC.h mem.h CPU.h
	$(CC) $(CCFLAGS) -o pxa255_UART.o -c pxa255_UART.c

pxa255_PwrClk.o: pxa255_PwrClk.c pxa255_PwrClk.h CPU.h mem.h
	$(CC) $(CCFLAGS) -o pxa255_PwrClk.o -c pxa255_PwrClk.c

pxa255_GPIO.o: pxa255_GPIO.c pxa255_GPIO.h CPU.h mem.h
	$(CC) $(CCFLAGS) -o pxa255_GPIO.o -c pxa255_GPIO.c

pxa255_DMA.o: pxa255_DMA.c pxa255_DMA.h CPU.h mem.h
	$(CC) $(CCFLAGS) -o pxa255_DMA.o -c pxa255_DMA.c

pxa255_DSP.o: pxa255_DSP.c pxa255_DSP.h CPU.h math64.h
	$(CC) $(CCFLAGS) -o pxa255_DSP.o -c pxa255_DSP.c

main_pc.o: SoC.h main_pc.c types.h
	$(CC) $(CCFLAGS) -o main_pc.o -c main_pc.c

main_avr.o: SoC.h main_avr.c types.h
	$(CC) $(CCFLAGS) -o main_avr.o -c main_avr.c

rt.o: rt.c types.h
	$(CC) $(CCFLAGS) -o rt.o -c rt.c

clean:
	rm -f $(APP) *.o


