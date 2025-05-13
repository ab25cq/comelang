/// previous struct definition ///
/// struct definition ///
typedef __builtin_va_list va_list;

typedef void* any;

typedef char* string;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long long __ll;
    long  double __ld;
};

typedef struct anonymous_typeX1 max_align_t;

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

struct anonymous_typeX2
{
    _Atomic int locked;
};

typedef struct anonymous_typeX2 mutex_t;

extern struct anonymous_typeX2 gExpMutex;

extern struct anonymous_typeX2 gComeHeapMutex;

typedef unsigned long  int anonymous_var_nameX1;

typedef long  long anonymous_var_nameX2;

static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
struct sBlock
{
    unsigned long  int size;
    struct sBlock* next;
    int free;
};

typedef struct sBlock block_t;

extern struct sBlock* free_list;

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

struct anonymous_typeX7
{
    struct run* freelist;
};

struct anonymous_typeX7 kmem;
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
struct anonymous_typeX2 mutex={ 0 };
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
void mutex_init(struct anonymous_typeX2* mutex);
void mutex_enter_blocking(struct anonymous_typeX2* mutex);
void mutex_exit(struct anonymous_typeX2* mutex);
void putchar(char c);
void uartputc_sync(char c);
static void uartstart();
void uartputc(char c);
void puts(const char* s);
void kfree(void* pa);
void freerange(void* pa_start, void* pa_end);
void kinit();
void* kalloc();
void disable_timer_interrupt();
void timervec();
void enable_timer_interrupts();
void disable_timer_interrupts();
void task1();
void task2();
struct proc* alloc_proc(void (*task)());
void swtch(struct context* anonymous_var_nameX62, struct context* anonymous_var_nameX63);
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
int main();
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
void* _sbrk(long incr);
struct sBlock* find_free_block(unsigned long  int size);
struct sBlock* request_space(unsigned long  int size);
void* malloc(unsigned long  int size);
void free(void* ptr);
void* calloc(unsigned long  int n, unsigned long  int size);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
_Atomic void* memset(void* dst, int c, unsigned int n);
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
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
struct anonymous_typeX2 gExpMutex={ 0 };

struct anonymous_typeX2 gComeHeapMutex={ 0 };

struct sBlock* free_list=((void*)0);

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
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_9;
memset(&x_9, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_9));
    return x_9;
}
static inline void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
void mutex_init(struct anonymous_typeX2* mutex){
    atomic_store(&mutex->locked,0);
}

void mutex_enter_blocking(struct anonymous_typeX2* mutex){
int expected_0;
    expected_0=0;
    while(    !atomic_compare_exchange_weak(&mutex->locked,&expected_0,1)    ) {
        expected_0=0;
        __asm volatile("nop");
    }
}

void mutex_exit(struct anonymous_typeX2* mutex){
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
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_2=(struct run*)pa;
    r_2->next=kmem.freelist;
    kmem.freelist=r_2;
}

void freerange(void* pa_start, void* pa_end){
char* p_3;
p_3 = (void*)0;
    p_3=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_3+4096<=(_end+4096*256)    ;    p_3+=4096    ){
        kfree(p_3);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
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

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_10;
    w_mie(0);
    w_mtvec((unsigned long  int)timervec&~3);
    w_mstatus(r_mstatus()&~(1<<3));
    now_10=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_10+10;
}

void disable_timer_interrupts(){
    w_mie(0);
    w_mstatus(r_mstatus()&~(1<<3));
    *(unsigned long  int*)33570816=*(unsigned long  int*)33603576+-1;
}

