	.file	"msh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9-dev" "msh.c"
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB0:
	.file 1 "msh.c"
	.loc 1 5 46
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	sd	a1,-48(s0)
	mv	a5,a2
	sw	a5,-52(s0)
	.loc 1 8 6
	ld	a5,-40(s0)
	sd	a5,-24(s0)
	.loc 1 9 8
	nop
.L3:
	.loc 1 9 10 discriminator 2
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 9 17 discriminator 2
	ble	a5,zero,.L4
	.loc 1 9 30 discriminator 1
	ld	a4,-48(s0)
	addi	a5,a4,1
	sd	a5,-48(s0)
	.loc 1 9 23 discriminator 1
	ld	a5,-40(s0)
	addi	a3,a5,1
	sd	a3,-40(s0)
	.loc 1 9 28 discriminator 1
	lbu	a4,0(a4)
	.loc 1 9 26 discriminator 1
	sb	a4,0(a5)
	.loc 1 9 21 discriminator 1
	lbu	a5,0(a5)
	.loc 1 9 17 discriminator 1
	bne	a5,zero,.L3
	.loc 1 11 8
	j	.L4
.L5:
	.loc 1 12 7
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 12 10
	sb	zero,0(a5)
.L4:
	.loc 1 11 10
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 11 13
	bgt	a5,zero,.L5
	.loc 1 13 10
	ld	a5,-24(s0)
	.loc 1 14 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	strncpy, .-strncpy
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB1:
	.loc 1 17 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-33(s0)
	.loc 1 19 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 1 20 12
	sb	zero,-31(s0)
.LBB2:
	.loc 1 21 5
	li	a0,1
	addi	a5,s0,-32
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 21 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 1 22 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB2:
	.loc 1 24 45
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	mv	a5,a0
	mv	a3,a1
	mv	a4,a2
	sw	a5,-84(s0)
	mv	a5,a3
	sw	a5,-88(s0)
	mv	a5,a4
	sw	a5,-92(s0)
	.loc 1 26 9
	sw	zero,-20(s0)
	.loc 1 27 9
	sw	zero,-24(s0)
	.loc 1 30 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L9
	.loc 1 30 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L9
	.loc 1 31 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 32 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 1 32 14
	sw	a5,-28(s0)
	j	.L10
.L9:
	.loc 1 34 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L10:
	.loc 1 37 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L13
	.loc 1 38 9
	li	a0,48
	call	putchar
	j	.L8
.L16:
.LBB3:
	.loc 1 43 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 43 13
	sw	a5,-32(s0)
	.loc 1 44 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L14
	.loc 1 44 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 44 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L15
.L14:
	.loc 1 44 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 44 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L15:
	.loc 1 44 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 44 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 1 45 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L13:
.LBE3:
	.loc 1 42 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L16
	.loc 1 48 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L18
	.loc 1 49 9
	li	a0,45
	call	putchar
	.loc 1 52 11
	j	.L18
.L19:
	.loc 1 53 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L18:
	.loc 1 52 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L19
