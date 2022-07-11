
.globl ramRead
ramRead:
		
	;r22..r25 is addr
	
			;r22 is cB
	mov r19, r23
	andi r19, 0x0F
	ori  r19, 0x30
			;r19 is cT
	swap r23
	swap r24
	mov r20, r24
	andi r23, 0x0F
	andi r20, 0xF0
	or   r20, r23
			;r20 is rB
	andi r24, 0x0F
	ori  r24, 0x30
			;r24 is rT
	
	in r25, 0x3F	;r25 = SREG
	cli
	

	out 0x02, r20	;PORTA = rB
	out 0x05, r24	;PORTB = rT
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	nop

	out 0x02, r22	;PORTA = cB
	out 0x05, r19	;PORTB = cT
	
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	
	nop
	nop
	
	in r24, 0x06	;r24 = PINC
	nop
	
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	
	out 0x3F, r25	;restore SREG
	
	ret

.globl ramWrite
ramWrite:
	
	
	;r22..r25 is addr
	
			;r22 is cB
	mov r19, r23
	andi r19, 0x0F
	ori  r19, 0x10
			;r19 is cT
	swap r23
	swap r24
	mov r21, r24
	andi r23, 0x0F
	andi r21, 0xF0
	or   r21, r23
			;r21 is rB
	andi r24, 0x0F
	ori  r24, 0x30
			;r24 is rT
	
	ser r18
	
	in r25, 0x3F	;r25 = SREG
	cli
	
	out 0x07, r18	;PORTC is output
	
	out 0x02, r21	;PORTA = rB
	out 0x05, r24	;PORTB = rT
	
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	
	out 0x08, r20	;PORTC = val
	sbi 0x03, 5	;PINB = (1 << 5)	;nWE
	
	out 0x02, r22	;PORTA = cB
	out 0x05, r19	;PORTB = cT
	
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	
	sbi 0x03, 5	;PINB = (1 << 5)	;nWE
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	
	out 0x07, r1	;PORTC is input
	
	out 0x3F, r25	;restore SREG
	
	ret
	
.globl __vector_13		;refresh = TIMER1_COMPA_vect
__vector_13:
	
	push r25
	push r24
	push r23
	
	in r23, 0x3F
	
	clr r25
	ldi r24, -16	;do it 16 times
	
ramRefreshLoop:
	
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	inc r25
	sbi 0x03, 4	;PINB = (1 << 4)	;nCAS
	sbi 0x09, 7	;PIND = (1 << 7)	;nRAS
	
	brne ramRefreshLoop
	
	inc r24
	brne ramRefreshLoop
	
	out 0x3F, r23
	pop r23
	pop r24
	pop r25
	reti