void task1(){
void* __right_value0 = (void*)0;
    while(    1    ) {
        mutex_enter_blocking(&gExpMutex);
        puts("[1A]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[1B]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[1C]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[1D]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        ((char*)(__right_value0=charp_puts("ABC")));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        gCountTask1++;
        mutex_exit(&gExpMutex);
    }
}

void task2(){
void* __right_value1 = (void*)0;
    while(    1    ) {
        mutex_enter_blocking(&gExpMutex);
        puts("[2A]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[2B]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[2C]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        puts("[2D]\n");
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        ((char*)(__right_value1=charp_puts("ABC")));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        mutex_exit(&gExpMutex);
        mutex_enter_blocking(&gExpMutex);
        gCountTask2++;
        mutex_exit(&gExpMutex);
    }
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_17;
struct proc* __result_obj__6;
    result_17=kalloc();
    memset(result_17,0,sizeof(struct proc));
    result_17->stack=kalloc();
    result_17->context.sp=(unsigned long  int)(result_17->stack+4096);
    result_17->context.mepc=(unsigned long  int)task;
    result_17->state=(3);
    gProc[gNumProc++]=result_17;
    __result_obj__6 = result_17;
    return __result_obj__6;
}

void timer_handler(){
struct proc* p_18;
struct context* tf_19;
    disable_timer_interrupts();
    p_18=gProc[gActiveProc];
    tf_19=(struct context*)TRAPFRAME;
    p_18->context=*tf_19;
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
struct proc* p_20;
    p_20=gProc[gActiveProc];
    enable_timer_interrupts();
    swtch(&gCPU.context,&p_20->context);
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_21;
    now_21=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value2 = (void*)0;
    come_heap_init(0, 0, 0);
    kinit();
    ((char*)(__right_value2=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 449, "char*")));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    alloc_proc(task1);
    alloc_proc(task2);
    scheduler();
    while(    1    ) {
        ;
    }
come_heap_final();
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
char* result_22;
char* __result_obj__7;
    mutex_enter_blocking(&gComeHeapMutex);
    result_22=(char*)come_increment_ref_count(come_get_stackframe());
    mutex_exit(&gComeHeapMutex);
    __result_obj__7 = (char*)come_increment_ref_count(result_22);
    (result_22 = come_decrement_ref_count(result_22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__7 = come_decrement_ref_count(__result_obj__7, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__7;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_23;
void* __result_obj__8;
    mutex_enter_blocking(&gComeHeapMutex);
    result_23=come_calloc(count,size,sname,sline,class_name);
    mutex_exit(&gComeHeapMutex);
    __result_obj__8 = result_23;
    return __result_obj__8;
}

void come_free_v2(void* mem){
    mutex_enter_blocking(&gComeHeapMutex);
    come_free(mem);
    mutex_exit(&gComeHeapMutex);
}

void* _sbrk(long incr){
void* __result_obj__9;
void* prev_24;
void* __result_obj__10;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__9 = (void*)-1;
        return __result_obj__9;
    }
    prev_24=heap_end;
    heap_end+=incr;
    __result_obj__10 = prev_24;
    return __result_obj__10;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_25;
struct sBlock* __result_obj__11;
struct sBlock* __result_obj__12;
    curr_25=free_list;
    while(    curr_25    ) {
        if(        curr_25->free&&curr_25->size>=size        ) {
            __result_obj__11 = curr_25;
            return __result_obj__11;
        }
        curr_25=curr_25->next;
    }
    __result_obj__12 = ((void*)0);
    return __result_obj__12;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_26;
struct sBlock* __result_obj__13;
struct sBlock* b_27;
struct sBlock* __result_obj__14;
    mem_26=_sbrk(size+sizeof(struct sBlock));
    if(    mem_26==(void*)-1    ) {
        __result_obj__13 = ((void*)0);
        return __result_obj__13;
    }
    b_27=(struct sBlock*)mem_26;
    b_27->size=size;
    b_27->next=((void*)0);
    b_27->free=0;
    __result_obj__14 = b_27;
    return __result_obj__14;
}

void* malloc(unsigned long  int size){
struct sBlock* block_28;
void* __result_obj__15;
void* __result_obj__16;
struct sBlock* curr_29;
void* __result_obj__17;
block_28 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_28=find_free_block(size))    ) {
        block_28->free=0;
        __result_obj__15 = (void*)(block_28+1);
        return __result_obj__15;
    }
    block_28=request_space(size);
    if(    !block_28    ) {
        __result_obj__16 = ((void*)0);
        return __result_obj__16;
    }
    if(    !free_list    ) {
        free_list=block_28;
    }
    else {
        curr_29=free_list;
        while(        curr_29->next        ) {
            curr_29=curr_29->next;
        }
        curr_29->next=block_28;
    }
    __result_obj__17 = (void*)(block_28+1);
    return __result_obj__17;
}

void free(void* ptr){
struct sBlock* block_30;
    if(    !ptr    ) {
        return;
    }
    block_30=((struct sBlock*)ptr)-1;
    block_30->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_31;
void* ptr_32;
void* __result_obj__18;
    total_31=n*size;
    ptr_32=malloc(total_31);
    if(    ptr_32    ) {
        memset(ptr_32,0,total_31);
    }
    __result_obj__18 = ptr_32;
    return __result_obj__18;
}

char* strdup(const char* s){
unsigned long  int len_33;
char* p_34;
char* __result_obj__19;
    len_33=strlen(s)+1;
    p_34=malloc(len_33);
    if(    p_34    ) {
        memcpy(p_34,s,len_33);
    }
    __result_obj__19 = p_34;
    return __result_obj__19;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__20;
char* __result_obj__21;
char* __result_obj__22;
    if(    !*needle    ) {
        __result_obj__20 = (char*)haystack;
        return __result_obj__20;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_35=haystack;
        const char* n_36=needle;
        while(        *h_35&&*n_36&&(*h_35==*n_36)        ) {
            h_35++;
            n_36++;
        }
        if(        !*n_36        ) {
            __result_obj__21 = (char*)haystack;
            return __result_obj__21;
        }
    }
    __result_obj__22 = ((void*)0);
    return __result_obj__22;
}

_Atomic void* memset(void* dst, int c, unsigned int n){
char* cdst_37;
int i_38;
_Atomic void* __result_obj__23;
    cdst_37=(char*)dst;
    for(    i_38=0    ;    i_38<n    ;    i_38++    ){
        cdst_37[i_38]=c;
    }
    __result_obj__23 = dst;
    return __result_obj__23;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_39;
const unsigned char* s2_40;
memset(&s1_39, 0, sizeof(const unsigned char*));
memset(&s2_40, 0, sizeof(const unsigned char*));
    s1_39=v1;
    s2_40=v2;
    while(    n-->0    ) {
        if(        *s1_39!=*s2_40        ) {
            return *s1_39-*s2_40;
        }
        s1_39++,s2_40++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_41;
char* d_42;
void* __result_obj__24;
void* __result_obj__25;
s_41 = (void*)0;
d_42 = (void*)0;
    if(    n==0    ) {
        __result_obj__24 = dst;
        return __result_obj__24;
    }
    s_41=src;
    d_42=dst;
    if(    s_41<d_42&&s_41+n>d_42    ) {
        s_41+=n;
        d_42+=n;
        while(        n-->0        ) {
            *--d_42=*--s_41;
        }
    }
    else {
        while(        n-->0        ) {
            *d_42++=*s_41++;
        }
    }
    __result_obj__25 = dst;
    return __result_obj__25;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__26;
    __result_obj__26 = memmove(dst,src,n);
    return __result_obj__26;
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
char* os_43;
char* __result_obj__27;
os_43 = (void*)0;
    os_43=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__27 = os_43;
    return __result_obj__27;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_44;
char* __result_obj__28;
char* __result_obj__29;
os_44 = (void*)0;
    os_44=s;
    if(    n<=0    ) {
        __result_obj__28 = os_44;
        return __result_obj__28;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__29 = os_44;
    return __result_obj__29;
}

int strlen(const char* s){
int n_45;
memset(&n_45, 0, sizeof(int));
    for(    n_45=0    ;    s[n_45]    ;    n_45++    ){
        ;
    }
    return n_45;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_46;
char* __result_obj__30;
    d_46=dest;
    while(    *d_46    ) {
        d_46++;
    }
    while(    n--&&*src    ) {
        *d_46++=*src++;
    }
    *d_46=0;
    __result_obj__30 = dest;
    return __result_obj__30;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_47;
char* __result_obj__31;
int digit_51;
char* __result_obj__32;
    p_47=buf;
    char tmp_48[32];
    memset(&tmp_48, 0, sizeof(char)    *(32)    );
    int i_49=0;
    int negative_50=0;
    if(    base<2||base>16    ) {
        *p_47=0;
        __result_obj__31 = p_47;
        return __result_obj__31;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_50=1;
        val_=-val_;
    }
    do {
        digit_51=val_%base;
        tmp_48[i_49++]=(((digit_51<10))?(48+digit_51):(97+digit_51-10));
        val_/=base;
    } while(    val_    );
    if(    negative_50    ) {
        *p_47++=45;
    }
    while(    i_49--    ) {
        *p_47++=tmp_48[i_49];
    }
    *p_47=0;
    __result_obj__32 = buf;
    return __result_obj__32;
}

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_52;
char* p_53;
const char* s_54;
unsigned long  int remaining_56;
int __result_obj__33;
int __result_obj__34;
memset(&ap_52, 0, sizeof(va_list));
s_54 = (void*)0;
    __builtin_va_start(ap_52,fmt);
    p_53=out;
    char buf_55[32];
    memset(&buf_55, 0, sizeof(char)    *(32)    );
    remaining_56=out_size;
    if(    remaining_56==0    ) {
        __builtin_va_end(ap_52);
        __result_obj__33 = 0;
        come_call_finalizer(va_list_finalize, (&ap_52), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__33;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_56>1            ) {
                *p_53++=*fmt;
                remaining_56--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_54=__builtin_va_arg(ap_52,const char*);
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 100:
            itoa(buf_55,__builtin_va_arg(ap_52,int),10,0);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 120:
            itoa(buf_55,(unsigned int)__builtin_va_arg(ap_52,int),16,1);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 99:
            if(            remaining_56>1            ) {
                *p_53++=(char)__builtin_va_arg(ap_52,int);
                remaining_56--;
            }
            break;
            case 112:
            s_54="0x";
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            itoa(buf_55,(long)__builtin_va_arg(ap_52,void*),16,1);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_55,__builtin_va_arg(ap_52,long),10,1);
                s_54=buf_55;
                while(                *s_54&&remaining_56>1                ) {
                    *p_53++=*s_54++;
                    remaining_56--;
                }
            }
            break;
            default:
            if(            remaining_56>1            ) {
                *p_53++=37;
                remaining_56--;
                if(                remaining_56>1                ) {
                    *p_53++=*fmt;
                    remaining_56--;
                }
            }
            break;
        }
    }
    *p_53=0;
    __builtin_va_end(ap_52);
    __result_obj__34 = p_53-out;
    come_call_finalizer(va_list_finalize, (&ap_52), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

int vasprintf(char** result, const char* fmt, ...){
va_list ap_57;
unsigned long  int out_size_59;
char* p_60;
const char* s_61;
unsigned long  int remaining_63;
int __result_obj__35;
int __result_obj__36;
memset(&ap_57, 0, sizeof(va_list));
s_61 = (void*)0;
    __builtin_va_start(ap_57,fmt);
    char out_58[256];
    memset(&out_58, 0, sizeof(char)    *(256)    );
    out_size_59=256;
    p_60=out_58;
    char buf_62[32];
    memset(&buf_62, 0, sizeof(char)    *(32)    );
    remaining_63=out_size_59;
    if(    remaining_63==0    ) {
        __builtin_va_end(ap_57);
        __result_obj__35 = 0;
        come_call_finalizer(va_list_finalize, (&ap_57), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__35;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_63>1            ) {
                *p_60++=*fmt;
                remaining_63--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_61=__builtin_va_arg(ap_57,const char*);
            while(            *s_61&&remaining_63>1            ) {
                *p_60++=*s_61++;
                remaining_63--;
            }
            break;
            case 100:
            itoa(buf_62,__builtin_va_arg(ap_57,int),10,0);
            s_61=buf_62;
            while(            *s_61&&remaining_63>1            ) {
                *p_60++=*s_61++;
                remaining_63--;
            }
            break;
            case 120:
            itoa(buf_62,(unsigned int)__builtin_va_arg(ap_57,int),16,1);
            s_61=buf_62;
            while(            *s_61&&remaining_63>1            ) {
                *p_60++=*s_61++;
                remaining_63--;
            }
            break;
            case 99:
            if(            remaining_63>1            ) {
                *p_60++=(char)__builtin_va_arg(ap_57,int);
                remaining_63--;
            }
            break;
            case 112:
            s_61="0x";
            while(            *s_61&&remaining_63>1            ) {
                *p_60++=*s_61++;
                remaining_63--;
            }
            itoa(buf_62,(long)__builtin_va_arg(ap_57,void*),16,1);
            s_61=buf_62;
            while(            *s_61&&remaining_63>1            ) {
                *p_60++=*s_61++;
                remaining_63--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_62,__builtin_va_arg(ap_57,long),10,1);
                s_61=buf_62;
                while(                *s_61&&remaining_63>1                ) {
                    *p_60++=*s_61++;
                    remaining_63--;
                }
            }
            break;
            default:
            if(            remaining_63>1            ) {
                *p_60++=37;
                remaining_63--;
                if(                remaining_63>1                ) {
                    *p_60++=*fmt;
                    remaining_63--;
                }
            }
            break;
        }
    }
    *p_60=0;
    __builtin_va_end(ap_57);
    *result=malloc(sizeof(char)*(p_60-out_58+1));
    strncpy(*result,out_58,p_60-out_58);
    __result_obj__36 = p_60-out_58;
    come_call_finalizer(va_list_finalize, (&ap_57), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_64;
char* p_65;
const char* s_66;
unsigned long  int remaining_68;
int __result_obj__37;
int __result_obj__38;
memset(&ap_64, 0, sizeof(va_list));
s_66 = (void*)0;
    __builtin_va_start(ap_64,fmt);
    p_65=out;
    char buf_67[32];
    memset(&buf_67, 0, sizeof(char)    *(32)    );
    remaining_68=out_size;
    if(    remaining_68==0    ) {
        __builtin_va_end(ap_64);
        __result_obj__37 = 0;
        come_call_finalizer(va_list_finalize, (&ap_64), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__37;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_68>1            ) {
                *p_65++=*fmt;
                remaining_68--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_66=__builtin_va_arg(ap_64,const char*);
            while(            *s_66&&remaining_68>1            ) {
                *p_65++=*s_66++;
                remaining_68--;
            }
            break;
            case 100:
            itoa(buf_67,__builtin_va_arg(ap_64,int),10,0);
            s_66=buf_67;
            while(            *s_66&&remaining_68>1            ) {
                *p_65++=*s_66++;
                remaining_68--;
            }
            break;
            case 120:
            itoa(buf_67,(unsigned int)__builtin_va_arg(ap_64,int),16,1);
            s_66=buf_67;
            while(            *s_66&&remaining_68>1            ) {
                *p_65++=*s_66++;
                remaining_68--;
            }
            break;
            case 99:
            if(            remaining_68>1            ) {
                *p_65++=(char)__builtin_va_arg(ap_64,int);
                remaining_68--;
            }
            break;
            case 112:
            s_66="0x";
            while(            *s_66&&remaining_68>1            ) {
                *p_65++=*s_66++;
                remaining_68--;
            }
            itoa(buf_67,(long)__builtin_va_arg(ap_64,void*),16,1);
            s_66=buf_67;
            while(            *s_66&&remaining_68>1            ) {
                *p_65++=*s_66++;
                remaining_68--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_67,__builtin_va_arg(ap_64,long),10,1);
                s_66=buf_67;
                while(                *s_66&&remaining_68>1                ) {
                    *p_65++=*s_66++;
                    remaining_68--;
                }
            }
            break;
            default:
            if(            remaining_68>1            ) {
                *p_65++=37;
                remaining_68--;
                if(                remaining_68>1                ) {
                    *p_65++=*fmt;
                    remaining_68--;
                }
            }
            break;
        }
    }
    *p_65=0;
    __builtin_va_end(ap_64);
    __result_obj__38 = p_65-out;
    come_call_finalizer(va_list_finalize, (&ap_64), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__38;
}

void printint(long num, int base, int is_signed){
int i_70;
unsigned long  int n_71;
memset(&n_71, 0, sizeof(unsigned long  int));
    char buf_69[32];
    memset(&buf_69, 0, sizeof(char)    *(32)    );
    i_70=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_71=-num;
    }
    else {
        n_71=num;
    }
    do {
        buf_69[i_70++]="0123456789abcdef"[n_71%base];
        n_71/=base;
    } while(    n_71>0    );
    while(    i_70--    ) {
        putchar(buf_69[i_70]);
    }
}

int printf(const char* fmt, ...){
va_list ap_72;
char* p_73;
int val__74;
unsigned int val__75;
unsigned long  int val__76;
char c_78;
int __result_obj__39;
memset(&ap_72, 0, sizeof(va_list));
p_73 = (void*)0;
    __builtin_va_start(ap_72,fmt);
    for(    p_73=fmt    ;    *p_73    ;    p_73++    ){
        if(        *p_73!=37        ) {
            putchar(*p_73);
            continue;
        }
        p_73++;
        switch (        *p_73) {
            case 100:
            {
                val__74=__builtin_va_arg(ap_72,int);
                printint(val__74,10,1);
                break;
            }
            case 120:
            {
                val__75=__builtin_va_arg(ap_72,unsigned int);
                printint(val__75,16,0);
                break;
            }
            case 112:
            {
                val__76=(unsigned long  int)__builtin_va_arg(ap_72,void*);
                putchar(48);
                putchar(120);
                printint(val__76,16,0);
                break;
            }
            case 115:
            {
                const char* s_77=__builtin_va_arg(ap_72,const char*);
                if(                !s_77                ) {
                    s_77="(null)";
                }
                while(                *s_77                ) {
                    putchar(*s_77++);
                }
                break;
            }
            case 99:
            {
                c_78=(char)__builtin_va_arg(ap_72,int);
                putchar(c_78);
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
                putchar(*p_73);
                break;
            }
        }
    }
    __builtin_va_end(ap_72);
    __result_obj__39 = 0;
    come_call_finalizer(va_list_finalize, (&ap_72), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

void perror(char* str){
    puts(str);
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
struct buffer* buf_79;
int i_80;
void* __right_value6 = (void*)0;
    buf_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 148, "struct buffer*"))));
    buffer_append_format(buf_79,"%s %d\n",sname,sline);
    for(    i_80=gNumComeStackFrame-2    ;    i_80>=0    ;    i_80--    ){
        buffer_append_format(buf_79,"%s %d #%d\n",gComeStackFrameSName[i_80],gComeStackFrameSLine[i_80],gComeStackFrameID[i_80]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value6=buffer_to_string(buf_79))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_81;
    for(    i_81=gNumComeStackFrame-1    ;    i_81>=0    ;    i_81--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_81],gComeStackFrameSLine[i_81],gComeStackFrameID[i_81]);
    }
}

