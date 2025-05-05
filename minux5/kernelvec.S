#.globl kernelvec
#kernelvec:
#    call usertrap
#    ret

.globl kernelvec
kernelvec:
    csrr t0, mcause

    li   t1, 0x8000000000000007
    beq  t0, t1, timervec

    li   t1, 8
    beq  t0, t1, ecall_handler

    j unexpected_trap

.globl ecall_handler
ecall_handler:
    call usertrap
    mret
    
    
.global unexpected_trap
unexpected_trap:
    j unexpected_trap
    
