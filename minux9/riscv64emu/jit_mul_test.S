# Test if MUL instructions are used
.section .text
.globl _start

_start:
    li a0, 10
    li a1, 20
    mul a2, a0, a1    # a2 = 10 * 20 = 200
    
    # Also test DIV
    li a3, 100
    li a4, 5
    div a5, a3, a4    # a5 = 100 / 5 = 20
    
    # Exit with a2
    mv a0, a2
    ecall