char* come_get_stackframe(){
void* __right_value7 = (void*)0;
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(gComeStackFrameBuffer))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__40;
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
int i_82;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_82=0    ;    i_82<gHeapPages.mSizePages    ;    i_82++    ){
        gHeapPages.mPages[i_82]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_83;
int n_84;
_Bool flag_85;
int i_86;
struct sMemHeaderTiny* it_87;
int n_88;
int i_89;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_83=gAllocMem;
        n_84=0;
        while(        it_83        ) {
            n_84++;
            flag_85=(_Bool)0;
            printf("#%d ",n_84);
            if(            it_83->class_name            ) {
                printf("%p (%s): ",(char*)it_83+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_83->class_name);
            }
            for(            i_86=0            ;            i_86<16            ;            i_86++            ){
                if(                it_83->sname[i_86]                ) {
                    printf("%s %d #%d, ",it_83->sname[i_86],it_83->sline[i_86],it_83->id[i_86]);
                    flag_85=(_Bool)1;
                }
            }
            if(            flag_85            ) {
                puts("");
            }
            it_83=it_83->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_84,gNumAlloc,gNumFree);
    }
    else {
        it_87=(struct sMemHeaderTiny*)gAllocMem;
        n_88=0;
        while(        it_87        ) {
            n_88++;
            if(            it_87->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_88,(char*)it_87+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_87->class_name,it_87->sname,it_87->sline);
            }
            it_87=it_87->next;
        }
        if(        n_88>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_88,gNumAlloc,gNumFree);
        }
    }
    for(    i_89=0    ;    i_89<gHeapPages.mSizePages    ;    i_89++    ){
        free(gHeapPages.mPages[i_89]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_90;
unsigned long  int free_area_91;
int new_size_pages_92;
char** new_pages_93;
int i_94;
void* __result_obj__41;
    result_90=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_90=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_90,0,size);
        }
        if(        result_90==((void*)0)        ) {
            free_area_91=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_91            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_92=gHeapPages.mSizePages*2;
                    new_pages_93=calloc(1,sizeof(char*)*new_size_pages_92);
                    i_94=0;
                    for(                    ;                    i_94<gHeapPages.mSizePages                    ;                    i_94++                    ){
                        new_pages_93[i_94]=gHeapPages.mPages[i_94];
                    }
                    for(                    ;                    i_94<new_size_pages_92                    ;                    i_94++                    ){
                        new_pages_93[i_94]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_93;
                    gHeapPages.mSizePages=new_size_pages_92;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_90=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_90=calloc(1,size);
    }
    __result_obj__41 = result_90;
    return __result_obj__41;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_95;
struct sMemHeader* it_96;
int i_97;
int i_98;
void* __result_obj__42;
void* result_99;
struct sMemHeaderTiny* it_100;
void* __result_obj__43;
memset(&i_97, 0, sizeof(int));
memset(&i_98, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_95=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_96=result_95;
        it_96->allocated=177783;
        it_96->size=size+sizeof(struct sMemHeader);
        it_96->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_97=0            ;            i_97<gNumComeStackFrame            ;            i_97++            ){
                it_96->sname[i_97]=gComeStackFrameSName[i_97];
                it_96->sline[i_97]=gComeStackFrameSLine[i_97];
                it_96->id[i_97]=gComeStackFrameID[i_97];
            }
        }
        else {
            for(            i_98=0            ;            i_98<16            ;            i_98++            ){
                it_96->sname[i_98]=gComeStackFrameSName[gNumComeStackFrame-1-i_98];
                it_96->sline[i_98]=gComeStackFrameSLine[gNumComeStackFrame-1-i_98];
                it_96->id[i_98]=gComeStackFrameID[gNumComeStackFrame-1-i_98];
            }
        }
        come_pop_stackframe_v2();
        it_96->next=gAllocMem;
        it_96->prev=((void*)0);
        it_96->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_96;
        }
        gAllocMem=it_96;
        gNumAlloc++;
        __result_obj__42 = (char*)result_95+sizeof(struct sMemHeader);
        return __result_obj__42;
    }
    else {
        result_99=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_100=result_99;
        it_100->allocated=177783;
        it_100->class_name=class_name;
        it_100->sname=sname;
        it_100->sline=sline;
        it_100->size=size+sizeof(struct sMemHeaderTiny);
        it_100->free_next=((void*)0);
        it_100->next=(struct sMemHeaderTiny*)gAllocMem;
        it_100->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_100;
        }
        gAllocMem=(struct sMemHeader*)it_100;
        gNumAlloc++;
        __result_obj__43 = (char*)result_99+sizeof(struct sMemHeaderTiny);
        return __result_obj__43;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_101;
