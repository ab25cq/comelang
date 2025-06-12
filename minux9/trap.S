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

trap_return:
#    la     t0, user_satp
#    ld     t0, 0(t0)
#    csrw   satp, t0
#    sfence.vma zero, zero

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
    .section ".trampoline", "ax"
    .globl enter_user
enter_user:
    # a0 = entry, a1 = usersp, a2 = usersatp, a3 = interval

    # 1) SATP をユーザー用ページテーブルにセット
    csrw    satp, a2
    sfence.vma zero, zero

    # 2) スタックをユーザースタックに
    mv      sp, a1

    # 4) sepc にエントリセット
    csrw    sepc, a0

#    # 3) sstatus.SPP=0, SPIE=1
#    csrr    t0, sstatus
#    li      t1,     (1<<5)       # SPIE = bit5
#    or      t0, t0, t1
#    li      t1,     ~(1<<8)      # clear SPP = bit8
#    and     t0, t0, t1
#    csrw    sstatus, t0

#    # 5) Supervisor timer interrupt をセット (STIE=1, SIE=1)
#    li      t0, (1<<5)           # bit5 = STIE
#    csrs    sie, t0
#    csrr    t0, sstatus
#    li      t1, (1<<1)           # bit1 = SIE
#    or      t0, t0, t1
#    csrw    sstatus, t0
#    
#    # 3) UPIE=1, SPIE=1, SPP=0
#    csrr    t0, sstatus
#    li      t1, (1<<4)       # UPIE = bit4
#    or      t0, t0, t1
#    li      t1, (1<<5)       # SPIE = bit5
#    or      t0, t0, t1
#    li      t1, ~(1<<8)      # clear SPP = bit8
#    and     t0, t0, t1
#    csrw    sstatus, t0
    
#    # 1) Supervisor timer enable (STIE) は sie CSR で
#    li   t0, (1<<5)        # bit5 = STIE
#    csrs sie, t0           # sie |= STIE
#
#    # 2) sstatus の UPIE=1, SPIE=1, SPP=0 を一発で
#    csrr t1, sstatus
#    li   t0, (1<<4)|(1<<5) # UPIE=bit4, SPIE=bit5
#    or   t1, t1, t0
#    li   t0, ~(1<<8)       # clear SPP=bit8
#    and  t1, t1, t0
#    csrw sstatus, t1
#
#    # 3) sret で U-Mode に降りると同時に…
#    #    UIE ← old UPIE(=1)、 SIE ← old SPIE(=1) となり
#    #    UPIE,SPIE はどちらも１に再セットされる
#    sret
#
#    # 1) Supervisor タイマー割り込みだけ許可 (STIE=bit5)
#        li   t0, (1<<5)
#    csrs sie, t0         # sie |= 1<<5
#
#    # 2) S-STATUS の UIE,SIE,UPIE,SPIE を一発でセット
#    li   t0, (1<<0)|(1<<1)|(1<<4)|(1<<5)
#         ^    ^    ^     ^
#         │    │    │     └── SPIE (old SPIE ← always 1)
#         │    │    └───── UPIE (UIE ← old UPIE=1 on sret)
#         │    └───────── SIE  (Supervisor グローバル割り込み)
#         └──────────── UIE  (User-mode 割り込み)
#
#    csrs sstatus, t0     # sstatus |= mask
#
#    # 3) SPP をクリア
#    li   t0, (1<<8)
#    csrc sstatus, t0     # sstatus &= ~(1<<8)
#
#    # 4) 最後に sret
#    sret

    
    
#    # 1) Supervisor タイマー割り込みだけ許可
#    li   t0, (1<<5)    # STIE
#        csrs sie, t0
#
#    # 2) SRET 後に SIE=1 にしたい → SPIE=1 をセット
#    csrr t0, sstatus
#    li   t1, (1<<5)    # SPIE
#    or   t0, t0, t1
#
#    # 3) SRET 後に UIE=1 にしたい → UPIE=1 をセット
#    li   t1, (1<<4)    # UPIE
#    or   t0, t0, t1
#
#    # 4) S-Mode→U-Mode のフラグクリア
#    li   t1, ~(1<<8)   # clear SPP
#    and  t0, t0, t1
#
#    # 最後に一度だけ書き戻し
#    csrw sstatus, t0

    
    

    # 6) タイマー割り込み用 CLINT 書き込み (MTIMECMP = MTIME + interval)
#    li      t0, CLINT_MTIME
#    ld      t1, 0(t0)            # t1 = *CLINT_MTIME
#    add     t1, t1, a3           # t1 += interval
#    li      t0, CLINT_MTIMECMP
#    sd      t1, 0(t0)

    # 7) 最後にユーザーモードに戻る
#    sret

    # 1) Supervisor タイマー割り込みだけ許可 (STIE=bit5)
#    li   t0, (1<<5)
#    csrs sie, t0         # sie |= 1<<5

    # 2) S-STATUS の UIE,SIE,UPIE,SPIE を一発でセット
#    li   t0, (1<<0)|(1<<1)|(1<<4)|(1<<5)
#        ^    ^    ^     ^
#        │    │    │     └── SPIE (old SPIE ← always 1)
#        │    │    └───── UPIE (UIE ← old UPIE=1 on sret)
#        │    └───────── SIE  (Supervisor グローバル割り込み)
#        └──────────── UIE  (User-mode 割り込み)

#    csrs sstatus, t0     # sstatus |= mask

    # 3) SPP をクリア
#    li   t0, (1<<8)
#    csrc sstatus, t0     # sstatus &= ~(1<<8)




