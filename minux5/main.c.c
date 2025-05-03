/// previous struct definition ///
/// struct definition ///
typedef __builtin_va_list __gnuc_va_list;

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
int printf(const char* fmt, ...);
static void va_list_finalize(va_list self);
int vasprintf(char** strp, const char* fmt, va_list ap);
void perror(const char* msg);
void putchar(char c);
void uartputc_sync(char c);
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
void swtch(struct context* anonymous_var_nameX68, struct context* anonymous_var_nameX69);
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
void* memmove(void* dst, const void* src, uint n);
void* memcpy(void* dst, const void* src, uint n);
int strncmp(const char* p, const char* q, uint n);
char* strncpy(char* s, const char* t, int n);
char* safestrcpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
void exit(int n);
char* itoa(char* buf, long val_, int base, int is_unsigned);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
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
unsigned long  int x_9;
memset(&x_9, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_9));
    x_9|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_9));
}
static inline void intr_off(){
unsigned long  int x_10;
memset(&x_10, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_10));
    x_10&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_10));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_14;
memset(&x_14, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_14));
    return x_14;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_15;
memset(&x_15, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_15));
    return x_15;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_16;
memset(&x_16, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_16));
    return x_16;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_17;
memset(&x_17, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_17));
    return x_17;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_18;
