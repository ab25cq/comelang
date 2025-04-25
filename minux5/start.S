.align 6

.equ UART_BASE, 0x10000000
.equ REG_RBR, 0
.equ REG_TBR, 0
.equ REG_IIR, 2
.equ IIR_TX_RDY, 2
.equ IIR_RX_RDY, 4

.section .text
.globl _start
.globl stack_top

_start:
  la sp, stack_top
  call main

loop_here: j loop_here

