/// previous struct definition ///
/// struct definition ///
typedef void* any;

typedef char* string;

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

struct anonymous_typeX1
{
    _Atomic int locked;
};

typedef struct anonymous_typeX1 mutex_t;

extern struct anonymous_typeX1 gExpMutex;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

extern struct mem_block* free_list;

extern struct anonymous_typeX1 gComeHeapMutex;

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

typedef unsigned long  int pte_t;

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

struct anonymous_typeX6
{
    struct run* freelist;
};

struct anonymous_typeX6 kmem;
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
char uart_tx_buf[128];
int tx_w=0;
int tx_r=0;
int uart_tx_busy=0;
struct anonymous_typeX1 mutex={ 0 };
int gActiveProc=0;
int gNumProc=0;
int gCountTask1=0;
int gCountTask2=0;
// source head
#include <stdatomic.h>

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void mutex_init(struct anonymous_typeX1* mutex);
void mutex_enter_blocking(struct anonymous_typeX1* mutex);
void mutex_exit(struct anonymous_typeX1* mutex);
void putchar(char c);
void uartputc_sync(char c);
static void uartstart();
void uartputc(char c);
void puts(const char* s);
void kfree(void* pa);
void freerange(void* pa_start, void* pa_end);
void kinit();
void* kalloc();
void timervec();
void task1();
void task2();
struct proc* alloc_proc(void (*task)());
void swtch(struct context* anonymous_var_nameX54, struct context* anonymous_var_nameX55);
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
int main();
unsigned long  int r_mie();
void w_mie(unsigned long  int x);
void w_mstatus(unsigned long  int x);
void w_mtvec(unsigned long  int x);
void enable_timer_interrupts();
void disable_timer_interrupts();
void* sbrk(long incr);
void* malloc(unsigned long  int size);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
void free(void* ptr);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
char* safestrcpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
void exit(int n);
char* itoa(char* buf, long val_, int base, int is_unsigned);
static void va_list_finalize(va_list self);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vasprintf(char** result, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(long num, int base, int is_signed);
int printf(const char* fmt, ...);
void perror(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
// uniq global variable
struct anonymous_typeX1 gExpMutex={ 0 };

struct mem_block* free_list=((void*)0);

struct anonymous_typeX1 gComeHeapMutex={ 0 };

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline unsigned long  int r_sepc(){
unsigned long  int x_5;
memset(&x_5, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_5));
    return x_5;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_6;
memset(&x_6, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_6));
    return x_6;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_7;
memset(&x_7, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_7));
    return x_7;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_8;
memset(&x_8, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_8));
    return x_8;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}

// body function
void mutex_init(struct anonymous_typeX1* mutex){
    atomic_store(&mutex->locked,0);
}

void mutex_enter_blocking(struct anonymous_typeX1* mutex){
int expected_0;
    expected_0=0;
    while(    !atomic_compare_exchange_weak(&mutex->locked,&expected_0,1)    ) {
        expected_0=0;
        __asm volatile("nop");
    }
}

void mutex_exit(struct anonymous_typeX1* mutex){
    atomic_store(&mutex->locked,0);
}

void putchar(char c){
    *(char*)(268435456)=c;
}

void uartputc_sync(char c){
    *(char*)(268435456)=c;
}

static void uartstart(){
    while(    tx_r!=tx_w    ) {
        if(        *((unsigned int*)(268435456L+0))&-2147483648        ) {
            break;
        }
        *((unsigned int*)(268435456L+0))=uart_tx_buf[tx_r];
        tx_r=(tx_r+1)%128;
    }
    if(    tx_r==tx_w    ) {
        uart_tx_busy=0;
    }
    else {
        uart_tx_busy=1;
    }
}

void uartputc(char c){
int next_1;
    next_1=(tx_w+1)%128;
    while(    next_1==tx_r    ) {
    }
    uart_tx_buf[tx_w]=c;
    tx_w=next_1;
    if(    !uart_tx_busy    ) {
        uart_tx_busy=1;
        uartstart();
    }
}

void puts(const char* s){
    while(    *s    ) {
        uartputc(*s++);
    }
}

void kfree(void* pa){
struct run* r_2;
r_2 = (void*)0;
    if(    ((unsigned long  int)pa%4096*2*2)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*2*2*256)    ) {
        puts("panic");
    }
    r_2=(struct run*)pa;
    r_2->next=kmem.freelist;
    kmem.freelist=r_2;
}

void freerange(void* pa_start, void* pa_end){
char* p_3;
p_3 = (void*)0;
    p_3=(char*)((((unsigned long  int)pa_start)+4096*2*2-1)&~(4096*2*2-1));
    for(    ;    p_3+4096*2*2<=(_end+4096*2*2*256)    ;    p_3+=4096*2*2    ){
        kfree(p_3);
    }
}

void kinit(){
    freerange(_end,(_end+4096*2*2*256));
}

void* kalloc(){
struct run* r_4;
void* __result_obj__1;
r_4 = (void*)0;
    r_4=kmem.freelist;
    if(    r_4    ) {
        kmem.freelist=r_4->next;
    }
    __result_obj__1 = (void*)r_4;
    return __result_obj__1;
}

void task1(){
void* __right_value0 = (void*)0;
    while(    1    ) {
        puts("[1A]\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        disable_timer_interrupts();
        ((char*)(__right_value0=charp_puts("ABC")));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        gCountTask1++;
    }
}

void task2(){
void* __right_value1 = (void*)0;
    while(    1    ) {
        puts("[2A]\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        disable_timer_interrupts();
        ((char*)(__right_value1=charp_puts("ABC")));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        gCountTask2++;
    }
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_15;
struct proc* __result_obj__6;
    result_15=kalloc();
    memset(result_15,0,sizeof(struct proc));
    result_15->stack=kalloc();
    result_15->context.sp=(unsigned long  int)(result_15->stack+4096*2*2);
    result_15->context.mepc=(unsigned long  int)task;
    result_15->state=(3);
    gProc[gNumProc++]=result_15;
    __result_obj__6 = result_15;
    return __result_obj__6;
}

void timer_handler(){
struct proc* p_16;
struct context* tf_17;
    disable_timer_interrupts();
    p_16=gProc[gActiveProc];
    tf_17=(struct context*)TRAPFRAME;
    p_16->context=*tf_17;
    yield();
}

void yield(){
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    scheduler();
}

void scheduler(){
struct proc* p_18;
    p_18=gProc[gActiveProc];
    enable_timer_interrupts();
    swtch(&gCPU.context,&p_18->context);
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_19;
    now_19=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value2 = (void*)0;
    come_heap_init(0, 0, 0);
    kinit();
    disable_timer_interrupts();
    ((char*)(__right_value2=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 388, "char*")));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    alloc_proc(task1);
    alloc_proc(task2);
    scheduler();
    while(    1    ) {
        ;
    }
come_heap_final();
}

unsigned long  int r_mie(){
unsigned long  int x_20;
memset(&x_20, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_20));
    return x_20;
}

void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}

void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}

void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

void enable_timer_interrupts(){
unsigned long  int now_21;
    w_mie(0);
    w_mtvec((unsigned long  int)timervec&~3);
    w_mstatus(r_mstatus()&~(1<<3));
    now_21=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_21+10;
}

void disable_timer_interrupts(){
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void* sbrk(long incr){
void* __result_obj__7;
void* prev_22;
void* __result_obj__8;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__7 = (void*)-1;
        return __result_obj__7;
    }
    prev_22=heap_end;
    heap_end+=incr;
    __result_obj__8 = prev_22;
    return __result_obj__8;
}

