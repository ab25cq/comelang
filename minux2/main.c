#include <comelang.h>
#include "hardware/timer.h"

#define STACK_SIZE 1024

volatile uint32_t SP,PC, R4, R5, R6, R7, R8, R9, R10, R11;
volatile uint32_t *O, *P, *Q;

struct sTask
{
    uint32_t sp;
    uint32_t pc;
    uint32_t r4;
    uint32_t r5;
    uint32_t r6;
    uint32_t r7;
    uint32_t r8;
    uint32_t r9;
    uint32_t r10;
    uint32_t r11;
};

list<sTask*%>*% gTasks;
int gCurrentTask = 0;

void init_task(void (*fun)())
{
    uint32_t* stack = (uint32_t*)calloc(1, sizeof(uint32_t)*STACK_SIZE);
    volatile uint32_t* stack_end = (uint32_t*)(&stack[STACK_SIZE-1]);

    *(--stack_end) = 0x01000000;  // xPSR
    *(--stack_end) = (uint32_t)fun; // PC
    *(--stack_end) = 0xFFFFFFFD;  // LR (例外リターン)
    int i;
    for (i = 0; i < 5; i++) {
        *(--stack_end) = 0;
    }
    
    sTask*% task = new sTask;
    task.sp = (uint32_t)stack_end;
    
    gTasks.add(task);
}

void save_context(sTask* task)
{
    asm volatile (
        "ldr r0, =R4; \n"
        "str r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
    task.r4 = R4; 
    asm volatile (
        "ldr r0, =R5; \n"
        "str r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    task.r5 = R5; 
    asm volatile (
        "ldr r0, =R6; \n"
        "str r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    task.r6 = R6; 
    asm volatile (
        "ldr r0, =R7; \n"
        "str r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    task.r7 = R7; 
    asm volatile (
        "ldr r0, =R8; \n"
        "mov r3, r8;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r8"
    );
    task.r8 = R8; 
    asm volatile (
        "ldr r0, =R9; \n"
        "mov r3, r9;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r9"
    );
    task.r9 = R9; 
    asm volatile (
        "ldr r0, =R10; \n"
        "mov r3, r10;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r10"
    );
    task.r10 = R10; 
    asm volatile (
        "ldr r0, =R11; \n"
        "mov r3, r11;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r11"
    );
    task.r11 = R11; 
    
    asm volatile (
        "mrs r1, psp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    
    task.sp = SP; 
}
    
void restore_context(sTask* task)
{
    SP = task.sp;
    
    PC = *((uint32_t*)SP +6);
    
    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
    );
    R11 = task.r11;
    asm volatile (
        "ldr r0, =R11; \n"
        "ldr r4, [r0];\n"
        "mov r11, r4;\n"
        :
        :
        : "r0", "r4", "r11"
    );
    R10 = task.r10;
    asm volatile (
        "ldr r0, =R10; \n"
        "ldr r4, [r0];\n"
        "mov r10, r4;\n"
        :
        :
        : "r0", "r4", "r10"
    );
    R9 = task.r9;
    asm volatile (
        "ldr r0, =R9; \n"
        "ldr r4, [r0];\n"
        "mov r9, r4;\n"
        :
        :
        : "r0", "r4", "r9"
    );
    R8 = task.r8;
    asm volatile (
        "ldr r0, =R8; \n"
        "ldr r4, [r0];\n"
        "mov r8, r4;\n"
        :
        :
        : "r0", "r4", "r8"
    );
    R7 = task.r7;
    asm volatile (
        "ldr r0, =R7; \n"
        "ldr r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    R6 = task.r6;
    asm volatile (
        "ldr r0, =R6; \n"
        "ldr r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    R5 = task.r5;
    asm volatile (
        "ldr r0, =R5; \n"
        "ldr r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    R4 = task.r4;
    asm volatile (
        "ldr r0, =R4; \n"
        "ldr r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
}

bool timer_callback(struct repeating_timer *t) 
{
    save_context(gTasks[gCurrentTask]);
     
    gCurrentTask = (gCurrentTask + 1) % gTasks.length();
    
    restore_context(gTasks[gCurrentTask]);
    
    return true;
}

void task1()
{
    while(1) {
        puts("TASK1");
        sleep_ms(1000);
        puts("TASK1-2");
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
        sleep_ms(1000);
        puts("TASK2-2");
        sleep_ms(1000);
    }
}

int main() 
{
    stdio_init_all();
    sleep_ms(5000);
    
    gTasks = new list<sTask*%>();
    
    init_task(task1);
    init_task(task2);
    
    SP = gTasks[gCurrentTask].sp;
    
    struct repeating_timer timer;
    add_repeating_timer_ms(1000, timer_callback, NULL, &timer);

    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r4, [r0]; \n"
        "msr psp, r4\n"
        "mov r0, #0x02\n"
        "msr CONTROL, r0\n"
        "isb\n"
        :
        : 
        : "r0","r4"            // 使用するレジスタ
    );
    
    task1();
    

/*
リンクレジスタ（LR）の内容 割り込み時に LR には特別な値が設定されます：

EXC_RETURN と呼ばれる特別な値で、割り込みから復帰するための情報を含みます。
一般的な値：
0xFFFFFFF9: メインスタックポインタ（MSP）を使用して復帰
0xFFFFFFFD: プロセススタックポインタ（PSP）を使用して復帰
このため、割り込み発生時点の PC（呼び出し元のアドレス） は、スタックに保存されますが、LR には保存されません。
割り込みが発生すると、スタックには次のようにデータが保存されます（スタックトップから順に）：
R0
R1
R2
R3
R12
LR（呼び出し元の戻りアドレス）
PC（割り込み発生時のプログラムカウンタ）
xPSR
*/
    
    while (true) {
    }
    
    return 0;
}

