  .globl main
//  .section .text
main:             
  addi sp, sp, -64 
  addi sp, sp, -16
  sd ra, 8(sp)
  sd fp, 0(sp)
  mv fp, sp
  li t0, -112
  add sp, sp, t0
  fsd fs0, -8(fp)
  fsd fs1, -16(fp)
  fsd fs2, -24(fp)
  fsd fs3, -32(fp)
  fsd fs4, -40(fp)
  fsd fs5, -48(fp)
  fsd fs6, -56(fp)
  fsd fs7, -64(fp)
  fsd fs8, -72(fp)
  fsd fs9, -80(fp)
  fsd fs10, -88(fp)
  fsd fs11, -96(fp)
  li t0, -104
  add t0, t0, fp
  sd sp, 0(t0)
  li t0, 16
  add t0, fp, t0
  sd a0, 0(t0)
  li t0, 24
  add t0, fp, t0
  sd a1, 0(t0)
  li t0, 32
  add t0, fp, t0
  sd a2, 0(t0)
  li t0, 40
  add t0, fp, t0
  sd a3, 0(t0)
  li t0, 48
  add t0, fp, t0
  sd a4, 0(t0)
  li t0, 56
  add t0, fp, t0
  sd a5, 0(t0)
  li t0, 64
  add t0, fp, t0
  sd a6, 0(t0)
  li t0, 72
  add t0, fp, t0
  sd a7, 0(t0)
  li a0, 1
  j .L.return.main
  li a0, 0
.L.return.main:
  fld fs0, -8(fp)
  fld fs1, -16(fp)
  fld fs2, -24(fp)
  fld fs3, -32(fp)
  fld fs4, -40(fp)
  fld fs5, -48(fp)
  fld fs6, -56(fp)
  fld fs7, -64(fp)
  fld fs8, -72(fp)
  fld fs9, -80(fp)
  fld fs10, -88(fp)
  fld fs11, -96(fp)
  mv sp, fp
  ld fp, 0(sp)
  ld ra, 8(sp)
  addi sp, sp, 16
  addi sp, sp, 64
  ret