memset(&x_18, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_18));
    return x_18;
}
static inline void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
int printf(const char* fmt, ...){
va_list ap_1;
int len_2;
int i_3;
int __result_obj__1;
memset(&ap_1, 0, sizeof(va_list));
    char buf_0[256];
    memset(&buf_0, 0, sizeof(char)    *(256)    );
    __builtin_va_start(ap_1,fmt);
    len_2=snprintf(buf_0,sizeof(buf_0),fmt,ap_1);
    for(    i_3=0    ;    i_3<len_2    ;    i_3++    ){
        putchar(buf_0[i_3]);
    }
    __builtin_va_end(ap_1);
    __result_obj__1 = len_2;
    come_call_finalizer(va_list_finalize, (&ap_1), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__1;
}

static void va_list_finalize(va_list self){
}

int vasprintf(char** strp, const char* fmt, va_list ap){
va_list ap_copy_4;
int len_5;
int __result_obj__2;
char* buf_6;
int __result_obj__3;
int __result_obj__4;
memset(&ap_copy_4, 0, sizeof(va_list));
    __builtin_va_copy(ap_copy_4,ap);
    len_5=vsnprintf(((void*)0),0,fmt,ap_copy_4);
    __builtin_va_end(ap_copy_4);
    if(    len_5<0    ) {
        *strp=((void*)0);
        __result_obj__2 = -1;
        come_call_finalizer(va_list_finalize, (&ap_copy_4), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__2;
    }
    buf_6=malloc(len_5+1);
    if(    !buf_6    ) {
        *strp=((void*)0);
        __result_obj__3 = -1;
        come_call_finalizer(va_list_finalize, (&ap_copy_4), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__3;
    }
    vsnprintf(buf_6,len_5+1,fmt,ap);
    *strp=buf_6;
    __result_obj__4 = len_5;
    come_call_finalizer(va_list_finalize, (&ap_copy_4), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

void perror(const char* msg){
int len_7;
int i_8;
    len_7=strlen(msg);
    for(    i_8=0    ;    i_8<len_7    ;    i_8++    ){
        putchar(msg[i_8]);
    }
}

void putchar(char c){
    *(char*)(268435456)=c;
}

void uartputc_sync(char c){
    *(char*)(268435456)=c;
}

void puts(const char* s){
    intr_off();
    while(    *s    ) {
        putchar(*s++);
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_11;
r_11 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_11=(struct run*)pa;
    r_11->next=kmem.freelist;
    kmem.freelist=r_11;
}

void freerange(void* pa_start, void* pa_end){
char* p_12;
p_12 = (void*)0;
    p_12=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_12+4096<=(_end+4096*256)    ;    p_12+=4096    ){
        kfree(p_12);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_13;
void* __result_obj__5;
r_13 = (void*)0;
    r_13=kmem.freelist;
    if(    r_13    ) {
        kmem.freelist=r_13->next;
    }
    __result_obj__5 = (void*)r_13;
    return __result_obj__5;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_19;
    w_mtvec((unsigned long  int)timervec&~3);
    now_19=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_19+-1;
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

struct proc* alloc_proc(void (*task)()){
struct proc* result_20;
struct proc* __result_obj__6;
    result_20=kalloc();
    memset(result_20,0,sizeof(struct proc));
    result_20->stack=kalloc();
    result_20->context.sp=(unsigned long  int)(result_20->stack+4096);
    result_20->context.mepc=(unsigned long  int)task;
    result_20->state=(3);
    gProc[gNumProc++]=result_20;
    __result_obj__6 = result_20;
    return __result_obj__6;
}

void timer_reset(){
unsigned long  int now_21;
    now_21=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_21+10000000;
}

void timer_handler(){
struct proc* p_22;
struct context* tf_23;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_22=gProc[gActiveProc];
    tf_23=(struct context*)TRAPFRAME;
    p_22->context=*tf_23;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_23->ra);
    printf("ra %x\n",p_22->context.ra);
    printf("sp %x\n",tf_23->sp);
    printf("sp %x\n",p_22->context.sp);
    printf("gp %x\n",p_22->context.gp);
    printf("mepc %x\n",tf_23->mepc);
    printf("mepc %x\n",p_22->context.mepc);
    yield();
}

void yield(){
struct proc* p_24;
    p_24=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_24=gProc[gActiveProc];
    p_24->state=(3);
    scheduler();
}

void scheduler(){
int i_25;
struct proc* p_26;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_25=0        ;        i_25<gNumProc        ;        i_25++        ){
            p_26=gProc[i_25];
            if(            p_26->state==(3)            ) {
                gActiveProc=i_25;
                p_26->state=(4);
                printf("SWITCH TO %d\n",i_25);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_26->context);
                disable_timer_interrupts();
                p_26->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_27;
    now_27=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
    come_heap_init(0, 0, 0);
    kinit();
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
void* prev_28;
void* __result_obj__8;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__7 = (void*)-1;
        return __result_obj__7;
    }
    prev_28=heap_end;
    heap_end+=incr;
    __result_obj__8 = prev_28;
    return __result_obj__8;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_29;
struct sBlock* __result_obj__9;
struct sBlock* __result_obj__10;
    curr_29=free_list;
    while(    curr_29    ) {
        if(        curr_29->free&&curr_29->size>=size        ) {
            __result_obj__9 = curr_29;
            return __result_obj__9;
        }
        curr_29=curr_29->next;
    }
    __result_obj__10 = ((void*)0);
    return __result_obj__10;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_30;
struct sBlock* __result_obj__11;
struct sBlock* b_31;
struct sBlock* __result_obj__12;
    mem_30=_sbrk(size+sizeof(struct sBlock));
    if(    mem_30==(void*)-1    ) {
        __result_obj__11 = ((void*)0);
        return __result_obj__11;
    }
    b_31=(struct sBlock*)mem_30;
    b_31->size=size;
    b_31->next=((void*)0);
    b_31->free=0;
    __result_obj__12 = b_31;
    return __result_obj__12;
}

void* malloc(unsigned long  int size){
struct sBlock* block_32;
void* __result_obj__13;
void* __result_obj__14;
struct sBlock* curr_33;
void* __result_obj__15;
block_32 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_32=find_free_block(size))    ) {
        block_32->free=0;
        __result_obj__13 = (void*)(block_32+1);
        return __result_obj__13;
    }
    block_32=request_space(size);
    if(    !block_32    ) {
        __result_obj__14 = ((void*)0);
        return __result_obj__14;
    }
    if(    !free_list    ) {
        free_list=block_32;
    }
    else {
        curr_33=free_list;
        while(        curr_33->next        ) {
            curr_33=curr_33->next;
        }
        curr_33->next=block_32;
    }
    __result_obj__15 = (void*)(block_32+1);
    return __result_obj__15;
}

void free(void* ptr){
struct sBlock* block_34;
    if(    !ptr    ) {
        return;
    }
    block_34=((struct sBlock*)ptr)-1;
    block_34->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_35;
void* ptr_36;
void* __result_obj__16;
    total_35=n*size;
    ptr_36=malloc(total_35);
    if(    ptr_36    ) {
        memset(ptr_36,0,total_35);
    }
    __result_obj__16 = ptr_36;
    return __result_obj__16;
}

char* strdup(const char* s){
unsigned long  int len_37;
char* p_38;
char* __result_obj__17;
    len_37=strlen(s)+1;
    p_38=malloc(len_37);
    if(    p_38    ) {
        memcpy(p_38,s,len_37);
    }
    __result_obj__17 = p_38;
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
        const char* h_39=haystack;
        const char* n_40=needle;
        while(        *h_39&&*n_40&&(*h_39==*n_40)        ) {
            h_39++;
            n_40++;
        }
        if(        !*n_40        ) {
            __result_obj__19 = (char*)haystack;
            return __result_obj__19;
        }
    }
    __result_obj__20 = ((void*)0);
    return __result_obj__20;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_41;
int i_42;
void* __result_obj__21;
memset(&i_42, 0, sizeof(int));
    cdst_41=(char*)dst;
    for(    i_42=0    ;    i_42<n    ;    i_42++    ){
        cdst_41[i_42]=c;
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_43;
const unsigned char* s2_44;
memset(&s1_43, 0, sizeof(const unsigned char*));
memset(&s2_44, 0, sizeof(const unsigned char*));
    s1_43=v1;
    s2_44=v2;
    while(    n-->0    ) {
        if(        *s1_43!=*s2_44        ) {
            return *s1_43-*s2_44;
        }
        s1_43++,s2_44++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, uint n){
const char* s_45;
char* d_46;
void* __result_obj__22;
void* __result_obj__23;
s_45 = (void*)0;
d_46 = (void*)0;
    if(    n==0    ) {
        __result_obj__22 = dst;
        return __result_obj__22;
    }
    s_45=src;
    d_46=dst;
    if(    s_45<d_46&&s_45+n>d_46    ) {
        s_45+=n;
        d_46+=n;
        while(        n-->0        ) {
            *--d_46=*--s_45;
        }
    }
    else {
        while(        n-->0        ) {
            *d_46++=*s_45++;
        }
    }
    __result_obj__23 = dst;
    return __result_obj__23;
}

void* memcpy(void* dst, const void* src, uint n){
void* __result_obj__24;
    __result_obj__24 = memmove(dst,src,n);
    return __result_obj__24;
}

int strncmp(const char* p, const char* q, uint n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_47;
char* __result_obj__25;
os_47 = (void*)0;
    os_47=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__25 = os_47;
    return __result_obj__25;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_48;
char* __result_obj__26;
char* __result_obj__27;
os_48 = (void*)0;
    os_48=s;
    if(    n<=0    ) {
        __result_obj__26 = os_48;
        return __result_obj__26;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__27 = os_48;
    return __result_obj__27;
}

int strlen(const char* s){
int n_49;
memset(&n_49, 0, sizeof(int));
    for(    n_49=0    ;    s[n_49]    ;    n_49++    ){
        ;
    }
    return n_49;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_50;
char* __result_obj__28;
    d_50=dest;
    while(    *d_50    ) {
        d_50++;
    }
    while(    n--&&*src    ) {
        *d_50++=*src++;
    }
    *d_50=0;
    __result_obj__28 = dest;
    return __result_obj__28;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_51;
char* __result_obj__29;
int digit_55;
char* __result_obj__30;
    p_51=buf;
    char tmp_52[32];
    memset(&tmp_52, 0, sizeof(char)    *(32)    );
    int i_53=0;
    int negative_54=0;
    if(    base<2||base>16    ) {
        *p_51=0;
        __result_obj__29 = p_51;
        return __result_obj__29;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_54=1;
        val_=-val_;
    }
    do {
        digit_55=val_%base;
        tmp_52[i_53++]=(((digit_55<10))?(48+digit_55):(97+digit_55-10));
        val_/=base;
    } while(    val_    );
    if(    negative_54    ) {
        *p_51++=45;
    }
    while(    i_53--    ) {
        *p_51++=tmp_52[i_53];
    }
    *p_51=0;
    __result_obj__30 = buf;
    return __result_obj__30;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_56;
char* p_57;
const char* s_58;
unsigned long  int remaining_60;
int __result_obj__31;
int __result_obj__32;
memset(&ap_56, 0, sizeof(va_list));
s_58 = (void*)0;
    __builtin_va_start(ap_56,fmt);
    p_57=out;
    char buf_59[32];
    memset(&buf_59, 0, sizeof(char)    *(32)    );
    remaining_60=out_size;
    if(    remaining_60==0    ) {
        __builtin_va_end(ap_56);
        __result_obj__31 = 0;
        come_call_finalizer(va_list_finalize, (&ap_56), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__31;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_60>1            ) {
                *p_57++=*fmt;
                remaining_60--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_58=__builtin_va_arg(ap_56,const char*);
            while(            *s_58&&remaining_60>1            ) {
                *p_57++=*s_58++;
                remaining_60--;
            }
            break;
            case 100:
            itoa(buf_59,__builtin_va_arg(ap_56,int),10,0);
            s_58=buf_59;
            while(            *s_58&&remaining_60>1            ) {
                *p_57++=*s_58++;
                remaining_60--;
            }
            break;
            case 120:
            itoa(buf_59,(unsigned int)__builtin_va_arg(ap_56,int),16,1);
            s_58=buf_59;
            while(            *s_58&&remaining_60>1            ) {
                *p_57++=*s_58++;
                remaining_60--;
            }
            break;
            case 99:
            if(            remaining_60>1            ) {
                *p_57++=(char)__builtin_va_arg(ap_56,int);
                remaining_60--;
            }
            break;
            case 112:
            s_58="0x";
            while(            *s_58&&remaining_60>1            ) {
                *p_57++=*s_58++;
                remaining_60--;
            }
            itoa(buf_59,(long)__builtin_va_arg(ap_56,void*),16,1);
            s_58=buf_59;
            while(            *s_58&&remaining_60>1            ) {
                *p_57++=*s_58++;
                remaining_60--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_59,__builtin_va_arg(ap_56,long),10,1);
                s_58=buf_59;
                while(                *s_58&&remaining_60>1                ) {
                    *p_57++=*s_58++;
                    remaining_60--;
                }
            }
            break;
            default:
            if(            remaining_60>1            ) {
                *p_57++=37;
                remaining_60--;
                if(                remaining_60>1                ) {
                    *p_57++=*fmt;
                    remaining_60--;
                }
            }
            break;
        }
    }
    *p_57=0;
    __builtin_va_end(ap_56);
    __result_obj__32 = p_57-out;
    come_call_finalizer(va_list_finalize, (&ap_56), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_61;
char* p_62;
const char* s_63;
unsigned long  int remaining_65;
int __result_obj__33;
int __result_obj__34;
memset(&ap_61, 0, sizeof(va_list));
s_63 = (void*)0;
    __builtin_va_start(ap_61,fmt);
    p_62=out;
    char buf_64[32];
    memset(&buf_64, 0, sizeof(char)    *(32)    );
    remaining_65=out_size;
    if(    remaining_65==0    ) {
        __builtin_va_end(ap_61);
        __result_obj__33 = 0;
        come_call_finalizer(va_list_finalize, (&ap_61), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
            s_63=__builtin_va_arg(ap_61,const char*);
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 100:
            itoa(buf_64,__builtin_va_arg(ap_61,int),10,0);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 120:
            itoa(buf_64,(unsigned int)__builtin_va_arg(ap_61,int),16,1);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 99:
            if(            remaining_65>1            ) {
                *p_62++=(char)__builtin_va_arg(ap_61,int);
                remaining_65--;
            }
            break;
            case 112:
            s_63="0x";
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            itoa(buf_64,(long)__builtin_va_arg(ap_61,void*),16,1);
            s_63=buf_64;
            while(            *s_63&&remaining_65>1            ) {
                *p_62++=*s_63++;
                remaining_65--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_64,__builtin_va_arg(ap_61,long),10,1);
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
    __builtin_va_end(ap_61);
    __result_obj__34 = p_62-out;
    come_call_finalizer(va_list_finalize, (&ap_61), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_66;
int i_67;
void* __right_value2 = (void*)0;
    buf_66=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 709, "struct buffer*"))));
    buffer_append_format(buf_66,"%s %d\n",sname,sline);
    for(    i_67=gNumComeStackFrame-2    ;    i_67>=0    ;    i_67--    ){
        buffer_append_format(buf_66,"%s %d #%d\n",gComeStackFrameSName[i_67],gComeStackFrameSLine[i_67],gComeStackFrameID[i_67]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_66))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_68;
    for(    i_68=gNumComeStackFrame-1    ;    i_68>=0    ;    i_68--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_68],gComeStackFrameSLine[i_68],gComeStackFrameID[i_68]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__35;
    __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__35;
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
int i_69;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_69=0    ;    i_69<gHeapPages.mSizePages    ;    i_69++    ){
        gHeapPages.mPages[i_69]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_70;
int n_71;
_Bool flag_72;
int i_73;
struct sMemHeaderTiny* it_74;
int n_75;
int i_76;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_70=gAllocMem;
        n_71=0;
        while(        it_70        ) {
            n_71++;
            flag_72=(_Bool)0;
            printf("#%d ",n_71);
            if(            it_70->class_name            ) {
                printf("%p (%s): ",(char*)it_70+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_70->class_name);
            }
            for(            i_73=0            ;            i_73<16            ;            i_73++            ){
                if(                it_70->sname[i_73]                ) {
                    printf("%s %d #%d, ",it_70->sname[i_73],it_70->sline[i_73],it_70->id[i_73]);
                    flag_72=(_Bool)1;
                }
            }
            if(            flag_72            ) {
                puts("");
            }
            it_70=it_70->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_71,gNumAlloc,gNumFree);
    }
    else {
        it_74=(struct sMemHeaderTiny*)gAllocMem;
        n_75=0;
        while(        it_74        ) {
            n_75++;
            if(            it_74->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_75,(char*)it_74+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_74->class_name,it_74->sname,it_74->sline);
            }
            it_74=it_74->next;
        }
        if(        n_75>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_75,gNumAlloc,gNumFree);
        }
    }
    for(    i_76=0    ;    i_76<gHeapPages.mSizePages    ;    i_76++    ){
        free(gHeapPages.mPages[i_76]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_77;
unsigned long  int free_area_78;
int new_size_pages_79;
char** new_pages_80;
int i_81;
void* __result_obj__36;
    result_77=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_77=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_77,0,size);
        }
        if(        result_77==((void*)0)        ) {
            free_area_78=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_78            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_79=gHeapPages.mSizePages*2;
                    new_pages_80=calloc(1,sizeof(char*)*new_size_pages_79);
                    i_81=0;
                    for(                    ;                    i_81<gHeapPages.mSizePages                    ;                    i_81++                    ){
                        new_pages_80[i_81]=gHeapPages.mPages[i_81];
                    }
                    for(                    ;                    i_81<new_size_pages_79                    ;                    i_81++                    ){
                        new_pages_80[i_81]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_80;
                    gHeapPages.mSizePages=new_size_pages_79;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_77=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_77=calloc(1,size);
    }
    __result_obj__36 = result_77;
    return __result_obj__36;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_82;
struct sMemHeader* it_83;
int i_84;
int i_85;
void* __result_obj__37;
void* result_86;
struct sMemHeaderTiny* it_87;
void* __result_obj__38;
memset(&i_84, 0, sizeof(int));
memset(&i_85, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_82=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_83=result_82;
        it_83->allocated=177783;
        it_83->size=size+sizeof(struct sMemHeader);
        it_83->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_84=0            ;            i_84<gNumComeStackFrame            ;            i_84++            ){
                it_83->sname[i_84]=gComeStackFrameSName[i_84];
                it_83->sline[i_84]=gComeStackFrameSLine[i_84];
                it_83->id[i_84]=gComeStackFrameID[i_84];
            }
        }
        else {
            for(            i_85=0            ;            i_85<16            ;            i_85++            ){
                it_83->sname[i_85]=gComeStackFrameSName[gNumComeStackFrame-1-i_85];
                it_83->sline[i_85]=gComeStackFrameSLine[gNumComeStackFrame-1-i_85];
                it_83->id[i_85]=gComeStackFrameID[gNumComeStackFrame-1-i_85];
            }
        }
        come_pop_stackframe_v2();
        it_83->next=gAllocMem;
        it_83->prev=((void*)0);
        it_83->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_83;
        }
        gAllocMem=it_83;
        gNumAlloc++;
        __result_obj__37 = (char*)result_82+sizeof(struct sMemHeader);
        return __result_obj__37;
    }
    else {
        result_86=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_87=result_86;
        it_87->allocated=177783;
        it_87->class_name=class_name;
        it_87->sname=sname;
        it_87->sline=sline;
        it_87->size=size+sizeof(struct sMemHeaderTiny);
        it_87->free_next=((void*)0);
        it_87->next=(struct sMemHeaderTiny*)gAllocMem;
        it_87->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_87;
        }
        gAllocMem=(struct sMemHeader*)it_87;
        gNumAlloc++;
        __result_obj__38 = (char*)result_86+sizeof(struct sMemHeaderTiny);
        return __result_obj__38;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_88;