struct sMemHeader* prev_it_102;
struct sMemHeader* next_it_103;
unsigned long  int size_104;
struct sMemHeaderTiny* it_105;
struct sMemHeaderTiny* prev_it_106;
struct sMemHeaderTiny* next_it_107;
unsigned long  int size_108;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_101=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_101->allocated!=177783            ) {
                return;
            }
            it_101->allocated=0;
            prev_it_102=it_101->prev;
            next_it_103=it_101->next;
            if(            gAllocMem==it_101            ) {
                gAllocMem=next_it_103;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_102                ) {
                    prev_it_102->next=next_it_103;
                }
                if(                next_it_103                ) {
                    next_it_103->prev=prev_it_102;
                }
            }
            size_104=it_101->size;
            if(            size_104<4096            ) {
                if(                gHeapPages.mFreeMem[size_104]==((void*)0)                ) {
                    it_101->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_104]=(struct sMemHeaderTiny*)it_101;
                }
                else {
                    it_101->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_104];
                    gHeapPages.mFreeMem[size_104]=(struct sMemHeaderTiny*)it_101;
                }
            }
            else {
                free(it_101);
            }
            gNumFree++;
        }
        else {
            it_105=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_105->allocated!=177783            ) {
                return;
            }
            it_105->allocated=0;
            prev_it_106=it_105->prev;
            next_it_107=it_105->next;
            if(            gAllocMem==it_105            ) {
                gAllocMem=(struct sMemHeader*)next_it_107;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_106                ) {
                    prev_it_106->next=next_it_107;
                }
                if(                next_it_107                ) {
                    next_it_107->prev=prev_it_106;
                }
            }
            size_108=it_105->size;
            if(            size_108<4096            ) {
                if(                gHeapPages.mFreeMem[size_108]==((void*)0)                ) {
                    it_105->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_108]=it_105;
                }
                else {
                    it_105->free_next=gHeapPages.mFreeMem[size_108];
                    gHeapPages.mFreeMem[size_108]=it_105;
                }
            }
            else {
                free(it_105);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_109;
char* __result_obj__44;
struct sMemHeaderTiny* it_110;
char* __result_obj__45;
    if(    gComeDebugLib    ) {
        it_109=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_109->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_109);
            exit(2);
        }
        __result_obj__44 = it_109->class_name;
        return __result_obj__44;
    }
    else {
        it_110=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_110->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_110);
            exit(2);
        }
        __result_obj__45 = it_110->class_name;
        return __result_obj__45;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_111;
int i_112;
struct sMemHeaderTiny* it_113;
    if(    gComeDebugLib    ) {
        it_111=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_111->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_111->class_name        ) {
            printf("(%s): ",it_111->class_name);
        }
        for(        i_112=0        ;        i_112<16        ;        i_112++        ){
            if(            it_111->sname[i_112]            ) {
                printf("%s %d #%d, ",it_111->sname[i_112],it_111->sline[i_112],it_111->id[i_112]);
            }
        }
        puts("");
    }
    else {
        it_113=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_113->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_113->class_name,it_113->sname,it_113->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_114;
unsigned long  int* ref_count_115;
unsigned long  int* size2_116;
void* __result_obj__46;
    mem_114=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_115=(unsigned long  int*)mem_114;
    *ref_count_115=0;
    size2_116=(unsigned long  int*)(mem_114+sizeof(unsigned long  int));
    *size2_116=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__46 = mem_114+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__46;
}

