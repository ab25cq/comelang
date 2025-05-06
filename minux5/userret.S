.equ TRAPFRAME,  0x3000

.globl userret
userret:
    # a0: satp 

    # MMU
#    csrw satp, a0
#    sfence.vma zero, zero

    # trapframe  a1 
    li a1, TRAPFRAME
    
    ld ra, 0(a1)
    ld sp, 8(a1)
    ld gp, 16(a1)
    ld tp, 24(a1)
    ld t0, 32(a1)
    ld t1, 40(a1)
    ld t2, 48(a1)
    ld t3, 56(a1)
    ld t4, 64(a1)
    ld t5, 72(a1)
    ld t6, 80(a1)
#    ld a0, 88(a1)
#    ld a1, 96(a1)
    ld a2, 104(a1)
    ld a3, 112(a1)
    ld a4, 120(a1)
    ld a5, 128(a1)
    ld a6, 136(a1)
    ld a7, 144(a1)
    ld s0, 152(a1)
    ld s1, 160(a1)
    ld s2, 168(a1)
    ld s3, 176(a1)
    ld s4, 184(a1)
    ld s5, 192(a1)
    ld s6, 200(a1)
    ld s7, 208(a1)
    ld s8, 216(a1)
    ld s9, 224(a1)
    ld s10, 232(a1)
    ld s11, 240(a1)
    ld t0, 248(a1)
    csrw sepc, t0

    # sstatus : SPP=0 (U-mode), SPIE=1
    csrr t1, sstatus
    li   t2, ~(1 << 8)      # SPP=0
    and  t1, t1, t2
    li   t2, (1 << 5)       # SPIE=1
    or   t1, t1, t2
    csrw sstatus, t1

    sret