.L8:
	.loc 1 55 1
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB3:
	.loc 1 57 57
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	sd	a0,-104(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-108(s0)
	mv	a5,a4
	sw	a5,-112(s0)
	.loc 1 59 9
	sw	zero,-20(s0)
	.loc 1 60 9
	sw	zero,-24(s0)
	.loc 1 62 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L21
	.loc 1 62 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 62 14 discriminator 1
	bge	a5,zero,.L21
	.loc 1 63 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 64 17
	ld	a5,-104(s0)
	.loc 1 64 16
	neg	a5,a5
	.loc 1 64 14
	sd	a5,-104(s0)
.L21:
	.loc 1 67 8
	ld	a5,-104(s0)
	bne	a5,zero,.L24
	.loc 1 68 9
	li	a0,48
	call	putchar
	j	.L20
.L27:
.LBB4:
	.loc 1 73 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 73 13
	sw	a5,-28(s0)
	.loc 1 74 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L25
	.loc 1 74 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 74 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L26
.L25:
	.loc 1 74 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 74 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L26:
	.loc 1 74 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 74 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 75 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L24:
.LBE4:
	.loc 1 72 17
	ld	a5,-104(s0)
	bne	a5,zero,.L27
	.loc 1 78 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L29
	.loc 1 79 9
	li	a0,45
	call	putchar
	.loc 1 82 11
	j	.L29
.L30:
	.loc 1 83 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L29:
	.loc 1 82 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L30
.L20:
	.loc 1 85 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB4:
	.loc 1 87 66
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	sd	a0,-104(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-108(s0)
	mv	a5,a4
	sw	a5,-112(s0)
	.loc 1 89 9
	sw	zero,-20(s0)
	.loc 1 90 9
	sw	zero,-24(s0)
	.loc 1 92 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L32
	.loc 1 92 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 92 14 discriminator 1
	bge	a5,zero,.L32
	.loc 1 93 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 94 17
	ld	a5,-104(s0)
	.loc 1 94 16
	neg	a5,a5
	.loc 1 94 14
	sd	a5,-104(s0)
.L32:
	.loc 1 97 8
	ld	a5,-104(s0)
	bne	a5,zero,.L35
	.loc 1 98 9
	li	a0,48
	call	putchar
	j	.L31
.L38:
.LBB5:
	.loc 1 103 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 103 13
	sw	a5,-28(s0)
	.loc 1 104 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L36
	.loc 1 104 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 104 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L37
.L36:
	.loc 1 104 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 104 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L37:
	.loc 1 104 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 104 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 105 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L35:
.LBE5:
	.loc 1 102 17
	ld	a5,-104(s0)
	bne	a5,zero,.L38
	.loc 1 108 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L40
	.loc 1 109 9
	li	a0,45
	call	putchar
	.loc 1 112 11
	j	.L40
.L41:
	.loc 1 113 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L40:
	.loc 1 112 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
.L31:
	.loc 1 115 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	printlonglong, .-printlonglong
	.section	.rodata
	.align	3
.LC0:
	.string	"(null)"
	.text
	.align	1
	.globl	printf
	.type	printf, @function
printf:
.LFB5:
	.loc 1 117 34
	.cfi_startproc
	addi	sp,sp,-192
	.cfi_def_cfa_offset 192
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -72
	.cfi_offset 8, -80
	addi	s0,sp,128
	.cfi_def_cfa 8, 64
	sd	a0,-120(s0)
	sd	a1,8(s0)
	sd	a2,16(s0)
	sd	a3,24(s0)
	sd	a4,32(s0)
	sd	a5,40(s0)
	sd	a6,48(s0)
	sd	a7,56(s0)
	.loc 1 119 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 1 122 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 1 122 5
	j	.L43
.L68:
	.loc 1 123 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 123 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L44
	.loc 1 124 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 125 13
	j	.L45
.L44:
	.loc 1 128 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 130 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 130 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L46
.LBB6:
	.loc 1 131 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 132 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 1 132 17
	lbu	a5,0(a5)
	.loc 1 132 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L47
	.loc 1 133 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 1 134 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L47:
	.loc 1 136 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 138 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 138 13
	li	a4,100
	beq	a5,a4,.L48
	li	a4,120
	bne	a5,a4,.L49
	.loc 1 140 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L50
.LBB7:
	.loc 1 141 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 142 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 1 147 21
	j	.L45
.L50:
.LBB8:
	.loc 1 144 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 1 145 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 1 147 21
	j	.L45
.L48:
	.loc 1 150 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L53
.LBB9:
	.loc 1 151 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 1 152 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 1 157 21
	j	.L45
.L53:
.LBB10:
	.loc 1 154 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 1 155 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 1 157 21
	j	.L45
.L49:
	.loc 1 160 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 1 161 30
	sw	zero,-32(s0)
	.loc 1 161 21
	j	.L55
.L56:
	.loc 1 161 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 1 161 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L55:
	.loc 1 161 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L56
.LBE11:
	.loc 1 162 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 163 21
	j	.L45
.L46:
.LBE6:
	.loc 1 167 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 167 13
	li	a4,37
	beq	a5,a4,.L57
	li	a4,37
	blt	a5,a4,.L58
	li	a4,120
	bgt	a5,a4,.L58
	li	a4,99
	blt	a5,a4,.L58
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L58
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L60
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L60
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L60:
	.word	.L64-.L60
	.word	.L63-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L62-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L61-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L59-.L60
	.text
.L63:
.LBB12:
	.loc 1 169 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 1 170 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 1 171 21
	j	.L45
.L59:
.LBE12:
.LBB13:
	.loc 1 174 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 175 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 1 176 21
	j	.L45
.L62:
.LBE13:
.LBB14:
	.loc 1 179 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 1 179 35 discriminator 1
	sd	a5,-56(s0)
	.loc 1 180 21
	li	a0,48
	call	putchar
	.loc 1 180 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 1 181 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 1 182 21
	j	.L45
.L61:
.LBE14:
.LBB15:
	.loc 1 185 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 186 24
	ld	a5,-40(s0)
	bne	a5,zero,.L66
	.loc 1 186 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 1 187 27
	j	.L66
.L67:
	.loc 1 187 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 187 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L66:
	.loc 1 187 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L67
	.loc 1 188 21
	j	.L45
.L64:
.LBE15:
.LBB16:
	.loc 1 191 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 1 191 26 discriminator 1
	sb	a5,-61(s0)
	.loc 1 192 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 1 193 21
	j	.L45
.L57:
.LBE16:
	.loc 1 196 21
	li	a0,37
	call	putchar
	.loc 1 197 21
	j	.L45
.L58:
	.loc 1 200 21
	li	a0,37
	call	putchar
	.loc 1 201 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 202 21
	nop
.L45:
	.loc 1 122 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L43:
	.loc 1 122 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L68
	.loc 1 209 12
	li	a5,0
	.loc 1 210 1
	mv	a0,a5
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 192
	addi	sp,sp,192
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE5:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB6:
	.loc 1 214 26
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	.loc 1 215 11
	j	.L71
.L72:
	.loc 1 216 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 1 216 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L71:
	.loc 1 215 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L72
	.loc 1 218 1
	nop
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	puts, .-puts
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB7:
	.loc 1 280 1
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-112(s0)
	mv	a4,a2
	sw	a5,-100(s0)
	mv	a5,a4
	sw	a5,-104(s0)
	.loc 1 281 9
	sw	zero,-48(s0)
	sw	zero,-44(s0)
	.loc 1 283 41
	lw	a4,-100(s0)
	li	a5,52
	mul	a5,a4,a5
	.loc 1 283 22
	ld	a4,-112(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 285 25
	lw	a5,-104(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 285 7
	lw	a4,-100(s0)
	sext.w	a4,a4
	bne	a4,a5,.L74
.LBB17:
	.loc 1 288 14
	sw	zero,-20(s0)
	.loc 1 288 9
	j	.L75
.L76:
	.loc 1 289 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 1 289 20
	lw	a3,-20(s0)
	addi	a5,s0,-72
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 288 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L75:
	.loc 1 288 27 discriminator 1
	ld	a5,-32(s0)
	lw	a5,48(a5)
	.loc 1 288 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L76
	.loc 1 291 17
	lw	a4,-20(s0)
	addi	a5,s0,-72
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB18:
	.loc 1 293 9
	ld	a5,-72(s0)
	mv	a0,a5
	addi	a5,s0,-72
	mv	a1,a5
	li	a7,69
 #APP
# 293 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
.LBB19:
	.loc 1 294 9
	li	a0,127
	li	a7,70
 #APP
# 294 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L77:
	j	.L77
.L74:
.LBE19:
.LBE17:
.LBB20:
.LBB21:
	.loc 1 297 9
	addi	a5,s0,-48
	mv	a0,a5
	li	a7,73
 #APP
# 297 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE21:
.LBB22:
	.loc 1 299 19
	li	a7,68
 #APP
# 299 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE22:
	.loc 1 299 13
	sw	a5,-36(s0)
	.loc 1 301 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L78
.LBB23:
	.loc 1 302 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 302 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE23:
.LBB24:
	.loc 1 303 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 303 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 304 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 304 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE25:
	.loc 1 305 13
	lw	a5,-100(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-104(s0)
	mv	a2,a4
	ld	a1,-112(s0)
	mv	a0,a5
	call	run_command
	j	.L84
.L78:
.LBB26:
.LBB27:
	.loc 1 308 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 308 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE27:
.LBB28:
	.loc 1 309 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 309 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE28:
.LBB29:
	.loc 1 310 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 310 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
	.loc 1 314 18
	sw	zero,-24(s0)
	.loc 1 314 13
	j	.L80
.L81:
	.loc 1 315 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 1 315 24
	lw	a3,-24(s0)
	addi	a5,s0,-96
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 314 43 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L80:
	.loc 1 314 31 discriminator 1
	ld	a5,-32(s0)
	lw	a5,48(a5)
	.loc 1 314 23 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	blt	a4,a5,.L81
	.loc 1 317 21
	lw	a4,-24(s0)
	addi	a5,s0,-96
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB30:
	.loc 1 319 13
	ld	a5,-96(s0)
	mv	a0,a5
	addi	a5,s0,-96
	mv	a1,a5
	li	a7,69
 #APP
# 319 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE30:
.LBB31:
	.loc 1 320 13
	li	a0,127
	li	a7,70
 #APP
# 320 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L82:
	j	.L82
.L84:
.LBE31:
.LBE26:
.LBE20:
	.loc 1 324 12
	li	a5,1
	.loc 1 325 1
	mv	a0,a5
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC1:
	.string	"$ "
	.align	3
.LC2:
	.string	"\b \b"
	.align	3
.LC3:
	.string	"\r\n"
	.align	3
.LC4:
	.string	"ERR MAX COMMAND"
	.align	3
.LC5:
	.string	"ARG NUM ERROR"
	.align	3
.LC6:
	.string	"ERR ARG NUM"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB8:
	.loc 1 327 16
	.cfi_startproc
	addi	sp,sp,-448
	.cfi_def_cfa_offset 448
	sd	ra,440(sp)
	sd	s0,432(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,448
	.cfi_def_cfa 8, 0
.L110:
.LBB32:
	.loc 1 343 9
	li	a0,1
	lla	a5,.LC1
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 343 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-56(s0)
.LBE32:
	.loc 1 346 11
	sd	zero,-24(s0)
.L92:
.LBB33:
	.loc 1 348 13
	li	a0,0
	addi	a5,s0,-168
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 348 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-64(s0)
.LBE33:
.LBB34:
	.loc 1 349 13
	li	a0,1
	addi	a5,s0,-168
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 349 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-72(s0)
.LBE34:
	.loc 1 352 22
	lbu	a5,-168(s0)
	.loc 1 352 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L86
	.loc 1 352 41 discriminator 2
	lbu	a5,-168(s0)
	.loc 1 352 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L87
.L86:
	.loc 1 352 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L87
	.loc 1 354 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 355 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-144(a5)
.LBB35:
	.loc 1 357 17
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 357 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE35:
	j	.L88
.L87:
	.loc 1 359 25
	lbu	a5,-168(s0)
	.loc 1 359 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L111
	.loc 1 362 25
	lbu	a5,-168(s0)
	.loc 1 362 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L112
	.loc 1 366 30
	lbu	a4,-168(s0)
	.loc 1 366 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-144(a5)
	.loc 1 367 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L88:
	.loc 1 348 13
	j	.L92
.L111:
	.loc 1 360 17
	nop
	j	.L90
.L112:
	.loc 1 363 17
	nop
.L90:
	.loc 1 370 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-144(a5)
.LBB36:
	.loc 1 374 9
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 374 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE36:
	.loc 1 376 15
	lbu	a5,-160(s0)
	.loc 1 376 11
	beq	a5,zero,.L113
	.loc 1 380 22
	sw	zero,-28(s0)
	.loc 1 381 17
	sw	zero,-32(s0)
	.loc 1 382 11
	addi	a5,s0,-160
	sd	a5,-40(s0)
	.loc 1 383 11
	sd	zero,-24(s0)
.L106:
	.loc 1 386 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 386 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L95
	.loc 1 387 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 388 22
	j	.L96
.L97:
	.loc 1 389 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L96:
	.loc 1 388 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 388 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L97
	.loc 1 388 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 388 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L97
	.loc 1 392 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-416(a5)
	.loc 1 393 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-368(a5)
	.loc 1 395 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 396 19
	sd	zero,-24(s0)
	.loc 1 397 25
	sw	zero,-32(s0)
	.loc 1 399 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L106
	.loc 1 400 21
	lla	a0,.LC4
	call	puts
	.loc 1 401 21
	j	.L99
.L95:
	.loc 1 404 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 404 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L102
	.loc 1 404 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 404 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L101
	.loc 1 405 22
	j	.L102
.L103:
	.loc 1 406 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L102:
	.loc 1 405 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 405 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L103
	.loc 1 405 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 405 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L103
	.loc 1 408 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-416(a5)
	.loc 1 409 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 410 19
	sd	zero,-24(s0)
	.loc 1 412 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L98
	.loc 1 413 21
	lla	a0,.LC5
	call	puts
	.loc 1 414 21
	j	.L99
.L101:
	.loc 1 417 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 417 20
	bne	a5,zero,.L105
	.loc 1 418 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-416(a5)
	.loc 1 420 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 421 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-368(a5)
	.loc 1 422 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 423 17
	j	.L99
.L105:
	.loc 1 426 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 426 57
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,4
	li	a5,52
	mul	a5,a2,a5
	add	a5,a3,a5
	addi	a5,a5,-16
	add	a3,a5,s0
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-416(a5)
	.loc 1 427 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 428 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 430 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L106
	.loc 1 431 21
	lla	a0,.LC6
	call	puts
	.loc 1 432 21
	j	.L99
.L98:
	.loc 1 386 15
	j	.L106
.L99:
.LBB37:
	.loc 1 437 15
	li	a7,68
 #APP
# 437 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE37:
	.loc 1 437 13
	sw	a5,-92(s0)
	.loc 1 439 11
	lw	a5,-92(s0)
	sext.w	a5,a5
	bne	a5,zero,.L107
	.loc 1 440 13
	lw	a4,-28(s0)
	addi	a5,s0,-432
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L110
.L107:
.LBB38:
	.loc 1 443 21
	sw	zero,-44(s0)
	.loc 1 443 13
	j	.L108
.L109:
.LBB39:
.LBB40:
	.loc 1 445 17
	addi	a5,s0,-436
	mv	a0,a5
	li	a7,71
 #APP
# 445 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE40:
.LBE39:
	.loc 1 443 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L108:
	.loc 1 443 27 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L109
	j	.L110
.L113:
.LBE38:
	.loc 1 377 13
	nop
	.loc 1 343 9
	j	.L110
	.cfi_endproc
.LFE8:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xca4
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x13
	.4byte	.LASF42
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x7
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x7
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x14
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x7
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x7
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x7
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x7
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x7
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x7
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0xd
	.4byte	.LASF11
	.byte	0x2
	.byte	0x28
	.byte	0x1b
	.4byte	0x80
	.uleb128 0x15
	.byte	0x8
	.4byte	.LASF43
	.uleb128 0xd
	.4byte	.LASF12
	.byte	0x2
	.byte	0x67
	.byte	0x18
	.4byte	0x74
	.uleb128 0xd
	.4byte	.LASF13
	.byte	0x3
	.byte	0x4
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x16
	.4byte	.LASF44
	.byte	0x34
	.byte	0x1
	.2byte	0x111
	.byte	0x8
	.4byte	0xc7
	.uleb128 0xf
	.4byte	.LASF14
	.2byte	0x113
	.byte	0xa
	.4byte	0xc7
	.byte	0
	.uleb128 0xf
	.4byte	.LASF15
	.2byte	0x114
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0xdd
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF16
	.uleb128 0x17
	.4byte	0xdd
	.uleb128 0x10
	.4byte	.LASF24
	.2byte	0x147
	.4byte	0x3c
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x40e
	.uleb128 0x1
	.string	"buf"
	.2byte	0x148
	.byte	0xa
	.4byte	0x40e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"n"
	.2byte	0x149
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF17
	.2byte	0x14a
	.byte	0xa
	.4byte	0x41e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.string	"pid"
	.2byte	0x14b
	.byte	0xb
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x11
	.4byte	.LASF18
	.2byte	0x14c
	.4byte	0x3c
	.uleb128 0x11
	.4byte	.LASF19
	.2byte	0x14d
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF20
	.2byte	0x14f
	.byte	0x15
	.4byte	0x42e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -432
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x150
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x151
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x152
	.byte	0xb
	.4byte	0x43e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0x1f5
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x157
	.byte	0x9
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x157
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x157
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x157
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x157
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x252
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x2b0
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x15d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x15d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x30e
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x165
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x165
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x165
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x165
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x165
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x36c
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x176
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x176
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x176
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x176
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x176
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x39e
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x1b5
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x1b5
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x6
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.uleb128 0x1
	.string	"k"
	.2byte	0x1bb
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x6
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.uleb128 0x3
	.4byte	.LASF19
	.2byte	0x1bc
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -436
	.uleb128 0x6
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1bd
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1bd
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0x41e
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0x42e
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x9e
	.4byte	0x43e
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0xe
	.4byte	0xdd
	.uleb128 0x10
	.4byte	.LASF25
	.2byte	0x117
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7b9
	.uleb128 0x18
	.string	"n"
	.byte	0x1
	.2byte	0x117
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x12
	.4byte	.LASF20
	.byte	0x29
	.4byte	0x7b9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x12
	.4byte	.LASF21
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x119
	.byte	0x9
	.4byte	0x7be
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x11b
	.byte	0x16
	.4byte	0x7b9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x54e
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x11e
	.byte	0xf
	.4byte	0x7ce
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"j"
	.2byte	0x11f
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x51f
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x125
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x125
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x125
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x126
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x126
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x1
	.string	"pid"
	.2byte	0x12b
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x5a0
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x129
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x129
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x5d2
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x12b
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x12b
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x612
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x12e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x12e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x12e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x644
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x12f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x12f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x676
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x130
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x130
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x138
	.byte	0x13
	.4byte	0x7ce
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"j"
	.2byte	0x139
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x6d6
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x134
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x134
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x716
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x135
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x135
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x135
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x748
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x136
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x136
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x788
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x13f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x9e
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0x7ce
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x43e
	.4byte	0x7de
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0xc
	.4byte	.LASF31
	.byte	0xd6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x807
	.uleb128 0xb
	.string	"s"
	.byte	0xd6
	.byte	0x17
	.4byte	0x807
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	0xe4
	.uleb128 0x19
	.4byte	.LASF28
	.byte	0x1
	.byte	0x75
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9e3
	.uleb128 0xb
	.string	"fmt"
	.byte	0x75
	.byte	0x18
	.4byte	0x807
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1a
	.uleb128 0x4
	.string	"ap"
	.byte	0x76
	.byte	0xd
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x4
	.string	"p"
	.byte	0x79
	.byte	0x11
	.4byte	0x807
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x931
	.uleb128 0x5
	.4byte	.LASF29
	.byte	0x83
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x8a2
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x8d
	.byte	0x27
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x8c7
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x90
	.byte	0x2c
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x8ec
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x97
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x911
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x9a
	.byte	0x23
	.4byte	0x43
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x6
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x4
	.string	"i"
	.byte	0xa1
	.byte	0x1e
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x956
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0xa9
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x97b
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0xae
	.byte	0x22
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x9a0
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0xb3
	.byte	0x23
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x9c3
	.uleb128 0x4
	.string	"s"
	.byte	0xb9
	.byte	0x21
	.4byte	0x807
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x6
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x4
	.string	"c"
	.byte	0xbf
	.byte	0x1a
	.4byte	0xdd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF32
	.byte	0x57
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa76
	.uleb128 0x9
	.4byte	.LASF30
	.byte	0x57
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x9
	.4byte	.LASF33
	.byte	0x57
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x9
	.4byte	.LASF34
	.byte	0x57
	.byte	0x3b
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"buf"
	.byte	0x58
	.byte	0xa
	.4byte	0xa76
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.string	"i"
	.byte	0x59
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x5a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x67
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0xa86
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xc
	.4byte	.LASF37
	.byte	0x39
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb19
	.uleb128 0x9
	.4byte	.LASF30
	.byte	0x39
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x9
	.4byte	.LASF33
	.byte	0x39
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x9
	.4byte	.LASF34
	.byte	0x39
	.byte	0x32
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"buf"
	.byte	0x3a
	.byte	0xa
	.4byte	0xa76
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.string	"i"
	.byte	0x3b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x3c
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x49
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF38
	.byte	0x18
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbba
	.uleb128 0x9
	.4byte	.LASF30
	.byte	0x18
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x9
	.4byte	.LASF33
	.byte	0x18
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x9
	.4byte	.LASF34
	.byte	0x18
	.byte	0x27
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.string	"buf"
	.byte	0x19
	.byte	0xa
	.4byte	0xbba
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.string	"i"
	.byte	0x1a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x1b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF39
	.byte	0x1c
	.byte	0x12
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x2b
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0xbca
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF40
	.byte	0x1
	.byte	0x10
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc57
	.uleb128 0xb
	.string	"c"
	.byte	0x10
	.byte	0x13
	.4byte	0xdd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x4
	.string	"buf"
	.byte	0x12
	.byte	0xa
	.4byte	0x41e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"_a0"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a2"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x4
	.string	"_a7"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF41
	.byte	0x1
	.byte	0x5
	.byte	0x7
	.4byte	0x43e
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.string	"s"
	.byte	0x5
	.byte	0x15
	.4byte	0x43e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xb
	.string	"t"
	.byte	0x5
	.byte	0x24
	.4byte	0x807
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xb
	.string	"n"
	.byte	0x5
	.byte	0x2b
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"os"
	.byte	0x6
	.byte	0x9
	.4byte	0x43e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 9
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 279
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.8byte	0
	.8byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF21:
	.string	"num_commands"
.LASF17:
	.string	"buf2"
.LASF44:
	.string	"sCommand"
.LASF43:
	.string	"__builtin_va_list"
.LASF23:
	.string	"_num"
.LASF15:
	.string	"num_arg"
.LASF27:
	.string	"command"
.LASF37:
	.string	"printlong"
.LASF13:
	.string	"pid_t"
.LASF11:
	.string	"__gnuc_va_list"
.LASF5:
	.string	"unsigned char"
.LASF42:
	.string	"GNU C17 14.2.0 -mcmodel=medany -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF22:
	.string	"_ret"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF40:
	.string	"putchar"
.LASF12:
	.string	"va_list"
.LASF41:
	.string	"strncpy"
.LASF29:
	.string	"lcount"
.LASF24:
	.string	"main"
.LASF25:
	.string	"run_command"
.LASF26:
	.string	"pipes"
.LASF38:
	.string	"printint"
.LASF33:
	.string	"base"
.LASF7:
	.string	"unsigned int"
.LASF36:
	.string	"digit"
.LASF8:
	.string	"long long unsigned int"
.LASF39:
	.string	"uval"
.LASF18:
	.string	"argc"
.LASF4:
	.string	"long long int"
.LASF16:
	.string	"char"
.LASF28:
	.string	"printf"
.LASF3:
	.string	"short int"
.LASF32:
	.string	"printlonglong"
.LASF14:
	.string	"argv"
.LASF30:
	.string	"val_"
.LASF9:
	.string	"long int"
.LASF34:
	.string	"sign"
.LASF19:
	.string	"status"
.LASF31:
	.string	"puts"
.LASF2:
	.string	"signed char"
.LASF20:
	.string	"commands"
.LASF35:
	.string	"negative"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9-dev"
.LASF0:
	.string	"msh.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
