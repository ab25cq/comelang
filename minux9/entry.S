.align 6

.section .text
.globl entry
.globl stack_top

entry:
  la sp, stack_top
  call start

loop_here: j loop_here

