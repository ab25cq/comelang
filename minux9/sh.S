	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "sh.c"
	.align	1
	.type	s_strchr, @function
s_strchr:
.LFB0:
	.file 1 "sh.c"
	.loc 1 5 52
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
	mv	a5,a1
	sw	a5,-28(s0)
	.loc 1 6 11
	j	.L2
.L5:
	.loc 1 6 22 discriminator 4
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 6 25 discriminator 4
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 6 21 discriminator 4
	bne	a4,a5,.L3
	.loc 1 6 45 discriminator 1
	ld	a5,-24(s0)
	.loc 1 6 45 is_stmt 0
	j	.L4
.L3:
	.loc 1 6 49 is_stmt 1 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L2:
	.loc 1 6 12 discriminator 3
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L5
	.loc 1 7 12
	li	a5,0
.L4:
	.loc 1 8 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	s_strchr, .-s_strchr
	.local	g_cmdline
	.comm	g_cmdline,64,8
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB1:
	.loc 1 15 1
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
	.loc 1 16 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L7
	.loc 1 16 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L8
.L7:
	.loc 1 16 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L9
	.loc 1 16 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L9
.L8:
	.loc 1 16 41 discriminator 7
	li	a5,1
	.loc 1 16 41 is_stmt 0
	j	.L10
.L9:
	.loc 1 16 41 discriminator 8
	li	a5,0
.L10:
	.loc 1 16 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 17 12
	lw	a5,-20(s0)
	.loc 1 18 1
	mv	a0,a5
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
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB2:
	.loc 1 21 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 22 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L13
	.loc 1 22 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L14
.L13:
	.loc 1 22 21 discriminator 3
	li	a5,1
	.loc 1 22 21
	j	.L15
.L14:
	.loc 1 22 21 discriminator 4
	li	a5,0
.L15:
	.loc 1 23 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB3:
	.loc 1 26 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 27 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L18
	.loc 1 27 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L18
	.loc 1 27 22 discriminator 3
	li	a5,1
	.loc 1 27 22
	j	.L19
.L18:
	.loc 1 27 22 discriminator 4
	li	a5,0
.L19:
	.loc 1 28 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB4:
	.loc 1 31 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 32 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 32 24 discriminator 1
	bne	a5,zero,.L22
	.loc 1 32 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 32 24 discriminator 1
	beq	a5,zero,.L23
.L22:
	.loc 1 32 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 32 24
	j	.L24
.L23:
	.loc 1 32 24 discriminator 4
	li	a5,0
.L24:
	.loc 1 33 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	xisalnum, .-xisalnum
	.align	1
	.type	isdir, @function
isdir:
.LFB5:
	.loc 1 36 36
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
.LBB2:
	.loc 1 37 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
 #APP
# 37 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE2:
	.loc 1 37 9
	sw	a5,-20(s0)
	.loc 1 38 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L27
.LBB3:
	.loc 1 38 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
 #APP
# 38 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE3:
	.loc 1 38 41 discriminator 1
	li	a5,1
	.loc 1 38 41 is_stmt 0
	j	.L28
.L27:
	.loc 1 39 12 is_stmt 1
	li	a5,0
.L28:
	.loc 1 40 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE5:
	.size	isdir, .-isdir
	.globl	shell_pgrp
	.bss
	.align	2
	.type	shell_pgrp, @object
	.size	shell_pgrp, 4
shell_pgrp:
	.zero	4
	.section	.rodata
	.align	3
.LC0:
	.string	"MINUX_CMDLINE="
	.align	3
