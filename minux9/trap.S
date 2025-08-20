    .extern kernel_satp      # C のグローバルを取り込む
    .extern user_satp        # C のグローバルを取り込む
    .extern kernel_sp        # C のゴローバル変数を取り込む
    .extern user_sp          # C のゴローバル変数を取り込む
    .extern gCPU             # C のゴローバル変数を取り込む
    .section ".trampoline", "ax"
    .globl trapvec
    #.section .text
    .align 2
trapvec:
/*
    la t0, gCPU
    ld t0, 0(t0)        # t0 = &gCPU
    ld t0, 0(t0)        # t0 = gCPU->proc (現在のプロセス)
*/
    la t0, TRAPFRAME;

    sd ra, 0(t0)
    sd sp, 8(t0)
    sd gp, 16(t0)
    sd tp, 24(t0)
/* sd t0, 32(t0) */
    sd t1, 40(t0)
    sd t2, 48(t0)
    sd t3, 56(t0)
    sd t4, 64(t0)
    sd t5, 72(t0)
    sd t6, 80(t0)
    sd a0, 88(t0)
    sd a1, 96(t0)
    sd a2, 104(t0)
    sd a3, 112(t0)
    sd a4, 120(t0)
    sd a5, 128(t0)
    sd a6, 136(t0)
    sd a7, 144(t0)
    sd s0, 152(t0)
    sd s1, 160(t0)
    sd s2, 168(t0)
    sd s3, 176(t0)
    sd s4, 184(t0)
    sd s5, 192(t0)
    sd s6, 200(t0)
    sd s7, 208(t0)
    sd s8, 216(t0)
    sd s9, 224(t0)
    sd s10, 232(t0)
    sd s11, 240(t0)

    csrr t1, sepc
    sd t1, 248(t0)
    
    csrr   t1, satp
    la     t0, user_satp
    sd     t1, 0(t0)
    
    la     t0, user_sp
    mv     t1, sp
    sd     t1, 0(t0)

    # --- まずカーネルページテーブルを SATP にセット ---
    la   t0, kernel_satp     # t0 = &kernel_satp
    ld   t0, 0(t0)           # t0 = kernel_satp
    csrw satp, t0
    sfence.vma zero, zero
    
    la     t0, kernel_sp
    ld     sp, 0(t0)
                
    # ここからはカーネル用ページテーブルで動くので、
    # syscall_handler 内の puts() がユーザー空間ポインタを
    # 正しく "カーネル仮想→物理" でデリファレンスできる
    # trapvec_S entrypoint
    csrr   t0, scause          # S-mode の原因レジスタを読む
    srli   t1, t0, 63          # t1 = 割り込みフラグ (scause[63])
    beqz   t1, not_interrupt   # フラグが 0 なら同期例外へ

    li     t2, 0xfff
    and    t0, t0, t2          # t0 = scause[11:0]（割り込み番号）

    li     t2, 5               # Supervisor タイマー割り込み = 5
    beq    t0, t2, handle_timer

    li     t2, 9               # Supervisor 外部割り込み = 9
    beq    t0, t2, handle_external

    # その他の割り込み
    j      trap_return

    .section ".trampoline", "ax"
not_interrupt:
    # ecall from U-mode?
    li     t2, 8               # ecall from U = 8
    and    t0, t0, t2          # (scause & 0xfff) == 8 ?
    beq    t0, t2, handle_ecall

    # それ以外の同期例外
    j      trap_return

    .section ".trampoline", "ax"
handle_timer:
    call   timer_handler
    
#    csrr   t0, time
#    addi   t0, t0, 1000
#    csrw   0x14d, t0      # stimecmp CSR
    j      trap_return

    .section ".trampoline", "ax"
handle_external:
    call   external_handler
    j      trap_return
    
    
.equ PLIC_BASE,       0x0C000000
.equ PLIC_CLAIM,      PLIC_BASE + 0x201004   # hart0, claim/complete register
.equ PLIC_COMPLETE,   PLIC_BASE + 0x201004
.equ UART_PLIC_IRQ,   10                     # あなたの環境の UART IRQ 番号
    .section ".trampoline", "ax"
