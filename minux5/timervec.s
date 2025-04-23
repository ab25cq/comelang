.globl timervec
timervec:
  addi sp, sp, -16
  sd ra, 8(sp)
  call timer_handler
  ld ra, 8(sp)
  addi sp, sp, 16
  mret