void come_free(void* mem){
unsigned long  int* ref_count_117;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_117);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__47;
char* mem_118;
unsigned long  int* size_p_119;
unsigned long  int size_120;
void* result_121;
void* __result_obj__48;
    if(    !block    ) {
        __result_obj__47 = ((void*)0);
        return __result_obj__47;
    }
    mem_118=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_119=(unsigned long  int*)(mem_118+sizeof(unsigned long  int));
    size_120=*size_p_119-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_121=come_calloc_v2(1,size_120,sname,sline,class_name);
    memcpy(result_121,block,size_120);
    __result_obj__48 = result_121;
    return __result_obj__48;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_122;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_122=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_122)++;
    __result_obj__50 = mem;
    return __result_obj__50;
}

void* come_print_ref_count(void* mem){
void* __result_obj__51;
unsigned long  int* ref_count_123;
void* __result_obj__52;
    if(    mem==((void*)0)    ) {
        __result_obj__51 = mem;
        return __result_obj__51;
    }
    ref_count_123=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_123);
    __result_obj__52 = mem;
    return __result_obj__52;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_124;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_124=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_124;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__53;
void* __result_obj__54;
unsigned long  int* ref_count_125;
unsigned long  int count_126;
void (*finalizer_127)(void*);
void* __result_obj__55;
void* __result_obj__56;
memset(&finalizer_127, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__53 = mem;
            return __result_obj__53;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    ref_count_125=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_125)--;
    }
    count_126=*ref_count_125;
    if(    !no_free&&count_126<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_127=protocol_fun;
            finalizer_127(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__55 = ((void*)0);
        return __result_obj__55;
    }
    __result_obj__56 = mem;
    return __result_obj__56;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_128)(void*);
void (*finalizer_129)(void*);
void (*finalizer_130)(void*);
unsigned long  int* ref_count_131;
unsigned long  int count_132;
void (*finalizer_133)(void*);
void (*finalizer_134)(void*);
void (*finalizer_135)(void*);
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
memset(&finalizer_129, 0, sizeof(void (*)(void*)));
memset(&finalizer_130, 0, sizeof(void (*)(void*)));
memset(&finalizer_133, 0, sizeof(void (*)(void*)));
memset(&finalizer_134, 0, sizeof(void (*)(void*)));
memset(&finalizer_135, 0, sizeof(void (*)(void*)));
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
                finalizer_128=protocol_fun;
                finalizer_128(protocol_obj);
            }
            finalizer_129=fun;
            finalizer_129(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_130=protocol_fun;
                finalizer_130(protocol_obj);
            }
        }
    }
    else {
        ref_count_131=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_131)--;
        }
        count_132=*ref_count_131;
        if(        !no_free&&count_132<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_133=protocol_fun;
                        finalizer_133(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_134=fun;
                        finalizer_134(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_135=protocol_fun;
                        finalizer_135(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__57;
int len_136;
void* __right_value8 = (void*)0;
char* result_137;
char* __result_obj__58;
    if(    str==((void*)0)    ) {
        __result_obj__57 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__57;
    }
    len_136=strlen(str)+1;
    result_137=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_136)), "/usr/local/include/comelang.h", 828, "char*"));
    strncpy(result_137,str,len_136);
    __result_obj__58 = (char*)come_increment_ref_count(result_137);
    (result_137 = come_decrement_ref_count(result_137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value9 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__59;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2785, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__59 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value10 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__60;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2795, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__60 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__61;
void* __right_value11 = (void*)0;
struct buffer* result_138;
void* __right_value12 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__61;
    }
    result_138=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2815, "struct buffer*"));
    result_138->size=self->size;
    __dec_obj3=result_138->buf,
    result_138->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2818, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_138->len=self->len;
    memcpy(result_138->buf,self->buf,self->len);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(result_138);
    come_call_finalizer(buffer_finalize, result_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
_Bool __result_obj__63;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__63 = string_equals(((char*)(__right_value13=buffer_to_string(left))),((char*)(__right_value14=buffer_to_string(right))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__63;
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
struct buffer* __result_obj__64;
void* __right_value15 = (void*)0;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_139=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2866, "char*"));
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_141)), "/usr/local/include/comelang.h", 2870, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        (old_buf_139 = come_decrement_ref_count(old_buf_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__66;
void* __right_value17 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value18 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2889, "char*"));
        old_len_143=self->len;
        new_size_144=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_144)), "/usr/local/include/comelang.h", 2893, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__68;
int size_145;
void* __right_value19 = (void*)0;
char* old_buf_146;
int old_len_147;
int new_size_148;
void* __right_value20 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__69;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    size_145=strlen(mem);
    if(    self->len+size_145+1+1>=self->size    ) {
        old_buf_146=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_148)), "/usr/local/include/comelang.h", 2919, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
        (old_buf_146 = come_decrement_ref_count(old_buf_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__70;
va_list args_149;
char* result_150;
int len_151;
struct buffer* __result_obj__71;
void* __right_value21 = (void*)0;
char* mem_152;
int size_153;
void* __right_value22 = (void*)0;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* __right_value23 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__72;
memset(&args_149, 0, sizeof(va_list));
result_150 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    __builtin_va_start(args_149,msg);
    len_151=vasprintf(&result_150,msg,args_149);
    __builtin_va_end(args_149);
    if(    len_151<0    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    mem_152=(char*)come_increment_ref_count(__builtin_string(result_150));
    size_153=strlen(mem_152);
    if(    self->len+size_153+1+1>=self->size    ) {
        old_buf_154=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_156)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_154,old_len_155);
        self->buf[old_len_155]=0;
        self->size=new_size_156;
        (old_buf_154 = come_decrement_ref_count(old_buf_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_152,size_153);
    self->len+=size_153;
    self->buf[self->len]=0;
    free(result_150);
    __result_obj__72 = self;
    (mem_152 = come_decrement_ref_count(mem_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__72;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__73;
int size_157;
void* __right_value24 = (void*)0;
char* old_buf_158;
int old_len_159;
int new_size_160;
void* __right_value25 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__74;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    size_157=strlen(mem)+1;
    if(    self->len+size_157+1+1+1>=self->size    ) {
        old_buf_158=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_158,self->buf,self->size);
        old_len_159=self->len;
        new_size_160=(self->size+size_157+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_160)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_158,old_len_159);
        self->buf[old_len_159]=0;
        self->size=new_size_160;
        (old_buf_158 = come_decrement_ref_count(old_buf_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_157);
    self->len+=size_157;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__75;
int* mem_161;
int size_162;
void* __right_value26 = (void*)0;
char* old_buf_163;
int old_len_164;
int new_size_165;
void* __right_value27 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_161=&value;
    size_162=sizeof(int);
    if(    self->len+size_162+1+1>=self->size    ) {
        old_buf_163=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3005, "char*"));
        memcpy(old_buf_163,self->buf,self->size);
        old_len_164=self->len;
        new_size_165=(self->size+size_162+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_165)), "/usr/local/include/comelang.h", 3009, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_163,old_len_164);
        self->buf[old_len_164]=0;
        self->size=new_size_165;
        (old_buf_163 = come_decrement_ref_count(old_buf_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_161,size_162);
    self->len+=size_162;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_166;
int size_167;
void* __right_value28 = (void*)0;
char* old_buf_168;
int old_len_169;
int new_size_170;
void* __right_value29 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__77;
    mem_166=&value;
    size_167=sizeof(long);
    if(    self->len+size_167+1+1>=self->size    ) {
        old_buf_168=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3028, "char*"));
        memcpy(old_buf_168,self->buf,self->size);
        old_len_169=self->len;
        new_size_170=(self->size+size_167+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_170)), "/usr/local/include/comelang.h", 3032, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_168,old_len_169);
        self->buf[old_len_169]=0;
        self->size=new_size_170;
        (old_buf_168 = come_decrement_ref_count(old_buf_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_166,size_167);
    self->len+=size_167;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__78;
short* mem_171;
int size_172;
void* __right_value30 = (void*)0;
char* old_buf_173;
int old_len_174;
int new_size_175;
void* __right_value31 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    mem_171=&value;
    size_172=sizeof(short);
    if(    self->len+size_172+1+1>=self->size    ) {
        old_buf_173=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3055, "char*"));
        memcpy(old_buf_173,self->buf,self->size);
        old_len_174=self->len;
        new_size_175=(self->size+size_172+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_175)), "/usr/local/include/comelang.h", 3059, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_173,old_len_174);
        self->buf[old_len_174]=0;
        self->size=new_size_175;
        (old_buf_173 = come_decrement_ref_count(old_buf_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_171,size_172);
    self->len+=size_172;
    self->buf[self->len]=0;
    __result_obj__79 = self;
    return __result_obj__79;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__80;
int len_176;
int new_size_177;
void* __right_value32 = (void*)0;
char* __dec_obj12;
int i_178;
struct buffer* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = ((void*)0);
        return __result_obj__80;
    }
    len_176=self->len;
    len_176=(len_176+3)&~3;
    if(    len_176>=self->size    ) {
        new_size_177=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_177)), "/usr/local/include/comelang.h", 3083, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_177;
    }
    for(    i_178=self->len    ;    i_178<len_176    ;    i_178++    ){
        self->buf[i_178]=0;
    }
    self->len=len_176;
    __result_obj__81 = self;
    return __result_obj__81;
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
struct buffer* result_179;
struct buffer* __result_obj__82;
struct buffer* __result_obj__83;
    result_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3113, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__82 = (struct buffer*)come_increment_ref_count(result_179);
        come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__82;
    }
    buffer_append_str(result_179,self);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_179);
    come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

