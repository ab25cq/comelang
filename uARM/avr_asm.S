.globl gSdSpiFast
.globl sdSpiByteSlow
.globl sdSpiByte
sdSpiByte:

	lds     r20, gSdSpiFast
	tst     r20
	brne	sdSpiByteFast
	rjmp    sdSpiByteSlow

sdSpiByteFast:

	in   r25, 0x05	;	t1 = PORTB
	andi r25, 0x3F	;	t1 &=~ (SD_PIN_MOSI | SD_PIN_SCLK)
	ldi  r23, 0x40	;	t2 = SD_PIN_MOSI
	ldi  r22, 0x80	;	t3 = SD_PIN_SCLK
	ldi  r21, 8	;	i = 8
spi_loop:		; loop:
	out  0x05, r25	;	PORTB = t1
	sbrc r24, 7	;	if(v & 0x80)
	out  0x03, r23	;		PINB = t2
	out  0x03, r22	;	PINB = t3
	lsl  r24	;	v <<= 1
	sbic 0x09, 6	;	if(PIND & SD_PIN_MISO)
	inc  r24	;		v++
	dec  r21	;	i--
	out  0x03, r22	;	PINB = t3
	brne spi_loop	;	if(i) goto loop

	ret


.globl ramRead
ramRead:
		
	;IN:
	; r22..r24 is addr (this code will not support anything over 16MB)
	; r20..r21 is buf
	; r18      is numBytes

	;NOTE: we do not need to address rows as RAM does. it is easier not to, so we don't :)

	movw r26, r20
	movw r30, r22
	andi r31, 0x0F
	swap r23
	andi r23, 0x0F
	ori  r23, 0x30

	;NOW:
	; r26..r27 (X)	- buf
	; r30..r31 (Z)	- column addr + CAS (r30 is low byte)
	; r24		- rB
	; r23		- rT
	; r18		- numBytes
	; r19		- sreg
	; r20		- tmp
	; r21		- (1 << 4)

	ldi r21, 0x10

	in r19, 0x3F
	cli

	out 0x02, r24	;PORTA = rB
	out 0x05, r23	;PORTB = rT
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS

	ori  r31, 0x30	;we could have done this earlier, but we need a nop here anyways

ram_read_loop:

	out 0x02, r30	;PORTA = cB
	out 0x05, r31	;PORTB = cT
	out 0x03, r21	;PINB = (1 << 4)	;nCAS

	adiw r30, 1	;(cT:cB)++

	in r20, 0x06	;tmp = PINC

	st X+, r20	;*buf++ = tmp

	out 0x03, r21	;PINB = (1 << 4)	;nCAS

	dec r18
	brne ram_read_loop

	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS

	out 0x3F, r19
	ret



.globl ramWrite
ramWrite:
		
	;IN:
	; r22..r24 is addr (this code will not support anything over 16MB)
	; r20..r21 is buf
	; r18      is numBytes

	;NOTE: we do not need to address rows as RAM does. it is easier not to, so we don't :)

	movw r26, r20
	movw r30, r22
	andi r31, 0x0F
	swap r23
	andi r23, 0x0F
	ori  r23, 0x30

	;NOW:
	; r26..r27 (X)	- buf
	; r30..r31 (Z)	- column addr + CAS (r30 is low byte)
	; r24		- rB
	; r23		- rT
	; r18		- numBytes
	; r19		- sreg
	; r20		- tmp
	; r21		- (1 << 4)

	ldi r21, 0x10
	ser r20		;temp = 0xFF

	in r19, 0x3F
	cli

	sbi 0x03, 5	;PINB = (1 << 5)	;nWE
	out 0x07, r20	;DDRC = temp (PORTC is output)

	out 0x02, r24	;PORTA = rB
	out 0x05, r23	;PORTB = rT
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS

	ori  r31, 0x10	;we could have done this easrlier, but we need a nop here anyways

ram_write_loop:

	ld r20, X+	;tmp = *buf++
	out 0x08, r20	;PORTC = tmp

	out 0x02, r30	;PORTA = cB
	out 0x05, r31	;PORTB = cT
	out 0x03, r21	;PINB = (1 << 4)	;nCAS

	adiw r30, 1	;(cT:cB)++

	out 0x03, r21	;PINB = (1 << 4)	;nCAS

	dec r18
	brne ram_write_loop

	sbi 0x03, 5	;PINB = (1 << 5)	;nWE
	out 0x07, r1	;PORTC is input

	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS

	out 0x3F, r19
	ret



.globl __vector_13		;refresh = TIMER1_COMPA_vect
__vector_13:

	push r25
	push r24
	push r23
	push r22
	push r21

	in r23, 0x3F

	ldi r22, 0x10	;(1 << 4)
	ldi r21, 0x80	;(1 << 7)

	clr r25
	ldi r24, -16	;do it 16 times

ramRefreshLoop:

	out 0x03, r22	;PINB = (1 << 4)	;nCAS
	out 0x09, r21	;PIND = (1 << 7)	;nRAS
	inc r25
	out 0x03, r22	;PINB = (1 << 4)	;nCAS
	out 0x09, r21	;PIND = (1 << 7)	;nRAS

	brne ramRefreshLoop

	inc r24
	brne ramRefreshLoop

	out 0x3F, r23


	pop r21
	pop r22
	pop r23
	pop r24
	pop r25
	reti
