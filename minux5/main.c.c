/// previous struct definition ///
/// struct definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef unsigned int uint;

typedef unsigned short int ushort;

typedef unsigned char uchar;

typedef unsigned char uint8;

typedef unsigned char uint8_t;

typedef unsigned short int uint16;

typedef unsigned short int uint16_t;

typedef unsigned int uint32;

typedef unsigned int uint32_t;

typedef unsigned long  int uint64;

typedef unsigned long  int uint64_t;

typedef unsigned long  int pte_t;

static char digits[]="0123456789ABCDEF";
struct context
{
    unsigned long  int ra;
    unsigned long  int sp;
    unsigned long  int gp;
    unsigned long  int tp;
    unsigned long  int t0;
    unsigned long  int t1;
    unsigned long  int t2;
    unsigned long  int t3;
    unsigned long  int t4;
    unsigned long  int t5;
    unsigned long  int t6;
    unsigned long  int a0;
    unsigned long  int a1;
    unsigned long  int a2;
    unsigned long  int a3;
    unsigned long  int a4;
    unsigned long  int a5;
    unsigned long  int a6;
    unsigned long  int a7;
    unsigned long  int s0;
    unsigned long  int s1;
    unsigned long  int s2;
    unsigned long  int s3;
    unsigned long  int s4;
    unsigned long  int s5;
    unsigned long  int s6;
    unsigned long  int s7;
    unsigned long  int s8;
    unsigned long  int s9;
    unsigned long  int s10;
    unsigned long  int s11;
    unsigned long  int mepc;
};

extern char TRAPFRAME[];
struct cpu
{
    struct proc* proc;
    struct context context;
};

struct run
{
    struct run* next;
};

struct anonymous_typeX1
{
    struct run* freelist;
};

struct anonymous_typeX2
{
    struct run* freelist;
};

struct anonymous_typeX3
{
    struct run* freelist;
};

struct anonymous_typeX4
{
    struct run* freelist;
};

struct anonymous_typeX5
{
    struct run* freelist;
};

struct anonymous_typeX5 kmem;
struct cpu gCPU;
enum procstate { UNUSED
,USED
,SLEEPING
,RUNNABLE
,RUNNING
,ZOMBIE
};

struct proc
{
    enum procstate state;
    struct context context;
    struct proc* parent;
    char* stack;
};

struct proc* gProc[128];
extern char _end[];
int gActiveProc=0;
int gNumProc=0;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void putchar(char c);
void uartputc_sync(char c);
char* itoa(char* buf, long val_, int base, int is_unsigned);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int printf(const char* fmt, ...);
void puts(const char* s);
void kfree(void* pa);
void freerange(void* pa_start, void* pa_end);
void kinit();
void* kalloc();
void disable_timer_interrupt();
void timervec();
void enable_timer_interrupts();
void timer_interrupts_for_task_switch();
void timer_interrupts_for_scheduler();
void disable_timer_interrupts();
void task1();
void task2();
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
struct proc* alloc_proc(void (*task)());
void swtch(struct context* anonymous_var_nameX1, struct context* anonymous_var_nameX2);
void timer_reset();
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
int main();
// uniq global variable
// inline function
static inline void intr_on(){
unsigned long  int x_19;
memset(&x_19, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_19));
    x_19|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_19));
}
static inline void intr_off(){
unsigned long  int x_20;
memset(&x_20, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_20));
    x_20&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_20));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_24;
memset(&x_24, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_24));
    return x_24;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_25;
memset(&x_25, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_25));
    return x_25;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_26;
memset(&x_26, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_26));
    return x_26;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_27;
memset(&x_27, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_27));
    return x_27;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_28));
    return x_28;
}
static inline void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
void putchar(char c){
    *(char*)(268435456)=c;
}

