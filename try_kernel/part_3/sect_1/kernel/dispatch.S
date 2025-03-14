/* 
 *** Try Kernel
 *      簡易ディスパッチャ
*/
    .align 2
    .thumb_func
    .globl dispatch_entry

dispatch_entry:
    /* ① 実行中のタスクの実行コンテキスト情報をスタックに退避 */
    push    {r4-r7}
    mov     r0, r8
    mov     r1, r9
    mov     r2, r10
    mov     r3, r11
    push    {r0-r3}

    /* ② 現在実行中のタスクの確認 */
    ldr     r0, =cur_task
    ldr     r1, [r0]
    cmp     r1, #0
    beq     disp_010    // cur_taskのID番号 = 0 ならば disp_010へ

    /* ③ SPレジスタの値をctx_tblに格納 */
    ldr     r0, =ctx_tbl
    sub     r1, #1
    lsl     r1, r1, #2
    mov     r2, sp
    str     r2, [r0, r1]

disp_010:
    /* ④ 実行中のタスクの変更 */
    ldr     r0, =next_task
    ldr     r1, [r0]
    ldr     r0, =cur_task
    str     r1, [r0]

    /* ⑤ スタックの切り替え */
    ldr     r0, =ctx_tbl
    sub     r1, #1
    lsl     r1, r1, #2
    ldr     r2, [r0, r1]
    mov     sp, r2

    /* ⑥ スタック上のコンテキス情報の復元 */
    pop	{r0-r3}
    mov	r11, r3
    mov	r10, r2
    mov	r9, r1
    mov	r8, r0
    pop	{r4-r7}
    bx	lr