struct sMemHeader* prev_it_89;
struct sMemHeader* next_it_90;
unsigned long  int size_91;
struct sMemHeaderTiny* it_92;
struct sMemHeaderTiny* prev_it_93;
struct sMemHeaderTiny* next_it_94;
unsigned long  int size_95;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_88=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_88->allocated!=177783            ) {
                return;
            }
            it_88->allocated=0;
            prev_it_89=it_88->prev;
            next_it_90=it_88->next;
            if(            gAllocMem==it_88            ) {
                gAllocMem=next_it_90;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_89                ) {
                    prev_it_89->next=next_it_90;
                }
                if(                next_it_90                ) {
                    next_it_90->prev=prev_it_89;
                }
            }
            size_91=it_88->size;
            if(            size_91<4096            ) {
                if(                gHeapPages.mFreeMem[size_91]==((void*)0)                ) {
                    it_88->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_91]=(struct sMemHeaderTiny*)it_88;
                }
                else {
                    it_88->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_91];
                    gHeapPages.mFreeMem[size_91]=(struct sMemHeaderTiny*)it_88;
                }
            }
            else {
                free(it_88);
            }
            gNumFree++;
        }
        else {
            it_92=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_92->allocated!=177783            ) {
                return;
            }
            it_92->allocated=0;
            prev_it_93=it_92->prev;
            next_it_94=it_92->next;
            if(            gAllocMem==it_92            ) {
                gAllocMem=(struct sMemHeader*)next_it_94;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_93                ) {
                    prev_it_93->next=next_it_94;
                }
                if(                next_it_94                ) {
                    next_it_94->prev=prev_it_93;
                }
            }
            size_95=it_92->size;
            if(            size_95<4096            ) {
                if(                gHeapPages.mFreeMem[size_95]==((void*)0)                ) {
                    it_92->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_95]=it_92;
                }
                else {
                    it_92->free_next=gHeapPages.mFreeMem[size_95];
                    gHeapPages.mFreeMem[size_95]=it_92;
                }
            }
            else {
                free(it_92);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_96;
char* __result_obj__39;
struct sMemHeaderTiny* it_97;
char* __result_obj__40;
    if(    gComeDebugLib    ) {
        it_96=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_96->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_96);
            exit(2);
        }
        __result_obj__39 = it_96->class_name;
        return __result_obj__39;
    }
    else {
        it_97=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_97->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_97);
            exit(2);
        }
        __result_obj__40 = it_97->class_name;
        return __result_obj__40;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_98;