char* buffer_to_string(struct buffer* self){
void* __right_value35 = (void*)0;
char* __result_obj__84;
void* __right_value36 = (void*)0;
char* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value35=__builtin_string(""))));
        (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__84;
    }
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(self->buf))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__86;
    __result_obj__86 = self->buf;
    return __result_obj__86;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_180;
struct buffer* __result_obj__87;
    result_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3140, "struct buffer*"))));
    buffer_append(result_180,self,sizeof(char)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_180);
    come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_181;
int i_182;
struct buffer* __result_obj__88;
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3147, "struct buffer*"))));
    for(    i_182=0    ;    i_182<len    ;    i_182++    ){
        buffer_append(result_181,self[i_182],strlen(self[i_182]));
    }
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_183;
struct buffer* __result_obj__89;
    result_183=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3156, "struct buffer*"))));
    buffer_append(result_183,(char*)self,sizeof(short)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_183);
    come_call_finalizer(buffer_finalize, result_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_184;
struct buffer* __result_obj__90;
    result_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3163, "struct buffer*"))));
    buffer_append(result_184,(char*)self,sizeof(int)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_184);
    come_call_finalizer(buffer_finalize, result_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_185;
struct buffer* __result_obj__91;
    result_185=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3170, "struct buffer*"))));
    buffer_append(result_185,(char*)self,sizeof(long)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_185);
    come_call_finalizer(buffer_finalize, result_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_186;
struct buffer* __result_obj__92;
    result_186=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3177, "struct buffer*"))));
    buffer_append(result_186,(char*)self,sizeof(float)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_186);
    come_call_finalizer(buffer_finalize, result_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* result_187;
struct buffer* __result_obj__93;
    result_187=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3184, "struct buffer*"))));
    buffer_append(result_187,(char*)self,sizeof(double)*len);
    __result_obj__93 = (struct buffer*)come_increment_ref_count(result_187);
    come_call_finalizer(buffer_finalize, result_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

char* buffer_printable(struct buffer* self){
int len_188;
void* __right_value51 = (void*)0;
char* result_189;
int n_190;
int i_191;
unsigned char c_192;
char* __result_obj__94;
    len_188=self->len;
    result_189=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_188*2+1)), "/usr/local/include/comelang.h", 3192, "char*"));
    n_190=0;
    for(    i_191=0    ;    i_191<len_188    ;    i_191++    ){
        c_192=self->buf[i_191];
        if(        (c_192>=0&&c_192<32)||c_192==127        ) {
            result_189[n_190++]=94;
            result_189[n_190++]=c_192+65-1;
        }
        else if(        c_192>127        ) {
            result_189[n_190++]=63;
        }
        else {
            result_189[n_190++]=c_192;
        }
    }
    result_189[n_190]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result_189);
    (result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_193;
struct list$1char$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0    ;    i_193<num_value    ;    i_193++    ){
        list$1char$_push_back(self,values[i_193]);
    }
    __result_obj__96 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_194;
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_195;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_196;
struct list$1char$* __result_obj__95;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1char$*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1char$*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1char$*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_197;
struct list_item$1char$* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value52 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1char$* __result_obj__97;
    __result_obj__97 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value56=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3233, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_199;
struct list$1char$p* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0    ;    i_199<num_value    ;    i_199++    ){
        list$1char$p_push_back(self,values[i_199]);
    }
    __result_obj__99 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_200;
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_201;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_202;
struct list$1char$p* __result_obj__98;
    if(    self->len==0    ) {
        litem_200=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1char$p*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1    ) {
        litem_201=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1char$p*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1char$p*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_203;
struct list_item$1char$p* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$p* __result_obj__100;
    __result_obj__100 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value61=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3238, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_205;
struct list$1short$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0    ;    i_205<num_value    ;    i_205++    ){
        list$1short$_push_back(self,values[i_205]);
    }
    __result_obj__102 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_206;
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_207;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_208;
struct list$1short$* __result_obj__101;
    if(    self->len==0    ) {
        litem_206=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1short$*"))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1    ) {
        litem_207=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1short$*"))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1short$*"))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_209;
struct list_item$1short$* prev_it_210;
    it_209=self->head;
    while(    it_209!=((void*)0)    ) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1short$* __result_obj__103;
    __result_obj__103 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value66=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3243, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_211;