external_handler:
    # 1) PLIC から current IRQ を取り出す
    la   t0, PLIC_CLAIM
    ld   t1, 0(t0)           # t1 = IRQ number

    # 2) IRQ に応じたハンドラ
    li   t2, UART_PLIC_IRQ
    beq  t1, t2, .Lhandle_uart
    # その他の IRQ は未対応なら無視
    j    .Lcomplete

    .section ".trampoline", "ax"
.Lhandle_uart:
    call uart_rx_handler
    j    .Lcomplete

    .section ".trampoline", "ax"
.Lcomplete:
    # 3) PLIC に complete を書き戻し
    la   t0, PLIC_COMPLETE
    sd   t1, 0(t0)

    ret

    .section ".trampoline", "ax"
handle_ecall:
    call   syscall_handler

    # save the just-restored sp into user_sp for trap_return
#    la    t1, TRAPFRAME
#    ld    t2,  8(t1)        # t2 = trapframe.sp
#    la    t3, user_sp
#    sd    t2,  0(t3)    
    
    la t0, TRAPFRAME
    
/*
    la t0, gCPU
    ld t0, 0(t0)        # t0 = &gCPU
*/

    ld ra, 0(t0)
    ld sp, 8(t0)
    ld gp, 16(t0)
    ld tp, 24(t0)
/* sd t0, 32(t0) */
    ld t1, 40(t0)
    ld t2, 48(t0)
    ld t3, 56(t0)
    ld t4, 64(t0)
    ld t5, 72(t0)
    ld t6, 80(t0)
    ld a0, 88(t0) 
    ld a1, 96(t0)
    ld a2, 104(t0)
    ld a3, 112(t0)
    ld a4, 120(t0)
    ld a5, 128(t0)
    ld a6, 136(t0)
    ld a7, 144(t0)
    ld s0, 152(t0)
    ld s1, 160(t0)
    ld s2, 168(t0)
    ld s3, 176(t0)
    ld s4, 184(t0)
    ld s5, 192(t0)
    ld s6, 200(t0)
    ld s7, 208(t0)
    ld s8, 216(t0)
    ld s9, 224(t0)
    ld s10, 232(t0)
    ld s11, 240(t0)
    ld t0, 248(t0)

    csrw   sepc, t0
    csrr   t0, sepc
    addi   t0, t0, 4
    csrw   sepc, t0

    j      trap_return

   .equ STIE_BIT,   (1<<5)
   .equ SPIE_UPIE,  ((1<<4)|(1<<5))
   .equ SPP_BIT,    (1<<8)
    .section ".trampoline", "ax"
trap_return:
    # --- （もし必要なら）ユーザー SATP をリロード ---
    la    t0, user_satp
    ld    t0, 0(t0)
    csrw  satp, t0
    sfence.vma zero, zero
    
    la t0, user_sp
    ld sp, 0(t0)

    # 1) Supervisor タイマー割り込み許可 (STIE=bit5)
    li    t0, STIE_BIT
    csrs  sie, t0

    # 2) sret 復帰時の sstatus 設定:
    #    - UPIE=1,SPIE=1 をセット
    #    - SPP=0 (U-modeに戻る) をクリア
    li    t0, SPIE_UPIE
    csrs  sstatus, t0
    li    t0, SPP_BIT
    csrc  sstatus, t0
    
/*
    # 1) Supervisor タイマー割り込みを有効化 (Sie の STIE=bit5)
    li   t0, (1<<5)
    csrs sie, t0

    # 2) sret 復帰時に割り込み許可状態を保持 (UPIE=1, SPIE=1)
    li   t0, ((1<<4)|(1<<5))
    csrs sstatus, t0

    # 3) SPP=0 にしてユーザーモードへ
    li   t0, (1<<8)
    csrc sstatus, t0
*/

    # 4) ユーザーモード復帰
    sret

    # 3) 戻る
    sret
    
    .extern user_satp      # C のグローバルを取り込む
.global swtch
swtch:
    ld ra, 0(a0)
    ld sp, 8(a0)
    ld gp, 16(a0)
    ld tp, 24(a0)
    sd t0, 32(a0)
    ld t1, 40(a0)
    ld t2, 48(a0)
    ld t3, 56(a0)
    ld t4, 64(a0)
    ld t5, 72(a0)
    ld t6, 80(a0)