#    # ---- sret 前にこの３行だけ ----
#
#    # 1) Supervisor タイマー割り込み許可 (STIE = bit5)
#    li   t0, (1<<5)
#    csrs sie, t0         # sie |= 1<<5
#
#    # 2) sstatus の UPIE=1, SPIE=1, SIE=1, UIE=1 をまとめてセット
#    #    (bit0=UIE, bit1=SIE, bit4=UPIE, bit5=SPIE)
#    li   t0, (1<<0)|(1<<1)|(1<<4)|(1<<5)
#    csrs sstatus, t0     # sstatus |= mask
#
#    # 3) SPP=0 だけクリア
#    li   t0, (1<<8)
#    csrc sstatus, t0     # sstatus &= ~(1<<8)
#
#    sret
#
#
#
#
#
#
#    # 4) 最後に sret
#    sret



    # --- U-mode移行の最終段階（推奨される記述法） ---
    # このコードはS-modeで実行されている必要があります
    
# --- U-mode移行の最終段階（xv6流の、よりシンプルで正しいsstatusの設定） ---

    # 1. Supervisor タイマー割り込みの「源」を有効化（これはこのままでOK）
#li   t0, (1 << 5)   # SIE.STIE
#csrs sie, t0
#
## 2. sret命令の「入力情報」をsstatusに設定する
#csrr t0, sstatus
#
## SPPビット(8)をクリア -> 戻り先はU-mode
#li   t1, ~(1UL << 8)
#and  t0, t0, t1
#
## SPIEビット(5)をセット -> sret後、SIEが1になり、次にトラップした時S-modeは割り込み有効
#li   t1, (1 << 5)
#or   t0, t0, t1
#
## ★★★ UPIEビット(4)は操作しない！ ★★★
#
#csrw sstatus, t0
#
## 3. ユーザープログラムのエントリポイントをsepcに設定
##    (このコードの前に、a0などにentry addressが設定されている想定)
#csrw sepc, a0
#
## 4. U-modeへ移行！
#sret

    
#    # 1) STIE=1
#        li   t0, (1<<5)
#            csrs sie, t0
#
#    # 3) SPP=0
#    li   t0, (1<<8)
#    csrc sstatus, t0
#
#    # 2) UPIE=1, SPIE=1
#    li   t0, (1<<4)|(1<<5)  # 0x30
#    csrs sstatus, t0
#
#    # 5) U-Mode へ
#    sret

    # 1) レジスタに読んでくる
    csrr  t1, sstatus

    # 2) UPIE=1, SPIE=1 を OR
    li    t0, (1<<4)|(1<<5)   # 0x30
    or    t1, t1, t0

    # 3) SPP=0 を AND マスクでクリア
    li    t0, ~(1<<8)         # ~0x100
    and   t1, t1, t0

    # 4) 一発で書き戻し
    csrw  sstatus, t1

    sret

#    # 1. 現在のsstatusの値をt1に保存
#    csrr t1, sstatus
#    
#    # 2. UPIEビット(bit 4)を立ててみる
#    li   t0, 0x30      # 1 << 4
#    csrs sstatus, t0
#    
#    # 3. 命令の直後に、再度sstatusの値をt2に読み出す
#    csrr t2, sstatus
#    
#    # --- STIE を有効化 (Supervisor Timer Interrupt Enable) ---
#    li   t0, (1<<5)        # 0x20
#    csrs sie, t0           # sie |= 0x20
#
#    # --- sstatus の UPIE=1, SPIE=1, SPP=0 をまとめて設定 ---
#    csrr t1, sstatus       # t1 = 現在の sstatus
#    li   t0, (1<<4)|(1<<5) # 0x10|0x20 = 0x30
#    csrs sstatus, t0       # sstatus |= 0x30 (UPIE & SPIE = 1)
#    li   t0, ~(1<<8)       # ~0x100 = clear SPP マスク
#    and  t1, t1, t0        # t1 &= ~0x100
#    csrw sstatus, t1       # 書き戻し
    
    
#    # UPIE (bit4) と SPIE (bit5) を立てる
#    li   t0, 0x10           # 0x10|0x20 = 0x30
#    csrs sstatus, t0        # sstatus |= 0x30
#    
#    li   t0, 0x20           # 0x10|0x20 = 0x30
#    csrs sstatus, t0        # sstatus |= 0x30
#
#    # SPP (bit8) をクリアする
#    li   t0, (1<<8)         # 0x100
#    csrc sstatus, t0        # sstatus &= ~0x100

    
    

    # --- 次のタイマー時刻をセット ---
#    addi  t0, t0, INTERVAL
#    csrr  t0, time
#    addi  t0, t0, INTERVAL
#    li    t1, CLINT_MTIMECMP
#    sd    t0, 0(t1)

    # --- U-Mode へ戻る ---
#    sret

    

    # 1. Supervisor タイマー割り込みの「源」を有効化
#    li   t0, (1 << 5)   # SIE.STIE
#    csrs sie, t0
#
#    # 2. sret命令の「入力情報」をsstatusに設定する
#    #    - SPPビット(8)を0に -> 戻り先はU-mode
#    #    - SPIEビット(5)を1に -> sret後、SIEが1になり、次にトラップした時S-modeは割り込み有効
#    #    - UPIEビット(4)を1に -> sret後、UIEが1になり、U-modeで割り込みが有効になる
#    csrr t0, sstatus
#    li   t1, ~(1 << 8)  # SPPをクリアするためのマスク
#    and  t0, t0, t1
#    li   t1, 0x30 # SPIEとUPIEをセットするためのマスク
#    or   t0, t0, t1
#    csrw sstatus, t0
#    
#    # 3. ユーザープログラムのエントリポイントをsepcに設定
#    #    (このコードの前に、a0などにentry addressが設定されている想定)
#    csrw sepc, a0
#    
#    # 4. U-modeへ移行！
#    sret
