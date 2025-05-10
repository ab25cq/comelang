/// previous struct definition ///
/// struct definition ///
typedef __builtin_va_list va_list;

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

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

typedef void* any;

typedef char* string;

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
char uart_tx_buf[128];
int tx_w=0;
int tx_r=0;
int uart_tx_busy=0;
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
void timer_interrupts_for_task_switch();
void timer_interrupts_for_scheduler();
void disable_timer_interrupts();
void task1();
void task2();
struct proc* alloc_proc(void (*task)());
void swtch(struct context* anonymous_var_nameX66, struct context* anonymous_var_nameX67);
void timer_reset();
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
int main();
void* _sbrk(long incr);
struct sBlock* find_free_block(unsigned long  int size);
struct sBlock* request_space(unsigned long  int size);
void* malloc(unsigned long  int size);
void free(void* ptr);
void* calloc(unsigned long  int n, unsigned long  int size);
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
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
static inline void intr_on(){
unsigned long  int x_0;
memset(&x_0, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_0));
    x_0|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_0));
}
static inline void intr_off(){
unsigned long  int x_1;
memset(&x_1, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_1));
    x_1&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_1));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_6;
memset(&x_6, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_6));
    return x_6;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_7;
memset(&x_7, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_7));
    return x_7;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_8;
memset(&x_8, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_8));
    return x_8;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_9;
memset(&x_9, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_9));
    return x_9;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_10;
memset(&x_10, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_10));
    return x_10;
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
int next_2;
    next_2=(tx_w+1)%128;
    while(    next_2==tx_r    ) {
    }
    uart_tx_buf[tx_w]=c;
    tx_w=next_2;
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
struct run* r_3;
r_3 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_3=(struct run*)pa;
    r_3->next=kmem.freelist;
    kmem.freelist=r_3;
}

void freerange(void* pa_start, void* pa_end){
char* p_4;
p_4 = (void*)0;
    p_4=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_4+4096<=(_end+4096*256)    ;    p_4+=4096    ){
        kfree(p_4);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_5;
void* __result_obj__1;
r_5 = (void*)0;
    r_5=kmem.freelist;
    if(    r_5    ) {
        kmem.freelist=r_5->next;
    }
    __result_obj__1 = (void*)r_5;
    return __result_obj__1;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_11;
    w_mtvec((unsigned long  int)timervec&~3);
    now_11=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_11+-1;
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
        puts("[1A]\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
    }
}

void task2(){
    puts("TASK2");
    printf("TASK2 TOP %p\n",task2);
    while(    1    ) {
        puts("[2A]\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
    }
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_18;
struct proc* __result_obj__6;
    result_18=kalloc();
    memset(result_18,0,sizeof(struct proc));
    result_18->stack=kalloc();
    result_18->context.sp=(unsigned long  int)(result_18->stack+4096);
    result_18->context.mepc=(unsigned long  int)task;
    result_18->state=(3);
    gProc[gNumProc++]=result_18;
    __result_obj__6 = result_18;
    return __result_obj__6;
}

void timer_reset(){
unsigned long  int now_19;
    now_19=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_19+10000000;
}

void timer_handler(){
struct proc* p_20;
struct context* tf_21;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_20=gProc[gActiveProc];
    tf_21=(struct context*)TRAPFRAME;
    p_20->context=*tf_21;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_21->ra);
    printf("ra %x\n",p_20->context.ra);
    printf("sp %x\n",tf_21->sp);
    printf("sp %x\n",p_20->context.sp);
    printf("gp %x\n",p_20->context.gp);
    printf("mepc %x\n",tf_21->mepc);
    printf("mepc %x\n",p_20->context.mepc);
    timer_reset();
    yield();
}

void yield(){
struct proc* p_22;
    p_22=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_22=gProc[gActiveProc];
    p_22->state=(3);
    scheduler();
}

void scheduler(){
int i_23;
struct proc* p_24;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_23=0        ;        i_23<gNumProc        ;        i_23++        ){
            p_24=gProc[i_23];
            if(            p_24->state==(3)            ) {
                gActiveProc=i_23;
                p_24->state=(4);
                printf("SWITCH TO %d\n",i_23);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_24->context);
                disable_timer_interrupts();
                p_24->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_25;
    now_25=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value0 = (void*)0;
    come_heap_init(0, 0, 0);
    puts("HELLO WORLD");
    kinit();
    ((char*)(__right_value0=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 490, "char*")));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    alloc_proc(task1);
    alloc_proc(task2);
    enable_timer_interrupts();
    scheduler();
    while(    1    ) {
        ;
    }
come_heap_final();
}

void* _sbrk(long incr){
void* __result_obj__7;
void* prev_26;
void* __result_obj__8;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__7 = (void*)-1;
        return __result_obj__7;
    }
    prev_26=heap_end;
    heap_end+=incr;
    __result_obj__8 = prev_26;
    return __result_obj__8;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_27;
struct sBlock* __result_obj__9;
struct sBlock* __result_obj__10;
    curr_27=free_list;
    while(    curr_27    ) {
        if(        curr_27->free&&curr_27->size>=size        ) {
            __result_obj__9 = curr_27;
            return __result_obj__9;
        }
        curr_27=curr_27->next;
    }
    __result_obj__10 = ((void*)0);
    return __result_obj__10;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_28;
struct sBlock* __result_obj__11;
struct sBlock* b_29;
struct sBlock* __result_obj__12;
    mem_28=_sbrk(size+sizeof(struct sBlock));
    if(    mem_28==(void*)-1    ) {
        __result_obj__11 = ((void*)0);
        return __result_obj__11;
    }
    b_29=(struct sBlock*)mem_28;
    b_29->size=size;
    b_29->next=((void*)0);
    b_29->free=0;
    __result_obj__12 = b_29;
    return __result_obj__12;
}

void* malloc(unsigned long  int size){
struct sBlock* block_30;
void* __result_obj__13;
void* __result_obj__14;
struct sBlock* curr_31;
void* __result_obj__15;
block_30 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_30=find_free_block(size))    ) {
        block_30->free=0;
        __result_obj__13 = (void*)(block_30+1);
        return __result_obj__13;
    }
    block_30=request_space(size);
    if(    !block_30    ) {
        __result_obj__14 = ((void*)0);
        return __result_obj__14;
    }
    if(    !free_list    ) {
        free_list=block_30;
    }
    else {
        curr_31=free_list;
        while(        curr_31->next        ) {
            curr_31=curr_31->next;
        }
        curr_31->next=block_30;
    }
    __result_obj__15 = (void*)(block_30+1);
    return __result_obj__15;
}

void free(void* ptr){
struct sBlock* block_32;
    if(    !ptr    ) {
        return;
    }
    block_32=((struct sBlock*)ptr)-1;
    block_32->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_33;
void* ptr_34;
void* __result_obj__16;
    total_33=n*size;
    ptr_34=malloc(total_33);
    if(    ptr_34    ) {
        memset(ptr_34,0,total_33);
    }
    __result_obj__16 = ptr_34;
    return __result_obj__16;
}

