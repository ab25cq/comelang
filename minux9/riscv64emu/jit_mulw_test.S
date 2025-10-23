# Test 32-bit M extension (MULW, DIVW, REMW)
.section .text
.globl _start

_start:
    # Test MULW
    li a0, 0x100000005       # Upper bits should be ignored
    li a1, 0x200000003
    mulw a2, a0, a1          # 5 * 3 = 15

    # Test DIVW
    li a3, 100
    li a4, 5
    divw a5, a3, a4          # 100 / 5 = 20

    # Test REMW
    li a6, 100
    li a7, 30
    remw t0, a6, a7          # 100 % 30 = 10

    # Exit with a2 (should be 15)
    mv a0, a2
    ecall
