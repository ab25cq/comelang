#define F_CPU    24000000UL
#define BAUD    115200UL
#include <avr/wdt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/eeprom.h>
#include <avr/interrupt.h>
#include <util/setbaud.h>
#include <util/delay.h>
#include <avr/boot.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>

#undef SPSR    //avr code defines it

#include "SoC.h"
#include "SD.h"
#include "callout_RAM.h"



unsigned char ramRead(UInt32 addr, UInt8* buf, UInt8 sz);
extern void ramWrite(UInt32 addr, UInt8* buf, UInt8 sz);
extern void __vector_13();    //we call it directly :)

volatile UInt32 gRtc;


static int readchar(void){

    #ifdef SIM
        return CHAR_NONE;
    #else
        if(UCSR0A & (1<<RXC0)){

            return UDR0;
        }
        else return CHAR_NONE;
    #endif
}

void writechar(int chr){

    #ifdef SIM

        *(unsigned char*)0x20 = chr;

    #else
        while(!(UCSR0A & (1<<UDRE0)));    //busy loop

        UDR0 = chr;
    #endif
}

//debug things
    static int uart_putchar(char c, _UNUSED_ FILE *stream){

        if(c == '\n') writechar('\r');
        writechar(c);

        return 0;
    }

    static int uart_getchar(_UNUSED_ FILE *stream){

        return _FDEV_EOF;
    }

int rootOps(void* userData, UInt32 sector, void* buf, UInt8 op){

    SD* sd = userData;

    switch(op){
        case BLK_OP_SIZE:

            if(sector == 0){    //num blocks

                if(sd){

                     *(unsigned long*)buf = sdGetNumSec(sd);
                }
                else{

                    *(unsigned long*)buf = 0;
                }
            }
            else if(sector == 1){    //block size

                *(unsigned long*)buf = SD_BLOCK_SIZE;
            }
            else return 0;
            return 1;

        case BLK_OP_READ:

            return sdSecRead(sd, sector, buf);


        case BLK_OP_WRITE:

            return sdSecWrite(sd, sector, buf);
    }
    return 0;
}

void init(){

    cli();

    //wdt
    {
        asm("cli");
        wdt_reset();
        wdt_disable();
    }

    //JTAG off
    {
        unsigned char c = MCUCR | 0x80;

        MCUCR = c;
        MCUCR = c;
    }

    //uart
    #ifndef SIM
    {
        //UART config
        UBRR0H = UBRRH_VALUE;
        UBRR0L = UBRRL_VALUE;
        UCSR0A = USE_2X ? (1 << U2X0) : 0;
        UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
        UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    }
    #endif

    //timer (for ram)
    #ifndef SIM
    {
        OCR1A = 0x5AD2;        //match every 62ms
        TCCR1A = 0x00;
        TCCR1B = 0x0B;        //reset on match with OCR1A
        TIMSK1 = 2;        //interrupt when we match
    }
    #endif

    //UART IO
    {
    //    static FILE uart_str = FDEV_SETUP_STREAM(uart_putchar, uart_getchar, _FDEV_SETUP_RW);
    //    stdout = stderr = &uart_str;
    }

    //RAM PORT
    #ifndef SIM
    {

        DDRA =  0xFF;    //out: A0..A7
        DDRB |= 0x3F;    //out: A8...A11, nCAS, nWE
        DDRD |= 0x80;    //out: nRAS
        DDRC = 0x00;    //in:  D0..D7

        PORTA =   0x00;    //lo: A0..A7
        PORTB &=~ 0x0F;    //lo: A8..A11
        PORTB |=  0x30;    //hi: nCAS, nWE
        PORTD |=  0x80;    //hi: nRAS
        PORTC =   0x00;    //no pullups: data
    }
    #endif

    //RTC timer
    {

        gRtc = 0x4F667714UL;    //approx :)

        OCR3A = 46875UL;
        TCCR3A = 0x00;
        TCCR3B = 0x0C;        //Fosc / 256
        TIMSK3 = 2;        //interrupt when we match
    }

    //SD interface setup
    {

        DDRD |= 0x0C;    //LED_r, LED_w outputs
        DDRD &=~ 0x40;    //MISO (D6) in
        DDRB |= 0xC0;    //MOSI (B6), SCLK (B7) out

        PORTD &=~ 0x0C;    //LED_r, LED_w low
        PORTB &=~ 0xC0;    //MOSI & SCLK lo
    }

    //button
    {
        DDRD &=~ 0x10;    //BTN (D4) is input
        PORTD |= 0x10;    //BTN (D4) has pullup
    }

    //RAM init & enable refresh
    #ifndef SIM
    {
        UInt8 t;


        _delay_us(200);    //as per init instructions
        for(t = 0; t < 8; t++) __vector_13();

        sei();    //enable refresh
    }
    #endif
}

