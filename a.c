#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint64_t x19;  // Callee-saved registers
    uint64_t x20;
    uint64_t x21;
    uint64_t x22;
    uint64_t x23;
    uint64_t x24;
    uint64_t x25;
    uint64_t x26;
    uint64_t x27;
    uint64_t x28;
    uint64_t x29;  // Frame pointer
    uint64_t x30;  // Link register
    uint64_t sp;   // Stack pointer
} Context;

void save_context(Context *ctx) {
    __asm__ __volatile__ (
        "stp x19, x20, [%0, #0]\n"  // Save x19 and x20
        "stp x21, x22, [%0, #16]\n" // Save x21 and x22
        "stp x23, x24, [%0, #32]\n" // Save x23 and x24
        "stp x25, x26, [%0, #48]\n" // Save x25 and x26
        "stp x27, x28, [%0, #64]\n" // Save x27 and x28
        "stp x29, x30, [%0, #80]\n" // Save x29 (FP) and x30 (LR)
        "mov x1, sp\n"              // Get current stack pointer
        "str x1, [%0, #96]\n"       // Save SP to context
        :
        : "r"(ctx)                  // Output operands
        : "memory"                  // Clobbered list
    );
}

void load_context(Context *ctx) {
    __asm__ __volatile__ (
        "ldp x19, x20, [%0, #0]\n"  // Restore x19 and x20
        "ldp x21, x22, [%0, #16]\n" // Restore x21 and x22
        "ldp x23, x24, [%0, #32]\n" // Restore x23 and x24
        "ldp x25, x26, [%0, #48]\n" // Restore x25 and x26
        "ldp x27, x28, [%0, #64]\n" // Restore x27 and x28
        "ldp x29, x30, [%0, #80]\n" // Restore x29 (FP) and x30 (LR)
        "ldr x1, [%0, #96]\n"       // Load saved SP
        "mov sp, x1\n"              // Restore SP
        :
        : "r"(ctx)                  // Input operands
        : "memory"                  // Clobbered list
    );
}

#define MAX_TASKS 10

typedef struct {
    Context ctx;      // タスクのコンテキスト
    void (*entry)();  // タスクのエントリポイント
    int active;       // タスクがアクティブかどうか
} Task;

Task tasks[MAX_TASKS];
int current_task = -1;
int num_task = 0;

void schedule() {
    int next_task = (current_task + 1) % num_task;

    while (!tasks[next_task].active) {
        next_task = (next_task + 1) % num_task;
    }
    
    if (current_task != -1 && tasks[current_task].active) {
        save_context(&tasks[current_task].ctx);
    }
    
    current_task = next_task;
    load_context(&tasks[current_task].ctx);
}

bool all_task_done()
{
    for(int i= 0; i<num_task; i++) {
        if(tasks[i].active) {
            return false;
        }
    }
    
    return true;
}

void task_wrapper() {
    int id = current_task;
    tasks[id].entry();  // 実際のタスク関数を呼び出す

    // タスクが終了したら非アクティブにし、スケジューラを呼び出す
    tasks[id].active = false;
    if(!all_task_done()) {
        schedule();  // 次のタスクに切り替え
    }
}

void create_task(void (*entry)()) {
    for (int i = 0; i < MAX_TASKS; i++) {
        if (!tasks[i].active) {
            tasks[i].entry = entry;
            tasks[i].active = 1;

            // 初期コンテキスト設定
            tasks[i].ctx.sp = (uint64_t)malloc(1024) + 1024;  // スタックの割り当て
            tasks[i].ctx.x30 = (uint64_t)task_wrapper;               // エントリポイントをリンクレジスタに設定
            
            num_task++;
            return;
        }
    }

    printf("Failed to create task: no available slots\n");
}


void task1() {
    printf("Task 1 running\n");
}

void task2() {
    printf("Task 2 running\n");
}

int main() {
    create_task(task1);
    create_task(task2);

    if(!all_task_done()) {
        schedule();
    }

    return 0;
}
