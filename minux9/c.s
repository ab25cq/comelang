.globl _out
_out:
    li a7, 70
    li a0, 5
    ecall

.globl _start\
_start:
    li a7, 70
    li a0, 3
    ecall