ISR(TIMER3_COMPA_vect){

    static UInt8 tik = 0;

    if(tik) gRtc++;
    tik ^= 1;
}

UInt8 simRamRead(UInt32 addr, UInt8* buf, UInt8 sz){

    while(sz--){

        *((volatile unsigned char*)0xD0) = addr >> 16;
        *((volatile unsigned char*)0xD1) = addr >> 8;
        *((volatile unsigned char*)0xD2) = addr;

        *buf++ = *((volatile unsigned char*)0xD3);
    }
}

void simRamWrite(UInt32 addr, const UInt8* buf, UInt8 sz){

    while(sz--){

        *((volatile unsigned char*)0xD0) = addr >> 16;
        *((volatile unsigned char*)0xD1) = addr >> 8;
        *((volatile unsigned char*)0xD2) = addr;

        *((volatile unsigned char*)0xD3) = *buf++;
    }
}

#ifdef SIM
    #define ramRead simRamRead
    #define ramWrite simRamWrite
#endif

Boolean coRamAccess(_UNUSED_ CalloutRam* ram, UInt32 addr, UInt8 size, Boolean write, void* bufP){

    UInt8* b = bufP;

    if(write) ramWrite(addr, b, size);
    else ramRead(addr, b, size);

    return true;
}

static SoC soc;

int main(){

    SD sd;

    init();

    if(!sdInit(&sd)) err_str("sd init failed");

    if(0){
        #define E(x)    do{printf(x); while(1);}while(0)

        UInt32 p, numSec;
        Boolean ret;
        UInt16 i;
        UInt8 v, buf[512];

        printf("Performing some basic tests\n");
        numSec = sdGetNumSec(&sd);
        printf(" - card is %ld sectors (%ld MB)\n", numSec, numSec >> 11UL);

        ret = sdSecRead(&sd, 0, buf);
        if(!ret) E("card read fails\n");

        for(i = 0; i < 512; i++){

            if(i & 0x0F) printf(" ");
            else printf("\n%04X ", i);
            printf("%02X", buf[i]);
        }
        printf("\n");

        if(numSec > 32UL * 1024UL) numSec = 512;

        for(p = 0; p < numSec; p++){

            ret = sdSecRead(&sd, p, buf);
            if(!ret) E("card read fails\n");

            printf("\r reading %ld/%ld", p, numSec);
            for(i = 0; i < 512; i += 16) ramWrite((p << 9) + i, buf + i, 16);
        }
        printf("\n");

        for(p = 0; p < numSec; p++){

            ret = sdSecRead(&sd, p, buf);
            if(!ret) E("card read fails\n");

            printf("\r verifying %ld/%ld", p, numSec);
            for(i = 0; i < 512; i++){

                ramRead((p << 9) + i, &v, 1);

                if(v != buf[i]){

                    printf("fail on sec %ld byte %d RAM=0x%02X SD=0x%02X\n", p, i, v, buf[i]);
                    //E("fail");
                }
            }
        }

        for(i = 0; i < 512; i++){

            UInt8 b[32];

            if(!(i & (sizeof(b) - 1))) ramRead(i, b, sizeof(b));

            v = b[i & (sizeof(b) - 1)];

            if(i & 0x0F) printf(" ");
            else printf("\n%04X ", i);
            printf("%02X", v);
        }


        while(1);
    }


    socInit(&soc, socRamModeCallout, coRamAccess, readchar, writechar, rootOps, &sd);

    if(!(PIND & 0x10)){    //hack for faster boot in case we know all variables & button is pressed
        UInt32 i, s = 786464UL;
        UInt32 d = 0xA0E00000;
        UInt16 j;
        UInt8* b = (UInt8*)soc.blkDevBuf;

        for(i = 0; i < 4096; i++){
            sdSecRead(&sd, s++, b);
            for(j = 0; j < 512; j += 32, d+= 32){

                ramWrite(d, b + j, 32);
            }
        }
        soc.cpu.regs[15] = 0xA0E00000UL+512UL;
    }

    socRun(&soc, 0);

    while(1);

    return 0;
}

void err_str(const char* str){

    char c;

    while((c = *str++) != 0) writechar(c);
}

UInt32 rtcCurTime(void){

    UInt32 t;

    do{

        t = gRtc;

    }while(t != gRtc);

    return t;
}

void* emu_alloc(_UNUSED_ UInt32 size){

    err_str("No allocations in avr mode please!");

    return 0;
}
