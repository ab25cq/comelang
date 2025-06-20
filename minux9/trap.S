    .extern kernel_satp      # C のグローバルを取り込む
    .extern user_satp        # C のグローバルを取り込む
    .extern kernel_sp        # C のゴローバル変数を取り込む
    .section ".trampoline", "ax"
    .globl trapvec
    .extern TRAMPOLINE
    #.section .text
    .align 2
trapvec:
    #csrr   t1, satp
    #la     t0, user_satp
    #sd     t1, 0(t0)

    # --- まずカーネルページテーブルを SATP にセット ---
    la   t0, kernel_satp     # t0 = &kernel_satp
    ld   t0, 0(t0)           # t0 = kernel_satp
    csrw satp, t0
    sfence.vma zero, zero
    
    la     t0, kernel_sp
    mv     sp, t0
                
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

not_interrupt:
    # ecall from U-mode?
    li     t2, 8               # ecall from U = 8
    and    t0, t0, t2          # (scause & 0xfff) == 8 ?
    beq    t0, t2, handle_ecall

    # それ以外の同期例外
    j      trap_return

handle_timer:
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
    csrr a3, sepc
    sd a3, 248(a0)
    call   timer_handler
    
#    csrr   t0, time
#    addi   t0, t0, 1000
#    csrw   0x14d, t0      # stimecmp CSR
    j      trap_return

handle_external:
    call   external_handler
    j      trap_return
    
    
.equ PLIC_BASE,       0x0C000000
.equ PLIC_CLAIM,      PLIC_BASE + 0x201004   # hart0, claim/complete register
.equ PLIC_COMPLETE,   PLIC_BASE + 0x201004
.equ UART_PLIC_IRQ,   10                     # あなたの環境の UART IRQ 番号
external_handler:
    # 1) PLIC から current IRQ を取り出す
    la   t0, PLIC_CLAIM
    ld   t1, 0(t0)           # t1 = IRQ number

    # 2) IRQ に応じたハンドラ
    li   t2, UART_PLIC_IRQ
    beq  t1, t2, .Lhandle_uart
    # その他の IRQ は未対応なら無視
    j    .Lcomplete

.Lhandle_uart:
    call uart_rx_handler
    j    .Lcomplete

.Lcomplete:
    # 3) PLIC に complete を書き戻し
    la   t0, PLIC_COMPLETE
    sd   t1, 0(t0)

    ret

handle_ecall:
    call   syscall_handler

    csrr   t0, sepc
    addi   t0, t0, 4
    csrw   sepc, t0

    j      trap_return

   .equ STIE_BIT,   (1<<5)
   .equ SPIE_UPIE,  ((1<<4)|(1<<5))
   .equ SPP_BIT,    (1<<8)
trap_return:
    # --- （もし必要なら）ユーザー SATP をリロード ---
    la    t0, user_satp
    ld    t0, 0(t0)
    csrw  satp, t0
    sfence.vma zero, zero

    # 1) Supervisor タイマー割り込み許可 (STIE=bit5)
    li    t1, STIE_BIT
    csrs  sie, t1

    # 2) sret 復帰時の sstatus 設定:
    #    - UPIE=1,SPIE=1 をセット
    #    - SPP=0 (U-modeに戻る) をクリア
    li    t1, SPIE_UPIE
    csrs  sstatus, t1
    li    t1, SPP_BIT
    csrc  sstatus, t1

    # 3) 戻る
    sret
    
    .extern user_satp      # C のグローバルを取り込む
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
    csrr a3, sepc
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
    csrw sepc, a2
    
    # 1) SATP をユーザー用ページテーブルにセット
    ld t0, user_satp
    csrw    satp, t0
    sfence.vma zero, zero

    # 2) スタックをユーザースタックに
#    mv      sp, a1

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
     # a0=entry, a1=usersp, a2=usersatp, a3=interval

    # SATP をユーザーテーブルに切り替え
    csrw  satp, a2
    sfence.vma zero, zero

    # スタック切り替え
    mv    sp, a1

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
