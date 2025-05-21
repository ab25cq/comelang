/// previous struct definition ///
/// struct definition ///
typedef void* any;

typedef char* string;

typedef unsigned long  int uintptr_t;

typedef long intptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long int64_t;

typedef long intmax_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  int uint64_t;

typedef unsigned long  int uintmax_t;

typedef char int_fast8_t;

typedef long int_fast64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long int_least64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  int uint_least64_t;

typedef int int_fast16_t;

typedef int int_fast32_t;

typedef unsigned int uint_fast16_t;

typedef unsigned int uint_fast32_t;

struct anonymous_typeX1
{
    _Atomic int locked;
};

typedef struct anonymous_typeX1 mutex_t;

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

struct cpu
{
    struct proc* proc;
    struct context context;
};

struct cpu gCPU;
struct proc
{
    struct context context;
    struct proc* parent;
    char* stack;
};

struct proc* gProc[128];
extern char _end[];
int gActiveProc=0;
int gNumProc=0;
int gCountTask1=0;
int gCountTask2=0;
extern char last_key;
struct proc* p;
unsigned long  int saved_ra;
unsigned long  int saved_sp;
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
void puts(const char* s);
struct proc* alloc_proc(void (*task)());
void load_context(struct context* anonymous_var_nameX31);
void save_context(struct context* anonymous_var_nameX32);
void reset_watchdog();
void putc(char c);
void yield();
void task1();
void task2();
void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);
void plic_enable(int irq);
int main();
void disable_interrupts();
void enable_interrupts();
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

// body function
void mutex_init(struct anonymous_typeX1* mutex){
    atomic_store(&mutex->locked,0);
}

void mutex_enter_blocking(struct anonymous_typeX1* mutex){
int expected_0;
    while(    1    ) {
        expected_0=0;
        if(        atomic_compare_exchange_weak(&mutex->locked,&expected_0,1)        ) {
            break;
        }
        __asm volatile("nop");
    }
}

void mutex_exit(struct anonymous_typeX1* mutex){
    atomic_store(&mutex->locked,0);
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_1;
struct proc* __result_obj__1;
    result_1=calloc(1,sizeof(struct proc));
    memset(result_1,0,sizeof(struct proc));
    result_1->stack=calloc(1,256);
    result_1->context.sp=(unsigned long  int)(result_1->stack+256);
    result_1->context.ra=(unsigned long  int)task;
    gProc[gNumProc++]=result_1;
    __result_obj__1 = result_1;
    return __result_obj__1;
}

void yield(){
    __asm volatile("mv %0, ra" : "=r"(saved_ra));
    __asm volatile("mv %0, sp" : "=r"(saved_sp));
    p=gProc[gActiveProc];
    save_context(&p->context);
    p->context.ra=saved_ra;
    p->context.sp=saved_sp+16;
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    if(    last_key    ) {
        putc(last_key);
        last_key=0;
    }
    reset_watchdog();
    p=gProc[gActiveProc];
    load_context(&p->context);
}