char* strdup(const char* s){
unsigned long  int len_35;
char* p_36;
char* __result_obj__17;
    len_35=strlen(s)+1;
    p_36=malloc(len_35);
    if(    p_36    ) {
        memcpy(p_36,s,len_35);
    }
    __result_obj__17 = p_36;
    return __result_obj__17;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__18;
char* __result_obj__19;
char* __result_obj__20;
    if(    !*needle    ) {
        __result_obj__18 = (char*)haystack;
        return __result_obj__18;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_37=haystack;
        const char* n_38=needle;
        while(        *h_37&&*n_38&&(*h_37==*n_38)        ) {
            h_37++;
            n_38++;
        }
        if(        !*n_38        ) {
            __result_obj__19 = (char*)haystack;
            return __result_obj__19;
        }
    }
    __result_obj__20 = ((void*)0);
    return __result_obj__20;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_39;
int i_40;
void* __result_obj__21;
    cdst_39=(char*)dst;
    for(    i_40=0    ;    i_40<n    ;    i_40++    ){
        cdst_39[i_40]=c;
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_41;
const unsigned char* s2_42;
memset(&s1_41, 0, sizeof(const unsigned char*));
memset(&s2_42, 0, sizeof(const unsigned char*));
    s1_41=v1;
    s2_42=v2;
    while(    n-->0    ) {
        if(        *s1_41!=*s2_42        ) {
            return *s1_41-*s2_42;
        }
        s1_41++,s2_42++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_43;
char* d_44;
void* __result_obj__22;
void* __result_obj__23;
s_43 = (void*)0;
d_44 = (void*)0;
    if(    n==0    ) {
        __result_obj__22 = dst;
        return __result_obj__22;
    }
    s_43=src;
    d_44=dst;
    if(    s_43<d_44&&s_43+n>d_44    ) {
        s_43+=n;
        d_44+=n;
        while(        n-->0        ) {
            *--d_44=*--s_43;
        }
    }
    else {
        while(        n-->0        ) {
            *d_44++=*s_43++;
        }
    }
    __result_obj__23 = dst;
    return __result_obj__23;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__24;
    __result_obj__24 = memmove(dst,src,n);
    return __result_obj__24;
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
char* os_45;
char* __result_obj__25;
os_45 = (void*)0;
    os_45=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__25 = os_45;
    return __result_obj__25;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_46;
char* __result_obj__26;
char* __result_obj__27;
os_46 = (void*)0;
    os_46=s;
    if(    n<=0    ) {
        __result_obj__26 = os_46;
        return __result_obj__26;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__27 = os_46;
    return __result_obj__27;
}

int strlen(const char* s){
int n_47;
memset(&n_47, 0, sizeof(int));
    for(    n_47=0    ;    s[n_47]    ;    n_47++    ){
        ;
    }
    return n_47;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_48;
char* __result_obj__28;
    d_48=dest;
    while(    *d_48    ) {
        d_48++;
    }
    while(    n--&&*src    ) {
        *d_48++=*src++;
    }
    *d_48=0;
    __result_obj__28 = dest;
    return __result_obj__28;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_49;
char* __result_obj__29;
int digit_53;
char* __result_obj__30;
    p_49=buf;
    char tmp_50[32];
    memset(&tmp_50, 0, sizeof(char)    *(32)    );
    int i_51=0;
    int negative_52=0;
    if(    base<2||base>16    ) {
        *p_49=0;
        __result_obj__29 = p_49;
        return __result_obj__29;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_52=1;
        val_=-val_;
    }
    do {
        digit_53=val_%base;
        tmp_50[i_51++]=(((digit_53<10))?(48+digit_53):(97+digit_53-10));
        val_/=base;
    } while(    val_    );
    if(    negative_52    ) {
        *p_49++=45;
    }
    while(    i_51--    ) {
        *p_49++=tmp_50[i_51];
    }
    *p_49=0;
    __result_obj__30 = buf;
    return __result_obj__30;
}

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_54;
char* p_55;
const char* s_56;
unsigned long  int remaining_58;
int __result_obj__31;
int __result_obj__32;
memset(&ap_54, 0, sizeof(va_list));
s_56 = (void*)0;
    __builtin_va_start(ap_54,fmt);
    p_55=out;
    char buf_57[32];
    memset(&buf_57, 0, sizeof(char)    *(32)    );
    remaining_58=out_size;
    if(    remaining_58==0    ) {
        __builtin_va_end(ap_54);
        __result_obj__31 = 0;
        come_call_finalizer(va_list_finalize, (&ap_54), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__31;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_58>1            ) {
                *p_55++=*fmt;
                remaining_58--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_56=__builtin_va_arg(ap_54,const char*);
            while(            *s_56&&remaining_58>1            ) {
                *p_55++=*s_56++;
                remaining_58--;
            }
            break;
            case 100:
            itoa(buf_57,__builtin_va_arg(ap_54,int),10,0);
            s_56=buf_57;
            while(            *s_56&&remaining_58>1            ) {
                *p_55++=*s_56++;
                remaining_58--;
            }
            break;
            case 120:
            itoa(buf_57,(unsigned int)__builtin_va_arg(ap_54,int),16,1);
            s_56=buf_57;
            while(            *s_56&&remaining_58>1            ) {
                *p_55++=*s_56++;
                remaining_58--;
            }
            break;
            case 99:
            if(            remaining_58>1            ) {
                *p_55++=(char)__builtin_va_arg(ap_54,int);
                remaining_58--;
            }
            break;
            case 112:
            s_56="0x";
            while(            *s_56&&remaining_58>1            ) {
                *p_55++=*s_56++;
                remaining_58--;
            }
            itoa(buf_57,(long)__builtin_va_arg(ap_54,void*),16,1);
            s_56=buf_57;
            while(            *s_56&&remaining_58>1            ) {
                *p_55++=*s_56++;
                remaining_58--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_57,__builtin_va_arg(ap_54,long),10,1);
                s_56=buf_57;
                while(                *s_56&&remaining_58>1                ) {
                    *p_55++=*s_56++;
                    remaining_58--;
                }
            }
            break;
            default:
            if(            remaining_58>1            ) {
                *p_55++=37;
                remaining_58--;
                if(                remaining_58>1                ) {
                    *p_55++=*fmt;
                    remaining_58--;
                }
            }
            break;
        }
    }
    *p_55=0;
    __builtin_va_end(ap_54);
    __result_obj__32 = p_55-out;
    come_call_finalizer(va_list_finalize, (&ap_54), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

int vasprintf(char** result, const char* fmt, ...){
va_list ap_59;
unsigned long  int out_size_61;
char* p_62;
const char* s_63;
unsigned long  int remaining_65;
int __result_obj__33;
int __result_obj__34;
memset(&ap_59, 0, sizeof(va_list));
s_63 = (void*)0;
    __builtin_va_start(ap_59,fmt);
    char out_60[256];
    memset(&out_60, 0, sizeof(char)    *(256)    );
    out_size_61=256;
    p_62=out_60;
    char buf_64[32];
    memset(&buf_64, 0, sizeof(char)    *(32)    );
    remaining_65=out_size_61;
    if(    remaining_65==0    ) {
        __builtin_va_end(ap_59);
        __result_obj__33 = 0;
        come_call_finalizer(va_list_finalize, (&ap_59), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__33;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_65>1            ) {
                *p_62++=*fmt;
                remaining_65--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_63=__builtin_va_arg(ap_59,const char*);
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 100:
            itoa(buf_64,__builtin_va_arg(ap_59,int),10,0);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 120:
            itoa(buf_64,(unsigned int)__builtin_va_arg(ap_59,int),16,1);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 99:
            if(            remaining_65>1            ) {
                *p_62++=(char)__builtin_va_arg(ap_59,int);
                remaining_65--;
            }
            break;
            case 112:
            s_63="0x";
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            itoa(buf_64,(long)__builtin_va_arg(ap_59,void*),16,1);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_64,__builtin_va_arg(ap_59,long),10,1);
                s_63=buf_64;
                while(                *s_63&&remaining_65>1                ) {
                    *p_62++=*s_63++;
                    remaining_65--;
                }
            }
            break;
            default:
            if(            remaining_65>1            ) {
                *p_62++=37;
                remaining_65--;
                if(                remaining_65>1                ) {
                    *p_62++=*fmt;
                    remaining_65--;
                }
            }
            break;
        }
    }
    *p_62=0;
    __builtin_va_end(ap_59);
    *result=malloc(sizeof(char)*(p_62-out_60+1));
    strncpy(*result,out_60,p_62-out_60);
    __result_obj__34 = p_62-out_60;
    come_call_finalizer(va_list_finalize, (&ap_59), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_66;
char* p_67;
const char* s_68;
unsigned long  int remaining_70;
int __result_obj__35;
int __result_obj__36;
memset(&ap_66, 0, sizeof(va_list));
s_68 = (void*)0;
    __builtin_va_start(ap_66,fmt);
    p_67=out;
    char buf_69[32];
    memset(&buf_69, 0, sizeof(char)    *(32)    );
    remaining_70=out_size;
    if(    remaining_70==0    ) {
        __builtin_va_end(ap_66);
        __result_obj__35 = 0;
        come_call_finalizer(va_list_finalize, (&ap_66), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__35;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_70>1            ) {
                *p_67++=*fmt;
                remaining_70--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_68=__builtin_va_arg(ap_66,const char*);
            while(            *s_68&&remaining_70>1            ) {
                *p_67++=*s_68++;
                remaining_70--;
            }
            break;
            case 100:
            itoa(buf_69,__builtin_va_arg(ap_66,int),10,0);
            s_68=buf_69;
            while(            *s_68&&remaining_70>1            ) {
                *p_67++=*s_68++;
                remaining_70--;
            }
            break;
            case 120:
            itoa(buf_69,(unsigned int)__builtin_va_arg(ap_66,int),16,1);
            s_68=buf_69;
            while(            *s_68&&remaining_70>1            ) {
                *p_67++=*s_68++;
                remaining_70--;
            }
            break;
            case 99:
            if(            remaining_70>1            ) {
                *p_67++=(char)__builtin_va_arg(ap_66,int);
                remaining_70--;
            }
            break;
            case 112:
            s_68="0x";
            while(            *s_68&&remaining_70>1            ) {
                *p_67++=*s_68++;
                remaining_70--;
            }
            itoa(buf_69,(long)__builtin_va_arg(ap_66,void*),16,1);
            s_68=buf_69;
            while(            *s_68&&remaining_70>1            ) {
                *p_67++=*s_68++;
                remaining_70--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_69,__builtin_va_arg(ap_66,long),10,1);
                s_68=buf_69;
                while(                *s_68&&remaining_70>1                ) {
                    *p_67++=*s_68++;
                    remaining_70--;
                }
            }
            break;
            default:
            if(            remaining_70>1            ) {
                *p_67++=37;
                remaining_70--;
                if(                remaining_70>1                ) {
                    *p_67++=*fmt;
                    remaining_70--;
                }
            }
            break;
        }
    }
    *p_67=0;
    __builtin_va_end(ap_66);
    __result_obj__36 = p_67-out;
    come_call_finalizer(va_list_finalize, (&ap_66), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

void printint(long num, int base, int is_signed){
int i_72;
unsigned long  int n_73;
memset(&n_73, 0, sizeof(unsigned long  int));
    char buf_71[32];
    memset(&buf_71, 0, sizeof(char)    *(32)    );
    i_72=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_73=-num;
    }
    else {
        n_73=num;
    }
    do {
        buf_71[i_72++]="0123456789abcdef"[n_73%base];
        n_73/=base;
    } while(    n_73>0    );
    while(    i_72--    ) {
        putchar(buf_71[i_72]);
    }
}

int printf(const char* fmt, ...){
va_list ap_74;
char* p_75;
int val__76;
unsigned int val__77;
unsigned long  int val__78;
char c_80;
int __result_obj__37;
memset(&ap_74, 0, sizeof(va_list));
p_75 = (void*)0;
    __builtin_va_start(ap_74,fmt);
    for(    p_75=fmt    ;    *p_75    ;    p_75++    ){
        if(        *p_75!=37        ) {
            putchar(*p_75);
            continue;
        }
        p_75++;
        switch (        *p_75) {
            case 100:
            {
                val__76=__builtin_va_arg(ap_74,int);
                printint(val__76,10,1);
                break;
            }
            case 120:
            {
                val__77=__builtin_va_arg(ap_74,unsigned int);
                printint(val__77,16,0);
                break;
            }
            case 112:
            {
                val__78=(unsigned long  int)__builtin_va_arg(ap_74,void*);
                putchar(48);
                putchar(120);
                printint(val__78,16,0);
                break;
            }
            case 115:
            {
                const char* s_79=__builtin_va_arg(ap_74,const char*);
                if(                !s_79                ) {
                    s_79="(null)";
                }
                while(                *s_79                ) {
                    putchar(*s_79++);
                }
                break;
            }
            case 99:
            {
                c_80=(char)__builtin_va_arg(ap_74,int);
                putchar(c_80);
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
                putchar(*p_75);
                break;
            }
        }
    }
    __builtin_va_end(ap_74);
    __result_obj__37 = 0;
    come_call_finalizer(va_list_finalize, (&ap_74), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__37;
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
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct buffer* buf_81;
int i_82;
void* __right_value3 = (void*)0;
    buf_81=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 852, "struct buffer*"))));
    buffer_append_format(buf_81,"%s %d\n",sname,sline);
    for(    i_82=gNumComeStackFrame-2    ;    i_82>=0    ;    i_82--    ){
        buffer_append_format(buf_81,"%s %d #%d\n",gComeStackFrameSName[i_82],gComeStackFrameSLine[i_82],gComeStackFrameID[i_82]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_81))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_83;
    for(    i_83=gNumComeStackFrame-1    ;    i_83>=0    ;    i_83--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_83],gComeStackFrameSLine[i_83],gComeStackFrameID[i_83]);
    }
}

