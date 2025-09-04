	.file	"fs.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/comelang/minux9" "fs.c"
	.local	vbase
	.comm	vbase,8,8
	.local	Q
	.comm	Q,4,4
	.local	desc
	.comm	desc,8,8
	.local	avail
	.comm	avail,8,8
	.local	used
	.comm	used,8,8
	.local	vq_area
	.comm	vq_area,8,8
	.local	aidx
	.comm	aidx,2,2
	.local	status_byte
	.comm	status_byte,1,4
	.local	dma_buf
	.comm	dma_buf,512,512
	.align	1
	.type	mw32, @function
mw32:
.LFB0:
	.file 1 "fs.c"
	.loc 1 105 59
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
	mv	a4,a2
	sw	a5,-28(s0)
	mv	a5,a4
	sw	a5,-32(s0)
	.loc 1 105 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 105 62
	mv	a4,a5
	.loc 1 105 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 105 91
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
.LFE0:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB1:
	.loc 1 106 60
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
	.loc 1 106 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 106 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 106 97
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
.LFE1:
	.size	mr32, .-mr32
	.section	.rodata
	.align	3
.LC0:
	.string	"virtio-blk not found\n"
	.align	3
.LC1:
	.string	"not legacy mmio\n"
	.align	3
.LC2:
	.string	"FEATURES_OK rejected\n"
	.align	3
.LC3:
	.string	"unsupported queue size\n"
	.align	3
.LC4:
	.string	"kalloc_pages failed\n"
	.text
	.align	1
	.globl	virtio_blk_init
	.type	virtio_blk_init, @function
virtio_blk_init:
.LFB2:
	.loc 1 109 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
.LBB2:
	.loc 1 110 13
	sw	zero,-20(s0)
	.loc 1 110 5
	j	.L5
.L9:
.LBB3:
	.loc 1 111 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 111 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 112 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 112 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 113 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 113 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 113 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 113 58
	j	.L8
.L22:
	.loc 1 112 47
	nop
.L7:
.LBE3:
	.loc 1 110 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 110 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 115 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 115 7
	bne	a5,zero,.L10
	.loc 1 115 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 115 54
	j	.L11
.L10:
	.loc 1 116 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 116 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 116 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 116 70
	j	.L13
.L12:
	.loc 1 118 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 119 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 121 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 123 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 125 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 125 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 126 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 127 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 127 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 127 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 128 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 128 46
	j	.L15
.L14:
	.loc 1 131 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 132 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 133 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 134 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 135 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 136 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 137 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 137 7
	beq	a5,zero,.L17
	.loc 1 137 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 137 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 137 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 137 65
	j	.L19
.L18:
	.loc 1 139 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 139 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 140 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 140 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 141 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 141 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 142 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 142 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 143 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 143 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 145 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 145 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 146 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 146 8
	bne	a5,zero,.L20
	.loc 1 146 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 146 57
	j	.L21
.L20:
	.loc 1 147 5
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-88(s0)
	sext.w	a5,a5
	slliw	a5,a5,12
	sext.w	a5,a5
	mv	a2,a5
	li	a1,0
	mv	a0,a4
	call	memset
	.loc 1 149 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 150 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 150 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 151 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 151 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 153 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 153 14
	sd	a5,-96(s0)
	.loc 1 154 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 155 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 155 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 155 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 157 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 158 1
	nop
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
	.size	virtio_blk_init, .-virtio_blk_init
	.align	1
	.type	set_flags, @function