void task1(){
void* __right_value0 = (void*)0;
    while(    1    ) {
        puts("1\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        ((char*)(__right_value0=charp_puts("ABC")));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        gCountTask1++;
        yield();
    }
}

void task2(){
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
char* a_2;
    while(    1    ) {
        puts("2\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        ((char*)(__right_value1=charp_puts("ABC")));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        {
            a_2=(char*)come_increment_ref_count(xsprintf("123"));
            puts(a_2);
            (a_2 = come_decrement_ref_count(a_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        gCountTask2++;
        yield();
    }
}

int main(){
struct proc* p_3;
    come_heap_init(0, 0, 0);
    trap_init();
    plic_init();
    plic_enable(10);
    uart_init();
    puts_direct("[1A]\n");
    alloc_proc(task1);
    alloc_proc(task2);
    p_3=gProc[gActiveProc];
    load_context(&p_3->context);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void disable_interrupts(){
unsigned long  int mstatus_4;
memset(&mstatus_4, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_4));
    mstatus_4&=~(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_4));
}

void enable_interrupts(){
unsigned long  int mstatus_5;
memset(&mstatus_5, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_5));
    mstatus_5|=(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_5));
}

void* sbrk(long incr){
void* __result_obj__2;
void* prev_6;
void* __result_obj__3;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    prev_6=heap_end;
    heap_end+=incr;
    __result_obj__3 = prev_6;
    return __result_obj__3;
}

void* malloc(unsigned long  int size){
void* __result_obj__4;
struct mem_block* current_7;
struct mem_block* prev_8;
void* __result_obj__5;
struct mem_block* new_mem_9;
void* __result_obj__6;
void* __result_obj__7;
    if(    size==0    ) {
        __result_obj__4 = ((void*)0);
        return __result_obj__4;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_7=free_list;
    prev_8=((void*)0);
    while(    current_7!=((void*)0)    ) {
        if(        current_7->size>=size        ) {
            if(            prev_8==((void*)0)            ) {
                free_list=current_7->next;
            }
            else {
                prev_8->next=current_7->next;
            }
            __result_obj__5 = (void*)(current_7+1);
            return __result_obj__5;
        }
        prev_8=current_7;
        current_7=current_7->next;
    }
    new_mem_9=(struct mem_block*)sbrk(size);
    if(    new_mem_9==(void*)-1    ) {
        __result_obj__6 = ((void*)0);
        return __result_obj__6;
    }
    new_mem_9->size=size;
    new_mem_9->next=((void*)0);
    __result_obj__7 = (void*)(new_mem_9+1);
    return __result_obj__7;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_10;
void* __result_obj__8;
void* ptr_11;
void* __result_obj__9;
    total_size_10=nmemb*size;
    if(    total_size_10==0    ) {
        __result_obj__8 = ((void*)0);
        return __result_obj__8;
    }
    ptr_11=malloc(total_size_10);
    if(    ptr_11!=((void*)0)    ) {
        memset(ptr_11,0,total_size_10);
    }
    __result_obj__9 = ptr_11;
    return __result_obj__9;
}

void free(void* ptr){
struct mem_block* block_12;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_12=(struct mem_block*)ptr-1;
    block_12->next=free_list;
    free_list=block_12;
}

char* strdup(const char* s){
unsigned long  int len_13;
char* p_14;
char* __result_obj__10;
    len_13=strlen(s)+1;
    p_14=malloc(len_13);
    if(    p_14    ) {
        memcpy(p_14,s,len_13);
    }
    __result_obj__10 = p_14;
    return __result_obj__10;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__11;
char* __result_obj__12;
char* __result_obj__13;
    if(    !*needle    ) {
        __result_obj__11 = (char*)haystack;
        return __result_obj__11;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_15=haystack;
        const char* n_16=needle;
        while(        *h_15&&*n_16&&(*h_15==*n_16)        ) {
            h_15++;
            n_16++;
        }
        if(        !*n_16        ) {
            __result_obj__12 = (char*)haystack;
            return __result_obj__12;
        }
    }
    __result_obj__13 = ((void*)0);
    return __result_obj__13;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_17;
int i_18;
void* __result_obj__14;
    cdst_17=(char*)dst;
    for(    i_18=0    ;    i_18<n    ;    i_18++    ){
        cdst_17[i_18]=c;
    }
    __result_obj__14 = dst;
    return __result_obj__14;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_19;
const unsigned char* s2_20;
memset(&s1_19, 0, sizeof(const unsigned char*));
memset(&s2_20, 0, sizeof(const unsigned char*));
    s1_19=v1;
    s2_20=v2;
    while(    n-->0    ) {
        if(        *s1_19!=*s2_20        ) {
            return *s1_19-*s2_20;
        }
        s1_19++,s2_20++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_21;
char* d_22;
void* __result_obj__15;
void* __result_obj__16;
s_21 = (void*)0;
d_22 = (void*)0;
    if(    n==0    ) {
        __result_obj__15 = dst;
        return __result_obj__15;
    }
    s_21=src;
    d_22=dst;
    if(    s_21<d_22&&s_21+n>d_22    ) {
        s_21+=n;
        d_22+=n;
        while(        n-->0        ) {
            *--d_22=*--s_21;
        }
    }
    else {
        while(        n-->0        ) {
            *d_22++=*s_21++;
        }
    }
    __result_obj__16 = dst;
    return __result_obj__16;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__17;
    __result_obj__17 = memmove(dst,src,n);
    return __result_obj__17;
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
char* os_23;
char* __result_obj__18;
os_23 = (void*)0;
    os_23=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__18 = os_23;
    return __result_obj__18;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_24;
char* __result_obj__19;
char* __result_obj__20;
os_24 = (void*)0;
    os_24=s;
    if(    n<=0    ) {
        __result_obj__19 = os_24;
        return __result_obj__19;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__20 = os_24;
    return __result_obj__20;
}

int strlen(const char* s){
int n_25;
memset(&n_25, 0, sizeof(int));
    for(    n_25=0    ;    s[n_25]    ;    n_25++    ){
        ;
    }
    return n_25;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_26;
char* __result_obj__21;
    d_26=dest;
    while(    *d_26    ) {
        d_26++;
    }
    while(    n--&&*src    ) {
        *d_26++=*src++;
    }
    *d_26=0;
    __result_obj__21 = dest;
    return __result_obj__21;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_27;
char* __result_obj__22;
int digit_31;
char* __result_obj__23;
    p_27=buf;
    char tmp_28[32];
    memset(&tmp_28, 0, sizeof(char)    *(32)    );
    int i_29=0;
    int negative_30=0;
    if(    base<2||base>16    ) {
        *p_27=0;
        __result_obj__22 = p_27;
        return __result_obj__22;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_30=1;
        val_=-val_;
    }
    do {
        digit_31=val_%base;
        tmp_28[i_29++]=(((digit_31<10))?(48+digit_31):(97+digit_31-10));
        val_/=base;
    } while(    val_    );
    if(    negative_30    ) {
        *p_27++=45;
    }
    while(    i_29--    ) {
        *p_27++=tmp_28[i_29];
    }
    *p_27=0;
    __result_obj__23 = buf;
    return __result_obj__23;
}

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_32;
char* p_33;
const char* s_34;
unsigned long  int remaining_36;
int __result_obj__24;
int __result_obj__25;
memset(&ap_32, 0, sizeof(va_list));
s_34 = (void*)0;
    __builtin_va_start(ap_32,fmt);
    p_33=out;
    char buf_35[32];
    memset(&buf_35, 0, sizeof(char)    *(32)    );
    remaining_36=out_size;
    if(    remaining_36==0    ) {
        __builtin_va_end(ap_32);
        __result_obj__24 = 0;
        come_call_finalizer(va_list_finalize, (&ap_32), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__24;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_36>1            ) {
                *p_33++=*fmt;
                remaining_36--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_34=__builtin_va_arg(ap_32,const char*);
            while(            *s_34&&remaining_36>1            ) {
                *p_33++=*s_34++;
                remaining_36--;
            }
            break;
            case 100:
            itoa(buf_35,__builtin_va_arg(ap_32,int),10,0);
            s_34=buf_35;
            while(            *s_34&&remaining_36>1            ) {
                *p_33++=*s_34++;
                remaining_36--;
            }
            break;
            case 120:
            itoa(buf_35,(unsigned int)__builtin_va_arg(ap_32,int),16,1);
            s_34=buf_35;
            while(            *s_34&&remaining_36>1            ) {
                *p_33++=*s_34++;
                remaining_36--;
            }
            break;
            case 99:
            if(            remaining_36>1            ) {
                *p_33++=(char)__builtin_va_arg(ap_32,int);
                remaining_36--;
            }
            break;
            case 112:
            s_34="0x";
            while(            *s_34&&remaining_36>1            ) {
                *p_33++=*s_34++;
                remaining_36--;
            }
            itoa(buf_35,(long)__builtin_va_arg(ap_32,void*),16,1);
            s_34=buf_35;
            while(            *s_34&&remaining_36>1            ) {
                *p_33++=*s_34++;
                remaining_36--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_35,__builtin_va_arg(ap_32,long),10,1);
                s_34=buf_35;
                while(                *s_34&&remaining_36>1                ) {
                    *p_33++=*s_34++;
                    remaining_36--;
                }
            }
            break;
            default:
            if(            remaining_36>1            ) {
                *p_33++=37;
                remaining_36--;
                if(                remaining_36>1                ) {
                    *p_33++=*fmt;
                    remaining_36--;
                }
            }
            break;
        }
    }
    *p_33=0;
    __builtin_va_end(ap_32);
    __result_obj__25 = p_33-out;
    come_call_finalizer(va_list_finalize, (&ap_32), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__25;
}

int vasprintf(char** result, const char* fmt, ...){
va_list ap_37;
unsigned long  int out_size_39;
char* p_40;
const char* s_41;
unsigned long  int remaining_43;
int __result_obj__26;
int __result_obj__27;
memset(&ap_37, 0, sizeof(va_list));
s_41 = (void*)0;
    __builtin_va_start(ap_37,fmt);
    char out_38[256];
    memset(&out_38, 0, sizeof(char)    *(256)    );
    out_size_39=256;
    p_40=out_38;
    char buf_42[32];
    memset(&buf_42, 0, sizeof(char)    *(32)    );
    remaining_43=out_size_39;
    if(    remaining_43==0    ) {
        __builtin_va_end(ap_37);
        __result_obj__26 = 0;
        come_call_finalizer(va_list_finalize, (&ap_37), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__26;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_43>1            ) {
                *p_40++=*fmt;
                remaining_43--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_41=__builtin_va_arg(ap_37,const char*);
            while(            *s_41&&remaining_43>1            ) {
                *p_40++=*s_41++;
                remaining_43--;
            }
            break;
            case 100:
            itoa(buf_42,__builtin_va_arg(ap_37,int),10,0);
            s_41=buf_42;
            while(            *s_41&&remaining_43>1            ) {
                *p_40++=*s_41++;
                remaining_43--;
            }
            break;
            case 120:
            itoa(buf_42,(unsigned int)__builtin_va_arg(ap_37,int),16,1);
            s_41=buf_42;
            while(            *s_41&&remaining_43>1            ) {
                *p_40++=*s_41++;
                remaining_43--;
            }
            break;
            case 99:
            if(            remaining_43>1            ) {
                *p_40++=(char)__builtin_va_arg(ap_37,int);
                remaining_43--;
            }
            break;
            case 112:
            s_41="0x";
            while(            *s_41&&remaining_43>1            ) {
                *p_40++=*s_41++;
                remaining_43--;
            }
            itoa(buf_42,(long)__builtin_va_arg(ap_37,void*),16,1);
            s_41=buf_42;
            while(            *s_41&&remaining_43>1            ) {
                *p_40++=*s_41++;
                remaining_43--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_42,__builtin_va_arg(ap_37,long),10,1);
                s_41=buf_42;
                while(                *s_41&&remaining_43>1                ) {
                    *p_40++=*s_41++;
                    remaining_43--;
                }
            }
            break;
            default:
            if(            remaining_43>1            ) {
                *p_40++=37;
                remaining_43--;
                if(                remaining_43>1                ) {
                    *p_40++=*fmt;
                    remaining_43--;
                }
            }
            break;
        }
    }
    *p_40=0;
    __builtin_va_end(ap_37);
    *result=malloc(sizeof(char)*(p_40-out_38+1));
    strncpy(*result,out_38,p_40-out_38);
    __result_obj__27 = p_40-out_38;
    come_call_finalizer(va_list_finalize, (&ap_37), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__27;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_44;
char* p_45;
const char* s_46;
unsigned long  int remaining_48;
int __result_obj__28;
int __result_obj__29;
memset(&ap_44, 0, sizeof(va_list));
s_46 = (void*)0;
    __builtin_va_start(ap_44,fmt);
    p_45=out;
    char buf_47[32];
    memset(&buf_47, 0, sizeof(char)    *(32)    );
    remaining_48=out_size;
    if(    remaining_48==0    ) {
        __builtin_va_end(ap_44);
        __result_obj__28 = 0;
        come_call_finalizer(va_list_finalize, (&ap_44), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__28;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_48>1            ) {
                *p_45++=*fmt;
                remaining_48--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_46=__builtin_va_arg(ap_44,const char*);
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 100:
            itoa(buf_47,__builtin_va_arg(ap_44,int),10,0);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 120:
            itoa(buf_47,(unsigned int)__builtin_va_arg(ap_44,int),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 99:
            if(            remaining_48>1            ) {
                *p_45++=(char)__builtin_va_arg(ap_44,int);
                remaining_48--;
            }
            break;
            case 112:
            s_46="0x";
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            itoa(buf_47,(long)__builtin_va_arg(ap_44,void*),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_47,__builtin_va_arg(ap_44,long),10,1);
                s_46=buf_47;
                while(                *s_46&&remaining_48>1                ) {
                    *p_45++=*s_46++;
                    remaining_48--;
                }
            }
            break;
            default:
            if(            remaining_48>1            ) {
                *p_45++=37;
                remaining_48--;
                if(                remaining_48>1                ) {
                    *p_45++=*fmt;
                    remaining_48--;
                }
            }
            break;
        }
    }
    *p_45=0;
    __builtin_va_end(ap_44);
    __result_obj__29 = p_45-out;
    come_call_finalizer(va_list_finalize, (&ap_44), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__29;
}

void printint(long num, int base, int is_signed){
int i_50;
unsigned long  int n_51;
memset(&n_51, 0, sizeof(unsigned long  int));
    char buf_49[32];
    memset(&buf_49, 0, sizeof(char)    *(32)    );
    i_50=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_51=-num;
    }
    else {
        n_51=num;
    }
    do {
        buf_49[i_50++]="0123456789abcdef"[n_51%base];
        n_51/=base;
    } while(    n_51>0    );
    while(    i_50--    ) {
        putchar(buf_49[i_50]);
    }
}

int printf(const char* fmt, ...){
va_list ap_52;
char* p_53;
int val__54;
unsigned int val__55;
unsigned long  int val__56;
char c_58;
int __result_obj__30;
memset(&ap_52, 0, sizeof(va_list));
p_53 = (void*)0;
    __builtin_va_start(ap_52,fmt);
    for(    p_53=fmt    ;    *p_53    ;    p_53++    ){
        if(        *p_53!=37        ) {
            putchar(*p_53);
            continue;
        }
        p_53++;
        switch (        *p_53) {
            case 100:
            {
                val__54=__builtin_va_arg(ap_52,int);
                printint(val__54,10,1);
                break;
            }
            case 120:
            {
                val__55=__builtin_va_arg(ap_52,unsigned int);
                printint(val__55,16,0);
                break;
            }
            case 112:
            {
                val__56=(unsigned long  int)__builtin_va_arg(ap_52,void*);
                putchar(48);
                putchar(120);
                printint(val__56,16,0);
                break;
            }
            case 115:
            {
                const char* s_57=__builtin_va_arg(ap_52,const char*);
                if(                !s_57                ) {
                    s_57="(null)";
                }
                while(                *s_57                ) {
                    putchar(*s_57++);
                }
                break;
            }
            case 99:
            {
                c_58=(char)__builtin_va_arg(ap_52,int);
                putchar(c_58);
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
                putchar(*p_53);
                break;
            }
        }
    }
    __builtin_va_end(ap_52);
    __result_obj__30 = 0;
    come_call_finalizer(va_list_finalize, (&ap_52), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

void perror(char* str){
    puts(str);
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value3 = (void*)0;
char* result_59;
char* __result_obj__31;
    result_59=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__31 = (char*)come_increment_ref_count(result_59);
    (result_59 = come_decrement_ref_count(result_59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__31 = come_decrement_ref_count(__result_obj__31, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__31;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_60;
void* __result_obj__32;
    result_60=come_calloc(count,size,sname,sline,class_name);
    __result_obj__32 = result_60;
    return __result_obj__32;
}

void come_free_v2(void* mem){
    come_free(mem);
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
struct buffer* buf_61;
int i_62;
void* __right_value6 = (void*)0;
    buf_61=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_61,"%s %d\n",sname,sline);
    for(    i_62=gNumComeStackFrame-2    ;    i_62>=0    ;    i_62--    ){
        buffer_append_format(buf_61,"%s %d #%d\n",gComeStackFrameSName[i_62],gComeStackFrameSLine[i_62],gComeStackFrameID[i_62]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value6=buffer_to_string(buf_61))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_63;
    for(    i_63=gNumComeStackFrame-1    ;    i_63>=0    ;    i_63--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_63],gComeStackFrameSLine[i_63],gComeStackFrameID[i_63]);
    }
}

char* come_get_stackframe(){
void* __right_value7 = (void*)0;
char* __result_obj__33;
    __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(gComeStackFrameBuffer))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__33;
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
int i_64;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_64=0    ;    i_64<gHeapPages.mSizePages    ;    i_64++    ){
        gHeapPages.mPages[i_64]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_65;
int n_66;
_Bool flag_67;
int i_68;
struct sMemHeaderTiny* it_69;
int n_70;
int i_71;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_65=gAllocMem;
        n_66=0;
        while(        it_65        ) {
            n_66++;
            flag_67=(_Bool)0;
            printf("#%d ",n_66);
            if(            it_65->class_name            ) {
                printf("%p (%s): ",(char*)it_65+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_65->class_name);
            }
            for(            i_68=0            ;            i_68<16            ;            i_68++            ){
                if(                it_65->sname[i_68]                ) {
                    printf("%s %d #%d, ",it_65->sname[i_68],it_65->sline[i_68],it_65->id[i_68]);
                    flag_67=(_Bool)1;
                }
            }
            if(            flag_67            ) {
                puts("");
            }
            it_65=it_65->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_66,gNumAlloc,gNumFree);
    }
    else {
        it_69=(struct sMemHeaderTiny*)gAllocMem;
        n_70=0;
        while(        it_69        ) {
            n_70++;
            if(            it_69->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_70,(char*)it_69+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_69->class_name,it_69->sname,it_69->sline);
            }
            it_69=it_69->next;
        }
        if(        n_70>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_70,gNumAlloc,gNumFree);
        }
    }
    for(    i_71=0    ;    i_71<gHeapPages.mSizePages    ;    i_71++    ){
        free(gHeapPages.mPages[i_71]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_72;
void* __result_obj__34;
    result_72=((void*)0);
    size=(size+7&~7);
    result_72=calloc(1,size);
    __result_obj__34 = result_72;
    return __result_obj__34;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_73;
struct sMemHeader* prev_it_74;
struct sMemHeader* next_it_75;
unsigned long  int size_76;
struct sMemHeaderTiny* it_77;
struct sMemHeaderTiny* prev_it_78;
struct sMemHeaderTiny* next_it_79;
unsigned long  int size_80;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_73=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_73->allocated!=177783            ) {
                return;
            }
            it_73->allocated=0;
            prev_it_74=it_73->prev;
            next_it_75=it_73->next;
            if(            gAllocMem==it_73            ) {
                gAllocMem=next_it_75;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_74                ) {
                    prev_it_74->next=next_it_75;
                }
                if(                next_it_75                ) {
                    next_it_75->prev=prev_it_74;
                }
            }
            size_76=it_73->size;
            free(it_73);
            gNumFree++;
        }
        else {
            it_77=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_77->allocated!=177783            ) {
                return;
            }
            it_77->allocated=0;
            prev_it_78=it_77->prev;
            next_it_79=it_77->next;
            if(            gAllocMem==it_77            ) {
                gAllocMem=(struct sMemHeader*)next_it_79;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_78                ) {
                    prev_it_78->next=next_it_79;
                }
                if(                next_it_79                ) {
                    next_it_79->prev=prev_it_78;
                }
            }
            size_80=it_77->size;
            free(it_77);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_81;
struct sMemHeader* it_82;
int i_83;
int i_84;
void* __result_obj__35;
void* result_85;
struct sMemHeaderTiny* it_86;
void* __result_obj__36;
memset(&i_83, 0, sizeof(int));
memset(&i_84, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_81=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_82=result_81;
        it_82->allocated=177783;
        it_82->size=size+sizeof(struct sMemHeader);
        it_82->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_83=0            ;            i_83<gNumComeStackFrame            ;            i_83++            ){
                it_82->sname[i_83]=gComeStackFrameSName[i_83];
                it_82->sline[i_83]=gComeStackFrameSLine[i_83];
                it_82->id[i_83]=gComeStackFrameID[i_83];
            }
        }
        else {
            for(            i_84=0            ;            i_84<16            ;            i_84++            ){
                it_82->sname[i_84]=gComeStackFrameSName[gNumComeStackFrame-1-i_84];
                it_82->sline[i_84]=gComeStackFrameSLine[gNumComeStackFrame-1-i_84];
                it_82->id[i_84]=gComeStackFrameID[gNumComeStackFrame-1-i_84];
            }
        }
        come_pop_stackframe_v2();
        it_82->next=gAllocMem;
        it_82->prev=((void*)0);
        it_82->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_82;
        }
        gAllocMem=it_82;
        gNumAlloc++;
        __result_obj__35 = (char*)result_81+sizeof(struct sMemHeader);
        return __result_obj__35;
    }
    else {
        result_85=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_86=result_85;
        it_86->allocated=177783;
        it_86->class_name=class_name;
        it_86->sname=sname;
        it_86->sline=sline;
        it_86->size=size+sizeof(struct sMemHeaderTiny);
        it_86->free_next=((void*)0);
        it_86->next=(struct sMemHeaderTiny*)gAllocMem;
        it_86->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_86;
        }
        gAllocMem=(struct sMemHeader*)it_86;
        gNumAlloc++;
        __result_obj__36 = (char*)result_85+sizeof(struct sMemHeaderTiny);
        return __result_obj__36;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_87;
