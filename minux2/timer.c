#include <comelang.h>
#include "hardware/timer.h"

#define TASK_MAX 2
#define STACK_SIZE 8048

volatile uint32_t SP,PC;
volatile uint32_t *O, *P, *Q;

struct sTask
{
    uint32_t* sp;
    uint32_t pc;
};

struct sTask gTask[TASK_MAX];
uint16_t gStackArea[TASK_MAX][STACK_SIZE];

int gNumTasks = 0;
int gCurrentTask = 0;

void task_yield() 
{ 
    asm volatile (
        "mov r1, lr\n"
        "ldr r0, =PC; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    asm volatile (
        "mrs r1, msp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    
    gTask[gCurrentTask].pc = PC; 
    gTask[gCurrentTask].sp = SP; 
    
printf("saved pc %d\n", PC);
printf("saved sp %d\n", SP);
     
    gCurrentTask++;
    if(gCurrentTask >= TASK_MAX) { 
        gCurrentTask = 0; 
    } 
    
    PC = gTask[gCurrentTask].pc;
    SP = gTask[gCurrentTask].sp;
    
printf("new pc %d\n", PC);
printf("new sp %d\n", SP);
    
    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r4, [r0]; \n"
        "msr msp, r4; \n"
        :
        :
        : "r0", "r4"
    );
    
    asm volatile (
        "ldr r0, =PC; \n"
        "ldr r4, [r0]; \n"
        "bx r4; \n"
        :
        :
        : "r0", "r4"
    );
}

void init_task(void (*fun)())
{
    volatile uint32_t* stack_end = (uint32_t*)(&gStackArea[gNumTasks][STACK_SIZE]);

    *(--stack_end) = 0x01000000;  // xPSR
    *(--stack_end) = (uint32_t)fun; // PC
    *(--stack_end) = 0xFFFFFFFD;  // LR (例外リターン)
    int i;
    for (i = 0; i < 8; i++) {
        *(--stack_end) = 0;
    }
    gTask[gNumTasks++].sp = stack_end;
}

void task1()
{
    while(1) {
        puts("TASK1");
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
        sleep_ms(1000);
    }
}

void save_context() 
{
/*
    asm volatile (
        "mrs r0, psp\n"
        "stmdb r0!, {r4-r11}\n"
        "str r0, %0\n"
        : "=m" (gTask[gCurrentTask].sp) :: "r0"
    );
    asm volatile (
        "mrs r0, psp\n"         // PSP（プロセススタックポインタ）を取得
        "stmdb r0!, {r4-r7}\n"  // R4-R7をスタックにプッシュ
        "str r0, %0\n"          // スタックポインタをタスク構造体に保存
        : "=m" (gTask[gCurrentTask].sp) :: "r0"
    );
*/

    asm volatile (
        "mrs r0, psp\n"         // PSP（プロセススタックポインタ）を取得
        "sub r0, r0, #4\n"      // スタックを1ワード（4バイト）分下げる
        "str r4, [r0]\n"        // R4をプッシュ
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r5, [r0]\n"        // R5をプッシュ
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r6, [r0]\n"        // R6をプッシュ
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r7, [r0]\n"        // R7をプッシュ
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "mov r4, r8\n" 
        "str r4, [r0]\n"        // R8をプッシュ
        "mov r4, r9\n" 
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r4, [r0]\n"        // R9をプッシュ
        "mov r4, r10\n" 
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r4, [r0]\n"       // R10をプッシュ
        "mov r4, r11\n" 
        "sub r0, r0, #4\n"      // スタックを1ワード下げる
        "str r4, [r0]\n"       // R11をプッシュ
        "str r0, %0\n"          // 更新されたスタックポインタをタスク構造体に保存
        : "=m" (gTask[gCurrentTask].sp) :: "r0"
    );
}

void restore_context() 
{
    asm volatile (
        "push {r3}        \n"    // r3をスタックに退避
        "ldr r0, %0\n"          // タスク構造体からスタックポインタを取得
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"   // R11を復元
        "mov r11, r3\n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"   // R10を復元
        "mov r10, r3\n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R9を復元
        "mov r9, r3\n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R8を復元
        "mov r8, r3\n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R7を復元
        "mov r7, r3 \n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R6を復元
        "mov r6, r3 \n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R5を復元
        "mov r5, r3 \n"
        "add r0, r0, #4\n"
        "ldr r3, [r0]\n"    // R4を復元
        "mov r4, r3 \n"
        "pop {r3}\n"              // r3をスタックから復元
        "msr psp, r0\n"         // PSPを復元
        "bx lr\n"               // 割り込みから復帰
        :: "m" (gTask[gCurrentTask].sp) : "r0"
    );
}

bool timer_callback(struct repeating_timer *t) 
{
    save_context();
    gCurrentTask = (gCurrentTask + 1) % TASK_MAX;
    restore_context();
    return true;
}

int main() {
    stdio_init_all();
    sleep_ms(5000);
    
    init_task(task1);
    init_task(task2);
    
printf("task1 %d task2 %d\n", task1, task2);
    struct repeating_timer timer;
    add_repeating_timer_ms(1000, timer_callback, NULL, &timer);

    restore_context();
    
    while (true) {
    }
    
    return 0;
}

