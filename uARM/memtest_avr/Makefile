
CCFLAGS		+= -O2 -mmcu=atmega1284p -fomit-frame-pointer -I/usr/lib/avr/include -ffunction-sections
LDFLAGS		+= -O2 -mmcu=atmega1284p -Wl,--gc-sections -lm $(LD_EXTRA)
CC		= avr-gcc
LD		= avr-gcc
APP		= uARM
OBJS		= avr_main.o avr_asm.o


all:	uARM

AVR:
	sudo avrdude -p ATmega1284p -c avrisp2 -P usb -U flash:w:$(APP).hex:i

uARM:	$(OBJS)
	$(LD) $(LDFLAGS) -o $(APP) $(OBJS)
	avr-size -Ax $(APP)
	avr-objcopy -j .text -j .data -j .lastpage -O ihex $(APP) $(APP).hex

avr_asm.o: ../avr_asm.S
	$(CC) $(CCFLAGS) -o avr_asm.o -c avr_asm.S

avr_main.o: avr_main.c
	$(CC) $(CCFLAGS) -o avr_main.o -c avr_main.c

clean:
	rm -f $(APP) *.o