char* __result_obj__37;
struct sMemHeaderTiny* it_88;
char* __result_obj__38;
    if(    gComeDebugLib    ) {
        it_87=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_87->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_87);
            exit(2);
        }
        __result_obj__37 = it_87->class_name;
        return __result_obj__37;
    }
    else {
        it_88=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_88->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_88);
            exit(2);
        }
        __result_obj__38 = it_88->class_name;
        return __result_obj__38;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_89;
int i_90;
struct sMemHeaderTiny* it_91;
    if(    gComeDebugLib    ) {
        it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_89->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_89->class_name        ) {
            printf("(%s): ",it_89->class_name);
        }
        for(        i_90=0        ;        i_90<16        ;        i_90++        ){
            if(            it_89->sname[i_90]            ) {
                printf("%s %d #%d, ",it_89->sname[i_90],it_89->sline[i_90],it_89->id[i_90]);
            }
        }
        puts("");
    }
    else {
        it_91=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_91->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_91->class_name,it_91->sname,it_91->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_92;
unsigned long  int* ref_count_93;
unsigned long  int* size2_94;
void* __result_obj__39;
    mem_92=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_93=(unsigned long  int*)mem_92;
    *ref_count_93=0;
    size2_94=(unsigned long  int*)(mem_92+sizeof(unsigned long  int));
    *size2_94=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__39 = mem_92+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__39;
}

