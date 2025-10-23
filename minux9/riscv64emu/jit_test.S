# Simple RISC-V test program for JIT
# Performs a loop with integer arithmetic

.section .text
.globl _start

_start:
    # Initialize: a0 = 0 (counter), a1 = 10 (limit)
    li a0, 0
    li a1, 10

loop:
    # Increment counter: a0 = a0 + 1
    addi a0, a0, 1

    # Add some arithmetic to make the loop more interesting
    addi a2, a0, 5      # a2 = a0 + 5
    xori a3, a2, 0xff   # a3 = a2 ^ 0xff
    andi a4, a3, 0x0f   # a4 = a3 & 0x0f
    ori  a5, a4, 0x10   # a5 = a4 | 0x10

    # Check if counter < limit
    blt a0, a1, loop

    # Exit with counter value in a0
    # ECALL with a7=93 (exit syscall for some RISC-V environments)
    # For this emulator, any ECALL halts with a0 as exit code
    ecall
