# Context switch
#
#   void swtch(struct context *old, struct context *new);
# 
# Save current registers in old. Load from new.	

.globl load_context
load_context:
    # Load all registers from *a1
    ld ra, 0(a0)
    ld sp, 8(a0)
    ld gp, 16(a0)
    ld tp, 24(a0)
    ld s0, 152(a0)
    ld s1, 160(a0)
    ld s2, 168(a0)
    ld s3, 176(a0)
    ld s4, 184(a0)
    ld s5, 192(a0)
    ld s6, 200(a0)
    ld s7, 208(a0)
    ld s8, 216(a0)
    ld s9, 224(a0)
    ld s10, 232(a0)
    ld s11, 240(a0)
    
    ret

.globl save_context
save_context:
    sd sp, 8(a0)
    sd gp, 16(a0)
    sd tp, 24(a0)
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
    csrr a3, mepc
    sd a3, 248(a0)

    ret
