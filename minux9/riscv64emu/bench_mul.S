# Benchmark: multiply loop with M extension
.section .text
.globl _start

_start:
    li t0, 0              # counter
    li t1, 10000          # loop count
    li a0, 123            # multiplicand
    li a1, 456            # multiplier

loop:
    mul a2, a0, a1        # multiply
    div a3, a2, a1        # divide
    rem a4, a2, a0        # remainder

    addi t0, t0, 1        # increment counter
    blt t0, t1, loop      # loop if t0 < t1

    mv a0, a2             # exit with result
    ecall
