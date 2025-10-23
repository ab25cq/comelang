	.file	"fs.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "fs.c"
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
.LFB2:
	.file 1 "fs.c"
	.loc 1 129 59
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
	.loc 1 129 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 129 62
	mv	a4,a5
	.loc 1 129 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 129 91
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
.LFE2:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB3:
	.loc 1 130 60
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
	.loc 1 130 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 130 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 130 97
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
.LFB4:
	.loc 1 133 1
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
	.loc 1 134 13
	sw	zero,-20(s0)
	.loc 1 134 5
	j	.L5
.L9:
.LBB3:
	.loc 1 135 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 135 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 136 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 136 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 137 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 137 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 137 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 137 58
	j	.L8
.L22:
	.loc 1 136 47
	nop
.L7:
.LBE3:
	.loc 1 134 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 134 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 139 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 139 7
	bne	a5,zero,.L10
	.loc 1 139 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 139 54
	j	.L11
.L10:
	.loc 1 140 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 140 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 140 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 140 70
	j	.L13
.L12:
	.loc 1 142 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 143 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 145 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 147 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 149 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 149 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 150 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 151 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 151 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 151 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 152 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 152 46
	j	.L15
.L14:
	.loc 1 155 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 156 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 157 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 158 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 159 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 160 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 161 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 161 7
	beq	a5,zero,.L17
	.loc 1 161 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 161 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 161 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 161 65
	j	.L19
.L18:
	.loc 1 163 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 163 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 164 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 164 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 165 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 165 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 166 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 166 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 167 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 167 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 169 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 169 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 170 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 170 8
	bne	a5,zero,.L20
	.loc 1 170 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 170 57
	j	.L21
.L20:
	.loc 1 171 5
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
	.loc 1 173 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 174 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 174 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 175 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 175 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 177 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 177 14
	sd	a5,-96(s0)
	.loc 1 178 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 179 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 179 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 179 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 181 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 182 1
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
.LFE4:
	.size	virtio_blk_init, .-virtio_blk_init
	.align	1
	.type	set_flags, @function
set_flags:
.LFB5:
	.loc 1 184 66
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
	.loc 1 185 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 185 19
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
	.loc 1 186 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 186 19
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
	.loc 1 187 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 187 19
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
	.loc 1 188 1
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
	.size	set_flags, .-set_flags
	.local	req
	.comm	req,16,8
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB6:
	.loc 1 196 1
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
	.loc 1 197 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 198 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 199 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 200 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 202 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 202 20
	lla	a4,req
	.loc 1 202 18
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
	.loc 1 202 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 202 51
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
	.loc 1 202 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 202 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 203 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 203 20
	lla	a4,dma_buf
	.loc 1 203 18
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
	.loc 1 203 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 203 51
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
	.loc 1 203 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 203 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 204 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 204 20
	lla	a4,status_byte
	.loc 1 204 18
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
	.loc 1 204 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 204 57
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
	.loc 1 206 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 208 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 208 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 208 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 209 5
	fence	rw,rw
	.loc 1 210 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 210 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 210 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 210 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 212 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 214 10
	j	.L25
.L26:
	.loc 1 215 9
	fence	rw,rw
.L25:
	.loc 1 214 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 217 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 218 1
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
	.size	virtio_blk_read, .-virtio_blk_read
	.local	bcache
	.comm	bcache,16896,8
	.local	bcache_time
	.comm	bcache_time,4,4
	.local	bcache_hits
	.comm	bcache_hits,4,4
	.local	bcache_misses
	.comm	bcache_misses,4,4
	.align	1
	.globl	bcache_init
	.type	bcache_init, @function
bcache_init:
.LFB7:
	.loc 1 240 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
.LBB4:
	.loc 1 241 14
	sw	zero,-20(s0)
	.loc 1 241 5
	j	.L28
.L29:
	.loc 1 242 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 243 26
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,516(a5)
	.loc 1 244 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 245 28
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,524(a5)
	.loc 1 241 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L28:
	.loc 1 241 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L29
.LBE4:
	.loc 1 247 17
	lla	a5,bcache_hits
	sw	zero,0(a5)
	.loc 1 248 19
	lla	a5,bcache_misses
	sw	zero,0(a5)
	.loc 1 249 1
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
.LFE7:
	.size	bcache_init, .-bcache_init
	.section	.rodata
	.align	3
.LC5:
	.string	"Block cache stats: hits=%u misses=%u hit_rate=%u%%\n"
	.text
	.align	1
	.globl	bcache_stats
	.type	bcache_stats, @function
bcache_stats:
.LFB8:
	.loc 1 252 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 253 5
	lla	a5,bcache_hits
	lw	a1,0(a5)
	lla	a5,bcache_misses
	lw	a2,0(a5)
	.loc 1 255 25
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 253 5
	beq	a5,zero,.L31
	.loc 1 255 61
	lla	a5,bcache_hits
	lw	a4,0(a5)
	li	a5,100
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 255 82
	lla	a5,bcache_hits
	lw	a3,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 253 5 discriminator 1
	divuw	a5,a4,a5
	sext.w	a5,a5
	j	.L32
.L31:
	.loc 1 253 5 is_stmt 0 discriminator 2
	li	a5,0
.L32:
	.loc 1 253 5 discriminator 4
	mv	a3,a5
	lla	a0,.LC5
	call	printf
	.loc 1 256 1 is_stmt 1
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
.LFE8:
	.size	bcache_stats, .-bcache_stats
	.align	1
	.type	bcache_evict, @function
bcache_evict:
.LFB9:
	.loc 1 260 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 261 9
	li	a5,-1
	sw	a5,-20(s0)
	.loc 1 262 14
	li	a5,-1
	sw	a5,-24(s0)
.LBB5:
	.loc 1 265 14
	sw	zero,-28(s0)
	.loc 1 265 5
	j	.L34
.L36:
	.loc 1 266 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 266 12
	bne	a5,zero,.L35
	.loc 1 266 47 discriminator 1
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	.loc 1 266 35 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L35
	.loc 1 267 20
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	sw	a5,-24(s0)
	.loc 1 268 20
	lw	a5,-28(s0)
	sw	a5,-20(s0)
.L35:
	.loc 1 265 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L34:
	.loc 1 265 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L36
.LBE5:
	.loc 1 272 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L37
	.loc 1 274 27
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 274 12
	beq	a5,zero,.L38
	.loc 1 274 51 discriminator 1
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 274 34 discriminator 1
	beq	a5,zero,.L38
	.loc 1 275 44
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 275 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 275 66
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 275 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L38:
	.loc 1 277 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 278 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
.L37:
	.loc 1 281 12
	lw	a5,-20(s0)
	.loc 1 282 1
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
.LFE9:
	.size	bcache_evict, .-bcache_evict
	.align	1
	.type	bcache_get, @function
bcache_get:
.LFB10:
	.loc 1 286 1
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
	.loc 1 287 16
	lla	a5,bcache_time
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_time
	sw	a4,0(a5)
.LBB6:
	.loc 1 290 14
	sw	zero,-20(s0)
	.loc 1 290 5
	j	.L41
.L44:
	.loc 1 291 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 291 12
	lw	a4,-36(s0)
	sext.w	a4,a4
	bne	a4,a5,.L42
	.loc 1 292 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 292 29
	addiw	a5,a5,1
	sext.w	a3,a5
	lla	a2,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,516(a5)
	.loc 1 293 32
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 1 294 24
	lla	a5,bcache_hits
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_hits
	sw	a4,0(a5)
	.loc 1 295 20
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	j	.L43
.L42:
	.loc 1 290 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L41:
	.loc 1 290 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L44
.LBE6:
	.loc 1 300 18
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_misses
	sw	a4,0(a5)
	.loc 1 301 9
	li	a5,-1
	sw	a5,-24(s0)
.LBB7:
	.loc 1 302 14
	sw	zero,-28(s0)
	.loc 1 302 5
	j	.L45
.L48:
	.loc 1 303 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 303 12
	bne	a5,zero,.L46
	.loc 1 304 18
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 305 13
	j	.L47
.L46:
	.loc 1 302 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L45:
	.loc 1 302 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L48
.L47:
.LBE7:
	.loc 1 310 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L49
	.loc 1 311 16
	call	bcache_evict
	mv	a5,a0
	sw	a5,-24(s0)
.L49:
	.loc 1 314 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L50
	.loc 1 316 14
	sw	zero,-24(s0)
	.loc 1 317 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 317 12
	beq	a5,zero,.L50
	.loc 1 318 42
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 318 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 318 62
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 318 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L50:
	.loc 1 323 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 324 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 325 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	li	a4,1
	sw	a4,516(a5)
	.loc 1 326 27
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 1 327 5
	lwu	a3,-36(s0)
	.loc 1 327 40
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 327 5
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_read
	.loc 1 329 12
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.L43:
	.loc 1 330 1
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
.LFE10:
	.size	bcache_get, .-bcache_get
	.align	1
	.type	bcache_release, @function
bcache_release:
.LFB11:
	.loc 1 334 1
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
	.loc 1 335 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 335 8
	beq	a5,zero,.L53
	.loc 1 336 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 336 19
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,516(a5)
.L53:
	.loc 1 338 1
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
.LFE11:
	.size	bcache_release, .-bcache_release
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB12:
	.loc 1 341 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 342 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 343 19
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 343 5
	li	a2,512
	mv	a1,a5
	ld	a0,-48(s0)
	call	memcpy
	.loc 1 344 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 345 1
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
.LFE12:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB13:
	.loc 1 348 1
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
	.loc 1 349 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 350 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 351 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 352 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 354 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 356 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 356 20
	lla	a4,req
	.loc 1 356 18
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
	.loc 1 356 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 356 55
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
	.loc 1 356 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 356 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 357 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 357 20
	lla	a4,dma_buf
	.loc 1 357 18
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
	.loc 1 357 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 357 55
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
	.loc 1 357 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 357 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 358 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 358 20
	lla	a4,status_byte
	.loc 1 358 18
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
	.loc 1 358 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 358 56
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
	.loc 1 360 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 362 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 362 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 362 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 363 5
	fence	rw,rw
	.loc 1 364 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 364 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 364 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 364 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 366 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 368 10
	j	.L56
.L57:
	.loc 1 369 9
	fence	rw,rw