void* malloc(unsigned long  int size){
void* __result_obj__9;
struct mem_block* current_23;
struct mem_block* prev_24;
void* __result_obj__10;
struct mem_block* new_mem_25;
void* __result_obj__11;
void* __result_obj__12;
    if(    size==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_23=free_list;
    prev_24=((void*)0);
    while(    current_23!=((void*)0)    ) {
        if(        current_23->size>=size        ) {
            if(            prev_24==((void*)0)            ) {
                free_list=current_23->next;
            }
            else {
                prev_24->next=current_23->next;
            }
            __result_obj__10 = (void*)(current_23+1);
            return __result_obj__10;
        }
        prev_24=current_23;
        current_23=current_23->next;
    }
    new_mem_25=(struct mem_block*)sbrk(size);
    if(    new_mem_25==(void*)-1    ) {
        __result_obj__11 = ((void*)0);
        return __result_obj__11;
    }
    new_mem_25->size=size;
    new_mem_25->next=((void*)0);
    __result_obj__12 = (void*)(new_mem_25+1);
    return __result_obj__12;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_26;
void* __result_obj__13;
void* ptr_27;
void* __result_obj__14;
    total_size_26=nmemb*size;
    if(    total_size_26==0    ) {
        __result_obj__13 = ((void*)0);
        return __result_obj__13;
    }
    ptr_27=malloc(total_size_26);
    if(    ptr_27!=((void*)0)    ) {
        memset(ptr_27,0,total_size_26);
    }
    __result_obj__14 = ptr_27;
    return __result_obj__14;
}

void free(void* ptr){
struct mem_block* block_28;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_28=(struct mem_block*)ptr-1;
    block_28->next=free_list;
    free_list=block_28;
}

char* strdup(const char* s){
unsigned long  int len_29;
char* p_30;
char* __result_obj__15;
    len_29=strlen(s)+1;
    p_30=malloc(len_29);
    if(    p_30    ) {
        memcpy(p_30,s,len_29);
    }
    __result_obj__15 = p_30;
    return __result_obj__15;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__16;
char* __result_obj__17;
char* __result_obj__18;
    if(    !*needle    ) {
        __result_obj__16 = (char*)haystack;
        return __result_obj__16;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_31=haystack;
        const char* n_32=needle;
        while(        *h_31&&*n_32&&(*h_31==*n_32)        ) {
            h_31++;
            n_32++;
        }
        if(        !*n_32        ) {
            __result_obj__17 = (char*)haystack;
            return __result_obj__17;
        }
    }
    __result_obj__18 = ((void*)0);
    return __result_obj__18;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_33;
int i_34;
void* __result_obj__19;
    cdst_33=(char*)dst;
    for(    i_34=0    ;    i_34<n    ;    i_34++    ){
        cdst_33[i_34]=c;
    }
    __result_obj__19 = dst;
    return __result_obj__19;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_35;
const unsigned char* s2_36;
memset(&s1_35, 0, sizeof(const unsigned char*));
memset(&s2_36, 0, sizeof(const unsigned char*));
    s1_35=v1;
    s2_36=v2;
    while(    n-->0    ) {
        if(        *s1_35!=*s2_36        ) {
            return *s1_35-*s2_36;
        }
        s1_35++,s2_36++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_37;
char* d_38;
void* __result_obj__20;
void* __result_obj__21;
s_37 = (void*)0;
d_38 = (void*)0;
    if(    n==0    ) {
        __result_obj__20 = dst;
        return __result_obj__20;
    }
    s_37=src;
    d_38=dst;
    if(    s_37<d_38&&s_37+n>d_38    ) {
        s_37+=n;
        d_38+=n;
        while(        n-->0        ) {
            *--d_38=*--s_37;
        }
    }
    else {
        while(        n-->0        ) {
            *d_38++=*s_37++;
        }
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__22;
    __result_obj__22 = memmove(dst,src,n);
    return __result_obj__22;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_39;
char* __result_obj__23;
os_39 = (void*)0;
    os_39=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__23 = os_39;
    return __result_obj__23;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_40;
char* __result_obj__24;
char* __result_obj__25;
os_40 = (void*)0;
    os_40=s;
    if(    n<=0    ) {
        __result_obj__24 = os_40;
        return __result_obj__24;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__25 = os_40;
    return __result_obj__25;
}

int strlen(const char* s){
int n_41;
memset(&n_41, 0, sizeof(int));
    for(    n_41=0    ;    s[n_41]    ;    n_41++    ){
        ;
    }
    return n_41;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_42;
char* __result_obj__26;
    d_42=dest;
    while(    *d_42    ) {
        d_42++;
    }
    while(    n--&&*src    ) {
        *d_42++=*src++;
    }
    *d_42=0;
    __result_obj__26 = dest;
    return __result_obj__26;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_43;
char* __result_obj__27;
int digit_47;
char* __result_obj__28;
    p_43=buf;
    char tmp_44[32];
    memset(&tmp_44, 0, sizeof(char)    *(32)    );
    int i_45=0;
    int negative_46=0;
    if(    base<2||base>16    ) {
        *p_43=0;
        __result_obj__27 = p_43;
        return __result_obj__27;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_46=1;
        val_=-val_;
    }
    do {
        digit_47=val_%base;
        tmp_44[i_45++]=(((digit_47<10))?(48+digit_47):(97+digit_47-10));
        val_/=base;
    } while(    val_    );
    if(    negative_46    ) {
        *p_43++=45;
    }
    while(    i_45--    ) {
        *p_43++=tmp_44[i_45];
    }
    *p_43=0;
    __result_obj__28 = buf;
    return __result_obj__28;
}

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_48;
char* p_49;
const char* s_50;
unsigned long  int remaining_52;
int __result_obj__29;
int __result_obj__30;
memset(&ap_48, 0, sizeof(va_list));
s_50 = (void*)0;
    __builtin_va_start(ap_48,fmt);
    p_49=out;
    char buf_51[32];
    memset(&buf_51, 0, sizeof(char)    *(32)    );
    remaining_52=out_size;
    if(    remaining_52==0    ) {
        __builtin_va_end(ap_48);
        __result_obj__29 = 0;
        come_call_finalizer(va_list_finalize, (&ap_48), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__29;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_52>1            ) {
                *p_49++=*fmt;
                remaining_52--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_50=__builtin_va_arg(ap_48,const char*);
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 100:
            itoa(buf_51,__builtin_va_arg(ap_48,int),10,0);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 120:
            itoa(buf_51,(unsigned int)__builtin_va_arg(ap_48,int),16,1);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 99:
            if(            remaining_52>1            ) {
                *p_49++=(char)__builtin_va_arg(ap_48,int);
                remaining_52--;
            }
            break;
            case 112:
            s_50="0x";
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            itoa(buf_51,(long)__builtin_va_arg(ap_48,void*),16,1);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_51,__builtin_va_arg(ap_48,long),10,1);
                s_50=buf_51;
                while(                *s_50&&remaining_52>1                ) {
                    *p_49++=*s_50++;
                    remaining_52--;
                }
            }
            break;
            default:
            if(            remaining_52>1            ) {
                *p_49++=37;
                remaining_52--;
                if(                remaining_52>1                ) {
                    *p_49++=*fmt;
                    remaining_52--;
                }
            }
            break;
        }
    }
    *p_49=0;
    __builtin_va_end(ap_48);
    __result_obj__30 = p_49-out;
    come_call_finalizer(va_list_finalize, (&ap_48), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

int vasprintf(char** result, const char* fmt, ...){
va_list ap_53;
unsigned long  int out_size_55;
char* p_56;
const char* s_57;
unsigned long  int remaining_59;
int __result_obj__31;
int __result_obj__32;
memset(&ap_53, 0, sizeof(va_list));
s_57 = (void*)0;
    __builtin_va_start(ap_53,fmt);
    char out_54[256];
    memset(&out_54, 0, sizeof(char)    *(256)    );
    out_size_55=256;
    p_56=out_54;
    char buf_58[32];
    memset(&buf_58, 0, sizeof(char)    *(32)    );
    remaining_59=out_size_55;
    if(    remaining_59==0    ) {
        __builtin_va_end(ap_53);
        __result_obj__31 = 0;
        come_call_finalizer(va_list_finalize, (&ap_53), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__31;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_59>1            ) {
                *p_56++=*fmt;
                remaining_59--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_57=__builtin_va_arg(ap_53,const char*);
            while(            *s_57&&remaining_59>1            ) {
                *p_56++=*s_57++;
                remaining_59--;
            }
            break;
            case 100:
            itoa(buf_58,__builtin_va_arg(ap_53,int),10,0);
            s_57=buf_58;
            while(            *s_57&&remaining_59>1            ) {
                *p_56++=*s_57++;
                remaining_59--;
            }
            break;
            case 120:
            itoa(buf_58,(unsigned int)__builtin_va_arg(ap_53,int),16,1);
            s_57=buf_58;
            while(            *s_57&&remaining_59>1            ) {
                *p_56++=*s_57++;
                remaining_59--;
            }
            break;
            case 99:
            if(            remaining_59>1            ) {
                *p_56++=(char)__builtin_va_arg(ap_53,int);
                remaining_59--;
            }
            break;
            case 112:
            s_57="0x";
            while(            *s_57&&remaining_59>1            ) {
                *p_56++=*s_57++;
                remaining_59--;
            }
            itoa(buf_58,(long)__builtin_va_arg(ap_53,void*),16,1);
            s_57=buf_58;
            while(            *s_57&&remaining_59>1            ) {
                *p_56++=*s_57++;
                remaining_59--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_58,__builtin_va_arg(ap_53,long),10,1);
                s_57=buf_58;
                while(                *s_57&&remaining_59>1                ) {
                    *p_56++=*s_57++;
                    remaining_59--;
                }
            }
            break;
            default:
            if(            remaining_59>1            ) {
                *p_56++=37;
                remaining_59--;
                if(                remaining_59>1                ) {
                    *p_56++=*fmt;
                    remaining_59--;
                }
            }
            break;
        }
    }
    *p_56=0;
    __builtin_va_end(ap_53);
    *result=malloc(sizeof(char)*(p_56-out_54+1));
    strncpy(*result,out_54,p_56-out_54);
    __result_obj__32 = p_56-out_54;
    come_call_finalizer(va_list_finalize, (&ap_53), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_60;
char* p_61;
const char* s_62;
unsigned long  int remaining_64;
int __result_obj__33;
int __result_obj__34;
memset(&ap_60, 0, sizeof(va_list));
s_62 = (void*)0;
    __builtin_va_start(ap_60,fmt);
    p_61=out;
    char buf_63[32];
    memset(&buf_63, 0, sizeof(char)    *(32)    );
    remaining_64=out_size;
    if(    remaining_64==0    ) {
        __builtin_va_end(ap_60);
        __result_obj__33 = 0;
        come_call_finalizer(va_list_finalize, (&ap_60), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__33;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_64>1            ) {
                *p_61++=*fmt;
                remaining_64--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_62=__builtin_va_arg(ap_60,const char*);
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 100:
            itoa(buf_63,__builtin_va_arg(ap_60,int),10,0);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 120:
            itoa(buf_63,(unsigned int)__builtin_va_arg(ap_60,int),16,1);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 99:
            if(            remaining_64>1            ) {
                *p_61++=(char)__builtin_va_arg(ap_60,int);
                remaining_64--;
            }
            break;
            case 112:
            s_62="0x";
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            itoa(buf_63,(long)__builtin_va_arg(ap_60,void*),16,1);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_63,__builtin_va_arg(ap_60,long),10,1);
                s_62=buf_63;
                while(                *s_62&&remaining_64>1                ) {
                    *p_61++=*s_62++;
                    remaining_64--;
                }
            }
            break;
            default:
            if(            remaining_64>1            ) {
                *p_61++=37;
                remaining_64--;
                if(                remaining_64>1                ) {
                    *p_61++=*fmt;
                    remaining_64--;
                }
            }
            break;
        }
    }
    *p_61=0;
    __builtin_va_end(ap_60);
    __result_obj__34 = p_61-out;
    come_call_finalizer(va_list_finalize, (&ap_60), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

void printint(long num, int base, int is_signed){
int i_66;
unsigned long  int n_67;
memset(&n_67, 0, sizeof(unsigned long  int));
    char buf_65[32];
    memset(&buf_65, 0, sizeof(char)    *(32)    );
    i_66=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_67=-num;
    }
    else {
        n_67=num;
    }
    do {
        buf_65[i_66++]="0123456789abcdef"[n_67%base];
        n_67/=base;
    } while(    n_67>0    );
    while(    i_66--    ) {
        putchar(buf_65[i_66]);
    }
}

int printf(const char* fmt, ...){
va_list ap_68;
char* p_69;
int val__70;
unsigned int val__71;
unsigned long  int val__72;
char c_74;
int __result_obj__35;
memset(&ap_68, 0, sizeof(va_list));
p_69 = (void*)0;
    __builtin_va_start(ap_68,fmt);
    for(    p_69=fmt    ;    *p_69    ;    p_69++    ){
        if(        *p_69!=37        ) {
            putchar(*p_69);
            continue;
        }
        p_69++;
        switch (        *p_69) {
            case 100:
            {
                val__70=__builtin_va_arg(ap_68,int);
                printint(val__70,10,1);
                break;
            }
            case 120:
            {
                val__71=__builtin_va_arg(ap_68,unsigned int);
                printint(val__71,16,0);
                break;
            }
            case 112:
            {
                val__72=(unsigned long  int)__builtin_va_arg(ap_68,void*);
                putchar(48);
                putchar(120);
                printint(val__72,16,0);
                break;
            }
            case 115:
            {
                const char* s_73=__builtin_va_arg(ap_68,const char*);
                if(                !s_73                ) {
                    s_73="(null)";
                }
                while(                *s_73                ) {
                    putchar(*s_73++);
                }
                break;
            }
            case 99:
            {
                c_74=(char)__builtin_va_arg(ap_68,int);
                putchar(c_74);
                break;
            }
            case 37:
            {
                putchar(37);
                break;
            }
            default:
            {
                putchar(37);
                putchar(*p_69);
                break;
            }
        }
    }
    __builtin_va_end(ap_68);
    __result_obj__35 = 0;
    come_call_finalizer(va_list_finalize, (&ap_68), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__35;
}

void perror(char* str){
    puts(str);
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    mutex_enter_blocking(&gComeHeapMutex);
    come_push_stackframe(sname,sline,id);
    mutex_exit(&gComeHeapMutex);
}

void come_pop_stackframe_v2(){
    mutex_enter_blocking(&gComeHeapMutex);
    come_pop_stackframe();
    mutex_exit(&gComeHeapMutex);
}

void come_save_stackframe_v2(char* sname, int sline){
    mutex_enter_blocking(&gComeHeapMutex);
    come_save_stackframe(sname,sline);
    mutex_exit(&gComeHeapMutex);
}

void stackframe_v2(){
    mutex_enter_blocking(&gComeHeapMutex);
    stackframe();
    mutex_exit(&gComeHeapMutex);
}

char* come_get_stackframe_v2(){
void* __right_value3 = (void*)0;
char* result_75;
char* __result_obj__36;
    mutex_enter_blocking(&gComeHeapMutex);
    disable_timer_interrupts();
    result_75=(char*)come_increment_ref_count(come_get_stackframe());
    mutex_exit(&gComeHeapMutex);
    __result_obj__36 = (char*)come_increment_ref_count(result_75);
    (result_75 = come_decrement_ref_count(result_75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__36;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_76;
void* __result_obj__37;
    mutex_enter_blocking(&gComeHeapMutex);
    result_76=come_calloc(count,size,sname,sline,class_name);
    mutex_exit(&gComeHeapMutex);
    __result_obj__37 = result_76;
    return __result_obj__37;
}

void come_free_v2(void* mem){
    mutex_enter_blocking(&gComeHeapMutex);
    come_free(mem);
    mutex_exit(&gComeHeapMutex);
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* buf_77;
int i_78;
void* __right_value6 = (void*)0;
    disable_timer_interrupts();
    buf_77=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_77,"%s %d\n",sname,sline);
    for(    i_78=gNumComeStackFrame-2    ;    i_78>=0    ;    i_78--    ){
        buffer_append_format(buf_77,"%s %d #%d\n",gComeStackFrameSName[i_78],gComeStackFrameSLine[i_78],gComeStackFrameID[i_78]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    disable_timer_interrupts();
    gComeStackFrameBuffer=strdup(((char*)(__right_value6=buffer_to_string(buf_77))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_79;
    for(    i_79=gNumComeStackFrame-1    ;    i_79>=0    ;    i_79--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_79],gComeStackFrameSLine[i_79],gComeStackFrameID[i_79]);
    }
}

char* come_get_stackframe(){
void* __right_value7 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(gComeStackFrameBuffer))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_80;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_80=0    ;    i_80<gHeapPages.mSizePages    ;    i_80++    ){
        gHeapPages.mPages[i_80]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_81;
int n_82;
_Bool flag_83;
int i_84;
struct sMemHeaderTiny* it_85;
int n_86;
int i_87;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_81=gAllocMem;
        n_82=0;
        while(        it_81        ) {
            n_82++;
            flag_83=(_Bool)0;
            printf("#%d ",n_82);
            if(            it_81->class_name            ) {
                printf("%p (%s): ",(char*)it_81+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_81->class_name);
            }
            for(            i_84=0            ;            i_84<16            ;            i_84++            ){
                if(                it_81->sname[i_84]                ) {
                    printf("%s %d #%d, ",it_81->sname[i_84],it_81->sline[i_84],it_81->id[i_84]);
                    flag_83=(_Bool)1;
                }
            }
            if(            flag_83            ) {
                puts("");
            }
            it_81=it_81->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_82,gNumAlloc,gNumFree);
    }
    else {
        it_85=(struct sMemHeaderTiny*)gAllocMem;
        n_86=0;
        while(        it_85        ) {
            n_86++;
            if(            it_85->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_86,(char*)it_85+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_85->class_name,it_85->sname,it_85->sline);
            }
            it_85=it_85->next;
        }
        if(        n_86>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_86,gNumAlloc,gNumFree);
        }
    }
    for(    i_87=0    ;    i_87<gHeapPages.mSizePages    ;    i_87++    ){
        free(gHeapPages.mPages[i_87]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_88;
void* __result_obj__39;
    result_88=((void*)0);
    size=(size+7&~7);
    result_88=calloc(1,size);
    __result_obj__39 = result_88;
    return __result_obj__39;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_89;
struct sMemHeader* prev_it_90;
struct sMemHeader* next_it_91;
unsigned long  int size_92;
struct sMemHeaderTiny* it_93;
struct sMemHeaderTiny* prev_it_94;
struct sMemHeaderTiny* next_it_95;
unsigned long  int size_96;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_89=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_89->allocated!=177783            ) {
                return;
            }
            it_89->allocated=0;
            prev_it_90=it_89->prev;
            next_it_91=it_89->next;
            if(            gAllocMem==it_89            ) {
                gAllocMem=next_it_91;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_90                ) {
                    prev_it_90->next=next_it_91;
                }
                if(                next_it_91                ) {
                    next_it_91->prev=prev_it_90;
                }
            }
            size_92=it_89->size;
            free(it_89);
            gNumFree++;
        }
        else {
            it_93=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_93->allocated!=177783            ) {
                return;
            }
            it_93->allocated=0;
            prev_it_94=it_93->prev;
            next_it_95=it_93->next;
            if(            gAllocMem==it_93            ) {
                gAllocMem=(struct sMemHeader*)next_it_95;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_94                ) {
                    prev_it_94->next=next_it_95;
                }
                if(                next_it_95                ) {
                    next_it_95->prev=prev_it_94;
                }
            }
            size_96=it_93->size;
            free(it_93);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_97;
struct sMemHeader* it_98;
int i_99;
int i_100;
void* __result_obj__40;
void* result_101;
struct sMemHeaderTiny* it_102;
void* __result_obj__41;
memset(&i_99, 0, sizeof(int));
memset(&i_100, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_97=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_98=result_97;
        it_98->allocated=177783;
        it_98->size=size+sizeof(struct sMemHeader);
        it_98->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_99=0            ;            i_99<gNumComeStackFrame            ;            i_99++            ){
                it_98->sname[i_99]=gComeStackFrameSName[i_99];
                it_98->sline[i_99]=gComeStackFrameSLine[i_99];
                it_98->id[i_99]=gComeStackFrameID[i_99];
            }
        }
        else {
            for(            i_100=0            ;            i_100<16            ;            i_100++            ){
                it_98->sname[i_100]=gComeStackFrameSName[gNumComeStackFrame-1-i_100];
                it_98->sline[i_100]=gComeStackFrameSLine[gNumComeStackFrame-1-i_100];
                it_98->id[i_100]=gComeStackFrameID[gNumComeStackFrame-1-i_100];
            }
        }
        come_pop_stackframe_v2();
        it_98->next=gAllocMem;
        it_98->prev=((void*)0);
        it_98->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_98;
        }
        gAllocMem=it_98;
        gNumAlloc++;
        __result_obj__40 = (char*)result_97+sizeof(struct sMemHeader);
        return __result_obj__40;
    }
    else {
        result_101=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_102=result_101;
        it_102->allocated=177783;
        it_102->class_name=class_name;
        it_102->sname=sname;
        it_102->sline=sline;
        it_102->size=size+sizeof(struct sMemHeaderTiny);
        it_102->free_next=((void*)0);
        it_102->next=(struct sMemHeaderTiny*)gAllocMem;
        it_102->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_102;
        }
        gAllocMem=(struct sMemHeader*)it_102;
        gNumAlloc++;
        __result_obj__41 = (char*)result_101+sizeof(struct sMemHeaderTiny);
        return __result_obj__41;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_103;
