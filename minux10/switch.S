.section .text
.globl switch_context

// void switch_context(uint64_t* old_sp, uint64_t* new_sp);
// x0: old_sp のアドレス (&tasks[last_task].sp)
// x1: new_sp のアドレス (&tasks[current_task].sp)
switch_context:
    // 1. 現在のコンテキストを保存
    // 汎用レジスタ x19-x30 をスタックにプッシュ
    stp x19, x20, [sp, #-16]!
    stp x21, x22, [sp, #-16]!
    stp x23, x24, [sp, #-16]!
    stp x25, x26, [sp, #-16]!
    stp x27, x28, [sp, #-16]!
    stp x29, x30, [sp, #-16]! // x30はLR

    // 汎用レジスタ x0-x18 をスタックにプッシュ
    stp x0, x1, [sp, #-16]!
    stp x2, x3, [sp, #-16]!
    stp x4, x5, [sp, #-16]!
    stp x6, x7, [sp, #-16]!
    stp x8, x9, [sp, #-16]!
    stp x10, x11, [sp, #-16]!
    stp x12, x13, [sp, #-16]!
    stp x14, x15, [sp, #-16]!
    stp x16, x17, [sp, #-16]!
    str x18, [sp, #-16]!

    // ELR_EL1 (例外からの復帰先アドレス) と SPSR_EL1 (プロセッサ状態) を保存
    mrs x2, spsr_el1
    mrs x3, elr_el1
    stp x3, x2, [sp, #-16]!

    // 現在のスタックポインタ(sp)をTCBに保存
    // 引数で渡された old_sp のアドレス (x0) に、現在のspの値を格納
    mov x9, sp 
    str x9, [x0]

    // 2. 次のタスクのコンテキストを復元
    // 次のタスクのスタックポインタをTCBからロード
    // 引数で渡された new_sp のアドレス (x1) から、spにロード
    ldr x9, [x1]
    mov sp, x9

    // ELR_EL1 と SPSR_EL1 を復元
    ldp x3, x2, [sp], #16
    msr elr_el1, x3
    msr spsr_el1, x2

    // 汎用レジスタ x0-x18 を復元
    ldr x18, [sp], #16
    ldp x16, x17, [sp], #16
    ldp x14, x15, [sp], #16
    ldp x12, x13, [sp], #16
    ldp x10, x11, [sp], #16
    ldp x8, x9, [sp], #16
    ldp x6, x7, [sp], #16
    ldp x4, x5, [sp], #16
    ldp x2, x3, [sp], #16
    ldp x0, x1, [sp], #16

    // 汎用レジスタ x19-x30 を復元
    ldp x29, x30, [sp], #16 // x30はLR
    ldp x27, x28, [sp], #16
    ldp x25, x26, [sp], #16
    ldp x23, x24, [sp], #16
    ldp x21, x22, [sp], #16
    ldp x19, x20, [sp], #16

    // リターン. ここで関数の呼び出し元に戻る
    // この `ret` は復元されたx30(LR)にジャンプするため、
    // 次のタスクの `yield()` を呼び出した直後の地点から実行が再開される
    ret
