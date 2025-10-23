# Test LOAD/STORE instructions
.section .text
.globl _start

_start:
    # Set up stack pointer
    li sp, 0x80100000
    
    # Test: store and load
    li a0, 42
    li a1, 100
    
    # Store to stack
    sd a0, -8(sp)
    sd a1, -16(sp)
    
    # Load back
    ld a2, -8(sp)
    ld a3, -16(sp)
    
    # Add them
    add a0, a2, a3
    
    ecall
