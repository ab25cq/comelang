
.global printsp
printsp:
    li   t1, 0x10000000     # UART IO address
    mv   t2, sp             # t2 = sp
    srli t0, t2, 17         # 17  0x2 t0 4bit
    andi t0, t0, 0xf        # 4bit  t0 = 0x2
    li   t3, 0x30           # ASCII '0'
    add  t0, t0, t3         # '0' + 2 = '2'
    sb   t0, 0(t1)          #   UART  '2' 

end:
    j end

.globl userret
userret:
    # a0: satp 

    # MMU
    csrw satp, a0
    sfence.vma zero, zero


    # trapframe  a1 
    li a1, 0x3000
    
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

    j printsp

    sret