char* come_get_stackframe(){
void* __right_value4 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(gComeStackFrameBuffer))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
int i_84;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_84=0    ;    i_84<gHeapPages.mSizePages    ;    i_84++    ){
        gHeapPages.mPages[i_84]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_85;
int n_86;
_Bool flag_87;
int i_88;
struct sMemHeaderTiny* it_89;
int n_90;
int i_91;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_85=gAllocMem;
        n_86=0;
        while(        it_85        ) {
            n_86++;
            flag_87=(_Bool)0;
            printf("#%d ",n_86);
            if(            it_85->class_name            ) {
                printf("%p (%s): ",(char*)it_85+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_85->class_name);
            }
            for(            i_88=0            ;            i_88<16            ;            i_88++            ){
                if(                it_85->sname[i_88]                ) {
                    printf("%s %d #%d, ",it_85->sname[i_88],it_85->sline[i_88],it_85->id[i_88]);
                    flag_87=(_Bool)1;
                }
            }
            if(            flag_87            ) {
                puts("");
            }
            it_85=it_85->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_86,gNumAlloc,gNumFree);
    }
    else {
        it_89=(struct sMemHeaderTiny*)gAllocMem;
        n_90=0;
        while(        it_89        ) {
            n_90++;
            if(            it_89->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_90,(char*)it_89+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_89->class_name,it_89->sname,it_89->sline);
            }
            it_89=it_89->next;
        }
        if(        n_90>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_90,gNumAlloc,gNumFree);
        }
    }
    for(    i_91=0    ;    i_91<gHeapPages.mSizePages    ;    i_91++    ){
        free(gHeapPages.mPages[i_91]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_92;
unsigned long  int free_area_93;
int new_size_pages_94;
char** new_pages_95;
int i_96;
void* __result_obj__39;
    result_92=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_92=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_92,0,size);
        }
        if(        result_92==((void*)0)        ) {
            free_area_93=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_93            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_94=gHeapPages.mSizePages*2;
                    new_pages_95=calloc(1,sizeof(char*)*new_size_pages_94);
                    i_96=0;
                    for(                    ;                    i_96<gHeapPages.mSizePages                    ;                    i_96++                    ){
                        new_pages_95[i_96]=gHeapPages.mPages[i_96];
                    }
                    for(                    ;                    i_96<new_size_pages_94                    ;                    i_96++                    ){
                        new_pages_95[i_96]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_95;
                    gHeapPages.mSizePages=new_size_pages_94;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_92=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_92=calloc(1,size);
    }
    __result_obj__39 = result_92;
    return __result_obj__39;
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

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_103;
struct sMemHeader* prev_it_104;
struct sMemHeader* next_it_105;
unsigned long  int size_106;
struct sMemHeaderTiny* it_107;
struct sMemHeaderTiny* prev_it_108;
struct sMemHeaderTiny* next_it_109;
unsigned long  int size_110;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_103=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_103->allocated!=177783            ) {
                return;
            }
            it_103->allocated=0;
            prev_it_104=it_103->prev;
            next_it_105=it_103->next;
            if(            gAllocMem==it_103            ) {
                gAllocMem=next_it_105;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_104                ) {
                    prev_it_104->next=next_it_105;
                }
                if(                next_it_105                ) {
                    next_it_105->prev=prev_it_104;
                }
            }
            size_106=it_103->size;
            if(            size_106<4096            ) {
                if(                gHeapPages.mFreeMem[size_106]==((void*)0)                ) {
                    it_103->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_106]=(struct sMemHeaderTiny*)it_103;
                }
                else {
                    it_103->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_106];
                    gHeapPages.mFreeMem[size_106]=(struct sMemHeaderTiny*)it_103;
                }
            }
            else {
                free(it_103);
            }
            gNumFree++;
        }
        else {
            it_107=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_107->allocated!=177783            ) {
                return;
            }
            it_107->allocated=0;
            prev_it_108=it_107->prev;
            next_it_109=it_107->next;
            if(            gAllocMem==it_107            ) {
                gAllocMem=(struct sMemHeader*)next_it_109;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_108                ) {
                    prev_it_108->next=next_it_109;
                }
                if(                next_it_109                ) {
                    next_it_109->prev=prev_it_108;
                }
            }
            size_110=it_107->size;
            if(            size_110<4096            ) {
                if(                gHeapPages.mFreeMem[size_110]==((void*)0)                ) {
                    it_107->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_110]=it_107;
                }
                else {
                    it_107->free_next=gHeapPages.mFreeMem[size_110];
                    gHeapPages.mFreeMem[size_110]=it_107;
                }
            }
            else {
                free(it_107);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_111;
char* __result_obj__42;
struct sMemHeaderTiny* it_112;
char* __result_obj__43;
    if(    gComeDebugLib    ) {
        it_111=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_111->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_111);
            exit(2);
        }
        __result_obj__42 = it_111->class_name;
        return __result_obj__42;
    }
    else {
        it_112=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_112->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_112);
            exit(2);
        }
        __result_obj__43 = it_112->class_name;
        return __result_obj__43;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_113;