void come_free(void* mem){
unsigned long  int* ref_count_95;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_95=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_95);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__40;
char* mem_96;
unsigned long  int* size_p_97;
unsigned long  int size_98;
void* result_99;
void* __result_obj__41;
    if(    !block    ) {
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    mem_96=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_97=(unsigned long  int*)(mem_96+sizeof(unsigned long  int));
    size_98=*size_p_97-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_99=come_calloc_v2(1,size_98,sname,sline,class_name);
    memcpy(result_99,block,size_98);
    __result_obj__41 = result_99;
    return __result_obj__41;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__42;
unsigned long  int* ref_count_100;
void* __result_obj__43;
    if(    mem==((void*)0)    ) {
        __result_obj__42 = mem;
        return __result_obj__42;
    }
    ref_count_100=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_100)++;
    __result_obj__43 = mem;
    return __result_obj__43;
}

void* come_print_ref_count(void* mem){
void* __result_obj__44;
unsigned long  int* ref_count_101;
void* __result_obj__45;
    if(    mem==((void*)0)    ) {
        __result_obj__44 = mem;
        return __result_obj__44;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_101);
    __result_obj__45 = mem;
    return __result_obj__45;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_102;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_102=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_102;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__46;
void* __result_obj__47;
unsigned long  int* ref_count_103;
unsigned long  int count_104;
void (*finalizer_105)(void*);
void* __result_obj__48;
void* __result_obj__49;
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__46 = mem;
            return __result_obj__46;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__47 = ((void*)0);
        return __result_obj__47;
    }
    ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_103)--;
    }
    count_104=*ref_count_103;
    if(    !no_free&&count_104<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_105=protocol_fun;
            finalizer_105(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__48 = ((void*)0);
        return __result_obj__48;
    }
    __result_obj__49 = mem;
    return __result_obj__49;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_106)(void*);
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
unsigned long  int* ref_count_109;
unsigned long  int count_110;
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
void (*finalizer_113)(void*);
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
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
                finalizer_106=protocol_fun;
                finalizer_106(protocol_obj);
            }
            finalizer_107=fun;
            finalizer_107(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_108=protocol_fun;
                finalizer_108(protocol_obj);
            }
        }
    }
    else {
        ref_count_109=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_109)--;
        }
        count_110=*ref_count_109;
        if(        !no_free&&count_110<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_111=protocol_fun;
                        finalizer_111(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_112=fun;
                        finalizer_112(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_113=protocol_fun;
                        finalizer_113(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__50;
int len_114;
void* __right_value8 = (void*)0;
char* result_115;
char* __result_obj__51;
    if(    str==((void*)0)    ) {
        __result_obj__50 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__50;
    }
    len_114=strlen(str)+1;
    result_115=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_114)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_115,str,len_114);
    __result_obj__51 = (char*)come_increment_ref_count(result_115);
    (result_115 = come_decrement_ref_count(result_115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__51;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value9 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__52;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__52 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value10 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__53;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__53 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__54;
void* __right_value11 = (void*)0;
struct buffer* result_116;
void* __right_value12 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__54;
    }
    result_116=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_116->size=self->size;
    __dec_obj3=result_116->buf,
    result_116->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_116->len=self->len;
    memcpy(result_116->buf,self->buf,self->len);
    __result_obj__55 = (struct buffer*)come_increment_ref_count(result_116);
    come_call_finalizer(buffer_finalize, result_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
_Bool __result_obj__56;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__56 = string_equals(((char*)(__right_value13=buffer_to_string(left))),((char*)(__right_value14=buffer_to_string(right))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__56;
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
struct buffer* __result_obj__57;
void* __right_value15 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__58;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_117=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_117,self->buf,self->size);
        old_len_118=self->len;
        new_size_119=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_119)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        (old_buf_117 = come_decrement_ref_count(old_buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__59;
void* __right_value17 = (void*)0;
char* old_buf_120;
int old_len_121;
int new_size_122;
void* __right_value18 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_120=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_121=self->len;
        new_size_122=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_122)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_120,old_len_121);
        self->buf[old_len_121]=0;
        self->size=new_size_122;
        (old_buf_120 = come_decrement_ref_count(old_buf_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__61;
int size_123;
void* __right_value19 = (void*)0;
char* old_buf_124;
int old_len_125;
int new_size_126;
void* __right_value20 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    size_123=strlen(mem);
    if(    self->len+size_123+1+1>=self->size    ) {
        old_buf_124=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_124,self->buf,self->size);
        old_len_125=self->len;
        new_size_126=(self->size+size_123+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_126)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_124,old_len_125);
        self->buf[old_len_125]=0;
        self->size=new_size_126;
        (old_buf_124 = come_decrement_ref_count(old_buf_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_123);
    self->len+=size_123;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__63;
va_list args_127;
char* result_128;
int len_129;
struct buffer* __result_obj__64;
void* __right_value21 = (void*)0;
char* mem_130;
int size_131;
void* __right_value22 = (void*)0;
char* old_buf_132;
int old_len_133;
int new_size_134;
void* __right_value23 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__65;
result_128 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__63 = self;
        return __result_obj__63;
    }
    __builtin_va_start(args_127,msg);
    len_129=vasprintf(&result_128,msg,args_127);
    __builtin_va_end(args_127);
    if(    len_129<0    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    mem_130=(char*)come_increment_ref_count(__builtin_string(result_128));
    size_131=strlen(mem_130);
    if(    self->len+size_131+1+1>=self->size    ) {
        old_buf_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3038, "char*"));
        memcpy(old_buf_132,self->buf,self->size);
        old_len_133=self->len;
        new_size_134=(self->size+size_131+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_134)), "/usr/local/include/comelang.h", 3042, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_132,old_len_133);
        self->buf[old_len_133]=0;
        self->size=new_size_134;
        (old_buf_132 = come_decrement_ref_count(old_buf_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_130,size_131);
    self->len+=size_131;
    self->buf[self->len]=0;
    free(result_128);
    __result_obj__65 = self;
    (mem_130 = come_decrement_ref_count(mem_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__65;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__66;
int size_135;
void* __right_value24 = (void*)0;
char* old_buf_136;
int old_len_137;
int new_size_138;
void* __right_value25 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__67;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__66 = self;
        return __result_obj__66;
    }
    size_135=strlen(mem)+1;
    if(    self->len+size_135+1+1+1>=self->size    ) {
        old_buf_136=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3064, "char*"));
        memcpy(old_buf_136,self->buf,self->size);
        old_len_137=self->len;
        new_size_138=(self->size+size_135+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_138)), "/usr/local/include/comelang.h", 3068, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_136,old_len_137);
        self->buf[old_len_137]=0;
        self->size=new_size_138;
        (old_buf_136 = come_decrement_ref_count(old_buf_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_135);
    self->len+=size_135;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__68;
int* mem_139;
int size_140;
void* __right_value26 = (void*)0;
char* old_buf_141;
int old_len_142;
int new_size_143;
void* __right_value27 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    mem_139=&value;
    size_140=sizeof(int);
    if(    self->len+size_140+1+1>=self->size    ) {
        old_buf_141=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3091, "char*"));
        memcpy(old_buf_141,self->buf,self->size);
        old_len_142=self->len;
        new_size_143=(self->size+size_140+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_143)), "/usr/local/include/comelang.h", 3095, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_141,old_len_142);
        self->buf[old_len_142]=0;
        self->size=new_size_143;
        (old_buf_141 = come_decrement_ref_count(old_buf_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_139,size_140);
    self->len+=size_140;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_144;
int size_145;
void* __right_value28 = (void*)0;
char* old_buf_146;
int old_len_147;
int new_size_148;
void* __right_value29 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__70;
    mem_144=&value;
    size_145=sizeof(long);
    if(    self->len+size_145+1+1>=self->size    ) {
        old_buf_146=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_148)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
        (old_buf_146 = come_decrement_ref_count(old_buf_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_144,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__71;
short* mem_149;
int size_150;
void* __right_value30 = (void*)0;
char* old_buf_151;
int old_len_152;
int new_size_153;
void* __right_value31 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    mem_149=&value;
    size_150=sizeof(short);
    if(    self->len+size_150+1+1>=self->size    ) {
        old_buf_151=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3141, "char*"));
        memcpy(old_buf_151,self->buf,self->size);
        old_len_152=self->len;
        new_size_153=(self->size+size_150+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_153)), "/usr/local/include/comelang.h", 3145, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_151,old_len_152);
        self->buf[old_len_152]=0;
        self->size=new_size_153;
        (old_buf_151 = come_decrement_ref_count(old_buf_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_149,size_150);
    self->len+=size_150;
    self->buf[self->len]=0;
    __result_obj__72 = self;
    return __result_obj__72;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__73;
int len_154;
int new_size_155;
void* __right_value32 = (void*)0;
char* __dec_obj12;
int i_156;
struct buffer* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__73 = ((void*)0);
        return __result_obj__73;
    }
    len_154=self->len;
    len_154=(len_154+3)&~3;
    if(    len_154>=self->size    ) {
        new_size_155=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_155)), "/usr/local/include/comelang.h", 3169, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_155;
    }
    for(    i_156=self->len    ;    i_156<len_154    ;    i_156++    ){
        self->buf[i_156]=0;
    }
    self->len=len_154;
    __result_obj__74 = self;
    return __result_obj__74;
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
struct buffer* result_157;
struct buffer* __result_obj__75;
struct buffer* __result_obj__76;
    result_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3199, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__75 = (struct buffer*)come_increment_ref_count(result_157);
        come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__75;
    }
    buffer_append_str(result_157,self);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

