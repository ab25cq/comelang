# Benchmark: Large loop with branches
.section .text
.globl _start

_start:
    li t0, 0         # counter = 0
    li t1, 100000    # limit = 100000
    li a0, 0         # sum = 0

loop:
    add a0, a0, t0   # sum += counter
    addi t0, t0, 1   # counter++
    blt t0, t1, loop # if counter < limit, loop

    # Exit with sum (will be large)
    ecall