char* __result_obj__42;
struct sMemHeaderTiny* it_104;
char* __result_obj__43;
    if(    gComeDebugLib    ) {
        it_103=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_103->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_103);
            exit(2);
        }
        __result_obj__42 = it_103->class_name;
        return __result_obj__42;
    }
    else {
        it_104=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_104->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_104);
            exit(2);
        }
        __result_obj__43 = it_104->class_name;
        return __result_obj__43;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_105;
int i_106;
struct sMemHeaderTiny* it_107;
    if(    gComeDebugLib    ) {
        it_105=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_105->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_105->class_name        ) {
            printf("(%s): ",it_105->class_name);
        }
        for(        i_106=0        ;        i_106<16        ;        i_106++        ){
            if(            it_105->sname[i_106]            ) {
                printf("%s %d #%d, ",it_105->sname[i_106],it_105->sline[i_106],it_105->id[i_106]);
            }
        }
        puts("");
    }
    else {
        it_107=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_107->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_107->class_name,it_107->sname,it_107->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_108;
unsigned long  int* ref_count_109;
unsigned long  int* size2_110;
void* __result_obj__44;
    mem_108=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_109=(unsigned long  int*)mem_108;
    *ref_count_109=0;
    size2_110=(unsigned long  int*)(mem_108+sizeof(unsigned long  int));
    *size2_110=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__44 = mem_108+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__44;
}