char* buffer_to_string(struct buffer* self){
void* __right_value35 = (void*)0;
char* __result_obj__77;
void* __right_value36 = (void*)0;
char* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (char*)come_increment_ref_count(((char*)(__right_value35=__builtin_string(""))));
        (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__77 = come_decrement_ref_count(__result_obj__77, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__77;
    }
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(self->buf))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__79;
    __result_obj__79 = self->buf;
    return __result_obj__79;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_158;
struct buffer* __result_obj__80;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3226, "struct buffer*"))));
    buffer_append(result_158,self,sizeof(char)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_159;
int i_160;
struct buffer* __result_obj__81;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3233, "struct buffer*"))));
    for(    i_160=0    ;    i_160<len    ;    i_160++    ){
        buffer_append(result_159,self[i_160],strlen(self[i_160]));
    }
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_159);
    come_call_finalizer(buffer_finalize, result_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__82;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3242, "struct buffer*"))));
    buffer_append(result_161,(char*)self,sizeof(short)*len);
    __result_obj__82 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__83;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(int)*len);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__84;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    buffer_append(result_163,(char*)self,sizeof(long)*len);
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__85;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(float)*len);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__86;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    buffer_append(result_165,(char*)self,sizeof(double)*len);
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

char* buffer_printable(struct buffer* self){
int len_166;
void* __right_value51 = (void*)0;
char* result_167;
int n_168;
int i_169;
unsigned char c_170;
char* __result_obj__87;
    len_166=self->len;
    result_167=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_166*2+1)), "/usr/local/include/comelang.h", 3278, "char*"));
    n_168=0;
    for(    i_169=0    ;    i_169<len_166    ;    i_169++    ){
        c_170=self->buf[i_169];
        if(        (c_170>=0&&c_170<32)||c_170==127        ) {
            result_167[n_168++]=94;
            result_167[n_168++]=c_170+65-1;
        }
        else if(        c_170>127        ) {
            result_167[n_168++]=63;
        }
        else {
            result_167[n_168++]=c_170;
        }
    }
    result_167[n_168]=0;
    __result_obj__87 = (char*)come_increment_ref_count(result_167);
    (result_167 = come_decrement_ref_count(result_167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__87;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_171;
struct list$1char$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_171=0    ;    i_171<num_value    ;    i_171++    ){
        list$1char$_push_back(self,values[i_171]);
    }
    __result_obj__89 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_172;
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_173;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_174;
struct list$1char$* __result_obj__88;
    if(    self->len==0    ) {
        litem_172=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_172->prev=((void*)0);
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head=litem_172;
    }
    else if(    self->len==1    ) {
        litem_173=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_173->prev=self->head;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head->next=litem_173;
    }
    else {
        litem_174=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_174->prev=self->tail;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail->next=litem_174;
        self->tail=litem_174;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_175;
struct list_item$1char$* prev_it_176;
    it_175=self->head;
    while(    it_175!=((void*)0)    ) {
        prev_it_176=it_175;
        it_175=it_175->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value52 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1char$* __result_obj__90;
    __result_obj__90 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value56=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3319, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_177;
struct list$1char$p* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0    ;    i_177<num_value    ;    i_177++    ){
        list$1char$p_push_back(self,values[i_177]);
    }
    __result_obj__92 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_178;
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_179;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_180;
struct list$1char$p* __result_obj__91;
    if(    self->len==0    ) {
        litem_178=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1    ) {
        litem_179=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_181;
struct list_item$1char$p* prev_it_182;
    it_181=self->head;
    while(    it_181!=((void*)0)    ) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$p* __result_obj__93;
    __result_obj__93 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value61=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3324, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_183;
struct list$1short$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0    ;    i_183<num_value    ;    i_183++    ){
        list$1short$_push_back(self,values[i_183]);
    }
    __result_obj__95 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_184;
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_185;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_186;
struct list$1short$* __result_obj__94;
    if(    self->len==0    ) {
        litem_184=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1    ) {
        litem_185=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_187;
struct list_item$1short$* prev_it_188;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1short$* __result_obj__96;
    __result_obj__96 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value66=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3329, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_189;
struct list$1int$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0    ;    i_189<num_value    ;    i_189++    ){
        list$1int$_push_back(self,values[i_189]);
    }
    __result_obj__98 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_190;
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_191;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_192;
struct list$1int$* __result_obj__97;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_193;
struct list_item$1int$* prev_it_194;
    it_193=self->head;
    while(    it_193!=((void*)0)    ) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1int$* __result_obj__99;
    __result_obj__99 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value71=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3334, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_195;
struct list$1long$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0    ;    i_195<num_value    ;    i_195++    ){
        list$1long$_push_back(self,values[i_195]);
    }
    __result_obj__101 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_196;
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_197;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_198;
struct list$1long$* __result_obj__100;
    if(    self->len==0    ) {
        litem_196=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1    ) {
        litem_197=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_199;
struct list_item$1long$* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1long$* __result_obj__102;
    __result_obj__102 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value76=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3339, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_201;
struct list$1float$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0    ;    i_201<num_value    ;    i_201++    ){
        list$1float$_push_back(self,values[i_201]);
    }
    __result_obj__104 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_202;
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_203;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_204;
struct list$1float$* __result_obj__103;
    if(    self->len==0    ) {
        litem_202=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1    ) {
        litem_203=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_205;
struct list_item$1float$* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1float$* __result_obj__105;
    __result_obj__105 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value81=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_207;
struct list$1double$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0    ;    i_207<num_value    ;    i_207++    ){
        list$1double$_push_back(self,values[i_207]);
    }
    __result_obj__107 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_208;
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_209;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_210;
struct list$1double$* __result_obj__106;
    if(    self->len==0    ) {
        litem_208=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1    ) {
        litem_209=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_211;
struct list_item$1double$* prev_it_212;
    it_211=self->head;
    while(    it_211!=((void*)0)    ) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1double$* __result_obj__108;
    __result_obj__108 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value86=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
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
char* __result_obj__109;
int len_213;
void* __right_value88 = (void*)0;
char* result_214;
char* __result_obj__110;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    len_213=strlen(self)+strlen(right);
    result_214=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_213+1)), "/usr/local/include/comelang.h", 3578, "char*"));
    strncpy(result_214,self,len_213+1);
    strncat(result_214,right,len_213+1);
    __result_obj__110 = (char*)come_increment_ref_count(result_214);
    (result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

char* string_operator_add(char* self, char* right){
void* __right_value89 = (void*)0;
char* __result_obj__111;
int len_215;
void* __right_value90 = (void*)0;
char* result_216;
char* __result_obj__112;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_215=strlen(self)+strlen(right);
    result_216=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_215+1)), "/usr/local/include/comelang.h", 3593, "char*"));
    strncpy(result_216,self,len_215+1);
    strncat(result_216,right,len_215+1);
    __result_obj__112 = (char*)come_increment_ref_count(result_216);
    (result_216 = come_decrement_ref_count(result_216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* charp_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__113;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_217;
int i_218;
void* __right_value94 = (void*)0;
char* __result_obj__114;
    if(    self==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    buf_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3606, "struct buffer*"))));
    for(    i_218=0    ;    i_218<right    ;    i_218++    ){
        buffer_append_str(buf_217,self);
    }
    __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_217))));
    come_call_finalizer(buffer_finalize, buf_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* string_operator_mult(char* self, int right){
void* __right_value95 = (void*)0;
char* __result_obj__115;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_219;
int i_220;
void* __right_value98 = (void*)0;
char* __result_obj__116;
    if(    self==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    buf_219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3620, "struct buffer*"))));
    for(    i_220=0    ;    i_220<right    ;    i_220++    ){
        buffer_append_str(buf_219,self);
    }
    __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value98=buffer_to_string(buf_219))));
    come_call_finalizer(buffer_finalize, buf_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_221;
int i_222;
    result_221=(_Bool)0;
    for(    i_222=0    ;    i_222<len    ;    i_222++    ){
        if(        strncmp(self[i_222],str,strlen(self[i_222]))==0        ) {
            result_221=(_Bool)1;
            break;
        }
    }
    return result_221;
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
int result_223;
char* p_224;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_223=0;
    p_224=value;
    while(    *p_224    ) {
        result_223+=(*p_224);
        p_224++;
    }
    return result_223;
}