void uartputc_sync(char c){
    *(char*)(268435456)=c;
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_0;
int digit_4;
    p_0=buf;
    char tmp_1[32];
    memset(&tmp_1, 0, sizeof(char)    *(32)    );
    int i_2=0;
    int negative_3=0;
    if(    base<2||base>16    ) {
        *p_0=0;
        return p_0;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_3=1;
        val_=-val_;
    }
    do {
        digit_4=val_%base;
        tmp_1[i_2++]=(((digit_4<10))?(48+digit_4):(97+digit_4-10));
        val_/=base;
    } while(    val_    );
    if(    negative_3    ) {
        *p_0++=45;
    }
    while(    i_2--    ) {
        *p_0++=tmp_1[i_2];
    }
    *p_0=0;
    return buf;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_5;
char* p_6;
const char* s_7;
unsigned long  int remaining_9;
memset(&ap_5, 0, sizeof(va_list));
s_7 = (void*)0;
    __builtin_va_start(ap_5,fmt);
    p_6=out;
    char buf_8[32];
    memset(&buf_8, 0, sizeof(char)    *(32)    );
    remaining_9=out_size;
    if(    remaining_9==0    ) {
        __builtin_va_end(ap_5);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_9>1            ) {
                *p_6++=*fmt;
                remaining_9--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_7=__builtin_va_arg(ap_5,const char*);
            while(            *s_7&&remaining_9>1            ) {
                *p_6++=*s_7++;
                remaining_9--;
            }
            break;
            case 100:
            itoa(buf_8,__builtin_va_arg(ap_5,int),10,0);
            s_7=buf_8;
            while(            *s_7&&remaining_9>1            ) {
                *p_6++=*s_7++;
                remaining_9--;
            }
            break;
            case 120:
            itoa(buf_8,(unsigned int)__builtin_va_arg(ap_5,int),16,1);
            s_7=buf_8;
            while(            *s_7&&remaining_9>1            ) {
                *p_6++=*s_7++;
                remaining_9--;
            }
            break;
            case 99:
            if(            remaining_9>1            ) {
                *p_6++=(char)__builtin_va_arg(ap_5,int);
                remaining_9--;
            }
            break;
            case 112:
            s_7="0x";
            while(            *s_7&&remaining_9>1            ) {
                *p_6++=*s_7++;
                remaining_9--;
            }
            itoa(buf_8,(long)__builtin_va_arg(ap_5,void*),16,1);
            s_7=buf_8;
            while(            *s_7&&remaining_9>1            ) {
                *p_6++=*s_7++;
                remaining_9--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_8,__builtin_va_arg(ap_5,long),10,1);
                s_7=buf_8;
                while(                *s_7&&remaining_9>1                ) {
                    *p_6++=*s_7++;
                    remaining_9--;
                }
            }
            break;
            default:
            if(            remaining_9>1            ) {
                *p_6++=37;
                remaining_9--;
                if(                remaining_9>1                ) {
                    *p_6++=*fmt;
                    remaining_9--;
                }
            }
            break;
        }
    }
    *p_6=0;
    __builtin_va_end(ap_5);
    return p_6-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_10;
char* p_11;
const char* s_12;
unsigned long  int remaining_14;
memset(&ap_10, 0, sizeof(va_list));
s_12 = (void*)0;
    __builtin_va_start(ap_10,fmt);
    p_11=out;
    char buf_13[32];
    memset(&buf_13, 0, sizeof(char)    *(32)    );
    remaining_14=out_size;
    if(    remaining_14==0    ) {
        __builtin_va_end(ap_10);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_14>1            ) {
                *p_11++=*fmt;
                remaining_14--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_12=__builtin_va_arg(ap_10,const char*);
            while(            *s_12&&remaining_14>1            ) {
                *p_11++=*s_12++;
                remaining_14--;
            }
            break;
            case 100:
            itoa(buf_13,__builtin_va_arg(ap_10,int),10,0);
            s_12=buf_13;
            while(            *s_12&&remaining_14>1            ) {
                *p_11++=*s_12++;
                remaining_14--;
            }
            break;
            case 120:
            itoa(buf_13,(unsigned int)__builtin_va_arg(ap_10,int),16,1);
            s_12=buf_13;
            while(            *s_12&&remaining_14>1            ) {
                *p_11++=*s_12++;
                remaining_14--;
            }
            break;
            case 99:
            if(            remaining_14>1            ) {
                *p_11++=(char)__builtin_va_arg(ap_10,int);
                remaining_14--;
            }
            break;
            case 112:
            s_12="0x";
            while(            *s_12&&remaining_14>1            ) {
                *p_11++=*s_12++;
                remaining_14--;
            }
            itoa(buf_13,(long)__builtin_va_arg(ap_10,void*),16,1);
            s_12=buf_13;
            while(            *s_12&&remaining_14>1            ) {
                *p_11++=*s_12++;
                remaining_14--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_13,__builtin_va_arg(ap_10,long),10,1);
                s_12=buf_13;
                while(                *s_12&&remaining_14>1                ) {
                    *p_11++=*s_12++;
                    remaining_14--;
                }
            }
            break;
            default:
            if(            remaining_14>1            ) {
                *p_11++=37;
                remaining_14--;
                if(                remaining_14>1                ) {
                    *p_11++=*fmt;
                    remaining_14--;
                }
            }
            break;
        }
    }
    *p_11=0;
    __builtin_va_end(ap_10);
    return p_11-out;
}