void come_free(void* mem){
unsigned long  int* ref_count_111;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_111);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__45;
char* mem_112;
unsigned long  int* size_p_113;
unsigned long  int size_114;
void* result_115;
void* __result_obj__46;
    if(    !block    ) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_112=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_113=(unsigned long  int*)(mem_112+sizeof(unsigned long  int));
    size_114=*size_p_113-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_115=come_calloc_v2(1,size_114,sname,sline,class_name);
    memcpy(result_115,block,size_114);
    __result_obj__46 = result_115;
    return __result_obj__46;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__47;
unsigned long  int* ref_count_116;
void* __result_obj__48;
    if(    mem==((void*)0)    ) {
        __result_obj__47 = mem;
        return __result_obj__47;
    }
    ref_count_116=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_116)++;
    __result_obj__48 = mem;
    return __result_obj__48;
}

void* come_print_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_117;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_117);
    __result_obj__50 = mem;
    return __result_obj__50;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_118;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_118=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_118;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__51;
void* __result_obj__52;
unsigned long  int* ref_count_119;
unsigned long  int count_120;
void (*finalizer_121)(void*);
void* __result_obj__53;
void* __result_obj__54;
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__51 = mem;
            return __result_obj__51;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    ref_count_119=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_119)--;
    }
    count_120=*ref_count_119;
    if(    !no_free&&count_120<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_121=protocol_fun;
            finalizer_121(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    __result_obj__54 = mem;
    return __result_obj__54;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_122)(void*);
void (*finalizer_123)(void*);
void (*finalizer_124)(void*);
unsigned long  int* ref_count_125;
unsigned long  int count_126;
void (*finalizer_127)(void*);
void (*finalizer_128)(void*);
void (*finalizer_129)(void*);
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
memset(&finalizer_124, 0, sizeof(void (*)(void*)));
memset(&finalizer_127, 0, sizeof(void (*)(void*)));
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
memset(&finalizer_129, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_122=protocol_fun;
                finalizer_122(protocol_obj);
            }
            finalizer_123=fun;
            finalizer_123(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_124=protocol_fun;
                finalizer_124(protocol_obj);
            }
        }
    }
    else {
        ref_count_125=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_125)--;
        }
        count_126=*ref_count_125;
        if(        !no_free&&count_126<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_127=protocol_fun;
                        finalizer_127(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_128=fun;
                        finalizer_128(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_129=protocol_fun;
                        finalizer_129(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__55;
int len_130;
void* __right_value8 = (void*)0;
char* result_131;
char* __result_obj__56;
    if(    str==((void*)0)    ) {
        __result_obj__55 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__55;
    }
    len_130=strlen(str)+1;
    disable_timer_interrupts();
    result_131=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_130)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_131,str,len_130);
    __result_obj__56 = (char*)come_increment_ref_count(result_131);
    (result_131 = come_decrement_ref_count(result_131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value9 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__57;
    self->size=128;
    __dec_obj1=self->buf,
    disable_timer_interrupts();
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__57 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value10 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__58;
    self->size=128;
    __dec_obj2=self->buf,
    disable_timer_interrupts();
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__58 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__59;
void* __right_value11 = (void*)0;
struct buffer* result_132;
void* __right_value12 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    disable_timer_interrupts();
    result_132=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_132->size=self->size;
    __dec_obj3=result_132->buf,
    disable_timer_interrupts();
    result_132->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_132->len=self->len;
    memcpy(result_132->buf,self->buf,self->len);
    __result_obj__60 = (struct buffer*)come_increment_ref_count(result_132);
    come_call_finalizer(buffer_finalize, result_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
_Bool __result_obj__61;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__61 = string_equals(((char*)(__right_value13=buffer_to_string(left))),((char*)(__right_value14=buffer_to_string(right))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__61;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__62;
void* __right_value15 = (void*)0;
char* old_buf_133;
int old_len_134;
int new_size_135;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__63;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__62 = self;
        return __result_obj__62;
    }
    if(    self->len+size+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_133=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_135)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
        (old_buf_133 = come_decrement_ref_count(old_buf_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__64;
void* __right_value17 = (void*)0;
char* old_buf_136;
int old_len_137;
int new_size_138;
void* __right_value18 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    if(    self->len+1+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_136=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_137=self->len;
        new_size_138=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_138)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_136,old_len_137);
        self->buf[old_len_137]=0;
        self->size=new_size_138;
        (old_buf_136 = come_decrement_ref_count(old_buf_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__66;
int size_139;
void* __right_value19 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value20 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__67;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__66 = self;
        return __result_obj__66;
    }
    size_139=strlen(mem);
    if(    self->len+size_139+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj6=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__68;
va_list args_143;
char* result_144;
int len_145;
struct buffer* __result_obj__69;
void* __right_value21 = (void*)0;
char* mem_146;
int size_147;
void* __right_value22 = (void*)0;
char* old_buf_148;
int old_len_149;
int new_size_150;
void* __right_value23 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__70;
memset(&args_143, 0, sizeof(va_list));
result_144 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    __builtin_va_start(args_143,msg);
    len_145=vasprintf(&result_144,msg,args_143);
    __builtin_va_end(args_143);
    if(    len_145<0    ) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    disable_timer_interrupts();
    mem_146=(char*)come_increment_ref_count(__builtin_string(result_144));
    size_147=strlen(mem_146);
    if(    self->len+size_147+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_148=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3038, "char*"));
        memcpy(old_buf_148,self->buf,self->size);
        old_len_149=self->len;
        new_size_150=(self->size+size_147+1)*2;
        __dec_obj7=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_150)), "/usr/local/include/comelang.h", 3042, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_148,old_len_149);
        self->buf[old_len_149]=0;
        self->size=new_size_150;
        (old_buf_148 = come_decrement_ref_count(old_buf_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_146,size_147);
    self->len+=size_147;
    self->buf[self->len]=0;
    free(result_144);
    __result_obj__70 = self;
    (mem_146 = come_decrement_ref_count(mem_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__70;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__71;
int size_151;
void* __right_value24 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value25 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__72;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    size_151=strlen(mem)+1;
    if(    self->len+size_151+1+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3064, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj8=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3068, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__72 = self;
    return __result_obj__72;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__73;
int* mem_155;
int size_156;
void* __right_value26 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value27 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__73 = ((void*)0);
        return __result_obj__73;
    }
    mem_155=&value;
    size_156=sizeof(int);
    if(    self->len+size_156+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3091, "char*"));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj9=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_159)), "/usr/local/include/comelang.h", 3095, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        (old_buf_157 = come_decrement_ref_count(old_buf_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_155,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_160;
int size_161;
void* __right_value28 = (void*)0;
char* old_buf_162;
int old_len_163;
int new_size_164;
void* __right_value29 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__75;
    mem_160=&value;
    size_161=sizeof(long);
    if(    self->len+size_161+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_162=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_162,self->buf,self->size);
        old_len_163=self->len;
        new_size_164=(self->size+size_161+1)*2;
        __dec_obj10=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_164)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_162,old_len_163);
        self->buf[old_len_163]=0;
        self->size=new_size_164;
        (old_buf_162 = come_decrement_ref_count(old_buf_162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_160,size_161);
    self->len+=size_161;
    self->buf[self->len]=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__76;
short* mem_165;
int size_166;
void* __right_value30 = (void*)0;
char* old_buf_167;
int old_len_168;
int new_size_169;
void* __right_value31 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__77;
    if(    self==((void*)0)    ) {
        __result_obj__76 = ((void*)0);
        return __result_obj__76;
    }
    mem_165=&value;
    size_166=sizeof(short);
    if(    self->len+size_166+1+1>=self->size    ) {
        disable_timer_interrupts();
        old_buf_167=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3141, "char*"));
        memcpy(old_buf_167,self->buf,self->size);
        old_len_168=self->len;
        new_size_169=(self->size+size_166+1)*2;
        __dec_obj11=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_169)), "/usr/local/include/comelang.h", 3145, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_167,old_len_168);
        self->buf[old_len_168]=0;
        self->size=new_size_169;
        (old_buf_167 = come_decrement_ref_count(old_buf_167, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_165,size_166);
    self->len+=size_166;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__78;
int len_170;
int new_size_171;
void* __right_value32 = (void*)0;
char* __dec_obj12;
int i_172;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    len_170=self->len;
    len_170=(len_170+3)&~3;
    if(    len_170>=self->size    ) {
        new_size_171=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        disable_timer_interrupts();
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_171)), "/usr/local/include/comelang.h", 3169, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_171;
    }
    for(    i_172=self->len    ;    i_172<len_170    ;    i_172++    ){
        self->buf[i_172]=0;
    }
    self->len=len_170;
    __result_obj__79 = self;
    return __result_obj__79;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__80;
struct buffer* __result_obj__81;
    disable_timer_interrupts();
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3199, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__80 = (struct buffer*)come_increment_ref_count(result_173);
        come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__80;
    }
    buffer_append_str(result_173,self);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* buffer_to_string(struct buffer* self){
void* __right_value35 = (void*)0;
char* __result_obj__82;
void* __right_value36 = (void*)0;
char* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value35=__builtin_string(""))));
        (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__82;
    }
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(self->buf))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__83;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__84;
    __result_obj__84 = self->buf;
    return __result_obj__84;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_174;
