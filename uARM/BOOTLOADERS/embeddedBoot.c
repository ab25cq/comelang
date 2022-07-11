/******     ----- mini-bootloader for atmel-embedding -----     ******/

//42 bytes total to read mbr and jump to it in thumb mode. this code must be entered in ARM mode


asm void __ARMlet_Startup__(){

	DCD 0xE28F0001	//ARM: ADD R0,PC, #1
	DCD 0xE12FFF10	//ARM: BX R0

	mov r7,#4		//perform block device IO
	mov r0,#1		//read
	mov r1,#0		//sector 0
	bl  doOp

	mov r4, #0x0A	//r4 = 	[ram start]
	lsl r4, r4, #28
	add r5, r4, #1	//r5 = r4 + 1 (for bx jump to thumb mode)

//	mov r1, #0		//r1 is still 0 (from above)

	mov r7, #5		//read/write device buffer
	mov r2,#0		//op = read

read_loop:

	bl doOp
	str r0,[r4]
	add r4, r4, #4
	add r1, r1, #1
	cmp r1, #128
	bne read_loop

read_done:

	bx  r5

doOp:

	dcd 0xBBBB46bc		// { mov r12,r7; hypercall; }
	bx  lr
}
