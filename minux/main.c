#include <comelang.h>

#define TASK_MAX 2
#define STACK_SIZE 64

struct sContext
{
    uint32_t pc;
    uint32_t sp;
};

struct sContext gContext[TASK_MAX];
unsigned char gStack[TASK_MAX][STACK_SIZE];

int gNumTasks = 0;
int gCurrentTask = 0;

void init_task(void (*fun)())
{
    gContext[gNumTasks].pc = (uint32_t)fun;
    gContext[gNumTasks].sp = 0;
    
    gNumTasks++;
}

void task_yield() 
{ 
    uint32_t saved_pc; 

    asm volatile ( 
        "mov %0, lr  \n" 
        : "=r" (saved_pc) 
        : 
    ); 
    
printf("saved_pc %d\n", saved_pc);
   
    gContext[gCurrentTask].pc = saved_pc; 
     
    uint32_t saved_msp; 
     
    asm volatile ( 
        "mrs %0, msp\n" 
        : "=r"(saved_msp) 
        : 
    ); 
    
printf("saved_msp %d\n", saved_msp);
     
    gContext[gCurrentTask].sp = saved_msp; 
     
    gCurrentTask++;
    if(gCurrentTask >= TASK_MAX) { 
        gCurrentTask = 0; 
    } 
    uint32_t sp = (uint32_t)gContext[gCurrentTask].sp; 
    uint32_t pc = (uint32_t)gContext[gCurrentTask].pc; 
    
    if(sp == 0) {
        uint32_t stack_end = (uint32_t)gStack[gCurrentTask] + STACK_SIZE;
        gContext[gCurrentTask].sp = (uint32_t)stack_end;
        sp = gContext[gCurrentTask].sp;
    }
    
printf("new pc %d\n", pc);
printf("new sp %d\n", sp);
     
    asm volatile ( 
        "mov r0, %0\n" 
        "msr msp, r0\n" 
        : 
        : "r"(sp) 
        : "r0" 
    ); 
    asm volatile ( 
        "bx %0\n" 
        : 
        : "r"(pc)  // 入力オペランドでアドレスを指定 
    ); 
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
    sleep_ms(15000);
    
    init_task(task1);
    init_task(task2);
    
    uint32_t pc = gContext[gCurrentTask].pc;
    uint32_t stack_end = (uint32_t)gStack[gCurrentTask] + STACK_SIZE;
    uint32_t sp = (uint32_t)stack_end;
    
    asm volatile (
        "msr msp, %0\n"
        :
        : "r"(sp)
    );
    asm volatile (
        "bx %0\n"
        :
        : "r"(pc)
    );

    while (true) {
    }
    
    return 0;
}