struct buffer* __result_obj__85;
    disable_timer_interrupts();
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3226, "struct buffer*"))));
    buffer_append(result_174,self,sizeof(char)*len);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_175;
int i_176;
struct buffer* __result_obj__86;
    disable_timer_interrupts();
    result_175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3233, "struct buffer*"))));
    for(    i_176=0    ;    i_176<len    ;    i_176++    ){
        buffer_append(result_175,self[i_176],strlen(self[i_176]));
    }
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_175);
    come_call_finalizer(buffer_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_177;
struct buffer* __result_obj__87;
    disable_timer_interrupts();
    result_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3242, "struct buffer*"))));
    buffer_append(result_177,(char*)self,sizeof(short)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_177);
    come_call_finalizer(buffer_finalize, result_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_178;
struct buffer* __result_obj__88;
    disable_timer_interrupts();
    result_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_178,(char*)self,sizeof(int)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_178);
    come_call_finalizer(buffer_finalize, result_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_179;
struct buffer* __result_obj__89;
    disable_timer_interrupts();
    result_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    buffer_append(result_179,(char*)self,sizeof(long)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_179);
    come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_180;
struct buffer* __result_obj__90;
    disable_timer_interrupts();
    result_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_180,(char*)self,sizeof(float)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_180);
    come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* result_181;