struct list$1int$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0    ;    i_211<num_value    ;    i_211++    ){
        list$1int$_push_back(self,values[i_211]);
    }
    __result_obj__105 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_212;
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_213;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_214;
struct list$1int$* __result_obj__104;
    if(    self->len==0    ) {
        litem_212=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1int$*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1    ) {
        litem_213=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1int$*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1int$*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_215;
struct list_item$1int$* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1int$* __result_obj__106;
    __result_obj__106 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value71=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3248, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_217;
struct list$1long$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_217=0    ;    i_217<num_value    ;    i_217++    ){
        list$1long$_push_back(self,values[i_217]);
    }
    __result_obj__108 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_218;
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_219;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_220;
struct list$1long$* __result_obj__107;
    if(    self->len==0    ) {
        litem_218=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1long$*"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1    ) {
        litem_219=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1long$*"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1long$*"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_221;
struct list_item$1long$* prev_it_222;
    it_221=self->head;
    while(    it_221!=((void*)0)    ) {
        prev_it_222=it_221;
        it_221=it_221->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1long$* __result_obj__109;
    __result_obj__109 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value76=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3253, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_223;
struct list$1float$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_223=0    ;    i_223<num_value    ;    i_223++    ){
        list$1float$_push_back(self,values[i_223]);
    }
    __result_obj__111 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_224;
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_225;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_226;
struct list$1float$* __result_obj__110;
    if(    self->len==0    ) {
        litem_224=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1float$*"))));
        litem_224->prev=((void*)0);
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head=litem_224;
    }
    else if(    self->len==1    ) {
        litem_225=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1float$*"))));
        litem_225->prev=self->head;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head->next=litem_225;
    }
    else {
        litem_226=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1float$*"))));
        litem_226->prev=self->tail;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail->next=litem_226;
        self->tail=litem_226;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_227;
struct list_item$1float$* prev_it_228;
    it_227=self->head;
    while(    it_227!=((void*)0)    ) {
        prev_it_228=it_227;
        it_227=it_227->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1float$* __result_obj__112;
    __result_obj__112 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value81=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3258, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_229;
struct list$1double$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_229=0    ;    i_229<num_value    ;    i_229++    ){
        list$1double$_push_back(self,values[i_229]);
    }
    __result_obj__114 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_230;
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_231;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_232;
struct list$1double$* __result_obj__113;
    if(    self->len==0    ) {
        litem_230=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1double$*"))));
        litem_230->prev=((void*)0);
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail=litem_230;
        self->head=litem_230;
    }
    else if(    self->len==1    ) {
        litem_231=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1double$*"))));
        litem_231->prev=self->head;
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail=litem_231;
        self->head->next=litem_231;
    }
    else {
        litem_232=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1double$*"))));
        litem_232->prev=self->tail;
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail->next=litem_232;
        self->tail=litem_232;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_233;
struct list_item$1double$* prev_it_234;
    it_233=self->head;
    while(    it_233!=((void*)0)    ) {
        prev_it_234=it_233;
        it_233=it_233->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1double$* __result_obj__115;
    __result_obj__115 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value86=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3263, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
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
char* __result_obj__116;
int len_235;
void* __right_value88 = (void*)0;
char* result_236;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_235=strlen(self)+strlen(right);
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_235+1)), "/usr/local/include/comelang.h", 3492, "char*"));
    strncpy(result_236,self,len_235+1);
    strncat(result_236,right,len_235+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* string_operator_add(char* self, char* right){
void* __right_value89 = (void*)0;
char* __result_obj__118;
int len_237;
void* __right_value90 = (void*)0;
char* result_238;
char* __result_obj__119;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_237=strlen(self)+strlen(right);
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_237+1)), "/usr/local/include/comelang.h", 3507, "char*"));
    strncpy(result_238,self,len_237+1);
    strncat(result_238,right,len_237+1);
    __result_obj__119 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__120;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_239;
int i_240;
void* __right_value94 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    buf_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3520, "struct buffer*"))));
    for(    i_240=0    ;    i_240<right    ;    i_240++    ){
        buffer_append_str(buf_239,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_239))));
    come_call_finalizer(buffer_finalize, buf_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* string_operator_mult(char* self, int right){
void* __right_value95 = (void*)0;
char* __result_obj__122;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_241;
int i_242;
void* __right_value98 = (void*)0;
char* __result_obj__123;
    if(    self==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    buf_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3534, "struct buffer*"))));
    for(    i_242=0    ;    i_242<right    ;    i_242++    ){
        buffer_append_str(buf_241,self);
    }
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value98=buffer_to_string(buf_241))));
    come_call_finalizer(buffer_finalize, buf_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_243;
int i_244;
    result_243=(_Bool)0;
    for(    i_244=0    ;    i_244<len    ;    i_244++    ){
        if(        strncmp(self[i_244],str,strlen(self[i_244]))==0        ) {
            result_243=(_Bool)1;
            break;
        }
    }
    return result_243;
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
int result_245;
char* p_246;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_245=0;
    p_246=value;
    while(    *p_246    ) {
        result_245+=(*p_246);
        p_246++;
    }
    return result_245;
}

