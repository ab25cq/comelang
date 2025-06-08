    .extern kernel_satp      # C のグローバルを取り込む
    .extern user_satp        # C のグローバルを取り込む
    .globl trapvec
    .extern TRAMPOLINE
    .section .text
    .align 2

    .equ MTIME,       0x0200BFF8
    .equ MTIMECMP,    0x02004000
    .equ TIMER_INTERVAL, 10000000      # ご自分の定義に合わせる
    .equ MIE_MTIE,    (1 << 7)
    .equ MSTATUS_MIE, (1 << 3)
trapvec:
#    csrr   t1, satp
#    la     t0, user_satp
#    sd     t1, 0(t0)


    # --- まずカーネルページテーブルを SATP にセット ---
#    la   t0, kernel_satp     # t0 = &kernel_satp
#    ld   t0, 0(t0)           # t0 = kernel_satp
#    csrw satp, t0
#    sfence.vma zero, zero
                
    # ここからはカーネル用ページテーブルで動くので、
    # syscall_handler 内の puts() がユーザー空間ポインタを
    # 正しく "カーネル仮想→物理" でデリファレンスできる
    csrr  t0, mcause
                                    
    csrr   t0, mcause
    li     t1, 0x8000000000000000   # 割り込みフラグ
    and    t2, t0, t1
    beqz   t2, not_interrupt

    li     t1, 7                    # Machine timer interrupt
    li     t3, 0xfff
    and    t0, t0, t3
    beq    t0, t1, handle_timer

    li     t1, 11                   # Machine external interrupt
    beq    t0, t1, handle_external
    j      trap_return

not_interrupt:
    # ユーザーモードからの ecall かチェック
    li     t1, 8                    # ecall from U-mode = cause 8
    li     t3, 0xfff
    and    t0, t0, t3
    beq    t0, t1, handle_ecall
    mret

label:
    j label

handle_timer:
    j trampoline

handle_external:
    j handle_external

#――――――――――――――――――――――――――――――――――――――――
# ユーザーモードからのシステムコール(ecall)処理
#――――――――――――――――――――――――――――――――――――――――
handle_ecall:
#    la     t0, TRAMPOLINE
#    
#    sd ra, 0(t0)
#    sd sp, 8(t0)
#    sd gp, 16(t0)
#    sd tp, 24(t0)
#    sd s0, 152(t0)
#    sd s1, 160(t0)
#    sd s2, 168(t0)
#    sd s3, 176(t0)
#    sd s4, 184(t0)
#    sd s5, 192(t0)
#    sd s6, 200(t0)
#    sd s7, 208(t0)
#    sd s8, 216(t0)
#    sd s9, 224(t0)
#    sd s10, 232(t0)
#    sd s11, 240(t0)
    
    # --- システムコール処理の前に割り込みを有効化する ---
#    csrr t0, mstatus
#    li   t1, 8              # 1 << 3 = MSTATUS_MIE
#    or   t0, t0, t1
#    csrw mstatus, t0

    # 引数は a0..a6、システムコール番号は a7 に入っている想定
    call   syscall_handler       # C側の syscall_handler(a0,a1,..,a7) を呼び出し
    # 戻り値は a0 に

    # mepc を +4 して再実行を防ぐ
    csrr   t0, mepc
    addi   t0, t0, 4
    csrw   mepc, t0
    
#    la     t0, TRAMPOLINE
#    
#    ld ra, 0(t0)
#    ld sp, 8(t0)
#    ld gp, 16(t0)
#    ld tp, 24(t0)
#    ld s0, 152(t0)
#    ld s1, 160(t0)
#    ld s2, 168(t0)
#    ld s3, 176(t0)
#    ld s4, 184(t0)
#    ld s5, 192(t0)
#    ld s6, 200(t0)
#    ld s7, 208(t0)
#    ld s8, 216(t0)
#    ld s9, 224(t0)
#    ld s10, 232(t0)
#    ld s11, 240(t0)
    
    mret
#    j      trap_return

trap_return:
    # 5) レジスタを TRMPOLINE から復元

    # 6) ユーザー SATP を復元
    la     t0, user_satp
    ld     t0, 0(t0)
    csrw   satp, t0
    sfence.vma zero, zero

    mret
    
.global swtch
swtch:
    sd ra, 0(a0)
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
    
    ld ra, 0(a1)
    ld sp, 8(a1)
    ld gp, 16(a1)
    ld tp, 24(a1)
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
    ld a2, 248(a1)
    csrw mepc, a2
    
    mret

.globl trampoline
trampoline:
    la a0, TRAPFRAME;
    
    sd ra, 0(a0)
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

    j timer_handler