unsigned int string_get_hash_key(char* value){
int result_225;
char* p_226;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_225=0;
    p_226=value;
    while(    *p_226    ) {
        result_225+=(*p_226);
        p_226++;
    }
    return result_225;
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
_Bool result_227;
    result_227=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_227;
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
_Bool result_228;
    result_228=(c>=32&&c<=126);
    return result_228;
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
char* __result_obj__117;
int len_229;
void* __right_value100 = (void*)0;
char* result_230;
int i_231;
char* __result_obj__118;
    if(    str==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_229=strlen(str);
    result_230=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_229+1)), "/usr/local/include/comelang.h", 3888, "char*"));
    for(    i_231=0    ;    i_231<len_229    ;    i_231++    ){
        result_230[i_231]=str[len_229-i_231-1];
    }
    result_230[len_229]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_230);
    (result_230 = come_decrement_ref_count(result_230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__119;
int len_232;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__120;
void* __right_value104 = (void*)0;
char* __result_obj__121;
void* __right_value105 = (void*)0;
char* __result_obj__122;
void* __right_value106 = (void*)0;
char* result_233;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    len_232=strlen(str);
    if(    head<0    ) {
        head+=len_232;
    }
    if(    tail<0    ) {
        tail+=len_232+1;
    }
    if(    head>tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_232    ) {
        tail=len_232;
    }
    if(    head==tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    tail-head+1<1    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    result_233=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3934, "char*"));
    memcpy(result_233,str+head,tail-head);
    result_233[tail-head]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_233);
    (result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__124;
int len_234;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__125;
void* __right_value110 = (void*)0;
char* __result_obj__126;
void* __right_value111 = (void*)0;
char* __result_obj__127;
void* __right_value112 = (void*)0;
char* result_235;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_234=strlen(str);
    if(    head<0    ) {
        head+=len_234;
    }
    if(    tail<0    ) {
        tail+=len_234+1;
    }
    if(    head>tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_234    ) {
        tail=len_234;
    }
    if(    head==tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    tail-head+1<1    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    result_235=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3977, "char*"));
    memcpy(result_235,str+head,tail-head);
    result_235[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_235);
    (result_235 = come_decrement_ref_count(result_235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value113 = (void*)0;
char* __result_obj__129;
int len_236;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result_obj__130;
void* __right_value116 = (void*)0;
char* __result_obj__131;
void* __right_value117 = (void*)0;
char* __result_obj__132;
void* __right_value118 = (void*)0;
char* result_237;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    len_236=strlen(str);
    if(    head<0    ) {
        head+=len_236;
    }
    if(    tail<0    ) {
        tail+=len_236+1;
    }
    if(    head>tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value115=charp_reverse(((char*)(__right_value114=charp_substring(str,tail,head)))))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_236    ) {
        tail=len_236;
    }
    if(    head==tail    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    tail-head+1<1    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    result_237=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4020, "char*"));
    memcpy(result_237,str+head,tail-head);
    result_237[tail-head]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_237);
    (result_237 = come_decrement_ref_count(result_237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* xsprintf(char* msg, ...){
void* __right_value119 = (void*)0;
char* __result_obj__134;
va_list args_238;
char* result_239;
int len_240;
void* __right_value120 = (void*)0;
char* __result_obj__135;
void* __right_value121 = (void*)0;
char* result2_241;
char* __result_obj__136;
result_239 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    __builtin_va_start(args_238,msg);
    len_240=vasprintf(&result_239,msg,args_238);
    __builtin_va_end(args_238);
    if(    len_240<0    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    result2_241=(char*)come_increment_ref_count(__builtin_string(result_239));
    free(result_239);
    __result_obj__136 = (char*)come_increment_ref_count(result2_241);
    (result2_241 = come_decrement_ref_count(result2_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__137;
int len_242;
void* __right_value123 = (void*)0;
char* __result_obj__138;
void* __right_value124 = (void*)0;
char* __result_obj__139;
void* __right_value125 = (void*)0;
char* result_243;
char* __result_obj__140;
    if(    str==((void*)0)    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    len_242=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(str))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_242-(tail-head)+1)), "/usr/local/include/comelang.h", 4082, "char*"));
    memcpy(result_243,str,head);
    memcpy(result_243+head,str+tail,len_242-tail);
    result_243[len_242-(tail-head)]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__141;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__141 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)    ) {
        prev_it_245=it_244;
        it_244=it_244->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_249;
char* __dec_obj13;
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_250;
char* __dec_obj14;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_251;
char* __dec_obj15;
struct list$1char$ph* __result_obj__143;
    if(    self->len==0    ) {
        litem_249=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        __dec_obj13=litem_249->item,
        litem_249->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1    ) {
        litem_250=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        __dec_obj14=litem_250->item,
        litem_250->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        __dec_obj15=litem_251->item,
        litem_251->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result_obj__143 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__143;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* __result_obj__142;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1char$ph* result_246;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* str_247;
int i_248;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1char$ph* __result_obj__144;
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value127=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4095, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    result_246=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4098, "struct list$1char$ph*"))));
    str_247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4100, "struct buffer*"))));
    for(    i_248=0    ;    i_248<charp_length(self)    ;    i_248++    ){
        if(        self[i_248]==c        ) {
            list$1char$ph_push_back(result_246,(char*)come_increment_ref_count(__builtin_string(str_247->buf)));
            buffer_reset(str_247);
        }
        else {
            buffer_append_char(str_247,self[i_248]);
        }
    }
    if(    buffer_length(str_247)!=0    ) {
        list$1char$ph_push_back(result_246,(char*)come_increment_ref_count(__builtin_string(str_247->buf)));
    }
    __result_obj__144 = (struct list$1char$ph*)come_increment_ref_count(result_246);
    come_call_finalizer(list$1char$ph$p_finalize, result_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__144;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value137 = (void*)0;
char* __result_obj__145;
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value137=xsprintf(msg,self))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__146;
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_printable(char* str){
int len_252;
void* __right_value139 = (void*)0;
char* result_253;
int n_254;
int i_255;
char c_256;
char* __result_obj__147;
    len_252=charp_length(str);
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_252*2+1)), "/usr/local/include/comelang.h", 4132, "char*"));
    n_254=0;
    for(    i_255=0    ;    i_255<len_252    ;    i_255++    ){
        c_256=str[i_255];
        if(        (c_256>=0&&c_256<32)||c_256==127        ) {
            result_253[n_254++]=94;
            result_253[n_254++]=c_256+65-1;
        }
        else {
            result_253[n_254++]=c_256;
        }
    }
    result_253[n_254]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value140 = (void*)0;
