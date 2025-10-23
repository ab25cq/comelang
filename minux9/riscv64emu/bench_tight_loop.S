# Tight loop benchmark for block chaining
.section .text
.globl _start

_start:
    li t0, 0              # counter = 0
    li t1, 1000000        # limit = 1,000,000
    li a0, 0              # sum = 0

loop:
    addi a0, a0, 1        # sum++
    addi t0, t0, 1        # counter++
    blt t0, t1, loop      # if counter < limit, loop

    # Exit with sum
    ecall