int i_114;
struct sMemHeaderTiny* it_115;
    if(    gComeDebugLib    ) {
        it_113=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_113->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_113->class_name        ) {
            printf("(%s): ",it_113->class_name);
        }
        for(        i_114=0        ;        i_114<16        ;        i_114++        ){
            if(            it_113->sname[i_114]            ) {
                printf("%s %d #%d, ",it_113->sname[i_114],it_113->sline[i_114],it_113->id[i_114]);
            }
        }
        puts("");
    }
    else {
        it_115=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_115->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_115->class_name,it_115->sname,it_115->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_116;
unsigned long  int* ref_count_117;
unsigned long  int* size2_118;
void* __result_obj__44;
    mem_116=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_117=(unsigned long  int*)mem_116;
    *ref_count_117=0;
    size2_118=(unsigned long  int*)(mem_116+sizeof(unsigned long  int));
    *size2_118=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__44 = mem_116+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__44;
}

void come_free(void* mem){
unsigned long  int* ref_count_119;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_119=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_119);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__45;
char* mem_120;
unsigned long  int* size_p_121;
unsigned long  int size_122;
void* result_123;
void* __result_obj__46;
    if(    !block    ) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_120=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_121=(unsigned long  int*)(mem_120+sizeof(unsigned long  int));
    size_122=*size_p_121-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_123=come_calloc_v2(1,size_122,sname,sline,class_name);
    memcpy(result_123,block,size_122);
    __result_obj__46 = result_123;
    return __result_obj__46;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__47;
unsigned long  int* ref_count_124;
void* __result_obj__48;
    if(    mem==((void*)0)    ) {
        __result_obj__47 = mem;
        return __result_obj__47;
    }
    ref_count_124=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_124)++;
    __result_obj__48 = mem;
    return __result_obj__48;
}

void* come_print_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_125;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_125=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_125);
    __result_obj__50 = mem;
    return __result_obj__50;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_126;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_126=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_126;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__51;
