# Test BRANCH instructions
.section .text
.globl _start

_start:
    # Test BEQ (branch if equal)
    li a0, 5
    li a1, 5
    beq a0, a1, beq_taken
    li a0, 99        # Should not execute
    ecall
beq_taken:

    # Test BNE (branch if not equal)
    li a0, 5
    li a1, 10
    bne a0, a1, bne_taken
    li a0, 99        # Should not execute
    ecall
bne_taken:

    # Test BLT (branch if less than, signed)
    li a0, -1
    li a1, 0
    blt a0, a1, blt_taken
    li a0, 99        # Should not execute
    ecall
blt_taken:

    # Test BGE (branch if greater or equal, signed)
    li a0, 10
    li a1, 5
    bge a0, a1, bge_taken
    li a0, 99        # Should not execute
    ecall
bge_taken:

    # Test BLTU (branch if less than, unsigned)
    li a0, 5
    li a1, 10
    bltu a0, a1, bltu_taken
    li a0, 99        # Should not execute
    ecall
bltu_taken:

    # Test BGEU (branch if greater or equal, unsigned)
    li a0, 10
    li a1, 5
    bgeu a0, a1, bgeu_taken
    li a0, 99        # Should not execute
    ecall
bgeu_taken:

    # All tests passed - exit with 42
    li a0, 42
    ecall