.LC1:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB6:
	.loc 1 61 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-576(s0)
	mv	a4,a2
	sw	a5,-564(s0)
	mv	a5,a4
	sw	a5,-568(s0)
	.loc 1 62 9
	sw	zero,-120(s0)
	sw	zero,-116(s0)
	.loc 1 64 41
	lw	a4,-564(s0)
	li	a5,1064
	mul	a5,a4,a5
	.loc 1 64 22
	ld	a4,-576(s0)
	add	a5,a4,a5
	sd	a5,-72(s0)
	.loc 1 66 25
	lw	a5,-568(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 66 7
	lw	a4,-564(s0)
	sext.w	a4,a4
	bne	a4,a5,.L30
.LBB4:
.LBB5:
	.loc 1 67 9
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 67 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE5:
	.loc 1 70 14
	sw	zero,-20(s0)
	.loc 1 70 9
	j	.L31
.L32:
	.loc 1 71 22
	lw	a5,-20(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 71 20
	lw	a3,-20(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 70 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L31:
	.loc 1 70 27 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 70 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L32
	.loc 1 73 17
	lw	a4,-20(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 76 13
	sw	zero,-24(s0)
	.loc 1 77 21
	lla	a5,.LC0
	sd	a5,-112(s0)
.LBB6:
	.loc 1 78 18
	sw	zero,-28(s0)
	.loc 1 78 9
	j	.L33
.L34:
	.loc 1 78 60 discriminator 3
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a4,a4,a5
	.loc 1 78 48 discriminator 3
	lw	a5,-24(s0)
	addiw	a3,a5,1
	sw	a3,-24(s0)
	.loc 1 78 60 discriminator 3
	lbu	a4,0(a4)
	.loc 1 78 52 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 78 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L33:
	.loc 1 78 29 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 78 23 discriminator 1
	bne	a5,zero,.L34
.LBE6:
.LBB7:
	.loc 1 79 18
	sw	zero,-32(s0)
	.loc 1 79 9
	j	.L35
.L37:
	.loc 1 79 81 discriminator 4
	lw	a5,-24(s0)
	addiw	a4,a5,1
	sw	a4,-24(s0)
	.loc 1 79 96 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 79 85 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 79 68 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L35:
	.loc 1 79 32 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 79 36 discriminator 1
	beq	a5,zero,.L36
	.loc 1 79 36 is_stmt 0 discriminator 3
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L37
.L36:
.LBE7:
	.loc 1 80 20 is_stmt 1
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 81 32
	addi	a5,s0,-488
	sd	a5,-136(s0)
	.loc 1 81 50
	sd	zero,-128(s0)
	.loc 1 83 34
	ld	a5,-72(s0)
	lbu	a5,1028(a5)
	.loc 1 83 11
	beq	a5,zero,.L38
.LBB8:
	.loc 1 85 23
	ld	a5,-72(s0)
	lw	a5,1060(a5)
	.loc 1 85 15
	beq	a5,zero,.L39
.LBB9:
	.loc 1 86 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 86 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE9:
	.loc 1 86 20
	sw	a5,-36(s0)
	j	.L40
.L39:
.LBB10:
	.loc 1 89 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 89 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE10:
	.loc 1 89 20
	sw	a5,-36(s0)
.L40:
	.loc 1 92 15
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
	.loc 1 93 17
	lla	a0,.LC1
	call	puts
	.loc 1 94 17
	li	a0,1
	call	exit
.L41:
.LBB11:
	.loc 1 97 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 97 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE11:
.LBB12:
	.loc 1 98 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 98 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L38:
.LBE12:
.LBE8:
.LBB13:
	.loc 1 102 9
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 102 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE13:
	.loc 1 103 17
	ld	a5,-408(s0)
	.loc 1 103 12
	beq	a5,zero,.L42
	.loc 1 103 28 discriminator 1
	ld	a5,-408(s0)
	.loc 1 103 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 103 21 discriminator 1
	beq	a5,zero,.L42
	.loc 1 103 52 discriminator 2
	ld	a5,-408(s0)
	.loc 1 103 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 103 35 discriminator 1
	bne	a5,zero,.L42
.LBB14:
	.loc 1 105 21
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 106 17
	sw	zero,-40(s0)
	.loc 1 106 28
	j	.L43
.L45:
	.loc 1 106 86 discriminator 4
	ld	a4,-408(s0)
	.loc 1 106 89 discriminator 4
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 106 76 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 106 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 106 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 106 95 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L43:
	.loc 1 106 33 discriminator 1
	ld	a4,-408(s0)
	.loc 1 106 36 discriminator 1
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 106 40 discriminator 1
	beq	a5,zero,.L44
	.loc 1 106 40 is_stmt 0 discriminator 3
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L45
.L44:
	.loc 1 107 19 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 107 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 108 21
	addi	a5,s0,-552
	sd	a5,-408(s0)
.LBB15:
	.loc 1 109 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 109 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L42:
.LBE15:
.LBE14:
	.loc 1 111 9
	li	a0,126
	call	exit
.LBE4:
	j	.L46
.L30:
.LBB16:
.LBB17:
	.loc 1 114 9
	addi	a5,s0,-120
	mv	a0,a5
	li	a7,73
 #APP
# 114 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE17:
.LBB18:
	.loc 1 116 19
	li	a7,68
 #APP
# 116 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE18:
	.loc 1 116 13
	sw	a5,-76(s0)
	.loc 1 118 11
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L47
.LBB19:
	.loc 1 119 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 119 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE19:
.LBB20:
	.loc 1 120 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 120 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE20:
.LBB21:
	.loc 1 121 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 121 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE21:
	.loc 1 122 13
	lw	a5,-564(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-568(s0)
	mv	a2,a4
	ld	a1,-576(s0)
	mv	a0,a5
	call	run_command
	j	.L46
.L47:
.LBB22:
.LBB23:
	.loc 1 125 13
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 125 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE23:
.LBB24:
	.loc 1 126 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 126 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 127 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 127 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE25:
.LBB26:
	.loc 1 128 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 128 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
	.loc 1 132 18
	sw	zero,-44(s0)
	.loc 1 132 13
	j	.L48
.L49:
	.loc 1 133 26
	lw	a5,-44(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 133 24
	lw	a3,-44(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 132 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L48:
	.loc 1 132 31 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 132 23 discriminator 1
	lw	a4,-44(s0)
	sext.w	a4,a4
	blt	a4,a5,.L49
	.loc 1 135 21
	lw	a4,-44(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 138 17
	sw	zero,-48(s0)
	.loc 1 139 25
	lla	a5,.LC0
	sd	a5,-96(s0)
.LBB27:
	.loc 1 140 22
	sw	zero,-52(s0)
	.loc 1 140 13
	j	.L50
.L51:
	.loc 1 140 64 discriminator 3
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a4,a4,a5
	.loc 1 140 52 discriminator 3
	lw	a5,-48(s0)
	addiw	a3,a5,1
	sw	a3,-48(s0)
	.loc 1 140 64 discriminator 3
	lbu	a4,0(a4)
	.loc 1 140 56 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 140 39 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L50:
	.loc 1 140 33 discriminator 1
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 140 27 discriminator 1
	bne	a5,zero,.L51
.LBE27:
.LBB28:
	.loc 1 141 22
	sw	zero,-56(s0)
	.loc 1 141 13
	j	.L52
.L54:
	.loc 1 141 85 discriminator 4
	lw	a5,-48(s0)
	addiw	a4,a5,1
	sw	a4,-48(s0)
	.loc 1 141 100 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-56(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 141 89 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 141 72 discriminator 4
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L52:
	.loc 1 141 36 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-56(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 141 40 discriminator 1
	beq	a5,zero,.L53
	.loc 1 141 40 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L54
.L53:
.LBE28:
	.loc 1 142 24 is_stmt 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 143 36
	addi	a5,s0,-488
	sd	a5,-152(s0)
	.loc 1 143 54
	sd	zero,-144(s0)
.LBB29:
	.loc 1 145 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
 #APP
# 145 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
	.loc 1 146 21
	ld	a5,-408(s0)
	.loc 1 146 16
	beq	a5,zero,.L55
	.loc 1 146 32 discriminator 1
	ld	a5,-408(s0)
	.loc 1 146 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 146 25 discriminator 1
	beq	a5,zero,.L55
	.loc 1 146 56 discriminator 2
	ld	a5,-408(s0)
	.loc 1 146 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 146 39 discriminator 1
	bne	a5,zero,.L55
.LBB30:
	.loc 1 148 25
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 149 21
	sw	zero,-60(s0)
	.loc 1 149 32
	j	.L56
.L58:
	.loc 1 149 90 discriminator 4
	ld	a4,-408(s0)
	.loc 1 149 93 discriminator 4
	lw	a5,-60(s0)
	add	a4,a4,a5
	.loc 1 149 80 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 149 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 149 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 149 99 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L56:
	.loc 1 149 37 discriminator 1
	ld	a4,-408(s0)
	.loc 1 149 40 discriminator 1
	lw	a5,-60(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 149 44 discriminator 1
	beq	a5,zero,.L57
	.loc 1 149 44 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L58
.L57:
	.loc 1 150 23 is_stmt 1
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 150 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 151 25
	addi	a5,s0,-552
	sd	a5,-408(s0)
.LBB31:
	.loc 1 152 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
 #APP
# 152 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L55:
.LBE31:
.LBE30:
	.loc 1 154 13
	li	a0,126
	call	exit
.L46:
.LBE22:
.LBE16:
	.loc 1 158 12
	li	a5,1
	.loc 1 159 1
	mv	a0,a5
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC2:
	.string	"-c"
	.align	3
.LC3:
	.string	" "
	.align	3
.LC4:
	.string	"$ "
	.align	3
.LC5:
	.string	"ARG NUM ERROR"
	.align	3
.LC6:
	.string	"ERR MAX COMMAND"
	.align	3
.LC7:
	.string	"FILE NAME IS TOO LONG"
	.align	3
.LC8:
	.string	"ERR ARG NUM"
	.align	3
.LC9:
	.string	"cd"
	.align	3
.LC10:
	.string	"/"
	.align	3
.LC11:
	.string	"cd: failed\n"
	.align	3
.LC12:
	.string	"=> %d\r\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB7:
	.loc 1 161 33
	.cfi_startproc
	addi	sp,sp,-864
	.cfi_def_cfa_offset 864
	sd	ra,856(sp)
	sd	s0,848(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,864
	.cfi_def_cfa 8, 0
	li	t0,-16384
	add	sp,sp,t0
	mv	a4,a0
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sd	a1,-848(a5)
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-836(a5)
	.loc 1 173 9
	sw	zero,-88(s0)
	.loc 1 176 12
	sb	zero,-192(s0)
	.loc 1 178 9
	sw	zero,-48(s0)
	.loc 1 179 10
	li	a5,1
	sw	a5,-44(s0)
	.loc 1 179 5
	j	.L61
.L64:
	.loc 1 180 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-848(a4)
	add	a5,a4,a5
	.loc 1 180 12
	ld	a5,0(a5)
	lla	a1,.LC2
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 180 11 discriminator 1
	bne	a5,zero,.L62
	.loc 1 181 22
	li	a5,1
	sw	a5,-48(s0)
	j	.L63
.L62:
	.loc 1 183 16
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L63
	.loc 1 184 30
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-848(a4)
	add	a5,a4,a5
	.loc 1 184 13
	ld	a4,0(a5)
	addi	a5,s0,-192
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncat
	.loc 1 185 13
	addi	a5,s0,-192
	li	a2,64
	lla	a1,.LC3
	mv	a0,a5
	call	strncat
.L63:
	.loc 1 179 23 discriminator 2
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L61:
	.loc 1 179 15 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-44(s0)
	lw	a5,-836(a5)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L64
.L111:
.LBB32:
	.loc 1 190 15
	sd	zero,-56(s0)
	.loc 1 191 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L65
	.loc 1 192 23
	lla	a0,.LC4
	call	readline
	sd	a0,-56(s0)
	.loc 1 194 13
	addi	a5,s0,-192
	li	a2,64
	ld	a1,-56(s0)
	mv	a0,a5
	call	strncpy
.L65:
	.loc 1 198 13
	sw	zero,-60(s0)
	.loc 1 198 27
	j	.L66
.L68:
	.loc 1 198 77 discriminator 5
	lw	a5,-60(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-176(a5)
	.loc 1 198 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-60(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 198 85 discriminator 5
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L66:
	.loc 1 198 31 discriminator 1
	lw	a5,-60(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-176(a5)
	.loc 1 198 36 discriminator 1
	beq	a5,zero,.L67
	.loc 1 198 36 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L68
.L67:
	.loc 1 198 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-60(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 200 15
	lbu	a5,-192(s0)
	.loc 1 200 11
	beq	a5,zero,.L112
	.loc 1 204 22
	sw	zero,-28(s0)
	.loc 1 205 17
	sw	zero,-32(s0)
	.loc 1 206 11
	addi	a5,s0,-192
	sd	a5,-40(s0)
	.loc 1 207 11
	sd	zero,-24(s0)
	.loc 1 209 49
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,204(a5)
.L102:
	.loc 1 212 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 212 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L71
	.loc 1 214 19
	ld	a5,-24(s0)
	ble	a5,zero,.L72
	.loc 1 215 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-824(a5)
	.loc 1 216 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 217 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L72
	.loc 1 218 25
	lla	a0,.LC5
	call	puts
	.loc 1 219 25
	j	.L73
.L72:
	.loc 1 222 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 223 22
	j	.L74
.L75:
	.loc 1 224 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L74:
	.loc 1 223 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 223 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L75
	.loc 1 223 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 223 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L75
	.loc 1 226 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,200(a5)
	.loc 1 228 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 229 19
	sd	zero,-24(s0)
	.loc 1 230 25
	sw	zero,-32(s0)
	.loc 1 232 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,204(a5)
	.loc 1 234 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L102
	.loc 1 235 21
	lla	a0,.LC6
	call	puts
	.loc 1 236 21
	j	.L73
.L71:
	.loc 1 239 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 239 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L77
	.loc 1 239 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 239 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 239 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L77
.LBB33:
	.loc 1 241 19
	ld	a5,-24(s0)
	ble	a5,zero,.L78
	.loc 1 242 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-824(a5)
	.loc 1 243 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 244 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L79
	.loc 1 245 25
	lla	a0,.LC5
	call	puts
	.loc 1 246 25
	j	.L73
.L79:
	.loc 1 248 23
	sd	zero,-24(s0)
.L78:
	.loc 1 250 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 251 22
	j	.L80
.L81:
	.loc 1 252 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L80:
	.loc 1 251 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 251 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L81
	.loc 1 251 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 251 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L81
	.loc 1 255 21
	sw	zero,-64(s0)
	.loc 1 257 22
	j	.L82
.L83:
	.loc 1 258 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 258 59
	lw	a4,-64(s0)
	addiw	a3,a4,1
	sw	a3,-64(s0)
	.loc 1 258 65
	lbu	a3,0(a5)
	.loc 1 258 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,204(a5)
	.loc 1 260 23
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L82
	.loc 1 261 25
	lla	a0,.LC7
	call	puts
	.loc 1 262 25
	li	a0,2
	call	exit
.L82:
	.loc 1 257 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 257 75 discriminator 1
	bne	a5,zero,.L83
	.loc 1 257 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 257 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L83
	.loc 1 257 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 257 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L83
	.loc 1 257 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 257 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L83
	.loc 1 257 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 257 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L83
	.loc 1 265 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-64(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,204(a5)
	.loc 1 266 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sw	zero,236(a5)
	.loc 1 268 22
	j	.L84
.L85:
	.loc 1 269 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L84:
	.loc 1 268 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 268 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L85
	.loc 1 268 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 268 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L85
.LBE33:
	.loc 1 239 49
	j	.L76
.L77:
	.loc 1 272 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 272 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L86
	.loc 1 272 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 272 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 272 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L86
.LBB34:
	.loc 1 274 19
	ld	a5,-24(s0)
	ble	a5,zero,.L87
	.loc 1 275 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-824(a5)
	.loc 1 276 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 277 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L88
	.loc 1 278 25
	lla	a0,.LC5
	call	puts
	.loc 1 279 25
	j	.L73
.L88:
	.loc 1 281 23
	sd	zero,-24(s0)
.L87:
	.loc 1 284 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 285 22
	j	.L89
.L90:
	.loc 1 286 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L89:
	.loc 1 285 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 285 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L90
	.loc 1 285 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 285 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L90
	.loc 1 289 21
	sw	zero,-68(s0)
	.loc 1 291 22
	j	.L91
.L92:
	.loc 1 292 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 292 59
	lw	a4,-68(s0)
	addiw	a3,a4,1
	sw	a3,-68(s0)
	.loc 1 292 65
	lbu	a3,0(a5)
	.loc 1 292 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,204(a5)
	.loc 1 294 23
	lw	a5,-68(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L91
	.loc 1 295 25
	lla	a0,.LC7
	call	puts
	.loc 1 296 25
	li	a0,2
	call	exit
.L91:
	.loc 1 291 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 291 75 discriminator 1
	bne	a5,zero,.L92
	.loc 1 291 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 291 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L92
	.loc 1 291 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 291 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L92
	.loc 1 291 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 291 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L92
	.loc 1 291 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 291 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L92
	.loc 1 299 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-68(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,204(a5)
	.loc 1 300 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	li	a4,1
	sw	a4,236(a5)
	.loc 1 302 22
	j	.L93
.L94:
	.loc 1 303 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L93:
	.loc 1 302 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 302 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L94
	.loc 1 302 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 302 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L94
.LBE34:
	.loc 1 272 49
	j	.L76
.L86:
	.loc 1 306 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 306 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L97
	.loc 1 306 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 306 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L96
	.loc 1 307 22
	j	.L97
.L98:
	.loc 1 308 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L97:
	.loc 1 307 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L98
	.loc 1 307 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L98
	.loc 1 310 19
	ld	a5,-24(s0)
	ble	a5,zero,.L113
	.loc 1 311 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-824(a5)
	.loc 1 312 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 313 23
	sd	zero,-24(s0)
	.loc 1 314 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L113
	.loc 1 315 25
	lla	a0,.LC5
	call	puts
	.loc 1 316 25
	j	.L73
.L96:
	.loc 1 321 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 321 20
	bne	a5,zero,.L100
	.loc 1 323 20
	ld	a5,-24(s0)
	ble	a5,zero,.L101
	.loc 1 324 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-824(a5)
	.loc 1 325 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 326 23
	sd	zero,-24(s0)
.L101:
	.loc 1 329 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,200(a5)
	.loc 1 330 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 331 17
	j	.L73
.L100:
	.loc 1 334 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 334 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a5,-32(s0)
	lw	a1,-28(s0)
	slli	a2,a5,5
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a3,a3,a5
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-824(a5)
	.loc 1 335 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 336 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 338 19
	ld	a4,-24(s0)
	li	a5,31
	ble	a4,a5,.L102
	.loc 1 339 21
	lla	a0,.LC8
	call	puts
	.loc 1 340 21
	j	.L73
.L113:
	.loc 1 310 19
	nop
.L76:
	.loc 1 212 15
	j	.L102
.L73:
	.loc 1 346 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L103
	.loc 1 346 45 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,200(a5)
	.loc 1 346 31 discriminator 1
	ble	a5,zero,.L103
	.loc 1 346 62 discriminator 2
	li	a5,-16384
	addi	a5,a5,-824
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 346 59 discriminator 1
	bne	a5,zero,.L103
.LBB35:
	.loc 1 347 25
	lla	a5,.LC10
	sd	a5,-80(s0)
	.loc 1 348 28
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,200(a5)
	.loc 1 348 16
	li	a5,1
	ble	a4,a5,.L104
	.loc 1 348 64 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-792(a5)
	.loc 1 348 42 discriminator 1
	beq	a5,zero,.L104
	.loc 1 349 24
	li	a5,-16384
	addi	a5,a5,-824
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a5,a5,32
	sd	a5,-80(s0)
.L104:
.LBB36:
	.loc 1 351 22
	ld	a5,-80(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 351 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE36:
	.loc 1 351 17
	sw	a5,-92(s0)
	.loc 1 352 16
	lw	a5,-92(s0)
	sext.w	a5,a5
	bge	a5,zero,.L114
	.loc 1 353 17
	lla	a0,.LC11
	call	puts
	.loc 1 355 13
	j	.L114
.L103:
.LBE35:
.LBB37:
	.loc 1 358 22
	li	a7,105
 #APP
# 358 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a5,-104(s0)
	ld	a5,-104(s0)
.LBE37:
	.loc 1 358 20
	sext.w	a4,a5
	lla	a5,shell_pgrp
	sw	a4,0(a5)
.LBB38:
	.loc 1 359 9
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 359 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE38:
.LBB39:
	.loc 1 361 15
	li	a7,68
 #APP
# 361 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE39:
	.loc 1 361 13
	sw	a5,-116(s0)
	.loc 1 363 11
	lw	a5,-116(s0)
	sext.w	a5,a5
	bne	a5,zero,.L106
.LBB40:
	.loc 1 364 13
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 364 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-128(s0)
.LBE40:
	.loc 1 365 13
	lw	a4,-28(s0)
	li	a5,-16384
	addi	a5,a5,-824
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L107
.L106:
.LBB41:
	.loc 1 368 21
	sw	zero,-84(s0)
	.loc 1 368 13
	j	.L108
.L109:
.LBB42:
.LBB43:
	.loc 1 370 17
	li	a5,-16384
	addi	a5,a5,-828
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a0,a5
	li	a7,71
 #APP
# 370 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE43:
	.loc 1 371 17
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-828(a5)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.LBE42:
	.loc 1 368 43 discriminator 3
	lw	a5,-84(s0)
	addiw	a5,a5,1
	sw	a5,-84(s0)
.L108:
	.loc 1 368 27 discriminator 1
	lw	a5,-84(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L109
.L107:
.LBE41:
	.loc 1 375 11
	ld	a5,-56(s0)
	beq	a5,zero,.L110
	.loc 1 376 13
	ld	a0,-56(s0)
	call	free
.L110:
	.loc 1 379 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L111
	.loc 1 380 13
	li	a0,0
	call	exit
	j	.L111
.L112:
	.loc 1 201 13
	nop
	j	.L111
.L114:
.LBB44:
	.loc 1 355 13
	nop
.LBE44:
.LBE32:
	.loc 1 189 14
	j	.L111
	.cfi_endproc
.LFE7:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xddc
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x14
	.4byte	.LASF52
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
	.uleb128 0x15
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
	.uleb128 0x13
	.4byte	.LASF13
	.byte	0x2
	.byte	0xd6
	.byte	0x17
	.4byte	0x6d
	.uleb128 0x7
	.byte	0x10
	.byte	0x4
	.4byte	.LASF11
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF12
	.uleb128 0x16
	.4byte	0x87
	.uleb128 0xe
	.4byte	0x98
	.uleb128 0xe
	.4byte	0x87
	.uleb128 0x13
	.4byte	.LASF14
	.byte	0x3
	.byte	0xa9
	.byte	0xd
	.4byte	0x3c
	.uleb128 0xe
	.4byte	0x8e
	.uleb128 0x9
	.4byte	0x87
	.4byte	0xbe
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0xc
	.byte	0xd
	.4byte	0xae
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x17
	.4byte	.LASF53
	.2byte	0x428
	.byte	0x1
	.byte	0x32
	.byte	0x8
	.4byte	0x116
	.uleb128 0x18
	.4byte	.LASF15
	.byte	0x1
	.byte	0x34
	.byte	0xa
	.4byte	0x116
	.byte	0
	.uleb128 0xf
	.4byte	.LASF16
	.byte	0x35
	.byte	0x9
	.4byte	0x3c
	.2byte	0x400
	.uleb128 0xf
	.4byte	.LASF17
	.byte	0x36
	.byte	0xa
	.4byte	0x12c
	.2byte	0x404
	.uleb128 0xf
	.4byte	.LASF18
	.byte	0x37
	.byte	0x9
	.4byte	0x3c
	.2byte	0x424
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x12c
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x13c
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF54
	.byte	0x1
	.byte	0x3a
	.byte	0x5
	.4byte	0x3c
	.uleb128 0x9
	.byte	0x3
	.8byte	shell_pgrp
	.uleb128 0x10
	.4byte	.LASF24
	.2byte	0x33c
	.4byte	0x163
	.uleb128 0x5
	.4byte	0x163
	.byte	0
	.uleb128 0x1a
	.byte	0x8
	.uleb128 0xc
	.4byte	.LASF19
	.2byte	0x30b
	.byte	0x5
	.4byte	0x3c
	.4byte	0x17c
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x1b
	.byte	0
	.uleb128 0xc
	.4byte	.LASF20
	.2byte	0x331
	.byte	0x7
	.4byte	0x98
	.4byte	0x19c
	.uleb128 0x5
	.4byte	0x98
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0x3c
	.byte	0
	.uleb128 0xc
	.4byte	.LASF21
	.2byte	0x34d
	.byte	0x7
	.4byte	0x98
	.4byte	0x1b2
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0xc
	.4byte	.LASF22
	.2byte	0x322
	.byte	0x7
	.4byte	0x98
	.4byte	0x1d2
	.uleb128 0x5
	.4byte	0x98
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0x74
	.byte	0
	.uleb128 0xc
	.4byte	.LASF23
	.2byte	0x338
	.byte	0x5
	.4byte	0x3c
	.4byte	0x1ed
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0x10
	.4byte	.LASF25
	.2byte	0x231
	.4byte	0x1fe
	.uleb128 0x5
	.4byte	0x3c
	.byte	0
	.uleb128 0x10
	.4byte	.LASF26
	.2byte	0x323
	.4byte	0x20f
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0x11
	.4byte	.LASF38
	.byte	0xa1
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x535
	.uleb128 0xd
	.4byte	.LASF27
	.byte	0xa1
	.byte	0xe
	.4byte	0x3c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17236
	.uleb128 0xd
	.4byte	.LASF15
	.byte	0xa1
	.byte	0x1b
	.4byte	0x93
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17248
	.uleb128 0x1
	.string	"buf"
	.byte	0xa2
	.byte	0xa
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"n"
	.byte	0xa4
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF29
	.byte	0xa5
	.byte	0xa
	.4byte	0x535
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.string	"pid"
	.byte	0xa6
	.byte	0xb
	.4byte	0x9d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1c
	.4byte	.LASF37
	.byte	0x1
	.byte	0xa7
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF30
	.byte	0xa9
	.byte	0x15
	.4byte	0x545
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17224
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0xaa
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF16
	.byte	0xab
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.byte	0xac
	.byte	0xb
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"m"
	.byte	0xad
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.byte	0xae
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF32
	.byte	0xb2
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x6
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0xbe
	.byte	0xf
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"gi"
	.byte	0xc6
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x341
	.uleb128 0x1
	.string	"i"
	.byte	0xff
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x365
	.uleb128 0x4
	.string	"i"
	.2byte	0x121
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.byte	0
	.uleb128 0x1d
	.4byte	.LLRL0
	.4byte	0x3bc
	.uleb128 0xa
	.4byte	.LASF34
	.2byte	0x15b
	.byte	0x19
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.string	"rc"
	.2byte	0x15f
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x6
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x15f
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x15f
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x3f0
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x166
	.byte	0x16
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x166
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x440
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0x472
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x169
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x169
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0x4c2
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x4
	.string	"k"
	.2byte	0x170
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x6
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.uleb128 0xa
	.4byte	.LASF37
	.2byte	0x171
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17228
	.uleb128 0x6
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x172
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x172
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x545
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0xd3
	.4byte	0x555
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x11
	.4byte	.LASF39
	.byte	0x3c
	.4byte	0x3c
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc06
	.uleb128 0xb
	.string	"n"
	.byte	0x3c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0xd
	.4byte	.LASF30
	.byte	0x3c
	.byte	0x29
	.4byte	0xc06
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xd
	.4byte	.LASF31
	.byte	0x3c
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x3
	.4byte	.LASF40
	.byte	0x3e
	.byte	0x9
	.4byte	0xc0b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.4byte	.LASF41
	.byte	0x40
	.byte	0x16
	.4byte	0xc06
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x896
	.uleb128 0x3
	.4byte	.LASF15
	.byte	0x44
	.byte	0xf
	.4byte	0xc1b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x45
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x4b
	.byte	0xe
	.4byte	0xc2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x4c
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF43
	.byte	0x4d
	.byte	0x15
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.4byte	.LASF44
	.byte	0x51
	.byte	0xf
	.4byte	0xc3b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.4byte	0x674
	.uleb128 0x3
	.4byte	.LASF35
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x696
	.uleb128 0x1
	.string	"k"
	.byte	0x4e
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x6b8
	.uleb128 0x1
	.string	"k"
	.byte	0x4f
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x7d8
	.uleb128 0x1
	.string	"fd"
	.byte	0x54
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x724
	.uleb128 0x1
	.string	"_a0"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x76e
	.uleb128 0x1
	.string	"_a0"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x7ab
	.uleb128 0x1
	.string	"_a0"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"_a0"
	.byte	0x62
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x62
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x822
	.uleb128 0x1
	.string	"_a0"
	.byte	0x66
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x66
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x66
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x66
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x3
	.4byte	.LASF45
	.byte	0x68
	.byte	0x12
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0x6a
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x1
	.string	"_a0"
	.byte	0x6d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x6d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x6d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x6d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"pid"
	.byte	0x74
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x8e6
	.uleb128 0x1
	.string	"_a0"
	.byte	0x72
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x72
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x916
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x74
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF35
	.byte	0x74
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x946
	.uleb128 0x1
	.string	"_a0"
	.byte	0x77
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x77
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x983
	.uleb128 0x1
	.string	"_a0"
	.byte	0x78
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x78
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x78
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x9b3
	.uleb128 0x1
	.string	"_a0"
	.byte	0x79
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x79
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.uleb128 0x3
	.4byte	.LASF15
	.byte	0x82
	.byte	0x13
	.4byte	0xc1b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x83
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x89
	.byte	0x12
	.4byte	0xc2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x8a
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF43
	.byte	0x8b
	.byte	0x19
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.4byte	.LASF44
	.byte	0x8f
	.byte	0x13
	.4byte	0xc3b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0xa65
	.uleb128 0x3
	.4byte	.LASF35
	.byte	0x7d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x7d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0xa95
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0xad2
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x7f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0xb02
	.uleb128 0x1
	.string	"_a0"
	.byte	0x80
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x80
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0xb24
	.uleb128 0x1
	.string	"k"
	.byte	0x8c
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0xb46
	.uleb128 0x1
	.string	"k"
	.byte	0x8d
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0xb90
	.uleb128 0x1
	.string	"_a0"
	.byte	0x91
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x91
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x91
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x91
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x3
	.4byte	.LASF45
	.byte	0x93
	.byte	0x16
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0x95
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"_a0"
	.byte	0x98
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x98
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x98
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x98
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0xd3
	.uleb128 0x9
	.4byte	0x3c
	.4byte	0xc1b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0x98
	.4byte	0xc2b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0xc3b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4f
	.byte	0
	.uleb128 0x9
	.4byte	0x98
	.4byte	0xc4b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF55
	.byte	0x1
	.byte	0x24
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xce5
	.uleb128 0xd
	.4byte	.LASF46
	.byte	0x24
	.byte	0x1e
	.4byte	0xa9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.byte	0x25
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.4byte	0xcb8
	.uleb128 0x1
	.string	"_a0"
	.byte	0x25
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x25
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x1
	.string	"_a0"
	.byte	0x26
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x26
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	.LASF47
	.byte	0x1e
	.4byte	0x3c
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd12
	.uleb128 0xb
	.string	"c"
	.byte	0x1e
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF48
	.byte	0x19
	.4byte	0x3c
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd3f
	.uleb128 0xb
	.string	"c"
	.byte	0x19
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF49
	.byte	0x14
	.4byte	0x3c
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd6c
	.uleb128 0xb
	.string	"c"
	.byte	0x14
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF50
	.byte	0xe
	.4byte	0x3c
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xda7
	.uleb128 0xb
	.string	"c"
	.byte	0xe
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x3
	.4byte	.LASF51
	.byte	0x10
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF56
	.byte	0x1
	.byte	0x5
	.byte	0x14
	.4byte	0xa9
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.string	"s"
	.byte	0x5
	.byte	0x29
	.4byte	0xa9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"ch"
	.byte	0x5
	.byte	0x30
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
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
	.uleb128 0xb
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
	.uleb128 0xb
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
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
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0x5
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
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
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
	.uleb128 0x14
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
	.uleb128 0x15
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
	.uleb128 0x16
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x34
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x34
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
	.uleb128 0x1d
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x2e
	.byte	0x1
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
	.section	.debug_rnglists,"",@progbits
.Ldebug_ranges0:
	.4byte	.Ldebug_ranges3-.Ldebug_ranges2
.Ldebug_ranges2:
	.2byte	0x5
	.byte	0x8
	.byte	0
	.4byte	0
.LLRL0:
	.byte	0x4
	.uleb128 .LBB35-.Ltext0
	.uleb128 .LBE35-.Ltext0
	.byte	0x4
	.uleb128 .LBB44-.Ltext0
	.uleb128 .LBE44-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF17:
	.string	"redirect_file"
.LASF23:
	.string	"strcmp"
.LASF13:
	.string	"size_t"
.LASF29:
	.string	"buf2"
.LASF20:
	.string	"strncpy"
.LASF46:
	.string	"path"
.LASF19:
	.string	"printf"
.LASF22:
	.string	"strncat"
.LASF8:
	.string	"long long unsigned int"
.LASF18:
	.string	"redirect_append"
.LASF42:
	.string	"envbuf"
.LASF24:
	.string	"free"
.LASF4:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF28:
	.string	"g_cmdline"
.LASF21:
	.string	"readline"
.LASF9:
	.string	"long int"
.LASF39:
	.string	"run_command"
.LASF44:
	.string	"envp"
.LASF38:
	.string	"main"
.LASF7:
	.string	"unsigned int"
.LASF41:
	.string	"command"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF52:
	.string	"GNU C17 14.2.0 -mno-small-data-limit=0 -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF34:
	.string	"target"
.LASF50:
	.string	"xisalpha"
.LASF43:
	.string	"prefix"
.LASF48:
	.string	"xisdigit"
.LASF26:
	.string	"puts"
.LASF31:
	.string	"num_commands"
.LASF11:
	.string	"long double"
.LASF40:
	.string	"pipes"
.LASF47:
	.string	"xisalnum"
.LASF30:
	.string	"commands"
.LASF49:
	.string	"xisblank"
.LASF54:
	.string	"shell_pgrp"
.LASF5:
	.string	"unsigned char"
.LASF53:
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF32:
	.string	"run_once"
.LASF45:
	.string	"abuf"
.LASF25:
	.string	"exit"
.LASF16:
	.string	"num_arg"
.LASF36:
	.string	"_num"
.LASF55:
	.string	"isdir"
.LASF12:
	.string	"char"
.LASF33:
	.string	"cmdline"
.LASF56:
	.string	"s_strchr"
.LASF37:
	.string	"status"
.LASF35:
	.string	"_ret"
.LASF27:
	.string	"argc"
.LASF14:
	.string	"pid_t"
.LASF15:
	.string	"argv"
.LASF51:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
