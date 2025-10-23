# JIT benchmark - larger loop
.section .text
.globl _start

_start:
    li a0, 0        # counter
    li a1, 10000    # limit (10000 iterations)

loop:
    addi a0, a0, 1
    addi a2, a0, 5
    xori a3, a2, 0xff
    andi a4, a3, 0x0f
    ori  a5, a4, 0x10
    blt a0, a1, loop
    
    ecall