int i_99;
struct sMemHeaderTiny* it_100;
    if(    gComeDebugLib    ) {
        it_98=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_98->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_98->class_name        ) {
            printf("(%s): ",it_98->class_name);
        }
        for(        i_99=0        ;        i_99<16        ;        i_99++        ){
            if(            it_98->sname[i_99]            ) {
                printf("%s %d #%d, ",it_98->sname[i_99],it_98->sline[i_99],it_98->id[i_99]);
            }
        }
        puts("");
    }
    else {
        it_100=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_100->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_100->class_name,it_100->sname,it_100->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_101;
unsigned long  int* ref_count_102;
unsigned long  int* size2_103;
void* __result_obj__41;
    mem_101=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_102=(unsigned long  int*)mem_101;
    *ref_count_102=0;
    size2_103=(unsigned long  int*)(mem_101+sizeof(unsigned long  int));
    *size2_103=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__41 = mem_101+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__41;
}

void come_free(void* mem){
unsigned long  int* ref_count_104;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_104=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_104);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__42;
char* mem_105;
unsigned long  int* size_p_106;
unsigned long  int size_107;
void* result_108;
void* __result_obj__43;
    if(    !block    ) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    mem_105=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_106=(unsigned long  int*)(mem_105+sizeof(unsigned long  int));
    size_107=*size_p_106-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_108=come_calloc_v2(1,size_107,sname,sline,class_name);
    memcpy(result_108,block,size_107);
    __result_obj__43 = result_108;
    return __result_obj__43;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__44;
unsigned long  int* ref_count_109;
void* __result_obj__45;
    if(    mem==((void*)0)    ) {
        __result_obj__44 = mem;
        return __result_obj__44;
    }
    ref_count_109=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_109)++;
    __result_obj__45 = mem;
    return __result_obj__45;
}

void* come_print_ref_count(void* mem){
void* __result_obj__46;
unsigned long  int* ref_count_110;
void* __result_obj__47;
    if(    mem==((void*)0)    ) {
        __result_obj__46 = mem;
        return __result_obj__46;
    }
    ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_110);
    __result_obj__47 = mem;
    return __result_obj__47;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__48;
