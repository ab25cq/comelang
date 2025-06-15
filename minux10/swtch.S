    .text
    .global switch_to
switch_to:
    // x0 = &old_sp, x1 = new_sp
    str     x30, [x0]       // 保存LR
    mov     x2, sp
    str     x2, [x0, #8]    // 保存SP
    ldr     x3, [x1]        // 新レジスタ値?（簡略化）
    mov     sp, x1
    ldr     x30, [x1]       // 復帰LR
    ret