int printf(const char* fmt, ...){
va_list ap_16;
int len_17;
int i_18;
memset(&ap_16, 0, sizeof(va_list));
    char buf_15[256];
    memset(&buf_15, 0, sizeof(char)    *(256)    );
    __builtin_va_start(ap_16,fmt);
    len_17=snprintf(buf_15,sizeof(buf_15),fmt,ap_16);
    for(    i_18=0    ;    i_18<len_17    ;    i_18++    ){
        putchar(buf_15[i_18]);
    }
    __builtin_va_end(ap_16);
    return len_17;
}

void puts(const char* s){
    intr_off();
    while(    *s    ) {
        putchar(*s++);
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_21;
r_21 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_21=(struct run*)pa;
    r_21->next=kmem.freelist;
    kmem.freelist=r_21;
}

void freerange(void* pa_start, void* pa_end){
char* p_22;
p_22 = (void*)0;
    p_22=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_22+4096<=(_end+4096*256)    ;    p_22+=4096    ){
        kfree(p_22);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_23;
r_23 = (void*)0;
    r_23=kmem.freelist;
    if(    r_23    ) {
        kmem.freelist=r_23->next;
    }
    return (void*)r_23;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_29;
    w_mtvec((unsigned long  int)timervec&~3);
    now_29=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_29+-1;
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void timer_interrupts_for_task_switch(){
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void timer_interrupts_for_scheduler(){
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void disable_timer_interrupts(){
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void task1(){
    puts("TASK1");
    printf("TASK1 TOP %p\n",task1);
    while(    1    ) {
        puts("1a");
        puts("1b");
        puts("1c");
        puts("1d");
        puts("1e");
        puts("1f");
        puts("1g");
    }
}

void task2(){
    puts("TASK2");
    printf("TASK2 TOP %p\n",task2);
    while(    1    ) {
        puts("2a");
        puts("2b");
        puts("2c");
        puts("2d");
        puts("2e");
        puts("2f");
        puts("2g");
    }
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_30;
int i_31;
    cdst_30=(char*)dst;
    for(    i_31=0    ;    i_31<n    ;    i_31++    ){
        cdst_30[i_31]=c;
    }
    return dst;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_32;
const unsigned char* s2_33;
memset(&s1_32, 0, sizeof(const unsigned char*));
memset(&s2_33, 0, sizeof(const unsigned char*));
    s1_32=v1;
    s2_33=v2;
    while(    n-->0    ) {
        if(        *s1_32!=*s2_33        ) {
            return *s1_32-*s2_33;
        }
        s1_32++,s2_33++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_34;
char* d_35;
s_34 = (void*)0;
d_35 = (void*)0;
    if(    n==0    ) {
        return dst;
    }
    s_34=src;
    d_35=dst;
    if(    s_34<d_35&&s_34+n>d_35    ) {
        s_34+=n;
        d_35+=n;
        while(        n-->0        ) {
            *--d_35=*--s_34;
        }
    }
    else {
        while(        n-->0        ) {
            *d_35++=*s_34++;
        }
    }
    return dst;
}

void* memcpy(void* dst, const void* src, unsigned int n){
    return memmove(dst,src,n);
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_36;
    result_36=kalloc();
    memset(result_36,0,sizeof(struct proc));
    result_36->stack=kalloc();
    result_36->context.sp=(unsigned long  int)(result_36->stack+4096);
    result_36->context.mepc=(unsigned long  int)task;
    result_36->state=(3);
    gProc[gNumProc++]=result_36;
    return result_36;
}

void timer_reset(){
unsigned long  int now_37;
    now_37=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_37+10000000;
}

void timer_handler(){
struct proc* p_38;
struct context* tf_39;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_38=gProc[gActiveProc];
    tf_39=(struct context*)TRAPFRAME;
    p_38->context=*tf_39;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_39->ra);
    printf("ra %x\n",p_38->context.ra);
    printf("sp %x\n",tf_39->sp);
    printf("sp %x\n",p_38->context.sp);
    printf("gp %x\n",p_38->context.gp);
    printf("mepc %x\n",tf_39->mepc);
    printf("mepc %x\n",p_38->context.mepc);
    yield();
}

void yield(){
struct proc* p_40;
    p_40=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_40=gProc[gActiveProc];
    p_40->state=(3);
    scheduler();
}

void scheduler(){
int i_41;
struct proc* p_42;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_41=0        ;        i_41<gNumProc        ;        i_41++        ){
            p_42=gProc[i_41];
            if(            p_42->state==(3)            ) {
                gActiveProc=i_41;
                p_42->state=(4);
                printf("SWITCH TO %d\n",i_41);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_42->context);
                disable_timer_interrupts();
                p_42->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_43;
    now_43=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
    puts("HELLO WORLD");
    kinit();
    alloc_proc(task1);
    alloc_proc(task2);
    enable_timer_interrupts();
    scheduler();
    while(    1    ) {
        ;
    }
}