set_flags:
.LFB3:
	.loc 1 160 66
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
	mv	a3,a1
	mv	a4,a2
	sh	a5,-18(s0)
	mv	a5,a3
	sh	a5,-20(s0)
	mv	a5,a4
	sh	a5,-22(s0)
	.loc 1 161 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 161 19
	lhu	a4,-18(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-18(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 162 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 162 19
	lhu	a4,-20(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-20(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 163 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 163 19
	lhu	a4,-22(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-22(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 164 1
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
.LFE3:
	.size	set_flags, .-set_flags
	.local	req
	.comm	req,16,8
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB4:
	.loc 1 169 1
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
	sd	a1,-32(s0)
	.loc 1 170 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 171 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 172 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 173 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 175 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 20
	lla	a4,req
	.loc 1 175 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 175 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 51
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,16
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 175 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 176 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 20
	lla	a4,dma_buf
	.loc 1 176 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 176 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 51
	lbu	a4,8(a5)
	andi	a4,a4,0
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 176 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 177 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 177 20
	lla	a4,status_byte
	.loc 1 177 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 177 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 177 57
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 179 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 181 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 181 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 181 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 182 5
	fence	rw,rw
	.loc 1 183 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 183 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 183 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 183 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 185 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 187 10
	j	.L25
.L26:
	.loc 1 188 9
	fence	rw,rw
.L25:
	.loc 1 187 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 190 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 191 1
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
.LFE4:
	.size	virtio_blk_read, .-virtio_blk_read
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB5:
	.loc 1 194 1
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
	sd	a1,-32(s0)
	sw	a5,-20(s0)
	.loc 1 195 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 196 1
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
.LFE5:
	.size	read_block, .-read_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB6:
	.loc 1 205 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 206 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 207 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 208 1
	nop
	ld	ra,8(sp)
	.cfi_restore 1
	ld	s0,0(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB7:
	.loc 1 210 53
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	sw	a5,-52(s0)
	.loc 1 211 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L30
	.loc 1 211 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 211 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L31
.L30:
	.loc 1 212 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 213 9
	j	.L29
.L31:
	.loc 1 217 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 219 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 219 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 219 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 219 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 221 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 221 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 221 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 223 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 224 26
	lwu	a4,-28(s0)
	.loc 1 224 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 225 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L29:
	.loc 1 226 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	read_inode, .-read_inode
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB8:
	.loc 1 228 64
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	sd	a0,-88(s0)
	mv	a5,a1
	sw	a5,-92(s0)
	.loc 1 229 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L34
	.loc 1 231 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L35
.L34:
	.loc 1 232 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L36
.LBB4:
	.loc 1 234 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 235 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L37
	.loc 1 235 39 discriminator 1
	li	a5,0
	.loc 1 235 39 is_stmt 0
	j	.L35
.L37:
	.loc 1 236 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 237 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 238 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 238 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L35
.L36:
.LBE4:
.LBB5:
	.loc 1 241 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 242 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 243 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 245 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 246 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L38
	.loc 1 246 40 discriminator 1
	li	a5,0
	.loc 1 246 40 is_stmt 0
	j	.L35
.L38:
	.loc 1 248 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 249 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 250 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 250 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 251 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L39
	.loc 1 251 36 discriminator 1
	li	a5,0
	.loc 1 251 36 is_stmt 0
	j	.L35
.L39:
	.loc 1 254 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 255 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 256 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L35:
.LBE5:
	.loc 1 258 1
	mv	a0,a5
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB9:
	.loc 1 260 81
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sd	a2,-72(s0)
	mv	a4,a3
	sw	a5,-60(s0)
	mv	a5,a4
	sw	a5,-64(s0)
	.loc 1 261 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 262 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 263 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 265 11
	j	.L41
.L45:
.LBB6:
	.loc 1 266 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 267 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 268 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 269 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L42
	.loc 1 269 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L42:
	.loc 1 271 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 272 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L43
	.loc 1 273 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L44
.L43:
	.loc 1 275 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 276 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L44:
	.loc 1 278 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 279 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 280 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L41:
.LBE6:
	.loc 1 265 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L45
	.loc 1 282 1
	nop
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB10:
	.loc 1 284 62
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 285 14
	sw	zero,-20(s0)
	.loc 1 288 11
	j	.L47
.L53:
.LBB7:
	.loc 1 289 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 290 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 291 13
	li	a5,32
	sw	a5,-36(s0)
.LBB8:
	.loc 1 292 18
	sw	zero,-24(s0)
	.loc 1 292 9
	j	.L48
.L52:
	.loc 1 293 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 293 22
	lhu	a5,0(a5)
	.loc 1 293 16
	beq	a5,zero,.L55
	.loc 1 294 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 294 34
	addi	a4,a5,2
	.loc 1 294 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 295 29
	sb	zero,-42(s0)
	.loc 1 296 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 296 16 discriminator 1
	bne	a5,zero,.L50
	.loc 1 297 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 297 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L54
.L55:
	.loc 1 293 34
	nop
.L50:
	.loc 1 292 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L48:
	.loc 1 292 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L52
.LBE8:
	.loc 1 300 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L47:
.LBE7:
	.loc 1 288 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 288 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L53
	.loc 1 302 12
	li	a5,0
.L54:
	.loc 1 303 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	dir_lookup, .-dir_lookup
	.section	.rodata
	.align	3
.LC5:
	.string	"/"
	.text
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB11:
	.loc 1 305 40
	.cfi_startproc
	addi	sp,sp,-224
	.cfi_def_cfa_offset 224
	sd	ra,216(sp)
	sd	s0,208(sp)
	sd	s1,200(sp)
	sd	s2,192(sp)
	sd	s3,184(sp)
	sd	s4,176(sp)
	sd	s5,168(sp)
	sd	s6,160(sp)
	sd	s7,152(sp)
	sd	s8,144(sp)
	sd	s9,136(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	.cfi_offset 18, -32
	.cfi_offset 19, -40
	.cfi_offset 20, -48
	.cfi_offset 21, -56
	.cfi_offset 22, -64
	.cfi_offset 23, -72
	.cfi_offset 24, -80
	.cfi_offset 25, -88
	addi	s0,sp,224
	.cfi_def_cfa 8, 0
	sd	a0,-216(s0)
	.loc 1 305 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 306 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 306 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L57
	.loc 1 306 32 discriminator 1
	li	a5,0
	.loc 1 306 32 is_stmt 0
	j	.L58
.L57:
	.loc 1 307 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 307 8 discriminator 1
	bne	a5,zero,.L59
	.loc 1 308 16
	li	a5,1
	j	.L58
.L59:
	.loc 1 312 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 313 12
	lhu	a5,-200(s0)
	.loc 1 313 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L60
	.loc 1 313 35 discriminator 1
	li	a5,0
	.loc 1 313 35 is_stmt 0
	j	.L58
.L60:
	.loc 1 315 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 315 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 315 10 discriminator 1
	addi	a4,a4,-1
	sd	a4,-120(s0)
	mv	a4,a5
	mv	s8,a4
	li	s9,0
	srli	a4,s8,61
	slli	s5,s9,3
	or	s5,a4,s5
	slli	s4,s8,3
	mv	a4,a5
	mv	s6,a4
	li	s7,0
	srli	a4,s6,61
	slli	s3,s7,3
	or	s3,a4,s3
	slli	s2,s6,3
	addi	a5,a5,15
	srli	a5,a5,4
	slli	a5,a5,4
	sub	sp,sp,a5
	mv	a5,sp
	sd	a5,-128(s0)
	.loc 1 316 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 316 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 317 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 318 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 320 11
	j	.L61
.L64:
.LBB9:
	.loc 1 321 16
	lhu	a5,-200(s0)
	.loc 1 321 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L62
	.loc 1 321 39 discriminator 1
	li	a5,0
	.loc 1 321 39 is_stmt 0
	j	.L58
.L62:
	.loc 1 322 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 323 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 323 36 discriminator 1
	li	a5,0
	.loc 1 323 36 is_stmt 0
	j	.L58
.L63:
	.loc 1 324 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 325 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 326 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L61:
.LBE9:
	.loc 1 320 18
	ld	a5,-104(s0)
	bne	a5,zero,.L64
	.loc 1 328 12
	lw	a5,-108(s0)
.L58:
	mv	sp,s1
	.loc 1 329 1
	mv	a0,a5
	addi	sp,s0,-224
	.cfi_def_cfa 2, 224
	ld	ra,216(sp)
	.cfi_restore 1
	ld	s0,208(sp)
	.cfi_restore 8
	ld	s1,200(sp)
	.cfi_restore 9
	ld	s2,192(sp)
	.cfi_restore 18
	ld	s3,184(sp)
	.cfi_restore 19
	ld	s4,176(sp)
	.cfi_restore 20
	ld	s5,168(sp)
	.cfi_restore 21
	ld	s6,160(sp)
	.cfi_restore 22
	ld	s7,152(sp)
	.cfi_restore 23
	ld	s8,144(sp)
	.cfi_restore 24
	ld	s9,136(sp)
	.cfi_restore 25
	addi	sp,sp,224
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC6:
	.string	"== i-node %u ==\n"
	.align	3
.LC7:
	.string	"  type  = %u\n"
	.align	3
.LC8:
	.string	"  size  = %u\n"
	.align	3
.LC9:
	.string	"  addrs ="
	.align	3
.LC10:
	.string	" %u"
	.align	3
.LC11:
	.string	" [indirect %u]"
	.align	3
.LC12:
	.string	" [double-indirect %u]"
	.align	3
.LC13:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB12:
	.loc 1 331 32
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
	sw	a5,-100(s0)
	.loc 1 333 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 334 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 335 32
	lhu	a5,-88(s0)
	.loc 1 335 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 336 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 337 5
	lla	a0,.LC9
	call	printf
.LBB10:
	.loc 1 338 14
	sw	zero,-20(s0)
	.loc 1 338 5
	j	.L67
.L69:
	.loc 1 339 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 339 12
	beq	a5,zero,.L68
	.loc 1 339 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L68:
	.loc 1 338 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L67:
	.loc 1 338 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L69
.LBE10:
	.loc 1 341 17
	lw	a5,-28(s0)
	.loc 1 341 8
	beq	a5,zero,.L70
	.loc 1 342 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L70:
	.loc 1 344 17
	lw	a5,-24(s0)
	.loc 1 344 8
	beq	a5,zero,.L71
	.loc 1 345 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L71:
	.loc 1 347 5
	lla	a0,.LC13
	call	printf
	.loc 1 348 1
	nop
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE12:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB13:
	.loc 1 355 38
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
	.loc 1 356 12
	li	a5,128
	.loc 1 357 1
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
.LFE13:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB14:
	.loc 1 358 55
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
	sd	a1,-48(s0)
	.loc 1 359 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB11:
	.loc 1 361 14
	sw	zero,-20(s0)
	.loc 1 361 5
	j	.L75
.L78:
	.loc 1 361 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 361 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L83
	.loc 1 361 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L75:
	.loc 1 361 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L78
.LBE11:
.LBB12:
	.loc 1 363 14
	sw	zero,-24(s0)
	.loc 1 363 5
	j	.L79
.L82:
	.loc 1 364 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 364 12
	bne	a5,zero,.L80
	.loc 1 365 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 366 18
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 366 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L84
	.loc 1 366 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 366 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1144(a5)
	.loc 1 367 13
	j	.L84
.L80:
	.loc 1 363 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L79:
	.loc 1 363 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L82
	j	.L74
.L83:
.LBE12:
.LBB13:
	.loc 1 361 67
	nop
	j	.L74
.L84:
.LBE13:
.LBB14:
	.loc 1 367 13
	nop
.L74:
.LBE14:
	.loc 1 371 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE14:
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB15:
	.loc 1 372 58
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
	sd	a1,-48(s0)
	.loc 1 373 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 373 29 discriminator 1
	sw	zero,-20(s0)
.LBB15:
	.loc 1 374 14
	sw	zero,-24(s0)
	.loc 1 374 5
	j	.L86
.L89:
	.loc 1 375 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 375 12
	ld	a4,-48(s0)
	bne	a4,a5,.L87
	.loc 1 375 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L87:
	.loc 1 376 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 376 12
	beq	a5,zero,.L88
	.loc 1 376 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L88:
	.loc 1 374 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L86:
	.loc 1 374 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L89
.LBE15:
	.loc 1 378 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1144(a5)
	.loc 1 379 1
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
.LFE15:
	.size	owner_remove, .-owner_remove
	.globl	gPipes
	.bss
	.align	3
	.type	gPipes, @object
	.size	gPipes, 13056
gPipes:
	.zero	13056
	.globl	gFiles
	.align	3
	.type	gFiles, @object
	.size	gFiles, 18432
gFiles:
	.zero	18432
	.globl	gFreePipes
	.section	.sbss,"aw",@nobits
	.align	3
	.type	gFreePipes, @object
	.size	gFreePipes, 8
gFreePipes:
	.zero	8
	.globl	gFreeFiles
	.align	3
	.type	gFreeFiles, @object
	.size	gFreeFiles, 8
gFreeFiles:
	.zero	8
	.text
	.align	1
	.globl	file_system_init
	.type	file_system_init, @function
file_system_init:
.LFB16:
	.loc 1 393 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 394 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 395 5
	li	a5,20480
	addi	a2,a5,-2048
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB16:
	.loc 1 397 13
	sw	zero,-20(s0)
	.loc 1 397 5
	j	.L91
.L92:
.LBB17:
	.loc 1 398 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 400 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 401 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE17:
	.loc 1 397 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L91:
	.loc 1 397 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L92
.LBE16:
.LBB18:
	.loc 1 404 13
	sw	zero,-24(s0)
	.loc 1 404 5
	j	.L93
.L94:
.LBB19:
	.loc 1 405 22
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,3
	add	a5,a5,a4
	slli	a5,a5,7
	lla	a4,gFiles
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 407 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,112(a5)
	.loc 1 408 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE19:
	.loc 1 404 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L93:
	.loc 1 404 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L94
.LBE18:
	.loc 1 410 1
	nop
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
.LFE16:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB17:
	.loc 1 413 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 414 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 416 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 416 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 418 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 420 12
	ld	a5,-24(s0)
	.loc 1 421 1
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
.LFE17:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB18:
	.loc 1 424 1
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
	.loc 1 425 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 426 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 427 1
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
.LFE18:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB19:
	.loc 1 429 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 430 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 430 8
	bne	a5,zero,.L99
	.loc 1 430 29 discriminator 1
	li	a5,0
	.loc 1 430 29 is_stmt 0
	j	.L100
.L99:
	.loc 1 431 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 432 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,112(a5)
	.loc 1 432 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 433 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 434 12
	ld	a5,-24(s0)
.L100:
	.loc 1 435 1
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
.LFE19:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB20:
	.loc 1 439 1
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
	.loc 1 440 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,112(a5)
	.loc 1 441 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 442 1
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
.LFE20:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB21:
	.loc 1 448 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 449 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 451 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 452 8
	ld	a5,-24(s0)
	bne	a5,zero,.L103
	.loc 1 453 16
	li	a5,0
	j	.L104
.L103:
	.loc 1 454 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 455 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 456 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 457 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 458 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 459 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 461 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 462 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 464 12
	ld	a5,-24(s0)
.L104:
	.loc 1 465 1
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
.LFE21:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB22:
	.loc 1 470 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 471 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 473 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 475 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 477 12
	ld	a5,-24(s0)
	.loc 1 478 1
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
.LFE22:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB23:
	.loc 1 481 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	sd	s1,24(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 482 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 484 21
	call	new_file_table
	mv	a4,a0
	.loc 1 484 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 486 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 486 25
	sw	zero,0(a5)
	.loc 1 487 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 487 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 489 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 489 21
	call	new_file_table
	mv	a5,a0
	.loc 1 489 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 491 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 491 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 492 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 492 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 494 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 494 21
	call	new_file_table
	mv	a5,a0
	.loc 1 494 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 496 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 496 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 497 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 497 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 498 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	ld	s1,24(sp)
	.cfi_restore 9
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE23:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB24:
	.loc 1 501 1
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
	sw	a5,-36(s0)
	.loc 1 502 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 504 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 504 8
	beq	a5,zero,.L109
	.loc 1 504 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 504 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 504 24 discriminator 1
	beq	a5,zero,.L109
	.loc 1 505 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 505 26
	ld	a5,88(a5)
	.loc 1 505 11
	beq	a5,zero,.L109
	.loc 1 506 20
	li	a5,1
	j	.L110
.L109:
	.loc 1 510 12
	li	a5,0
.L110:
	.loc 1 511 1
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
.LFE24:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB25:
	.loc 1 514 1
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
	sw	a5,-36(s0)
	.loc 1 515 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 516 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 516 8
	beq	a5,zero,.L112
	.loc 1 516 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 516 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 516 24 discriminator 1
	beq	a5,zero,.L112
	.loc 1 517 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 517 26
	lw	a5,0(a5)
	.loc 1 517 11
	bne	a5,zero,.L112
	.loc 1 518 20
	li	a5,1
	j	.L113
.L112:
	.loc 1 522 12
	li	a5,0
.L113:
	.loc 1 523 1
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
.LFE25:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB26:
	.loc 1 526 1
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
	sw	a5,-36(s0)
	.loc 1 527 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 529 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 529 8
	beq	a5,zero,.L115
	.loc 1 529 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 529 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 529 24 discriminator 1
	beq	a5,zero,.L115
	.loc 1 530 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 530 26
	lw	a4,0(a5)
	.loc 1 530 11
	li	a5,1
	bne	a4,a5,.L115
	.loc 1 531 20
	li	a5,1
	j	.L116
.L115:
	.loc 1 535 12
	li	a5,0
.L116:
	.loc 1 536 1
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
.LFE26:
	.size	is_stdout, .-is_stdout
	.section	.rodata
	.align	3
.LC14:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB27:
	.loc 1 538 36
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	sd	s1,56(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 539 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 541 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB20:
	.loc 1 543 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 543 5
	j	.L118
.L123:
	.loc 1 544 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 544 12
	bne	a5,zero,.L119
	.loc 1 545 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 545 29
	call	new_file_table
	mv	a5,a0
	.loc 1 545 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 547 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 547 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 548 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 548 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 549 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 549 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 550 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 550 34
	sw	zero,76(a5)
	.loc 1 551 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 551 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 552 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 552 38
	li	a4,1
	sw	a4,100(a5)
	.loc 1 553 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 553 41
	sw	zero,104(a5)
	.loc 1 554 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 556 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 556 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 557 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 557 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 557 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 557 66
	ld	a4,0(a4)
	.loc 1 557 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 558 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 558 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 560 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 560 15
	li	a5,31
	ble	a4,a5,.L130
	.loc 1 561 17
	lla	a0,.LC14
	call	puts
.L121:
	.loc 1 562 22
	j	.L121
.L119:
	.loc 1 543 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L118:
	.loc 1 543 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L123
	j	.L122
.L130:
	.loc 1 566 13
	nop
.L122:
.LBE20:
.LBB21:
	.loc 1 569 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 569 5
	j	.L124
.L129:
	.loc 1 570 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 570 12
	bne	a5,zero,.L125
	.loc 1 571 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 571 29
	call	new_file_table
	mv	a5,a0
	.loc 1 571 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 573 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 573 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 574 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 574 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 575 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 575 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 577 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 577 34
	sw	zero,76(a5)
	.loc 1 578 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 578 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 579 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 579 39
	li	a4,1
	sw	a4,104(a5)
	.loc 1 580 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 580 38
	sw	zero,100(a5)
	.loc 1 581 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 583 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 583 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 584 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 584 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 584 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 584 66
	ld	a4,0(a4)
	.loc 1 584 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 585 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 585 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 587 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 587 15
	li	a5,31
	ble	a4,a5,.L131
	.loc 1 588 17
	lla	a0,.LC14
	call	puts
.L127:
	.loc 1 589 22
	j	.L127
.L125:
	.loc 1 569 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L124:
	.loc 1 569 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L129
.LBE21:
	.loc 1 596 1
	j	.L132
.L131:
.LBB22:
	.loc 1 593 13
	nop
.L132:
.LBE22:
	.loc 1 596 1
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	ld	s1,56(sp)
	.cfi_restore 9
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC15:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB28:
	.loc 1 606 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	mv	a4,a2
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 607 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 609 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 609 8
	bne	a5,zero,.L134
	.loc 1 610 9
	lla	a0,.LC15
	call	panic
.L134:
	.loc 1 613 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L135
	.loc 1 613 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L136
.L135:
	.loc 1 614 9
	lla	a0,.LC15
	call	panic
.L136:
	.loc 1 616 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 616 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 618 7
	ld	a5,-32(s0)
	bne	a5,zero,.L138
	.loc 1 619 9
	lla	a0,.LC15
	call	panic
	.loc 1 622 11
	j	.L138
.L140:
	.loc 1 623 8
	call	yield
.L138:
	.loc 1 622 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 622 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 622 34
	bne	a4,a5,.L139
	.loc 1 622 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 622 34 discriminator 1
	bne	a5,zero,.L140
.L139:
	.loc 1 626 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 626 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 626 8
	bne	a4,a5,.L141
	.loc 1 626 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 626 31 discriminator 1
	bne	a5,zero,.L141
	.loc 1 627 16
	li	a5,0
	j	.L142
.L141:
	.loc 1 631 18
	sw	zero,-36(s0)
.LBB23:
	.loc 1 632 23
	sw	zero,-40(s0)
	.loc 1 632 5
	j	.L143
.L146:
	.loc 1 634 12
	call	yield
.L144:
	.loc 1 633 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 633 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 633 38
	bne	a4,a5,.L145
	.loc 1 633 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 633 38 discriminator 1
	bne	a5,zero,.L146
.L145:
	.loc 1 638 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 638 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 638 12
	bne	a4,a5,.L147
	.loc 1 638 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 638 35 discriminator 1
	beq	a5,zero,.L150
.L147:
	.loc 1 642 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 642 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 642 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 642 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 642 17
	sb	a4,0(a5)
	.loc 1 643 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 643 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 646 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 632 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L143:
	.loc 1 632 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 632 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L148
	.loc 1 632 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 632 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 632 36 discriminator 3
	bltu	a4,a5,.L144
	j	.L148
.L150:
	.loc 1 639 13
	nop
.L148:
.LBE23:
	.loc 1 650 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L142:
	.loc 1 651 1
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
.LFE28:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC16:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB29:
	.loc 1 656 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	mv	a4,a2
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 657 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 659 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 659 8
	bne	a5,zero,.L152
	.loc 1 660 9
	lla	a0,.LC16
	call	panic
.L152:
	.loc 1 663 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L153
	.loc 1 663 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L154
.L153:
	.loc 1 664 9
	lla	a0,.LC16
	call	panic
.L154:
	.loc 1 666 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 666 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 668 7
	ld	a5,-32(s0)
	bne	a5,zero,.L155
	.loc 1 669 9
	lla	a0,.LC16
	call	panic
.L155:
.LBB24:
	.loc 1 672 23
	sw	zero,-36(s0)
	.loc 1 672 5
	j	.L156
.L159:
	.loc 1 675 11
	call	yield
.L157:
	.loc 1 674 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 674 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 674 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 674 48
	li	a5,512
	bne	a4,a5,.L158
	.loc 1 674 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 674 48 discriminator 1
	bne	a5,zero,.L159
.L158:
	.loc 1 678 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 678 10
	bne	a5,zero,.L160
	.loc 1 680 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 680 30
	ble	a5,zero,.L161
	.loc 1 680 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 680 30
	j	.L163
.L161:
	.loc 1 680 30 discriminator 2
	li	a5,-1
	.loc 1 680 30
	j	.L163
.L160:
	.loc 1 682 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 682 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 682 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 682 44
	lbu	a4,0(a5)
	.loc 1 682 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 683 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 683 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 672 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L156:
	.loc 1 672 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L157
.LBE24:
	.loc 1 690 12
	lw	a5,-56(s0)
.L163:
	.loc 1 691 1
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
.LFE29:
	.size	pipewrite, .-pipewrite
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB30:
	.loc 1 698 31
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	sd	s1,248(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	.loc 1 699 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 703 13
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 703 8
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L166
	.loc 1 705 9
	addi	a5,s0,-184
	li	a2,127
	ld	a1,-264(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 706 34
	sb	zero,-57(s0)
	j	.L167
.L166:
	.loc 1 709 18
	li	a5,47
	sb	a5,-184(s0)
	.loc 1 710 18
	sb	zero,-183(s0)
	.loc 1 712 46
	addi	a5,s0,-184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 712 46 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 712 9 is_stmt 1 discriminator 1
	li	a5,127
	sub	a4,a5,a4
	addi	a5,s0,-184
	mv	a2,a4
	ld	a1,-264(s0)
	mv	a0,a5
	call	strncat
.L167:
	.loc 1 715 21
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 716 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L168
	.loc 1 717 16
	li	a5,-1
	j	.L174
.L168:
	.loc 1 721 5
	addi	a4,s0,-256
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 722 11
	lhu	a5,-256(s0)
	.loc 1 722 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L170
	.loc 1 722 32 discriminator 1
	lhu	a5,-256(s0)
	.loc 1 722 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L170
	.loc 1 722 55 discriminator 2
	li	a5,-1
	.loc 1 722 55 is_stmt 0
	j	.L174
.L170:
.LBB25:
	.loc 1 724 14 is_stmt 1
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 724 5
	j	.L171
.L173:
	.loc 1 725 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 725 12
	bne	a5,zero,.L172
	.loc 1 726 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 726 29
	call	new_file_table
	mv	a5,a0
	.loc 1 726 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 728 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 728 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 729 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 729 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 730 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 730 34
	lw	a4,-52(s0)
	sw	a4,4(a5)
	.loc 1 731 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 731 34
	ld	t1,-256(s0)
	ld	a7,-248(s0)
	ld	a6,-240(s0)
	ld	a0,-232(s0)
	ld	a1,-224(s0)
	ld	a2,-216(s0)
	ld	a3,-208(s0)
	ld	a4,-200(s0)
	sd	t1,8(a5)
	sd	a7,16(a5)
	sd	a6,24(a5)
	sd	a0,32(a5)
	sd	a1,40(a5)
	sd	a2,48(a5)
	sd	a3,56(a5)
	sd	a4,64(a5)
	lw	a4,-192(s0)
	sw	a4,72(a5)
	.loc 1 732 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 732 34
	sw	zero,76(a5)
	.loc 1 733 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 733 40
	sw	zero,100(a5)
	.loc 1 734 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 734 41
	sw	zero,104(a5)
	.loc 1 735 20
	lw	a5,-36(s0)
	j	.L174
.L172:
	.loc 1 724 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L171:
	.loc 1 724 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L173
.LBE25:
	.loc 1 738 12
	li	a5,-1
.L174:
	.loc 1 739 1
	mv	a0,a5
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 272
	ld	s1,248(sp)
	.cfi_restore 9
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE30:
	.size	fs_open, .-fs_open
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB31:
	.loc 1 743 50
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	sd	a2,-72(s0)
	sw	a5,-52(s0)
	.loc 1 744 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 746 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 746 7
	bne	a5,zero,.L176
	.loc 1 747 16
	li	a5,-1
	j	.L177
.L176:
	.loc 1 750 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 751 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L178
	.loc 1 751 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L179
.L178:
	.loc 1 752 16
	li	a5,-1
	j	.L177
.L179:
	.loc 1 754 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 754 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 755 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 755 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 755 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 756 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L180
	.loc 1 756 32 discriminator 1
	li	a5,0
	.loc 1 756 32 is_stmt 0
	j	.L177
.L180:
	.loc 1 758 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L181
	mv	a5,a4
.L181:
	.loc 1 758 14
	sw	a5,-48(s0)
	.loc 1 759 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 760 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 760 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 761 12
	lw	a5,-48(s0)
.L177:
	.loc 1 762 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE31:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB32:
	.loc 1 764 25
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 765 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 767 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 767 7
	bne	a5,zero,.L183
	.loc 1 768 16
	li	a5,-1
	j	.L184
.L183:
	.loc 1 771 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 772 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L185
	.loc 1 772 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L185
	.loc 1 772 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 772 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 772 42 discriminator 2
	bne	a5,zero,.L186
.L185:
	.loc 1 773 16
	li	a5,-1
	j	.L184
.L186:
	.loc 1 775 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 775 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 776 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L184:
	.loc 1 777 1
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
.LFE32:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB33:
	.loc 1 782 36
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sw	a5,-60(s0)
	.loc 1 783 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 784 8
	ld	a5,-56(s0)
	blt	a5,zero,.L188
	.loc 1 784 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L189
.L188:
	.loc 1 784 48 discriminator 3
	li	a5,-1
	.loc 1 784 48 is_stmt 0
	j	.L190
.L189:
	.loc 1 785 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 785 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 786 8
	ld	a5,-40(s0)
	bne	a5,zero,.L191
	.loc 1 786 20 discriminator 1
	li	a5,-1
	.loc 1 786 20 is_stmt 0
	j	.L190
.L191:
	.loc 1 789 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 789 12
	sd	zero,0(a5)
	.loc 1 792 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L192
	.loc 1 792 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L192:
	.loc 1 795 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 795 8
	ble	a5,zero,.L193
	.loc 1 795 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 795 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,80(a5)
.L193:
	.loc 1 798 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 798 8
	ble	a5,zero,.L194
	.loc 1 798 29 discriminator 1
	li	a5,0
	.loc 1 798 29 is_stmt 0
	j	.L190
.L194:
	.loc 1 801 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 802 8
	ld	a5,-48(s0)
	beq	a5,zero,.L195
	.loc 1 803 14
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 803 12
	beq	a5,zero,.L196
	.loc 1 803 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 803 27 discriminator 1
	ble	a5,zero,.L196
	.loc 1 803 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 803 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 803 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 803 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 803 51 discriminator 2
	bne	a5,zero,.L196
	.loc 1 803 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L196:
	.loc 1 804 14
	ld	a5,-40(s0)
	lw	a5,104(a5)
	.loc 1 804 12
	beq	a5,zero,.L197
	.loc 1 804 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 804 27 discriminator 1
	ble	a5,zero,.L197
	.loc 1 804 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 804 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 804 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 804 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 804 51 discriminator 2
	bne	a5,zero,.L197
	.loc 1 804 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L197:
	.loc 1 805 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 805 12
	ble	a5,zero,.L198
	.loc 1 805 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 805 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L198:
	.loc 1 806 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 806 12
	bne	a5,zero,.L195
.LBB26:
	.loc 1 808 22
	sw	zero,-20(s0)
	.loc 1 808 13
	j	.L199
.L201:
	.loc 1 809 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 809 20
	beq	a5,zero,.L200
	.loc 1 809 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 809 64 discriminator 1
	sd	zero,88(a5)
.L200:
	.loc 1 808 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L199:
	.loc 1 808 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 808 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L201
.LBE26:
	.loc 1 811 13
	ld	a0,-48(s0)
	call	free_pipe
.L195:
	.loc 1 816 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 817 12
	li	a5,0
.L190:
	.loc 1 818 1
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
.LFE33:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB34:
	.loc 1 821 1
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
.LBB27:
	.loc 1 822 13
	sw	zero,-20(s0)
	.loc 1 822 5
	j	.L203
.L204:
	.loc 1 823 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 822 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L203:
	.loc 1 822 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L204
.LBE27:
	.loc 1 825 1
	nop
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
.LFE34:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB35:
	.loc 1 828 1
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
	sd	a2,-56(s0)
.LBB28:
	.loc 1 830 13
	sw	zero,-20(s0)
	.loc 1 830 5
	j	.L206
.L208:
	.loc 1 831 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 831 11
	beq	a5,zero,.L207
	.loc 1 832 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 832 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 832 29
	ld	a4,0(a4)
	.loc 1 832 23
	sd	a4,0(a5)
	.loc 1 833 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 833 22
	lw	a4,80(a5)
	.loc 1 833 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 836 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 836 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L207:
	.loc 1 830 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L206:
	.loc 1 830 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L208
.LBE28:
	.loc 1 862 1
	nop
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE35:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB36:
	.loc 1 865 1
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
	.loc 1 882 1
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
.LFE36:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB37:
	.loc 1 884 36
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
	mv	a4,a1
	sw	a5,-36(s0)
	mv	a5,a4
	sw	a5,-40(s0)
	.loc 1 885 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 886 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L219
	.loc 1 886 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L219
	.loc 1 887 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L220
	.loc 1 887 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L220
	.loc 1 888 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 888 8
	beq	a5,zero,.L221
	.loc 1 889 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L222
	.loc 1 891 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 891 8
	beq	a5,zero,.L218
	.loc 1 891 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L218:
	.loc 1 892 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 892 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 892 19
	ld	a4,0(a4)
	.loc 1 892 15
	sd	a4,0(a5)
	.loc 1 893 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 893 14
	lw	a4,80(a5)
	.loc 1 893 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	j	.L210
.L219:
	.loc 1 886 47
	nop
	j	.L210
.L220:
	.loc 1 887 47
	nop
	j	.L210
.L221:
	.loc 1 888 28
	nop
	j	.L210
.L222:
	.loc 1 889 25
	nop
.L210:
	.loc 1 895 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE37:
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1997
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x26
	.4byte	.LASF197
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0xf
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0xf
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x10
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x27
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x19
	.4byte	0x48
	.uleb128 0xf
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x10
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x6c
	.uleb128 0x19
	.4byte	0x5b
	.uleb128 0xf
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x10
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x7f
	.uleb128 0xf
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x10
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x92
	.uleb128 0xf
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x10
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xa5
	.uleb128 0xf
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0x10
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xa5
	.uleb128 0x10
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xa5
	.uleb128 0xf
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0xf
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x14
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x19
	.4byte	0x13a
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x1a
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x3
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.byte	0xe
	.4byte	0x86
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.byte	0xe
	.4byte	0x86
	.byte	0x10
	.uleb128 0x3
	.4byte	.LASF23
	.byte	0x4
	.byte	0x1f
	.byte	0xe
	.4byte	0x86
	.byte	0x14
	.uleb128 0x3
	.4byte	.LASF24
	.byte	0x4
	.byte	0x20
	.byte	0xe
	.4byte	0x86
	.byte	0x18
	.byte	0
	.uleb128 0x14
	.4byte	.LASF26
	.byte	0x44
	.byte	0x4
	.byte	0x24
	.4byte	0x195
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x4
	.byte	0x25
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF29
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x73
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF30
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x73
	.byte	0x6
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x195
	.byte	0xc
	.byte	0
	.uleb128 0xb
	.4byte	0x86
	.4byte	0x1a5
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0x14
	.4byte	.LASF32
	.byte	0x10
	.byte	0x4
	.byte	0x2f
	.4byte	0x1cc
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x4
	.byte	0x30
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x1cc
	.byte	0x2
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x1dc
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0xf
	.byte	0x1
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0x28
	.4byte	0x1dc
	.uleb128 0x10
	.4byte	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x10
	.4byte	.LASF37
	.byte	0x5
	.byte	0x6
	.byte	0x12
	.4byte	0x99
	.uleb128 0x10
	.4byte	.LASF38
	.byte	0x5
	.byte	0x8
	.byte	0x10
	.4byte	0x20c
	.uleb128 0xc
	.4byte	0x1f4
	.uleb128 0x17
	.4byte	.LASF39
	.2byte	0x100
	.byte	0xc
	.4byte	0x3a1
	.uleb128 0x2
	.string	"ra"
	.byte	0x5
	.byte	0xd
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x2
	.string	"sp"
	.byte	0x5
	.byte	0xe
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.uleb128 0x2
	.string	"gp"
	.byte	0x5
	.byte	0xf
	.byte	0xe
	.4byte	0x99
	.byte	0x10
	.uleb128 0x2
	.string	"tp"
	.byte	0x5
	.byte	0x10
	.byte	0xe
	.4byte	0x99
	.byte	0x18
	.uleb128 0x2
	.string	"t0"
	.byte	0x5
	.byte	0x11
	.byte	0xe
	.4byte	0x99
	.byte	0x20
	.uleb128 0x2
	.string	"t1"
	.byte	0x5
	.byte	0x12
	.byte	0xe
	.4byte	0x99
	.byte	0x28
	.uleb128 0x2
	.string	"t2"
	.byte	0x5
	.byte	0x13
	.byte	0xe
	.4byte	0x99
	.byte	0x30
	.uleb128 0x2
	.string	"t3"
	.byte	0x5
	.byte	0x14
	.byte	0xe
	.4byte	0x99
	.byte	0x38
	.uleb128 0x2
	.string	"t4"
	.byte	0x5
	.byte	0x15
	.byte	0xe
	.4byte	0x99
	.byte	0x40
	.uleb128 0x2
	.string	"t5"
	.byte	0x5
	.byte	0x16
	.byte	0xe
	.4byte	0x99
	.byte	0x48
	.uleb128 0x2
	.string	"t6"
	.byte	0x5
	.byte	0x17
	.byte	0xe
	.4byte	0x99
	.byte	0x50
	.uleb128 0x2
	.string	"a0"
	.byte	0x5
	.byte	0x18
	.byte	0xe
	.4byte	0x99
	.byte	0x58
	.uleb128 0x2
	.string	"a1"
	.byte	0x5
	.byte	0x19
	.byte	0xe
	.4byte	0x99
	.byte	0x60
	.uleb128 0x2
	.string	"a2"
	.byte	0x5
	.byte	0x1a
	.byte	0xe
	.4byte	0x99
	.byte	0x68
	.uleb128 0x2
	.string	"a3"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x99
	.byte	0x70
	.uleb128 0x2
	.string	"a4"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x99
	.byte	0x78
	.uleb128 0x2
	.string	"a5"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x99
	.byte	0x80
	.uleb128 0x2
	.string	"a6"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x99
	.byte	0x88
	.uleb128 0x2
	.string	"a7"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x99
	.byte	0x90
	.uleb128 0x2
	.string	"s0"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x99
	.byte	0x98
	.uleb128 0x2
	.string	"s1"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x99
	.byte	0xa0
	.uleb128 0x2
	.string	"s2"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x99
	.byte	0xa8
	.uleb128 0x2
	.string	"s3"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x99
	.byte	0xb0
	.uleb128 0x2
	.string	"s4"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x99
	.byte	0xb8
	.uleb128 0x2
	.string	"s5"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x99
	.byte	0xc0
	.uleb128 0x2
	.string	"s6"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x99
	.byte	0xc8
	.uleb128 0x2
	.string	"s7"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x99
	.byte	0xd0
	.uleb128 0x2
	.string	"s8"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x99
	.byte	0xd8
	.uleb128 0x2
	.string	"s9"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x99
	.byte	0xe0
	.uleb128 0x2
	.string	"s10"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x99
	.byte	0xe8
	.uleb128 0x2
	.string	"s11"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x99
	.byte	0xf0
	.uleb128 0x3
	.4byte	.LASF40
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x99
	.byte	0xf8
	.byte	0
	.uleb128 0x17
	.4byte	.LASF41
	.2byte	0x4d8
	.byte	0x33
	.4byte	0x47e
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x5
	.byte	0x34
	.byte	0x16
	.4byte	0x211
	.byte	0
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0x36
	.byte	0x16
	.4byte	0x211
	.2byte	0x100
	.uleb128 0x6
	.4byte	.LASF44
	.byte	0x37
	.byte	0x12
	.4byte	0x47e
	.2byte	0x200
	.uleb128 0x6
	.4byte	.LASF45
	.byte	0x39
	.byte	0xb
	.4byte	0x483
	.2byte	0x208
	.uleb128 0x6
	.4byte	.LASF46
	.byte	0x3a
	.byte	0xe
	.4byte	0x99
	.2byte	0x210
	.uleb128 0x6
	.4byte	.LASF47
	.byte	0x3b
	.byte	0xe
	.4byte	0x99
	.2byte	0x218
	.uleb128 0x29
	.string	"sz"
	.byte	0x5
	.byte	0x3c
	.byte	0xe
	.4byte	0x99
	.2byte	0x220
	.uleb128 0x6
	.4byte	.LASF48
	.byte	0x3e
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x6
	.4byte	.LASF49
	.byte	0x40
	.byte	0x11
	.4byte	0x200
	.2byte	0x230
	.uleb128 0x6
	.4byte	.LASF50
	.byte	0x42
	.byte	0xb
	.4byte	0x483
	.2byte	0x238
	.uleb128 0x6
	.4byte	.LASF51
	.byte	0x43
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x6
	.4byte	.LASF52
	.byte	0x45
	.byte	0x12
	.4byte	0x488
	.2byte	0x248
	.uleb128 0x6
	.4byte	.LASF53
	.byte	0x47
	.byte	0xb
	.4byte	0x546
	.2byte	0x2c8
	.uleb128 0x6
	.4byte	.LASF54
	.byte	0x48
	.byte	0x9
	.4byte	0x48
	.2byte	0x4c8
	.uleb128 0x6
	.4byte	.LASF55
	.byte	0x4a
	.byte	0x9
	.4byte	0x48
	.2byte	0x4cc
	.uleb128 0x6
	.4byte	.LASF56
	.byte	0x4c
	.byte	0x12
	.4byte	0x47e
	.2byte	0x4d0
	.byte	0
	.uleb128 0xc
	.4byte	0x3a1
	.uleb128 0xc
	.4byte	0x1dc
	.uleb128 0xb
	.4byte	0x498
	.4byte	0x498
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0xc
	.4byte	0x49d
	.uleb128 0x17
	.4byte	.LASF57
	.2byte	0x480
	.byte	0x6b
	.4byte	0x546
	.uleb128 0x3
	.4byte	.LASF58
	.byte	0x5
	.byte	0x6c
	.byte	0x3f
	.4byte	0x616
	.byte	0
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x5
	.byte	0x6d
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x2
	.string	"din"
	.byte	0x5
	.byte	0x6e
	.byte	0x13
	.4byte	0x13a
	.byte	0x8
	.uleb128 0x2
	.string	"off"
	.byte	0x5
	.byte	0x6f
	.byte	0xe
	.4byte	0x86
	.byte	0x4c
	.uleb128 0x3
	.4byte	.LASF59
	.byte	0x5
	.byte	0x70
	.byte	0x9
	.4byte	0x48
	.byte	0x50
	.uleb128 0x3
	.4byte	.LASF60
	.byte	0x5
	.byte	0x71
	.byte	0x13
	.4byte	0x611
	.byte	0x58
	.uleb128 0x3
	.4byte	.LASF61
	.byte	0x5
	.byte	0x72
	.byte	0x9
	.4byte	0x48
	.byte	0x60
	.uleb128 0x3
	.4byte	.LASF62
	.byte	0x5
	.byte	0x73
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x3
	.4byte	.LASF63
	.byte	0x5
	.byte	0x74
	.byte	0x9
	.4byte	0x48
	.byte	0x68
	.uleb128 0x3
	.4byte	.LASF64
	.byte	0x5
	.byte	0x76
	.byte	0x12
	.4byte	0x498
	.byte	0x70
	.uleb128 0x3
	.4byte	.LASF65
	.byte	0x5
	.byte	0x78
	.byte	0x12
	.4byte	0x643
	.byte	0x78
	.uleb128 0x6
	.4byte	.LASF66
	.byte	0x79
	.byte	0x9
	.4byte	0x48
	.2byte	0x478
	.byte	0
	.uleb128 0xb
	.4byte	0x483
	.4byte	0x556
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x3f
	.byte	0
	.uleb128 0x17
	.4byte	.LASF67
	.2byte	0x330
	.byte	0x56
	.4byte	0x5f2
	.uleb128 0x3
	.4byte	.LASF68
	.byte	0x5
	.byte	0x57
	.byte	0xa
	.4byte	0x5f2
	.byte	0
	.uleb128 0x6
	.4byte	.LASF69
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.2byte	0x200
	.uleb128 0x6
	.4byte	.LASF70
	.byte	0x59
	.byte	0xe
	.4byte	0x86
	.2byte	0x204
	.uleb128 0x6
	.4byte	.LASF71
	.byte	0x5a
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x6
	.4byte	.LASF72
	.byte	0x5b
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x6
	.4byte	.LASF73
	.byte	0x5c
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x6
	.4byte	.LASF74
	.byte	0x5d
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x6
	.4byte	.LASF59
	.byte	0x5e
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x6
	.4byte	.LASF75
	.byte	0x60
	.byte	0x12
	.4byte	0x601
	.2byte	0x220
	.uleb128 0x6
	.4byte	.LASF76
	.byte	0x61
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x6
	.4byte	.LASF64
	.byte	0x63
	.byte	0x13
	.4byte	0x611
	.2byte	0x328
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x601
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0xb
	.4byte	0x498
	.4byte	0x611
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x556
	.uleb128 0x2a
	.byte	0x7
	.byte	0x4
	.4byte	0x92
	.byte	0x5
	.byte	0x6c
	.byte	0xa
	.4byte	0x643
	.uleb128 0x16
	.4byte	.LASF77
	.byte	0
	.uleb128 0x16
	.4byte	.LASF78
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF79
	.byte	0x2
	.uleb128 0x16
	.4byte	.LASF80
	.byte	0x3
	.uleb128 0x16
	.4byte	.LASF81
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x47e
	.4byte	0x653
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x7f
	.byte	0
	.uleb128 0x21
	.4byte	.LASF82
	.byte	0x93
	.byte	0x15
	.4byte	0x643
	.uleb128 0x21
	.4byte	.LASF83
	.byte	0x95
	.byte	0xc
	.4byte	0x48
	.uleb128 0x14
	.4byte	.LASF84
	.byte	0x10
	.byte	0x1
	.byte	0x3f
	.4byte	0x6aa
	.uleb128 0x3
	.4byte	.LASF85
	.byte	0x1
	.byte	0x40
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x2
	.string	"len"
	.byte	0x1
	.byte	0x41
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x42
	.byte	0xe
	.4byte	0x73
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF56
	.byte	0x1
	.byte	0x43
	.byte	0xe
	.4byte	0x73
	.byte	0xe
	.byte	0
	.uleb128 0x22
	.4byte	.LASF89
	.byte	0x2
	.byte	0x46
	.4byte	0x6dd
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x47
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x2
	.string	"idx"
	.byte	0x1
	.byte	0x48
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x49
	.byte	0xe
	.4byte	0x6dd
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x73
	.4byte	0x6ec
	.uleb128 0x23
	.4byte	0xa5
	.byte	0
	.uleb128 0x14
	.4byte	.LASF88
	.byte	0x8
	.byte	0x1
	.byte	0x4c
	.4byte	0x712
	.uleb128 0x2
	.string	"id"
	.byte	0x1
	.byte	0x4c
	.byte	0x23
	.4byte	0x86
	.byte	0
	.uleb128 0x2
	.string	"len"
	.byte	0x1
	.byte	0x4c
	.byte	0x26
	.4byte	0x86
	.byte	0x4
	.byte	0
	.uleb128 0x22
	.4byte	.LASF90
	.byte	0x4
	.byte	0x4d
	.4byte	0x745
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x4e
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x2
	.string	"idx"
	.byte	0x1
	.byte	0x4f
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x50
	.byte	0x1c
	.4byte	0x745
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x6ec
	.4byte	0x754
	.uleb128 0x23
	.4byte	0xa5
	.byte	0
	.uleb128 0x14
	.4byte	.LASF91
	.byte	0x10
	.byte	0x1
	.byte	0x56
	.4byte	0x788
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x1
	.byte	0x57
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x3
	.4byte	.LASF92
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF93
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.byte	0
	.uleb128 0x4
	.4byte	.LASF94
	.byte	0x5d
	.byte	0x11
	.4byte	0x99
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x15
	.string	"Q"
	.byte	0x5e
	.byte	0x11
	.4byte	0x86
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x4
	.4byte	.LASF95
	.byte	0x60
	.byte	0x1c
	.4byte	0x7c5
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xc
	.4byte	0x669
	.uleb128 0x4
	.4byte	.LASF96
	.byte	0x61
	.byte	0x1c
	.4byte	0x7df
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xc
	.4byte	0x6aa
	.uleb128 0x4
	.4byte	.LASF59
	.byte	0x62
	.byte	0x1c
	.4byte	0x7f9
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xc
	.4byte	0x712
	.uleb128 0x4
	.4byte	.LASF97
	.byte	0x63
	.byte	0x1c
	.4byte	0x813
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xc
	.4byte	0x5b
	.uleb128 0x4
	.4byte	.LASF98
	.byte	0x65
	.byte	0x11
	.4byte	0x73
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2b
	.4byte	.LASF99
	.byte	0x1
	.byte	0x66
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xb
	.4byte	0x67
	.4byte	0x853
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0x19
	.4byte	0x844
	.uleb128 0x2c
	.4byte	.LASF100
	.byte	0x1
	.byte	0x67
	.byte	0x1a
	.4byte	0x853
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x15
	.string	"req"
	.byte	0xa6
	.byte	0x1e
	.4byte	0x754
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x15
	.string	"sb"
	.byte	0xca
	.byte	0x1a
	.4byte	0xd2
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xb
	.4byte	0x5b
	.4byte	0x8a8
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0x4
	.4byte	.LASF101
	.byte	0xcb
	.byte	0x17
	.4byte	0x899
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xb
	.4byte	0x556
	.4byte	0x8cd
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x18
	.4byte	.LASF102
	.2byte	0x182
	.byte	0xe
	.4byte	0x8bd
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xb
	.4byte	0x49d
	.4byte	0x8f3
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x18
	.4byte	.LASF103
	.2byte	0x183
	.byte	0xd
	.4byte	0x8e3
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x18
	.4byte	.LASF104
	.2byte	0x185
	.byte	0xf
	.4byte	0x611
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x18
	.4byte	.LASF105
	.2byte	0x186
	.byte	0xe
	.4byte	0x498
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x12
	.4byte	.LASF108
	.byte	0x10
	.byte	0x7
	.4byte	0x483
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0xb8
	.byte	0
	.uleb128 0xc
	.4byte	0x1e3
	.uleb128 0x2d
	.4byte	.LASF198
	.byte	0x1
	.2byte	0x259
	.byte	0x6
	.4byte	0x968
	.uleb128 0x1b
	.byte	0
	.uleb128 0x2e
	.4byte	.LASF106
	.byte	0x1
	.2byte	0x258
	.byte	0x6
	.4byte	0x97b
	.uleb128 0x7
	.4byte	0x483
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF107
	.byte	0x5
	.byte	0x8b
	.byte	0xf
	.4byte	0x98d
	.4byte	0x98d
	.uleb128 0x1b
	.byte	0
	.uleb128 0xc
	.4byte	0x498
	.uleb128 0x12
	.4byte	.LASF109
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0x9a8
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x1b
	.byte	0
	.uleb128 0x12
	.4byte	.LASF110
	.byte	0x12
	.byte	0x7
	.4byte	0x483
	.4byte	0x9c2
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF111
	.byte	0x11
	.byte	0x7
	.4byte	0x483
	.4byte	0x9e1
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x48
	.byte	0
	.uleb128 0x12
	.4byte	.LASF112
	.byte	0xe
	.byte	0x5
	.4byte	0x48
	.4byte	0x9f6
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF113
	.byte	0x14
	.byte	0x5
	.4byte	0x48
	.4byte	0xa10
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF114
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xa2f
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x12
	.4byte	.LASF115
	.byte	0xd
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0xa50
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x30
	.byte	0x8
	.uleb128 0xc
	.4byte	0xa55
	.uleb128 0x31
	.uleb128 0x12
	.4byte	.LASF116
	.byte	0xc
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa75
	.uleb128 0x7
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0x48
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x12
	.4byte	.LASF117
	.byte	0xb
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa8a
	.uleb128 0x7
	.4byte	0xb8
	.byte	0
	.uleb128 0x32
	.4byte	.LASF118
	.byte	0x1
	.byte	0x13
	.byte	0xd
	.4byte	0xa9c
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x13
	.4byte	.LASF121
	.2byte	0x374
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xae6
	.uleb128 0x9
	.4byte	.LASF119
	.2byte	0x374
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x9
	.4byte	.LASF120
	.2byte	0x374
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x375
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF122
	.2byte	0x360
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb13
	.uleb128 0x9
	.4byte	.LASF52
	.2byte	0x360
	.byte	0x22
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF123
	.2byte	0x33b
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb7d
	.uleb128 0x9
	.4byte	.LASF124
	.2byte	0x33b
	.byte	0x20
	.4byte	0x47e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x9
	.4byte	.LASF125
	.2byte	0x33b
	.byte	0x35
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x9
	.4byte	.LASF126
	.2byte	0x33b
	.byte	0x4b
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x1
	.string	"i"
	.2byte	0x33e
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF127
	.2byte	0x334
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbc9
	.uleb128 0x9
	.4byte	.LASF52
	.2byte	0x334
	.byte	0x1c
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xa
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x1
	.string	"i"
	.2byte	0x336
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF129
	.2byte	0x30e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc50
	.uleb128 0x8
	.string	"fd"
	.2byte	0x30e
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x9
	.4byte	.LASF128
	.2byte	0x30e
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x30f
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x311
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x321
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.uleb128 0x1
	.string	"i"
	.2byte	0x328
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF130
	.2byte	0x2fc
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcac
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2fc
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2fd
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x303
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x307
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xe
	.4byte	.LASF131
	.2byte	0x2e7
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd45
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2e7
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.string	"buf"
	.2byte	0x2e7
	.byte	0x1f
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x9
	.4byte	.LASF132
	.2byte	0x2e7
	.byte	0x2b
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2e8
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x2ee
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x2f2
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF133
	.2byte	0x2f3
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.4byte	.LASF134
	.2byte	0x2f6
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xe
	.4byte	.LASF135
	.2byte	0x2ba
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdd4
	.uleb128 0x9
	.4byte	.LASF136
	.2byte	0x2ba
	.byte	0x19
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2bb
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF137
	.2byte	0x2bd
	.byte	0xa
	.4byte	0xdd4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x2cb
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"di"
	.2byte	0x2d0
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0xa
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"i"
	.2byte	0x2d4
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0xde4
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x7f
	.byte	0
	.uleb128 0xe
	.4byte	.LASF138
	.2byte	0x28f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe6c
	.uleb128 0x8
	.string	"fd"
	.2byte	0x28f
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x9
	.4byte	.LASF85
	.2byte	0x28f
	.byte	0x1d
	.4byte	0x483
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x28f
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x291
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x29a
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xa
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x1
	.string	"i"
	.2byte	0x2a0
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF139
	.2byte	0x25d
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf01
	.uleb128 0x8
	.string	"fd"
	.2byte	0x25d
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x9
	.4byte	.LASF85
	.2byte	0x25d
	.byte	0x1c
	.4byte	0x483
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x25d
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x25f
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x268
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x277
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x1
	.string	"i"
	.2byte	0x278
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF140
	.2byte	0x21a
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf93
	.uleb128 0x8
	.string	"fd1"
	.2byte	0x21a
	.byte	0x15
	.4byte	0xf93
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.string	"fd2"
	.2byte	0x21a
	.byte	0x1f
	.4byte	0xf93
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x21b
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x21d
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1d
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0xf7f
	.uleb128 0x1
	.string	"i"
	.2byte	0x21f
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x24
	.4byte	.LLRL2
	.uleb128 0x1
	.string	"i"
	.2byte	0x239
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x48
	.uleb128 0xe
	.4byte	.LASF141
	.2byte	0x20d
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfd8
	.uleb128 0x8
	.string	"fd"
	.2byte	0x20d
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x20f
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	.LASF142
	.2byte	0x201
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1018
	.uleb128 0x8
	.string	"fd"
	.2byte	0x201
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x203
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	.LASF143
	.2byte	0x1f4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1058
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1f4
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x1f6
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF144
	.2byte	0x1e0
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1085
	.uleb128 0x9
	.4byte	.LASF52
	.2byte	0x1e0
	.byte	0x1c
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF145
	.2byte	0x1d5
	.byte	0xe
	.4byte	0x498
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10b7
	.uleb128 0x5
	.4byte	.LASF125
	.2byte	0x1d7
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	.LASF146
	.2byte	0x1bf
	.byte	0xf
	.4byte	0x611
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1104
	.uleb128 0x1
	.string	"p"
	.2byte	0x1c1
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x1cd
	.byte	0xb
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x1ce
	.byte	0xb
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF148
	.2byte	0x1b6
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x112f
	.uleb128 0x8
	.string	"p"
	.2byte	0x1b6
	.byte	0x1d
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF149
	.2byte	0x1ad
	.byte	0xe
	.4byte	0x498
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x115f
	.uleb128 0x1
	.string	"p"
	.2byte	0x1af
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF150
	.2byte	0x1a7
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x118a
	.uleb128 0x8
	.string	"p"
	.2byte	0x1a7
	.byte	0x1e
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF151
	.2byte	0x19c
	.byte	0xf
	.4byte	0x611
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11ba
	.uleb128 0x1
	.string	"p"
	.2byte	0x19e
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x33
	.4byte	.LASF199
	.byte	0x1
	.2byte	0x188
	.byte	0x6
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x125a
	.uleb128 0x1d
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0x121b
	.uleb128 0x1
	.string	"i"
	.2byte	0x18d
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"p"
	.2byte	0x18e
	.byte	0x17
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"i"
	.2byte	0x194
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x1
	.string	"p"
	.2byte	0x195
	.byte	0x16
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x25
	.4byte	.LASF152
	.2byte	0x174
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12cd
	.uleb128 0x8
	.string	"f"
	.2byte	0x174
	.byte	0x27
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.string	"o"
	.2byte	0x174
	.byte	0x37
	.4byte	0x47e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x175
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x175
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x1
	.string	"i"
	.2byte	0x176
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x25
	.4byte	.LASF153
	.2byte	0x166
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x133e
	.uleb128 0x8
	.string	"f"
	.2byte	0x166
	.byte	0x24
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.string	"o"
	.2byte	0x166
	.byte	0x34
	.4byte	0x47e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x167
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x34
	.4byte	.LLRL0
	.4byte	0x132a
	.uleb128 0x1
	.string	"i"
	.2byte	0x169
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x24
	.4byte	.LLRL1
	.uleb128 0x1
	.string	"i"
	.2byte	0x16b
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x35
	.4byte	.LASF169
	.byte	0x1
	.2byte	0x163
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x136f
	.uleb128 0x8
	.string	"f"
	.2byte	0x163
	.byte	0x23
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF154
	.2byte	0x14b
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13cb
	.uleb128 0x9
	.4byte	.LASF33
	.2byte	0x14b
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x1
	.string	"ip"
	.2byte	0x14c
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xa
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x1
	.string	"i"
	.2byte	0x152
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF155
	.2byte	0x131
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1461
	.uleb128 0x9
	.4byte	.LASF136
	.2byte	0x131
	.byte	0x22
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x137
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x5
	.4byte	.LASF156
	.2byte	0x13b
	.byte	0xa
	.4byte	0x1461
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x5
	.4byte	.LASF157
	.2byte	0x13d
	.byte	0xb
	.4byte	0x483
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x5
	.4byte	.LASF158
	.2byte	0x13e
	.byte	0xe
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xa
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x5
	.4byte	.LASF159
	.2byte	0x142
	.byte	0x12
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x1475
	.uleb128 0x36
	.4byte	0xa5
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xe
	.4byte	.LASF160
	.2byte	0x11c
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1524
	.uleb128 0x9
	.4byte	.LASF44
	.2byte	0x11c
	.byte	0x24
	.4byte	0x1524
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x9
	.4byte	.LASF34
	.2byte	0x11c
	.byte	0x38
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x11d
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF161
	.2byte	0x11e
	.byte	0xa
	.4byte	0x1529
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.string	"de"
	.2byte	0x122
	.byte	0x18
	.4byte	0x1539
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x5
	.4byte	.LASF162
	.2byte	0x123
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x1
	.string	"i"
	.2byte	0x124
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x13a
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x1539
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xe
	.byte	0
	.uleb128 0xc
	.4byte	0x1a5
	.uleb128 0x13
	.4byte	.LASF163
	.2byte	0x104
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1613
	.uleb128 0x8
	.string	"ip"
	.2byte	0x104
	.byte	0x1f
	.4byte	0x1524
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x9
	.4byte	.LASF164
	.2byte	0x104
	.byte	0x2c
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x8
	.string	"buf"
	.2byte	0x104
	.byte	0x3d
	.4byte	0x813
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x9
	.4byte	.LASF18
	.2byte	0x104
	.byte	0x4b
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF165
	.2byte	0x105
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x106
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x107
	.byte	0xe
	.4byte	0x813
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x5
	.4byte	.LASF166
	.2byte	0x10a
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF167
	.2byte	0x10b
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.4byte	.LASF134
	.2byte	0x10c
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF168
	.2byte	0x10f
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x37
	.4byte	.LASF170
	.byte	0x1
	.byte	0xe4
	.byte	0x11
	.4byte	0x86
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16ec
	.uleb128 0xd
	.string	"ip"
	.byte	0xe4
	.byte	0x2e
	.4byte	0x1524
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xd
	.string	"idx"
	.byte	0xe4
	.byte	0x3b
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1d
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x1685
	.uleb128 0x4
	.4byte	.LASF171
	.byte	0xea
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.4byte	.LASF162
	.byte	0xed
	.byte	0x13
	.4byte	0x16ec
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0xa
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF172
	.byte	0xf2
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF173
	.byte	0xf3
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF174
	.byte	0xf5
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.4byte	.LASF175
	.byte	0xf9
	.byte	0x13
	.4byte	0x16ec
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF176
	.byte	0xfa
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF177
	.byte	0xff
	.byte	0x13
	.4byte	0x16ec
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x86
	.uleb128 0x1f
	.4byte	.LASF178
	.byte	0xd2
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1762
	.uleb128 0x20
	.4byte	.LASF33
	.byte	0xd2
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x20
	.4byte	.LASF179
	.byte	0xd2
	.byte	0x2f
	.4byte	0x1524
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF180
	.byte	0xd9
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF181
	.byte	0xdb
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF164
	.byte	0xdd
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x15
	.string	"dip"
	.byte	0xe0
	.byte	0x14
	.4byte	0x1524
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x38
	.4byte	.LASF200
	.byte	0x1
	.byte	0xcd
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1f
	.4byte	.LASF182
	.byte	0xc1
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17b5
	.uleb128 0xd
	.string	"blk"
	.byte	0xc1
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xd
	.string	"dst"
	.byte	0xc1
	.byte	0x25
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x39
	.4byte	.LASF183
	.byte	0x1
	.byte	0xa8
	.byte	0xd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17f0
	.uleb128 0x20
	.4byte	.LASF93
	.byte	0xa8
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xd
	.string	"dst"
	.byte	0xa8
	.byte	0x34
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3a
	.4byte	.LASF184
	.byte	0x1
	.byte	0xa0
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1836
	.uleb128 0xd
	.string	"f0"
	.byte	0xa0
	.byte	0x27
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xd
	.string	"f1"
	.byte	0xa0
	.byte	0x33
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xd
	.string	"f2"
	.byte	0xa0
	.byte	0x3f
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF185
	.byte	0x6c
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1920
	.uleb128 0x4
	.4byte	.LASF186
	.byte	0x79
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x15
	.string	"st"
	.byte	0x7d
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF187
	.byte	0x85
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF188
	.byte	0x86
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.4byte	.LASF189
	.byte	0x8b
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.4byte	.LASF190
	.byte	0x8c
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF191
	.byte	0x8d
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.4byte	.LASF192
	.byte	0x8e
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.4byte	.LASF193
	.byte	0x8f
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.4byte	.LASF194
	.byte	0x99
	.byte	0xe
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0xa
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x15
	.string	"s"
	.byte	0x6e
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF195
	.byte	0x6f
	.byte	0x12
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF196
	.byte	0x1
	.byte	0x6a
	.byte	0x18
	.4byte	0x86
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x195b
	.uleb128 0xd
	.string	"b"
	.byte	0x6a
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xd
	.string	"o"
	.byte	0x6a
	.byte	0x31
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x3c
	.4byte	.LASF201
	.byte	0x1
	.byte	0x69
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.string	"b"
	.byte	0x69
	.byte	0x22
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xd
	.string	"o"
	.byte	0x69
	.byte	0x2d
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xd
	.string	"v"
	.byte	0x69
	.byte	0x38
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
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
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x3
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
	.uleb128 0x4
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
	.uleb128 0x5
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
	.uleb128 0x6
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x7
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
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
	.uleb128 0x9
	.uleb128 0x5
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
	.uleb128 0xa
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
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
	.uleb128 0xe
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
	.uleb128 0xf
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
	.uleb128 0x10
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
	.uleb128 0x11
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0x13
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
	.uleb128 0x14
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
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
	.uleb128 0x16
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
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
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x18
	.byte	0
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
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1d
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
	.uleb128 0x1e
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
	.uleb128 0xb
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
	.uleb128 0x1f
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
	.uleb128 0x20
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
	.uleb128 0x21
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 4
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x23
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x24
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x25
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 13
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
	.uleb128 0x26
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
	.uleb128 0x27
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
	.uleb128 0x28
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x29
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
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
	.uleb128 0x2a
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x2b
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
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2c
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
	.uleb128 0x88
	.uleb128 0x5
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2d
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2e
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2f
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
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x30
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x31
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x32
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
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
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
	.uleb128 0x34
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x35
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x36
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x37
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x38
	.uleb128 0x2e
	.byte	0
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
	.uleb128 0x7c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x39
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
	.uleb128 0x3a
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
	.uleb128 0x3b
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
	.uleb128 0x3c
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
	.uleb128 .LBB11-.Ltext0
	.uleb128 .LBE11-.Ltext0
	.byte	0x4
	.uleb128 .LBB13-.Ltext0
	.uleb128 .LBE13-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB12-.Ltext0
	.uleb128 .LBE12-.Ltext0
	.byte	0x4
	.uleb128 .LBB14-.Ltext0
	.uleb128 .LBE14-.Ltext0
	.byte	0
.LLRL2:
	.byte	0x4
	.uleb128 .LBB21-.Ltext0
	.uleb128 .LBE21-.Ltext0
	.byte	0x4
	.uleb128 .LBB22-.Ltext0
	.uleb128 .LBE22-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF109:
	.string	"printf"
.LASF132:
	.string	"count"
.LASF170:
	.string	"inode_blockno"
.LASF191:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF64:
	.string	"free_next"
.LASF113:
	.string	"strcmp"
.LASF15:
	.string	"size_t"
.LASF182:
	.string	"read_block"
.LASF14:
	.string	"uintptr_t"
.LASF45:
	.string	"stack_top"
.LASF90:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF83:
	.string	"gActiveProc"
.LASF173:
	.string	"dbl_index1"
.LASF100:
	.string	"dma_buf"
.LASF145:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF200:
	.string	"read_superblock"
.LASF144:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF111:
	.string	"strncpy"
.LASF117:
	.string	"kalloc_pages"
.LASF136:
	.string	"path"
.LASF53:
	.string	"process_kalloc_address"
.LASF171:
	.string	"indirect_blk"
.LASF52:
	.string	"file_table"
.LASF162:
	.string	"entries"
.LASF60:
	.string	"pipe"
.LASF138:
	.string	"pipewrite"
.LASF39:
	.string	"context_t"
.LASF56:
	.string	"next"
.LASF104:
	.string	"gFreePipes"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF50:
	.string	"program"
.LASF77:
	.string	"FK_STDIN"
.LASF193:
	.string	"npages"
.LASF25:
	.string	"superblock"
.LASF159:
	.string	"next_inum"
.LASF44:
	.string	"parent"
.LASF194:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF110:
	.string	"strtok"
.LASF76:
	.string	"num_linked_file"
.LASF98:
	.string	"aidx"
.LASF143:
	.string	"is_pipe"
.LASF124:
	.string	"owner"
.LASF196:
	.string	"mr32"
.LASF154:
	.string	"dump_inode"
.LASF115:
	.string	"memcpy"
.LASF97:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF65:
	.string	"owner_processes"
.LASF80:
	.string	"FK_FILE"
.LASF140:
	.string	"pipe_open"
.LASF189:
	.string	"sz_desc"
.LASF84:
	.string	"virtq_desc"
.LASF164:
	.string	"offset"
.LASF106:
	.string	"panic"
.LASF128:
	.string	"massive"
.LASF92:
	.string	"reserved"
.LASF102:
	.string	"gPipes"
.LASF123:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF38:
	.string	"pagetable_t"
.LASF41:
	.string	"proc"
.LASF112:
	.string	"strlen"
.LASF114:
	.string	"strncmp"
.LASF71:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF130:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF142:
	.string	"is_stdin"
.LASF72:
	.string	"write_open"
.LASF55:
	.string	"deleted"
.LASF34:
	.string	"name"
.LASF178:
	.string	"read_inode"
.LASF184:
	.string	"set_flags"
.LASF58:
	.string	"kind"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF198:
	.string	"yield"
.LASF129:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF54:
	.string	"num_process_kalloc_address"
.LASF121:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF190:
	.string	"sz_avail"
.LASF197:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF153:
	.string	"owner_add"
.LASF93:
	.string	"sector"
.LASF78:
	.string	"FK_STDOUT"
.LASF99:
	.string	"status_byte"
.LASF150:
	.string	"free_pipe"
.LASF155:
	.string	"path_lookup"
.LASF107:
	.string	"get_current_file_table"
.LASF156:
	.string	"copy"
.LASF195:
	.string	"base"
.LASF160:
	.string	"dir_lookup"
.LASF118:
	.string	"puts"
.LASF180:
	.string	"inodes_per_blk"
.LASF177:
	.string	"second_entries"
.LASF122:
	.string	"free_fs_table"
.LASF42:
	.string	"trapframe"
.LASF181:
	.string	"blkno"
.LASF47:
	.string	"memsz"
.LASF17:
	.string	"long double"
.LASF48:
	.string	"zombie"
.LASF147:
	.string	"user_va"
.LASF95:
	.string	"desc"
.LASF88:
	.string	"virtq_used_elem"
.LASF32:
	.string	"dirent"
.LASF31:
	.string	"addrs"
.LASF163:
	.string	"read_data"
.LASF148:
	.string	"free_file"
.LASF105:
	.string	"gFreeFiles"
.LASF73:
	.string	"nreader"
.LASF82:
	.string	"gProc"
.LASF174:
	.string	"dindirect_blk"
.LASF120:
	.string	"newfd"
.LASF139:
	.string	"piperead"
.LASF172:
	.string	"dbl_index0"
.LASF158:
	.string	"current_inum"
.LASF59:
	.string	"used"
.LASF157:
	.string	"token"
.LASF179:
	.string	"dest"
.LASF134:
	.string	"to_read"
.LASF108:
	.string	"strncat"
.LASF85:
	.string	"addr"
.LASF89:
	.string	"virtq_avail"
.LASF33:
	.string	"inum"
.LASF49:
	.string	"pagetable"
.LASF5:
	.string	"int32_t"
.LASF7:
	.string	"unsigned char"
.LASF21:
	.string	"nlog"
.LASF67:
	.string	"spipe"
.LASF126:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF57:
	.string	"file"
.LASF37:
	.string	"pte_t"
.LASF20:
	.string	"ninodes"
.LASF169:
	.string	"owner_cap"
.LASF168:
	.string	"disk_blk"
.LASF161:
	.string	"namebuf"
.LASF166:
	.string	"blk_idx"
.LASF10:
	.string	"uint32_t"
.LASF69:
	.string	"nread"
.LASF199:
	.string	"file_system_init"
.LASF40:
	.string	"mepc"
.LASF103:
	.string	"gFiles"
.LASF186:
	.string	"devfeat"
.LASF35:
	.string	"char"
.LASF201:
	.string	"mw32"
.LASF192:
	.string	"sz_total"
.LASF91:
	.string	"virtio_blk_req"
.LASF135:
	.string	"fs_open"
.LASF51:
	.string	"xstatus"
.LASF176:
	.string	"first_blk"
.LASF66:
	.string	"num_owner_process"
.LASF183:
	.string	"virtio_blk_read"
.LASF70:
	.string	"nwrite"
.LASF81:
	.string	"FK_PIPE"
.LASF68:
	.string	"data"
.LASF43:
	.string	"context"
.LASF26:
	.string	"dinode"
.LASF151:
	.string	"alloc_pipe"
.LASF46:
	.string	"vaddr"
.LASF79:
	.string	"FK_STDERR"
.LASF167:
	.string	"blk_off"
.LASF119:
	.string	"oldfd"
.LASF116:
	.string	"memset"
.LASF149:
	.string	"alloc_file"
.LASF75:
	.string	"linked_file"
.LASF74:
	.string	"nwriter"
.LASF146:
	.string	"pipealloc"
.LASF131:
	.string	"fs_read"
.LASF187:
	.string	"devQ"
.LASF185:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF152:
	.string	"owner_remove"
.LASF61:
	.string	"pipe_used"
.LASF86:
	.string	"flags"
.LASF96:
	.string	"avail"
.LASF87:
	.string	"ring"
.LASF101:
	.string	"block_buf"
.LASF94:
	.string	"vbase"
.LASF62:
	.string	"read_pipe"
.LASF141:
	.string	"is_stdout"
.LASF19:
	.string	"nblocks"
.LASF63:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF188:
	.string	"drvQ"
.LASF24:
	.string	"bmapstart"
.LASF127:
	.string	"fs_exit"
.LASF165:
	.string	"left"
.LASF137:
	.string	"path2"
.LASF125:
	.string	"result"
.LASF133:
	.string	"remaining"
.LASF175:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"fs.c"
.LASF1:
	.string	"/Users/ab25cq/comelang/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
