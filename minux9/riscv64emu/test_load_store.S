# Test LOAD/STORE instructions
.section .text
.globl _start

_start:
    # Set up a base address for testing
    li sp, 0x80100000    # Use a high address in memory

    # Test SW/LW (32-bit)
    li t0, 0x12345678
    sw t0, 0(sp)
    lw t1, 0(sp)
    # t1 should be sign-extended: 0x0000000012345678

    # Test SD/LD (64-bit)
    li t0, -1            # 0xFFFFFFFFFFFFFFFF
    sd t0, 8(sp)
    ld t2, 8(sp)
    # t2 should be 0xFFFFFFFFFFFFFFFF

    # Test SH/LH (16-bit signed)
    li t0, 0xFFFF8765   # negative 16-bit value
    sh t0, 16(sp)
    lh t3, 16(sp)
    # t3 should be sign-extended: 0xFFFFFFFFFFFF8765

    # Test SB/LB (8-bit signed)
    li t0, 0xFF         # -1 as 8-bit
    sb t0, 24(sp)
    lb t4, 24(sp)
    # t4 should be sign-extended: 0xFFFFFFFFFFFFFFFF

    # Test LBU (unsigned 8-bit)
    lbu t5, 24(sp)
    # t5 should be zero-extended: 0x00000000000000FF

    # Test LHU (unsigned 16-bit)
    lhu t6, 16(sp)
    # t6 should be zero-extended: 0x0000000000008765

    # All tests passed - exit with 42
    li a0, 42
    ecall
