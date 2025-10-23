# Test 32-bit operations (W instructions)
.section .text
.globl _start

_start:
    # Test ADDIW: add 32-bit immediate
    li a0, 0x100000000      # 64-bit value
    addiw a0, a0, 42        # Should truncate to 32-bit, then sign-extend
    
    # Test ADDW: 32-bit add
    li a1, 0x7FFFFFFF       # Max positive 32-bit
    li a2, 1
    addw a3, a1, a2         # Should wrap to negative
    
    # Test SLLIW: 32-bit shift left
    li a4, 0x12345678
    slliw a5, a4, 4
    
    # Exit with a0
    ecall
