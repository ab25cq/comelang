#define F_CPU	24000000UL
#define BAUD	115200UL
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



static void _putchar(char c){

	while(!(UCSR0A & (1 << UDRE0)));
	UDR0 = c;
}

static int uart_putchar(char c, FILE *stream){

	if(c == '\n') _putchar('\r');
	_putchar(c);
	
	return 0;
}

static int uart_getchar(FILE *stream){
	
	return _FDEV_EOF;
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
	{
		//UART config
		UBRR0H = UBRRH_VALUE;
		UBRR0L = UBRRL_VALUE;
		UCSR0A = USE_2X ? (1 << U2X0) : 0;
		UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
		UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	}
	
	//timer
	{
		TCCR1A = 0x00;
		TCCR1B = 0x0B;		//reset on match with OCR1A, clk= clk/64 -> overflow every 13.1 ms (faster than 4x as fast as we need to refresh)
		OCR1A = 0x493E;		//match every 60ms
		TIMSK1 = 2;		//interrupt when we match
	}
	
	//UART IO
	{
		static FILE uart_str = FDEV_SETUP_STREAM(uart_putchar, uart_getchar, _FDEV_SETUP_RW);
		stdout = stderr = &uart_str;
	}
	
	//RAM PORT
	{
	
		DDRA =  0xFF;	//out: A0..A7
		DDRB |= 0x3F;	//out: A8...A11, nCAS, nWE
		DDRD |= 0x80;	//out: nRAS
		DDRC = 0x00;	//in:  D0..D7
		
		PORTA =   0x00;	//lo: A0..A7
		PORTB &=~ 0x0F;	//lo: A8..A11
		PORTB |=  0x30;	//hi: nCAS, nWE
		PORTD |=  0x80;	//hi: nRAS
		PORTC =   0x00;	//no pullups: data
	}
}

unsigned char ramRead(unsigned long addr);
extern void ramWrite(unsigned long addr, unsigned char val);
extern void __vector_13();	//we call it directly :)

int main(void){

	unsigned long i, v, e;
	unsigned char* c = &v;
	unsigned long testUpTo = 16UL << 20UL;	//test 4MB
	unsigned char t;
	
	init();

	_delay_us(200);	//as per init instructions
	for(t = 0; t < 8; t++) __vector_13();
	
	sei();	//enable refresh

	
	printf("writing\n");
	for(i = 0; i < testUpTo;){
	
		v = (i ^ 0x2AF0BABEUL) + (i << 16UL);
		ramWrite(i++, c[0]);
		ramWrite(i++, c[1]);
		ramWrite(i++, c[2]);
		ramWrite(i++, c[3]);
		
		if(!(i & 0xFFFF)) printf("\rwrite %d%% done", i * 100UL / testUpTo);
	}
	printf("\n");
	
	
	printf("reading\n");
	for(i = 0; i < 0x800;){
	
		if(!(i & 0x1F)) printf("\n%08lX: ", i);
		printf("%02X", ramRead(i++));
	}
	
	while(1){
		
		printf("\nreading (2)\n");
		
		for(i = 0; i < testUpTo;){
		
			e = (i ^ 0x2AF0BABEUL) + (i << 16UL);
			
			c[0] = ramRead(i++);
			c[1] = ramRead(i++);
			c[2] = ramRead(i++);
			c[3] = ramRead(i++);
			
			if(v != e) printf("mismatch at 0x%08lX read 0x%08lX wanted 0x%08lX\n", i - 4, v, e);
			
			if(!(i & 0xFFFF)) printf("\rread %d%% done", i * 100UL / testUpTo);
		}
	}
	
	while(1);
}
