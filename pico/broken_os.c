#include <stdio.h>
#include <stdint.h>
#include "pico/stdlib.h"

// コンテキストスイッチ関数
void context_switch(uint32_t** current_task_sp, uint32_t* next_task_sp) {
    __asm volatile (
        // 現在のタスクのレジスタを保存
        "mrs r2, psp\n"                 // PSP（Process Stack Pointer）を取得
        "sub r2, r2, #16\n"             // 必要な領域をスタックに確保
        "str r4, [r2, #0]\n"            // r4 を保存
        "str r5, [r2, #4]\n"            // r5 を保存
        "str r6, [r2, #8]\n"            // r6 を保存
        "str r7, [r2, #12]\n"           // r7 を保存
        "str r2, [%0]\n"                // PSP を current_task_sp に保存

        // 次のタスクのレジスタを復元
        "ldr r2, [%1]\n"                // next_task_sp から PSP をロード
        "ldr r4, [r2, #0]\n"            // r4 を復元
        "ldr r5, [r2, #4]\n"            // r5 を復元
        "ldr r6, [r2, #8]\n"            // r6 を復元
        "ldr r7, [r2, #12]\n"           // r7 を復元
        "add r2, r2, #16\n"             // タック領域を戻す
        "msr psp, r2\n"                 // PSP を更新

        // タスクに復帰
        "bx lr\n"                       // リンクレジスタを使って戻る
        :
        : "r" (current_task_sp), "r" (next_task_sp)
        : "r2", "memory"               // 使用するレジスタと副作用
    );
}

/*
void context_switch(uint32_t** current_task_sp, uint32_t* next_task_sp) {
    __asm volatile (
        "mrs r2, psp\n"                 // PSP（Process Stack Pointer）を取得
        "stmdb r2!, {r4-r7}\n"          // r4〜r7をスタックに保存
        "str r2, [%0]\n"                // PSPをcurrent_task_spに保存

        "ldr r2, [%1]\n"                // next_task_spからPSPをロード
        "ldmia r2!, {r4-r7}\n"          // r4〜r7を復元
        "msr psp, r2\n"                 // PSPを更新

        "bx lr\n"                       // リンクレジスタを使って戻る
        :
        : "r" (current_task_sp), "r" (next_task_sp)
        : "r2", "memory"
    );
}
*/

#define STACK_SIZE 256
#define NUM_TASKS 2

uint32_t task_stacks[NUM_TASKS][STACK_SIZE];
uint32_t* task_sps[NUM_TASKS];
int current_task = 0;

// タスク1
void task1() {
    while (1) {
        printf("Task 1: Running...\n");
        for (volatile int i = 0; i < 1000000; i++);
        context_switch(&task_sps[current_task], task_sps[1]);
    }
}

// タスク2
void task2() {
    while (1) {
        printf("Task 2: Running...\n");
        for (volatile int i = 0; i < 1000000; i++);
        context_switch(&task_sps[current_task], task_sps[0]);
    }
}

void init_task_stack(uint32_t* stack, void (*task_func)()) {
    stack[STACK_SIZE - 1] = 0x01000000;          // xPSR (Thumbビットをセット)
    stack[STACK_SIZE - 2] = (uint32_t)task_func; // PC (タスクのエントリーポイント)
    stack[STACK_SIZE - 3] = 0xFFFFFFFD;          // LR (例外からの復帰用)
    // 残りのスタックはゼロで初期化
    for (int i = 0; i < STACK_SIZE - 8; i++) {
        stack[i] = 0;
    }
}

int main() {
    stdio_init_all();

    // タスクスタックを初期化
    init_task_stack(task_stacks[0], task1);
    init_task_stack(task_stacks[1], task2);

    // スタックポインタを設定
    task_sps[0] = &task_stacks[0][STACK_SIZE - 8];
    task_sps[1] = &task_stacks[1][STACK_SIZE - 8];

    // 初期タスクにスイッチ
    context_switch(&task_sps[current_task], task_sps[0]);

    while (1) {
    }
}
