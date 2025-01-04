#include <comelang.h>

#define TASK_MAX 2
#define STACK_SIZE 512

volatile uint32_t L,M,N;
volatile uint32_t *O, *P, *Q;

struct sTask
{
    uint32_t sp;
    uint32_t pc;
};

struct sTask gTask[TASK_MAX];
uint8_t gStackArea[TASK_MAX][STACK_SIZE];

int gNumTasks = 0;
int gCurrentTask = 0;

void task_yield() 
{ 
    asm volatile (
        "mov r1, lr\n"
        "ldr r0, =M; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    asm volatile (
        "mrs r1, msp\n"
        "ldr r0, =N; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    
    gTask[gCurrentTask].pc = M; 
    gTask[gCurrentTask].sp = N; 
    
printf("saved pc %d\n", M);
printf("saved sp %d\n", N);
     
    gCurrentTask++;
    if(gCurrentTask >= TASK_MAX) { 
        gCurrentTask = 0; 
    } 
    
    M = gTask[gCurrentTask].pc;
    N = gTask[gCurrentTask].sp;
    
printf("new pc %d\n", M);
printf("new sp %d\n", N);
    
    asm volatile (
        "ldr r0, =N; \n"
        "ldr r4, [r0]; \n"
        "msr msp, r4; \n"
        :
        :
        : "r0", "r4"
    );
    
    asm volatile (
        "ldr r0, =M; \n"
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
    volatile uint32_t stack_end = (uint32_t)(gStackArea[gNumTasks] + STACK_SIZE);
    volatile uint32_t sp = (uint32_t)stack_end;
    
    gTask[gNumTasks].sp = sp;
    gTask[gNumTasks].pc = pc;
    gNumTasks++;
}

void task1()
{
    puts("TASK1");
    task_yield();
    puts("TASK1 END");
    task_yield();
    while(1) {
    }
}

void task2()
{
    puts("TASK2");
    task_yield();
    puts("TASK2 END");
    while(1) {
    }
}

int main() {
    stdio_init_all();
    sleep_ms(5000);
    
    init_task(task1);
    init_task(task2);
    
printf("task1 %d task2 %d\n", task1, task2);
    
    M = gTask[gCurrentTask].pc;
    N = gTask[gCurrentTask].sp;
printf("new pc %d\n", M);
printf("new sp %d\n", N);
    
    asm volatile (
        "ldr r0, =N; \n"
        "ldr r4, [r0]; \n"
        "msr msp, r4; \n"
        :
        :
        : "r0", "r4"
    );
    
    asm volatile (
        "ldr r0, =M; \n"
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