void* __result_obj__52;
unsigned long  int* ref_count_127;
unsigned long  int count_128;
void (*finalizer_129)(void*);
void* __result_obj__53;
void* __result_obj__54;
memset(&finalizer_129, 0, sizeof(void (*)(void*)));
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
    ref_count_127=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_127)--;
    }
    count_128=*ref_count_127;
    if(    !no_free&&count_128<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_129=protocol_fun;
            finalizer_129(protocol_obj);
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
void (*finalizer_130)(void*);
void (*finalizer_131)(void*);
void (*finalizer_132)(void*);
unsigned long  int* ref_count_133;
unsigned long  int count_134;
void (*finalizer_135)(void*);
void (*finalizer_136)(void*);
void (*finalizer_137)(void*);
memset(&finalizer_130, 0, sizeof(void (*)(void*)));
memset(&finalizer_131, 0, sizeof(void (*)(void*)));
memset(&finalizer_132, 0, sizeof(void (*)(void*)));
memset(&finalizer_135, 0, sizeof(void (*)(void*)));
memset(&finalizer_136, 0, sizeof(void (*)(void*)));
memset(&finalizer_137, 0, sizeof(void (*)(void*)));
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
                finalizer_130=protocol_fun;
                finalizer_130(protocol_obj);
            }
            finalizer_131=fun;
            finalizer_131(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_132=protocol_fun;
                finalizer_132(protocol_obj);
            }
        }
    }
    else {
        ref_count_133=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_133)--;
        }
        count_134=*ref_count_133;
        if(        !no_free&&count_134<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_135=protocol_fun;
                        finalizer_135(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_136=fun;
                        finalizer_136(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_137=protocol_fun;
                        finalizer_137(protocol_obj);
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
int len_138;
void* __right_value5 = (void*)0;
char* result_139;
char* __result_obj__56;
    if(    str==((void*)0)    ) {
        __result_obj__55 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__55;
    }
    len_138=strlen(str)+1;
    result_139=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_138)), "/usr/local/include/comelang.h", 1539, "char*"));
    strncpy(result_139,str,len_138);
    __result_obj__56 = (char*)come_increment_ref_count(result_139);
    (result_139 = come_decrement_ref_count(result_139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
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
void* __right_value6 = (void*)0;
char* __result_obj__57;
    __result_obj__57 = (char*)come_increment_ref_count(((char*)(__right_value6=come_get_stackframe())));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__57;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__58;
    __result_obj__58 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__58;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value7 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__59;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3493, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__59 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value8 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__60;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3503, "char*"));
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
void* __right_value9 = (void*)0;
struct buffer* result_140;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__61;
    }
    result_140=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3523, "struct buffer*"));
    result_140->size=self->size;
    __dec_obj3=result_140->buf,
    result_140->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3526, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_140->len=self->len;
    memcpy(result_140->buf,self->buf,self->len);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(result_140);
    come_call_finalizer(buffer_finalize, result_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__63;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__63 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value13 = (void*)0;
char* old_buf_141;
int old_len_142;
int new_size_143;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_141=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3574, "char*"));
        memcpy(old_buf_141,self->buf,self->size);
        old_len_142=self->len;
        new_size_143=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_143)), "/usr/local/include/comelang.h", 3578, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_141,old_len_142);
        self->buf[old_len_142]=0;
        self->size=new_size_143;
        (old_buf_141 = come_decrement_ref_count(old_buf_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__66;
void* __right_value15 = (void*)0;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_144=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3597, "char*"));
        old_len_145=self->len;
        new_size_146=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_146)), "/usr/local/include/comelang.h", 3601, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        (old_buf_144 = come_decrement_ref_count(old_buf_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__68;
int size_147;
void* __right_value17 = (void*)0;
char* old_buf_148;
int old_len_149;
int new_size_150;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__69;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    size_147=strlen(mem);
    if(    self->len+size_147+1+1>=self->size    ) {
        old_buf_148=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3623, "char*"));
        memcpy(old_buf_148,self->buf,self->size);
        old_len_149=self->len;
        new_size_150=(self->size+size_147+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_150)), "/usr/local/include/comelang.h", 3627, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_148,old_len_149);
        self->buf[old_len_149]=0;
        self->size=new_size_150;
        (old_buf_148 = come_decrement_ref_count(old_buf_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_147);
    self->len+=size_147;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__70;
va_list args_151;
char* result_152;
int len_153;
struct buffer* __result_obj__71;
void* __right_value19 = (void*)0;
char* mem_154;
int size_155;
void* __right_value20 = (void*)0;
char* old_buf_156;
int old_len_157;
int new_size_158;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__72;
memset(&args_151, 0, sizeof(va_list));
result_152 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    __builtin_va_start(args_151,msg);
    len_153=vasprintf(&result_152,msg,args_151);
    __builtin_va_end(args_151);
    if(    len_153<0    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    mem_154=(char*)come_increment_ref_count(__builtin_string(result_152));
    size_155=strlen(mem_154);
    if(    self->len+size_155+1+1>=self->size    ) {
        old_buf_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3660, "char*"));
        memcpy(old_buf_156,self->buf,self->size);
        old_len_157=self->len;
        new_size_158=(self->size+size_155+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_158)), "/usr/local/include/comelang.h", 3664, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_156,old_len_157);
        self->buf[old_len_157]=0;
        self->size=new_size_158;
        (old_buf_156 = come_decrement_ref_count(old_buf_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_154,size_155);
    self->len+=size_155;
    self->buf[self->len]=0;
    free(result_152);
    __result_obj__72 = self;
    (mem_154 = come_decrement_ref_count(mem_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__72;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__73;
int size_159;
void* __right_value22 = (void*)0;
char* old_buf_160;
int old_len_161;
int new_size_162;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__74;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    size_159=strlen(mem)+1;
    if(    self->len+size_159+1+1+1>=self->size    ) {
        old_buf_160=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3686, "char*"));
        memcpy(old_buf_160,self->buf,self->size);
        old_len_161=self->len;
        new_size_162=(self->size+size_159+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_162)), "/usr/local/include/comelang.h", 3690, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_160,old_len_161);
        self->buf[old_len_161]=0;
        self->size=new_size_162;
        (old_buf_160 = come_decrement_ref_count(old_buf_160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_159);
    self->len+=size_159;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__75;
int* mem_163;
int size_164;
void* __right_value24 = (void*)0;
char* old_buf_165;
int old_len_166;
int new_size_167;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_163=&value;
    size_164=sizeof(int);
    if(    self->len+size_164+1+1>=self->size    ) {
        old_buf_165=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3713, "char*"));
        memcpy(old_buf_165,self->buf,self->size);
        old_len_166=self->len;
        new_size_167=(self->size+size_164+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_167)), "/usr/local/include/comelang.h", 3717, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_165,old_len_166);
        self->buf[old_len_166]=0;
        self->size=new_size_167;
        (old_buf_165 = come_decrement_ref_count(old_buf_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_163,size_164);
    self->len+=size_164;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_168;
int size_169;
void* __right_value26 = (void*)0;
char* old_buf_170;
int old_len_171;
int new_size_172;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__77;
    mem_168=&value;
    size_169=sizeof(long);
    if(    self->len+size_169+1+1>=self->size    ) {
        old_buf_170=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3736, "char*"));
        memcpy(old_buf_170,self->buf,self->size);
        old_len_171=self->len;
        new_size_172=(self->size+size_169+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_172)), "/usr/local/include/comelang.h", 3740, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_170,old_len_171);
        self->buf[old_len_171]=0;
        self->size=new_size_172;
        (old_buf_170 = come_decrement_ref_count(old_buf_170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_168,size_169);
    self->len+=size_169;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__78;
short* mem_173;
int size_174;
void* __right_value28 = (void*)0;
char* old_buf_175;
int old_len_176;
int new_size_177;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    mem_173=&value;
    size_174=sizeof(short);
    if(    self->len+size_174+1+1>=self->size    ) {
        old_buf_175=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3763, "char*"));
        memcpy(old_buf_175,self->buf,self->size);
        old_len_176=self->len;
        new_size_177=(self->size+size_174+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_177)), "/usr/local/include/comelang.h", 3767, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_175,old_len_176);
        self->buf[old_len_176]=0;
        self->size=new_size_177;
        (old_buf_175 = come_decrement_ref_count(old_buf_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_173,size_174);
    self->len+=size_174;
    self->buf[self->len]=0;
    __result_obj__79 = self;
    return __result_obj__79;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__80;
int len_178;
int new_size_179;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_180;
struct buffer* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = ((void*)0);
        return __result_obj__80;
    }
    len_178=self->len;
    len_178=(len_178+3)&~3;
    if(    len_178>=self->size    ) {
        new_size_179=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_179)), "/usr/local/include/comelang.h", 3791, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_179;
    }
    for(    i_180=self->len    ;    i_180<len_178    ;    i_180++    ){
        self->buf[i_180]=0;
    }
    self->len=len_178;
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_181;
struct buffer* __result_obj__82;
struct buffer* __result_obj__83;
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3821, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__82 = (struct buffer*)come_increment_ref_count(result_181);
        come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__82;
    }
    buffer_append_str(result_181,self);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__84;
