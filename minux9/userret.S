    .equ CLINT_MTIME,    0x0200BFF8
    .equ CLINT_MTIMECMP, 0x02004000
    .section .trampoline
    .globl user_entry_trampoline
user_entry_trampoline:
    # a0 = entry, a1 = usersp, a2 = usersatp, a3 = interval

    # 1) SATP をユーザー用ページテーブルにセット
    csrw    satp, a2
    sfence.vma zero, zero

    # 2) スタックをユーザースタックに
    mv      sp, a1

    # 3) sstatus.SPP=0, SPIE=1
    csrr    t0, sstatus
    li      t1,     (1<<5)       # SPIE = bit5
    or      t0, t0, t1
    li      t1,     ~(1<<8)      # clear SPP = bit8
    and     t0, t0, t1
    csrw    sstatus, t0

    # 4) sepc にエントリセット
    csrw    sepc, a0

    # 5) Supervisor timer interrupt をセット (STIE=1, SIE=1)
    li      t0, (1<<5)           # bit5 = STIE
    csrs    sie, t0
    csrr    t0, sstatus
    li      t1, (1<<1)           # bit1 = SIE
    or      t0, t0, t1
    csrw    sstatus, t0

    # 6) タイマー割り込み用 CLINT 書き込み (MTIMECMP = MTIME + interval)
    li      t0, CLINT_MTIME
    ld      t1, 0(t0)            # t1 = *CLINT_MTIME
    add     t1, t1, a3           # t1 += interval
    li      t0, CLINT_MTIMECMP
    sd      t1, 0(t0)

    # 7) 最後にユーザーモードに戻る
    sret