unsigned int string_get_hash_key(char* value){
int result_247;
char* p_248;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_247=0;
    p_248=value;
    while(    *p_248    ) {
        result_247+=(*p_248);
        p_248++;
    }
    return result_247;
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
_Bool result_249;
    result_249=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_249;
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
_Bool result_250;
    result_250=(c>=32&&c<=126);
    return result_250;
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
char* __result_obj__124;
int len_251;
void* __right_value100 = (void*)0;
char* result_252;
int i_253;
char* __result_obj__125;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_251=strlen(str);
    result_252=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_251+1)), "/usr/local/include/comelang.h", 3802, "char*"));
    for(    i_253=0    ;    i_253<len_251    ;    i_253++    ){
        result_252[i_253]=str[len_251-i_253-1];
    }
    result_252[len_251]=0;
    __result_obj__125 = (char*)come_increment_ref_count(result_252);
    (result_252 = come_decrement_ref_count(result_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__126;
int len_254;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__127;
void* __right_value104 = (void*)0;
char* __result_obj__128;
void* __right_value105 = (void*)0;
char* __result_obj__129;
void* __right_value106 = (void*)0;
char* result_255;
char* __result_obj__130;
    if(    str==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_254=strlen(str);
    if(    head<0    ) {
        head+=len_254;
    }
    if(    tail<0    ) {
        tail+=len_254+1;
    }
    if(    head>tail    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_254    ) {
        tail=len_254;
    }
    if(    head==tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    tail-head+1<1    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result_255=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3848, "char*"));
    memcpy(result_255,str+head,tail-head);
    result_255[tail-head]=0;
    __result_obj__130 = (char*)come_increment_ref_count(result_255);
    (result_255 = come_decrement_ref_count(result_255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__131;
int len_256;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__132;
void* __right_value110 = (void*)0;
char* __result_obj__133;
void* __right_value111 = (void*)0;
char* __result_obj__134;
void* __right_value112 = (void*)0;
char* result_257;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_256=strlen(str);
    if(    head<0    ) {
        head+=len_256;
    }
    if(    tail<0    ) {
        tail+=len_256+1;
    }
    if(    head>tail    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_256    ) {
        tail=len_256;
    }
    if(    head==tail    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail-head+1<1    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    result_257=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3891, "char*"));
    memcpy(result_257,str+head,tail-head);
    result_257[tail-head]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value113 = (void*)0;
char* __result_obj__136;
int len_258;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result_obj__137;
void* __right_value116 = (void*)0;
char* __result_obj__138;
void* __right_value117 = (void*)0;
char* __result_obj__139;
void* __right_value118 = (void*)0;
char* result_259;
char* __result_obj__140;
    if(    str==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_258=strlen(str);
    if(    head<0    ) {
        head+=len_258;
    }
    if(    tail<0    ) {
        tail+=len_258+1;
    }
    if(    head>tail    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value115=charp_reverse(((char*)(__right_value114=charp_substring(str,tail,head)))))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_258    ) {
        tail=len_258;
    }
    if(    head==tail    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    if(    tail-head+1<1    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_259=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3934, "char*"));
    memcpy(result_259,str+head,tail-head);
    result_259[tail-head]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_259);
    (result_259 = come_decrement_ref_count(result_259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xsprintf(char* msg, ...){
void* __right_value119 = (void*)0;
char* __result_obj__141;
va_list args_260;
char* result_261;
int len_262;
void* __right_value120 = (void*)0;
char* __result_obj__142;
void* __right_value121 = (void*)0;
char* result2_263;
char* __result_obj__143;
memset(&args_260, 0, sizeof(va_list));
result_261 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    __builtin_va_start(args_260,msg);
    len_262=vasprintf(&result_261,msg,args_260);
    __builtin_va_end(args_260);
    if(    len_262<0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result2_263=(char*)come_increment_ref_count(__builtin_string(result_261));
    free(result_261);
    __result_obj__143 = (char*)come_increment_ref_count(result2_263);
    (result2_263 = come_decrement_ref_count(result2_263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__144;
int len_264;
void* __right_value123 = (void*)0;
char* __result_obj__145;
void* __right_value124 = (void*)0;
char* __result_obj__146;
void* __right_value125 = (void*)0;
char* result_265;
char* __result_obj__147;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_264=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(str))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head+=len_264;
    }
    if(    tail<0    ) {
        tail+=len_264+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    tail>=len_264    ) {
        tail=len_264;
    }
    result_265=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_264-(tail-head)+1)), "/usr/local/include/comelang.h", 3996, "char*"));
    memcpy(result_265,str,head);
    memcpy(result_265+head,str+tail,len_264-tail);
    result_265[len_264-(tail-head)]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_265);
    (result_265 = come_decrement_ref_count(result_265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__148;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__148 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_266;
struct list_item$1char$ph* prev_it_267;
    it_266=self->head;
    while(    it_266!=((void*)0)    ) {
        prev_it_267=it_266;
        it_266=it_266->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_271;
char* __dec_obj13;
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj14;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj15;
struct list$1char$ph* __result_obj__150;
    if(    self->len==0    ) {
        litem_271=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1014, "struct list_item$1char$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj13=litem_271->item,
        litem_271->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1    ) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list_item$1char$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj14=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1034, "struct list_item$1char$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj15=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__150 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__150;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* __result_obj__149;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1char$ph* result_268;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* str_269;
int i_270;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1char$ph* __result_obj__151;
    if(    self==((void*)0)    ) {
        __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value127=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4009, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__149;
    }
    result_268=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4012, "struct list$1char$ph*"))));
    str_269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4014, "struct buffer*"))));
    for(    i_270=0    ;    i_270<charp_length(self)    ;    i_270++    ){
        if(        self[i_270]==c        ) {
            list$1char$ph_push_back(result_268,(char*)come_increment_ref_count(__builtin_string(str_269->buf)));
            buffer_reset(str_269);
        }
        else {
            buffer_append_char(str_269,self[i_270]);
        }
    }
    if(    buffer_length(str_269)!=0    ) {
        list$1char$ph_push_back(result_268,(char*)come_increment_ref_count(__builtin_string(str_269->buf)));
    }
    __result_obj__151 = (struct list$1char$ph*)come_increment_ref_count(result_268);
    come_call_finalizer(list$1char$ph$p_finalize, result_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value137 = (void*)0;
char* __result_obj__152;
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value137=xsprintf(msg,self))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__153;
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_printable(char* str){
int len_274;
void* __right_value139 = (void*)0;
char* result_275;
int n_276;
int i_277;
char c_278;
char* __result_obj__154;
    len_274=charp_length(str);
    result_275=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_274*2+1)), "/usr/local/include/comelang.h", 4046, "char*"));
    n_276=0;
    for(    i_277=0    ;    i_277<len_274    ;    i_277++    ){
        c_278=str[i_277];
        if(        (c_278>=0&&c_278<32)||c_278==127        ) {
            result_275[n_276++]=94;
            result_275[n_276++]=c_278+65-1;
        }
        else {
            result_275[n_276++]=c_278;
        }
    }
    result_275[n_276]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_275);
    (result_275 = come_decrement_ref_count(result_275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value140 = (void*)0;
char* __result_obj__155;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct buffer* result_279;
char* p_280;
char* p2_281;
void* __right_value143 = (void*)0;
char* __result_obj__156;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(self))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_279=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "struct buffer*"))));
    p_280=self;
    while(    (_Bool)1    ) {
        p2_281=strstr(p_280,str);
        if(        p2_281==((void*)0)        ) {
            p2_281=p_280;
            while(            *p2_281            ) {
                p2_281++;
            }
            buffer_append(result_279,p_280,p2_281-p_280);
            break;
        }
        buffer_append(result_279,p_280,p2_281-p_280);
        buffer_append_str(result_279,replace);
        p_280=p2_281+strlen(str);
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value143=buffer_to_string(result_279))));
    come_call_finalizer(buffer_finalize, result_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xbasename(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__157;
char* p_282;
void* __right_value145 = (void*)0;
char* __result_obj__158;
void* __right_value146 = (void*)0;
char* __result_obj__159;
void* __right_value147 = (void*)0;
char* __result_obj__160;
    if(    path==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    p_282=path+strlen(path);
    while(    p_282>=path    ) {
        if(        *p_282==47        ) {
            break;
        }
        else {
            p_282--;
        }
    }
    if(    p_282<path    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(path))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(p_282+1))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* xnoextname(char* path){
void* __right_value148 = (void*)0;
char* __result_obj__161;
void* __right_value149 = (void*)0;
char* path2_283;
char* p_284;
void* __right_value150 = (void*)0;
char* __result_obj__162;
void* __right_value151 = (void*)0;
char* __result_obj__163;
void* __right_value152 = (void*)0;
char* __result_obj__164;
    if(    path==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    path2_283=(char*)come_increment_ref_count(xbasename(path));
    p_284=path2_283+strlen(path2_283);
    while(    p_284>=path2_283    ) {
        if(        *p_284==46        ) {
            break;
        }
        else {
            p_284--;
        }
    }
    if(    p_284<path2_283    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path2_283))));
        (path2_283 = come_decrement_ref_count(path2_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value151=charp_substring(path2_283,0,p_284-path2_283))));
        (path2_283 = come_decrement_ref_count(path2_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (path2_283 = come_decrement_ref_count(path2_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* xextname(char* path){
void* __right_value153 = (void*)0;
char* __result_obj__165;
char* p_285;
void* __right_value154 = (void*)0;
char* __result_obj__166;
void* __right_value155 = (void*)0;
char* __result_obj__167;
void* __right_value156 = (void*)0;
char* __result_obj__168;
    if(    path==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    p_285=path+strlen(path);
    while(    p_285>=path    ) {
        if(        *p_285==46        ) {
            break;
        }
        else {
            p_285--;
        }
    }
    if(    p_285<path    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(path))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(p_285+1))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__169;
void* __right_value158 = (void*)0;
char* __result_obj__170;
    if(    self    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value159 = (void*)0;
char* __result_obj__171;
void* __right_value160 = (void*)0;
char* __result_obj__172;
    if(    self    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("true"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    else {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("false"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
}

char* char_to_string(char self){
void* __right_value161 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%c",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* short_to_string(short self){
void* __right_value162 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%d",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* int_to_string(int self){
void* __right_value163 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* long_to_string(long self){
void* __right_value164 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%ld",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value165 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* float_to_string(float self){
void* __right_value166 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%f",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* double_to_string(double self){
void* __right_value167 = (void*)0;
char* __result_obj__179;
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%lf",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* string_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__180;
void* __right_value169 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* charp_to_string(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__182;
void* __right_value171 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
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
char* __result_obj__184;
void* __right_value173 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    puts(self);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_print(char* self){
void* __right_value174 = (void*)0;
char* __result_obj__186;
void* __right_value175 = (void*)0;
char* __result_obj__187;
    if(    self==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    printf("%s",self);
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* charp_printf(char* self, ...){
void* __right_value176 = (void*)0;
char* __result_obj__188;
char* msg2_286;
va_list args_287;
void* __right_value177 = (void*)0;
char* __result_obj__189;
msg2_286 = (void*)0;
memset(&args_287, 0, sizeof(va_list));
    if(    self==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    __builtin_va_start(args_287,self);
    vasprintf(&msg2_286,self,args_287);
    __builtin_va_end(args_287);
    printf("%s",msg2_286);
    free(msg2_286);
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(self))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_288;
    for(    i_288=0    ;    i_288<self    ;    i_288++    ){
        block(parent,i_288);
    }
}