void* __result_obj__49;
unsigned long  int* ref_count_111;
unsigned long  int count_112;
void (*finalizer_113)(void*);
void* __result_obj__50;
void* __result_obj__51;
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__48 = mem;
            return __result_obj__48;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_111)--;
    }
    count_112=*ref_count_111;
    if(    !no_free&&count_112<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_113=protocol_fun;
            finalizer_113(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    __result_obj__51 = mem;
    return __result_obj__51;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_114)(void*);
void (*finalizer_115)(void*);
void (*finalizer_116)(void*);
unsigned long  int* ref_count_117;
unsigned long  int count_118;
void (*finalizer_119)(void*);
void (*finalizer_120)(void*);
void (*finalizer_121)(void*);
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&finalizer_120, 0, sizeof(void (*)(void*)));
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
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
                finalizer_114=protocol_fun;
                finalizer_114(protocol_obj);
            }
            finalizer_115=fun;
            finalizer_115(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_116=protocol_fun;
                finalizer_116(protocol_obj);
            }
        }
    }
    else {
        ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_117)--;
        }
        count_118=*ref_count_117;
        if(        !no_free&&count_118<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_119=protocol_fun;
                        finalizer_119(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_120=fun;
                        finalizer_120(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_121=protocol_fun;
                        finalizer_121(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__52;
int len_122;
void* __right_value4 = (void*)0;
char* result_123;
char* __result_obj__53;
    if(    str==((void*)0)    ) {
        __result_obj__52 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__52;
    }
    len_122=strlen(str)+1;
    result_123=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_122)), "/usr/local/include/comelang.h", 1385, "char*"));
    strncpy(result_123,str,len_122);
    __result_obj__53 = (char*)come_increment_ref_count(result_123);
    (result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__53;
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
void* __right_value5 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__55;
    __result_obj__55 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__55;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__56;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3339, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__56 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__57;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3349, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__57 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__58;
void* __right_value8 = (void*)0;
struct buffer* result_124;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__59;
    if(    self==((void*)0)    ) {
        __result_obj__58 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__58;
    }
    result_124=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3369, "struct buffer*"));
    result_124->size=self->size;
    __dec_obj3=result_124->buf,
    result_124->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3372, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_124->len=self->len;
    memcpy(result_124->buf,self->buf,self->len);
    __result_obj__59 = (struct buffer*)come_increment_ref_count(result_124);
    come_call_finalizer(buffer_finalize, result_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__60;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__60 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__60;
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
struct buffer* __result_obj__61;
void* __right_value12 = (void*)0;
char* old_buf_125;
int old_len_126;
int new_size_127;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_125=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3420, "char*"));
        memcpy(old_buf_125,self->buf,self->size);
        old_len_126=self->len;
        new_size_127=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_127)), "/usr/local/include/comelang.h", 3424, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_125,old_len_126);
        self->buf[old_len_126]=0;
        self->size=new_size_127;
        (old_buf_125 = come_decrement_ref_count(old_buf_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__63;
void* __right_value14 = (void*)0;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_128=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3443, "char*"));
        old_len_129=self->len;
        new_size_130=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_130)), "/usr/local/include/comelang.h", 3447, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        (old_buf_128 = come_decrement_ref_count(old_buf_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__65;
int size_131;
void* __right_value16 = (void*)0;
char* old_buf_132;
int old_len_133;
int new_size_134;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__66;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__65 = self;
        return __result_obj__65;
    }
    size_131=strlen(mem);
    if(    self->len+size_131+1+1>=self->size    ) {
        old_buf_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3469, "char*"));
        memcpy(old_buf_132,self->buf,self->size);
        old_len_133=self->len;
        new_size_134=(self->size+size_131+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_134)), "/usr/local/include/comelang.h", 3473, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_132,old_len_133);
        self->buf[old_len_133]=0;
        self->size=new_size_134;
        (old_buf_132 = come_decrement_ref_count(old_buf_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_131);
    self->len+=size_131;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__67;
va_list args_135;
char* result_136;
int len_137;
struct buffer* __result_obj__68;
void* __right_value18 = (void*)0;
char* mem_138;
int size_139;
void* __right_value19 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__69;
memset(&args_135, 0, sizeof(va_list));
result_136 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__67 = self;
        return __result_obj__67;
    }
    __builtin_va_start(args_135,msg);
    len_137=vasprintf(&result_136,msg,args_135);
    __builtin_va_end(args_135);
    if(    len_137<0    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    mem_138=(char*)come_increment_ref_count(__builtin_string(result_136));
    size_139=strlen(mem_138);
    if(    self->len+size_139+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3506, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3510, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_138,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    free(result_136);
    __result_obj__69 = self;
    (mem_138 = come_decrement_ref_count(mem_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__69;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__70;
int size_143;
void* __right_value21 = (void*)0;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__71;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    size_143=strlen(mem)+1;
    if(    self->len+size_143+1+1+1>=self->size    ) {
        old_buf_144=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3532, "char*"));
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_146)), "/usr/local/include/comelang.h", 3536, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        (old_buf_144 = come_decrement_ref_count(old_buf_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__72;
int* mem_147;
int size_148;
void* __right_value23 = (void*)0;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__73;
    if(    self==((void*)0)    ) {
        __result_obj__72 = ((void*)0);
        return __result_obj__72;
    }
    mem_147=&value;
    size_148=sizeof(int);
    if(    self->len+size_148+1+1>=self->size    ) {
        old_buf_149=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3559, "char*"));
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_151)), "/usr/local/include/comelang.h", 3563, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        (old_buf_149 = come_decrement_ref_count(old_buf_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_152;
int size_153;
void* __right_value25 = (void*)0;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__74;
    mem_152=&value;
    size_153=sizeof(long);
    if(    self->len+size_153+1+1>=self->size    ) {
        old_buf_154=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3582, "char*"));
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_156)), "/usr/local/include/comelang.h", 3586, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_154,old_len_155);
        self->buf[old_len_155]=0;
        self->size=new_size_156;
        (old_buf_154 = come_decrement_ref_count(old_buf_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_152,size_153);
    self->len+=size_153;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__75;
short* mem_157;
int size_158;
void* __right_value27 = (void*)0;
char* old_buf_159;
int old_len_160;
int new_size_161;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_157=&value;
    size_158=sizeof(short);
    if(    self->len+size_158+1+1>=self->size    ) {
        old_buf_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3609, "char*"));
        memcpy(old_buf_159,self->buf,self->size);
        old_len_160=self->len;
        new_size_161=(self->size+size_158+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3613, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_159,old_len_160);
        self->buf[old_len_160]=0;
        self->size=new_size_161;
        (old_buf_159 = come_decrement_ref_count(old_buf_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_157,size_158);
    self->len+=size_158;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__77;
int len_162;
int new_size_163;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_164;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    len_162=self->len;
    len_162=(len_162+3)&~3;
    if(    len_162>=self->size    ) {
        new_size_163=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3637, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_163;
    }
    for(    i_164=self->len    ;    i_164<len_162    ;    i_164++    ){
        self->buf[i_164]=0;
    }
    self->len=len_162;
    __result_obj__78 = self;
    return __result_obj__78;
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
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__79;
struct buffer* __result_obj__80;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3667, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__79 = (struct buffer*)come_increment_ref_count(result_165);
        come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__79;
    }
    buffer_append_str(result_165,self);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__81;