void* __right_value34 = (void*)0;
char* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__84;
    }
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__86;
    __result_obj__86 = self->buf;
    return __result_obj__86;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_182;
struct buffer* __result_obj__87;
    result_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3848, "struct buffer*"))));
    buffer_append(result_182,self,sizeof(char)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_182);
    come_call_finalizer(buffer_finalize, result_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_183;
int i_184;
struct buffer* __result_obj__88;
    result_183=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3855, "struct buffer*"))));
    for(    i_184=0    ;    i_184<len    ;    i_184++    ){
        buffer_append(result_183,self[i_184],strlen(self[i_184]));
    }
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_183);
    come_call_finalizer(buffer_finalize, result_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_185;
struct buffer* __result_obj__89;
    result_185=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3864, "struct buffer*"))));
    buffer_append(result_185,(char*)self,sizeof(short)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_185);
    come_call_finalizer(buffer_finalize, result_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_186;
struct buffer* __result_obj__90;
    result_186=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3871, "struct buffer*"))));
    buffer_append(result_186,(char*)self,sizeof(int)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_186);
    come_call_finalizer(buffer_finalize, result_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_187;
struct buffer* __result_obj__91;
    result_187=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3878, "struct buffer*"))));
    buffer_append(result_187,(char*)self,sizeof(long)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_187);
    come_call_finalizer(buffer_finalize, result_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_188;
struct buffer* __result_obj__92;
    result_188=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3885, "struct buffer*"))));
    buffer_append(result_188,(char*)self,sizeof(float)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_188);
    come_call_finalizer(buffer_finalize, result_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_189;
struct buffer* __result_obj__93;
    result_189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3892, "struct buffer*"))));
    buffer_append(result_189,(char*)self,sizeof(double)*len);
    __result_obj__93 = (struct buffer*)come_increment_ref_count(result_189);
    come_call_finalizer(buffer_finalize, result_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

char* buffer_printable(struct buffer* self){
int len_190;
void* __right_value49 = (void*)0;
char* result_191;
int n_192;
int i_193;
unsigned char c_194;
char* __result_obj__94;
    len_190=self->len;
    result_191=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_190*2+1)), "/usr/local/include/comelang.h", 3900, "char*"));
    n_192=0;
    for(    i_193=0    ;    i_193<len_190    ;    i_193++    ){
        c_194=self->buf[i_193];
        if(        (c_194>=0&&c_194<32)||c_194==127        ) {
            result_191[n_192++]=94;
            result_191[n_192++]=c_194+65-1;
        }
        else if(        c_194>127        ) {
            result_191[n_192++]=63;
        }
        else {
            result_191[n_192++]=c_194;
        }
    }
    result_191[n_192]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result_191);
    (result_191 = come_decrement_ref_count(result_191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_195;
struct list$1char$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0    ;    i_195<num_value    ;    i_195++    ){
        list$1char$_push_back(self,values[i_195]);
    }
    __result_obj__96 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_196;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_197;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_198;
struct list$1char$* __result_obj__95;
    if(    self->len==0    ) {
        litem_196=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1    ) {
        litem_197=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_199;
struct list_item$1char$* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__97;
    __result_obj__97 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3941, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_201;
struct list$1char$p* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0    ;    i_201<num_value    ;    i_201++    ){
        list$1char$p_push_back(self,values[i_201]);
    }
    __result_obj__99 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_202;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_203;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_204;
struct list$1char$p* __result_obj__98;
    if(    self->len==0    ) {
        litem_202=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$p*"))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1    ) {
        litem_203=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$p*"))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$p*"))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_205;
struct list_item$1char$p* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__100;
    __result_obj__100 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3946, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_207;
struct list$1short$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0    ;    i_207<num_value    ;    i_207++    ){
        list$1short$_push_back(self,values[i_207]);
    }
    __result_obj__102 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_208;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_209;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_210;
struct list$1short$* __result_obj__101;
    if(    self->len==0    ) {
        litem_208=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1short$*"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1    ) {
        litem_209=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1short$*"))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1short$*"))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_211;
struct list_item$1short$* prev_it_212;
    it_211=self->head;
    while(    it_211!=((void*)0)    ) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__103;
    __result_obj__103 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3951, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_213;
struct list$1int$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_213=0    ;    i_213<num_value    ;    i_213++    ){
        list$1int$_push_back(self,values[i_213]);
    }
    __result_obj__105 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_214;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_215;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_216;
