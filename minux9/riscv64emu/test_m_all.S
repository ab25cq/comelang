# Test all M extension instructions
.section .text
.globl _start

_start:
    # Test MUL
    li a0, 10
    li a1, 20
    mul a2, a0, a1        # 10 * 20 = 200

    # Test MULH (signed high bits)
    li a0, -1             # 0xFFFFFFFFFFFFFFFF
    li a1, -1
    mulh a3, a0, a1       # (-1) * (-1) = 1, high = 0

    # Test MULHU (unsigned high bits)
    li a0, -1             # 0xFFFFFFFFFFFFFFFF (max unsigned)
    li a1, 2
    mulhu a4, a0, a1      # high bits of (2^64-1) * 2

    # Test DIV
    li a0, 100
    li a1, 5
    div a5, a0, a1        # 100 / 5 = 20

    # Test DIVU
    li a0, 100
    li a1, 5
    divu a6, a0, a1       # 100 / 5 = 20

    # Test REM
    li a0, 100
    li a1, 30
    rem a7, a0, a1        # 100 % 30 = 10

    # Test REMU
    li a0, 100
    li a1, 30
    remu t0, a0, a1       # 100 % 30 = 10

    # Test MULW
    li a0, 0x100000005
    li a1, 3
    mulw t1, a0, a1       # (5 * 3) sign-extended = 15

    # Test DIVW
    li a0, 100
    li a1, 5
    divw t2, a0, a1       # 100 / 5 = 20

    # Test DIVUW
    li a0, 100
    li a1, 5
    divuw t3, a0, a1      # 100 / 5 = 20

    # Test REMW
    li a0, 100
    li a1, 30
    remw t4, a0, a1       # 100 % 30 = 10

    # Test REMUW
    li a0, 100
    li a1, 30
    remuw t5, a0, a1      # 100 % 30 = 10

    # Exit with success (200 from first MUL)
    mv a0, a2
    ecall