struct buffer* __result_obj__91;
    disable_timer_interrupts();
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    buffer_append(result_181,(char*)self,sizeof(double)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* buffer_printable(struct buffer* self){
int len_182;
void* __right_value51 = (void*)0;
char* result_183;
int n_184;
int i_185;
unsigned char c_186;
char* __result_obj__92;
    len_182=self->len;
    disable_timer_interrupts();
    result_183=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_182*2+1)), "/usr/local/include/comelang.h", 3278, "char*"));
    n_184=0;
    for(    i_185=0    ;    i_185<len_182    ;    i_185++    ){
        c_186=self->buf[i_185];
        if(        (c_186>=0&&c_186<32)||c_186==127        ) {
            result_183[n_184++]=94;
            result_183[n_184++]=c_186+65-1;
        }
        else if(        c_186>127        ) {
            result_183[n_184++]=63;
        }
        else {
            result_183[n_184++]=c_186;
        }
    }
    result_183[n_184]=0;
    __result_obj__92 = (char*)come_increment_ref_count(result_183);
    (result_183 = come_decrement_ref_count(result_183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_187;
struct list$1char$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0    ;    i_187<num_value    ;    i_187++    ){
        list$1char$_push_back(self,values[i_187]);
    }
    __result_obj__94 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_188;
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_189;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_190;
struct list$1char$* __result_obj__93;
    if(    self->len==0    ) {
        litem_188=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1    ) {
        litem_189=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_191;
struct list_item$1char$* prev_it_192;
    it_191=self->head;
    while(    it_191!=((void*)0)    ) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value52 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1char$* __result_obj__95;
    __result_obj__95 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value56=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3319, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
    disable_timer_interrupts();
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_193;
struct list$1char$p* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0    ;    i_193<num_value    ;    i_193++    ){
        list$1char$p_push_back(self,values[i_193]);
    }
    __result_obj__97 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_194;
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_195;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_196;
struct list$1char$p* __result_obj__96;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_197;
struct list_item$1char$p* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$p* __result_obj__98;
    __result_obj__98 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value61=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3324, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
    disable_timer_interrupts();
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_199;
struct list$1short$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0    ;    i_199<num_value    ;    i_199++    ){
        list$1short$_push_back(self,values[i_199]);
    }
    __result_obj__100 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_200;
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_201;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_202;
struct list$1short$* __result_obj__99;
    if(    self->len==0    ) {
        litem_200=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1    ) {
        litem_201=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_203;
struct list_item$1short$* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1short$* __result_obj__101;
    __result_obj__101 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value66=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3329, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
    disable_timer_interrupts();
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_205;
struct list$1int$* __result_obj__103;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0    ;    i_205<num_value    ;    i_205++    ){
        list$1int$_push_back(self,values[i_205]);
    }
    __result_obj__103 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_206;
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_207;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_208;
struct list$1int$* __result_obj__102;
    if(    self->len==0    ) {
        litem_206=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1    ) {
        litem_207=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__102 = self;
    return __result_obj__102;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_209;
struct list_item$1int$* prev_it_210;
    it_209=self->head;
    while(    it_209!=((void*)0)    ) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1int$* __result_obj__104;
    __result_obj__104 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value71=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3334, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
    disable_timer_interrupts();
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_211;
struct list$1long$* __result_obj__106;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0    ;    i_211<num_value    ;    i_211++    ){
        list$1long$_push_back(self,values[i_211]);
    }
    __result_obj__106 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_212;
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_213;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_214;
struct list$1long$* __result_obj__105;
    if(    self->len==0    ) {
        litem_212=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1    ) {
        litem_213=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__105 = self;
    return __result_obj__105;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_215;
struct list_item$1long$* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1long$* __result_obj__107;
    __result_obj__107 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value76=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3339, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
    disable_timer_interrupts();
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_217;
struct list$1float$* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_217=0    ;    i_217<num_value    ;    i_217++    ){
        list$1float$_push_back(self,values[i_217]);
    }
    __result_obj__109 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_218;
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_219;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_220;
struct list$1float$* __result_obj__108;
    if(    self->len==0    ) {
        litem_218=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1    ) {
        litem_219=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result_obj__108 = self;
    return __result_obj__108;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_221;
struct list_item$1float$* prev_it_222;
    it_221=self->head;
    while(    it_221!=((void*)0)    ) {
        prev_it_222=it_221;
        it_221=it_221->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1float$* __result_obj__110;
    __result_obj__110 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value81=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
    disable_timer_interrupts();
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_223;
struct list$1double$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_223=0    ;    i_223<num_value    ;    i_223++    ){
        list$1double$_push_back(self,values[i_223]);
    }
    __result_obj__112 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_224;
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_225;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_226;
struct list$1double$* __result_obj__111;
    if(    self->len==0    ) {
        litem_224=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_224->prev=((void*)0);
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head=litem_224;
    }
    else if(    self->len==1    ) {
        litem_225=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_225->prev=self->head;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head->next=litem_225;
    }
    else {
        litem_226=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_226->prev=self->tail;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail->next=litem_226;
        self->tail=litem_226;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_227;
struct list_item$1double$* prev_it_228;
    it_227=self->head;
    while(    it_227!=((void*)0)    ) {
        prev_it_228=it_227;
        it_227=it_227->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1double$* __result_obj__113;
    __result_obj__113 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value86=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
    disable_timer_interrupts();
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__114;
int len_229;
void* __right_value88 = (void*)0;
char* result_230;
char* __result_obj__115;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_229=strlen(self)+strlen(right);
    disable_timer_interrupts();
    result_230=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_229+1)), "/usr/local/include/comelang.h", 3578, "char*"));
    strncpy(result_230,self,len_229+1);
    strncat(result_230,right,len_229+1);
    __result_obj__115 = (char*)come_increment_ref_count(result_230);
    (result_230 = come_decrement_ref_count(result_230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__115;
}

char* string_operator_add(char* self, char* right){
void* __right_value89 = (void*)0;
char* __result_obj__116;
int len_231;
void* __right_value90 = (void*)0;
char* result_232;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_231=strlen(self)+strlen(right);
    disable_timer_interrupts();
    result_232=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_231+1)), "/usr/local/include/comelang.h", 3593, "char*"));
    strncpy(result_232,self,len_231+1);
    strncat(result_232,right,len_231+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_232);
    (result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__118;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_233;
int i_234;
void* __right_value94 = (void*)0;
char* __result_obj__119;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    disable_timer_interrupts();
    buf_233=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3606, "struct buffer*"))));
    for(    i_234=0    ;    i_234<right    ;    i_234++    ){
        buffer_append_str(buf_233,self);
    }
    __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_233))));
    come_call_finalizer(buffer_finalize, buf_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* string_operator_mult(char* self, int right){
void* __right_value95 = (void*)0;
char* __result_obj__120;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_235;
int i_236;
void* __right_value98 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    disable_timer_interrupts();
    buf_235=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3620, "struct buffer*"))));
    for(    i_236=0    ;    i_236<right    ;    i_236++    ){
        buffer_append_str(buf_235,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value98=buffer_to_string(buf_235))));
    come_call_finalizer(buffer_finalize, buf_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_237;
int i_238;
    result_237=(_Bool)0;
    for(    i_238=0    ;    i_238<len    ;    i_238++    ){
        if(        strncmp(self[i_238],str,strlen(self[i_238]))==0        ) {
            result_237=(_Bool)1;
            break;
        }
    }
    return result_237;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_239;
char* p_240;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_239=0;
    p_240=value;
    while(    *p_240    ) {
        result_239+=(*p_240);
        p_240++;
    }
    return result_239;
}

