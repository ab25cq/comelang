# Test loop with BRANCH
.section .text
.globl _start

_start:
    li t0, 0         # counter = 0
    li t1, 10        # limit = 10
    li a0, 0         # sum = 0

loop:
    add a0, a0, t0   # sum += counter
    addi t0, t0, 1   # counter++
    blt t0, t1, loop # if counter < limit, loop

    # a0 should be 0+1+2+3+4+5+6+7+8+9 = 45
    ecall
