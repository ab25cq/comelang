# Test addi sp,sp,-32
.section .text
.globl _start
_start:
    # Set sp to a known value
    li sp, 0x1000

    # Test: addi sp,sp,-32
    addi sp, sp, -32

    # sp should now be 0x1000 - 32 = 0xFE0
    # Move result to a0 for checking
    mv a0, sp

    # Exit with sp value in a0
    li a7, 93  # exit syscall
    ecall
