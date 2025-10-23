# Test recursive function (factorial)
.section .text
.globl _start

_start:
    # Initialize stack pointer
    li sp, 0x80100000

    # Calculate factorial(5) = 120
    li a0, 5
    jal ra, factorial
    # a0 should be 120
    ecall

# Recursive factorial function
# Input: a0 = n
# Output: a0 = n!
factorial:
    # Base case: if n <= 1, return 1
    li t0, 1
    ble a0, t0, base_case

    # Recursive case: n * factorial(n-1)
    # Save n and return address on stack
    addi sp, sp, -16
    sd ra, 8(sp)
    sd a0, 0(sp)

    # Call factorial(n-1)
    addi a0, a0, -1
    jal ra, factorial

    # Restore n
    ld t0, 0(sp)
    ld ra, 8(sp)
    addi sp, sp, 16

    # Multiply: a0 = n * factorial(n-1)
    mul a0, t0, a0
    jalr zero, 0(ra)

base_case:
    li a0, 1
    jalr zero, 0(ra)