/* ld a0, 88(a0) */
    ld a1, 96(a0)
    ld a2, 104(a0)
    ld a3, 112(a0)
    ld a4, 120(a0)
    ld a5, 128(a0)
    ld a6, 136(a0)
    ld a7, 144(a0)
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
    ld a0, 248(a0)
    csrw sepc, a0
    
    csrr a0, sscratch
    
    # 1) SATP をユーザー用ページテーブルにセット
    ld t0, user_satp
    csrw    satp, t0
    sfence.vma zero, zero
    
    # 2) スタックをユーザースタックに
    la t0, user_sp
    ld sp, 0(t0)

    # 3) sstatus.SPP=0, SPIE=1
    csrr    t0, sstatus
    li      t1,     (1<<5)       # SPIE = bit5
    or      t0, t0, t1
    li      t1,     ~(1<<8)      # clear SPP = bit8
    and     t0, t0, t1
    csrw    sstatus, t0

    # 4) sepc にエントリセット
#    csrw    sepc, a0

    # 5) Supervisor timer interrupt をセット (STIE=1, SIE=1)
    li      t0, (1<<5)           # bit5 = STIE
    csrs    sie, t0
    csrr    t0, sstatus
    li      t1, (1<<1)           # bit1 = SIE
    or      t0, t0, t1
    csrw    sstatus, t0

    # 6) タイマー割り込み用 CLINT 書き込み (MTIMECMP = MTIME + interval)
#    li      t0, CLINT_MTIME
#    ld      t1, 0(t0)            # t1 = *CLINT_MTIME
#    add     t1, t1, a3           # t1 += interval
#    li      t0, CLINT_MTIMECMP
#    sd      t1, 0(t0)

    # 7) 最後にユーザーモードに戻る
    sret

    .equ CLINT_MTIME,    0x0200BFF8
    .equ CLINT_MTIMECMP, 0x02004000
    .equ STIE_BIT,   (1<<5)
    .equ SPIE_UPIE,  ((1<<4)|(1<<5))
    .equ SPP_BIT,    (1<<8)
    .section ".trampoline", "ax"
.globl enter_user
enter_user:
     # a0=entry, a1=usersp, a2=usersatp, a3=interval, a4=gp

    # SATP をユーザーテーブルに切り替え
    csrw  satp, a2
    sfence.vma zero, zero

    # スタック切り替え
    mv    sp, a1
    
    mv    gp, a4

    # ユーザー用エントリ設定
    csrw  sepc, a0

    # Supervisor タイマー割り込み許可
    li    t0, STIE_BIT
    csrs  sie, t0

    # sret 復帰時の sstatus 設定 (UPIE,SPIE, clear SPP)
    li    t0, SPIE_UPIE
    csrs  sstatus, t0
    li    t0, SPP_BIT
    csrc  sstatus, t0

    # 実際に U-mode へ
    sret

    .align 2
    .globl mtvec
.equ CLINT_MTIME,    0x0200BFF8
.equ CLINT_MTIMECMP, 0x02004000
.equ INTERVAL,  0xFFFFFFFFFFFFFF
mtvec:
    # --- （必要なら scratch レジスタをスタックに退避）---

    # 1) 現在時刻を取る
    csrr    t0, time           # t0 = CSR time

    # 2) 次のタイマー発火時刻を計算
    li      t1, INTERVAL       # t1 = （例えば）100000
    add     t0, t0, t1         # t0 ← t0 + INTERVAL

    # 3) CLINT_MTIMECMP に書き戻し → MTIP ビットがクリアされる
    la      t2, CLINT_MTIMECMP # t2 = アドレス 0x02004000
    sd      t0, 0(t2)          # *mtimecmp = next_time

    # 4) （必要なら scratch レジスタを復元）---

    mret                        # トラップから復帰
    
    .globl asm_memmove
asm_memmove:
    # t0 にもとの dst を退避
    mv   t0, a0
    # 長さゼロ or dst == src なら何もしないで返す
    beqz a2, .exit
    beq  a0, a1, .exit

    # オーバーラップ判定：dst > src かつ領域が被っていれば逆順コピー
    blt  a0, a1, .forward

    # ── backward copy ──
    # ポインタを末尾位置へ
    add  a0, a0, a2    # dst_end = dst + len
    add  a1, a1, a2    # src_end = src + len

