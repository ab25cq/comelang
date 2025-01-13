#   Copyright (C) NEC Electronics Corporation 1998,2002
#   NEC ELECTRONICS CONFIDENTIAL AND PROPRIETARY
#   All rights reserved by NEC Electronics Corporation.
#   This program must be used solely for the purpose for which
#   it was furnished by NEC Electronics Corporation.  No part of this
#   program may be reproduced or disclosed to others, in any
#   form, without the prior written permission of NEC Electronics
#   Corporation.  Use of copyright notice does not evidence
#   publication of the program.

#	@(#)crtE.s	1.8 02/12/12 15:19:37

#=============================================================================
# NAME
#    crtE.s -  start up module for ca850(V850E)
#
# DESCRIPTIONS:
#      This assembly program is a sample of start-up module for ca850(V850E).
#    If you modified this program, you must assemble this file, and
#    locate a given directory.
#
#    Unless -G is specified, sections are located as the following.
#
#                  |        :        |
#                  |        :        |
#	    tp -> -+-----------------+ __start     __tp_TEXT
#                  |  start up       |
#                  |---------------- |
#   text section   |                 |
#                  | user program    |
#                  |                 |
#                  |-----------------|
#                  | library         |
#	          -+-----------------+ 
#                  |        :        |
#                  |        :        |
#	          -+-----------------+ __argc
#                  |      0          |
#                  |---------------- | __argv
#   data section   |    #.L16        |
#                  |---------------- | .L16
#                  | 0x0,0x0,0x0,0x0 |
#                 -+-----------------+               
#                  |                 |
#   sdata section  |                 |
#                  |                 |
#            gp-> -+-----------------+             __ssbss
#                  |                 |
#   sbss section   |                 |
#                  |                 |
#                  +-----------------+ __stack     __esbss     __sbss
#                  | stack area      |
#   bss section    |                 |
#                  |  0x200 bytes    |
#            sp-> -+-----------------+ __stack + STACKSIZE     __ebss
#
#=============================================================================


#-----------------------------------------------------------------------------
#	special symbols
#-----------------------------------------------------------------------------
	.extern __tp_TEXT, 4
	.extern __gp_DATA, 4
	.extern __ep_DATA, 4
	.extern	__ssbss, 4
	.extern __esbss, 4
#	.extern __sbss, 4
#	.extern __ebss, 4

	
#-----------------------------------------------------------------------------
#	 C program main function
#-----------------------------------------------------------------------------
	.extern	_main


#-----------------------------------------------------------------------------
#	for argv
#-----------------------------------------------------------------------------
	.data
	.size	__argc, 4
	.align	4
__argc:
	.word	0
	.size	__argv, 4
__argv:
	.word	#.L16
.L16:
	.byte	0
	.byte	0
	.byte	0
	.byte	0


#-----------------------------------------------------------------------------
#	dummy data declaration for creating sbss section
#-----------------------------------------------------------------------------
	.sbss
	.lcomm	__sbss_dummy, 0, 0

	
#-----------------------------------------------------------------------------
#	system stack
#-----------------------------------------------------------------------------
	.set	STACKSIZE, 0x200
	.bss
#	.lcomm	__stack, STACKSIZE, 4
	.lcomm	__bss_dummy, 0, 0


#-----------------------------------------------------------------------------
#	RESET handler
#-----------------------------------------------------------------------------

	.section        "RESET", text
	jr      __start
	
#-----------------------------------------------------------------------------
#	start up
#		pointers:  tp - text pointer
#			   gp - global pointer
#			   sp - stack pointer
#			   ep - element pointer
#		mask reg:  r20 - 0xff
#			   r21 - 0xffff
#	exit status is set to r10
#-----------------------------------------------------------------------------
	.text
	.align	4
	.globl	__start
	.globl  __exit
	.globl	__startend
	.extern  ___PROLOG_TABLE
__start:
	mov	#__tp_TEXT, tp		-- set tp register
	mov	#__gp_DATA, gp		-- set gp register offset
	add	tp, gp			-- set gp register
	mov	0x3FFF000, sp		-- set sp register (end of RAM)
	mov	#__ep_DATA, ep		-- set ep register
#
	.option nowarning
	mov	0xff,   r20		-- set mask register
	mov	0xffff, r21		-- set mask register
	.option warning
#
	mov	#__ssbss, r13		-- clear sbss section
	mov	#__esbss, r12
	jr	.L11
.L12:
	st.w	r0, [r13]
	add	4, r13
.L11:
	cmp	r12, r13
	jl	.L12
#
	mov	#__sbss, r13		-- clear bss section
	mov	#__ebss, r12
	jr	.L14
.L15:
	st.w	r0, [r13]
	add	4, r13
.L14:
	cmp	r12, r13
	jl	.L15
#
	mov     #___PROLOG_TABLE, r12   -- for prologue/epilogue runtime
	ldsr    r12, 20			-- set CTBP (CALLT base pointer)
#
#					-- for Programmable peripheral I/O 
#	mov	0x9234, r13		-- 0x1234(addr) | 0x8000(use pI/Or)
#	st.h	r13, BPC		-- set BPC
#	
	ld.w	$__argc, r6		-- set argc
	movea	$__argv, gp, r7		-- set argv
	jarl	_main, lp		-- call main function
__exit:
	halt				-- end of program
__startend:
#								#
#-------------------- end of start up module -------------------#
#								#

