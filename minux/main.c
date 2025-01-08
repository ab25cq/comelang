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
    
    gCurrentTask++;
    if(gCurrentTask >= TASK_MAX) { 
        gCurrentTask = 0; 
    } 
    
    PC = gTask[gCurrentTask].pc;
    SP = gTask[gCurrentTask].sp;
    
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

void task1()
{
    while(1) {
        puts("TASK1");
        task_yield();
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
        task_yield();
        sleep_ms(1000);
    }
}

int main() {
    stdio_init_all();
    sleep_ms(5000);
    
    init_task(task1);
    init_task(task2);
    
    PC = gTask[gCurrentTask].pc;
    SP = gTask[gCurrentTask].sp;

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
    
    asm volatile (
        "ldr r0, =PC; \n"
        "ldr r4, [r0]; \n"
        "bx r4; \n"
        :
        :
        : "r0", "r4"
    );
    
    while (true) {
    }
    
    return 0;
}

