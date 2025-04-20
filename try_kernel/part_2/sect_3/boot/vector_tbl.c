/* 
 *** Try Kernel
 *      例外ベクターテーブル
*/

#include <typedef.h>
#include <sysdef.h>
#include <syslib.h>
#include <knldef.h>

/* デフォルトハンドラ */
void Default_Handler(void)
{
    while(1);
}

/* 例外ベクターテーブル */
void (* const vector_tbl[])() __attribute__((section(".vector"))) = {
    (void(*)()) (INITIAL_SP),   // 0: Top of Stack
    Reset_Handler,              // 1: Reset
    Default_Handler,            // 2: NMI
    Default_Handler,            // 3: Hard Fault
    0,                          // 4: 未使用
    0,                          // 5: 未使用
    0,                          // 6: 未使用
    0,                          // 7: 未使用
    0,                          // 8: 未使用
    0,                          // 9: 未使用
    0,                          // 10: 未使用
    Default_Handler,            // 11: Svcall
    0,                          // 12: 未使用
    0,                          // 13: 未使用
    Default_Handler,            // 14: Pend SV
    Default_Handler,            // 15: Systick
    Default_Handler,            // IRQ 0 
    Default_Handler,            // IRQ 1 
    Default_Handler,            // IRQ 2 
    Default_Handler,            // IRQ 3 
    Default_Handler,            // IRQ 4 
    Default_Handler,            // IRQ 5 
    Default_Handler,            // IRQ 6 
    Default_Handler,            // IRQ 7 
    Default_Handler,            // IRQ 8 
    Default_Handler,            // IRQ 9 
    Default_Handler,            // IRQ 10
    Default_Handler,            // IRQ 11
    Default_Handler,            // IRQ 12
    Default_Handler,            // IRQ 13
    Default_Handler,            // IRQ 14
    Default_Handler,            // IRQ 15
    Default_Handler,            // IRQ 16
    Default_Handler,            // IRQ 17
    Default_Handler,            // IRQ 18
    Default_Handler,            // IRQ 19
    Default_Handler,            // IRQ 20
    Default_Handler,            // IRQ 21
    Default_Handler,            // IRQ 22
    Default_Handler,            // IRQ 23
    Default_Handler,            // IRQ 24
    Default_Handler,            // IRQ 25
    Default_Handler,            // IRQ 26
    Default_Handler,            // IRQ 27
    Default_Handler,            // IRQ 28
    Default_Handler,            // IRQ 29
    Default_Handler,            // IRQ 31
};
