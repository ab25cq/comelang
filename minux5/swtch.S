# Context switch
#
#   void swtch(struct context *old, struct context *new);
# 
# Save current registers in old. Load from new.	

.globl swtch
swtch:
    sd ra, 0(a0)
    sd sp, 8(a0)
    sd gp, 16(a0)
    sd tp, 24(a0)
    sd t0, 32(a0)
    sd t1, 40(a0)
    sd t2, 48(a0)
    sd t3, 56(a0)
    sd t4, 64(a0)
    sd t5, 72(a0)
    sd t6, 80(a0)
    sd a0, 88(a0)
    sd a1, 96(a0)
    sd a2, 104(a0)
    sd a3, 112(a0)
    sd a4, 120(a0)
    sd a5, 128(a0)
    sd a6, 136(a0)
    sd a7, 144(a0)
    sd s0, 152(a0)
    sd s1, 160(a0)
    sd s2, 168(a0)
    sd s3, 176(a0)
    sd s4, 184(a0)
    sd s5, 192(a0)
    sd s6, 200(a0)
    sd s7, 208(a0)
    sd s8, 216(a0)
    sd s9, 224(a0)
    sd s10, 232(a0)
    sd s11, 240(a0)

    # Load all registers from *a1
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
    ld a0, 88(a1)
    ld a1, 96(a1)
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

    csrr t0, mstatus
    ori t0, t0, 0x8  # MSTATUS_MIE = (1 << 3)
    csrw mstatus, t0
    
    csrr t1, mstatus

    and t1, t1, t2
    li t2, (3 << 11)   # MPP=11
    or t1, t1, t2
    csrw mstatus, t1
   
    ret