.backward_loop:
    addi a0, a0, -1    # dst_end--
    addi a1, a1, -1    # src_end--
    lbu  t1, 0(a1)     # t1 = *src_end
    sb   t1, 0(a0)     # *dst_end = t1
    addi a2, a2, -1    # len--
    bnez a2, .backward_loop
    j    .exit

.forward:
    # ── forward copy ──
.forward_loop:
    lbu  t1, 0(a1)     # t1 = *src
    sb   t1, 0(a0)     # *dst = t1
    addi a1, a1, 1     # src++
    addi a0, a0, 1     # dst++
    addi a2, a2, -1    # len--
    bnez a2, .forward_loop

.exit:
    # 戻り値に元の dst をセットして帰る
    mv   a0, t0
    ret
    
    .align 2
    .global yield
    .equ STACK_PAGES, 16
    .equ STACK_MAX, 4096 * STACK_PAGES
    .extern stack_top
    .extern yield_stack
yield:
    la t0, TRAPFRAME2;

    sd ra, 0(t0)
    sd sp, 8(t0)
    sd gp, 16(t0)
    sd tp, 24(t0)
/* sd t0, 32(t0) */
    sd t1, 40(t0)
    sd t2, 48(t0)
    sd t3, 56(t0)
    sd t4, 64(t0)
    sd t5, 72(t0)
    sd t6, 80(t0)
    sd a0, 88(t0)
    sd a1, 96(t0)
    sd a2, 104(t0)
    sd a3, 112(t0)
    sd a4, 120(t0)
    sd a5, 128(t0)
    sd a6, 136(t0)
    sd a7, 144(t0)
    sd s0, 152(t0)
    sd s1, 160(t0)
    sd s2, 168(t0)
    sd s3, 176(t0)
    sd s4, 184(t0)
    sd s5, 192(t0)
    sd s6, 200(t0)
    sd s7, 208(t0)
    sd s8, 216(t0)
    sd s9, 224(t0)
    sd s10, 232(t0)
    sd s11, 240(t0)

    csrr t1, sepc
    sd t1, 248(t0)
    
    la   a0, yield_stack   # a0 ← dst (以前のスタック領域)
    li   t0, STACK_MAX        # t0 ← 
    la   a1, stack_top     # a1 ← &stack_top
    sub  a1, a1, t0        # a1 ← a1 - t0  （= stack_top - 
    li   a2, STACK_MAX           # a2 ← length
    jal  asm_memmove           # call memmove(dst, src, len)
    
    call kernel_yield
    
    .align 2
    .equ STACK_PAGES, 16
    .equ STACK_MAX, 4096 * STACK_PAGES
    .global yield_return
    .extern stack_top
    .extern yield_stack
yield_return:
    li   t0, STACK_MAX        # t0 ← 
    la   a0, stack_top     # a1 ← &stack_top
    sub  a0, a0, t0        # a1 ← a1 - t0  （= stack_top - 

    la   a1, yield_stack      # a1 ← src
    li   a2, STACK_MAX           # a2 ← length
    jal  asm_memmove           # call memmove(dst, src, len)
    
    la t0, TRAPFRAME2;
    
    ld ra, 0(t0)
    ld sp, 8(t0)
    ld gp, 16(t0)
    ld tp, 24(t0)
/* sd t0, 32(t0) */
    ld t1, 40(t0)
    ld t2, 48(t0)
    ld t3, 56(t0)
    ld t4, 64(t0)
    ld t5, 72(t0)
    ld t6, 80(t0)
    ld a0, 88(t0)
    ld a1, 96(t0)
    ld a2, 104(t0)
    ld a3, 112(t0)
    ld a4, 120(t0)
    ld a5, 128(t0)
    ld a6, 136(t0)
    ld a7, 144(t0)
    ld s0, 152(t0)
    ld s1, 160(t0)
    ld s2, 168(t0)
    ld s3, 176(t0)
    ld s4, 184(t0)
    ld s5, 192(t0)
    ld s6, 200(t0)
    ld s7, 208(t0)
    ld s8, 216(t0)
    ld s9, 224(t0)
    ld s10, 232(t0)
    ld s11, 240(t0)
    ld t0, 248(t0)
    csrw sepc, t0

    ret