void* __right_value33 = (void*)0;
char* __result_obj__82;
    if(    self==((void*)0)    ) {
        __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__81;
    }
    __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__83;
    __result_obj__83 = self->buf;
    return __result_obj__83;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_166;
struct buffer* __result_obj__84;
    result_166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3694, "struct buffer*"))));
    buffer_append(result_166,self,sizeof(char)*len);
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_166);
    come_call_finalizer(buffer_finalize, result_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_167;
int i_168;
struct buffer* __result_obj__85;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3701, "struct buffer*"))));
    for(    i_168=0    ;    i_168<len    ;    i_168++    ){
        buffer_append(result_167,self[i_168],strlen(self[i_168]));
    }
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__86;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3710, "struct buffer*"))));
    buffer_append(result_169,(char*)self,sizeof(short)*len);
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_170;
struct buffer* __result_obj__87;
    result_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3717, "struct buffer*"))));
    buffer_append(result_170,(char*)self,sizeof(int)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_170);
    come_call_finalizer(buffer_finalize, result_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__88;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3724, "struct buffer*"))));
    buffer_append(result_171,(char*)self,sizeof(long)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_172;
struct buffer* __result_obj__89;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3731, "struct buffer*"))));
    buffer_append(result_172,(char*)self,sizeof(float)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__90;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3738, "struct buffer*"))));
    buffer_append(result_173,(char*)self,sizeof(double)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

char* buffer_printable(struct buffer* self){
int len_174;
void* __right_value48 = (void*)0;
char* result_175;
int n_176;
int i_177;
unsigned char c_178;
char* __result_obj__91;
    len_174=self->len;
    result_175=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_174*2+1)), "/usr/local/include/comelang.h", 3746, "char*"));
    n_176=0;
    for(    i_177=0    ;    i_177<len_174    ;    i_177++    ){
        c_178=self->buf[i_177];
        if(        (c_178>=0&&c_178<32)||c_178==127        ) {
            result_175[n_176++]=94;
            result_175[n_176++]=c_178+65-1;
        }
        else if(        c_178>127        ) {
            result_175[n_176++]=63;
        }
        else {
            result_175[n_176++]=c_178;
        }
    }
    result_175[n_176]=0;
    __result_obj__91 = (char*)come_increment_ref_count(result_175);
    (result_175 = come_decrement_ref_count(result_175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__91;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_179;
struct list$1char$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_179=0    ;    i_179<num_value    ;    i_179++    ){
        list$1char$_push_back(self,values[i_179]);
    }
    __result_obj__93 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_180;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_182;
struct list$1char$* __result_obj__92;
    if(    self->len==0    ) {
        litem_180=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$*"))));
        litem_180->prev=((void*)0);
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head=litem_180;
    }
    else if(    self->len==1    ) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$*"))));
        litem_181->prev=self->head;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head->next=litem_181;
    }
    else {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$*"))));
        litem_182->prev=self->tail;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail->next=litem_182;
        self->tail=litem_182;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_183;
struct list_item$1char$* prev_it_184;
    it_183=self->head;
    while(    it_183!=((void*)0)    ) {
        prev_it_184=it_183;
        it_183=it_183->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__94;
    __result_obj__94 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3787, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_185;
struct list$1char$p* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_185=0    ;    i_185<num_value    ;    i_185++    ){
        list$1char$p_push_back(self,values[i_185]);
    }
    __result_obj__96 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_186;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_188;
struct list$1char$p* __result_obj__95;
    if(    self->len==0    ) {
        litem_186=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$p*"))));
        litem_186->prev=((void*)0);
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head=litem_186;
    }
    else if(    self->len==1    ) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$p*"))));
        litem_187->prev=self->head;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head->next=litem_187;
    }
    else {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$p*"))));
        litem_188->prev=self->tail;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail->next=litem_188;
        self->tail=litem_188;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_189;
struct list_item$1char$p* prev_it_190;
    it_189=self->head;
    while(    it_189!=((void*)0)    ) {
        prev_it_190=it_189;
        it_189=it_189->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__97;
    __result_obj__97 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3792, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_191;
struct list$1short$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_191=0    ;    i_191<num_value    ;    i_191++    ){
        list$1short$_push_back(self,values[i_191]);
    }
    __result_obj__99 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_192;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_194;
struct list$1short$* __result_obj__98;
    if(    self->len==0    ) {
        litem_192=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1short$*"))));
        litem_192->prev=((void*)0);
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head=litem_192;
    }
    else if(    self->len==1    ) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1short$*"))));
        litem_193->prev=self->head;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head->next=litem_193;
    }
    else {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1short$*"))));
        litem_194->prev=self->tail;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail->next=litem_194;
        self->tail=litem_194;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_195;
struct list_item$1short$* prev_it_196;
    it_195=self->head;
    while(    it_195!=((void*)0)    ) {
        prev_it_196=it_195;
        it_195=it_195->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__100;
    __result_obj__100 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3797, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_197;
struct list$1int$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_197=0    ;    i_197<num_value    ;    i_197++    ){
        list$1int$_push_back(self,values[i_197]);
    }
    __result_obj__102 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_198;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_200;
struct list$1int$* __result_obj__101;
    if(    self->len==0    ) {
        litem_198=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1int$*"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head=litem_198;
    }
    else if(    self->len==1    ) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1int$*"))));
        litem_199->prev=self->head;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head->next=litem_199;
    }
    else {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1int$*"))));
        litem_200->prev=self->tail;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail->next=litem_200;
        self->tail=litem_200;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_201;
struct list_item$1int$* prev_it_202;
    it_201=self->head;
    while(    it_201!=((void*)0)    ) {
        prev_it_202=it_201;
        it_201=it_201->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__103;
    __result_obj__103 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3802, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_203;
struct list$1long$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_203=0    ;    i_203<num_value    ;    i_203++    ){
        list$1long$_push_back(self,values[i_203]);
    }
    __result_obj__105 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_204;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_206;
struct list$1long$* __result_obj__104;
    if(    self->len==0    ) {
        litem_204=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1long$*"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head=litem_204;
    }
    else if(    self->len==1    ) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1long$*"))));
        litem_205->prev=self->head;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head->next=litem_205;
    }
    else {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1long$*"))));
        litem_206->prev=self->tail;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail->next=litem_206;
        self->tail=litem_206;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_207;
struct list_item$1long$* prev_it_208;
    it_207=self->head;
    while(    it_207!=((void*)0)    ) {
        prev_it_208=it_207;
        it_207=it_207->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__106;
    __result_obj__106 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3807, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_209;
struct list$1float$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_209=0    ;    i_209<num_value    ;    i_209++    ){
        list$1float$_push_back(self,values[i_209]);
    }
    __result_obj__108 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_210;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_212;
struct list$1float$* __result_obj__107;
    if(    self->len==0    ) {
        litem_210=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1float$*"))));
        litem_210->prev=((void*)0);
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head=litem_210;
    }
    else if(    self->len==1    ) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1float$*"))));
        litem_211->prev=self->head;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head->next=litem_211;
    }
    else {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1float$*"))));
        litem_212->prev=self->tail;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail->next=litem_212;
        self->tail=litem_212;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_213;
struct list_item$1float$* prev_it_214;
    it_213=self->head;
    while(    it_213!=((void*)0)    ) {
        prev_it_214=it_213;
        it_213=it_213->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__109;
    __result_obj__109 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3812, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_215;
struct list$1double$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_215=0    ;    i_215<num_value    ;    i_215++    ){
        list$1double$_push_back(self,values[i_215]);
    }
    __result_obj__111 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_216;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_218;
struct list$1double$* __result_obj__110;
    if(    self->len==0    ) {
        litem_216=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1double$*"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1    ) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1double$*"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1double$*"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_219;
struct list_item$1double$* prev_it_220;
    it_219=self->head;
    while(    it_219!=((void*)0)    ) {
        prev_it_220=it_219;
        it_219=it_219->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__112;
    __result_obj__112 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3817, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
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
void* __right_value84 = (void*)0;
char* __result_obj__113;
int len_221;
void* __right_value85 = (void*)0;
char* result_222;
char* __result_obj__114;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_221=strlen(self)+strlen(right);
    result_222=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_221+1)), "/usr/local/include/comelang.h", 4046, "char*"));
    strncpy(result_222,self,len_221+1);
    strncat(result_222,right,len_221+1);
    __result_obj__114 = (char*)come_increment_ref_count(result_222);
    (result_222 = come_decrement_ref_count(result_222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__115;
int len_223;
void* __right_value87 = (void*)0;
char* result_224;
char* __result_obj__116;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_223=strlen(self)+strlen(right);
    result_224=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_223+1)), "/usr/local/include/comelang.h", 4061, "char*"));
    strncpy(result_224,self,len_223+1);
    strncat(result_224,right,len_223+1);
    __result_obj__116 = (char*)come_increment_ref_count(result_224);
    (result_224 = come_decrement_ref_count(result_224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__117;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_225;
int i_226;
void* __right_value91 = (void*)0;
char* __result_obj__118;
    if(    self==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    buf_225=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "struct buffer*"))));
    for(    i_226=0    ;    i_226<right    ;    i_226++    ){
        buffer_append_str(buf_225,self);
    }
    __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_225))));
    come_call_finalizer(buffer_finalize, buf_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__119;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_227;
int i_228;
void* __right_value95 = (void*)0;
char* __result_obj__120;
    if(    self==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "struct buffer*"))));
    for(    i_228=0    ;    i_228<right    ;    i_228++    ){
        buffer_append_str(buf_227,self);
    }
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_227))));
    come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__120;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_229;