char* __result_obj__148;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct buffer* result_257;
char* p_258;
char* p2_259;
void* __right_value143 = (void*)0;
char* __result_obj__149;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(self))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    result_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4160, "struct buffer*"))));
    p_258=self;
    while(    (_Bool)1    ) {
        p2_259=strstr(p_258,str);
        if(        p2_259==((void*)0)        ) {
            p2_259=p_258;
            while(            *p2_259            ) {
                p2_259++;
            }
            buffer_append(result_257,p_258,p2_259-p_258);
            break;
        }
        buffer_append(result_257,p_258,p2_259-p_258);
        buffer_append_str(result_257,replace);
        p_258=p2_259+strlen(str);
    }
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value143=buffer_to_string(result_257))));
    come_call_finalizer(buffer_finalize, result_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* xbasename(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__150;
char* p_260;
void* __right_value145 = (void*)0;
char* __result_obj__151;
void* __right_value146 = (void*)0;
char* __result_obj__152;
void* __right_value147 = (void*)0;
char* __result_obj__153;
    if(    path==((void*)0)    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    p_260=path+strlen(path);
    while(    p_260>=path    ) {
        if(        *p_260==47        ) {
            break;
        }
        else {
            p_260--;
        }
    }
    if(    p_260<path    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(path))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    else {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(p_260+1))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* xnoextname(char* path){
void* __right_value148 = (void*)0;
char* __result_obj__154;
void* __right_value149 = (void*)0;
char* path2_261;
char* p_262;
void* __right_value150 = (void*)0;
char* __result_obj__155;
void* __right_value151 = (void*)0;
char* __result_obj__156;
void* __right_value152 = (void*)0;
char* __result_obj__157;
    if(    path==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    path2_261=(char*)come_increment_ref_count(xbasename(path));
    p_262=path2_261+strlen(path2_261);
    while(    p_262>=path2_261    ) {
        if(        *p_262==46        ) {
            break;
        }
        else {
            p_262--;
        }
    }
    if(    p_262<path2_261    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path2_261))));
        (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value151=charp_substring(path2_261,0,p_262-path2_261))));
        (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* xextname(char* path){
void* __right_value153 = (void*)0;
char* __result_obj__158;
char* p_263;
void* __right_value154 = (void*)0;
char* __result_obj__159;
void* __right_value155 = (void*)0;
char* __result_obj__160;
void* __right_value156 = (void*)0;
char* __result_obj__161;
    if(    path==((void*)0)    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    p_263=path+strlen(path);
    while(    p_263>=path    ) {
        if(        *p_263==46        ) {
            break;
        }
        else {
            p_263--;
        }
    }
    if(    p_263<path    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(path))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    else {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(p_263+1))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__162;
void* __right_value158 = (void*)0;
char* __result_obj__163;
    if(    self    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value159 = (void*)0;
char* __result_obj__164;
void* __right_value160 = (void*)0;
char* __result_obj__165;
    if(    self    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("true"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    else {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("false"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
}

char* char_to_string(char self){
void* __right_value161 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%c",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* short_to_string(short self){
void* __right_value162 = (void*)0;
char* __result_obj__167;
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%d",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* int_to_string(int self){
void* __right_value163 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* long_to_string(long self){
void* __right_value164 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%ld",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value165 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* float_to_string(float self){
void* __right_value166 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%f",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* double_to_string(double self){
void* __right_value167 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%lf",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* string_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__173;
void* __right_value169 = (void*)0;
char* __result_obj__174;
    if(    self==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* charp_to_string(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__175;
void* __right_value171 = (void*)0;
char* __result_obj__176;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
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
char* __result_obj__177;
void* __right_value173 = (void*)0;
char* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    puts(self);
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* charp_print(char* self){
void* __right_value174 = (void*)0;
char* __result_obj__179;
void* __right_value175 = (void*)0;
char* __result_obj__180;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    printf("%s",self);
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* charp_printf(char* self, ...){
void* __right_value176 = (void*)0;
char* __result_obj__181;
char* msg2_264;
va_list args_265;
void* __right_value177 = (void*)0;
char* __result_obj__182;
msg2_264 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    __builtin_va_start(args_265,self);
    vasprintf(&msg2_264,self,args_265);
    __builtin_va_end(args_265);
    printf("%s",msg2_264);
    free(msg2_264);
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(self))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_266;
    for(    i_266=0    ;    i_266<self    ;    i_266++    ){
        block(parent,i_266);
    }
}

