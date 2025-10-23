# CSR instruction test
.section .text
.globl _start

_start:
    li t6, 10               # Loop counter

loop:
    # Test CSRRW - write to custom CSR 0x51
    li t0, 0x1234
    csrrw t1, 0x51, t0      # t1 = old value (0), csr[0x51] = 0x1234

    # Test CSRRS - set bits
    li t2, 0x00FF
    csrrs t3, 0x51, t2      # t3 = old value (0x1234), csr[0x51] |= 0x00FF = 0x12FF

    # Test CSRRC - clear bits
    li t4, 0x0F00
    csrrc t5, 0x51, t4      # t5 = old value (0x12FF), csr[0x51] &= ~0x0F00 = 0x02FF

    # Test CSRRWI - write immediate
    csrrwi a0, 0x51, 7      # a0 = old value (0x02FF), csr[0x51] = 7

    # Test CSRRSI - set bits immediate
    csrrsi a1, 0x51, 8      # a1 = old value (7), csr[0x51] |= 8 = 15

    # Test CSRRCI - clear bits immediate
    csrrci a2, 0x51, 4      # a2 = old value (15), csr[0x51] &= ~4 = 11

    # Final read
    csrr a0, 0x51           # a0 = final value (11)

    addi t6, t6, -1
    bnez t6, loop

    # Exit with a0 (should be 11)
    ecall