int i_230;
    result_229=(_Bool)0;
    for(    i_230=0    ;    i_230<len    ;    i_230++    ){
        if(        strncmp(self[i_230],str,strlen(self[i_230]))==0        ) {
            result_229=(_Bool)1;
            break;
        }
    }
    return result_229;
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
int result_231;
char* p_232;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_231=0;
    p_232=value;
    while(    *p_232    ) {
        result_231+=(*p_232);
        p_232++;
    }
    return result_231;
}

unsigned int string_get_hash_key(char* value){
int result_233;
char* p_234;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_233=0;
    p_234=value;
    while(    *p_234    ) {
        result_233+=(*p_234);
        p_234++;
    }
    return result_233;
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
_Bool result_235;
    result_235=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_235;
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
_Bool result_236;
    result_236=(c>=32&&c<=126);
    return result_236;
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
void* __right_value96 = (void*)0;
char* __result_obj__121;
int len_237;
void* __right_value97 = (void*)0;
char* result_238;
int i_239;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    len_237=strlen(str);
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_237+1)), "/usr/local/include/comelang.h", 4356, "char*"));
    for(    i_239=0    ;    i_239<len_237    ;    i_239++    ){
        result_238[i_239]=str[len_237-i_239-1];
    }
    result_238[len_237]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__123;
int len_240;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__124;
void* __right_value101 = (void*)0;
char* __result_obj__125;
void* __right_value102 = (void*)0;
char* __result_obj__126;
void* __right_value103 = (void*)0;
char* result_241;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_240=strlen(str);
    if(    head<0    ) {
        head+=len_240;
    }
    if(    tail<0    ) {
        tail+=len_240+1;
    }
    if(    head>tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_240    ) {
        tail=len_240;
    }
    if(    head==tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    tail-head+1<1    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result_241=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4402, "char*"));
    memcpy(result_241,str+head,tail-head);
    result_241[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_241);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__128;
int len_242;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__129;
void* __right_value107 = (void*)0;
char* __result_obj__130;
void* __right_value108 = (void*)0;
char* __result_obj__131;
void* __right_value109 = (void*)0;
char* result_243;
char* __result_obj__132;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_242=strlen(str);
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head>tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    if(    head==tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail-head+1<1    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4445, "char*"));
    memcpy(result_243,str+head,tail-head);
    result_243[tail-head]=0;
    __result_obj__132 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__133;