.L56:
	.loc 1 368 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L57
	.loc 1 370 1
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
.LFE13:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB14:
	.loc 1 373 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 374 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 375 14
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 375 5
	li	a2,512
	ld	a1,-48(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 376 15
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 377 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 378 1
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
.LFE14:
	.size	write_block, .-write_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	fs_now, @function
fs_now:
.LFB15:
	.loc 1 389 37
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 389 51
 #APP
# 389 "fs.c" 1
	csrr a5, time
# 0 "" 2
 #NO_APP
	sd	a5,-24(s0)
	.loc 1 389 128
	ld	a4,-24(s0)
	lla	a5,.LC6
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 1 389 115
	sext.w	a4,a5
	.loc 1 389 113
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 389 143
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
.LFE15:
	.size	fs_now, .-fs_now
	.align	1
	.type	check_perm, @function
check_perm:
.LFB16:
	.loc 1 397 1
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
	.loc 1 398 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 398 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 399 23
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 399 14
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 400 9
	li	a5,6
	sw	a5,-20(s0)
	.loc 1 401 10
	ld	a5,-40(s0)
	lhu	a4,1002(a5)
	.loc 1 401 21
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 401 8
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L62
	.loc 1 401 34 discriminator 1
	li	a5,6
	sw	a5,-20(s0)
	j	.L63
.L62:
	.loc 1 402 15
	ld	a5,-40(s0)
	lhu	a4,1004(a5)
	.loc 1 402 26
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 402 13
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L64
	.loc 1 402 39 discriminator 1
	li	a5,3
	sw	a5,-20(s0)
	j	.L63
.L64:
.LBB8:
	.loc 1 404 13
	sw	zero,-24(s0)
.LBB9:
	.loc 1 405 18
	sw	zero,-28(s0)
	.loc 1 405 9
	j	.L65
.L68:
	.loc 1 405 54 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-28(s0)
	addi	a5,a5,504
	slli	a5,a5,1
	add	a5,a4,a5
	lhu	a4,0(a5)
	.loc 1 405 63 discriminator 5
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 405 41 discriminator 5
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L66
	.loc 1 405 78 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 405 82
	j	.L67
.L66:
	.loc 1 405 34 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L65:
	.loc 1 405 25 discriminator 4
	ld	a5,-40(s0)
	lw	a5,1024(a5)
	.loc 1 405 23 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L68
.L67:
.LBE9:
	.loc 1 406 28
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L69
	.loc 1 406 28 is_stmt 0 discriminator 1
	li	a5,3
	j	.L70
.L69:
	.loc 1 406 28 discriminator 2
	li	a5,0
.L70:
	.loc 1 406 15 is_stmt 1 discriminator 4
	sw	a5,-20(s0)
.L63:
.LBE8:
	.loc 1 408 23
	lw	a5,-20(s0)
	lw	a4,-44(s0)
	srlw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 408 9
	andi	a5,a5,7
	sw	a5,-48(s0)
	.loc 1 410 15
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 410 8
	beq	a5,zero,.L71
	.loc 1 410 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 410 26 discriminator 1
	bne	a5,zero,.L71
	.loc 1 410 50 discriminator 2
	li	a5,0
	.loc 1 410 50 is_stmt 0
	j	.L72
.L71:
	.loc 1 411 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 411 8
	beq	a5,zero,.L73
	.loc 1 411 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 411 26 discriminator 1
	bne	a5,zero,.L73
	.loc 1 411 50 discriminator 2
	li	a5,0
	.loc 1 411 50 is_stmt 0
	j	.L72
.L73:
	.loc 1 412 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 412 8
	beq	a5,zero,.L74
	.loc 1 412 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 412 26 discriminator 1
	bne	a5,zero,.L74
	.loc 1 412 50 discriminator 2
	li	a5,0
	.loc 1 412 50 is_stmt 0
	j	.L72
.L74:
	.loc 1 413 12 is_stmt 1
	li	a5,1
.L72:
	.loc 1 414 1
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
.LFE16:
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB17:
	.loc 1 416 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 417 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 418 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 419 1
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
.LFE17:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB18:
	.loc 1 421 53
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
	.loc 1 422 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L77
	.loc 1 422 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 422 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L78
.L77:
	.loc 1 423 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 424 9
	j	.L76
.L78:
	.loc 1 428 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 430 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 430 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 430 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 430 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 432 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 432 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 432 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 434 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 435 26
	lwu	a4,-28(s0)
	.loc 1 435 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 436 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L76:
	.loc 1 437 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE18:
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB19:
	.loc 1 442 42
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
	sw	a5,-20(s0)
	.loc 1 442 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 442 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 442 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 442 77
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
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB20:
	.loc 1 445 1
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
	sw	a5,-564(s0)
	.loc 1 446 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L87
	.loc 1 446 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 446 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L87
	.loc 1 447 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 448 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 448 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 448 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 448 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 449 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 449 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 449 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 452 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 453 26
	lwu	a5,-28(s0)
	.loc 1 453 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 454 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 455 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L82
.L87:
	.loc 1 446 40
	nop
.L82:
	.loc 1 456 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE20:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB21:
	.loc 1 459 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 460 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 462 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 463 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 464 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 464 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 464 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 464 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 464 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 465 1
	mv	a0,a5
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE21:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB22:
	.loc 1 468 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 469 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 471 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 472 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 473 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 473 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 473 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 473 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 473 15
	slliw	a5,a5,24
	sraiw	a5,a5,24
	or	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 1 474 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 475 1
	nop
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE22:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB23:
	.loc 1 478 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 479 8
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L95
	.loc 1 480 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 482 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 483 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 484 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 484 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 484 28
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 484 22
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 484 15
	slliw	a5,a5,24
	sraiw	a5,a5,24
	not	a5,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	and	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 1 485 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L91
.L95:
	.loc 1 479 17
	nop
.L91:
	.loc 1 486 1
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE23:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB24:
	.loc 1 490 1
	.cfi_startproc
	addi	sp,sp,-608
	.cfi_def_cfa_offset 608
	sd	ra,600(sp)
	sd	s0,592(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,608
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-608(s0)
	sw	a5,-596(s0)
.LBB10:
	.loc 1 492 14
	sw	zero,-20(s0)
	.loc 1 492 5
	j	.L97
.L99:
	.loc 1 493 22
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 493 12
	beq	a5,zero,.L98
	.loc 1 494 13
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 495 26
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L98:
	.loc 1 492 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L97:
	.loc 1 492 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L99
.LBE10:
	.loc 1 500 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 1 500 8
	beq	a5,zero,.L100
.LBB11:
	.loc 1 501 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	sw	a5,-36(s0)
	.loc 1 502 9
	lw	a5,-36(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 503 19
	lla	a5,block_buf
	sd	a5,-48(s0)
.LBB12:
	.loc 1 504 18
	sw	zero,-24(s0)
	.loc 1 504 9
	j	.L101
.L103:
	.loc 1 505 21
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 505 16
	beq	a5,zero,.L102
	.loc 1 505 43 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 505 26 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L102:
	.loc 1 504 41 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L101:
	.loc 1 504 27 discriminator 1
	lw	a4,-24(s0)
	li	a5,127
	bleu	a4,a5,.L103
.LBE12:
	.loc 1 507 9
	lw	a5,-36(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 508 28
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L100:
.LBE11:
	.loc 1 512 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 1 512 8
	beq	a5,zero,.L104
.LBB13:
	.loc 1 513 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	sw	a5,-52(s0)
	.loc 1 514 9
	lw	a5,-52(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 515 19
	lla	a5,block_buf
	sd	a5,-64(s0)
.LBB14:
	.loc 1 516 18
	sw	zero,-28(s0)
	.loc 1 516 9
	j	.L105
.L112:
.LBB15:
	.loc 1 517 23
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 517 16
	beq	a5,zero,.L113
	.loc 1 518 34
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 518 22
	lw	a5,0(a5)
	sw	a5,-68(s0)
	.loc 1 520 13
	addi	a4,s0,-592
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 521 23
	addi	a5,s0,-592
	sd	a5,-80(s0)
.LBB16:
	.loc 1 522 22
	sw	zero,-32(s0)
	.loc 1 522 13
	j	.L108
.L110:
	.loc 1 523 27
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 523 20
	beq	a5,zero,.L109
	.loc 1 523 51 discriminator 1
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	.loc 1 523 32 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L109:
	.loc 1 522 45 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L108:
	.loc 1 522 31 discriminator 1
	lw	a4,-32(s0)
	li	a5,127
	bleu	a4,a5,.L110
.LBE16:
	.loc 1 525 13
	lw	a5,-68(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L111
.L113:
	.loc 1 517 28
	nop
.L111:
.LBE15:
	.loc 1 516 41 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L105:
	.loc 1 516 27 discriminator 1
	lw	a4,-28(s0)
	li	a5,127
	bleu	a4,a5,.L112
.LBE14:
	.loc 1 527 9
	lw	a5,-52(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 528 30
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L104:
.LBE13:
	.loc 1 531 14
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 1 532 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 533 1
	nop
	ld	ra,600(sp)
	.cfi_restore 1
	ld	s0,592(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 608
	addi	sp,sp,608
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE24:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB25:
	.loc 1 536 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 537 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 537 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 537 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 538 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 538 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB17:
	.loc 1 539 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 539 5
	j	.L115
.L118:
	.loc 1 540 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 540 12 discriminator 1
	bne	a5,zero,.L116
.LBB18:
	.loc 1 541 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 544 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 545 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 546 20
	lw	a5,-20(s0)
	j	.L117
.L116:
.LBE18:
	.loc 1 539 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L115:
	.loc 1 539 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 539 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L118
.LBE17:
	.loc 1 549 12
	li	a5,0
.L117:
	.loc 1 550 1
	mv	a0,a5
	ld	ra,536(sp)
	.cfi_restore 1
	ld	s0,528(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 544
	addi	sp,sp,544
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE25:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB26:
	.loc 1 552 64
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
	.loc 1 553 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L120
	.loc 1 555 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L121
.L120:
	.loc 1 556 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L122
.LBB19:
	.loc 1 558 18
	ld	a5,-88(s0)
	lw	a5,80(a5)
	sw	a5,-60(s0)
	.loc 1 559 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L123
	.loc 1 559 39 discriminator 1
	li	a5,0
	.loc 1 559 39 is_stmt 0
	j	.L121
.L123:
	.loc 1 560 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 561 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 562 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 562 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L121
.L122:
.LBE19:
.LBB20:
	.loc 1 565 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 566 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 567 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 569 18
	ld	a5,-88(s0)
	lw	a5,84(a5)
	sw	a5,-28(s0)
	.loc 1 570 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L124
	.loc 1 570 40 discriminator 1
	li	a5,0
	.loc 1 570 40 is_stmt 0
	j	.L121
.L124:
	.loc 1 572 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 573 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 574 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 574 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 575 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L125
	.loc 1 575 36 discriminator 1
	li	a5,0
	.loc 1 575 36 is_stmt 0
	j	.L121
.L125:
	.loc 1 578 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 579 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 580 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L121:
.LBE20:
	.loc 1 582 1
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
.LFE26:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB27:
	.loc 1 585 1
	.cfi_startproc
	addi	sp,sp,-1664
	.cfi_def_cfa_offset 1664
	sd	ra,1656(sp)
	sd	s0,1648(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1664
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-1664(s0)
	mv	a4,a2
	sw	a5,-1652(s0)
	mv	a5,a4
	sw	a5,-1656(s0)
	.loc 1 586 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L127
	.loc 1 587 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 587 12
	bne	a5,zero,.L128
.LBB21:
	.loc 1 588 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 589 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L129
	.loc 1 589 28 discriminator 1
	li	a5,0
	.loc 1 589 28 is_stmt 0
	j	.L143
.L129:
	.loc 1 590 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 1 591 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L128:
.LBE21:
	.loc 1 593 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L143
.L127:
	.loc 1 596 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L131
.LBB22:
	.loc 1 597 18
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	sw	a5,-20(s0)
	.loc 1 598 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L132
.LBB23:
	.loc 1 599 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 600 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L133
	.loc 1 600 29 discriminator 1
	li	a5,0
	.loc 1 600 29 is_stmt 0
	j	.L143
.L133:
	.loc 1 602 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,80(a5)
	.loc 1 603 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 604 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L132:
.LBE23:
	.loc 1 607 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 608 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 609 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 610 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 610 12
	bne	a5,zero,.L135
.LBB24:
	.loc 1 611 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 612 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L136
	.loc 1 612 29 discriminator 1
	li	a5,0
	.loc 1 612 29 is_stmt 0
	j	.L143
.L136:
	.loc 1 613 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 613 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 614 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L135:
.LBE24:
	.loc 1 616 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L143
.L131:
.LBE22:
	.loc 1 620 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 621 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 622 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 624 14
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	sw	a5,-24(s0)
	.loc 1 625 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L137
.LBB25:
	.loc 1 626 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 627 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L138
	.loc 1 627 25 discriminator 1
	li	a5,0
	.loc 1 627 25 is_stmt 0
	j	.L143
.L138:
	.loc 1 628 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,84(a5)
	.loc 1 629 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 630 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L137:
.LBE25:
	.loc 1 634 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 635 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 636 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 636 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 637 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L139
.LBB26:
	.loc 1 638 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 639 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L140
	.loc 1 639 25 discriminator 1
	li	a5,0
	.loc 1 639 25 is_stmt 0
	j	.L143
.L140:
	.loc 1 640 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 640 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 641 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 642 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L139:
.LBE26:
	.loc 1 646 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 647 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 648 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 648 8
	bne	a5,zero,.L141
.LBB27:
	.loc 1 649 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 650 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L142
	.loc 1 650 25 discriminator 1
	li	a5,0
	.loc 1 650 25 is_stmt 0
	j	.L143
.L142:
	.loc 1 651 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 651 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 652 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L141:
.LBE27:
	.loc 1 654 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L143:
	.loc 1 655 1
	mv	a0,a5
	ld	ra,1656(sp)
	.cfi_restore 1
	ld	s0,1648(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1664
	addi	sp,sp,1664
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB28:
	.loc 1 657 81
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
	.loc 1 658 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 659 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 660 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 662 11
	j	.L145
.L149:
.LBB28:
	.loc 1 663 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 664 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 665 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 666 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L146
	.loc 1 666 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L146:
	.loc 1 668 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 669 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L147
	.loc 1 670 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L148
.L147:
	.loc 1 672 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 673 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L148:
	.loc 1 675 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 676 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 677 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L145:
.LBE28:
	.loc 1 662 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L149
	.loc 1 679 1
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
.LFE28:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB29:
	.loc 1 681 62
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
	.loc 1 682 14
	sw	zero,-20(s0)
	.loc 1 685 11
	j	.L151
.L157:
.LBB29:
	.loc 1 686 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 687 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 688 13
	li	a5,32
	sw	a5,-36(s0)
.LBB30:
	.loc 1 689 18
	sw	zero,-24(s0)
	.loc 1 689 9
	j	.L152
.L156:
	.loc 1 690 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 690 22
	lhu	a5,0(a5)
	.loc 1 690 16
	beq	a5,zero,.L159
	.loc 1 691 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 691 34
	addi	a4,a5,2
	.loc 1 691 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 692 29
	sb	zero,-42(s0)
	.loc 1 693 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 693 16 discriminator 1
	bne	a5,zero,.L154
	.loc 1 694 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 694 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L158
.L159:
	.loc 1 690 34
	nop
.L154:
	.loc 1 689 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L152:
	.loc 1 689 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L156
.LBE30:
	.loc 1 697 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L151:
.LBE29:
	.loc 1 685 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 685 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L157
	.loc 1 699 12
	li	a5,0
.L158:
	.loc 1 700 1
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
.LFE29:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB30:
	.loc 1 704 40
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
	.loc 1 705 12
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 1 706 1
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
.LFE30:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC7:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB31:
	.loc 1 708 62
	.cfi_startproc
	addi	sp,sp,-1408
	.cfi_def_cfa_offset 1408
	sd	ra,1400(sp)
	sd	s0,1392(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1408
	.cfi_def_cfa 8, 0
	sd	a0,-1400(s0)
	mv	a5,a1
	sw	a5,-1404(s0)
	.loc 1 709 8
	lw	a5,-1404(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L163
	.loc 1 709 28 discriminator 1
	li	a5,0
	.loc 1 709 28 is_stmt 0
	j	.L187
.L163:
	.loc 1 710 8 is_stmt 1
	ld	a5,-1400(s0)
	beq	a5,zero,.L165
	.loc 1 710 22 discriminator 2
	ld	a5,-1400(s0)
	lbu	a5,0(a5)
	.loc 1 710 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L166
.L165:
	.loc 1 710 41 discriminator 3
	li	a5,0
	.loc 1 710 41 is_stmt 0
	j	.L187
.L166:
	.loc 1 711 9 is_stmt 1
	lla	a1,.LC7
	ld	a0,-1400(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 711 8 discriminator 1
	bne	a5,zero,.L167
	.loc 1 711 40 discriminator 1
	li	a5,1
	.loc 1 711 40 is_stmt 0
	j	.L187
.L167:
	.loc 1 714 5 is_stmt 1
	addi	a5,s0,-144
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 715 12
	lhu	a5,-144(s0)
	.loc 1 715 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L168
	.loc 1 715 35 discriminator 1
	li	a5,0
	.loc 1 715 35 is_stmt 0
	j	.L187
.L168:
	.loc 1 718 5 is_stmt 1
	addi	a5,s0,-400
	li	a2,255
	ld	a1,-1400(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 718 59 discriminator 1
	sb	zero,-145(s0)
	.loc 1 719 11
	addi	a5,s0,-400
	sd	a5,-24(s0)
	.loc 1 721 14
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 722 33
	li	a5,47
	sb	a5,-656(s0)
	.loc 1 722 50
	sb	zero,-655(s0)
	.loc 1 724 11
	j	.L169
.L186:
.LBB31:
	.loc 1 725 14
	sd	zero,-24(s0)
	.loc 1 726 16
	lhu	a5,-144(s0)
	.loc 1 726 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L170
	.loc 1 726 39 discriminator 1
	li	a5,0
	.loc 1 726 39 is_stmt 0
	j	.L187
.L170:
	.loc 1 728 14 is_stmt 1
	addi	a5,s0,-144
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 728 12 discriminator 1
	bne	a5,zero,.L172
	.loc 1 728 47 discriminator 1
	li	a5,0
	.loc 1 728 47 is_stmt 0
	j	.L187
.L172:
	.loc 1 729 25 is_stmt 1
	addi	a5,s0,-144
	ld	a1,-48(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 730 12
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L173
	.loc 1 730 31 discriminator 1
	li	a5,0
	.loc 1 730 31 is_stmt 0
	j	.L187
.L173:
	.loc 1 731 28 is_stmt 1
	addi	a4,s0,-1384
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 732 16
	lhu	a5,-1384(s0)
	.loc 1 732 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L174
.LBB32:
	.loc 1 735 24
	lw	a5,-1376(s0)
	.loc 1 735 17
	sw	a5,-32(s0)
	.loc 1 735 34
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L175
	.loc 1 735 61 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L175:
	.loc 1 736 13
	lw	a3,-32(s0)
	addi	a4,s0,-1296
	addi	a5,s0,-1384
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 737 21
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1280(a5)
	.loc 1 740 23
	sb	zero,-1168(s0)
	.loc 1 741 23
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 742 19
	j	.L176
.L178:
	.loc 1 743 27
	lbu	a5,-1168(s0)
	.loc 1 743 20
	beq	a5,zero,.L177
	.loc 1 743 68 discriminator 1
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 743 32 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L177:
	.loc 1 744 51
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 744 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 744 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 745 21
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L176:
	.loc 1 742 20
	ld	a5,-40(s0)
	bne	a5,zero,.L178
	.loc 1 748 21
	lbu	a5,-1296(s0)
	.loc 1 748 16
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L179
	.loc 1 749 17
	addi	a4,s0,-1296
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 750 42
	sb	zero,-657(s0)
	j	.L180
.L179:
	.loc 1 753 17
	addi	a4,s0,-656
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 754 42
	sb	zero,-657(s0)
	.loc 1 755 29
	lbu	a5,-912(s0)
	.loc 1 755 20
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L181
	.loc 1 755 47 discriminator 2
	lbu	a5,-911(s0)
	.loc 1 755 21 discriminator 2
	beq	a5,zero,.L182
.L181:
	.loc 1 755 95 discriminator 3
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 755 95 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 755 59 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L182:
	.loc 1 756 54
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 756 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 756 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1296
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L180:
	.loc 1 758 23
	lbu	a5,-1168(s0)
	.loc 1 758 16
	beq	a5,zero,.L183
	.loc 1 759 53
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 759 53 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 759 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
	.loc 1 760 56
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 760 56 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 760 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1168
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L183:
	.loc 1 762 20
	lw	a5,-1404(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-912
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	j	.L187
.L174:
.LBE32:
	.loc 1 765 13
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 765 25
	ld	t4,-1384(s0)
	ld	t3,-1376(s0)
	ld	t1,-1368(s0)
	ld	a7,-1360(s0)
	ld	a6,-1352(s0)
	ld	a0,-1344(s0)
	ld	a1,-1336(s0)
	ld	a2,-1328(s0)
	ld	a3,-1320(s0)
	ld	a4,-1312(s0)
	ld	a5,-1304(s0)
	sd	t4,-144(s0)
	sd	t3,-136(s0)
	sd	t1,-128(s0)
	sd	a7,-120(s0)
	sd	a6,-112(s0)
	sd	a0,-104(s0)
	sd	a1,-96(s0)
	sd	a2,-88(s0)
	sd	a3,-80(s0)
	sd	a4,-72(s0)
	sd	a5,-64(s0)
	.loc 1 767 21
	lbu	a5,-656(s0)
	.loc 1 767 12
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L184
	.loc 1 767 39 discriminator 2
	lbu	a5,-655(s0)
	.loc 1 767 13 discriminator 2
	beq	a5,zero,.L185
.L184:
	.loc 1 767 87 discriminator 3
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 767 87 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 767 51 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L185:
	.loc 1 768 45
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 768 45 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 768 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncat
.L169:
.LBE31:
	.loc 1 724 19
	lla	a1,.LC7
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-48(s0)
	.loc 1 724 38 discriminator 1
	ld	a5,-48(s0)
	bne	a5,zero,.L186
	.loc 1 770 12
	lw	a5,-28(s0)
.L187:
	.loc 1 771 1
	mv	a0,a5
	ld	ra,1400(sp)
	.cfi_restore 1
	ld	s0,1392(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1408
	addi	sp,sp,1408
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE31:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB32:
	.loc 1 775 1
	.cfi_startproc
	addi	sp,sp,-1696
	.cfi_def_cfa_offset 1696
	sd	ra,1688(sp)
	sd	s0,1680(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1696
	.cfi_def_cfa 8, 0
	sd	a0,-1672(s0)
	sd	a1,-1680(s0)
	mv	a5,a2
	sw	a5,-1684(s0)
	.loc 1 776 8
	ld	a5,-1680(s0)
	beq	a5,zero,.L189
	.loc 1 776 14 discriminator 2
	lw	a5,-1684(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L190
.L189:
	.loc 1 776 36 discriminator 3
	li	a5,-1
	.loc 1 776 36 is_stmt 0
	j	.L218
.L190:
	.loc 1 777 20 is_stmt 1
	addi	a5,s0,-328
	ld	a2,-1672(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 779 12
	lbu	a5,-328(s0)
	.loc 1 779 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L192
	.loc 1 779 31 discriminator 1
	li	a5,-1
	.loc 1 779 31 is_stmt 0
	j	.L218
.L192:
	.loc 1 780 9 is_stmt 1
	addi	a5,s0,-328
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 780 8 discriminator 1
	bne	a5,zero,.L193
	.loc 1 780 37 discriminator 1
	lw	a5,-1684(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L194
	.loc 1 780 57 discriminator 2
	ld	a5,-1680(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 780 66 discriminator 2
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 780 69 discriminator 2
	sb	zero,0(a5)
	.loc 1 780 83 discriminator 2
	li	a5,0
	.loc 1 780 83 is_stmt 0
	j	.L218
.L194:
	.loc 1 780 94 is_stmt 1 discriminator 3
	li	a5,-1
	.loc 1 780 94 is_stmt 0
	j	.L218
.L193:
	.loc 1 781 24 is_stmt 1
	addi	a5,s0,-416
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 782 20
	addi	a4,s0,-328
	addi	a5,s0,-672
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 782 72 discriminator 1
	sb	zero,-417(s0)
	.loc 1 783 11
	addi	a5,s0,-672
	sd	a5,-24(s0)
	.loc 1 784 9
	li	a5,8
	sw	a5,-48(s0)
	.loc 1 784 22
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 784 35
	sw	zero,-28(s0)
	.loc 1 784 45
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 784 43
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 784 48
	li	a4,47
	sb	a4,0(a5)
	.loc 1 784 57
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 784 60
	sb	zero,0(a5)
	.loc 1 785 11
	j	.L195
.L217:
.LBB33:
	.loc 1 786 14
	sd	zero,-24(s0)
	.loc 1 787 16
	lhu	a5,-416(s0)
	.loc 1 787 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L196
	.loc 1 787 39 discriminator 1
	li	a5,-1
	.loc 1 787 39 is_stmt 0
	j	.L218
.L196:
	.loc 1 788 14 is_stmt 1
	addi	a5,s0,-416
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 788 12 discriminator 1
	bne	a5,zero,.L198
	.loc 1 788 47 discriminator 1
	li	a5,-1
	.loc 1 788 47 is_stmt 0
	j	.L218
.L198:
	.loc 1 789 25 is_stmt 1
	addi	a5,s0,-416
	ld	a1,-64(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-68(s0)
	.loc 1 790 12
	lw	a5,-68(s0)
	sext.w	a5,a5
	bne	a5,zero,.L199
	.loc 1 790 27 discriminator 1
	li	a5,-1
	.loc 1 790 27 is_stmt 0
	j	.L218
.L199:
	.loc 1 791 28 is_stmt 1
	addi	a4,s0,-1656
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 792 16
	lhu	a5,-1656(s0)
	.loc 1 792 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L200
.LBB34:
	.loc 1 793 16
	lw	a5,-48(s0)
	addiw	a5,a5,-1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L201
	.loc 1 793 38 discriminator 1
	li	a5,-1
	.loc 1 793 38 is_stmt 0
	j	.L218
.L201:
	.loc 1 794 40 is_stmt 1
	lw	a5,-1648(s0)
	.loc 1 794 33
	sw	a5,-32(s0)
	.loc 1 794 49
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L203
	.loc 1 794 78 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L203:
	.loc 1 795 13
	lw	a3,-32(s0)
	addi	a4,s0,-1568
	addi	a5,s0,-1656
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 795 63 discriminator 1
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1552(a5)
	.loc 1 796 40
	sb	zero,-1440(s0)
	.loc 1 796 55
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 797 18
	j	.L204
.L206:
	.loc 1 797 32 discriminator 5
	lbu	a5,-1440(s0)
	.loc 1 797 25 discriminator 5
	beq	a5,zero,.L205
	.loc 1 797 73 discriminator 1
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 797 37 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L205:
	.loc 1 797 126 discriminator 3
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 797 126 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 797 92 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 797 147 discriminator 2
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L204:
	.loc 1 797 19 discriminator 4
	ld	a5,-40(s0)
	bne	a5,zero,.L206
	.loc 1 798 39
	lbu	a5,-1568(s0)
	.loc 1 798 34
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L207
	.loc 1 798 51 discriminator 1
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L208
.L207:
	.loc 1 800 26
	sb	zero,-1184(s0)
	.loc 1 800 33
	addi	a5,s0,-1184
	li	a2,511
	ld	a1,-1680(s0)
	mv	a0,a5
	call	strncat
	.loc 1 800 84 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 800 98 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 800 83 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 800 76 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L209
	.loc 1 800 146 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 800 110 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L209:
	.loc 1 800 202 discriminator 3
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 800 202 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 800 165 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L208:
	.loc 1 802 23
	lbu	a5,-1440(s0)
	.loc 1 802 16
	beq	a5,zero,.L210
	.loc 1 802 41 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 802 55 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 802 40 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 802 33 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L211
	.loc 1 802 103 discriminator 2
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 802 103 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 802 67 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L211:
	.loc 1 802 161 discriminator 4
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 802 161 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 802 122 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1440
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L210:
	.loc 1 803 20
	lw	a4,-1684(s0)
	addi	a5,s0,-1184
	mv	a2,a4
	ld	a1,-1680(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	j	.L218
.L200:
.LBE34:
	.loc 1 806 17
	ld	a0,-64(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 807 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 807 19
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 807 12
	lw	a4,-1684(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L212
	.loc 1 807 40 discriminator 1
	li	a5,-1
	.loc 1 807 40 is_stmt 0
	j	.L218
.L212:
	.loc 1 808 12 is_stmt 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L213
	.loc 1 808 26 discriminator 2
	ld	a5,-1680(s0)
	lbu	a5,0(a5)
	.loc 1 808 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L214
.L213:
	.loc 1 808 42 discriminator 3
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 808 40 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 808 45 discriminator 3
	li	a4,47
	sb	a4,0(a5)
.L214:
.LBB35:
	.loc 1 809 17
	sw	zero,-44(s0)
	.loc 1 809 9
	j	.L215
.L216:
	.loc 1 809 42 discriminator 3
	lw	a5,-44(s0)
	ld	a4,-64(s0)
	add	a4,a4,a5
	.loc 1 809 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a3,a5,1
	sw	a3,-28(s0)
	mv	a3,a5
	.loc 1 809 33 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a3
	.loc 1 809 42 discriminator 3
	lbu	a4,0(a4)
	.loc 1 809 38 discriminator 3
	sb	a4,0(a5)
	.loc 1 809 26 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L215:
	.loc 1 809 22 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L216
.LBE35:
	.loc 1 809 50 discriminator 4
	lw	a5,-28(s0)
	ld	a4,-1680(s0)
	add	a5,a4,a5
	.loc 1 809 53 discriminator 4
	sb	zero,0(a5)
	.loc 1 810 13
	ld	t4,-1656(s0)
	ld	t3,-1648(s0)
	ld	t1,-1640(s0)
	ld	a7,-1632(s0)
	ld	a6,-1624(s0)
	ld	a0,-1616(s0)
	ld	a1,-1608(s0)
	ld	a2,-1600(s0)
	ld	a3,-1592(s0)
	ld	a4,-1584(s0)
	ld	a5,-1576(s0)
	sd	t4,-416(s0)
	sd	t3,-408(s0)
	sd	t1,-400(s0)
	sd	a7,-392(s0)
	sd	a6,-384(s0)
	sd	a0,-376(s0)
	sd	a1,-368(s0)
	sd	a2,-360(s0)
	sd	a3,-352(s0)
	sd	a4,-344(s0)
	sd	a5,-336(s0)
.L195:
.LBE33:
	.loc 1 785 19
	lla	a1,.LC7
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-64(s0)
	.loc 1 785 38 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L217
	.loc 1 812 12
	li	a5,0
.L218:
	.loc 1 813 1
	mv	a0,a5
	ld	ra,1688(sp)
	.cfi_restore 1
	ld	s0,1680(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1696
	addi	sp,sp,1696
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE32:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC8:
	.string	"== i-node %u ==\n"
	.align	3
.LC9:
	.string	"  type  = %u\n"
	.align	3
.LC10:
	.string	"  size  = %u\n"
	.align	3
.LC11:
	.string	"  addrs ="
	.align	3
.LC12:
	.string	" %u"
	.align	3
.LC13:
	.string	" [indirect %u]"
	.align	3
.LC14:
	.string	" [double-indirect %u]"
	.align	3
.LC15:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB33:
	.loc 1 815 32
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-116(s0)
	.loc 1 817 5
	addi	a4,s0,-112
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 818 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 819 32
	lhu	a5,-112(s0)
	.loc 1 819 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 1 820 5
	lw	a5,-104(s0)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
	.loc 1 821 5
	lla	a0,.LC11
	call	printf
.LBB36:
	.loc 1 822 14
	sw	zero,-20(s0)
	.loc 1 822 5
	j	.L220
.L222:
	.loc 1 823 21
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 823 12
	beq	a5,zero,.L221
	.loc 1 823 31 discriminator 1
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L221:
	.loc 1 822 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L220:
	.loc 1 822 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L222
.LBE36:
	.loc 1 825 17
	lw	a5,-32(s0)
	.loc 1 825 8
	beq	a5,zero,.L223
	.loc 1 826 9
	lw	a5,-32(s0)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L223:
	.loc 1 828 17
	lw	a5,-28(s0)
	.loc 1 828 8
	beq	a5,zero,.L224
	.loc 1 829 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
.L224:
	.loc 1 831 5
	lla	a0,.LC15
	call	printf
	.loc 1 832 1
	nop
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE33:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB34:
	.loc 1 839 38
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
	.loc 1 840 12
	li	a5,128
	.loc 1 841 1
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
.LFE34:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB35:
	.loc 1 842 55
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
	.loc 1 843 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB37:
	.loc 1 845 14
	sw	zero,-20(s0)
	.loc 1 845 5
	j	.L228
.L231:
	.loc 1 845 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 845 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L236
	.loc 1 845 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L228:
	.loc 1 845 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L231
.LBE37:
.LBB38:
	.loc 1 847 14
	sw	zero,-24(s0)
	.loc 1 847 5
	j	.L232
.L235:
	.loc 1 848 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 848 12
	bne	a5,zero,.L233
	.loc 1 849 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 850 18
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 850 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L237
	.loc 1 850 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 850 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1160(a5)
	.loc 1 851 13
	j	.L237
.L233:
	.loc 1 847 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L232:
	.loc 1 847 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L235
	j	.L227
.L236:
.LBE38:
.LBB39:
	.loc 1 845 67
	nop
	j	.L227
.L237:
.LBE39:
.LBB40:
	.loc 1 851 13
	nop
.L227:
.LBE40:
	.loc 1 855 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE35:
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB36:
	.loc 1 856 58
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
	.loc 1 857 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 857 29 discriminator 1
	sw	zero,-20(s0)
.LBB41:
	.loc 1 858 14
	sw	zero,-24(s0)
	.loc 1 858 5
	j	.L239
.L242:
	.loc 1 859 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 859 12
	ld	a4,-48(s0)
	bne	a4,a5,.L240
	.loc 1 859 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L240:
	.loc 1 860 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 860 12
	beq	a5,zero,.L241
	.loc 1 860 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L241:
	.loc 1 858 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L239:
	.loc 1 858 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L242
.LBE41:
	.loc 1 862 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1160(a5)
	.loc 1 863 1
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
.LFE36:
	.size	owner_remove, .-owner_remove
	.globl	gPipes
	.bss
	.align	3
	.type	gPipes, @object
	.size	gPipes, 26112
gPipes:
	.zero	26112
	.globl	gFiles
	.align	3
	.type	gFiles, @object
	.size	gFiles, 37376
gFiles:
	.zero	37376
	.globl	gFreePipes
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
.LFB37:
	.loc 1 876 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 877 5
	li	a5,24576
	addi	a2,a5,1536
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 878 5
	li	a5,36864
	addi	a2,a5,512
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB42:
	.loc 1 880 13
	sw	zero,-20(s0)
	.loc 1 880 5
	j	.L244
.L245:
.LBB43:
	.loc 1 881 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 883 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 884 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE43:
	.loc 1 880 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L244:
	.loc 1 880 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L245
.LBE42:
.LBB44:
	.loc 1 887 13
	sw	zero,-24(s0)
	.loc 1 887 5
	j	.L246
.L247:
.LBB45:
	.loc 1 888 22
	lw	a4,-24(s0)
	li	a5,1168
	mul	a4,a4,a5
	lla	a5,gFiles
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 890 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,128(a5)
	.loc 1 891 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE45:
	.loc 1 887 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L246:
	.loc 1 887 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L247
.LBE44:
	.loc 1 893 1
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
.LFE37:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB38:
	.loc 1 896 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 897 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 899 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 899 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 901 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 903 12
	ld	a5,-24(s0)
	.loc 1 904 1
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
.LFE38:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB39:
	.loc 1 907 1
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
	.loc 1 908 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 909 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 910 1
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
.LFE39:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB40:
	.loc 1 912 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 913 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 913 8
	bne	a5,zero,.L252
	.loc 1 913 29 discriminator 1
	li	a5,0
	.loc 1 913 29 is_stmt 0
	j	.L253
.L252:
	.loc 1 914 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 915 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,128(a5)
	.loc 1 915 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 916 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 917 12
	ld	a5,-24(s0)
.L253:
	.loc 1 918 1
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
.LFE40:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB41:
	.loc 1 922 1
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
	.loc 1 923 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,128(a5)
	.loc 1 924 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 925 1
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
.LFE41:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB42:
	.loc 1 931 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 932 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 934 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 935 8
	ld	a5,-24(s0)
	bne	a5,zero,.L256
	.loc 1 936 16
	li	a5,0
	j	.L257
.L256:
	.loc 1 937 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 938 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 939 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 940 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 941 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 942 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 944 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 945 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 947 12
	ld	a5,-24(s0)
.L257:
	.loc 1 948 1
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
.LFE42:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB43:
	.loc 1 953 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 954 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 955 8
	ld	a5,-24(s0)
	bne	a5,zero,.L259
	.loc 1 955 25 discriminator 1
	li	a5,0
	.loc 1 955 25 is_stmt 0
	j	.L260
.L259:
	.loc 1 957 5 is_stmt 1
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 959 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 961 12
	ld	a5,-24(s0)
.L260:
	.loc 1 962 1
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
.LFE43:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB44:
	.loc 1 965 1
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
	.loc 1 966 5
	li	a2,256
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 968 21
	call	new_file_table
	mv	a4,a0
	.loc 1 968 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 970 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 970 25
	sw	zero,0(a5)
	.loc 1 971 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 971 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 973 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 973 21
	call	new_file_table
	mv	a5,a0
	.loc 1 973 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 975 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 975 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 976 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 976 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 978 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 978 21
	call	new_file_table
	mv	a5,a0
	.loc 1 978 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 980 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 980 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 981 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 981 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 982 1
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
.LFE44:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB45:
	.loc 1 985 1
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
	.loc 1 986 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 995 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L263
	.loc 1 995 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L264
.L263:
	.loc 1 995 48 discriminator 3
	li	a5,0
	.loc 1 995 48 is_stmt 0
	j	.L265
.L264:
	.loc 1 996 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 996 8
	bne	a5,zero,.L266
	.loc 1 996 33 discriminator 1
	li	a5,0
	.loc 1 996 33 is_stmt 0
	j	.L265
.L266:
	.loc 1 997 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 997 24
	lw	a5,100(a5)
	.loc 1 997 8
	bne	a5,zero,.L267
	.loc 1 997 39 discriminator 1
	li	a5,0
	.loc 1 997 39 is_stmt 0
	j	.L265
.L267:
	.loc 1 999 19 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 999 23
	lw	a4,0(a5)
	.loc 1 999 8
	li	a5,4
	bne	a4,a5,.L268
	.loc 1 999 54 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 999 58 discriminator 1
	ld	a5,104(a5)
	.loc 1 999 41 discriminator 1
	beq	a5,zero,.L268
	.loc 1 1000 16
	li	a5,1
	j	.L265
.L268:
	.loc 1 1002 12
	li	a5,0
.L265:
	.loc 1 1003 1
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
.LFE45:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB46:
	.loc 1 1006 1
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
	.loc 1 1007 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1008 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1008 8
	beq	a5,zero,.L270
	.loc 1 1008 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1008 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1008 24 discriminator 1
	beq	a5,zero,.L270
	.loc 1 1009 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1009 26
	lw	a5,0(a5)
	.loc 1 1009 11
	bne	a5,zero,.L270
	.loc 1 1010 20
	li	a5,1
	j	.L271
.L270:
	.loc 1 1014 12
	li	a5,0
.L271:
	.loc 1 1015 1
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
.LFE46:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB47:
	.loc 1 1018 1
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
	.loc 1 1019 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1021 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1021 8
	beq	a5,zero,.L273
	.loc 1 1021 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1021 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1021 24 discriminator 1
	beq	a5,zero,.L273
	.loc 1 1022 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1022 26
	lw	a4,0(a5)
	.loc 1 1022 11
	li	a5,1
	bne	a4,a5,.L273
	.loc 1 1023 20
	li	a5,1
	j	.L274
.L273:
	.loc 1 1027 12
	li	a5,0
.L274:
	.loc 1 1028 1
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
.LFE47:
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB48:
	.loc 1 1031 1
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
	.loc 1 1032 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1033 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L276
	.loc 1 1033 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L277
.L276:
	.loc 1 1033 48 discriminator 3
	li	a5,0
	.loc 1 1033 48 is_stmt 0
	j	.L278
.L277:
	.loc 1 1034 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1034 8
	bne	a5,zero,.L279
	.loc 1 1034 33 discriminator 1
	li	a5,0
	.loc 1 1034 33 is_stmt 0
	j	.L278
.L279:
	.loc 1 1035 23 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1035 27
	lw	a5,0(a5)
	.loc 1 1035 9
	sw	a5,-28(s0)
	.loc 1 1036 63
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L280
	.loc 1 1036 27 discriminator 2
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L280
	.loc 1 1036 45 discriminator 4
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L280
	.loc 1 1036 63 discriminator 6
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,5
	bne	a4,a5,.L281
.L280:
	.loc 1 1036 63 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 1036 63
	j	.L278
.L281:
	.loc 1 1036 63 discriminator 8
	li	a5,0
.L278:
	.loc 1 1037 1 is_stmt 1
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
.LFE48:
	.size	is_tty, .-is_tty
	.section	.rodata
	.align	3
.LC16:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB49:
	.loc 1 1039 36
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
	.loc 1 1040 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1042 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB46:
	.loc 1 1044 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1044 5
	j	.L284
.L289:
	.loc 1 1045 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1045 12
	bne	a5,zero,.L285
	.loc 1 1046 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1046 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1046 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1048 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1048 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1049 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1049 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1050 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1050 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1051 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1051 34
	sw	zero,96(a5)
	.loc 1 1052 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1052 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1053 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1053 38
	li	a4,1
	sw	a4,116(a5)
	.loc 1 1054 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1054 41
	sw	zero,120(a5)
	.loc 1 1055 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 1057 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1057 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1058 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1058 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1058 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1058 66
	ld	a4,0(a4)
	.loc 1 1058 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1059 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 1059 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 1061 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1061 15
	li	a5,31
	ble	a4,a5,.L296
	.loc 1 1062 17
	lla	a0,.LC16
	call	puts
.L287:
	.loc 1 1063 22
	j	.L287
.L285:
	.loc 1 1044 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L284:
	.loc 1 1044 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L289
	j	.L288
.L296:
	.loc 1 1067 13
	nop
.L288:
.LBE46:
.LBB47:
	.loc 1 1070 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 1070 5
	j	.L290
.L295:
	.loc 1 1071 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1071 12
	bne	a5,zero,.L291
	.loc 1 1072 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1072 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1072 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1074 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1074 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1075 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1075 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1076 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1076 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1078 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1078 34
	sw	zero,96(a5)
	.loc 1 1079 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1079 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1080 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1080 39
	li	a4,1
	sw	a4,120(a5)
	.loc 1 1081 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1081 38
	sw	zero,116(a5)
	.loc 1 1082 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 1084 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1084 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1085 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1085 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1085 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1085 66
	ld	a4,0(a4)
	.loc 1 1085 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1086 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 1086 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 1088 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1088 15
	li	a5,31
	ble	a4,a5,.L297
	.loc 1 1089 17
	lla	a0,.LC16
	call	puts
.L293:
	.loc 1 1090 22
	j	.L293
.L291:
	.loc 1 1070 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L290:
	.loc 1 1070 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L295
.LBE47:
	.loc 1 1097 1
	j	.L298
.L297:
.LBB48:
	.loc 1 1094 13
	nop
.L298:
.LBE48:
	.loc 1 1097 1
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
.LFE49:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC17:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB50:
	.loc 1 1107 1
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
	.loc 1 1108 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1110 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1110 8
	bne	a5,zero,.L300
	.loc 1 1111 9
	lla	a0,.LC17
	call	panic
.L300:
	.loc 1 1114 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L301
	.loc 1 1114 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L302
.L301:
	.loc 1 1115 9
	lla	a0,.LC17
	call	panic
.L302:
	.loc 1 1117 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1117 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1119 7
	ld	a5,-32(s0)
	bne	a5,zero,.L304
	.loc 1 1120 9
	lla	a0,.LC17
	call	panic
	.loc 1 1123 11
	j	.L304
.L306:
	.loc 1 1124 8
	call	yield
.L304:
	.loc 1 1123 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1123 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1123 34
	bne	a4,a5,.L305
	.loc 1 1123 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1123 34 discriminator 1
	bne	a5,zero,.L306
.L305:
	.loc 1 1127 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1127 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1127 8
	bne	a4,a5,.L307
	.loc 1 1127 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1127 31 discriminator 1
	bne	a5,zero,.L307
	.loc 1 1128 16
	li	a5,0
	j	.L308
.L307:
	.loc 1 1132 18
	sw	zero,-36(s0)
.LBB49:
	.loc 1 1133 23
	sw	zero,-40(s0)
	.loc 1 1133 5
	j	.L309
.L312:
	.loc 1 1135 12
	call	yield
.L310:
	.loc 1 1134 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1134 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1134 38
	bne	a4,a5,.L311
	.loc 1 1134 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1134 38 discriminator 1
	bne	a5,zero,.L312
.L311:
	.loc 1 1139 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1139 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1139 12
	bne	a4,a5,.L313
	.loc 1 1139 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1139 35 discriminator 1
	beq	a5,zero,.L316
.L313:
	.loc 1 1143 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1143 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 1143 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 1143 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 1143 17
	sb	a4,0(a5)
	.loc 1 1144 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1144 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 1147 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 1133 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L309:
	.loc 1 1133 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 1133 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L314
	.loc 1 1133 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1133 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1133 36 discriminator 3
	bltu	a4,a5,.L310
	j	.L314
.L316:
	.loc 1 1140 13
	nop
.L314:
.LBE49:
	.loc 1 1151 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L308:
	.loc 1 1152 1
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
.LFE50:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC18:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB51:
	.loc 1 1157 1
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
	.loc 1 1158 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1160 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1160 8
	bne	a5,zero,.L318
	.loc 1 1161 9
	lla	a0,.LC18
	call	panic
.L318:
	.loc 1 1164 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L319
	.loc 1 1164 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L320
.L319:
	.loc 1 1165 9
	lla	a0,.LC18
	call	panic
.L320:
	.loc 1 1167 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1167 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1169 7
	ld	a5,-32(s0)
	bne	a5,zero,.L321
	.loc 1 1170 9
	lla	a0,.LC18
	call	panic
.L321:
.LBB50:
	.loc 1 1173 23
	sw	zero,-36(s0)
	.loc 1 1173 5
	j	.L322
.L325:
	.loc 1 1176 11
	call	yield
.L323:
	.loc 1 1175 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 1175 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1175 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1175 48
	li	a5,512
	bne	a4,a5,.L324
	.loc 1 1175 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1175 48 discriminator 1
	bne	a5,zero,.L325
.L324:
	.loc 1 1179 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1179 10
	bne	a5,zero,.L326
	.loc 1 1181 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1181 30
	ble	a5,zero,.L327
	.loc 1 1181 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1181 30
	j	.L329
.L327:
	.loc 1 1181 30 discriminator 2
	li	a5,-1
	.loc 1 1181 30
	j	.L329
.L326:
	.loc 1 1183 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 1183 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 1183 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 1183 44
	lbu	a4,0(a5)
	.loc 1 1183 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 1184 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1184 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 1173 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L322:
	.loc 1 1173 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L323
.LBE50:
	.loc 1 1191 12
	lw	a5,-56(s0)
.L329:
	.loc 1 1192 1
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
.LFE51:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB52:
	.loc 1 1204 1
	.cfi_startproc
	addi	sp,sp,-288
	.cfi_def_cfa_offset 288
	sd	ra,280(sp)
	sd	s0,272(sp)
	sd	s1,264(sp)
	sd	s2,256(sp)
	sd	s3,248(sp)
	sd	s4,240(sp)
	sd	s5,232(sp)
	sd	s6,224(sp)
	sd	s7,216(sp)
	sd	s8,208(sp)
	sd	s9,200(sp)
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
	addi	s0,sp,288
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	sd	a1,-272(s0)
	sd	a2,-280(s0)
	.loc 1 1204 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 1205 8
	ld	a5,-264(s0)
	beq	a5,zero,.L332
	.loc 1 1205 22 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 1205 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L333
.L332:
	.loc 1 1205 41 discriminator 3
	li	a5,0
	.loc 1 1205 41 is_stmt 0
	j	.L334
.L333:
	.loc 1 1206 9 is_stmt 1
	lla	a1,.LC7
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1206 8 discriminator 1
	bne	a5,zero,.L335
	.loc 1 1206 40 discriminator 1
	li	a5,0
	.loc 1 1206 40 is_stmt 0
	j	.L334
.L335:
	.loc 1 1209 15 is_stmt 1
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1209 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 1209 10 discriminator 1
	addi	a4,a4,-1
	sd	a4,-136(s0)
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
	mv	a4,a5
	addi	a4,a4,15
	srli	a4,a4,4
	slli	a4,a4,4
	sub	sp,sp,a4
	mv	a4,sp
	sd	a4,-144(s0)
	.loc 1 1210 5
	mv	a2,a5
	ld	a1,-264(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 1213 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 1214 11
	sd	zero,-104(s0)
	.loc 1 1215 17
	lla	a1,.LC7
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 1216 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 1218 5
	addi	a4,s0,-256
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1220 11
	j	.L336
.L341:
.LBB51:
	.loc 1 1221 25
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 1222 12
	ld	a5,-160(s0)
	bne	a5,zero,.L337
	.loc 1 1224 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 1225 13
	j	.L338
.L337:
	.loc 1 1228 15
	lhu	a5,-256(s0)
	.loc 1 1228 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L339
	.loc 1 1228 38 discriminator 1
	li	a5,0
	.loc 1 1228 38 is_stmt 0
	j	.L334
.L339:
	.loc 1 1229 30 is_stmt 1
	addi	a5,s0,-256
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1230 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L340
	.loc 1 1230 36 discriminator 1
	li	a5,0
	.loc 1 1230 36 is_stmt 0
	j	.L334
.L340:
	.loc 1 1231 9 is_stmt 1
	addi	a4,s0,-256
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1232 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 1233 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L336:
.LBE51:
	.loc 1 1220 12
	ld	a5,-112(s0)
	bne	a5,zero,.L341
.L338:
	.loc 1 1236 8
	ld	a5,-104(s0)
	bne	a5,zero,.L342
	.loc 1 1236 23 discriminator 1
	li	a5,0
	.loc 1 1236 23 is_stmt 0
	j	.L334
.L342:
	.loc 1 1237 18 is_stmt 1
	ld	a5,-272(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 1239 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 1240 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L343
	.loc 1 1240 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L343:
.LBB52:
	.loc 1 1241 14
	sw	zero,-124(s0)
	.loc 1 1241 5
	j	.L344
.L345:
	.loc 1 1241 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-280(s0)
	add	a5,a4,a5
	.loc 1 1241 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 1241 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L344:
	.loc 1 1241 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L345
.LBE52:
	.loc 1 1242 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 1243 12
	li	a5,1
.L334:
	mv	sp,s1
	.loc 1 1244 1
	mv	a0,a5
	addi	sp,s0,-288
	.cfi_def_cfa 2, 288
	ld	ra,280(sp)
	.cfi_restore 1
	ld	s0,272(sp)
	.cfi_restore 8
	ld	s1,264(sp)
	.cfi_restore 9
	ld	s2,256(sp)
	.cfi_restore 18
	ld	s3,248(sp)
	.cfi_restore 19
	ld	s4,240(sp)
	.cfi_restore 20
	ld	s5,232(sp)
	.cfi_restore 21
	ld	s6,224(sp)
	.cfi_restore 22
	ld	s7,216(sp)
	.cfi_restore 23
	ld	s8,208(sp)
	.cfi_restore 24
	ld	s9,200(sp)
	.cfi_restore 25
	addi	sp,sp,288
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE52:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB53:
	.loc 1 1249 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
.LBB53:
	.loc 1 1251 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 1251 5
	j	.L348
.L351:
	.loc 1 1252 9
	addi	a4,s0,-112
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1253 15
	lhu	a5,-112(s0)
	.loc 1 1253 12
	bne	a5,zero,.L349
.LBB54:
	.loc 1 1256 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1257 23
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 1258 24
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 1259 23
	sw	zero,-192(s0)
	.loc 1 1260 23
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 1260 39
	sh	zero,-184(s0)
	.loc 1 1260 51
	sh	zero,-182(s0)
	.loc 1 1260 94
	call	fs_now
	mv	a5,a0
	.loc 1 1260 92 discriminator 1
	sw	a5,-172(s0)
	.loc 1 1260 85 discriminator 1
	lw	a5,-172(s0)
	.loc 1 1260 79 discriminator 1
	sw	a5,-176(s0)
	.loc 1 1260 72 discriminator 1
	lw	a5,-176(s0)
	.loc 1 1260 66 discriminator 1
	sw	a5,-180(s0)
	.loc 1 1261 13
	addi	a4,s0,-200
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1262 20
	lw	a5,-20(s0)
	j	.L352
.L349:
.LBE54:
	.loc 1 1251 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L348:
	.loc 1 1251 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1251 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L351
.LBE53:
	.loc 1 1265 12
	li	a5,0
.L352:
	.loc 1 1266 1
	mv	a0,a5
	ld	ra,200(sp)
	.cfi_restore 1
	ld	s0,192(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 208
	addi	sp,sp,208
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE53:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB54:
	.loc 1 1271 1
	.cfi_startproc
	addi	sp,sp,-720
	.cfi_def_cfa_offset 720
	sd	ra,712(sp)
	sd	s0,704(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,720
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-720(s0)
	mv	a4,a2
	sw	a5,-708(s0)
	mv	a5,a4
	sw	a5,-712(s0)
	.loc 1 1272 8
	ld	a5,-720(s0)
	beq	a5,zero,.L354
	.loc 1 1272 22 discriminator 2
	ld	a5,-720(s0)
	lbu	a5,0(a5)
	.loc 1 1272 15 discriminator 2
	bne	a5,zero,.L355
.L354:
	.loc 1 1272 42 discriminator 3
	li	a5,-1
	.loc 1 1272 42 is_stmt 0
	j	.L368
.L355:
	.loc 1 1275 5 is_stmt 1
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1276 12
	lhu	a5,-176(s0)
	.loc 1 1276 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L357
	.loc 1 1276 35 discriminator 1
	li	a5,-1
	.loc 1 1276 35 is_stmt 0
	j	.L368
.L357:
	.loc 1 1280 15 is_stmt 1
	lw	a5,-712(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 1280 13
	sh	a5,-192(s0)
.LBB55:
	.loc 1 1282 14
	sw	zero,-20(s0)
	.loc 1 1282 5
	j	.L358
.L359:
	.loc 1 1282 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-174(a5)
	.loc 1 1282 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L358:
	.loc 1 1282 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L359
.LBE55:
	.loc 1 1283 5
	addi	a5,s0,-192
	addi	a5,a5,2
	li	a2,14
	ld	a1,-720(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1286 14
	sw	zero,-24(s0)
	.loc 1 1287 11
	j	.L360
.L366:
.LBB56:
	.loc 1 1288 9
	lw	a4,-24(s0)
	addi	a5,s0,-176
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1289 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 1290 13
	li	a5,32
	sw	a5,-68(s0)
.LBB57:
	.loc 1 1291 18
	sw	zero,-28(s0)
	.loc 1 1291 9
	j	.L361
.L365:
	.loc 1 1292 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1292 24
	lhu	a5,0(a5)
	.loc 1 1292 16
	bne	a5,zero,.L362
.LBB58:
	.loc 1 1293 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1293 25
	lhu	a4,-192(s0)
	mv	t1,a4
	lhu	a4,-190(s0)
	mv	a7,a4
	lhu	a4,-188(s0)
	mv	a6,a4
	lhu	a4,-186(s0)
	mv	a0,a4
	lhu	a4,-184(s0)
	mv	a1,a4
	lhu	a4,-182(s0)
	mv	a2,a4
	lhu	a4,-180(s0)
	mv	a3,a4
	lhu	a4,-178(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1295 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 1296 37
	lw	a3,-72(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 1297 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L363
	.loc 1 1297 39 discriminator 1
	li	a5,-1
	.loc 1 1297 39 is_stmt 0
	j	.L368
.L363:
	.loc 1 1298 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 1301 43
	lw	a5,-168(s0)
	.loc 1 1301 26
	srliw	a5,a5,4
	sw	a5,-80(s0)
	.loc 1 1302 41
	lw	a5,-24(s0)
	srliw	a5,a5,4
	sext.w	a4,a5
	.loc 1 1302 78
	lw	a5,-28(s0)
	.loc 1 1302 26
	addw	a5,a4,a5
	sw	a5,-84(s0)
	.loc 1 1303 20
	lw	a5,-84(s0)
	mv	a4,a5
	lw	a5,-80(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L364
	.loc 1 1304 41
	lw	a5,-84(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1304 46
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1304 30
	sw	a5,-168(s0)
	.loc 1 1305 33
	call	fs_now
	mv	a5,a0
	.loc 1 1305 31 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1306 21
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L364:
	.loc 1 1308 24
	li	a5,0
	j	.L368
.L362:
.LBE58:
	.loc 1 1291 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L361:
	.loc 1 1291 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L365
.LBE57:
	.loc 1 1311 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L360:
.LBE56:
	.loc 1 1287 21
	lw	a5,-168(s0)
	.loc 1 1287 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L366
	.loc 1 1315 23
	lw	a5,-168(s0)
	.loc 1 1315 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 1316 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 1316 54
	srli	a5,a5,9
	.loc 1 1316 14
	sw	a5,-36(s0)
	.loc 1 1317 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1317 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 1318 25
	lw	a3,-36(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 1319 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L367
	.loc 1 1319 27 discriminator 1
	li	a5,-1
	.loc 1 1319 27 is_stmt 0
	j	.L368
.L367:
	.loc 1 1322 5 is_stmt 1
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1323 20
	addi	a5,s0,-704
	sd	a5,-56(s0)
	.loc 1 1324 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1324 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 1324 45
	lhu	a4,-192(s0)
	mv	t1,a4
	lhu	a4,-190(s0)
	mv	a7,a4
	lhu	a4,-188(s0)
	mv	a6,a4
	lhu	a4,-186(s0)
	mv	a0,a4
	lhu	a4,-184(s0)
	mv	a1,a4
	lhu	a4,-182(s0)
	mv	a2,a4
	lhu	a4,-180(s0)
	mv	a3,a4
	lhu	a4,-178(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1325 5
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1327 8
	lw	a5,-168(s0)
	.loc 1 1327 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-168(s0)
	.loc 1 1328 17
	call	fs_now
	mv	a5,a0
	.loc 1 1328 15 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1329 5
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1330 12
	li	a5,0
.L368:
	.loc 1 1331 1
	mv	a0,a5
	ld	ra,712(sp)
	.cfi_restore 1
	ld	s0,704(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 720
	addi	sp,sp,720
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE54:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB55:
	.loc 1 1335 1
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sd	ra,152(sp)
	sd	s0,144(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-160(s0)
	sw	a5,-148(s0)
	.loc 1 1337 5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1338 12
	lhu	a5,-128(s0)
	.loc 1 1338 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L370
	.loc 1 1338 35 discriminator 1
	li	a5,-1
	.loc 1 1338 35 is_stmt 0
	j	.L378
.L370:
	.loc 1 1340 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1342 11
	j	.L372
.L377:
.LBB59:
	.loc 1 1343 9
	lw	a5,-20(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 1343 9 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1344 24 is_stmt 1
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 1345 13
	li	a5,32
	sw	a5,-36(s0)
.LBB60:
	.loc 1 1346 18
	sw	zero,-24(s0)
	.loc 1 1346 9
	j	.L373
.L376:
	.loc 1 1347 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1347 22
	lhu	a5,0(a5)
	.loc 1 1347 16
	beq	a5,zero,.L379
	.loc 1 1348 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1348 34
	addi	a4,a5,2
	.loc 1 1348 13
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 1349 29
	sb	zero,-130(s0)
	.loc 1 1350 17
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1350 16 discriminator 1
	bne	a5,zero,.L375
	.loc 1 1351 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1351 28
	sh	zero,0(a5)
	.loc 1 1352 17
	lw	a5,-20(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 1352 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1353 29 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 1353 27 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1354 17
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1355 24
	li	a5,0
	j	.L378
.L379:
	.loc 1 1347 34
	nop
.L375:
	.loc 1 1346 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L373:
	.loc 1 1346 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L376
.LBE60:
	.loc 1 1358 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L372:
.LBE59:
	.loc 1 1342 21
	lw	a5,-120(s0)
	.loc 1 1342 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L377
	.loc 1 1360 12
	li	a5,-1
.L378:
	.loc 1 1361 1
	mv	a0,a5
	ld	ra,152(sp)
	.cfi_restore 1
	ld	s0,144(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE55:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB56:
	.loc 1 1365 1
	.cfi_startproc
	addi	sp,sp,-1136
	.cfi_def_cfa_offset 1136
	sd	ra,1128(sp)
	sd	s0,1120(sp)
	sd	s1,1112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1136
	.cfi_def_cfa 8, 0
	sd	a0,-1112(s0)
	sd	a1,-1120(s0)
	sd	a2,-1128(s0)
	.loc 1 1366 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1366 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1368 8
	ld	a5,-1128(s0)
	beq	a5,zero,.L381
	.loc 1 1368 21 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1368 14 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L381
	.loc 1 1369 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1370 34
	sb	zero,-113(s0)
	j	.L382
.L381:
.LBB61:
	.loc 1 1373 26
	ld	a5,-80(s0)
	addi	a4,a5,872
	.loc 1 1373 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1374 34
	sb	zero,-113(s0)
	.loc 1 1375 17
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1376 12
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L383
	.loc 1 1376 31 discriminator 1
	lbu	a5,-368(s0)
	.loc 1 1376 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L384
.L383:
	.loc 1 1377 16
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L384
	.loc 1 1377 54 discriminator 1
	lw	a5,-84(s0)
	addiw	a4,a5,1
	sw	a4,-84(s0)
	.loc 1 1377 58 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 1 1377 75 discriminator 1
	lw	a5,-84(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L384:
	.loc 1 1379 12
	ld	a5,-1128(s0)
	beq	a5,zero,.L382
	.loc 1 1379 25 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1379 18 discriminator 1
	beq	a5,zero,.L382
	.loc 1 1379 67 discriminator 2
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1379 67 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1379 30 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L382:
.LBE61:
	.loc 1 1384 5
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1385 24
	sb	zero,-369(s0)
	.loc 1 1386 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 1 1387 29
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1387 29 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1387 17 is_stmt 1 discriminator 1
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 1390 9
	sw	zero,-44(s0)
	.loc 1 1391 11
	j	.L385
.L387:
.LBB62:
	.loc 1 1392 28 discriminator 2
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L386:
	.loc 1 1392 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1392 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L387
	.loc 1 1393 13
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1393 12
	beq	a5,zero,.L414
	.loc 1 1394 19
	ld	a5,-40(s0)
	sd	a5,-104(s0)
	.loc 1 1395 15
	j	.L390
.L392:
	.loc 1 1395 34 discriminator 3
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L390:
	.loc 1 1395 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1395 19 discriminator 1
	beq	a5,zero,.L391
	.loc 1 1395 22 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1395 19 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L392
.L391:
	.loc 1 1396 21
	ld	a4,-40(s0)
	ld	a5,-104(s0)
	sub	a5,a4,a5
	.loc 1 1396 13
	sw	a5,-108(s0)
	.loc 1 1397 12
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L393
	.loc 1 1397 34 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1397 22 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L393
	.loc 1 1397 22 is_stmt 0
	j	.L385
.L393:
	.loc 1 1399 19 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L394
	.loc 1 1399 41 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1399 29 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L394
	.loc 1 1399 64 discriminator 2
	ld	a5,-104(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1399 52 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L394
	.loc 1 1400 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	ble	a5,zero,.L385
	.loc 1 1400 33 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,-1
	sw	a5,-44(s0)
	.loc 1 1400 16
	j	.L385
.L394:
	.loc 1 1401 19
	lw	a5,-108(s0)
	sext.w	a5,a5
	ble	a5,zero,.L385
.LBB63:
	.loc 1 1402 17
	lw	a5,-108(s0)
	sw	a5,-48(s0)
	.loc 1 1403 16
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L396
	.loc 1 1403 37 discriminator 1
	li	a5,14
	sw	a5,-48(s0)
.L396:
.LBB64:
	.loc 1 1404 22
	sw	zero,-52(s0)
	.loc 1 1404 13
	j	.L397
.L398:
	.loc 1 1404 57 discriminator 3
	lw	a3,-52(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1404 38 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L397:
	.loc 1 1404 27 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L398
.LBE64:
.LBB65:
	.loc 1 1405 22
	sw	zero,-56(s0)
	.loc 1 1405 13
	j	.L399
.L400:
	.loc 1 1405 65 discriminator 3
	lw	a5,-56(s0)
	ld	a4,-104(s0)
	add	a5,a4,a5
	lbu	a3,0(a5)
	.loc 1 1405 54 discriminator 3
	lw	a2,-56(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 1 1405 34 discriminator 3
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L399:
	.loc 1 1405 27 discriminator 1
	lw	a5,-56(s0)
	mv	a4,a5
	lw	a5,-48(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L400
.LBE65:
	.loc 1 1406 32
	lw	a3,-48(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1407 16
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,30
	bgt	a4,a5,.L385
	.loc 1 1407 34 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L385:
.LBE63:
.LBE62:
	.loc 1 1391 14
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L386
	j	.L389
.L414:
.LBB66:
	.loc 1 1393 25
	nop
.L389:
.LBE66:
	.loc 1 1411 9
	sw	zero,-60(s0)
	.loc 1 1412 8
	ld	a5,-1120(s0)
	beq	a5,zero,.L402
	.loc 1 1412 27 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1412 23 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1412 30 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L402:
.LBB67:
	.loc 1 1413 14
	sw	zero,-64(s0)
	.loc 1 1413 5
	j	.L403
.L410:
.LBB68:
	.loc 1 1414 24
	lw	a5,-64(s0)
	sext.w	a5,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 1 1414 42
	addi	a3,s0,-1104
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 1 1414 30
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1414 13 discriminator 1
	addw	a5,s1,a5
	sw	a5,-112(s0)
	.loc 1 1415 13
	lw	a4,-60(s0)
	.loc 1 1415 25
	lw	a5,-112(s0)
	add	a5,a4,a5
	.loc 1 1415 12
	ld	a4,-1120(s0)
	bleu	a4,a5,.L415
	.loc 1 1416 12
	lw	a5,-64(s0)
	sext.w	a5,a5
	beq	a5,zero,.L406
	.loc 1 1416 23 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1416 19 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1416 27 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L406:
.LBB69:
	.loc 1 1417 18
	sw	zero,-68(s0)
	.loc 1 1417 9
	j	.L407
.L409:
	.loc 1 1417 73 discriminator 4
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1417 69 discriminator 4
	ld	a5,-1112(s0)
	add	a3,a5,a4
	.loc 1 1417 87 discriminator 4
	lw	a2,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 1 1417 77 discriminator 4
	sb	a5,0(a3)
	.loc 1 1417 62 discriminator 4
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L407:
	.loc 1 1417 31 discriminator 1
	lw	a3,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 1 1417 35 discriminator 1
	beq	a5,zero,.L408
	.loc 1 1417 38 discriminator 3
	lw	a4,-60(s0)
	.loc 1 1417 57 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 1 1417 35 discriminator 3
	bltu	a4,a5,.L409
.L408:
.LBE69:
.LBE68:
	.loc 1 1413 27 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L403:
	.loc 1 1413 19 discriminator 1
	lw	a5,-64(s0)
	mv	a4,a5
	lw	a5,-44(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L410
	j	.L405
.L415:
.LBB70:
	.loc 1 1415 42
	nop
.L405:
.LBE70:
.LBE67:
	.loc 1 1419 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L411
	.loc 1 1420 12
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L412
	.loc 1 1420 33 discriminator 1
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1420 42 discriminator 1
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 1 1420 45 discriminator 1
	sb	zero,0(a5)
	.loc 1 1425 1
	j	.L416
.L412:
	.loc 1 1421 17
	ld	a5,-1120(s0)
	beq	a5,zero,.L416
	.loc 1 1421 34 discriminator 1
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 1 1425 1
	j	.L416
.L411:
	.loc 1 1423 12
	lw	a5,-60(s0)
	ld	a4,-1112(s0)
	add	a5,a4,a5
	.loc 1 1423 17
	sb	zero,0(a5)
.L416:
	.loc 1 1425 1
	nop
	ld	ra,1128(sp)
	.cfi_restore 1
	ld	s0,1120(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1136
	ld	s1,1112(sp)
	.cfi_restore 9
	addi	sp,sp,1136
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE56:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB57:
	.loc 1 1429 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	sd	a0,-552(s0)
	mv	a5,a1
	sw	a5,-556(s0)
	.loc 1 1432 5
	addi	a5,s0,-160
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1433 9
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1433 8 discriminator 1
	bne	a5,zero,.L418
	.loc 1 1433 39 discriminator 1
	li	a5,-1
	.loc 1 1433 39 is_stmt 0
	j	.L437
.L418:
	.loc 1 1436 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1436 8 discriminator 1
	beq	a5,zero,.L420
	.loc 1 1436 39 discriminator 1
	li	a5,-1
	.loc 1 1436 39 is_stmt 0
	j	.L437
.L420:
.LBB71:
	.loc 1 1440 34 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1440 26
	j	.L421
.L422:
	.loc 1 1440 61 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1440 50 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L421:
	.loc 1 1440 39 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L422
.LBE71:
	.loc 1 1441 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1441 8 discriminator 1
	bne	a5,zero,.L423
	.loc 1 1441 61 discriminator 1
	li	a5,-1
	.loc 1 1441 61 is_stmt 0
	j	.L437
.L423:
	.loc 1 1443 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1444 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1444 8 discriminator 1
	bne	a5,zero,.L424
	.loc 1 1444 51 discriminator 1
	li	a5,-1
	.loc 1 1444 51 is_stmt 0
	j	.L437
.L424:
	.loc 1 1445 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1445 8
	bne	a5,zero,.L425
	.loc 1 1445 33 discriminator 1
	li	a5,-1
	.loc 1 1445 33 is_stmt 0
	j	.L437
.L425:
	.loc 1 1449 14 is_stmt 1
	sw	zero,-24(s0)
.LBB72:
	.loc 1 1450 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1450 5
	j	.L426
.L429:
	.loc 1 1451 9
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1452 15
	lhu	a5,-360(s0)
	.loc 1 1452 12
	bne	a5,zero,.L427
	.loc 1 1452 34 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1452 39
	j	.L428
.L427:
	.loc 1 1450 44 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L426:
	.loc 1 1450 33 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1450 28 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L429
.L428:
.LBE72:
	.loc 1 1454 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L430
	.loc 1 1454 23 discriminator 1
	li	a5,-1
	.loc 1 1454 23 is_stmt 0
	j	.L437
.L430:
	.loc 1 1455 25 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1456 15
	li	a5,1
	sh	a5,-448(s0)
	.loc 1 1456 35
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1456 50
	sw	zero,-440(s0)
	.loc 1 1456 68
	call	fs_now
	mv	a5,a0
	.loc 1 1456 66 discriminator 1
	sw	a5,-424(s0)
	.loc 1 1456 95 discriminator 1
	lw	a5,-424(s0)
	.loc 1 1456 89 discriminator 1
	sw	a5,-420(s0)
	.loc 1 1458 30
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1458 20
	lhu	a5,1000(a5)
	sh	a5,-30(s0)
	.loc 1 1459 28
	lw	a5,-164(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1460 22
	lw	a5,-424(s0)
	.loc 1 1460 16
	sw	a5,-428(s0)
	.loc 1 1460 46
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1460 59
	lhu	a5,1002(a5)
	.loc 1 1460 39
	sh	a5,-432(s0)
	.loc 1 1461 24
	lw	a5,-524(s0)
	.loc 1 1461 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1461 14
	beq	a5,zero,.L431
	.loc 1 1461 14 is_stmt 0 discriminator 1
	lhu	a5,-518(s0)
	j	.L432
.L431:
	.loc 1 1461 62 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1461 14 discriminator 2
	lhu	a5,1004(a5)
.L432:
	.loc 1 1461 14 is_stmt 0 discriminator 4
	sh	a5,-430(s0)
	.loc 1 1462 40 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L433
	.loc 1 1462 40 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L434
.L433:
	.loc 1 1462 40 discriminator 2
	li	a5,493
.L434:
	.loc 1 1462 50 is_stmt 1 discriminator 4
	lhu	a4,-30(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1462 48 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1462 15 discriminator 4
	sw	a5,-436(s0)
	.loc 1 1463 16
	lw	a5,-524(s0)
	.loc 1 1463 22
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1463 8
	beq	a5,zero,.L435
	.loc 1 1463 37 discriminator 1
	lw	a5,-436(s0)
	.loc 1 1463 43 discriminator 1
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-436(s0)
.L435:
	.loc 1 1464 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1466 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1466 8 discriminator 1
	beq	a5,zero,.L436
	.loc 1 1466 53 discriminator 1
	li	a5,-1
	.loc 1 1466 53 is_stmt 0
	j	.L437
.L436:
	.loc 1 1467 12 is_stmt 1
	li	a5,0
.L437:
	.loc 1 1468 1
	mv	a0,a5
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE57:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB58:
	.loc 1 1472 1
	.cfi_startproc
	addi	sp,sp,-496
	.cfi_def_cfa_offset 496
	sd	ra,488(sp)
	sd	s0,480(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,496
	.cfi_def_cfa 8, 0
	sd	a0,-488(s0)
	.loc 1 1474 5
	addi	a5,s0,-184
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1475 9
	addi	a5,s0,-184
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1475 8 discriminator 1
	bne	a5,zero,.L439
	.loc 1 1475 39 discriminator 1
	li	a5,-1
	.loc 1 1475 39 is_stmt 0
	j	.L457
.L439:
	.loc 1 1477 21 is_stmt 1
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1478 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L441
	.loc 1 1478 27 discriminator 1
	li	a5,-1
	.loc 1 1478 27 is_stmt 0
	j	.L457
.L441:
	.loc 1 1479 23 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1480 11
	lhu	a5,-272(s0)
	.loc 1 1480 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L442
	.loc 1 1480 34 discriminator 1
	li	a5,-1
	.loc 1 1480 34 is_stmt 0
	j	.L457
.L442:
	.loc 1 1482 11 is_stmt 1
	lw	a5,-264(s0)
	.loc 1 1482 8
	beq	a5,zero,.L443
.LBB73:
	.loc 1 1484 18
	sw	zero,-20(s0)
	.loc 1 1484 29
	sw	zero,-24(s0)
	.loc 1 1485 15
	j	.L444
.L451:
.LBB74:
	.loc 1 1486 13
	lw	a4,-20(s0)
	addi	a5,s0,-272
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1487 28
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 1 1488 17
	li	a5,32
	sw	a5,-52(s0)
.LBB75:
	.loc 1 1489 21
	sw	zero,-28(s0)
	.loc 1 1489 13
	j	.L445
.L448:
	.loc 1 1489 46 discriminator 5
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1489 49 discriminator 5
	lhu	a5,0(a5)
	.loc 1 1489 43 discriminator 5
	beq	a5,zero,.L446
	.loc 1 1489 69 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 1489 73
	j	.L447
.L446:
	.loc 1 1489 36 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L445:
	.loc 1 1489 26 discriminator 4
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-52(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L448
.L447:
.LBE75:
	.loc 1 1490 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L458
	.loc 1 1491 17
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L444:
.LBE74:
	.loc 1 1485 24
	lw	a5,-264(s0)
	.loc 1 1485 20
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L451
	j	.L450
.L458:
.LBB76:
	.loc 1 1490 29
	nop
.L450:
.LBE76:
	.loc 1 1493 12
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L443
	.loc 1 1493 33 discriminator 1
	li	a5,-1
	.loc 1 1493 33 is_stmt 0
	j	.L457
.L443:
.LBE73:
.LBB77:
	.loc 1 1496 51 is_stmt 1
	sw	zero,-32(s0)
	.loc 1 1496 43
	j	.L452
.L453:
	.loc 1 1496 78 discriminator 3
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-280(a5)
	.loc 1 1496 67 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L452:
	.loc 1 1496 56 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L453
.LBE77:
	.loc 1 1497 10
	addi	a3,s0,-296
	addi	a4,s0,-276
	addi	a5,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1497 8 discriminator 1
	bne	a5,zero,.L454
	.loc 1 1497 61 discriminator 1
	li	a5,-1
	.loc 1 1497 61 is_stmt 0
	j	.L457
.L454:
	.loc 1 1499 25 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-384
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1500 10
	addi	a5,s0,-384
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1500 8 discriminator 1
	bne	a5,zero,.L455
	.loc 1 1500 52 discriminator 1
	li	a5,-1
	.loc 1 1500 52 is_stmt 0
	j	.L457
.L455:
	.loc 1 1501 9 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1501 8 discriminator 1
	beq	a5,zero,.L456
	.loc 1 1501 50 discriminator 1
	li	a5,-1
	.loc 1 1501 50 is_stmt 0
	j	.L457
.L456:
	.loc 1 1504 5 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1506 25
	addi	a5,s0,-472
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1507 5
	addi	a4,s0,-472
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1508 12
	li	a5,0
.L457:
	.loc 1 1509 1
	mv	a0,a5
	ld	ra,488(sp)
	.cfi_restore 1
	ld	s0,480(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 496
	addi	sp,sp,496
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE58:
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB59:
	.loc 1 1513 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	sd	a0,-568(s0)
	.loc 1 1515 5
	addi	a5,s0,-176
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1516 9
	addi	a5,s0,-176
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1516 8 discriminator 1
	bne	a5,zero,.L460
	.loc 1 1516 39 discriminator 1
	li	a5,-1
	.loc 1 1516 39 is_stmt 0
	j	.L477
.L460:
	.loc 1 1518 21 is_stmt 1
	addi	a5,s0,-176
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 1519 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L462
	.loc 1 1519 27 discriminator 1
	li	a5,-1
	.loc 1 1519 27 is_stmt 0
	j	.L477
.L462:
	.loc 1 1520 23 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1521 11
	lhu	a5,-264(s0)
	.loc 1 1521 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L463
	.loc 1 1521 35 discriminator 1
	li	a5,-1
	.loc 1 1521 35 is_stmt 0
	j	.L477
.L463:
.LBB78:
	.loc 1 1524 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1524 5
	j	.L464
.L470:
.LBB79:
	.loc 1 1525 19
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1525 12
	beq	a5,zero,.L478
	.loc 1 1526 33
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1526 23
	addi	a5,a5,592
	sd	a5,-48(s0)
.LBB80:
	.loc 1 1527 18
	sw	zero,-24(s0)
	.loc 1 1527 9
	j	.L467
.L469:
	.loc 1 1528 19
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1528 16
	beq	a5,zero,.L468
	.loc 1 1528 28 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1528 31 discriminator 1
	lw	a4,0(a5)
	.loc 1 1528 23 discriminator 1
	li	a5,3
	bne	a4,a5,.L468
	.loc 1 1528 54 discriminator 2
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1528 57 discriminator 2
	lw	a5,4(a5)
	.loc 1 1528 49 discriminator 2
	lw	a4,-32(s0)
	sext.w	a4,a4
	bne	a4,a5,.L468
	.loc 1 1529 24
	li	a5,-1
	j	.L477
.L468:
	.loc 1 1527 46 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L467:
	.loc 1 1527 27 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L469
	j	.L466
.L478:
.LBE80:
	.loc 1 1525 25
	nop
.L466:
.LBE79:
	.loc 1 1524 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L464:
	.loc 1 1524 25 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L470
.LBE78:
.LBB81:
	.loc 1 1534 51
	sw	zero,-28(s0)
	.loc 1 1534 43
	j	.L471
.L472:
	.loc 1 1534 78 discriminator 3
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-272(a5)
	.loc 1 1534 67 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L471:
	.loc 1 1534 56 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L472
.LBE81:
	.loc 1 1535 10
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-176
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1535 8 discriminator 1
	bne	a5,zero,.L473
	.loc 1 1535 61 discriminator 1
	li	a5,-1
	.loc 1 1535 61 is_stmt 0
	j	.L477
.L473:
	.loc 1 1537 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1538 10
	addi	a5,s0,-376
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1538 8 discriminator 1
	bne	a5,zero,.L474
	.loc 1 1538 52 discriminator 1
	li	a5,-1
	.loc 1 1538 52 is_stmt 0
	j	.L477
.L474:
	.loc 1 1540 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1541 13
	lw	a5,-452(s0)
	.loc 1 1541 19
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1541 8
	beq	a5,zero,.L475
.LBB82:
	.loc 1 1542 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1542 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1543 17
	ld	a5,-40(s0)
	lhu	a5,1002(a5)
	.loc 1 1543 12
	beq	a5,zero,.L475
	.loc 1 1543 33 discriminator 1
	ld	a5,-40(s0)
	lhu	a4,1002(a5)
	.loc 1 1543 44 discriminator 1
	lhu	a5,-248(s0)
	.loc 1 1543 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L475
	.loc 1 1543 54 discriminator 2
	ld	a5,-40(s0)
	lhu	a4,1002(a5)
	.loc 1 1543 67 discriminator 2
	lhu	a5,-448(s0)
	.loc 1 1543 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L475
	.loc 1 1543 81 discriminator 3
	li	a5,-1
	.loc 1 1543 81 is_stmt 0
	j	.L477
.L475:
.LBE82:
	.loc 1 1545 9 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1545 8 discriminator 1
	beq	a5,zero,.L476
	.loc 1 1545 50 discriminator 1
	li	a5,-1
	.loc 1 1545 50 is_stmt 0
	j	.L477
.L476:
	.loc 1 1548 5 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1549 25
	addi	a5,s0,-552
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1550 5
	addi	a4,s0,-552
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1551 12
	li	a5,0
.L477:
	.loc 1 1552 1
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
.LFE59:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB60:
	.loc 1 1556 1
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
	mv	a4,a3
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 1557 14
	lw	a5,-56(s0)
	sw	a5,-20(s0)
	.loc 1 1557 36
	sw	zero,-24(s0)
	.loc 1 1557 60
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 1558 11
	j	.L480
.L484:
.LBB83:
	.loc 1 1559 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 1559 50
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 1560 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 1560 49
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L481
	.loc 1 1560 76 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L481:
	.loc 1 1561 29
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 1562 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L482
	.loc 1 1562 31 discriminator 1
	li	a5,-1
	.loc 1 1562 31 is_stmt 0
	j	.L483
.L482:
	.loc 1 1563 9 is_stmt 1
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1564 9
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	ld	a1,-32(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1565 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1566 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 1566 31
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 1566 46
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L480:
.LBE83:
	.loc 1 1558 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L484
	.loc 1 1568 14
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 1 1568 34
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1568 32 discriminator 1
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 1 1568 44 discriminator 1
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1568 74 discriminator 2
	li	a5,0
.L483:
	.loc 1 1569 1
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
.LFE60:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB61:
	.loc 1 1573 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 1 1574 20
	addi	a5,s0,-160
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1575 9
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1575 8 discriminator 1
	bne	a5,zero,.L486
	.loc 1 1575 39 discriminator 1
	li	a5,-1
	.loc 1 1575 39 is_stmt 0
	j	.L502
.L486:
	.loc 1 1576 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1576 8 discriminator 1
	beq	a5,zero,.L488
	.loc 1 1576 39 discriminator 1
	li	a5,-1
	.loc 1 1576 39 is_stmt 0
	j	.L502
.L488:
.LBB84:
	.loc 1 1578 51 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1578 43
	j	.L489
.L490:
	.loc 1 1578 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1578 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L489:
	.loc 1 1578 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L490
.LBE84:
	.loc 1 1579 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1579 8 discriminator 1
	bne	a5,zero,.L491
	.loc 1 1579 61 discriminator 1
	li	a5,-1
	.loc 1 1579 61 is_stmt 0
	j	.L502
.L491:
	.loc 1 1580 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1580 8
	bne	a5,zero,.L492
	.loc 1 1580 33 discriminator 1
	li	a5,-1
	.loc 1 1580 33 is_stmt 0
	j	.L502
.L492:
	.loc 1 1582 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1583 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1583 8 discriminator 1
	bne	a5,zero,.L493
	.loc 1 1583 51 discriminator 1
	li	a5,-1
	.loc 1 1583 51 is_stmt 0
	j	.L502
.L493:
	.loc 1 1586 32 is_stmt 1
	sw	zero,-24(s0)
.LBB85:
	.loc 1 1587 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1587 5
	j	.L494
.L497:
	.loc 1 1587 43 discriminator 5
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1587 67 discriminator 5
	lhu	a5,-360(s0)
	.loc 1 1587 64 discriminator 5
	bne	a5,zero,.L495
	.loc 1 1587 82 discriminator 2
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1587 86
	j	.L496
.L495:
	.loc 1 1587 38 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L494:
	.loc 1 1587 28 discriminator 4
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1587 24 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L497
.L496:
.LBE85:
	.loc 1 1588 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L498
	.loc 1 1588 23 discriminator 1
	li	a5,-1
	.loc 1 1588 23 is_stmt 0
	j	.L502
.L498:
	.loc 1 1589 23 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1589 56 discriminator 1
	li	a5,3
	sh	a5,-448(s0)
	.loc 1 1589 76 discriminator 1
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1589 87 discriminator 1
	sw	zero,-440(s0)
	.loc 1 1589 100 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 1 1589 99 discriminator 2
	sw	a5,-424(s0)
	.loc 1 1589 121 discriminator 2
	lw	a5,-424(s0)
	.loc 1 1589 118 discriminator 2
	sw	a5,-420(s0)
	.loc 1 1589 129 discriminator 2
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1591 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1591 8 discriminator 1
	beq	a5,zero,.L499
	.loc 1 1591 53 discriminator 1
	li	a5,-1
	.loc 1 1591 53 is_stmt 0
	j	.L502
.L499:
	.loc 1 1593 21 is_stmt 1
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1593 14 discriminator 1
	sw	a5,-32(s0)
	.loc 1 1593 40 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,240
	bleu	a4,a5,.L500
	.loc 1 1593 58 discriminator 1
	li	a5,240
	sw	a5,-32(s0)
.L500:
	.loc 1 1594 23
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1594 50 discriminator 1
	lw	a4,-32(s0)
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1595 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1596 9
	lw	a3,-32(s0)
	addi	a2,s0,-688
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 1596 8 discriminator 1
	beq	a5,zero,.L501
	.loc 1 1596 61 discriminator 1
	li	a5,-1
	.loc 1 1596 61 is_stmt 0
	j	.L502
.L501:
	.loc 1 1597 12 is_stmt 1
	li	a5,0
.L502:
	.loc 1 1598 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE61:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB62:
	.loc 1 1602 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 1 1604 5
	addi	a5,s0,-160
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1605 5
	addi	a5,s0,-288
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1607 9
	addi	a4,s0,-288
	addi	a5,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1607 8 discriminator 1
	bne	a5,zero,.L504
	.loc 1 1607 45 discriminator 1
	li	a5,0
	.loc 1 1607 45 is_stmt 0
	j	.L521
.L504:
	.loc 1 1608 9 is_stmt 1
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1608 8 discriminator 1
	bne	a5,zero,.L506
	.loc 1 1608 42 discriminator 1
	li	a5,-1
	.loc 1 1608 42 is_stmt 0
	j	.L521
.L506:
	.loc 1 1610 21 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1611 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L507
	.loc 1 1611 27 discriminator 1
	li	a5,-1
	.loc 1 1611 27 is_stmt 0
	j	.L521
.L507:
	.loc 1 1612 9 is_stmt 1
	addi	a5,s0,-288
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1612 8 discriminator 1
	beq	a5,zero,.L508
	.loc 1 1612 42 discriminator 1
	li	a5,-1
	.loc 1 1612 42 is_stmt 0
	j	.L521
.L508:
.LBB86:
	.loc 1 1615 13 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1615 5
	j	.L509
.L510:
	.loc 1 1615 42 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1615 54 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-312(a5)
	.loc 1 1615 29 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L509:
	.loc 1 1615 18 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L510
.LBE86:
	.loc 1 1616 10
	addi	a3,s0,-312
	addi	a4,s0,-292
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1616 8 discriminator 1
	bne	a5,zero,.L511
	.loc 1 1616 61 discriminator 1
	li	a5,-1
	.loc 1 1616 61 is_stmt 0
	j	.L521
.L511:
	.loc 1 1617 10 is_stmt 1
	addi	a3,s0,-328
	addi	a4,s0,-296
	addi	a5,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1617 8 discriminator 1
	bne	a5,zero,.L512
	.loc 1 1617 62 discriminator 1
	li	a5,-1
	.loc 1 1617 62 is_stmt 0
	j	.L521
.L512:
	.loc 1 1618 14 is_stmt 1
	lbu	a5,-312(s0)
	.loc 1 1618 8
	beq	a5,zero,.L513
	.loc 1 1618 34 discriminator 2
	lbu	a5,-328(s0)
	.loc 1 1618 26 discriminator 2
	bne	a5,zero,.L514
.L513:
	.loc 1 1618 54 discriminator 3
	li	a5,-1
	.loc 1 1618 54 is_stmt 0
	j	.L521
.L514:
	.loc 1 1620 24 is_stmt 1
	lw	a5,-296(s0)
	addi	a4,s0,-416
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1621 12
	lhu	a5,-416(s0)
	.loc 1 1621 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L515
	.loc 1 1621 35 discriminator 1
	li	a5,-1
	.loc 1 1621 35 is_stmt 0
	j	.L521
.L515:
	.loc 1 1623 24 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-504
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1624 10
	addi	a5,s0,-504
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1624 8 discriminator 1
	bne	a5,zero,.L516
	.loc 1 1624 51 discriminator 1
	li	a5,-1
	.loc 1 1624 51 is_stmt 0
	j	.L521
.L516:
	.loc 1 1625 10 is_stmt 1
	addi	a5,s0,-416
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1625 8 discriminator 1
	bne	a5,zero,.L517
	.loc 1 1625 51 discriminator 1
	li	a5,-1
	.loc 1 1625 51 is_stmt 0
	j	.L521
.L517:
	.loc 1 1628 26 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-592
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1629 27
	addi	a4,s0,-680
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1630 14
	lw	a5,-580(s0)
	.loc 1 1630 20
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1630 8
	beq	a5,zero,.L518
.LBB87:
	.loc 1 1631 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1631 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1632 17
	ld	a5,-32(s0)
	lhu	a5,1002(a5)
	.loc 1 1632 12
	beq	a5,zero,.L518
	.loc 1 1632 33 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1002(a5)
	.loc 1 1632 48 discriminator 1
	lhu	a5,-664(s0)
	.loc 1 1632 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L518
	.loc 1 1632 58 discriminator 2
	ld	a5,-32(s0)
	lhu	a4,1002(a5)
	.loc 1 1632 72 discriminator 2
	lhu	a5,-576(s0)
	.loc 1 1632 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L518
	.loc 1 1632 86 discriminator 3
	li	a5,-1
	.loc 1 1632 86 is_stmt 0
	j	.L521
.L518:
.LBE87:
	.loc 1 1634 9 is_stmt 1
	lw	a5,-296(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1634 8 discriminator 1
	beq	a5,zero,.L519
	.loc 1 1634 50 discriminator 1
	li	a5,-1
	.loc 1 1634 50 is_stmt 0
	j	.L521
.L519:
	.loc 1 1635 9 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1635 8 discriminator 1
	beq	a5,zero,.L520
	.loc 1 1635 47 discriminator 1
	li	a5,-1
	.loc 1 1635 47 is_stmt 0
	j	.L521
.L520:
	.loc 1 1636 12 is_stmt 1
	li	a5,0
.L521:
	.loc 1 1637 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE62:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB63:
	.loc 1 1641 1
	.cfi_startproc
	addi	sp,sp,-496
	.cfi_def_cfa_offset 496
	sd	ra,488(sp)
	sd	s0,480(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,496
	.cfi_def_cfa 8, 0
	sd	a0,-488(s0)
	sd	a1,-496(s0)
	.loc 1 1643 5
	addi	a5,s0,-152
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1644 5
	addi	a5,s0,-280
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1646 9
	addi	a5,s0,-280
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1646 8 discriminator 1
	beq	a5,zero,.L523
	.loc 1 1646 37 discriminator 2
	addi	a5,s0,-152
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1646 34 discriminator 1
	bne	a5,zero,.L524
.L523:
	.loc 1 1646 70 discriminator 3
	li	a5,-1
	.loc 1 1646 70 is_stmt 0
	j	.L535
.L524:
	.loc 1 1647 21 is_stmt 1
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1648 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L526
	.loc 1 1648 27 discriminator 1
	li	a5,-1
	.loc 1 1648 27 is_stmt 0
	j	.L535
.L526:
	.loc 1 1649 9 is_stmt 1
	addi	a5,s0,-280
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1649 8 discriminator 1
	beq	a5,zero,.L527
	.loc 1 1649 42 discriminator 1
	li	a5,-1
	.loc 1 1649 42 is_stmt 0
	j	.L535
.L527:
	.loc 1 1651 23 is_stmt 1
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1652 11
	lhu	a5,-368(s0)
	.loc 1 1652 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L528
	.loc 1 1652 35 discriminator 1
	li	a5,-1
	.loc 1 1652 35 is_stmt 0
	j	.L535
.L528:
.LBB88:
	.loc 1 1654 52 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1654 43
	j	.L529
.L530:
	.loc 1 1654 79 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-376(a5)
	.loc 1 1654 68 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L529:
	.loc 1 1654 57 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L530
.LBE88:
	.loc 1 1655 10
	addi	a3,s0,-392
	addi	a4,s0,-372
	addi	a5,s0,-280
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1655 8 discriminator 1
	bne	a5,zero,.L531
	.loc 1 1655 64 discriminator 1
	li	a5,-1
	.loc 1 1655 64 is_stmt 0
	j	.L535
.L531:
	.loc 1 1656 13 is_stmt 1
	lbu	a5,-392(s0)
	.loc 1 1656 8
	bne	a5,zero,.L532
	.loc 1 1656 33 discriminator 1
	li	a5,-1
	.loc 1 1656 33 is_stmt 0
	j	.L535
.L532:
	.loc 1 1658 24 is_stmt 1
	lw	a5,-372(s0)
	addi	a4,s0,-480
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1659 10
	addi	a5,s0,-480
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1659 8 discriminator 1
	bne	a5,zero,.L533
	.loc 1 1659 51 discriminator 1
	li	a5,-1
	.loc 1 1659 51 is_stmt 0
	j	.L535
.L533:
	.loc 1 1661 9 is_stmt 1
	lw	a5,-372(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-392
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1661 8 discriminator 1
	beq	a5,zero,.L534
	.loc 1 1661 53 discriminator 1
	li	a5,-1
	.loc 1 1661 53 is_stmt 0
	j	.L535
.L534:
	.loc 1 1663 7 is_stmt 1
	lhu	a5,-362(s0)
	.loc 1 1663 13
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-362(s0)
	.loc 1 1664 16
	call	fs_now
	mv	a5,a0
	.loc 1 1664 14 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1665 5
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1666 12
	li	a5,0
.L535:
	.loc 1 1667 1
	mv	a0,a5
	ld	ra,488(sp)
	.cfi_restore 1
	ld	s0,480(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 496
	addi	sp,sp,496
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE63:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB64:
	.loc 1 1670 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	sd	a1,-256(s0)
	.loc 1 1671 8
	ld	a5,-256(s0)
	bne	a5,zero,.L537
	.loc 1 1671 21 discriminator 1
	li	a5,-1
	.loc 1 1671 21 is_stmt 0
	j	.L540
.L537:
	.loc 1 1672 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1673 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1674 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L539
	.loc 1 1674 23 discriminator 1
	li	a5,-1
	.loc 1 1674 23 is_stmt 0
	j	.L540
.L539:
	.loc 1 1675 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1676 18
	lhu	a4,-240(s0)
	.loc 1 1676 14
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 1676 39
	lhu	a4,-234(s0)
	.loc 1 1676 35
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 1676 60
	lw	a4,-232(s0)
	.loc 1 1676 56
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 1676 76
	ld	a5,-256(s0)
	lw	a4,-20(s0)
	sw	a4,8(a5)
	.loc 1 1677 18
	lw	a4,-228(s0)
	.loc 1 1677 14
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 1677 37
	lhu	a4,-224(s0)
	.loc 1 1677 33
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 1677 55
	lhu	a4,-222(s0)
	.loc 1 1677 51
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 1678 19
	lw	a4,-220(s0)
	.loc 1 1678 15
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 1678 41
	lw	a4,-216(s0)
	.loc 1 1678 37
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 1678 63
	lw	a4,-212(s0)
	.loc 1 1678 59
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 1679 12
	li	a5,0
.L540:
	.loc 1 1680 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE64:
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB65:
	.loc 1 1683 1
	.cfi_startproc
	addi	sp,sp,-400
	.cfi_def_cfa_offset 400
	sd	ra,392(sp)
	sd	s0,384(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,400
	.cfi_def_cfa 8, 0
	sd	a0,-376(s0)
	sd	a1,-384(s0)
	mv	a5,a2
	sw	a5,-388(s0)
	.loc 1 1684 8
	ld	a5,-384(s0)
	beq	a5,zero,.L542
	.loc 1 1684 14 discriminator 2
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L543
.L542:
	.loc 1 1684 36 discriminator 3
	li	a5,-1
	.loc 1 1684 36 is_stmt 0
	j	.L554
.L543:
	.loc 1 1685 20 is_stmt 1
	addi	a5,s0,-160
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB89:
	.loc 1 1686 51
	sw	zero,-20(s0)
	.loc 1 1686 43
	j	.L545
.L546:
	.loc 1 1686 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1686 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L545:
	.loc 1 1686 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L546
.LBE89:
	.loc 1 1687 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1687 8 discriminator 1
	bne	a5,zero,.L547
	.loc 1 1687 61 discriminator 1
	li	a5,-1
	.loc 1 1687 61 is_stmt 0
	j	.L554
.L547:
	.loc 1 1688 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1688 57 discriminator 1
	lhu	a5,-272(s0)
	.loc 1 1688 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L548
	.loc 1 1688 80 discriminator 1
	li	a5,-1
	.loc 1 1688 80 is_stmt 0
	j	.L554
.L548:
	.loc 1 1689 21 is_stmt 1
	addi	a4,s0,-184
	addi	a5,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 1689 48 discriminator 1
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L549
	.loc 1 1689 63 discriminator 1
	li	a5,-1
	.loc 1 1689 63 is_stmt 0
	j	.L554
.L549:
	.loc 1 1690 23 is_stmt 1
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1691 11
	lhu	a5,-360(s0)
	.loc 1 1691 8
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L550
	.loc 1 1691 38 discriminator 1
	li	a5,-1
	.loc 1 1691 38 is_stmt 0
	j	.L554
.L550:
	.loc 1 1692 15 is_stmt 1
	lw	a5,-352(s0)
	.loc 1 1692 9
	sw	a5,-24(s0)
	.loc 1 1692 25
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-388(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	ble	a4,a5,.L551
	.loc 1 1692 39 discriminator 1
	lw	a5,-388(s0)
	sw	a5,-24(s0)
.L551:
	.loc 1 1692 51 discriminator 3
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L552
	.loc 1 1692 61 discriminator 4
	sw	zero,-24(s0)
.L552:
	.loc 1 1693 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	ble	a5,zero,.L553
	.loc 1 1693 16 discriminator 1
	lw	a4,-24(s0)
	addi	a5,s0,-360
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L553:
	.loc 1 1694 12
	lw	a5,-24(s0)
.L554:
	.loc 1 1695 1
	mv	a0,a5
	ld	ra,392(sp)
	.cfi_restore 1
	ld	s0,384(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 400
	addi	sp,sp,400
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE65:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB66:
	.loc 1 1698 1
	.cfi_startproc
	addi	sp,sp,-368
	.cfi_def_cfa_offset 368
	sd	ra,360(sp)
	sd	s0,352(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,368
	.cfi_def_cfa 8, 0
	sd	a0,-360(s0)
	sd	a1,-368(s0)
	.loc 1 1699 8
	ld	a5,-368(s0)
	bne	a5,zero,.L556
	.loc 1 1699 21 discriminator 1
	li	a5,-1
	.loc 1 1699 21 is_stmt 0
	j	.L563
.L556:
	.loc 1 1700 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB90:
	.loc 1 1701 51
	sw	zero,-20(s0)
	.loc 1 1701 43
	j	.L558
.L559:
	.loc 1 1701 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 1701 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L558:
	.loc 1 1701 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L559
.LBE90:
	.loc 1 1702 10
	addi	a3,s0,-176
	addi	a4,s0,-156
	addi	a5,s0,-152
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1702 8 discriminator 1
	bne	a5,zero,.L560
	.loc 1 1702 61 discriminator 1
	li	a5,-1
	.loc 1 1702 61 is_stmt 0
	j	.L563
.L560:
	.loc 1 1703 24 is_stmt 1
	lw	a5,-156(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1703 57 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1703 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L561
	.loc 1 1703 80 discriminator 1
	li	a5,-1
	.loc 1 1703 80 is_stmt 0
	j	.L563
.L561:
	.loc 1 1704 21 is_stmt 1
	addi	a4,s0,-176
	addi	a5,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1704 48 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L562
	.loc 1 1704 63 discriminator 1
	li	a5,-1
	.loc 1 1704 63 is_stmt 0
	j	.L563
.L562:
	.loc 1 1705 23 is_stmt 1
	addi	a4,s0,-352
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1706 18
	lhu	a4,-352(s0)
	.loc 1 1706 14
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 1 1706 39
	lhu	a4,-346(s0)
	.loc 1 1706 35
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 1 1706 60
	lw	a4,-344(s0)
	.loc 1 1706 56
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 1 1706 76
	ld	a5,-368(s0)
	lw	a4,-24(s0)
	sw	a4,8(a5)
	.loc 1 1707 18
	lw	a4,-340(s0)
	.loc 1 1707 14
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 1 1707 37
	lhu	a4,-336(s0)
	.loc 1 1707 33
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 1 1707 55
	lhu	a4,-334(s0)
	.loc 1 1707 51
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 1 1708 19
	lw	a4,-332(s0)
	.loc 1 1708 15
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 1 1708 41
	lw	a4,-328(s0)
	.loc 1 1708 37
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 1 1708 63
	lw	a4,-324(s0)
	.loc 1 1708 59
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 1 1709 12
	li	a5,0
.L563:
	.loc 1 1710 1
	mv	a0,a5
	ld	ra,360(sp)
	.cfi_restore 1
	ld	s0,352(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 368
	addi	sp,sp,368
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE66:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB67:
	.loc 1 1713 1
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	mv	a5,a1
	sw	a5,-268(s0)
	.loc 1 1714 20
	addi	a5,s0,-160
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1715 21
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1716 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L565
	.loc 1 1716 23 discriminator 1
	li	a5,-1
	.loc 1 1716 23 is_stmt 0
	j	.L568
.L565:
	.loc 1 1717 23 is_stmt 1
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1719 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1719 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1720 12
	ld	a5,-32(s0)
	lhu	a5,1002(a5)
	.loc 1 1720 8
	beq	a5,zero,.L567
	.loc 1 1720 27 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1002(a5)
	.loc 1 1720 38 discriminator 1
	lhu	a5,-232(s0)
	.loc 1 1720 9 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L567
	.loc 1 1720 52 discriminator 2
	li	a5,-1
	.loc 1 1720 52 is_stmt 0
	j	.L568
.L567:
	.loc 1 1721 20 is_stmt 1
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1721 13
	sw	a5,-236(s0)
	.loc 1 1721 40
	call	fs_now
	mv	a5,a0
	.loc 1 1721 38 discriminator 1
	sw	a5,-220(s0)
	.loc 1 1722 5
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1723 12
	li	a5,0
.L568:
	.loc 1 1724 1
	mv	a0,a5
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 272
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE67:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB68:
	.loc 1 1727 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	mv	a5,a1
	mv	a4,a2
	sh	a5,-250(s0)
	mv	a5,a4
	sh	a5,-252(s0)
	.loc 1 1728 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1729 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1730 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L570
	.loc 1 1730 23 discriminator 1
	li	a5,-1
	.loc 1 1730 23 is_stmt 0
	j	.L573
.L570:
	.loc 1 1731 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1733 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1733 27
	lhu	a5,1002(a5)
	.loc 1 1733 8
	beq	a5,zero,.L572
	.loc 1 1733 46 discriminator 1
	li	a5,-1
	.loc 1 1733 46 is_stmt 0
	j	.L573
.L572:
	.loc 1 1734 12 is_stmt 1
	lhu	a5,-250(s0)
	sh	a5,-224(s0)
	.loc 1 1734 26
	lhu	a5,-252(s0)
	sh	a5,-222(s0)
	.loc 1 1734 44
	call	fs_now
	mv	a5,a0
	.loc 1 1734 42 discriminator 1
	sw	a5,-212(s0)
	.loc 1 1735 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1736 12
	li	a5,0
.L573:
	.loc 1 1737 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE68:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB69:
	.loc 1 1740 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-252(s0)
	mv	a5,a4
	sw	a5,-256(s0)
	.loc 1 1741 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1742 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1743 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L575
	.loc 1 1743 23 discriminator 1
	li	a5,-1
	.loc 1 1743 23 is_stmt 0
	j	.L581
.L575:
	.loc 1 1744 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1745 20
	call	fs_now
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1746 45
	lw	a5,-252(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L577
	.loc 1 1746 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L578
.L577:
	.loc 1 1746 45 discriminator 2
	lw	a5,-252(s0)
.L578:
	.loc 1 1746 14 is_stmt 1 discriminator 4
	sw	a5,-220(s0)
	.loc 1 1747 45
	lw	a5,-256(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L579
	.loc 1 1747 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L580
.L579:
	.loc 1 1747 45 discriminator 2
	lw	a5,-256(s0)
.L580:
	.loc 1 1747 14 is_stmt 1 discriminator 4
	sw	a5,-216(s0)
	.loc 1 1748 14
	lw	a5,-24(s0)
	sw	a5,-212(s0)
	.loc 1 1749 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1750 12
	li	a5,0
.L581:
	.loc 1 1751 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE69:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB70:
	.loc 1 1752 31
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
	.loc 1 1754 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1755 1
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
.LFE70:
	.size	fs_open, .-fs_open
	.section	.rodata
	.align	3
.LC19:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB71:
	.loc 1 1758 53
	.cfi_startproc
	addi	sp,sp,-464
	.cfi_def_cfa_offset 464
	sd	ra,456(sp)
	sd	s0,448(sp)
	sd	s1,440(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,464
	.cfi_def_cfa 8, 0
	sd	a0,-456(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-460(s0)
	mv	a5,a4
	sw	a5,-464(s0)
	.loc 1 1759 32
	call	get_current_file_table
	sd	a0,-72(s0)
	.loc 1 1761 8
	ld	a5,-456(s0)
	beq	a5,zero,.L585
	.loc 1 1761 22 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1761 15 discriminator 1
	beq	a5,zero,.L585
	.loc 1 1761 42 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1761 34 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L586
	.loc 1 1761 58 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1761 51 discriminator 3
	bne	a5,zero,.L586
.L585:
.LBB91:
	.loc 1 1762 31
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1762 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1763 53
	ld	a5,-80(s0)
	addi	a4,a5,872
	.loc 1 1763 9
	addi	a5,s0,-224
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBE91:
	.loc 1 1761 70
	j	.L587
.L586:
	.loc 1 1765 9
	addi	a5,s0,-224
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L587:
	.loc 1 1769 9
	addi	a5,s0,-224
	lla	a1,.LC19
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1769 8 discriminator 1
	bne	a5,zero,.L588
.LBB92:
	.loc 1 1770 18
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1770 9
	j	.L589
.L592:
	.loc 1 1771 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1771 16
	bne	a5,zero,.L590
	.loc 1 1772 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1772 33
	call	new_file_table
	mv	a5,a0
	.loc 1 1772 31 discriminator 1
	sd	a5,0(s1)
	.loc 1 1773 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1773 37
	li	a4,5
	sw	a4,0(a5)
	.loc 1 1774 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1774 37
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1775 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1775 37
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1776 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1776 36
	sw	zero,96(a5)
	.loc 1 1777 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1777 42
	sw	zero,116(a5)
	.loc 1 1778 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1778 43
	sw	zero,120(a5)
	.loc 1 1779 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1779 39
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1780 24
	lw	a5,-36(s0)
	j	.L622
.L590:
	.loc 1 1770 46 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L589:
	.loc 1 1770 27 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L592
.LBE92:
	.loc 1 1783 16
	li	a5,-1
	j	.L622
.L588:
	.loc 1 1786 21
	addi	a5,s0,-224
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 1788 9
	sw	zero,-44(s0)
	.loc 1 1790 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L593
	.loc 1 1792 19
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1792 12
	beq	a5,zero,.L594
.LBB93:
.LBB94:
	.loc 1 1796 22
	sw	zero,-48(s0)
	.loc 1 1796 13
	j	.L595
.L596:
	.loc 1 1796 49 discriminator 3
	lw	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-304(a5)
	.loc 1 1796 38 discriminator 3
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L595:
	.loc 1 1796 27 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L596
.LBE94:
	.loc 1 1797 18
	addi	a3,s0,-336
	addi	a4,s0,-316
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1797 16 discriminator 1
	bne	a5,zero,.L597
	.loc 1 1798 24
	li	a5,-1
	j	.L622
.L597:
	.loc 1 1800 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1801 16
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L599
	.loc 1 1801 39 discriminator 1
	li	a5,-1
	.loc 1 1801 39 is_stmt 0
	j	.L622
.L599:
	.loc 1 1802 17 is_stmt 1
	lw	a5,-316(s0)
	lw	a3,-84(s0)
	addi	a4,s0,-336
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1802 16 discriminator 1
	beq	a5,zero,.L600
	.loc 1 1802 65 discriminator 1
	li	a5,-1
	.loc 1 1802 65 is_stmt 0
	j	.L622
.L600:
	.loc 1 1803 18 is_stmt 1
	lw	a5,-84(s0)
	sw	a5,-40(s0)
	.loc 1 1804 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1808 38
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1808 28
	lhu	a5,1000(a5)
	sh	a5,-86(s0)
.LBB95:
	.loc 1 1810 59
	sw	zero,-52(s0)
	.loc 1 1810 51
	j	.L601
.L602:
	.loc 1 1810 91 discriminator 3
	lw	a5,-52(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-328(a5)
	.loc 1 1810 78 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L601:
	.loc 1 1810 66 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L602
.LBE95:
	.loc 1 1811 33
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1811 22
	lhu	a5,1004(a5)
	sh	a5,-54(s0)
	.loc 1 1812 17
	addi	a3,s0,-360
	addi	a4,s0,-340
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1812 16 discriminator 1
	beq	a5,zero,.L603
.LBB96:
	.loc 1 1813 40
	lw	a5,-340(s0)
	addi	a4,s0,-448
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1814 28
	lw	a5,-436(s0)
	.loc 1 1814 34
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1814 20
	beq	a5,zero,.L603
	.loc 1 1814 49 discriminator 1
	lhu	a5,-430(s0)
	sh	a5,-54(s0)
.L603:
.LBE96:
	.loc 1 1816 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1816 40
	lhu	a5,1002(a5)
	.loc 1 1816 20
	sh	a5,-296(s0)
	.loc 1 1817 20
	lhu	a5,-54(s0)
	sh	a5,-294(s0)
	.loc 1 1818 30
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1818 54
	beq	a5,zero,.L605
	.loc 1 1818 54 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L606
.L605:
	.loc 1 1818 54 discriminator 2
	li	a5,420
.L606:
	.loc 1 1818 64 is_stmt 1 discriminator 4
	lhu	a4,-86(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1818 62 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1818 21 discriminator 4
	sw	a5,-300(s0)
	.loc 1 1819 46
	call	fs_now
	mv	a5,a0
	.loc 1 1819 44 discriminator 1
	sw	a5,-284(s0)
	.loc 1 1819 37 discriminator 1
	lw	a5,-284(s0)
	.loc 1 1819 33 discriminator 1
	sw	a5,-288(s0)
	.loc 1 1819 26 discriminator 1
	lw	a5,-288(s0)
	.loc 1 1819 22 discriminator 1
	sw	a5,-292(s0)
	.loc 1 1820 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1821 25
	li	a5,1
	sw	a5,-44(s0)
.LBE93:
	j	.L607
.L594:
	.loc 1 1823 20
	li	a5,-1
	j	.L622
.L593:
	.loc 1 1826 9
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L607:
	.loc 1 1829 11
	lhu	a5,-312(s0)
	.loc 1 1829 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L608
	.loc 1 1829 32 discriminator 1
	lhu	a5,-312(s0)
	.loc 1 1829 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L608
	.loc 1 1829 55 discriminator 2
	li	a5,-1
	.loc 1 1829 55 is_stmt 0
	j	.L622
.L608:
	.loc 1 1832 11 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1832 8
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L609
.LBB97:
	.loc 1 1833 13
	sw	zero,-60(s0)
	.loc 1 1834 12
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L610
	.loc 1 1834 37 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,4
	sw	a5,-60(s0)
.L610:
	.loc 1 1835 19
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1835 12
	beq	a5,zero,.L611
	.loc 1 1835 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,2
	sw	a5,-60(s0)
.L611:
	.loc 1 1836 19
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1836 12
	beq	a5,zero,.L612
	.loc 1 1836 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,6
	sw	a5,-60(s0)
.L612:
	.loc 1 1839 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L613
	.loc 1 1840 18
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L614
	.loc 1 1840 18 is_stmt 0 discriminator 1
	lw	a5,-60(s0)
	j	.L615
.L614:
	.loc 1 1840 18 discriminator 2
	li	a5,4
.L615:
	.loc 1 1840 18 discriminator 4
	addi	a4,s0,-312
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 1840 16 is_stmt 1 discriminator 1
	bne	a5,zero,.L613
	.loc 1 1840 64 discriminator 5
	li	a5,-1
	.loc 1 1840 64 is_stmt 0
	j	.L622
.L609:
.LBE97:
	.loc 1 1842 18 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1842 15
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L613
	.loc 1 1843 14
	addi	a5,s0,-312
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1843 12 discriminator 1
	bne	a5,zero,.L613
	.loc 1 1843 53 discriminator 1
	li	a5,-1
	.loc 1 1843 53 is_stmt 0
	j	.L622
.L613:
.LBB98:
	.loc 1 1846 14 is_stmt 1
	li	a5,3
	sw	a5,-64(s0)
	.loc 1 1846 5
	j	.L616
.L621:
	.loc 1 1847 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1847 12
	bne	a5,zero,.L617
	.loc 1 1848 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1848 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1848 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1850 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1850 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1851 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1851 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1852 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1852 34
	lw	a4,-40(s0)
	sw	a4,4(a5)
	.loc 1 1853 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1853 34
	ld	t5,-312(s0)
	ld	t4,-304(s0)
	ld	t3,-296(s0)
	ld	t1,-288(s0)
	ld	a7,-280(s0)
	ld	a6,-272(s0)
	ld	a0,-264(s0)
	ld	a1,-256(s0)
	ld	a2,-248(s0)
	ld	a3,-240(s0)
	ld	a4,-232(s0)
	sd	t5,8(a5)
	sd	t4,16(a5)
	sd	t3,24(a5)
	sd	t1,32(a5)
	sd	a7,40(a5)
	sd	a6,48(a5)
	sd	a0,56(a5)
	sd	a1,64(a5)
	sd	a2,72(a5)
	sd	a3,80(a5)
	sd	a4,88(a5)
	.loc 1 1854 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1854 34
	sw	zero,96(a5)
	.loc 1 1855 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1855 40
	sw	zero,116(a5)
	.loc 1 1856 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1856 41
	sw	zero,120(a5)
	.loc 1 1857 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1857 35
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1860 24
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1860 16
	beq	a5,zero,.L618
	.loc 1 1860 48 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1860 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1860 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L618
.LBB99:
	.loc 1 1861 52
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1861 17
	addi	a4,a5,8
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1862 32
	call	fs_now
	mv	a5,a0
	sw	a5,-92(s0)
	.loc 1 1863 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1863 42
	lw	a4,-92(s0)
	sw	a4,32(a5)
	.loc 1 1864 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1864 42
	lw	a4,-92(s0)
	sw	a4,36(a5)
	.loc 1 1865 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1865 42
	lw	a4,-92(s0)
	sw	a4,28(a5)
	.loc 1 1866 46
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1866 35
	addi	a4,a5,8
	.loc 1 1866 17
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1867 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1867 36
	sw	zero,96(a5)
.L618:
.LBE99:
	.loc 1 1870 24
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1870 16
	beq	a5,zero,.L619
	.loc 1 1870 49 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1870 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1870 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L619
	.loc 1 1871 48
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1871 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a3,-72(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1871 56
	lw	a4,16(a4)
	.loc 1 1871 36
	sw	a4,96(a5)
.L619:
	.loc 1 1874 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	beq	a5,zero,.L620
	.loc 1 1875 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1875 36
	ld	t5,-312(s0)
	ld	t4,-304(s0)
	ld	t3,-296(s0)
	ld	t1,-288(s0)
	ld	a7,-280(s0)
	ld	a6,-272(s0)
	ld	a0,-264(s0)
	ld	a1,-256(s0)
	ld	a2,-248(s0)
	ld	a3,-240(s0)
	ld	a4,-232(s0)
	sd	t5,8(a5)
	sd	t4,16(a5)
	sd	t3,24(a5)
	sd	t1,32(a5)
	sd	a7,40(a5)
	sd	a6,48(a5)
	sd	a0,56(a5)
	sd	a1,64(a5)
	sd	a2,72(a5)
	sd	a3,80(a5)
	sd	a4,88(a5)
.L620:
	.loc 1 1877 20
	lw	a5,-64(s0)
	j	.L622
.L617:
	.loc 1 1846 42 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L616:
	.loc 1 1846 23 discriminator 1
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L621
.LBE98:
	.loc 1 1880 12
	li	a5,-1
.L622:
	.loc 1 1881 1
	mv	a0,a5
	ld	ra,456(sp)
	.cfi_restore 1
	ld	s0,448(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 464
	ld	s1,440(sp)
	.cfi_restore 9
	addi	sp,sp,464
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE71:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB72:
	.loc 1 1885 50
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
	.loc 1 1886 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1888 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1888 7
	bne	a5,zero,.L624
	.loc 1 1889 16
	li	a5,-1
	j	.L625
.L624:
	.loc 1 1892 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1893 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L626
	.loc 1 1893 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L627
.L626:
	.loc 1 1894 16
	li	a5,-1
	j	.L625
.L627:
	.loc 1 1896 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1896 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1897 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1897 41
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1897 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1898 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L628
	.loc 1 1898 32 discriminator 1
	li	a5,0
	.loc 1 1898 32 is_stmt 0
	j	.L625
.L628:
	.loc 1 1900 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L629
	mv	a5,a4
.L629:
	.loc 1 1900 14
	sw	a5,-48(s0)
	.loc 1 1901 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,96(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1902 6
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1902 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 1904 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1904 18 discriminator 1
	ld	a5,-40(s0)
	sw	a4,28(a5)
	.loc 1 1905 5
	ld	a5,-40(s0)
	lw	a4,4(a5)
	.loc 1 1905 26
	ld	a5,-40(s0)
	addi	a5,a5,8
	.loc 1 1905 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1906 12
	lw	a5,-48(s0)
.L625:
	.loc 1 1907 1
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
.LFE72:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB73:
	.loc 1 1911 57
	.cfi_startproc
	addi	sp,sp,-624
	.cfi_def_cfa_offset 624
	sd	ra,616(sp)
	sd	s0,608(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,624
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-608(s0)
	sd	a2,-616(s0)
	sw	a5,-596(s0)
	.loc 1 1912 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1914 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L631
	.loc 1 1914 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L632
.L631:
	.loc 1 1914 48 discriminator 3
	li	a5,-1
	.loc 1 1914 48 is_stmt 0
	j	.L633
.L632:
	.loc 1 1915 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1915 8
	bne	a5,zero,.L634
	.loc 1 1915 40 discriminator 1
	li	a5,-1
	.loc 1 1915 40 is_stmt 0
	j	.L633
.L634:
	.loc 1 1917 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1917 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1918 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1918 8
	li	a5,3
	beq	a4,a5,.L635
	.loc 1 1918 36 discriminator 1
	li	a5,-1
	.loc 1 1918 36 is_stmt 0
	j	.L633
.L635:
	.loc 1 1919 10 is_stmt 1
	ld	a5,-56(s0)
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1919 8 discriminator 1
	bne	a5,zero,.L636
	.loc 1 1919 47 discriminator 1
	li	a5,-1
	.loc 1 1919 47 is_stmt 0
	j	.L633
.L636:
	.loc 1 1922 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1924 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1925 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1927 23
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1927 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1927 58
	beq	a5,zero,.L637
	.loc 1 1927 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L638
.L637:
	.loc 1 1927 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,96(a5)
.L638:
	.loc 1 1927 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1928 10
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1928 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1928 8
	beq	a5,zero,.L639
	.loc 1 1929 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,96(a5)
.L639:
	.loc 1 1931 14
	sw	zero,-36(s0)
	.loc 1 1933 11
	j	.L640
.L644:
.LBB100:
	.loc 1 1934 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1935 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1936 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1937 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L641
	.loc 1 1937 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L641:
	.loc 1 1939 29
	ld	a5,-56(s0)
	lw	a4,4(a5)
	ld	a5,-56(s0)
	addi	a5,a5,8
	lw	a3,-64(s0)
	mv	a2,a3
	mv	a1,a5
	mv	a0,a4
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 1940 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L646
	.loc 1 1944 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1945 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1946 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1948 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1949 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1950 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1951 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L640:
.LBE100:
	.loc 1 1933 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L644
	j	.L643
.L646:
.LBB101:
	.loc 1 1940 28
	nop
.L643:
.LBE101:
	.loc 1 1954 6
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 1954 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,96(a5)
	.loc 1 1956 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	sw	a5,-76(s0)
	.loc 1 1957 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1957 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L645
	.loc 1 1958 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
.L645:
	.loc 1 1960 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1960 18 discriminator 1
	ld	a5,-56(s0)
	sw	a4,32(a5)
	.loc 1 1961 5
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1961 26
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1961 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1962 12
	lw	a5,-36(s0)
.L633:
	.loc 1 1963 1
	mv	a0,a5
	ld	ra,616(sp)
	.cfi_restore 1
	ld	s0,608(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 624
	addi	sp,sp,624
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE73:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB74:
	.loc 1 1965 25
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
	.loc 1 1966 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1968 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1968 7
	bne	a5,zero,.L648
	.loc 1 1969 16
	li	a5,-1
	j	.L649
.L648:
	.loc 1 1972 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1973 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L650
	.loc 1 1973 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L650
	.loc 1 1973 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1973 61 discriminator 2
	lw	a5,100(a5)
	.loc 1 1973 42 discriminator 2
	bne	a5,zero,.L651
.L650:
	.loc 1 1974 16
	li	a5,-1
	j	.L649
.L651:
	.loc 1 1976 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1976 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1977 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L649:
	.loc 1 1978 1
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
.LFE74:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB75:
	.loc 1 1983 36
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
	.loc 1 1984 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1985 8
	ld	a5,-56(s0)
	blt	a5,zero,.L653
	.loc 1 1985 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L654
.L653:
	.loc 1 1985 48 discriminator 3
	li	a5,-1
	.loc 1 1985 48 is_stmt 0
	j	.L655
.L654:
	.loc 1 1986 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1986 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1987 8
	ld	a5,-40(s0)
	bne	a5,zero,.L656
	.loc 1 1987 20 discriminator 1
	li	a5,-1
	.loc 1 1987 20 is_stmt 0
	j	.L655
.L656:
	.loc 1 1990 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1990 12
	sd	zero,0(a5)
	.loc 1 1993 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L657
	.loc 1 1993 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L657:
	.loc 1 1996 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1996 8
	ble	a5,zero,.L658
	.loc 1 1996 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1996 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,100(a5)
.L658:
	.loc 1 1999 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1999 8
	ble	a5,zero,.L659
	.loc 1 1999 29 discriminator 1
	li	a5,0
	.loc 1 1999 29 is_stmt 0
	j	.L655
.L659:
	.loc 1 2002 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,104(a5)
	sd	a5,-48(s0)
	.loc 1 2003 8
	ld	a5,-48(s0)
	beq	a5,zero,.L660
	.loc 1 2004 14
	ld	a5,-40(s0)
	lw	a5,116(a5)
	.loc 1 2004 12
	beq	a5,zero,.L661
	.loc 1 2004 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2004 27 discriminator 1
	ble	a5,zero,.L661
	.loc 1 2004 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2004 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2004 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 2004 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2004 51 discriminator 2
	bne	a5,zero,.L661
	.loc 1 2004 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L661:
	.loc 1 2005 14
	ld	a5,-40(s0)
	lw	a5,120(a5)
	.loc 1 2005 12
	beq	a5,zero,.L662
	.loc 1 2005 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2005 27 discriminator 1
	ble	a5,zero,.L662
	.loc 1 2005 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2005 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2005 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 2005 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2005 51 discriminator 2
	bne	a5,zero,.L662
	.loc 1 2005 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L662:
	.loc 1 2006 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2006 12
	ble	a5,zero,.L663
	.loc 1 2006 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2006 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L663:
	.loc 1 2007 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2007 12
	bne	a5,zero,.L660
.LBB102:
	.loc 1 2009 22
	sw	zero,-20(s0)
	.loc 1 2009 13
	j	.L664
.L666:
	.loc 1 2010 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2010 20
	beq	a5,zero,.L665
	.loc 1 2010 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2010 64 discriminator 1
	sd	zero,104(a5)
.L665:
	.loc 1 2009 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L664:
	.loc 1 2009 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 2009 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L666
.LBE102:
	.loc 1 2012 13
	ld	a0,-48(s0)
	call	free_pipe
.L660:
	.loc 1 2017 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 2018 12
	li	a5,0
.L655:
	.loc 1 2019 1
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
.LFE75:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB76:
	.loc 1 2022 1
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
.LBB103:
	.loc 1 2023 13
	sw	zero,-20(s0)
	.loc 1 2023 5
	j	.L668
.L669:
	.loc 1 2024 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 2023 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L668:
	.loc 1 2023 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L669
.LBE103:
	.loc 1 2026 1
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
.LFE76:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB77:
	.loc 1 2029 1
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
.LBB104:
	.loc 1 2031 13
	sw	zero,-20(s0)
	.loc 1 2031 5
	j	.L671
.L673:
	.loc 1 2032 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2032 11
	beq	a5,zero,.L672
	.loc 1 2033 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 2033 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 2033 29
	ld	a4,0(a4)
	.loc 1 2033 23
	sd	a4,0(a5)
	.loc 1 2034 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2034 22
	lw	a4,100(a5)
	.loc 1 2034 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 2037 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 2037 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L672:
	.loc 1 2031 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L671:
	.loc 1 2031 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L673
.LBE104:
	.loc 1 2063 1
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
.LFE77:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB78:
	.loc 1 2066 1
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
	.loc 1 2081 1
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
.LFE78:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB79:
	.loc 1 2083 36
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
	.loc 1 2084 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2085 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L684
	.loc 1 2085 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L684
	.loc 1 2086 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L685
	.loc 1 2086 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L685
	.loc 1 2087 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2087 8
	beq	a5,zero,.L686
	.loc 1 2088 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L687
	.loc 1 2090 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2090 8
	beq	a5,zero,.L683
	.loc 1 2090 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L683:
	.loc 1 2091 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 2091 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 2091 19
	ld	a4,0(a4)
	.loc 1 2091 15
	sd	a4,0(a5)
	.loc 1 2092 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2092 14
	lw	a4,100(a5)
	.loc 1 2092 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L675
.L684:
	.loc 1 2085 47
	nop
	j	.L675
.L685:
	.loc 1 2086 47
	nop
	j	.L675
.L686:
	.loc 1 2087 28
	nop
	j	.L675
.L687:
	.loc 1 2088 25
	nop
.L675:
	.loc 1 2094 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE79:
	.size	fs_dup2, .-fs_dup2
	.align	1
	.globl	fs_fstat_fd
	.type	fs_fstat_fd, @function
fs_fstat_fd:
.LFB80:
	.loc 1 2098 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 2099 8
	ld	a5,-48(s0)
	bne	a5,zero,.L689
	.loc 1 2099 21 discriminator 1
	li	a5,-1
	.loc 1 2099 21 is_stmt 0
	j	.L690
.L689:
	.loc 1 2101 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2102 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L691
	.loc 1 2102 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L692
.L691:
	.loc 1 2102 48 discriminator 3
	li	a5,-1
	.loc 1 2102 48 is_stmt 0
	j	.L690
.L692:
	.loc 1 2103 24 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 2103 18
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 2104 8
	ld	a5,-32(s0)
	beq	a5,zero,.L693
	.loc 1 2104 17 discriminator 2
	ld	a5,-32(s0)
	lw	a5,100(a5)
	.loc 1 2104 12 discriminator 2
	bne	a5,zero,.L694
.L693:
	.loc 1 2104 32 discriminator 3
	li	a5,-1
	.loc 1 2104 32 is_stmt 0
	j	.L690
.L694:
	.loc 1 2108 5 is_stmt 1
	li	a2,32
	li	a1,0
	ld	a0,-48(s0)
	call	memset
	.loc 1 2120 22
	ld	a5,-32(s0)
	lhu	a4,8(a5)
	.loc 1 2120 14
	ld	a5,-48(s0)
	sh	a4,0(a5)
	.loc 1 2120 47
	ld	a5,-32(s0)
	lhu	a4,14(a5)
	.loc 1 2120 39
	ld	a5,-48(s0)
	sh	a4,2(a5)
	.loc 1 2120 72
	ld	a5,-32(s0)
	lw	a4,16(a5)
	.loc 1 2120 64
	ld	a5,-48(s0)
	sw	a4,4(a5)
	.loc 1 2121 22
	ld	a5,-32(s0)
	lw	a4,20(a5)
	.loc 1 2121 14
	ld	a5,-48(s0)
	sw	a4,12(a5)
	.loc 1 2121 45
	ld	a5,-32(s0)
	lhu	a4,24(a5)
	.loc 1 2121 37
	ld	a5,-48(s0)
	sh	a4,16(a5)
	.loc 1 2121 67
	ld	a5,-32(s0)
	lhu	a4,26(a5)
	.loc 1 2121 59
	ld	a5,-48(s0)
	sh	a4,18(a5)
	.loc 1 2122 23
	ld	a5,-32(s0)
	lw	a4,28(a5)
	.loc 1 2122 15
	ld	a5,-48(s0)
	sw	a4,20(a5)
	.loc 1 2122 49
	ld	a5,-32(s0)
	lw	a4,32(a5)
	.loc 1 2122 41
	ld	a5,-48(s0)
	sw	a4,24(a5)
	.loc 1 2122 75
	ld	a5,-32(s0)
	lw	a4,36(a5)
	.loc 1 2122 67
	ld	a5,-48(s0)
	sw	a4,28(a5)
	.loc 1 2124 12
	li	a5,0
.L690:
	.loc 1 2125 1
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
.LFE80:
	.size	fs_fstat_fd, .-fs_fstat_fd
	.align	1
	.globl	fs_lseek
	.type	fs_lseek, @function
fs_lseek:
.LFB81:
	.loc 1 2129 48
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
	.loc 1 2130 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L696
	.loc 1 2130 16 discriminator 2
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L697
.L696:
	.loc 1 2130 48 discriminator 3
	li	a5,-1
	.loc 1 2130 48 is_stmt 0
	j	.L698
.L697:
	.loc 1 2131 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 2132 24
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 2132 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 2133 8
	ld	a5,-40(s0)
	bne	a5,zero,.L699
	.loc 1 2133 20 discriminator 1
	li	a5,-1
	.loc 1 2133 20 is_stmt 0
	j	.L698
.L699:
	.loc 1 2136 5 is_stmt 1
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L700
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	bgt	a4,a5,.L701
	lw	a5,-56(s0)
	sext.w	a5,a5
	beq	a5,zero,.L702
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L703
	j	.L701
.L702:
	.loc 1 2137 25
	sd	zero,-24(s0)
	.loc 1 2137 30
	j	.L704
.L703:
	.loc 1 2138 34
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2138 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2138 41
	j	.L704
.L700:
	.loc 1 2139 39
	ld	a5,-40(s0)
	lw	a5,16(a5)
	.loc 1 2139 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2139 46
	j	.L704
.L701:
	.loc 1 2140 21
	li	a5,-1
	j	.L698
.L704:
	.loc 1 2143 10
	ld	a4,-24(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
	.loc 1 2144 8
	ld	a5,-48(s0)
	bge	a5,zero,.L705
	.loc 1 2144 28 discriminator 1
	li	a5,-1
	.loc 1 2144 28 is_stmt 0
	j	.L698
.L705:
	.loc 1 2146 14 is_stmt 1
	ld	a5,-48(s0)
	sext.w	a4,a5
	.loc 1 2146 12
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 2147 19
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2147 12
	slli	a5,a5,32
	srli	a5,a5,32
.L698:
	.loc 1 2148 1
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
.LFE81:
	.size	fs_lseek, .-fs_lseek
	.section	.rodata
	.align	3
.LC6:
	.dword	4835703278458516699
	.text
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "minux.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x3c84
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x29
	.4byte	.LASF336
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x11
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x11
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x12
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x2a
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1f
	.4byte	0x48
	.uleb128 0x11
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x12
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x71
	.uleb128 0x1f
	.4byte	0x5b
	.uleb128 0x20
	.4byte	0x5b
	.uleb128 0x11
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x12
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x84
	.uleb128 0x11
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x12
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x97
	.uleb128 0x11
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x12
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xaa
	.uleb128 0x11
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0x12
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xaa
	.uleb128 0x12
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xaa
	.uleb128 0x11
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0x11
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x16
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x28
	.4byte	0x13f
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF19
	.byte	0x4
	.byte	0x2a
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF20
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x4
	.byte	0x2c
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x4
	.byte	0x2d
	.byte	0xe
	.4byte	0x8b
	.byte	0x10
	.uleb128 0x5
	.4byte	.LASF23
	.byte	0x4
	.byte	0x2e
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF24
	.byte	0x4
	.byte	0x2f
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.byte	0
	.uleb128 0x16
	.4byte	.LASF26
	.byte	0x58
	.byte	0x4
	.byte	0x33
	.4byte	0x1e8
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x34
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF28
	.byte	0x4
	.byte	0x35
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF29
	.byte	0x4
	.byte	0x36
	.byte	0xe
	.4byte	0x78
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x37
	.byte	0xe
	.4byte	0x78
	.byte	0x6
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x38
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x39
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x3a
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x3b
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x3c
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x3d
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x3e
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x4
	.byte	0x40
	.byte	0xe
	.4byte	0x1ed
	.byte	0x20
	.byte	0
	.uleb128 0x20
	.4byte	0x13f
	.uleb128 0xd
	.4byte	0x8b
	.4byte	0x1fd
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x16
	.4byte	.LASF36
	.byte	0x10
	.byte	0x4
	.byte	0x44
	.4byte	0x224
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x45
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF38
	.byte	0x4
	.byte	0x46
	.byte	0xe
	.4byte	0x224
	.byte	0x2
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x234
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x11
	.byte	0x1
	.byte	0x8
	.4byte	.LASF39
	.uleb128 0x20
	.4byte	0x234
	.uleb128 0x16
	.4byte	.LASF40
	.byte	0x20
	.byte	0x4
	.byte	0x4a
	.4byte	0x2cf
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x4b
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x4c
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x4d
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x4e
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x4f
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x50
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x51
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x52
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x53
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x54
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.byte	0
	.uleb128 0x12
	.4byte	.LASF41
	.byte	0x4
	.byte	0x80
	.byte	0x11
	.4byte	0x3c
	.uleb128 0xc
	.4byte	0x2e0
	.uleb128 0xc
	.4byte	0x234
	.uleb128 0xc
	.4byte	0x23b
	.uleb128 0x12
	.4byte	.LASF42
	.byte	0x5
	.byte	0x14
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x12
	.4byte	.LASF43
	.byte	0x5
	.byte	0x16
	.byte	0x10
	.4byte	0x302
	.uleb128 0xc
	.4byte	0x2ea
	.uleb128 0x19
	.4byte	.LASF44
	.2byte	0x100
	.byte	0x5
	.byte	0x1a
	.4byte	0x498
	.uleb128 0x7
	.string	"ra"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"sp"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.uleb128 0x7
	.string	"gp"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x9e
	.byte	0x10
	.uleb128 0x7
	.string	"tp"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x9e
	.byte	0x18
	.uleb128 0x7
	.string	"t0"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x9e
	.byte	0x20
	.uleb128 0x7
	.string	"t1"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x9e
	.byte	0x28
	.uleb128 0x7
	.string	"t2"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x9e
	.byte	0x30
	.uleb128 0x7
	.string	"t3"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x9e
	.byte	0x38
	.uleb128 0x7
	.string	"t4"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x9e
	.byte	0x40
	.uleb128 0x7
	.string	"t5"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x9e
	.byte	0x48
	.uleb128 0x7
	.string	"t6"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x9e
	.byte	0x50
	.uleb128 0x7
	.string	"a0"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x9e
	.byte	0x58
	.uleb128 0x7
	.string	"a1"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x9e
	.byte	0x60
	.uleb128 0x7
	.string	"a2"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x9e
	.byte	0x68
	.uleb128 0x7
	.string	"a3"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x9e
	.byte	0x70
	.uleb128 0x7
	.string	"a4"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x9e
	.byte	0x78
	.uleb128 0x7
	.string	"a5"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x9e
	.byte	0x80
	.uleb128 0x7
	.string	"a6"
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x9e
	.byte	0x88
	.uleb128 0x7
	.string	"a7"
	.byte	0x5
	.byte	0x2d
	.byte	0xe
	.4byte	0x9e
	.byte	0x90
	.uleb128 0x7
	.string	"s0"
	.byte	0x5
	.byte	0x2e
	.byte	0xe
	.4byte	0x9e
	.byte	0x98
	.uleb128 0x7
	.string	"s1"
	.byte	0x5
	.byte	0x2f
	.byte	0xe
	.4byte	0x9e
	.byte	0xa0
	.uleb128 0x7
	.string	"s2"
	.byte	0x5
	.byte	0x30
	.byte	0xe
	.4byte	0x9e
	.byte	0xa8
	.uleb128 0x7
	.string	"s3"
	.byte	0x5
	.byte	0x31
	.byte	0xe
	.4byte	0x9e
	.byte	0xb0
	.uleb128 0x7
	.string	"s4"
	.byte	0x5
	.byte	0x32
	.byte	0xe
	.4byte	0x9e
	.byte	0xb8
	.uleb128 0x7
	.string	"s5"
	.byte	0x5
	.byte	0x33
	.byte	0xe
	.4byte	0x9e
	.byte	0xc0
	.uleb128 0x7
	.string	"s6"
	.byte	0x5
	.byte	0x34
	.byte	0xe
	.4byte	0x9e
	.byte	0xc8
	.uleb128 0x7
	.string	"s7"
	.byte	0x5
	.byte	0x35
	.byte	0xe
	.4byte	0x9e
	.byte	0xd0
	.uleb128 0x7
	.string	"s8"
	.byte	0x5
	.byte	0x36
	.byte	0xe
	.4byte	0x9e
	.byte	0xd8
	.uleb128 0x7
	.string	"s9"
	.byte	0x5
	.byte	0x37
	.byte	0xe
	.4byte	0x9e
	.byte	0xe0
	.uleb128 0x7
	.string	"s10"
	.byte	0x5
	.byte	0x38
	.byte	0xe
	.4byte	0x9e
	.byte	0xe8
	.uleb128 0x7
	.string	"s11"
	.byte	0x5
	.byte	0x39
	.byte	0xe
	.4byte	0x9e
	.byte	0xf0
	.uleb128 0x5
	.4byte	.LASF45
	.byte	0x5
	.byte	0x3a
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x16
	.4byte	.LASF46
	.byte	0x10
	.byte	0x5
	.byte	0x41
	.4byte	0x4bf
	.uleb128 0x5
	.4byte	.LASF47
	.byte	0x5
	.byte	0x43
	.byte	0xc
	.4byte	0x2db
	.byte	0
	.uleb128 0x5
	.4byte	.LASF48
	.byte	0x5
	.byte	0x44
	.byte	0x9
	.4byte	0x48
	.byte	0x8
	.byte	0
	.uleb128 0x19
	.4byte	.LASF49
	.2byte	0x428
	.byte	0x5
	.byte	0x47
	.4byte	0x633
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x5
	.byte	0x48
	.byte	0x16
	.4byte	0x307
	.byte	0
	.uleb128 0x8
	.4byte	.LASF51
	.byte	0x5
	.byte	0x4a
	.byte	0x16
	.4byte	0x307
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF52
	.byte	0x5
	.byte	0x4b
	.byte	0x12
	.4byte	0x633
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF53
	.byte	0x5
	.byte	0x4c
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x5
	.byte	0x4e
	.byte	0xb
	.4byte	0x2e0
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x5
	.byte	0x4f
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x5
	.byte	0x50
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x1c
	.string	"sz"
	.byte	0x51
	.byte	0xe
	.4byte	0x9e
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF57
	.byte	0x5
	.byte	0x53
	.byte	0x9
	.4byte	0x48
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF58
	.byte	0x5
	.byte	0x55
	.byte	0x11
	.4byte	0x2f6
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x5
	.byte	0x57
	.byte	0xb
	.4byte	0x2e0
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF60
	.byte	0x5
	.byte	0x58
	.byte	0x9
	.4byte	0x48
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF61
	.byte	0x5
	.byte	0x59
	.byte	0x9
	.4byte	0x48
	.2byte	0x24c
	.uleb128 0x8
	.4byte	.LASF62
	.byte	0x5
	.byte	0x5b
	.byte	0x12
	.4byte	0x638
	.2byte	0x250
	.uleb128 0x8
	.4byte	.LASF46
	.byte	0x5
	.byte	0x5d
	.byte	0x1c
	.4byte	0x705
	.2byte	0x350
	.uleb128 0x8
	.4byte	.LASF63
	.byte	0x5
	.byte	0x5e
	.byte	0x9
	.4byte	0x48
	.2byte	0x358
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0x5
	.byte	0x60
	.byte	0x9
	.4byte	0x48
	.2byte	0x35c
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x5
	.byte	0x62
	.byte	0x12
	.4byte	0x633
	.2byte	0x360
	.uleb128 0x1c
	.string	"cwd"
	.byte	0x65
	.byte	0xa
	.4byte	0x70f
	.2byte	0x368
	.uleb128 0x8
	.4byte	.LASF66
	.byte	0x5
	.byte	0x66
	.byte	0x14
	.4byte	0x84
	.2byte	0x3e8
	.uleb128 0x1c
	.string	"uid"
	.byte	0x69
	.byte	0xe
	.4byte	0x78
	.2byte	0x3ea
	.uleb128 0x1c
	.string	"gid"
	.byte	0x6a
	.byte	0xe
	.4byte	0x78
	.2byte	0x3ec
	.uleb128 0x8
	.4byte	.LASF67
	.byte	0x5
	.byte	0x6b
	.byte	0xe
	.4byte	0x78
	.2byte	0x3ee
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0x5
	.byte	0x6c
	.byte	0xe
	.4byte	0x71f
	.2byte	0x3f0
	.uleb128 0x8
	.4byte	.LASF69
	.byte	0x5
	.byte	0x6d
	.byte	0x9
	.4byte	0x48
	.2byte	0x400
	.uleb128 0x8
	.4byte	.LASF70
	.byte	0x5
	.byte	0x6e
	.byte	0xa
	.4byte	0x72f
	.2byte	0x404
	.byte	0
	.uleb128 0xc
	.4byte	0x4bf
	.uleb128 0xd
	.4byte	0x648
	.4byte	0x648
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x64d
	.uleb128 0x19
	.4byte	.LASF71
	.2byte	0x490
	.byte	0x5
	.byte	0x8d
	.4byte	0x705
	.uleb128 0x5
	.4byte	.LASF72
	.byte	0x5
	.byte	0x8e
	.byte	0x47
	.4byte	0x7fa
	.byte	0
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x5
	.byte	0x8f
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x7
	.string	"din"
	.byte	0x5
	.byte	0x90
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x7
	.string	"off"
	.byte	0x5
	.byte	0x91
	.byte	0xe
	.4byte	0x8b
	.byte	0x60
	.uleb128 0x5
	.4byte	.LASF73
	.byte	0x5
	.byte	0x92
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x5
	.4byte	.LASF74
	.byte	0x5
	.byte	0x93
	.byte	0x13
	.4byte	0x7f5
	.byte	0x68
	.uleb128 0x5
	.4byte	.LASF75
	.byte	0x5
	.byte	0x94
	.byte	0x9
	.4byte	0x48
	.byte	0x70
	.uleb128 0x5
	.4byte	.LASF76
	.byte	0x5
	.byte	0x95
	.byte	0x9
	.4byte	0x48
	.byte	0x74
	.uleb128 0x5
	.4byte	.LASF77
	.byte	0x5
	.byte	0x96
	.byte	0x9
	.4byte	0x48
	.byte	0x78
	.uleb128 0x5
	.4byte	.LASF78
	.byte	0x5
	.byte	0x99
	.byte	0x9
	.4byte	0x48
	.byte	0x7c
	.uleb128 0x5
	.4byte	.LASF79
	.byte	0x5
	.byte	0x9b
	.byte	0x12
	.4byte	0x648
	.byte	0x80
	.uleb128 0x5
	.4byte	.LASF80
	.byte	0x5
	.byte	0x9d
	.byte	0x12
	.4byte	0x82d
	.byte	0x88
	.uleb128 0x8
	.4byte	.LASF81
	.byte	0x5
	.byte	0x9e
	.byte	0x9
	.4byte	0x48
	.2byte	0x488
	.byte	0
	.uleb128 0xc
	.4byte	0x70a
	.uleb128 0xc
	.4byte	0x498
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x71f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x72f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x73f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF82
	.2byte	0x330
	.byte	0x5
	.byte	0x78
	.4byte	0x7e6
	.uleb128 0x5
	.4byte	.LASF83
	.byte	0x5
	.byte	0x79
	.byte	0xa
	.4byte	0x7e6
	.byte	0
	.uleb128 0x8
	.4byte	.LASF84
	.byte	0x5
	.byte	0x7a
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF85
	.byte	0x5
	.byte	0x7b
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF86
	.byte	0x5
	.byte	0x7c
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF87
	.byte	0x5
	.byte	0x7d
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF88
	.byte	0x5
	.byte	0x7e
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF89
	.byte	0x5
	.byte	0x7f
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF73
	.byte	0x5
	.byte	0x80
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF90
	.byte	0x5
	.byte	0x82
	.byte	0x12
	.4byte	0x638
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF91
	.byte	0x5
	.byte	0x83
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF79
	.byte	0x5
	.byte	0x85
	.byte	0x13
	.4byte	0x7f5
	.2byte	0x328
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x7f5
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xc
	.4byte	0x73f
	.uleb128 0x2b
	.byte	0x7
	.byte	0x4
	.4byte	0x97
	.byte	0x5
	.byte	0x8e
	.byte	0xa
	.4byte	0x82d
	.uleb128 0x18
	.4byte	.LASF92
	.byte	0
	.uleb128 0x18
	.4byte	.LASF93
	.byte	0x1
	.uleb128 0x18
	.4byte	.LASF94
	.byte	0x2
	.uleb128 0x18
	.4byte	.LASF95
	.byte	0x3
	.uleb128 0x18
	.4byte	.LASF96
	.byte	0x4
	.uleb128 0x18
	.4byte	.LASF97
	.byte	0x5
	.byte	0
	.uleb128 0xd
	.4byte	0x633
	.4byte	0x83d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0x25
	.4byte	.LASF98
	.byte	0xc9
	.byte	0x15
	.4byte	0x82d
	.uleb128 0x25
	.4byte	.LASF99
	.byte	0xcb
	.byte	0xc
	.4byte	0x48
	.uleb128 0x2c
	.4byte	.LASF100
	.byte	0x5
	.2byte	0x152
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x16
	.4byte	.LASF101
	.byte	0x10
	.byte	0x1
	.byte	0x56
	.4byte	0x8a1
	.uleb128 0x5
	.4byte	.LASF102
	.byte	0x1
	.byte	0x57
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF103
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF65
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x26
	.4byte	.LASF106
	.byte	0x2
	.byte	0x5d
	.4byte	0x8d4
	.uleb128 0x5
	.4byte	.LASF103
	.byte	0x1
	.byte	0x5e
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x5f
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF104
	.byte	0x1
	.byte	0x60
	.byte	0xe
	.4byte	0x8d4
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x8e3
	.uleb128 0x27
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF105
	.byte	0x8
	.byte	0x1
	.byte	0x63
	.4byte	0x909
	.uleb128 0x7
	.string	"id"
	.byte	0x1
	.byte	0x63
	.byte	0x23
	.4byte	0x8b
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x63
	.byte	0x26
	.4byte	0x8b
	.byte	0x4
	.byte	0
	.uleb128 0x26
	.4byte	.LASF107
	.byte	0x4
	.byte	0x64
	.4byte	0x93c
	.uleb128 0x5
	.4byte	.LASF103
	.byte	0x1
	.byte	0x65
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x66
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF104
	.byte	0x1
	.byte	0x67
	.byte	0x1c
	.4byte	0x93c
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x8e3
	.4byte	0x94b
	.uleb128 0x27
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF108
	.byte	0x10
	.byte	0x1
	.byte	0x6d
	.4byte	0x97f
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6e
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF109
	.byte	0x1
	.byte	0x6f
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF110
	.byte	0x1
	.byte	0x70
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF111
	.byte	0x75
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x1a
	.string	"Q"
	.byte	0x76
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xe
	.4byte	.LASF112
	.byte	0x78
	.byte	0x1c
	.4byte	0x9bc
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xc
	.4byte	0x860
	.uleb128 0xe
	.4byte	.LASF113
	.byte	0x79
	.byte	0x1c
	.4byte	0x9d6
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xc
	.4byte	0x8a1
	.uleb128 0xe
	.4byte	.LASF73
	.byte	0x7a
	.byte	0x1c
	.4byte	0x9f0
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xc
	.4byte	0x909
	.uleb128 0xe
	.4byte	.LASF114
	.byte	0x7b
	.byte	0x1c
	.4byte	0xa0a
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xc
	.4byte	0x5b
	.uleb128 0xe
	.4byte	.LASF115
	.byte	0x7d
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2d
	.4byte	.LASF116
	.byte	0x1
	.byte	0x7e
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xd
	.4byte	0x67
	.4byte	0xa4a
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x1f
	.4byte	0xa3b
	.uleb128 0x2e
	.4byte	.LASF117
	.byte	0x1
	.byte	0x7f
	.byte	0x1a
	.4byte	0xa4a
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x1a
	.string	"req"
	.byte	0xbe
	.byte	0x1e
	.4byte	0x94b
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x19
	.4byte	.LASF118
	.2byte	0x210
	.byte	0x1
	.byte	0xe2
	.4byte	0xace
	.uleb128 0x5
	.4byte	.LASF119
	.byte	0x1
	.byte	0xe3
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF83
	.byte	0x1
	.byte	0xe4
	.byte	0xd
	.4byte	0xace
	.byte	0x4
	.uleb128 0x8
	.4byte	.LASF120
	.byte	0x1
	.byte	0xe5
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF121
	.byte	0x1
	.byte	0xe6
	.byte	0xe
	.4byte	0x8b
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF122
	.byte	0x1
	.byte	0xe7
	.byte	0xe
	.4byte	0x8b
	.2byte	0x20c
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0xadd
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xd
	.4byte	0xa7c
	.4byte	0xaed
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xe
	.4byte	.LASF123
	.byte	0xea
	.byte	0x1c
	.4byte	0xadd
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache
	.uleb128 0xe
	.4byte	.LASF124
	.byte	0xeb
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_time
	.uleb128 0xe
	.4byte	.LASF125
	.byte	0xec
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_hits
	.uleb128 0xe
	.4byte	.LASF126
	.byte	0xed
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_misses
	.uleb128 0x1
	.string	"sb"
	.2byte	0x180
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0x2
	.4byte	.LASF127
	.2byte	0x181
	.byte	0x17
	.4byte	0xace
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xd
	.4byte	0x73f
	.4byte	0xb7c
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF128
	.2byte	0x365
	.byte	0xe
	.4byte	0xb6c
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xd
	.4byte	0x64d
	.4byte	0xba2
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF129
	.2byte	0x366
	.byte	0xd
	.4byte	0xb92
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1d
	.4byte	.LASF130
	.2byte	0x368
	.byte	0xf
	.4byte	0x7f5
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1d
	.4byte	.LASF131
	.2byte	0x369
	.byte	0xe
	.4byte	0x648
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x2f
	.4byte	.LASF337
	.byte	0x1
	.2byte	0x44e
	.byte	0x6
	.4byte	0xbf3
	.uleb128 0x22
	.byte	0
	.uleb128 0x30
	.4byte	.LASF132
	.byte	0x1
	.2byte	0x44d
	.byte	0x6
	.4byte	0xc06
	.uleb128 0xb
	.4byte	0x2e0
	.byte	0
	.uleb128 0x31
	.4byte	.LASF133
	.byte	0x5
	.byte	0xc1
	.byte	0xf
	.4byte	0xc18
	.4byte	0xc18
	.uleb128 0x22
	.byte	0
	.uleb128 0xc
	.4byte	0x648
	.uleb128 0x13
	.4byte	.LASF134
	.byte	0x11
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc3c
	.uleb128 0xb
	.4byte	0x2e0
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x13
	.4byte	.LASF135
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0xc51
	.uleb128 0xb
	.4byte	0x2e5
	.byte	0
	.uleb128 0x13
	.4byte	.LASF136
	.byte	0x13
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc6b
	.uleb128 0xb
	.4byte	0x2e0
	.uleb128 0xb
	.4byte	0x2e5
	.byte	0
	.uleb128 0x13
	.4byte	.LASF137
	.byte	0x12
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc8a
	.uleb128 0xb
	.4byte	0x2e0
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0xb
	.4byte	0x48
	.byte	0
	.uleb128 0x13
	.4byte	.LASF138
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xca4
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0xb
	.4byte	0x2e5
	.byte	0
	.uleb128 0x13
	.4byte	.LASF139
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0xcc3
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF140
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0xcd9
	.uleb128 0xb
	.4byte	0x2e5
	.uleb128 0x22
	.byte	0
	.uleb128 0x13
	.4byte	.LASF141
	.byte	0xe
	.byte	0x7
	.4byte	0xcf8
	.4byte	0xcf8
	.uleb128 0xb
	.4byte	0xcf8
	.uleb128 0xb
	.4byte	0xcfa
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x32
	.byte	0x8
	.uleb128 0xc
	.4byte	0xcff
	.uleb128 0x33
	.uleb128 0x13
	.4byte	.LASF142
	.byte	0xd
	.byte	0x7
	.4byte	0xcf8
	.4byte	0xd1f
	.uleb128 0xb
	.4byte	0xcf8
	.uleb128 0xb
	.4byte	0x48
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF143
	.byte	0xc
	.byte	0x7
	.4byte	0xcf8
	.4byte	0xd34
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x34
	.4byte	.LASF144
	.byte	0x1
	.byte	0x14
	.byte	0xd
	.4byte	0xd46
	.uleb128 0xb
	.4byte	0x2e5
	.byte	0
	.uleb128 0x9
	.4byte	.LASF149
	.2byte	0x851
	.byte	0x6
	.4byte	0x54
	.8byte	.LFB81
	.8byte	.LFE81-.LFB81
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdce
	.uleb128 0x6
	.string	"fd"
	.2byte	0x851
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF145
	.2byte	0x851
	.byte	0x1c
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF146
	.2byte	0x851
	.byte	0x28
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"ft"
	.2byte	0x853
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x854
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF147
	.2byte	0x857
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF148
	.2byte	0x85f
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF150
	.2byte	0x831
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB80
	.8byte	.LFE80-.LFB80
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe28
	.uleb128 0x6
	.string	"fd"
	.2byte	0x831
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"st"
	.2byte	0x831
	.byte	0x26
	.4byte	0xe28
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"ft"
	.2byte	0x835
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"f"
	.2byte	0x837
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xc
	.4byte	0x240
	.uleb128 0x14
	.4byte	.LASF153
	.2byte	0x823
	.8byte	.LFB79
	.8byte	.LFE79-.LFB79
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe77
	.uleb128 0x3
	.4byte	.LASF151
	.2byte	0x823
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF152
	.2byte	0x823
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x824
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF154
	.2byte	0x811
	.8byte	.LFB78
	.8byte	.LFE78-.LFB78
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xea4
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x811
	.byte	0x22
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF155
	.2byte	0x7ec
	.8byte	.LFB77
	.8byte	.LFE77-.LFB77
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf0e
	.uleb128 0x3
	.4byte	.LASF156
	.2byte	0x7ec
	.byte	0x20
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF157
	.2byte	0x7ec
	.byte	0x35
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x7ec
	.byte	0x4b
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB104
	.8byte	.LBE104-.LBB104
	.uleb128 0x1
	.string	"i"
	.2byte	0x7ef
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF159
	.2byte	0x7e5
	.8byte	.LFB76
	.8byte	.LFE76-.LFB76
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5a
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x7e5
	.byte	0x1c
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB103
	.8byte	.LBE103-.LBB103
	.uleb128 0x1
	.string	"i"
	.2byte	0x7e7
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF160
	.2byte	0x7bf
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB75
	.8byte	.LFE75-.LFB75
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe1
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7bf
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF161
	.2byte	0x7bf
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x7c0
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x7c2
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x7d2
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB102
	.8byte	.LBE102-.LBB102
	.uleb128 0x1
	.string	"i"
	.2byte	0x7d9
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF162
	.2byte	0x7ad
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x103d
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7ad
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x7ae
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x7b4
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x7b8
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x9
	.4byte	.LASF163
	.2byte	0x777
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x115a
	.uleb128 0x6
	.string	"fd"
	.2byte	0x777
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x777
	.byte	0x26
	.4byte	0xcfa
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x3
	.4byte	.LASF164
	.2byte	0x777
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x778
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"f"
	.2byte	0x77d
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF165
	.2byte	0x782
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"src"
	.2byte	0x784
	.byte	0x14
	.4byte	0x115a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x785
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"off"
	.2byte	0x787
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF167
	.2byte	0x78b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF168
	.2byte	0x7a4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1b
	.4byte	.LLRL6
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x78e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x78f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x790
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x793
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x797
	.byte	0x11
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x6c
	.uleb128 0x9
	.4byte	.LASF174
	.2byte	0x75d
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11f8
	.uleb128 0x6
	.string	"fd"
	.2byte	0x75d
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x75d
	.byte	0x1f
	.4byte	0xcf8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF164
	.2byte	0x75d
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x75e
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x764
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x768
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF175
	.2byte	0x769
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF176
	.2byte	0x76c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF177
	.2byte	0x6de
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1432
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6de
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x6de
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6de
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x6df
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x6e0
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6fa
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"di"
	.2byte	0x6fb
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF180
	.2byte	0x6fc
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xa
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.4byte	0x12bb
	.uleb128 0x1
	.string	"p"
	.2byte	0x6e2
	.byte	0x16
	.4byte	0x633
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0xa
	.8byte	.LBB92
	.8byte	.LBE92-.LBB92
	.4byte	0x12de
	.uleb128 0x1
	.string	"i"
	.2byte	0x6ea
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xa
	.8byte	.LBB93
	.8byte	.LBE93-.LBB93
	.4byte	0x13cb
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x702
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -316
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x703
	.byte	0x12
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x708
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.string	"um"
	.2byte	0x710
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -86
	.uleb128 0x2
	.4byte	.LASF183
	.2byte	0x712
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x2
	.4byte	.LASF184
	.2byte	0x712
	.byte	0x22
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"gid"
	.2byte	0x713
	.byte	0x16
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -54
	.uleb128 0xa
	.8byte	.LBB94
	.8byte	.LBE94-.LBB94
	.4byte	0x1384
	.uleb128 0x1
	.string	"i"
	.2byte	0x704
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.8byte	.LBB95
	.8byte	.LBE95-.LBB95
	.4byte	0x13a8
	.uleb128 0x1
	.string	"ii"
	.2byte	0x712
	.byte	0x3b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB96
	.8byte	.LBE96-.LBB96
	.uleb128 0x2
	.4byte	.LASF185
	.2byte	0x715
	.byte	0x1f
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB97
	.8byte	.LBE97-.LBB97
	.4byte	0x13f0
	.uleb128 0x2
	.4byte	.LASF186
	.2byte	0x729
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.uleb128 0x1
	.string	"i"
	.2byte	0x736
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x1
	.string	"now"
	.2byte	0x746
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x1442
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	.LASF187
	.2byte	0x6d8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1474
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6d8
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF188
	.2byte	0x6cb
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1504
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6cb
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x6cb
	.byte	0x2a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x6cb
	.byte	0x3a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6cd
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6ce
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6d0
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.string	"now"
	.2byte	0x6d1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF189
	.2byte	0x6be
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1585
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6be
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"uid"
	.2byte	0x6be
	.byte	0x29
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x6
	.string	"gid"
	.2byte	0x6be
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6c0
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6c1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6c3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF190
	.2byte	0x6b0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1603
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6b0
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6b0
	.byte	0x29
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6b2
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6b3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6b5
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x1
	.string	"p"
	.2byte	0x6b7
	.byte	0x12
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x9
	.4byte	.LASF191
	.2byte	0x6a1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16c2
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6a1
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x6
	.string	"st"
	.2byte	0x6a1
	.byte	0x2d
	.4byte	0xe28
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6a4
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x6a5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x6a5
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x6a7
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6a8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x6a9
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x4
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.uleb128 0x1
	.string	"i"
	.2byte	0x6a5
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF192
	.2byte	0x692
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x179f
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x692
	.byte	0x1d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x6
	.string	"buf"
	.2byte	0x692
	.byte	0x29
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF193
	.2byte	0x692
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.string	"abs"
	.2byte	0x695
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x696
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x696
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x698
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x699
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"di"
	.2byte	0x69a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"n"
	.2byte	0x69c
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.uleb128 0x1
	.string	"i"
	.2byte	0x696
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF194
	.2byte	0x685
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x180f
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x685
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"st"
	.2byte	0x685
	.byte	0x2c
	.4byte	0xe28
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x688
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x689
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x68b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF195
	.2byte	0x668
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18df
	.uleb128 0x3
	.4byte	.LASF196
	.2byte	0x668
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x668
	.byte	0x2e
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x66a
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x66a
	.byte	0x17
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x66f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x673
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x676
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -372
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x676
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x67a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x4
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.uleb128 0x1
	.string	"i"
	.2byte	0x676
	.byte	0x34
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF200
	.2byte	0x641
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a12
	.uleb128 0x3
	.4byte	.LASF196
	.2byte	0x641
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x641
	.byte	0x30
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x643
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x643
	.byte	0x17
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x64a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"op"
	.2byte	0x64e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.string	"np"
	.2byte	0x64e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF201
	.2byte	0x64e
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF202
	.2byte	0x64e
	.byte	0x31
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x654
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"opd"
	.2byte	0x657
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x2
	.4byte	.LASF203
	.2byte	0x65c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF204
	.2byte	0x65d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0xa
	.8byte	.LBB86
	.8byte	.LBE86-.LBB86
	.4byte	0x19f1
	.uleb128 0x1
	.string	"i"
	.2byte	0x64f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.uleb128 0x1
	.string	"pr"
	.2byte	0x65f
	.byte	0x16
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF205
	.2byte	0x624
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b23
	.uleb128 0x3
	.4byte	.LASF206
	.2byte	0x624
	.byte	0x1c
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF207
	.2byte	0x624
	.byte	0x30
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.string	"abs"
	.2byte	0x626
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x62a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x62a
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x62e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x632
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x632
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ni"
	.2byte	0x635
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.4byte	.LASF208
	.2byte	0x639
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"buf"
	.2byte	0x63a
	.byte	0xd
	.4byte	0x1b23
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0xa
	.8byte	.LBB84
	.8byte	.LBE84-.LBB84
	.4byte	0x1b03
	.uleb128 0x1
	.string	"i"
	.2byte	0x62a
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB85
	.8byte	.LBE85-.LBB85
	.uleb128 0x1
	.string	"i"
	.2byte	0x633
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0x1b33
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xef
	.byte	0
	.uleb128 0x10
	.4byte	.LASF226
	.2byte	0x613
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c0b
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x613
	.byte	0x26
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"ip"
	.2byte	0x613
	.byte	0x3b
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"src"
	.2byte	0x613
	.byte	0x4e
	.4byte	0x115a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x613
	.byte	0x5c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x615
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x615
	.byte	0x24
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"s"
	.2byte	0x615
	.byte	0x3c
	.4byte	0x115a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB83
	.8byte	.LBE83-.LBB83
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x617
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x617
	.byte	0x32
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x618
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x619
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x13f
	.uleb128 0x9
	.4byte	.LASF209
	.2byte	0x5e8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d67
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x5e8
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5ea
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5ee
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"di"
	.2byte	0x5f0
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x5fe
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5fe
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF210
	.2byte	0x601
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.4byte	.LASF211
	.2byte	0x604
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x60d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xa
	.8byte	.LBB78
	.8byte	.LBE78-.LBB78
	.4byte	0x1d23
	.uleb128 0x1
	.string	"pi"
	.2byte	0x5f4
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.uleb128 0x1
	.string	"ft"
	.2byte	0x5f6
	.byte	0x17
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.uleb128 0x1
	.string	"i"
	.2byte	0x5f7
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB81
	.8byte	.LBE81-.LBB81
	.4byte	0x1d46
	.uleb128 0x1
	.string	"i"
	.2byte	0x5fe
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x4
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.uleb128 0x1
	.string	"pr"
	.2byte	0x606
	.byte	0x16
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF213
	.2byte	0x5bf
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e9d
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x5bf
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5c1
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5c5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"di"
	.2byte	0x5c7
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x5d8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5d8
	.byte	0x1b
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF214
	.2byte	0x5db
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x5e2
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.8byte	.LBB73
	.8byte	.LBE73-.LBB73
	.4byte	0x1e7d
	.uleb128 0x1
	.string	"off"
	.2byte	0x5cc
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF215
	.2byte	0x5cc
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1b
	.4byte	.LLRL5
	.uleb128 0x1
	.string	"de"
	.2byte	0x5cf
	.byte	0x1c
	.4byte	0x1e9d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x5d0
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB75
	.8byte	.LBE75-.LBB75
	.uleb128 0x1
	.string	"i"
	.2byte	0x5d1
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB77
	.8byte	.LBE77-.LBB77
	.uleb128 0x1
	.string	"i"
	.2byte	0x5d8
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x1fd
	.uleb128 0x9
	.4byte	.LASF217
	.2byte	0x594
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1fb3
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x594
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x594
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.string	"abs"
	.2byte	0x597
	.byte	0xa
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x59f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5a0
	.byte	0xa
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5a3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x5a8
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5a9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x5af
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.string	"um"
	.2byte	0x5b2
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -30
	.uleb128 0x2
	.4byte	.LASF185
	.2byte	0x5b3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0xa
	.8byte	.LBB71
	.8byte	.LBE71-.LBB71
	.4byte	0x1f93
	.uleb128 0x1
	.string	"i"
	.2byte	0x5a0
	.byte	0x22
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB72
	.8byte	.LBE72-.LBB72
	.uleb128 0x1
	.string	"i"
	.2byte	0x5aa
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF258
	.2byte	0x554
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2180
	.uleb128 0x6
	.string	"out"
	.2byte	0x554
	.byte	0x28
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF219
	.2byte	0x554
	.byte	0x34
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x554
	.byte	0x47
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.string	"p"
	.2byte	0x556
	.byte	0x12
	.4byte	0x633
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF220
	.2byte	0x557
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"tmp"
	.2byte	0x567
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x1
	.string	"s"
	.2byte	0x56a
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"end"
	.2byte	0x56b
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x2
	.4byte	.LASF221
	.2byte	0x56c
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF222
	.2byte	0x56d
	.byte	0xa
	.4byte	0x2190
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.uleb128 0x2
	.4byte	.LASF223
	.2byte	0x56e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"pos"
	.2byte	0x583
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.4byte	0x20ad
	.uleb128 0x1
	.string	"n"
	.2byte	0x55f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.uleb128 0x28
	.4byte	.LLRL3
	.4byte	0x212a
	.uleb128 0x1
	.string	"len"
	.2byte	0x574
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x2
	.4byte	.LASF224
	.2byte	0x57a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB64
	.8byte	.LBE64-.LBB64
	.4byte	0x2109
	.uleb128 0x1
	.string	"i"
	.2byte	0x57c
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.uleb128 0x1
	.string	"i"
	.2byte	0x57d
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.uleb128 0x1
	.string	"i"
	.2byte	0x585
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1b
	.4byte	.LLRL4
	.uleb128 0x2
	.4byte	.LASF225
	.2byte	0x586
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB69
	.8byte	.LBE69-.LBB69
	.uleb128 0x1
	.string	"j"
	.2byte	0x589
	.byte	0x12
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x2190
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xff
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x21a6
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x10
	.4byte	.LASF227
	.2byte	0x536
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2266
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x536
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x536
	.byte	0x3c
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x538
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"off"
	.2byte	0x53c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF229
	.2byte	0x53d
	.byte	0xa
	.4byte	0x1432
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x1
	.string	"de"
	.2byte	0x540
	.byte	0x18
	.4byte	0x1e9d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x541
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.uleb128 0x1
	.string	"i"
	.2byte	0x542
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF230
	.2byte	0x4f6
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2407
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x4f6
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -708
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x4f6
	.byte	0x39
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -720
	.uleb128 0x3
	.4byte	.LASF231
	.2byte	0x4f6
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x4fa
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"de"
	.2byte	0x4ff
	.byte	0x13
	.4byte	0x1fd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"off"
	.2byte	0x506
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x523
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x524
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x525
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x526
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"buf"
	.2byte	0x529
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF232
	.2byte	0x52b
	.byte	0x14
	.4byte	0x1e9d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.4byte	0x2364
	.uleb128 0x1
	.string	"i"
	.2byte	0x502
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.uleb128 0x2
	.4byte	.LASF232
	.2byte	0x509
	.byte	0x18
	.4byte	0x1e9d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x50a
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x1
	.string	"i"
	.2byte	0x50b
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x50f
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x510
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x515
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF234
	.2byte	0x516
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF235
	.2byte	0x4e0
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x247c
	.uleb128 0x1
	.string	"di"
	.2byte	0x4e2
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x4e3
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x4e7
	.byte	0x1b
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF236
	.2byte	0x4b3
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2593
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x4b3
	.byte	0x2f
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x4b3
	.byte	0x3f
	.4byte	0x2593
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF237
	.2byte	0x4b3
	.byte	0x52
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF238
	.2byte	0x4b9
	.byte	0xa
	.4byte	0x2598
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF239
	.2byte	0x4bd
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF240
	.2byte	0x4be
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"tok"
	.2byte	0x4bf
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"cur"
	.2byte	0x4c0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x4c1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"n"
	.2byte	0x4d7
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xa
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x2572
	.uleb128 0x2
	.4byte	.LASF241
	.2byte	0x4c5
	.byte	0xf
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF242
	.2byte	0x4cd
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.byte	0
	.uleb128 0x4
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.uleb128 0x1
	.string	"i"
	.2byte	0x4d9
	.byte	0xe
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x8b
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x25ac
	.uleb128 0x35
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0x9
	.4byte	.LASF243
	.2byte	0x484
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2634
	.uleb128 0x6
	.string	"fd"
	.2byte	0x484
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF102
	.2byte	0x484
	.byte	0x1d
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x484
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x486
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x48f
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"i"
	.2byte	0x495
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF244
	.2byte	0x452
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26c9
	.uleb128 0x6
	.string	"fd"
	.2byte	0x452
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF102
	.2byte	0x452
	.byte	0x1c
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x452
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x454
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x45d
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x46c
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x1
	.string	"i"
	.2byte	0x46d
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF245
	.2byte	0x40f
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x275b
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x40f
	.byte	0x15
	.4byte	0x275b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x40f
	.byte	0x1f
	.4byte	0x275b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x410
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x412
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x2747
	.uleb128 0x1
	.string	"i"
	.2byte	0x414
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x1b
	.4byte	.LLRL2
	.uleb128 0x1
	.string	"i"
	.2byte	0x42e
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF246
	.2byte	0x406
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27ad
	.uleb128 0x6
	.string	"fd"
	.2byte	0x406
	.byte	0x10
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x408
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"k"
	.2byte	0x40b
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF247
	.2byte	0x3f9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27ed
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3f9
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x3fb
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF248
	.2byte	0x3ed
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x282d
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3ed
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x3ef
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF249
	.2byte	0x3d8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x286d
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3d8
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x3da
	.byte	0x13
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF250
	.2byte	0x3c4
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x289a
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x3c4
	.byte	0x1c
	.4byte	0xc18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x24
	.4byte	.LASF251
	.2byte	0x3b8
	.byte	0xe
	.4byte	0x648
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28cc
	.uleb128 0x2
	.4byte	.LASF157
	.2byte	0x3ba
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF252
	.2byte	0x3a2
	.byte	0xf
	.4byte	0x7f5
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2919
	.uleb128 0x1
	.string	"p"
	.2byte	0x3a4
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF253
	.2byte	0x3b0
	.byte	0xb
	.4byte	0xcf8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x3b1
	.byte	0xb
	.4byte	0xcf8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x23
	.4byte	.LASF254
	.2byte	0x399
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2944
	.uleb128 0x6
	.string	"p"
	.2byte	0x399
	.byte	0x1d
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF255
	.2byte	0x390
	.byte	0xe
	.4byte	0x648
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2974
	.uleb128 0x1
	.string	"p"
	.2byte	0x392
	.byte	0x12
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF256
	.2byte	0x38a
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x299f
	.uleb128 0x6
	.string	"p"
	.2byte	0x38a
	.byte	0x1e
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF257
	.2byte	0x37f
	.byte	0xf
	.4byte	0x7f5
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29cf
	.uleb128 0x1
	.string	"p"
	.2byte	0x381
	.byte	0x13
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x36
	.4byte	.LASF338
	.byte	0x1
	.2byte	0x36b
	.byte	0x6
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2a6f
	.uleb128 0xa
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x2a30
	.uleb128 0x1
	.string	"i"
	.2byte	0x370
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x1
	.string	"p"
	.2byte	0x371
	.byte	0x17
	.4byte	0x7f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.uleb128 0x1
	.string	"i"
	.2byte	0x377
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x1
	.string	"p"
	.2byte	0x378
	.byte	0x16
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF259
	.2byte	0x358
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2ae2
	.uleb128 0x6
	.string	"f"
	.2byte	0x358
	.byte	0x27
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x358
	.byte	0x37
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x359
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x359
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x1
	.string	"i"
	.2byte	0x35a
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF260
	.2byte	0x34a
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b53
	.uleb128 0x6
	.string	"f"
	.2byte	0x34a
	.byte	0x24
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x34a
	.byte	0x34
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x34b
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x28
	.4byte	.LLRL0
	.4byte	0x2b3f
	.uleb128 0x1
	.string	"i"
	.2byte	0x34d
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1b
	.4byte	.LLRL1
	.uleb128 0x1
	.string	"i"
	.2byte	0x34f
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF261
	.2byte	0x347
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b83
	.uleb128 0x6
	.string	"f"
	.2byte	0x347
	.byte	0x23
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF262
	.2byte	0x32f
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2bdf
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x32f
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x330
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x1
	.string	"i"
	.2byte	0x336
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF263
	.2byte	0x306
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2d6c
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x306
	.byte	0x1d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x6
	.string	"out"
	.2byte	0x306
	.byte	0x29
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1680
	.uleb128 0x3
	.4byte	.LASF219
	.2byte	0x306
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1684
	.uleb128 0x1
	.string	"abs"
	.2byte	0x309
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"dir"
	.2byte	0x30d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"buf"
	.2byte	0x30e
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x30f
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x30f
	.byte	0x18
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x310
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF266
	.2byte	0x310
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"n"
	.2byte	0x310
	.byte	0x23
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x2
	.4byte	.LASF65
	.2byte	0x315
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x317
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"l"
	.2byte	0x326
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x2d4b
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x31a
	.byte	0x12
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1568
	.uleb128 0x1
	.string	"len"
	.2byte	0x31a
	.byte	0x21
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x31c
	.byte	0x12
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1440
	.uleb128 0x1
	.string	"p"
	.2byte	0x31c
	.byte	0x35
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x31e
	.byte	0x12
	.4byte	0x7e6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1184
	.byte	0
	.uleb128 0x4
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x1
	.string	"i"
	.2byte	0x329
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF270
	.2byte	0x2c4
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2e99
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x2c4
	.byte	0x2d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x3
	.4byte	.LASF265
	.2byte	0x2c4
	.byte	0x37
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1404
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x2c9
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.string	"buf"
	.2byte	0x2cd
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x2cf
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x2d0
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cur"
	.2byte	0x2d1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF271
	.2byte	0x2d2
	.byte	0xa
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x2
	.4byte	.LASF65
	.2byte	0x2d9
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x2db
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1384
	.uleb128 0x4
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x2de
	.byte	0x12
	.4byte	0x70f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1296
	.uleb128 0x1
	.string	"n"
	.2byte	0x2df
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x2e3
	.byte	0x12
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1168
	.uleb128 0x1
	.string	"p"
	.2byte	0x2e5
	.byte	0x13
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x2eb
	.byte	0x12
	.4byte	0x2180
	.uleb128 0x3
	.byte	0x91
	.sleb128 -912
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF272
	.2byte	0x2c0
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2ecb
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x2c0
	.byte	0x22
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF273
	.2byte	0x2a9
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f7a
	.uleb128 0x3
	.4byte	.LASF52
	.2byte	0x2a9
	.byte	0x24
	.4byte	0x1c0b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x2a9
	.byte	0x38
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x2aa
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF229
	.2byte	0x2ab
	.byte	0xa
	.4byte	0x1432
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x1
	.string	"de"
	.2byte	0x2af
	.byte	0x18
	.4byte	0x1e9d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x2b0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x1
	.string	"i"
	.2byte	0x2b1
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF274
	.2byte	0x291
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x304f
	.uleb128 0x6
	.string	"ip"
	.2byte	0x291
	.byte	0x1f
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF145
	.2byte	0x291
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x291
	.byte	0x3d
	.4byte	0xa0a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x291
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x292
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x293
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x294
	.byte	0xe
	.4byte	0xa0a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x297
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x298
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF176
	.2byte	0x299
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x29c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF275
	.2byte	0x248
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3250
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x248
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x248
	.byte	0x40
	.4byte	0x1c0b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x248
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"di"
	.2byte	0x26c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF276
	.2byte	0x26d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF277
	.2byte	0x26e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF278
	.2byte	0x270
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x279
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF280
	.2byte	0x27b
	.byte	0xf
	.4byte	0x2593
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x27c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF282
	.2byte	0x285
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x287
	.byte	0xf
	.4byte	0x2593
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x314d
	.uleb128 0x1
	.string	"b"
	.2byte	0x24c
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x31e6
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x255
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x25e
	.byte	0x11
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x260
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.2byte	0x261
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x31c4
	.uleb128 0x1
	.string	"nb"
	.2byte	0x257
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0x4
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x1
	.string	"db"
	.2byte	0x263
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x320a
	.uleb128 0x1
	.string	"nb"
	.2byte	0x272
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xa
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x322e
	.uleb128 0x1
	.string	"nb"
	.2byte	0x27e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x1
	.string	"db"
	.2byte	0x289
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF285
	.2byte	0x228
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3333
	.uleb128 0x6
	.string	"ip"
	.2byte	0x228
	.byte	0x2e
	.4byte	0x1c0b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x228
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x32c6
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x22e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x231
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x4
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x2
	.4byte	.LASF286
	.2byte	0x236
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF287
	.2byte	0x237
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF278
	.2byte	0x239
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF280
	.2byte	0x23d
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x23e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x243
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF288
	.2byte	0x217
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33b3
	.uleb128 0x2
	.4byte	.LASF289
	.2byte	0x219
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF290
	.2byte	0x21a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"b"
	.2byte	0x21b
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"z"
	.2byte	0x21f
	.byte	0x15
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF291
	.2byte	0x1e9
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3516
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1e9
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1e9
	.byte	0x3d
	.4byte	0x1c0b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0xa
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x3412
	.uleb128 0x1
	.string	"i"
	.2byte	0x1ec
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x3465
	.uleb128 0x2
	.4byte	.LASF292
	.2byte	0x1f5
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF232
	.2byte	0x1f7
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"i"
	.2byte	0x1f8
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x2
	.4byte	.LASF293
	.2byte	0x201
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF266
	.2byte	0x203
	.byte	0x13
	.4byte	0x2593
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.string	"i"
	.2byte	0x204
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x2
	.4byte	.LASF294
	.2byte	0x206
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF295
	.2byte	0x207
	.byte	0x15
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF296
	.2byte	0x209
	.byte	0x17
	.4byte	0x2593
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"j"
	.2byte	0x20a
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF297
	.2byte	0x1dd
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x356f
	.uleb128 0x6
	.string	"b"
	.2byte	0x1dd
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF298
	.2byte	0x1e0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1e1
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1e3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF299
	.2byte	0x1d3
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35c8
	.uleb128 0x6
	.string	"b"
	.2byte	0x1d3
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF298
	.2byte	0x1d5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1d6
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1d8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF300
	.2byte	0x1ca
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3626
	.uleb128 0x6
	.string	"b"
	.2byte	0x1ca
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF298
	.2byte	0x1cc
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1cd
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1cf
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF301
	.2byte	0x1bc
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36b0
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1bc
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x1bc
	.byte	0x3d
	.4byte	0x36b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x2
	.4byte	.LASF302
	.2byte	0x1bf
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF119
	.2byte	0x1c0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x1c1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1c3
	.byte	0xd
	.4byte	0xace
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1c5
	.byte	0x14
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xc
	.4byte	0x1e8
	.uleb128 0x1e
	.4byte	.LASF303
	.2byte	0x1ba
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36e5
	.uleb128 0x6
	.string	"b"
	.2byte	0x1ba
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x14
	.4byte	.LASF304
	.2byte	0x1a5
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x375d
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1a5
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF305
	.2byte	0x1a5
	.byte	0x2f
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF302
	.2byte	0x1ac
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF119
	.2byte	0x1ae
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x1b0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1b3
	.byte	0x14
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x37
	.4byte	.LASF320
	.byte	0x1
	.2byte	0x1a0
	.byte	0x6
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1e
	.4byte	.LASF306
	.2byte	0x18c
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3832
	.uleb128 0x6
	.string	"ip"
	.2byte	0x18c
	.byte	0x26
	.4byte	0x1c0b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF186
	.2byte	0x18c
	.byte	0x2e
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"p"
	.2byte	0x18e
	.byte	0x12
	.4byte	0x633
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF31
	.2byte	0x18f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF307
	.2byte	0x190
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF308
	.2byte	0x198
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x2
	.4byte	.LASF309
	.2byte	0x194
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x1
	.string	"i"
	.2byte	0x195
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF310
	.2byte	0x185
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3862
	.uleb128 0x1
	.string	"x"
	.2byte	0x185
	.byte	0x30
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF311
	.2byte	0x174
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38ac
	.uleb128 0x6
	.string	"blk"
	.2byte	0x174
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"src"
	.2byte	0x174
	.byte	0x2c
	.4byte	0xcfa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x176
	.byte	0x1a
	.4byte	0x38ac
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	0xa7c
	.uleb128 0x17
	.4byte	.LASF312
	.2byte	0x15b
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38ed
	.uleb128 0x3
	.4byte	.LASF110
	.2byte	0x15b
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.string	"src"
	.2byte	0x15b
	.byte	0x3b
	.4byte	0xcfa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x14
	.4byte	.LASF313
	.2byte	0x154
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3937
	.uleb128 0x6
	.string	"blk"
	.2byte	0x154
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"dst"
	.2byte	0x154
	.byte	0x25
	.4byte	0xcf8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x156
	.byte	0x1a
	.4byte	0x38ac
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x38
	.4byte	.LASF314
	.byte	0x1
	.2byte	0x14d
	.byte	0xd
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3965
	.uleb128 0x6
	.string	"be"
	.2byte	0x14d
	.byte	0x31
	.4byte	0x38ac
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF315
	.2byte	0x11d
	.byte	0x1d
	.4byte	0x38ac
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x39e8
	.uleb128 0x3
	.4byte	.LASF119
	.2byte	0x11d
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF316
	.2byte	0x12d
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x39c8
	.uleb128 0x1
	.string	"i"
	.2byte	0x122
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.string	"i"
	.2byte	0x12e
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF317
	.2byte	0x103
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3a48
	.uleb128 0x2
	.4byte	.LASF318
	.2byte	0x105
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF319
	.2byte	0x106
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x1
	.string	"i"
	.2byte	0x109
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x39
	.4byte	.LASF321
	.byte	0x1
	.byte	0xfb
	.byte	0x6
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x3a
	.4byte	.LASF322
	.byte	0x1
	.byte	0xef
	.byte	0x6
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3a9f
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x1a
	.string	"i"
	.byte	0xf1
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF323
	.byte	0x1
	.byte	0xc3
	.byte	0xd
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3adb
	.uleb128 0x3c
	.4byte	.LASF110
	.byte	0x1
	.byte	0xc3
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"dst"
	.byte	0xc3
	.byte	0x34
	.4byte	0xcf8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3d
	.4byte	.LASF324
	.byte	0x1
	.byte	0xb8
	.byte	0x14
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3b21
	.uleb128 0x15
	.string	"f0"
	.byte	0xb8
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x15
	.string	"f1"
	.byte	0xb8
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x15
	.string	"f2"
	.byte	0xb8
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x3e
	.4byte	.LASF325
	.byte	0x1
	.byte	0x84
	.byte	0x6
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c0d
	.uleb128 0xe
	.4byte	.LASF326
	.byte	0x91
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1a
	.string	"st"
	.byte	0x95
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xe
	.4byte	.LASF327
	.byte	0x9d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xe
	.4byte	.LASF328
	.byte	0x9e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xe
	.4byte	.LASF329
	.byte	0xa3
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xe
	.4byte	.LASF330
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xe
	.4byte	.LASF331
	.byte	0xa5
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xe
	.4byte	.LASF332
	.byte	0xa6
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xe
	.4byte	.LASF333
	.byte	0xa7
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xe
	.4byte	.LASF334
	.byte	0xb1
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1a
	.string	"s"
	.byte	0x86
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0xe
	.4byte	.LASF147
	.byte	0x87
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3f
	.4byte	.LASF335
	.byte	0x1
	.byte	0x82
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c48
	.uleb128 0x15
	.string	"b"
	.byte	0x82
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"o"
	.byte	0x82
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x40
	.4byte	.LASF339
	.byte	0x1
	.byte	0x81
	.byte	0x14
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x15
	.string	"b"
	.byte	0x81
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"o"
	.byte	0x81
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x15
	.string	"v"
	.byte	0x81
	.byte	0x38
	.4byte	0x8b
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
	.uleb128 0x3
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
	.uleb128 0x4
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x5
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
	.uleb128 0x6
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
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
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
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
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
	.uleb128 0xf
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
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
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x14
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
	.uleb128 0x15
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
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
	.uleb128 0x18
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x19
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
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
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
	.uleb128 0x1b
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x1d
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
	.uleb128 0x1e
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
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x23
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
	.uleb128 0x24
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
	.uleb128 0x25
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
	.uleb128 0x26
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
	.uleb128 0x27
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x28
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x29
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
	.uleb128 0x2a
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
	.uleb128 0x2b
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
	.uleb128 0x2c
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x2d
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
	.uleb128 0x2e
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x30
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
	.uleb128 0x31
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
	.uleb128 0x32
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x34
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
	.uleb128 0x35
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x36
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
	.uleb128 0x37
	.uleb128 0x2e
	.byte	0
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
	.uleb128 0x38
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
	.uleb128 0x39
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
	.uleb128 0x3a
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
	.uleb128 0x3c
	.uleb128 0x5
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
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3d
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
	.uleb128 0x3e
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3f
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
	.uleb128 0x40
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
	.uleb128 .LBB37-.Ltext0
	.uleb128 .LBE37-.Ltext0
	.byte	0x4
	.uleb128 .LBB39-.Ltext0
	.uleb128 .LBE39-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB38-.Ltext0
	.uleb128 .LBE38-.Ltext0
	.byte	0x4
	.uleb128 .LBB40-.Ltext0
	.uleb128 .LBE40-.Ltext0
	.byte	0
.LLRL2:
	.byte	0x4
	.uleb128 .LBB47-.Ltext0
	.uleb128 .LBE47-.Ltext0
	.byte	0x4
	.uleb128 .LBB48-.Ltext0
	.uleb128 .LBE48-.Ltext0
	.byte	0
.LLRL3:
	.byte	0x4
	.uleb128 .LBB62-.Ltext0
	.uleb128 .LBE62-.Ltext0
	.byte	0x4
	.uleb128 .LBB66-.Ltext0
	.uleb128 .LBE66-.Ltext0
	.byte	0
.LLRL4:
	.byte	0x4
	.uleb128 .LBB68-.Ltext0
	.uleb128 .LBE68-.Ltext0
	.byte	0x4
	.uleb128 .LBB70-.Ltext0
	.uleb128 .LBE70-.Ltext0
	.byte	0
.LLRL5:
	.byte	0x4
	.uleb128 .LBB74-.Ltext0
	.uleb128 .LBE74-.Ltext0
	.byte	0x4
	.uleb128 .LBB76-.Ltext0
	.uleb128 .LBE76-.Ltext0
	.byte	0
.LLRL6:
	.byte	0x4
	.uleb128 .LBB100-.Ltext0
	.uleb128 .LBE100-.Ltext0
	.byte	0x4
	.uleb128 .LBB101-.Ltext0
	.uleb128 .LBE101-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF218:
	.string	"newi"
.LASF133:
	.string	"get_current_file_table"
.LASF166:
	.string	"left"
.LASF240:
	.string	"last"
.LASF162:
	.string	"fs_size"
.LASF200:
	.string	"fs_rename"
.LASF55:
	.string	"vaddr"
.LASF180:
	.string	"created_new"
.LASF247:
	.string	"is_stdout"
.LASF147:
	.string	"base"
.LASF151:
	.string	"oldfd"
.LASF285:
	.string	"inode_blockno"
.LASF135:
	.string	"strlen"
.LASF152:
	.string	"newfd"
.LASF139:
	.string	"strncmp"
.LASF60:
	.string	"program_size"
.LASF146:
	.string	"whence"
.LASF314:
	.string	"bcache_release"
.LASF103:
	.string	"flags"
.LASF288:
	.string	"alloc_data_block"
.LASF282:
	.string	"secondbuf"
.LASF335:
	.string	"mr32"
.LASF105:
	.string	"virtq_used_elem"
.LASF11:
	.string	"unsigned int"
.LASF65:
	.string	"next"
.LASF237:
	.string	"leafname"
.LASF212:
	.string	"zero"
.LASF35:
	.string	"addrs"
.LASF143:
	.string	"kalloc_pages"
.LASF189:
	.string	"fs_chown"
.LASF227:
	.string	"remove_dirent"
.LASF209:
	.string	"fs_unlink"
.LASF277:
	.string	"idx2"
.LASF187:
	.string	"fs_open"
.LASF258:
	.string	"build_abs_normalized"
.LASF185:
	.string	"pdi_inh"
.LASF220:
	.string	"merged"
.LASF239:
	.string	"save"
.LASF250:
	.string	"fs_init"
.LASF56:
	.string	"memsz"
.LASF31:
	.string	"mode"
.LASF327:
	.string	"devQ"
.LASF101:
	.string	"virtq_desc"
.LASF63:
	.string	"num_process_pages"
.LASF100:
	.string	"g_time_offset"
.LASF223:
	.string	"compn"
.LASF222:
	.string	"comps"
.LASF126:
	.string	"bcache_misses"
.LASF232:
	.string	"ents"
.LASF195:
	.string	"fs_link"
.LASF95:
	.string	"FK_FILE"
.LASF10:
	.string	"uint32_t"
.LASF104:
	.string	"ring"
.LASF316:
	.string	"slot"
.LASF310:
	.string	"fs_now"
.LASF190:
	.string	"fs_chmod"
.LASF165:
	.string	"to_total"
.LASF287:
	.string	"dbl_index1"
.LASF249:
	.string	"is_pipe"
.LASF291:
	.string	"free_inode_blocks"
.LASF307:
	.string	"shift"
.LASF54:
	.string	"stack_top"
.LASF96:
	.string	"FK_PIPE"
.LASF66:
	.string	"umask"
.LASF157:
	.string	"result"
.LASF62:
	.string	"file_table"
.LASF197:
	.string	"newpath"
.LASF228:
	.string	"parent_inum"
.LASF42:
	.string	"pte_t"
.LASF137:
	.string	"strncpy"
.LASF87:
	.string	"write_open"
.LASF21:
	.string	"nlog"
.LASF173:
	.string	"bufblk"
.LASF233:
	.string	"cur_entries"
.LASF134:
	.string	"strncat"
.LASF298:
	.string	"bmapblk"
.LASF72:
	.string	"kind"
.LASF278:
	.string	"dindirect_blk"
.LASF214:
	.string	"pdi2"
.LASF34:
	.string	"ctime"
.LASF203:
	.string	"oldpd"
.LASF325:
	.string	"virtio_blk_init"
.LASF74:
	.string	"pipe"
.LASF156:
	.string	"owner"
.LASF269:
	.string	"joined"
.LASF263:
	.string	"fs_realpath"
.LASF40:
	.string	"stat"
.LASF267:
	.string	"lbuf"
.LASF61:
	.string	"xstatus"
.LASF73:
	.string	"used"
.LASF281:
	.string	"first_blk"
.LASF304:
	.string	"read_inode"
.LASF118:
	.string	"bcache_entry"
.LASF148:
	.string	"newoff"
.LASF144:
	.string	"puts"
.LASF271:
	.string	"prefix"
.LASF15:
	.string	"size_t"
.LASF293:
	.string	"dblk"
.LASF145:
	.string	"offset"
.LASF323:
	.string	"virtio_blk_read"
.LASF252:
	.string	"pipealloc"
.LASF242:
	.string	"next_inum"
.LASF116:
	.string	"status_byte"
.LASF299:
	.string	"bitmap_set"
.LASF59:
	.string	"program"
.LASF230:
	.string	"add_dirent"
.LASF177:
	.string	"fs_open2"
.LASF169:
	.string	"blk_idx"
.LASF155:
	.string	"fs_dup_table"
.LASF68:
	.string	"supp_gids"
.LASF322:
	.string	"bcache_init"
.LASF191:
	.string	"fs_lstat"
.LASF81:
	.string	"num_owner_process"
.LASF131:
	.string	"gFreeFiles"
.LASF28:
	.string	"major"
.LASF207:
	.string	"linkpath"
.LASF178:
	.string	"path"
.LASF266:
	.string	"first"
.LASF111:
	.string	"vbase"
.LASF339:
	.string	"mw32"
.LASF296:
	.string	"second"
.LASF272:
	.string	"path_lookup"
.LASF211:
	.string	"pdir"
.LASF164:
	.string	"count"
.LASF261:
	.string	"owner_cap"
.LASF127:
	.string	"block_buf"
.LASF181:
	.string	"leaf"
.LASF106:
	.string	"virtq_avail"
.LASF255:
	.string	"alloc_file"
.LASF311:
	.string	"write_block"
.LASF39:
	.string	"char"
.LASF153:
	.string	"fs_dup2"
.LASF273:
	.string	"dir_lookup"
.LASF94:
	.string	"FK_STDERR"
.LASF193:
	.string	"bufsz"
.LASF259:
	.string	"owner_remove"
.LASF306:
	.string	"check_perm"
.LASF121:
	.string	"dirty"
.LASF57:
	.string	"zombie"
.LASF83:
	.string	"data"
.LASF300:
	.string	"bitmap_test"
.LASF110:
	.string	"sector"
.LASF123:
	.string	"bcache"
.LASF319:
	.string	"oldest"
.LASF224:
	.string	"llen"
.LASF41:
	.string	"ssize_t"
.LASF71:
	.string	"file"
.LASF201:
	.string	"oname"
.LASF6:
	.string	"uint8_t"
.LASF332:
	.string	"sz_total"
.LASF295:
	.string	"sbuf"
.LASF97:
	.string	"FK_TTY"
.LASF114:
	.string	"vq_area"
.LASF318:
	.string	"victim"
.LASF130:
	.string	"gFreePipes"
.LASF20:
	.string	"ninodes"
.LASF253:
	.string	"user_va"
.LASF129:
	.string	"gFiles"
.LASF89:
	.string	"nwriter"
.LASF82:
	.string	"spipe"
.LASF321:
	.string	"bcache_stats"
.LASF334:
	.string	"vq_phys"
.LASF99:
	.string	"gActiveProc"
.LASF280:
	.string	"first_entries"
.LASF276:
	.string	"idx1"
.LASF16:
	.string	"long long int"
.LASF337:
	.string	"yield"
.LASF132:
	.string	"panic"
.LASF24:
	.string	"bmapstart"
.LASF229:
	.string	"namebuf"
.LASF140:
	.string	"printf"
.LASF217:
	.string	"fs_mkdir"
.LASF315:
	.string	"bcache_get"
.LASF199:
	.string	"newabs"
.LASF265:
	.string	"depth"
.LASF243:
	.string	"pipewrite"
.LASF51:
	.string	"context"
.LASF270:
	.string	"path_lookup_lim"
.LASF244:
	.string	"piperead"
.LASF125:
	.string	"bcache_hits"
.LASF246:
	.string	"is_tty"
.LASF172:
	.string	"disk_blk"
.LASF174:
	.string	"fs_read"
.LASF124:
	.string	"bcache_time"
.LASF313:
	.string	"read_block"
.LASF168:
	.string	"newsize"
.LASF142:
	.string	"memset"
.LASF279:
	.string	"firstbuf"
.LASF176:
	.string	"to_read"
.LASF333:
	.string	"npages"
.LASF192:
	.string	"fs_readlink"
.LASF18:
	.string	"size"
.LASF79:
	.string	"free_next"
.LASF251:
	.string	"new_file_table"
.LASF29:
	.string	"minor"
.LASF317:
	.string	"bcache_evict"
.LASF160:
	.string	"fs_close"
.LASF50:
	.string	"trapframe"
.LASF58:
	.string	"pagetable"
.LASF93:
	.string	"FK_STDOUT"
.LASF205:
	.string	"fs_symlink"
.LASF75:
	.string	"pipe_used"
.LASF149:
	.string	"fs_lseek"
.LASF283:
	.string	"second_entries"
.LASF302:
	.string	"inodes_per_blk"
.LASF208:
	.string	"tlen"
.LASF241:
	.string	"nexttok"
.LASF150:
	.string	"fs_fstat_fd"
.LASF331:
	.string	"sz_used"
.LASF86:
	.string	"read_open"
.LASF312:
	.string	"virtio_blk_write"
.LASF17:
	.string	"long double"
.LASF67:
	.string	"pgrp"
.LASF26:
	.string	"dinode"
.LASF8:
	.string	"uint16_t"
.LASF238:
	.string	"copy"
.LASF171:
	.string	"to_write"
.LASF326:
	.string	"devfeat"
.LASF36:
	.string	"dirent"
.LASF268:
	.string	"remain"
.LASF76:
	.string	"read_pipe"
.LASF43:
	.string	"pagetable_t"
.LASF328:
	.string	"drvQ"
.LASF182:
	.string	"new_inum"
.LASF308:
	.string	"perms"
.LASF52:
	.string	"parent"
.LASF262:
	.string	"dump_inode"
.LASF3:
	.string	"short int"
.LASF320:
	.string	"read_superblock"
.LASF204:
	.string	"filedi"
.LASF4:
	.string	"long int"
.LASF85:
	.string	"nwrite"
.LASF196:
	.string	"oldpath"
.LASF70:
	.string	"username"
.LASF44:
	.string	"context_t"
.LASF113:
	.string	"avail"
.LASF297:
	.string	"bitmap_clear"
.LASF91:
	.string	"num_linked_file"
.LASF292:
	.string	"iblk"
.LASF53:
	.string	"parent_pid"
.LASF12:
	.string	"uint64_t"
.LASF248:
	.string	"is_stdin"
.LASF154:
	.string	"free_fs_table"
.LASF338:
	.string	"file_system_init"
.LASF221:
	.string	"tok_start"
.LASF120:
	.string	"refcnt"
.LASF175:
	.string	"remaining"
.LASF254:
	.string	"free_file"
.LASF138:
	.string	"strcmp"
.LASF206:
	.string	"target"
.LASF64:
	.string	"deleted"
.LASF198:
	.string	"oldabs"
.LASF163:
	.string	"fs_write"
.LASF128:
	.string	"gPipes"
.LASF194:
	.string	"fs_stat"
.LASF38:
	.string	"name"
.LASF122:
	.string	"last_use"
.LASF161:
	.string	"massive"
.LASF77:
	.string	"write_pipe"
.LASF256:
	.string	"free_pipe"
.LASF48:
	.string	"num_process_kalloc_address"
.LASF14:
	.string	"uintptr_t"
.LASF78:
	.string	"oflags"
.LASF49:
	.string	"proc"
.LASF33:
	.string	"mtime"
.LASF159:
	.string	"fs_exit"
.LASF210:
	.string	"pdi3"
.LASF13:
	.string	"long unsigned int"
.LASF22:
	.string	"logstart"
.LASF309:
	.string	"member"
.LASF329:
	.string	"sz_desc"
.LASF260:
	.string	"owner_add"
.LASF202:
	.string	"nname"
.LASF5:
	.string	"int32_t"
.LASF98:
	.string	"gProc"
.LASF274:
	.string	"read_data"
.LASF158:
	.string	"orig"
.LASF225:
	.string	"need"
.LASF336:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mno-small-data-limit=0 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -fno-pie -ffreestanding"
.LASF330:
	.string	"sz_avail"
.LASF219:
	.string	"outsz"
.LASF80:
	.string	"owner_processes"
.LASF286:
	.string	"dbl_index0"
.LASF69:
	.string	"nsupp"
.LASF27:
	.string	"type"
.LASF25:
	.string	"superblock"
.LASF7:
	.string	"unsigned char"
.LASF303:
	.string	"BBLOCK"
.LASF46:
	.string	"process_pages"
.LASF170:
	.string	"blk_off"
.LASF108:
	.string	"virtio_blk_req"
.LASF37:
	.string	"inum"
.LASF115:
	.string	"aidx"
.LASF257:
	.string	"alloc_pipe"
.LASF23:
	.string	"inodestart"
.LASF235:
	.string	"alloc_inode_T_FILE"
.LASF136:
	.string	"strtok"
.LASF90:
	.string	"linked_file"
.LASF184:
	.string	"leafx"
.LASF102:
	.string	"addr"
.LASF294:
	.string	"sblk"
.LASF119:
	.string	"blkno"
.LASF47:
	.string	"process_kalloc_address"
.LASF301:
	.string	"write_inode"
.LASF236:
	.string	"path_parent_lookup_abs"
.LASF30:
	.string	"nlink"
.LASF290:
	.string	"datastart"
.LASF19:
	.string	"nblocks"
.LASF84:
	.string	"nread"
.LASF183:
	.string	"pinum"
.LASF2:
	.string	"signed char"
.LASF213:
	.string	"fs_rmdir"
.LASF284:
	.string	"indirect_blk"
.LASF9:
	.string	"short unsigned int"
.LASF186:
	.string	"want"
.LASF141:
	.string	"memcpy"
.LASF117:
	.string	"dma_buf"
.LASF216:
	.string	"entries"
.LASF234:
	.string	"abs_idx"
.LASF109:
	.string	"reserved"
.LASF231:
	.string	"child_inum"
.LASF167:
	.string	"written"
.LASF179:
	.string	"path2"
.LASF245:
	.string	"pipe_open"
.LASF107:
	.string	"virtq_used"
.LASF264:
	.string	"rest"
.LASF88:
	.string	"nreader"
.LASF45:
	.string	"mepc"
.LASF188:
	.string	"fs_utimes"
.LASF324:
	.string	"set_flags"
.LASF275:
	.string	"inode_bmap_alloc"
.LASF112:
	.string	"desc"
.LASF32:
	.string	"atime"
.LASF215:
	.string	"has_entries"
.LASF289:
	.string	"bmapblocks"
.LASF305:
	.string	"dest"
.LASF226:
	.string	"write_data_inode"
.LASF92:
	.string	"FK_STDIN"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
