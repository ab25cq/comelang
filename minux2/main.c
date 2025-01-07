#include <comelang.h>
#include "hardware/timer.h"

#define TASK_MAX 2
#define STACK_SIZE 8048

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

struct sTask gTask[TASK_MAX];
uint16_t gStackArea[TASK_MAX][STACK_SIZE];

int gNumTasks = 0;
int gCurrentTask = 0;

/*
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
        "mrs r1, psp\n"
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
        "msr psp, r4; \n"
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
*/

/*
void init_task(void (*fun)())
{
    volatile uint32_t saved_sp; 
    volatile uint32_t pc = (uint32_t)fun;
    volatile uint32_t stack_end = (uint32_t)(&gStackArea[gNumTasks][STACK_SIZE-1]);
    volatile uint32_t sp = (uint32_t)stack_end;
    
    gTask[gNumTasks].sp = sp;
    gTask[gNumTasks].pc = pc;
    gNumTasks++;
}
*/

void task1()
{
    while(1) {
        puts("TASK1");
//        task_yield();
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
//        task_yield();
        sleep_ms(1000);
    }
}

void save_context()
{
    asm volatile (
        "mov r1, r4\n"
        "ldr r0, =R4; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r4"
    );
    asm volatile (
        "mov r1, r5\n"
        "ldr r0, =R5; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r5"
    );
    asm volatile (
        "mov r1, r6\n"
        "ldr r0, =R6; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r6"
    );
    asm volatile (
        "mov r1, r7\n"
        "ldr r0, =R7; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r7"
    );
    asm volatile (
        "mov r1, r8\n"
        "ldr r0, =R8; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r8"
    );
    asm volatile (
        "mov r1, r9\n"
        "ldr r0, =R9; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r9"
    );
    asm volatile (
        "mov r1, r10\n"
        "ldr r0, =R10; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r10"
    );
    asm volatile (
        "mov r1, r11\n"
        "ldr r0, =R11; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1", "r11"
    );
    
    gTask[gCurrentTask].r4 = R4; 
    gTask[gCurrentTask].r5 = R5; 
    gTask[gCurrentTask].r6 = R6; 
    gTask[gCurrentTask].r7 = R7; 
    gTask[gCurrentTask].r8 = R8; 
    gTask[gCurrentTask].r9 = R9; 
    gTask[gCurrentTask].r10 = R10; 
    gTask[gCurrentTask].r11 = R11; 
    
    asm volatile (
        "mrs r1, psp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    
    gTask[gCurrentTask].sp = SP; 
}
    
void restore_context()
{
    SP = gTask[gCurrentTask].sp;

    R4 = gTask[gCurrentTask].r4;
    R5 = gTask[gCurrentTask].r5;
    R6 = gTask[gCurrentTask].r6;
    R7 = gTask[gCurrentTask].r7;
    R8 = gTask[gCurrentTask].r8;
    R9 = gTask[gCurrentTask].r9;
    R10 = gTask[gCurrentTask].r10;
    R11 = gTask[gCurrentTask].r11;

    asm volatile (
        "ldr r0, =R4; \n"
        "ldr r3, [r0]; \n"
        "mov r4, r3; \n"
        :
        :
        : "r0", "r3", "r4"
    );

    asm volatile (
        "ldr r0, =R5; \n"
        "ldr r3, [r0]; \n"
        "mov r5, r3; \n"
        :
        :
        : "r0", "r3", "r5"
    );

    asm volatile (
        "ldr r0, =R6; \n"
        "ldr r3, [r0]; \n"
        "mov r6, r3; \n"
        :
        :
        : "r0", "r3", "r6"
    );

    asm volatile (
        "ldr r0, =R7; \n"
        "ldr r3, [r0]; \n"
        "mov r7, r3; \n"
        :
        :
        : "r0", "r3", "r7"
    );

    asm volatile (
        "ldr r0, =R8; \n"
        "ldr r3, [r0]; \n"
        "mov r8, r3; \n"
        :
        :
        : "r0", "r3", "r8"
    );

    asm volatile (
        "ldr r0, =R9; \n"
        "ldr r3, [r0]; \n"
        "mov r9, r3; \n"
        :
        :
        : "r0", "r3", "r9"
    );

    asm volatile (
        "ldr r0, =R10; \n"
        "ldr r3, [r0]; \n"
        "mov r10, r3; \n"
        :
        :
        : "r0", "r3", "r10"
    );

    asm volatile (
        "ldr r0, =R11; \n"
        "ldr r3, [r0]; \n"
        "mov r11, r3; \n"
        :
        :
        : "r0", "r3", "r11"
    );
    
    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
    );
}

bool timer_callback(struct repeating_timer *t) 
{
    save_context();
     
    gCurrentTask = (gCurrentTask + 1) % TASK_MAX;
    
    restore_context();
    
    return true;
}

void init_task(void (*fun)())
{
    volatile uint32_t* stack_end = (uint32_t*)(&gStackArea[gNumTasks][STACK_SIZE-1]);

/*
    *(--stack_end) = 0x01000000;  // xPSR
    *(--stack_end) = (uint32_t)fun; // PC
    *(--stack_end) = 0xFFFFFFFD;  // LR (例外リターン)
    int i;
    for (i = 0; i < 5; i++) {
        *(--stack_end) = 0;
    }
*/
    memset(gTask[gNumTasks], 0, sizeof(sTask));
    gTask[gNumTasks].sp = (uint32_t)stack_end;
    
    gNumTasks++;
/*
R0
R1
R2
R3
R12
LR（呼び出し元の戻りアドレス）
PC（割り込み発生時のプログラムカウンタ）
xPSR
*/
}

int main() 
{
    stdio_init_all();
    sleep_ms(5000);

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
    
    init_task(task1);
    init_task(task2);
    
printf("task1 %d task2 %d\n", task1, task2);
    
    PC = gTask[gCurrentTask].pc;
    SP = gTask[gCurrentTask].sp;
    
    struct repeating_timer timer;
    //add_repeating_timer_ms(2000, timer_callback, NULL, &timer);
    
    //restore_context();
    
    asm volatile (
        "ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
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