int len_244;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__134;
void* __right_value113 = (void*)0;
char* __result_obj__135;
void* __right_value114 = (void*)0;
char* __result_obj__136;
void* __right_value115 = (void*)0;
char* result_245;
char* __result_obj__137;
    if(    str==((void*)0)    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    len_244=strlen(str);
    if(    head<0    ) {
        head+=len_244;
    }
    if(    tail<0    ) {
        tail+=len_244+1;
    }
    if(    head>tail    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_244    ) {
        tail=len_244;
    }
    if(    head==tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    tail-head+1<1    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    result_245=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4488, "char*"));
    memcpy(result_245,str+head,tail-head);
    result_245[tail-head]=0;
    __result_obj__137 = (char*)come_increment_ref_count(result_245);
    (result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__138;
va_list args_246;
char* result_247;
int len_248;
void* __right_value117 = (void*)0;
char* __result_obj__139;
void* __right_value118 = (void*)0;
char* result2_249;
char* __result_obj__140;
memset(&args_246, 0, sizeof(va_list));
result_247 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    __builtin_va_start(args_246,msg);
    len_248=vasprintf(&result_247,msg,args_246);
    __builtin_va_end(args_246);
    if(    len_248<0    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result2_249=(char*)come_increment_ref_count(__builtin_string(result_247));
    free(result_247);
    __result_obj__140 = (char*)come_increment_ref_count(result2_249);
    (result2_249 = come_decrement_ref_count(result2_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__141;
int len_250;
void* __right_value120 = (void*)0;
char* __result_obj__142;
void* __right_value121 = (void*)0;
char* __result_obj__143;
void* __right_value122 = (void*)0;
char* result_251;
char* __result_obj__144;
    if(    str==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    len_250=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    if(    head<0    ) {
        head+=len_250;
    }
    if(    tail<0    ) {
        tail+=len_250+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    tail>=len_250    ) {
        tail=len_250;
    }
    result_251=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_250-(tail-head)+1)), "/usr/local/include/comelang.h", 4550, "char*"));
    memcpy(result_251,str,head);
    memcpy(result_251+head,str+tail,len_250-tail);
    result_251[len_250-(tail-head)]=0;
    __result_obj__144 = (char*)come_increment_ref_count(result_251);
    (result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__145;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__145 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__145;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_252;
struct list_item$1char$ph* prev_it_253;
    it_252=self->head;
    while(    it_252!=((void*)0)    ) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_257;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_258;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_259;
char* __dec_obj15;
struct list$1char$ph* __result_obj__147;
    if(    self->len==0    ) {
        litem_257=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj13=litem_257->item,
        litem_257->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1    ) {
        litem_258=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj14=litem_258->item,
        litem_258->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj15=litem_259->item,
        litem_259->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__147 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__147;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__146;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_254;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_255;
int i_256;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__148;
    if(    self==((void*)0)    ) {
        __result_obj__146 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4563, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__146;
    }
    result_254=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4566, "struct list$1char$ph*"))));
    str_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4568, "struct buffer*"))));
    for(    i_256=0    ;    i_256<charp_length(self)    ;    i_256++    ){
        if(        self[i_256]==c        ) {
            list$1char$ph_push_back(result_254,(char*)come_increment_ref_count(__builtin_string(str_255->buf)));
            buffer_reset(str_255);
        }
        else {
            buffer_append_char(str_255,self[i_256]);
        }
    }
    if(    buffer_length(str_255)!=0    ) {
        list$1char$ph_push_back(result_254,(char*)come_increment_ref_count(__builtin_string(str_255->buf)));
    }
    __result_obj__148 = (struct list$1char$ph*)come_increment_ref_count(result_254);
    come_call_finalizer(list$1char$ph$p_finalize, result_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__150;
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* charp_printable(char* str){
int len_260;
void* __right_value136 = (void*)0;
char* result_261;
int n_262;
int i_263;
char c_264;
char* __result_obj__151;
    len_260=charp_length(str);
    result_261=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_260*2+1)), "/usr/local/include/comelang.h", 4600, "char*"));
    n_262=0;
    for(    i_263=0    ;    i_263<len_260    ;    i_263++    ){
        c_264=str[i_263];
        if(        (c_264>=0&&c_264<32)||c_264==127        ) {
            result_261[n_262++]=94;
            result_261[n_262++]=c_264+65-1;
        }
        else {
            result_261[n_262++]=c_264;
        }
    }
    result_261[n_262]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_261);
    (result_261 = come_decrement_ref_count(result_261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__152;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_265;
char* p_266;
char* p2_267;
void* __right_value140 = (void*)0;
char* __result_obj__153;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    result_265=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4628, "struct buffer*"))));
    p_266=self;
    while(    (_Bool)1    ) {
        p2_267=strstr(p_266,str);
        if(        p2_267==((void*)0)        ) {
            p2_267=p_266;
            while(            *p2_267            ) {
                p2_267++;
            }
            buffer_append(result_265,p_266,p2_267-p_266);
            break;
        }
        buffer_append(result_265,p_266,p2_267-p_266);
        buffer_append_str(result_265,replace);
        p_266=p2_267+strlen(str);
    }
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_265))));
    come_call_finalizer(buffer_finalize, result_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__154;
char* p_268;
void* __right_value142 = (void*)0;
char* __result_obj__155;
void* __right_value143 = (void*)0;
char* __result_obj__156;
void* __right_value144 = (void*)0;
char* __result_obj__157;
    if(    path==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    p_268=path+strlen(path);
    while(    p_268>=path    ) {
        if(        *p_268==47        ) {
            break;
        }
        else {
            p_268--;
        }
    }
    if(    p_268<path    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_268+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__158;
void* __right_value146 = (void*)0;
char* path2_269;
char* p_270;
void* __right_value147 = (void*)0;
char* __result_obj__159;
void* __right_value148 = (void*)0;
char* __result_obj__160;
void* __right_value149 = (void*)0;
char* __result_obj__161;
    if(    path==((void*)0)    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    path2_269=(char*)come_increment_ref_count(xbasename(path));
    p_270=path2_269+strlen(path2_269);
    while(    p_270>=path2_269    ) {
        if(        *p_270==46        ) {
            break;
        }
        else {
            p_270--;
        }
    }
    if(    p_270<path2_269    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_269))));
        (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    else {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_269,0,p_270-path2_269))));
        (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__162;
char* p_271;
void* __right_value151 = (void*)0;
char* __result_obj__163;
void* __right_value152 = (void*)0;
char* __result_obj__164;
void* __right_value153 = (void*)0;
char* __result_obj__165;
    if(    path==((void*)0)    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    p_271=path+strlen(path);
    while(    p_271>=path    ) {
        if(        *p_271==46        ) {
            break;
        }
        else {
            p_271--;
        }
    }
    if(    p_271<path    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    else {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_271+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__166;
void* __right_value155 = (void*)0;
char* __result_obj__167;
    if(    self    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__168;
void* __right_value157 = (void*)0;
char* __result_obj__169;
    if(    self    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    else {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__177;
void* __right_value166 = (void*)0;
char* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__179;
void* __right_value168 = (void*)0;
char* __result_obj__180;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
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

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_272;
    for(    i_272=0    ;    i_272<self    ;    i_272++    ){
        block(parent,i_272);
    }
}

