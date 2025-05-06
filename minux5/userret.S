#printsp:
#    li t1, 0x10000000    # UART IO address
#    mv t2, sp            # spt2
#
#    li t3, 16            # 1664bit = 16 hex digits
#
#print_hex_loop:
#    srli t4, t2, 60      # 4
#    li t5, 10
#    blt t4, t5, digit_is_num
#
#    # 'A' + (t4 - 10)
#    addi t4, t4, -10
#    li t6, 'A'
#    add t4, t4, t6
#    j store_uart
#
#digit_is_num:
#    li t6, '0'
#    add t4, t4, t6
#
#store_uart:
#    sb t4, 0(t1)         # UART 1
#
#    slli t2, t2, 4       # 4
#    addi t3, t3, -1
#    bnez t3, print_hex_loop
#
#end:
#    j end


    

.globl userret
userret:
    # a0: satp 

    # MMU
    sfence.vma zero, zero
    csrw satp, a0
    sfence.vma zero, zero


    # trapframe  a1 
#    li a1, 0x3000
    
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

#    j printsp

    sret