struct list$1int$* __result_obj__104;
    if(    self->len==0    ) {
        litem_214=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1int$*"))));
        litem_214->prev=((void*)0);
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head=litem_214;
    }
    else if(    self->len==1    ) {
        litem_215=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1int$*"))));
        litem_215->prev=self->head;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head->next=litem_215;
    }
    else {
        litem_216=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1int$*"))));
        litem_216->prev=self->tail;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail->next=litem_216;
        self->tail=litem_216;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_217;
struct list_item$1int$* prev_it_218;
    it_217=self->head;
    while(    it_217!=((void*)0)    ) {
        prev_it_218=it_217;
        it_217=it_217->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__106;
    __result_obj__106 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3956, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_219;
struct list$1long$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_219=0    ;    i_219<num_value    ;    i_219++    ){
        list$1long$_push_back(self,values[i_219]);
    }
    __result_obj__108 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_220;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_221;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_222;
struct list$1long$* __result_obj__107;
    if(    self->len==0    ) {
        litem_220=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1long$*"))));
        litem_220->prev=((void*)0);
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head=litem_220;
    }
    else if(    self->len==1    ) {
        litem_221=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1long$*"))));
        litem_221->prev=self->head;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head->next=litem_221;
    }
    else {
        litem_222=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1long$*"))));
        litem_222->prev=self->tail;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail->next=litem_222;
        self->tail=litem_222;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_223;
struct list_item$1long$* prev_it_224;
    it_223=self->head;
    while(    it_223!=((void*)0)    ) {
        prev_it_224=it_223;
        it_223=it_223->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__109;
    __result_obj__109 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3961, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_225;
struct list$1float$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_225=0    ;    i_225<num_value    ;    i_225++    ){
        list$1float$_push_back(self,values[i_225]);
    }
    __result_obj__111 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_226;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_227;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_228;
struct list$1float$* __result_obj__110;
    if(    self->len==0    ) {
        litem_226=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1float$*"))));
        litem_226->prev=((void*)0);
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head=litem_226;
    }
    else if(    self->len==1    ) {
        litem_227=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1float$*"))));
        litem_227->prev=self->head;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail=litem_227;
        self->head->next=litem_227;
    }
    else {
        litem_228=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1float$*"))));
        litem_228->prev=self->tail;
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail->next=litem_228;
        self->tail=litem_228;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_229;
struct list_item$1float$* prev_it_230;
    it_229=self->head;
    while(    it_229!=((void*)0)    ) {
        prev_it_230=it_229;
        it_229=it_229->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__112;
    __result_obj__112 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3966, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_231;
struct list$1double$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_231=0    ;    i_231<num_value    ;    i_231++    ){
        list$1double$_push_back(self,values[i_231]);
    }
    __result_obj__114 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_232;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_233;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_234;
struct list$1double$* __result_obj__113;
    if(    self->len==0    ) {
        litem_232=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1double$*"))));
        litem_232->prev=((void*)0);
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head=litem_232;
    }
    else if(    self->len==1    ) {
        litem_233=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1double$*"))));
        litem_233->prev=self->head;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail=litem_233;
        self->head->next=litem_233;
    }
    else {
        litem_234=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1double$*"))));
        litem_234->prev=self->tail;
        litem_234->next=((void*)0);
        litem_234->item=item;
        self->tail->next=litem_234;
        self->tail=litem_234;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_235;
struct list_item$1double$* prev_it_236;
    it_235=self->head;
    while(    it_235!=((void*)0)    ) {
        prev_it_236=it_235;
        it_235=it_235->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__115;
    __result_obj__115 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3971, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value85 = (void*)0;
char* __result_obj__116;
int len_237;
void* __right_value86 = (void*)0;
char* result_238;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_237=strlen(self)+strlen(right);
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_237+1)), "/usr/local/include/comelang.h", 4200, "char*"));
    strncpy(result_238,self,len_237+1);
    strncat(result_238,right,len_237+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__118;
int len_239;
void* __right_value88 = (void*)0;
char* result_240;
char* __result_obj__119;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_239=strlen(self)+strlen(right);
    result_240=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_239+1)), "/usr/local/include/comelang.h", 4215, "char*"));
    strncpy(result_240,self,len_239+1);
    strncat(result_240,right,len_239+1);
    __result_obj__119 = (char*)come_increment_ref_count(result_240);
    (result_240 = come_decrement_ref_count(result_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__120;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_241;
int i_242;
void* __right_value92 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    buf_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4228, "struct buffer*"))));
    for(    i_242=0    ;    i_242<right    ;    i_242++    ){
        buffer_append_str(buf_241,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_241))));
    come_call_finalizer(buffer_finalize, buf_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__122;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_243;
int i_244;
void* __right_value96 = (void*)0;
char* __result_obj__123;
    if(    self==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    buf_243=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4242, "struct buffer*"))));
    for(    i_244=0    ;    i_244<right    ;    i_244++    ){
        buffer_append_str(buf_243,self);
    }
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_243))));
    come_call_finalizer(buffer_finalize, buf_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_245;
int i_246;
    result_245=(_Bool)0;
    for(    i_246=0    ;    i_246<len    ;    i_246++    ){
        if(        strncmp(self[i_246],str,strlen(self[i_246]))==0        ) {
            result_245=(_Bool)1;
            break;
        }
    }
    return result_245;
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

unsigned int string_get_hash_key(char* value){
int result_249;
char* p_250;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_249=0;
    p_250=value;
    while(    *p_250    ) {
        result_249+=(*p_250);
        p_250++;
    }
    return result_249;
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
_Bool result_251;
    result_251=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_251;
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
_Bool result_252;
    result_252=(c>=32&&c<=126);
    return result_252;
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
void* __right_value97 = (void*)0;
char* __result_obj__124;
int len_253;
void* __right_value98 = (void*)0;
char* result_254;
int i_255;
char* __result_obj__125;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_253=strlen(str);
    result_254=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_253+1)), "/usr/local/include/comelang.h", 4510, "char*"));
    for(    i_255=0    ;    i_255<len_253    ;    i_255++    ){
        result_254[i_255]=str[len_253-i_255-1];
    }
    result_254[len_253]=0;
    __result_obj__125 = (char*)come_increment_ref_count(result_254);
    (result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__126;
int len_256;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__127;
void* __right_value102 = (void*)0;
char* __result_obj__128;
void* __right_value103 = (void*)0;
char* __result_obj__129;
void* __right_value104 = (void*)0;
char* result_257;
char* __result_obj__130;
    if(    str==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_256=strlen(str);
    if(    head<0    ) {
        head+=len_256;
    }
    if(    tail<0    ) {
        tail+=len_256+1;
    }
    if(    head>tail    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_256    ) {
        tail=len_256;
    }
    if(    head==tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    tail-head+1<1    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result_257=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4556, "char*"));
    memcpy(result_257,str+head,tail-head);
    result_257[tail-head]=0;
    __result_obj__130 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__131;
int len_258;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__132;
void* __right_value108 = (void*)0;
char* __result_obj__133;
void* __right_value109 = (void*)0;
char* __result_obj__134;
void* __right_value110 = (void*)0;
char* result_259;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_258=strlen(str);
    if(    head<0    ) {
        head+=len_258;
    }
    if(    tail<0    ) {
        tail+=len_258+1;
    }
    if(    head>tail    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_258    ) {
        tail=len_258;
    }
    if(    head==tail    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail-head+1<1    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    result_259=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4599, "char*"));
    memcpy(result_259,str+head,tail-head);
    result_259[tail-head]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_259);
    (result_259 = come_decrement_ref_count(result_259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__136;
int len_260;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__137;
void* __right_value114 = (void*)0;
char* __result_obj__138;
void* __right_value115 = (void*)0;
char* __result_obj__139;
void* __right_value116 = (void*)0;
char* result_261;
char* __result_obj__140;
    if(    str==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_260=strlen(str);
    if(    head<0    ) {
        head+=len_260;
    }
    if(    tail<0    ) {
        tail+=len_260+1;
    }
    if(    head>tail    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_260    ) {
        tail=len_260;
    }
    if(    head==tail    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    if(    tail-head+1<1    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_261=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4642, "char*"));
    memcpy(result_261,str+head,tail-head);
    result_261[tail-head]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_261);
    (result_261 = come_decrement_ref_count(result_261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__141;
va_list args_262;
char* result_263;
int len_264;
void* __right_value118 = (void*)0;
char* __result_obj__142;
void* __right_value119 = (void*)0;
char* result2_265;
char* __result_obj__143;
memset(&args_262, 0, sizeof(va_list));
result_263 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    __builtin_va_start(args_262,msg);
    len_264=vasprintf(&result_263,msg,args_262);
    __builtin_va_end(args_262);
    if(    len_264<0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result2_265=(char*)come_increment_ref_count(__builtin_string(result_263));
    free(result_263);
    __result_obj__143 = (char*)come_increment_ref_count(result2_265);
    (result2_265 = come_decrement_ref_count(result2_265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__144;
int len_266;
void* __right_value121 = (void*)0;
char* __result_obj__145;
void* __right_value122 = (void*)0;
char* __result_obj__146;
void* __right_value123 = (void*)0;
char* result_267;
char* __result_obj__147;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_266=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head+=len_266;
    }
    if(    tail<0    ) {
        tail+=len_266+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    tail>=len_266    ) {
        tail=len_266;
    }
    result_267=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_266-(tail-head)+1)), "/usr/local/include/comelang.h", 4704, "char*"));
    memcpy(result_267,str,head);
    memcpy(result_267+head,str+tail,len_266-tail);
    result_267[len_266-(tail-head)]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_267);
    (result_267 = come_decrement_ref_count(result_267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_268;
struct list_item$1char$ph* prev_it_269;
    it_268=self->head;
    while(    it_268!=((void*)0)    ) {
        prev_it_269=it_268;
        it_268=it_268->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_275;
char* __dec_obj15;
struct list$1char$ph* __result_obj__150;
    if(    self->len==0    ) {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$ph*"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj13=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1    ) {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$ph*"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj14=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$ph*"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj15=litem_275->item,
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_275;
        self->tail=litem_275;
    }
    self->len++;
    __result_obj__150 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__150;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__149;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_270;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_271;
int i_272;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__151;
    if(    self==((void*)0)    ) {
        __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4717, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__149;
    }
    result_270=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4720, "struct list$1char$ph*"))));
    str_271=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4722, "struct buffer*"))));
    for(    i_272=0    ;    i_272<charp_length(self)    ;    i_272++    ){
        if(        self[i_272]==c        ) {
            list$1char$ph_push_back(result_270,(char*)come_increment_ref_count(__builtin_string(str_271->buf)));
            buffer_reset(str_271);
        }
        else {
            buffer_append_char(str_271,self[i_272]);
        }
    }
    if(    buffer_length(str_271)!=0    ) {
        list$1char$ph_push_back(result_270,(char*)come_increment_ref_count(__builtin_string(str_271->buf)));
    }
    __result_obj__151 = (struct list$1char$ph*)come_increment_ref_count(result_270);
    come_call_finalizer(list$1char$ph$p_finalize, result_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__152;
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__153;
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_printable(char* str){
int len_276;
void* __right_value137 = (void*)0;
char* result_277;
int n_278;
int i_279;
char c_280;
char* __result_obj__154;
    len_276=charp_length(str);
    result_277=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_276*2+1)), "/usr/local/include/comelang.h", 4754, "char*"));
    n_278=0;
    for(    i_279=0    ;    i_279<len_276    ;    i_279++    ){
        c_280=str[i_279];
        if(        (c_280>=0&&c_280<32)||c_280==127        ) {
            result_277[n_278++]=94;
            result_277[n_278++]=c_280+65-1;
        }
        else {
            result_277[n_278++]=c_280;
        }
    }
    result_277[n_278]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_277);
    (result_277 = come_decrement_ref_count(result_277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__155;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_281;
char* p_282;
char* p2_283;
void* __right_value141 = (void*)0;
char* __result_obj__156;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_281=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4782, "struct buffer*"))));
    p_282=self;
    while(    (_Bool)1    ) {
        p2_283=strstr(p_282,str);
        if(        p2_283==((void*)0)        ) {
            p2_283=p_282;
            while(            *p2_283            ) {
                p2_283++;
            }
            buffer_append(result_281,p_282,p2_283-p_282);
            break;
        }
        buffer_append(result_281,p_282,p2_283-p_282);
        buffer_append_str(result_281,replace);
        p_282=p2_283+strlen(str);
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_281))));
    come_call_finalizer(buffer_finalize, result_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__157;
char* p_284;
void* __right_value143 = (void*)0;
char* __result_obj__158;
void* __right_value144 = (void*)0;
char* __result_obj__159;
void* __right_value145 = (void*)0;
char* __result_obj__160;
    if(    path==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    p_284=path+strlen(path);
    while(    p_284>=path    ) {
        if(        *p_284==47        ) {
            break;
        }
        else {
            p_284--;
        }
    }
    if(    p_284<path    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_284+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__161;
void* __right_value147 = (void*)0;
char* path2_285;
char* p_286;
void* __right_value148 = (void*)0;
char* __result_obj__162;
void* __right_value149 = (void*)0;
char* __result_obj__163;
void* __right_value150 = (void*)0;
char* __result_obj__164;
    if(    path==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    path2_285=(char*)come_increment_ref_count(xbasename(path));
    p_286=path2_285+strlen(path2_285);
    while(    p_286>=path2_285    ) {
        if(        *p_286==46        ) {
            break;
        }
        else {
            p_286--;
        }
    }
    if(    p_286<path2_285    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_285))));
        (path2_285 = come_decrement_ref_count(path2_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_285,0,p_286-path2_285))));
        (path2_285 = come_decrement_ref_count(path2_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_285 = come_decrement_ref_count(path2_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__165;
char* p_287;
void* __right_value152 = (void*)0;
char* __result_obj__166;
void* __right_value153 = (void*)0;
char* __result_obj__167;
void* __right_value154 = (void*)0;
char* __result_obj__168;
    if(    path==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    p_287=path+strlen(path);
    while(    p_287>=path    ) {
        if(        *p_287==46        ) {
            break;
        }
        else {
            p_287--;
        }
    }
    if(    p_287<path    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_287+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__169;
void* __right_value156 = (void*)0;
char* __result_obj__170;
    if(    self    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__171;
void* __right_value158 = (void*)0;
char* __result_obj__172;
    if(    self    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    else {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
}

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__179;
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__180;
void* __right_value167 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* charp_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__182;
void* __right_value169 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value170 = (void*)0;
char* __result_obj__184;
void* __right_value171 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    puts(self);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_print(char* self){
void* __right_value172 = (void*)0;
char* __result_obj__186;
void* __right_value173 = (void*)0;
char* __result_obj__187;
    if(    self==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    printf("%s",self);
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* charp_printf(char* self, ...){
void* __right_value174 = (void*)0;
char* __result_obj__188;
char* msg2_288;
va_list args_289;
void* __right_value175 = (void*)0;
char* __result_obj__189;
msg2_288 = (void*)0;
memset(&args_289, 0, sizeof(va_list));
    if(    self==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    __builtin_va_start(args_289,self);
    vasprintf(&msg2_288,self,args_289);
    __builtin_va_end(args_289);
    printf("%s",msg2_288);
    free(msg2_288);
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_290;
    for(    i_290=0    ;    i_290<self    ;    i_290++    ){
        block(parent,i_290);
    }
}