unsigned int string_get_hash_key(char* value){
int result_241;
char* p_242;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_241=0;
    p_242=value;
    while(    *p_242    ) {
        result_241+=(*p_242);
        p_242++;
    }
    return result_241;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xisalpha(char c){
_Bool result_243;
    result_243=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_243;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_244;
    result_244=(c>=32&&c<=126);
    return result_244;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value99 = (void*)0;
char* __result_obj__122;
int len_245;
void* __right_value100 = (void*)0;
char* result_246;
int i_247;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_245=strlen(str);
    disable_timer_interrupts();
    result_246=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_245+1)), "/usr/local/include/comelang.h", 3888, "char*"));
    for(    i_247=0    ;    i_247<len_245    ;    i_247++    ){
        result_246[i_247]=str[len_245-i_247-1];
    }
    result_246[len_245]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_246);
    (result_246 = come_decrement_ref_count(result_246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__124;
int len_248;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__125;
void* __right_value104 = (void*)0;
char* __result_obj__126;
void* __right_value105 = (void*)0;
char* __result_obj__127;
void* __right_value106 = (void*)0;
char* result_249;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_248=strlen(str);
    if(    head<0    ) {
        head+=len_248;
    }
    if(    tail<0    ) {
        tail+=len_248+1;
    }
    if(    head>tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_248    ) {
        tail=len_248;
    }
    if(    head==tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    tail-head+1<1    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    disable_timer_interrupts();
    result_249=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3934, "char*"));
    memcpy(result_249,str+head,tail-head);
    result_249[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_249);
    (result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__129;
int len_250;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__130;
void* __right_value110 = (void*)0;
char* __result_obj__131;
void* __right_value111 = (void*)0;
char* __result_obj__132;
void* __right_value112 = (void*)0;
char* result_251;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    len_250=strlen(str);
    if(    head<0    ) {
        head+=len_250;
    }
    if(    tail<0    ) {
        tail+=len_250+1;
    }
    if(    head>tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_250    ) {
        tail=len_250;
    }
    if(    head==tail    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    tail-head+1<1    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    disable_timer_interrupts();
    result_251=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3977, "char*"));
    memcpy(result_251,str+head,tail-head);
    result_251[tail-head]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_251);
    (result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value113 = (void*)0;
char* __result_obj__134;
int len_252;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result_obj__135;
void* __right_value116 = (void*)0;
char* __result_obj__136;
void* __right_value117 = (void*)0;
char* __result_obj__137;
void* __right_value118 = (void*)0;
char* result_253;
char* __result_obj__138;
    if(    str==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_252=strlen(str);
    if(    head<0    ) {
        head+=len_252;
    }
    if(    tail<0    ) {
        tail+=len_252+1;
    }
    if(    head>tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value115=charp_reverse(((char*)(__right_value114=charp_substring(str,tail,head)))))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_252    ) {
        tail=len_252;
    }
    if(    head==tail    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    tail-head+1<1    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    disable_timer_interrupts();
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4020, "char*"));
    memcpy(result_253,str+head,tail-head);
    result_253[tail-head]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* xsprintf(char* msg, ...){
void* __right_value119 = (void*)0;
char* __result_obj__139;
va_list args_254;
char* result_255;
int len_256;
void* __right_value120 = (void*)0;
char* __result_obj__140;
void* __right_value121 = (void*)0;
char* result2_257;
char* __result_obj__141;
memset(&args_254, 0, sizeof(va_list));
result_255 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    __builtin_va_start(args_254,msg);
    len_256=vasprintf(&result_255,msg,args_254);
    __builtin_va_end(args_254);
    if(    len_256<0    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    disable_timer_interrupts();
    result2_257=(char*)come_increment_ref_count(__builtin_string(result_255));
    free(result_255);
    __result_obj__141 = (char*)come_increment_ref_count(result2_257);
    (result2_257 = come_decrement_ref_count(result2_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__142;
int len_258;
void* __right_value123 = (void*)0;
char* __result_obj__143;
void* __right_value124 = (void*)0;
char* __result_obj__144;
void* __right_value125 = (void*)0;
char* result_259;
char* __result_obj__145;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_258=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(str))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head+=len_258;
    }
    if(    tail<0    ) {
        tail+=len_258+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail>=len_258    ) {
        tail=len_258;
    }
    disable_timer_interrupts();
    result_259=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_258-(tail-head)+1)), "/usr/local/include/comelang.h", 4082, "char*"));
    memcpy(result_259,str,head);
    memcpy(result_259+head,str+tail,len_258-tail);
    result_259[len_258-(tail-head)]=0;
    __result_obj__145 = (char*)come_increment_ref_count(result_259);
    (result_259 = come_decrement_ref_count(result_259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__146;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__146 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_260;
struct list_item$1char$ph* prev_it_261;
    it_260=self->head;
    while(    it_260!=((void*)0)    ) {
        prev_it_261=it_260;
        it_260=it_260->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_265;
char* __dec_obj13;
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_266;
char* __dec_obj14;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_267;
char* __dec_obj15;
struct list$1char$ph* __result_obj__148;
    if(    self->len==0    ) {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_265->prev=((void*)0);
        litem_265->next=((void*)0);
        __dec_obj13=litem_265->item,
        litem_265->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_265;
        self->head=litem_265;
    }
    else if(    self->len==1    ) {
        litem_266=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_266->prev=self->head;
        litem_266->next=((void*)0);
        __dec_obj14=litem_266->item,
        litem_266->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_266;
        self->head->next=litem_266;
    }
    else {
        litem_267=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_267->prev=self->tail;
        litem_267->next=((void*)0);
        __dec_obj15=litem_267->item,
        litem_267->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_267;
        self->tail=litem_267;
    }
    self->len++;
    __result_obj__148 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__148;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* __result_obj__147;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1char$ph* result_262;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* str_263;
int i_264;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1char$ph* __result_obj__149;
    if(    self==((void*)0)    ) {
        __result_obj__147 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value127=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4095, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__147;
        disable_timer_interrupts();
    }
    disable_timer_interrupts();
    result_262=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4098, "struct list$1char$ph*"))));
    disable_timer_interrupts();
    str_263=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4100, "struct buffer*"))));
    for(    i_264=0    ;    i_264<charp_length(self)    ;    i_264++    ){
        if(        self[i_264]==c        ) {
            disable_timer_interrupts();
            list$1char$ph_push_back(result_262,(char*)come_increment_ref_count(__builtin_string(str_263->buf)));
            buffer_reset(str_263);
        }
        else {
            buffer_append_char(str_263,self[i_264]);
        }
    }
    if(    buffer_length(str_263)!=0    ) {
        disable_timer_interrupts();
        list$1char$ph_push_back(result_262,(char*)come_increment_ref_count(__builtin_string(str_263->buf)));
    }
    __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(result_262);
    come_call_finalizer(list$1char$ph$p_finalize, result_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value137 = (void*)0;
char* __result_obj__150;
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value137=xsprintf(msg,self))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__151;
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_printable(char* str){
int len_268;
void* __right_value139 = (void*)0;
char* result_269;
int n_270;
int i_271;
char c_272;
char* __result_obj__152;
    len_268=charp_length(str);
    disable_timer_interrupts();
    result_269=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_268*2+1)), "/usr/local/include/comelang.h", 4132, "char*"));
    n_270=0;
    for(    i_271=0    ;    i_271<len_268    ;    i_271++    ){
        c_272=str[i_271];
        if(        (c_272>=0&&c_272<32)||c_272==127        ) {
            result_269[n_270++]=94;
            result_269[n_270++]=c_272+65-1;
        }
        else {
            result_269[n_270++]=c_272;
        }
    }
    result_269[n_270]=0;
    __result_obj__152 = (char*)come_increment_ref_count(result_269);
    (result_269 = come_decrement_ref_count(result_269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value140 = (void*)0;
char* __result_obj__153;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct buffer* result_273;
char* p_274;
char* p2_275;
void* __right_value143 = (void*)0;
char* __result_obj__154;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(self))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    disable_timer_interrupts();
    result_273=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4160, "struct buffer*"))));
    p_274=self;
    while(    (_Bool)1    ) {
        p2_275=strstr(p_274,str);
        if(        p2_275==((void*)0)        ) {
            p2_275=p_274;
            while(            *p2_275            ) {
                p2_275++;
            }
            buffer_append(result_273,p_274,p2_275-p_274);
            break;
        }
        buffer_append(result_273,p_274,p2_275-p_274);
        buffer_append_str(result_273,replace);
        p_274=p2_275+strlen(str);
    }
    __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value143=buffer_to_string(result_273))));
    come_call_finalizer(buffer_finalize, result_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* xbasename(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__155;
char* p_276;
void* __right_value145 = (void*)0;
char* __result_obj__156;
void* __right_value146 = (void*)0;
char* __result_obj__157;
void* __right_value147 = (void*)0;
char* __result_obj__158;
    if(    path==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    p_276=path+strlen(path);
    while(    p_276>=path    ) {
        if(        *p_276==47        ) {
            break;
        }
        else {
            p_276--;
        }
    }
    if(    p_276<path    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(path))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(p_276+1))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* xnoextname(char* path){
void* __right_value148 = (void*)0;
char* __result_obj__159;
void* __right_value149 = (void*)0;
char* path2_277;
char* p_278;
void* __right_value150 = (void*)0;
char* __result_obj__160;
void* __right_value151 = (void*)0;
char* __result_obj__161;
void* __right_value152 = (void*)0;
char* __result_obj__162;
    if(    path==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    disable_timer_interrupts();
    path2_277=(char*)come_increment_ref_count(xbasename(path));
    p_278=path2_277+strlen(path2_277);
    while(    p_278>=path2_277    ) {
        if(        *p_278==46        ) {
            break;
        }
        else {
            p_278--;
        }
    }
    if(    p_278<path2_277    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path2_277))));
        (path2_277 = come_decrement_ref_count(path2_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    else {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value151=charp_substring(path2_277,0,p_278-path2_277))));
        (path2_277 = come_decrement_ref_count(path2_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (path2_277 = come_decrement_ref_count(path2_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* xextname(char* path){
void* __right_value153 = (void*)0;
char* __result_obj__163;
char* p_279;
void* __right_value154 = (void*)0;
char* __result_obj__164;
void* __right_value155 = (void*)0;
char* __result_obj__165;
void* __right_value156 = (void*)0;
char* __result_obj__166;
    if(    path==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    p_279=path+strlen(path);
    while(    p_279>=path    ) {
        if(        *p_279==46        ) {
            break;
        }
        else {
            p_279--;
        }
    }
    if(    p_279<path    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(path))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    else {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(p_279+1))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__167;
void* __right_value158 = (void*)0;
char* __result_obj__168;
    if(    self    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    else {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value159 = (void*)0;
char* __result_obj__169;
void* __right_value160 = (void*)0;
char* __result_obj__170;
    if(    self    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("true"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("false"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
}

char* char_to_string(char self){
void* __right_value161 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%c",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* short_to_string(short self){
void* __right_value162 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%d",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* int_to_string(int self){
void* __right_value163 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* long_to_string(long self){
void* __right_value164 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%ld",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value165 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* float_to_string(float self){
void* __right_value166 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%f",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* double_to_string(double self){
void* __right_value167 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%lf",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__178;
void* __right_value169 = (void*)0;
char* __result_obj__179;
    if(    self==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_to_string(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__180;
void* __right_value171 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self){
void* __right_value172 = (void*)0;
char* __result_obj__182;
void* __right_value173 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    puts(self);
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* charp_print(char* self){
void* __right_value174 = (void*)0;
char* __result_obj__184;
void* __right_value175 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    printf("%s",self);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_printf(char* self, ...){
void* __right_value176 = (void*)0;
char* __result_obj__186;
char* msg2_280;
va_list args_281;
void* __right_value177 = (void*)0;
char* __result_obj__187;
msg2_280 = (void*)0;
memset(&args_281, 0, sizeof(va_list));
    if(    self==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    __builtin_va_start(args_281,self);
    vasprintf(&msg2_280,self,args_281);
    __builtin_va_end(args_281);
    printf("%s",msg2_280);
    free(msg2_280);
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(self))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_282;
    for(    i_282=0    ;    i_282<self    ;    i_282++    ){
        block(parent,i_282);
    }
}

