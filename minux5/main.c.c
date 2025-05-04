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
int uart_busy=0;
char uartbuf[1024];
int uartbuf_head=0;
int uartbuf_tail=0;
int gActiveProc=0;
int gNumProc=0;
typedef unsigned long  int pte_t;

typedef unsigned long  int* pagetable_t;

unsigned long  int* kernel_pagetable;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
static void va_list_finalize(va_list self);
int vasprintf(char** strp, const char* fmt, va_list ap);
void perror(const char* msg);
void putchar(char c);
void uartputc_sync(char c);
int printf(const char* fmt, ...);
void puts(const char* s);
void flush_uart();
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
void swtch(struct context* anonymous_var_nameX77, struct context* anonymous_var_nameX78);
void timer_reset();
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
void kvminit();
void map_page(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int pa, int perm);
void enable_vm(unsigned long  int* pagetable);
unsigned long  int* uvmcreate();
void copyout(unsigned long  int* pagetable, unsigned long  int va, void* src, unsigned int sz);
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
static inline unsigned long  int intr_get(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_28));
    return (x_28&(1<<3))!=0;
}
static inline void intr_off(){
unsigned long  int x_29;
memset(&x_29, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_29));
    x_29&=~(1<<3);
    __asm volatile("csrw mstatus, %0" : : "r"(x_29));
}
static inline void intr_on(){
unsigned long  int x_30;
memset(&x_30, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_30));
    x_30|=(1<<3);
    __asm volatile("csrw mstatus, %0" : : "r"(x_30));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_35;
memset(&x_35, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_35));
    return x_35;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_36;
memset(&x_36, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_36));
    return x_36;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_37;
memset(&x_37, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_37));
    return x_37;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_38;
memset(&x_38, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_38));
    return x_38;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_39;
memset(&x_39, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_39));
    return x_39;
}
static inline void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
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

int printf(const char* fmt, ...){
va_list ap_25;
int len_26;
int i_27;
int __result_obj__11;
memset(&ap_25, 0, sizeof(va_list));
    char buf_24[256];
    memset(&buf_24, 0, sizeof(char)    *(256)    );
    __builtin_va_start(ap_25,fmt);
    len_26=snprintf(buf_24,sizeof(buf_24),fmt,ap_25);
    for(    i_27=0    ;    i_27<len_26    ;    i_27++    ){
        putchar(buf_24[i_27]);
    }
    __builtin_va_end(ap_25);
    __result_obj__11 = len_26;
    come_call_finalizer(va_list_finalize, (&ap_25), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__11;
}

void puts(const char* s){
int next_31;
    intr_off();
    while(    *s    ) {
        next_31=(uartbuf_head+1)%1024;
        if(        next_31!=uartbuf_tail        ) {
            uartbuf[uartbuf_head]=*s++;
            uartbuf_head=next_31;
        }
        else {
            break;
        }
    }
    intr_on();
}

void flush_uart(){
    intr_off();
    while(    uartbuf_tail!=uartbuf_head    ) {
        *(char*)(268435456)=uartbuf[uartbuf_tail];
        uartbuf_tail=(uartbuf_tail+1)%1024;
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_32;
r_32 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_32=(struct run*)pa;
    r_32->next=kmem.freelist;
    kmem.freelist=r_32;
}

void freerange(void* pa_start, void* pa_end){
char* p_33;
p_33 = (void*)0;
    p_33=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_33+4096<=(_end+4096*256)    ;    p_33+=4096    ){
        kfree(p_33);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_34;
void* __result_obj__12;
r_34 = (void*)0;
    r_34=kmem.freelist;
    if(    r_34    ) {
        kmem.freelist=r_34->next;
    }
    __result_obj__12 = (void*)r_34;
    return __result_obj__12;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_40;
    w_mtvec((unsigned long  int)timervec&~3);
    now_40=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_40+-1;
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
        flush_uart();
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
        flush_uart();
    }
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_47;
struct proc* __result_obj__17;
    result_47=kalloc();
    memset(result_47,0,sizeof(struct proc));
    result_47->stack=kalloc();
    result_47->context.sp=(unsigned long  int)(result_47->stack+4096);
    result_47->context.mepc=(unsigned long  int)task;
    result_47->state=(3);
    gProc[gNumProc++]=result_47;
    __result_obj__17 = result_47;
    return __result_obj__17;
}

void timer_reset(){
unsigned long  int now_48;
    now_48=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_48+10000000;
}

void timer_handler(){
struct proc* p_49;
struct context* tf_50;
    disable_timer_interrupts();
    p_49=gProc[gActiveProc];
    tf_50=(struct context*)TRAPFRAME;
    p_49->context=*tf_50;
    yield();
}

void yield(){
struct proc* p_51;
    p_51=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_51=gProc[gActiveProc];
    p_51->state=(3);
    scheduler();
}

void scheduler(){
int i_52;
struct proc* p_53;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_52=0        ;        i_52<gNumProc        ;        i_52++        ){
            p_53=gProc[i_52];
            if(            p_53->state==(3)            ) {
                gActiveProc=i_52;
                p_53->state=(4);
                printf("SWITCH TO %d\n",i_52);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_53->context);
                disable_timer_interrupts();
                p_53->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_54;
    now_54=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

void kvminit(){
unsigned long  int addr_55;
    kernel_pagetable=(unsigned long  int*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_55=2147483648    ;    addr_55<(2147483648+128*1024*1024)    ;    addr_55+=4096    ){
        map_page(kernel_pagetable,addr_55,addr_55,(1<<1)|(1<<2)|(1<<3)|(1<<0));
    }
    map_page(kernel_pagetable,268435456,268435456,(1<<1)|(1<<2)|(1<<0));
}

void map_page(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int pa, int perm){
int level_56;
unsigned long  int* pt_57;
int idx_58;
unsigned long  int* new_pt_59;
int idx_60;
memset(&level_56, 0, sizeof(int));
    pt_57=pagetable;
    for(    level_56=2    ;    level_56>0    ;    level_56--    ){
        idx_58=((((unsigned long  int)(va))>>(12+(9*level_56)))&511);
        if(        !(pt_57[idx_58]&(1<<0))        ) {
            new_pt_59=(unsigned long  int*)kalloc();
            memset(new_pt_59,0,4096);
            pt_57[idx_58]=((unsigned long  int)new_pt_59>>12)<<10|(1<<0);
        }
        pt_57=(unsigned long  int*)(((pt_57[idx_58]>>10)<<12));
    }
    idx_60=((((unsigned long  int)(va))>>(12+(9*0)))&511);
    pt_57[idx_60]=(pa>>12)<<10|perm|(1<<0);
}

void enable_vm(unsigned long  int* pagetable){
unsigned long  int satp_61;
    satp_61=(8<<60)|(((unsigned long  int)pagetable>>12)&-1);
    __asm volatile("csrw satp, %0" : : "r"(satp_61));
    __asm volatile("sfence.vma zero, zero");
}

unsigned long  int* uvmcreate(){
unsigned long  int* pagetable_62;
unsigned long  int* __result_obj__18;
    pagetable_62=(unsigned long  int*)kalloc();
    memset(pagetable_62,0,4096);
    __result_obj__18 = pagetable_62;
    return __result_obj__18;
}

void copyout(unsigned long  int* pagetable, unsigned long  int va, void* src, unsigned int sz){
int i_63;
    for(    i_63=0    ;    i_63<sz    ;    i_63++    ){
        map_page(pagetable,va+i_63,(unsigned long  int)(src+i_63),(1<<4)|(1<<1)|(1<<2)|(1<<3));
    }
}

int main(){
    come_heap_init(0, 0, 0);
    puts("HELLO WORLD");
    kinit();
    kvminit();
    enable_vm(kernel_pagetable);
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
void* __result_obj__19;
void* prev_64;
void* __result_obj__20;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__19 = (void*)-1;
        return __result_obj__19;
    }
    prev_64=heap_end;
    heap_end+=incr;
    __result_obj__20 = prev_64;
    return __result_obj__20;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_65;
struct sBlock* __result_obj__21;
struct sBlock* __result_obj__22;
    curr_65=free_list;
    while(    curr_65    ) {
        if(        curr_65->free&&curr_65->size>=size        ) {
            __result_obj__21 = curr_65;
            return __result_obj__21;
        }
        curr_65=curr_65->next;
    }
    __result_obj__22 = ((void*)0);
    return __result_obj__22;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_66;
struct sBlock* __result_obj__23;
struct sBlock* b_67;
struct sBlock* __result_obj__24;
    mem_66=_sbrk(size+sizeof(struct sBlock));
    if(    mem_66==(void*)-1    ) {
        __result_obj__23 = ((void*)0);
        return __result_obj__23;
    }
    b_67=(struct sBlock*)mem_66;
    b_67->size=size;
    b_67->next=((void*)0);
    b_67->free=0;
    __result_obj__24 = b_67;
    return __result_obj__24;
}

void* malloc(unsigned long  int size){
struct sBlock* block_68;
void* __result_obj__25;
void* __result_obj__26;
struct sBlock* curr_69;
void* __result_obj__27;
block_68 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_68=find_free_block(size))    ) {
        block_68->free=0;
        __result_obj__25 = (void*)(block_68+1);
        return __result_obj__25;
    }
    block_68=request_space(size);
    if(    !block_68    ) {
        __result_obj__26 = ((void*)0);
        return __result_obj__26;
    }
    if(    !free_list    ) {
        free_list=block_68;
    }
    else {
        curr_69=free_list;
        while(        curr_69->next        ) {
            curr_69=curr_69->next;
        }
        curr_69->next=block_68;
    }
    __result_obj__27 = (void*)(block_68+1);
    return __result_obj__27;
}

void free(void* ptr){
struct sBlock* block_70;
    if(    !ptr    ) {
        return;
    }
    block_70=((struct sBlock*)ptr)-1;
    block_70->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_71;
void* ptr_72;
void* __result_obj__28;
    total_71=n*size;
    ptr_72=malloc(total_71);
    if(    ptr_72    ) {
        memset(ptr_72,0,total_71);
    }
    __result_obj__28 = ptr_72;
    return __result_obj__28;
}

char* strdup(const char* s){
unsigned long  int len_73;
char* p_74;
char* __result_obj__29;
    len_73=strlen(s)+1;
    p_74=malloc(len_73);
    if(    p_74    ) {
        memcpy(p_74,s,len_73);
    }
    __result_obj__29 = p_74;
    return __result_obj__29;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__30;
char* __result_obj__31;
char* __result_obj__32;
    if(    !*needle    ) {
        __result_obj__30 = (char*)haystack;
        return __result_obj__30;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_75=haystack;
        const char* n_76=needle;
        while(        *h_75&&*n_76&&(*h_75==*n_76)        ) {
            h_75++;
            n_76++;
        }
        if(        !*n_76        ) {
            __result_obj__31 = (char*)haystack;
            return __result_obj__31;
        }
    }
    __result_obj__32 = ((void*)0);
    return __result_obj__32;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_77;
int i_78;
void* __result_obj__33;
    cdst_77=(char*)dst;
    for(    i_78=0    ;    i_78<n    ;    i_78++    ){
        cdst_77[i_78]=c;
    }
    __result_obj__33 = dst;
    return __result_obj__33;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_79;
const unsigned char* s2_80;
memset(&s1_79, 0, sizeof(const unsigned char*));
memset(&s2_80, 0, sizeof(const unsigned char*));
    s1_79=v1;
    s2_80=v2;
    while(    n-->0    ) {
        if(        *s1_79!=*s2_80        ) {
            return *s1_79-*s2_80;
        }
        s1_79++,s2_80++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_81;
char* d_82;
void* __result_obj__34;
void* __result_obj__35;
s_81 = (void*)0;
d_82 = (void*)0;
    if(    n==0    ) {
        __result_obj__34 = dst;
        return __result_obj__34;
    }
    s_81=src;
    d_82=dst;
    if(    s_81<d_82&&s_81+n>d_82    ) {
        s_81+=n;
        d_82+=n;
        while(        n-->0        ) {
            *--d_82=*--s_81;
        }
    }
    else {
        while(        n-->0        ) {
            *d_82++=*s_81++;
        }
    }
    __result_obj__35 = dst;
    return __result_obj__35;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__36;
    __result_obj__36 = memmove(dst,src,n);
    return __result_obj__36;
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
char* os_83;
char* __result_obj__37;
os_83 = (void*)0;
    os_83=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__37 = os_83;
    return __result_obj__37;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_84;
char* __result_obj__38;
char* __result_obj__39;
os_84 = (void*)0;
    os_84=s;
    if(    n<=0    ) {
        __result_obj__38 = os_84;
        return __result_obj__38;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__39 = os_84;
    return __result_obj__39;
}

int strlen(const char* s){
int n_85;
memset(&n_85, 0, sizeof(int));
    for(    n_85=0    ;    s[n_85]    ;    n_85++    ){
        ;
    }
    return n_85;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_86;
char* __result_obj__40;
    d_86=dest;
    while(    *d_86    ) {
        d_86++;
    }
    while(    n--&&*src    ) {
        *d_86++=*src++;
    }
    *d_86=0;
    __result_obj__40 = dest;
    return __result_obj__40;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_87;
char* __result_obj__41;
int digit_91;
char* __result_obj__42;
    p_87=buf;
    char tmp_88[32];
    memset(&tmp_88, 0, sizeof(char)    *(32)    );
    int i_89=0;
    int negative_90=0;
    if(    base<2||base>16    ) {
        *p_87=0;
        __result_obj__41 = p_87;
        return __result_obj__41;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_90=1;
        val_=-val_;
    }
    do {
        digit_91=val_%base;
        tmp_88[i_89++]=(((digit_91<10))?(48+digit_91):(97+digit_91-10));
        val_/=base;
    } while(    val_    );
    if(    negative_90    ) {
        *p_87++=45;
    }
    while(    i_89--    ) {
        *p_87++=tmp_88[i_89];
    }
    *p_87=0;
    __result_obj__42 = buf;
    return __result_obj__42;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_92;
char* p_93;
const char* s_94;
unsigned long  int remaining_96;
int __result_obj__43;
int __result_obj__44;
memset(&ap_92, 0, sizeof(va_list));
s_94 = (void*)0;
    __builtin_va_start(ap_92,fmt);
    p_93=out;
    char buf_95[32];
    memset(&buf_95, 0, sizeof(char)    *(32)    );
    remaining_96=out_size;
    if(    remaining_96==0    ) {
        __builtin_va_end(ap_92);
        __result_obj__43 = 0;
        come_call_finalizer(va_list_finalize, (&ap_92), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__43;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_96>1            ) {
                *p_93++=*fmt;
                remaining_96--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_94=__builtin_va_arg(ap_92,const char*);
            while(            *s_94&&remaining_96>1            ) {
                *p_93++=*s_94++;
                remaining_96--;
            }
            break;
            case 100:
            itoa(buf_95,__builtin_va_arg(ap_92,int),10,0);
            s_94=buf_95;
            while(            *s_94&&remaining_96>1            ) {
                *p_93++=*s_94++;
                remaining_96--;
            }
            break;
            case 120:
            itoa(buf_95,(unsigned int)__builtin_va_arg(ap_92,int),16,1);
            s_94=buf_95;
            while(            *s_94&&remaining_96>1            ) {
                *p_93++=*s_94++;
                remaining_96--;
            }
            break;
            case 99:
            if(            remaining_96>1            ) {
                *p_93++=(char)__builtin_va_arg(ap_92,int);
                remaining_96--;
            }
            break;
            case 112:
            s_94="0x";
            while(            *s_94&&remaining_96>1            ) {
                *p_93++=*s_94++;
                remaining_96--;
            }
            itoa(buf_95,(long)__builtin_va_arg(ap_92,void*),16,1);
            s_94=buf_95;
            while(            *s_94&&remaining_96>1            ) {
                *p_93++=*s_94++;
                remaining_96--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_95,__builtin_va_arg(ap_92,long),10,1);
                s_94=buf_95;
                while(                *s_94&&remaining_96>1                ) {
                    *p_93++=*s_94++;
                    remaining_96--;
                }
            }
            break;
            default:
            if(            remaining_96>1            ) {
                *p_93++=37;
                remaining_96--;
                if(                remaining_96>1                ) {
                    *p_93++=*fmt;
                    remaining_96--;
                }
            }
            break;
        }
    }
    *p_93=0;
    __builtin_va_end(ap_92);
    __result_obj__44 = p_93-out;
    come_call_finalizer(va_list_finalize, (&ap_92), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__44;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_97;
char* p_98;
const char* s_99;
unsigned long  int remaining_101;
int __result_obj__45;
int __result_obj__46;
memset(&ap_97, 0, sizeof(va_list));
s_99 = (void*)0;
    __builtin_va_start(ap_97,fmt);
    p_98=out;
    char buf_100[32];
    memset(&buf_100, 0, sizeof(char)    *(32)    );
    remaining_101=out_size;
    if(    remaining_101==0    ) {
        __builtin_va_end(ap_97);
        __result_obj__45 = 0;
        come_call_finalizer(va_list_finalize, (&ap_97), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__45;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_101>1            ) {
                *p_98++=*fmt;
                remaining_101--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_99=__builtin_va_arg(ap_97,const char*);
            while(            *s_99&&remaining_101>1            ) {
                *p_98++=*s_99++;
                remaining_101--;
            }
            break;
            case 100:
            itoa(buf_100,__builtin_va_arg(ap_97,int),10,0);
            s_99=buf_100;
            while(            *s_99&&remaining_101>1            ) {
                *p_98++=*s_99++;
                remaining_101--;
            }
            break;
            case 120:
            itoa(buf_100,(unsigned int)__builtin_va_arg(ap_97,int),16,1);
            s_99=buf_100;
            while(            *s_99&&remaining_101>1            ) {
                *p_98++=*s_99++;
                remaining_101--;
            }
            break;
            case 99:
            if(            remaining_101>1            ) {
                *p_98++=(char)__builtin_va_arg(ap_97,int);
                remaining_101--;
            }
            break;
            case 112:
            s_99="0x";
            while(            *s_99&&remaining_101>1            ) {
                *p_98++=*s_99++;
                remaining_101--;
            }
            itoa(buf_100,(long)__builtin_va_arg(ap_97,void*),16,1);
            s_99=buf_100;
            while(            *s_99&&remaining_101>1            ) {
                *p_98++=*s_99++;
                remaining_101--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_100,__builtin_va_arg(ap_97,long),10,1);
                s_99=buf_100;
                while(                *s_99&&remaining_101>1                ) {
                    *p_98++=*s_99++;
                    remaining_101--;
                }
            }
            break;
            default:
            if(            remaining_101>1            ) {
                *p_98++=37;
                remaining_101--;
                if(                remaining_101>1                ) {
                    *p_98++=*fmt;
                    remaining_101--;
                }
            }
            break;
        }
    }
    *p_98=0;
    __builtin_va_end(ap_97);
    __result_obj__46 = p_98-out;
    come_call_finalizer(va_list_finalize, (&ap_97), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__46;
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
struct buffer* buf_102;
int i_103;
void* __right_value2 = (void*)0;
    buf_102=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 709, "struct buffer*"))));
    buffer_append_format(buf_102,"%s %d\n",sname,sline);
    for(    i_103=gNumComeStackFrame-2    ;    i_103>=0    ;    i_103--    ){
        buffer_append_format(buf_102,"%s %d #%d\n",gComeStackFrameSName[i_103],gComeStackFrameSLine[i_103],gComeStackFrameID[i_103]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_102))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_104;
    for(    i_104=gNumComeStackFrame-1    ;    i_104>=0    ;    i_104--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_104],gComeStackFrameSLine[i_104],gComeStackFrameID[i_104]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__47;
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
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
int i_105;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_105=0    ;    i_105<gHeapPages.mSizePages    ;    i_105++    ){
        gHeapPages.mPages[i_105]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_106;
int n_107;
_Bool flag_108;
int i_109;
struct sMemHeaderTiny* it_110;
int n_111;
int i_112;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_106=gAllocMem;
        n_107=0;
        while(        it_106        ) {
            n_107++;
            flag_108=(_Bool)0;
            printf("#%d ",n_107);
            if(            it_106->class_name            ) {
                printf("%p (%s): ",(char*)it_106+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_106->class_name);
            }
            for(            i_109=0            ;            i_109<16            ;            i_109++            ){
                if(                it_106->sname[i_109]                ) {
                    printf("%s %d #%d, ",it_106->sname[i_109],it_106->sline[i_109],it_106->id[i_109]);
                    flag_108=(_Bool)1;
                }
            }
            if(            flag_108            ) {
                puts("");
            }
            it_106=it_106->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_107,gNumAlloc,gNumFree);
    }
    else {
        it_110=(struct sMemHeaderTiny*)gAllocMem;
        n_111=0;
        while(        it_110        ) {
            n_111++;
            if(            it_110->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_111,(char*)it_110+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_110->class_name,it_110->sname,it_110->sline);
            }
            it_110=it_110->next;
        }
        if(        n_111>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_111,gNumAlloc,gNumFree);
        }
    }
    for(    i_112=0    ;    i_112<gHeapPages.mSizePages    ;    i_112++    ){
        free(gHeapPages.mPages[i_112]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_113;
unsigned long  int free_area_114;
int new_size_pages_115;
char** new_pages_116;
int i_117;
void* __result_obj__48;
    result_113=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_113=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_113,0,size);
        }
        if(        result_113==((void*)0)        ) {
            free_area_114=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_114            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_115=gHeapPages.mSizePages*2;
                    new_pages_116=calloc(1,sizeof(char*)*new_size_pages_115);
                    i_117=0;
                    for(                    ;                    i_117<gHeapPages.mSizePages                    ;                    i_117++                    ){
                        new_pages_116[i_117]=gHeapPages.mPages[i_117];
                    }
                    for(                    ;                    i_117<new_size_pages_115                    ;                    i_117++                    ){
                        new_pages_116[i_117]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_116;
                    gHeapPages.mSizePages=new_size_pages_115;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_113=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_113=calloc(1,size);
    }
    __result_obj__48 = result_113;
    return __result_obj__48;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_118;
struct sMemHeader* it_119;
int i_120;
int i_121;
void* __result_obj__49;
void* result_122;
struct sMemHeaderTiny* it_123;
void* __result_obj__50;
memset(&i_120, 0, sizeof(int));
memset(&i_121, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_118=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_119=result_118;
        it_119->allocated=177783;
        it_119->size=size+sizeof(struct sMemHeader);
        it_119->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_120=0            ;            i_120<gNumComeStackFrame            ;            i_120++            ){
                it_119->sname[i_120]=gComeStackFrameSName[i_120];
                it_119->sline[i_120]=gComeStackFrameSLine[i_120];
                it_119->id[i_120]=gComeStackFrameID[i_120];
            }
        }
        else {
            for(            i_121=0            ;            i_121<16            ;            i_121++            ){
                it_119->sname[i_121]=gComeStackFrameSName[gNumComeStackFrame-1-i_121];
                it_119->sline[i_121]=gComeStackFrameSLine[gNumComeStackFrame-1-i_121];
                it_119->id[i_121]=gComeStackFrameID[gNumComeStackFrame-1-i_121];
            }
        }
        come_pop_stackframe_v2();
        it_119->next=gAllocMem;
        it_119->prev=((void*)0);
        it_119->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_119;
        }
        gAllocMem=it_119;
        gNumAlloc++;
        __result_obj__49 = (char*)result_118+sizeof(struct sMemHeader);
        return __result_obj__49;
    }
    else {
        result_122=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_123=result_122;
        it_123->allocated=177783;
        it_123->class_name=class_name;
        it_123->sname=sname;
        it_123->sline=sline;
        it_123->size=size+sizeof(struct sMemHeaderTiny);
        it_123->free_next=((void*)0);
        it_123->next=(struct sMemHeaderTiny*)gAllocMem;
        it_123->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_123;
        }
        gAllocMem=(struct sMemHeader*)it_123;
        gNumAlloc++;
        __result_obj__50 = (char*)result_122+sizeof(struct sMemHeaderTiny);
        return __result_obj__50;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_124;
struct sMemHeader* prev_it_125;
struct sMemHeader* next_it_126;
unsigned long  int size_127;
struct sMemHeaderTiny* it_128;
struct sMemHeaderTiny* prev_it_129;
struct sMemHeaderTiny* next_it_130;
unsigned long  int size_131;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_124=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_124->allocated!=177783            ) {
                return;
            }
            it_124->allocated=0;
            prev_it_125=it_124->prev;
            next_it_126=it_124->next;
            if(            gAllocMem==it_124            ) {
                gAllocMem=next_it_126;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_125                ) {
                    prev_it_125->next=next_it_126;
                }
                if(                next_it_126                ) {
                    next_it_126->prev=prev_it_125;
                }
            }
            size_127=it_124->size;
            if(            size_127<4096            ) {
                if(                gHeapPages.mFreeMem[size_127]==((void*)0)                ) {
                    it_124->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_127]=(struct sMemHeaderTiny*)it_124;
                }
                else {
                    it_124->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_127];
                    gHeapPages.mFreeMem[size_127]=(struct sMemHeaderTiny*)it_124;
                }
            }
            else {
                free(it_124);
            }
            gNumFree++;
        }
        else {
            it_128=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_128->allocated!=177783            ) {
                return;
            }
            it_128->allocated=0;
            prev_it_129=it_128->prev;
            next_it_130=it_128->next;
            if(            gAllocMem==it_128            ) {
                gAllocMem=(struct sMemHeader*)next_it_130;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_129                ) {
                    prev_it_129->next=next_it_130;
                }
                if(                next_it_130                ) {
                    next_it_130->prev=prev_it_129;
                }
            }
            size_131=it_128->size;
            if(            size_131<4096            ) {
                if(                gHeapPages.mFreeMem[size_131]==((void*)0)                ) {
                    it_128->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_131]=it_128;
                }
                else {
                    it_128->free_next=gHeapPages.mFreeMem[size_131];
                    gHeapPages.mFreeMem[size_131]=it_128;
                }
            }
            else {
                free(it_128);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_132;
char* __result_obj__51;
struct sMemHeaderTiny* it_133;
char* __result_obj__52;
    if(    gComeDebugLib    ) {
        it_132=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_132->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_132);
            exit(2);
        }
        __result_obj__51 = it_132->class_name;
        return __result_obj__51;
    }
    else {
        it_133=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_133->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_133);
            exit(2);
        }
        __result_obj__52 = it_133->class_name;
        return __result_obj__52;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_134;
int i_135;
struct sMemHeaderTiny* it_136;
    if(    gComeDebugLib    ) {
        it_134=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_134->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_134->class_name        ) {
            printf("(%s): ",it_134->class_name);
        }
        for(        i_135=0        ;        i_135<16        ;        i_135++        ){
            if(            it_134->sname[i_135]            ) {
                printf("%s %d #%d, ",it_134->sname[i_135],it_134->sline[i_135],it_134->id[i_135]);
            }
        }
        puts("");
    }
    else {
        it_136=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_136->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_136->class_name,it_136->sname,it_136->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_137;
unsigned long  int* ref_count_138;
unsigned long  int* size2_139;
void* __result_obj__53;
    mem_137=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_138=(unsigned long  int*)mem_137;
    *ref_count_138=0;
    size2_139=(unsigned long  int*)(mem_137+sizeof(unsigned long  int));
    *size2_139=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__53 = mem_137+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__53;
}

void come_free(void* mem){
unsigned long  int* ref_count_140;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_140=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_140);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__54;
char* mem_141;
unsigned long  int* size_p_142;
unsigned long  int size_143;
void* result_144;
void* __result_obj__55;
    if(    !block    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    mem_141=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_142=(unsigned long  int*)(mem_141+sizeof(unsigned long  int));
    size_143=*size_p_142-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_144=come_calloc_v2(1,size_143,sname,sline,class_name);
    memcpy(result_144,block,size_143);
    __result_obj__55 = result_144;
    return __result_obj__55;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__56;
unsigned long  int* ref_count_145;
void* __result_obj__57;
    if(    mem==((void*)0)    ) {
        __result_obj__56 = mem;
        return __result_obj__56;
    }
    ref_count_145=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_145)++;
    __result_obj__57 = mem;
    return __result_obj__57;
}

void* come_print_ref_count(void* mem){
void* __result_obj__58;
unsigned long  int* ref_count_146;
void* __result_obj__59;
    if(    mem==((void*)0)    ) {
        __result_obj__58 = mem;
        return __result_obj__58;
    }
    ref_count_146=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_146);
    __result_obj__59 = mem;
    return __result_obj__59;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__60;
void* __result_obj__61;
unsigned long  int* ref_count_147;
unsigned long  int count_148;
void (*finalizer_149)(void*);
void* __result_obj__62;
void* __result_obj__63;
memset(&finalizer_149, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__60 = mem;
            return __result_obj__60;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    ref_count_147=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_147)--;
    }
    count_148=*ref_count_147;
    if(    !no_free&&count_148<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_149=protocol_fun;
            finalizer_149(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    __result_obj__63 = mem;
    return __result_obj__63;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_150)(void*);
void (*finalizer_151)(void*);
void (*finalizer_152)(void*);
unsigned long  int* ref_count_153;
unsigned long  int count_154;
void (*finalizer_155)(void*);
void (*finalizer_156)(void*);
void (*finalizer_157)(void*);
memset(&finalizer_150, 0, sizeof(void (*)(void*)));
memset(&finalizer_151, 0, sizeof(void (*)(void*)));
memset(&finalizer_152, 0, sizeof(void (*)(void*)));
memset(&finalizer_155, 0, sizeof(void (*)(void*)));
memset(&finalizer_156, 0, sizeof(void (*)(void*)));
memset(&finalizer_157, 0, sizeof(void (*)(void*)));
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
                finalizer_150=protocol_fun;
                finalizer_150(protocol_obj);
            }
            finalizer_151=fun;
            finalizer_151(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_152=protocol_fun;
                finalizer_152(protocol_obj);
            }
        }
    }
    else {
        ref_count_153=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_153)--;
        }
        count_154=*ref_count_153;
        if(        !no_free&&count_154<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_155=protocol_fun;
                        finalizer_155(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_156=fun;
                        finalizer_156(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_157=protocol_fun;
                        finalizer_157(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__64;
int len_158;
void* __right_value4 = (void*)0;
char* result_159;
char* __result_obj__65;
    if(    str==((void*)0)    ) {
        __result_obj__64 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__64;
    }
    len_158=strlen(str)+1;
    result_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_158)), "/usr/local/include/comelang.h", 1385, "char*"));
    strncpy(result_159,str,len_158);
    __result_obj__65 = (char*)come_increment_ref_count(result_159);
    (result_159 = come_decrement_ref_count(result_159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__65;
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
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__67;
    __result_obj__67 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__67;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__68;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3339, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__68 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__69;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3349, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__69 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__70;
void* __right_value8 = (void*)0;
struct buffer* result_160;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__71;
    if(    self==((void*)0)    ) {
        __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__70;
    }
    result_160=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3369, "struct buffer*"));
    result_160->size=self->size;
    __dec_obj3=result_160->buf,
    result_160->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3372, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_160->len=self->len;
    memcpy(result_160->buf,self->buf,self->len);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__72;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__72 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__72;
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
struct buffer* __result_obj__73;
void* __right_value12 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__74;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3420, "char*"));
        memcpy(old_buf_161,self->buf,self->size);
        old_len_162=self->len;
        new_size_163=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3424, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__75;
void* __right_value14 = (void*)0;
char* old_buf_164;
int old_len_165;
int new_size_166;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_164=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3443, "char*"));
        old_len_165=self->len;
        new_size_166=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_166)), "/usr/local/include/comelang.h", 3447, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_164,old_len_165);
        self->buf[old_len_165]=0;
        self->size=new_size_166;
        (old_buf_164 = come_decrement_ref_count(old_buf_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__77;
int size_167;
void* __right_value16 = (void*)0;
char* old_buf_168;
int old_len_169;
int new_size_170;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__78;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__77 = self;
        return __result_obj__77;
    }
    size_167=strlen(mem);
    if(    self->len+size_167+1+1>=self->size    ) {
        old_buf_168=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3469, "char*"));
        memcpy(old_buf_168,self->buf,self->size);
        old_len_169=self->len;
        new_size_170=(self->size+size_167+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_170)), "/usr/local/include/comelang.h", 3473, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_168,old_len_169);
        self->buf[old_len_169]=0;
        self->size=new_size_170;
        (old_buf_168 = come_decrement_ref_count(old_buf_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_167);
    self->len+=size_167;
    self->buf[self->len]=0;
    __result_obj__78 = self;
    return __result_obj__78;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__79;
va_list args_171;
char* result_172;
int len_173;
struct buffer* __result_obj__80;
void* __right_value18 = (void*)0;
char* mem_174;
int size_175;
void* __right_value19 = (void*)0;
char* old_buf_176;
int old_len_177;
int new_size_178;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__81;
memset(&args_171, 0, sizeof(va_list));
result_172 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__79 = self;
        return __result_obj__79;
    }
    __builtin_va_start(args_171,msg);
    len_173=vasprintf(&result_172,msg,args_171);
    __builtin_va_end(args_171);
    if(    len_173<0    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    mem_174=(char*)come_increment_ref_count(__builtin_string(result_172));
    size_175=strlen(mem_174);
    if(    self->len+size_175+1+1>=self->size    ) {
        old_buf_176=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3506, "char*"));
        memcpy(old_buf_176,self->buf,self->size);
        old_len_177=self->len;
        new_size_178=(self->size+size_175+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_178)), "/usr/local/include/comelang.h", 3510, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_176,old_len_177);
        self->buf[old_len_177]=0;
        self->size=new_size_178;
        (old_buf_176 = come_decrement_ref_count(old_buf_176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_174,size_175);
    self->len+=size_175;
    self->buf[self->len]=0;
    free(result_172);
    __result_obj__81 = self;
    (mem_174 = come_decrement_ref_count(mem_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__81;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__82;
int size_179;
void* __right_value21 = (void*)0;
char* old_buf_180;
int old_len_181;
int new_size_182;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__83;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__82 = self;
        return __result_obj__82;
    }
    size_179=strlen(mem)+1;
    if(    self->len+size_179+1+1+1>=self->size    ) {
        old_buf_180=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3532, "char*"));
        memcpy(old_buf_180,self->buf,self->size);
        old_len_181=self->len;
        new_size_182=(self->size+size_179+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_182)), "/usr/local/include/comelang.h", 3536, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_180,old_len_181);
        self->buf[old_len_181]=0;
        self->size=new_size_182;
        (old_buf_180 = come_decrement_ref_count(old_buf_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_179);
    self->len+=size_179;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__84;
int* mem_183;
int size_184;
void* __right_value23 = (void*)0;
char* old_buf_185;
int old_len_186;
int new_size_187;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = ((void*)0);
        return __result_obj__84;
    }
    mem_183=&value;
    size_184=sizeof(int);
    if(    self->len+size_184+1+1>=self->size    ) {
        old_buf_185=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3559, "char*"));
        memcpy(old_buf_185,self->buf,self->size);
        old_len_186=self->len;
        new_size_187=(self->size+size_184+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_187)), "/usr/local/include/comelang.h", 3563, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_185,old_len_186);
        self->buf[old_len_186]=0;
        self->size=new_size_187;
        (old_buf_185 = come_decrement_ref_count(old_buf_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_183,size_184);
    self->len+=size_184;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_188;
int size_189;
void* __right_value25 = (void*)0;
char* old_buf_190;
int old_len_191;
int new_size_192;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__86;
    mem_188=&value;
    size_189=sizeof(long);
    if(    self->len+size_189+1+1>=self->size    ) {
        old_buf_190=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3582, "char*"));
        memcpy(old_buf_190,self->buf,self->size);
        old_len_191=self->len;
        new_size_192=(self->size+size_189+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_192)), "/usr/local/include/comelang.h", 3586, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_190,old_len_191);
        self->buf[old_len_191]=0;
        self->size=new_size_192;
        (old_buf_190 = come_decrement_ref_count(old_buf_190, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_188,size_189);
    self->len+=size_189;
    self->buf[self->len]=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__87;
short* mem_193;
int size_194;
void* __right_value27 = (void*)0;
char* old_buf_195;
int old_len_196;
int new_size_197;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__88;
    if(    self==((void*)0)    ) {
        __result_obj__87 = ((void*)0);
        return __result_obj__87;
    }
    mem_193=&value;
    size_194=sizeof(short);
    if(    self->len+size_194+1+1>=self->size    ) {
        old_buf_195=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3609, "char*"));
        memcpy(old_buf_195,self->buf,self->size);
        old_len_196=self->len;
        new_size_197=(self->size+size_194+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_197)), "/usr/local/include/comelang.h", 3613, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_195,old_len_196);
        self->buf[old_len_196]=0;
        self->size=new_size_197;
        (old_buf_195 = come_decrement_ref_count(old_buf_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_193,size_194);
    self->len+=size_194;
    self->buf[self->len]=0;
    __result_obj__88 = self;
    return __result_obj__88;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__89;
int len_198;
int new_size_199;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_200;
struct buffer* __result_obj__90;
    if(    self==((void*)0)    ) {
        __result_obj__89 = ((void*)0);
        return __result_obj__89;
    }
    len_198=self->len;
    len_198=(len_198+3)&~3;
    if(    len_198>=self->size    ) {
        new_size_199=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_199)), "/usr/local/include/comelang.h", 3637, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_199;
    }
    for(    i_200=self->len    ;    i_200<len_198    ;    i_200++    ){
        self->buf[i_200]=0;
    }
    self->len=len_198;
    __result_obj__90 = self;
    return __result_obj__90;
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
struct buffer* result_201;
struct buffer* __result_obj__91;
struct buffer* __result_obj__92;
    result_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3667, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__91 = (struct buffer*)come_increment_ref_count(result_201);
        come_call_finalizer(buffer_finalize, result_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__91;
    }
    buffer_append_str(result_201,self);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_201);
    come_call_finalizer(buffer_finalize, result_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__93;
void* __right_value33 = (void*)0;
char* __result_obj__94;
    if(    self==((void*)0)    ) {
        __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__93;
    }
    __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__95;
    __result_obj__95 = self->buf;
    return __result_obj__95;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_202;
struct buffer* __result_obj__96;
    result_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3694, "struct buffer*"))));
    buffer_append(result_202,self,sizeof(char)*len);
    __result_obj__96 = (struct buffer*)come_increment_ref_count(result_202);
    come_call_finalizer(buffer_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_203;
int i_204;
struct buffer* __result_obj__97;
    result_203=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3701, "struct buffer*"))));
    for(    i_204=0    ;    i_204<len    ;    i_204++    ){
        buffer_append(result_203,self[i_204],strlen(self[i_204]));
    }
    __result_obj__97 = (struct buffer*)come_increment_ref_count(result_203);
    come_call_finalizer(buffer_finalize, result_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_205;
struct buffer* __result_obj__98;
    result_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3710, "struct buffer*"))));
    buffer_append(result_205,(char*)self,sizeof(short)*len);
    __result_obj__98 = (struct buffer*)come_increment_ref_count(result_205);
    come_call_finalizer(buffer_finalize, result_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_206;
struct buffer* __result_obj__99;
    result_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3717, "struct buffer*"))));
    buffer_append(result_206,(char*)self,sizeof(int)*len);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_206);
    come_call_finalizer(buffer_finalize, result_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_207;
struct buffer* __result_obj__100;
    result_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3724, "struct buffer*"))));
    buffer_append(result_207,(char*)self,sizeof(long)*len);
    __result_obj__100 = (struct buffer*)come_increment_ref_count(result_207);
    come_call_finalizer(buffer_finalize, result_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_208;
struct buffer* __result_obj__101;
    result_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3731, "struct buffer*"))));
    buffer_append(result_208,(char*)self,sizeof(float)*len);
    __result_obj__101 = (struct buffer*)come_increment_ref_count(result_208);
    come_call_finalizer(buffer_finalize, result_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_209;
struct buffer* __result_obj__102;
    result_209=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3738, "struct buffer*"))));
    buffer_append(result_209,(char*)self,sizeof(double)*len);
    __result_obj__102 = (struct buffer*)come_increment_ref_count(result_209);
    come_call_finalizer(buffer_finalize, result_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

char* buffer_printable(struct buffer* self){
int len_210;
void* __right_value48 = (void*)0;
char* result_211;
int n_212;
int i_213;
unsigned char c_214;
char* __result_obj__103;
    len_210=self->len;
    result_211=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_210*2+1)), "/usr/local/include/comelang.h", 3746, "char*"));
    n_212=0;
    for(    i_213=0    ;    i_213<len_210    ;    i_213++    ){
        c_214=self->buf[i_213];
        if(        (c_214>=0&&c_214<32)||c_214==127        ) {
            result_211[n_212++]=94;
            result_211[n_212++]=c_214+65-1;
        }
        else if(        c_214>127        ) {
            result_211[n_212++]=63;
        }
        else {
            result_211[n_212++]=c_214;
        }
    }
    result_211[n_212]=0;
    __result_obj__103 = (char*)come_increment_ref_count(result_211);
    (result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_215;
struct list$1char$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_215=0    ;    i_215<num_value    ;    i_215++    ){
        list$1char$_push_back(self,values[i_215]);
    }
    __result_obj__105 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_216;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_217;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_218;
struct list$1char$* __result_obj__104;
    if(    self->len==0    ) {
        litem_216=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$*"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1    ) {
        litem_217=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$*"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$*"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_219;
struct list_item$1char$* prev_it_220;
    it_219=self->head;
    while(    it_219!=((void*)0)    ) {
        prev_it_220=it_219;
        it_219=it_219->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__106;
    __result_obj__106 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3787, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_221;
struct list$1char$p* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_221=0    ;    i_221<num_value    ;    i_221++    ){
        list$1char$p_push_back(self,values[i_221]);
    }
    __result_obj__108 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_222;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_223;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_224;
struct list$1char$p* __result_obj__107;
    if(    self->len==0    ) {
        litem_222=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$p*"))));
        litem_222->prev=((void*)0);
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head=litem_222;
    }
    else if(    self->len==1    ) {
        litem_223=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$p*"))));
        litem_223->prev=self->head;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head->next=litem_223;
    }
    else {
        litem_224=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$p*"))));
        litem_224->prev=self->tail;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail->next=litem_224;
        self->tail=litem_224;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_225;
struct list_item$1char$p* prev_it_226;
    it_225=self->head;
    while(    it_225!=((void*)0)    ) {
        prev_it_226=it_225;
        it_225=it_225->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__109;
    __result_obj__109 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3792, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_227;
struct list$1short$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_227=0    ;    i_227<num_value    ;    i_227++    ){
        list$1short$_push_back(self,values[i_227]);
    }
    __result_obj__111 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_228;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_229;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_230;
struct list$1short$* __result_obj__110;
    if(    self->len==0    ) {
        litem_228=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1short$*"))));
        litem_228->prev=((void*)0);
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail=litem_228;
        self->head=litem_228;
    }
    else if(    self->len==1    ) {
        litem_229=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1short$*"))));
        litem_229->prev=self->head;
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail=litem_229;
        self->head->next=litem_229;
    }
    else {
        litem_230=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1short$*"))));
        litem_230->prev=self->tail;
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail->next=litem_230;
        self->tail=litem_230;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_231;
struct list_item$1short$* prev_it_232;
    it_231=self->head;
    while(    it_231!=((void*)0)    ) {
        prev_it_232=it_231;
        it_231=it_231->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__112;
    __result_obj__112 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3797, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_233;
struct list$1int$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_233=0    ;    i_233<num_value    ;    i_233++    ){
        list$1int$_push_back(self,values[i_233]);
    }
    __result_obj__114 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_234;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_235;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_236;
struct list$1int$* __result_obj__113;
    if(    self->len==0    ) {
        litem_234=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1int$*"))));
        litem_234->prev=((void*)0);
        litem_234->next=((void*)0);
        litem_234->item=item;
        self->tail=litem_234;
        self->head=litem_234;
    }
    else if(    self->len==1    ) {
        litem_235=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1int$*"))));
        litem_235->prev=self->head;
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail=litem_235;
        self->head->next=litem_235;
    }
    else {
        litem_236=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1int$*"))));
        litem_236->prev=self->tail;
        litem_236->next=((void*)0);
        litem_236->item=item;
        self->tail->next=litem_236;
        self->tail=litem_236;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_237;
struct list_item$1int$* prev_it_238;
    it_237=self->head;
    while(    it_237!=((void*)0)    ) {
        prev_it_238=it_237;
        it_237=it_237->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__115;
    __result_obj__115 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3802, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_239;
struct list$1long$* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_239=0    ;    i_239<num_value    ;    i_239++    ){
        list$1long$_push_back(self,values[i_239]);
    }
    __result_obj__117 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_240;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_241;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_242;
struct list$1long$* __result_obj__116;
    if(    self->len==0    ) {
        litem_240=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1long$*"))));
        litem_240->prev=((void*)0);
        litem_240->next=((void*)0);
        litem_240->item=item;
        self->tail=litem_240;
        self->head=litem_240;
    }
    else if(    self->len==1    ) {
        litem_241=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1long$*"))));
        litem_241->prev=self->head;
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail=litem_241;
        self->head->next=litem_241;
    }
    else {
        litem_242=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1long$*"))));
        litem_242->prev=self->tail;
        litem_242->next=((void*)0);
        litem_242->item=item;
        self->tail->next=litem_242;
        self->tail=litem_242;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_243;
struct list_item$1long$* prev_it_244;
    it_243=self->head;
    while(    it_243!=((void*)0)    ) {
        prev_it_244=it_243;
        it_243=it_243->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__118;
    __result_obj__118 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3807, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_245;
struct list$1float$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_245=0    ;    i_245<num_value    ;    i_245++    ){
        list$1float$_push_back(self,values[i_245]);
    }
    __result_obj__120 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_246;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_247;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_248;
struct list$1float$* __result_obj__119;
    if(    self->len==0    ) {
        litem_246=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1float$*"))));
        litem_246->prev=((void*)0);
        litem_246->next=((void*)0);
        litem_246->item=item;
        self->tail=litem_246;
        self->head=litem_246;
    }
    else if(    self->len==1    ) {
        litem_247=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1float$*"))));
        litem_247->prev=self->head;
        litem_247->next=((void*)0);
        litem_247->item=item;
        self->tail=litem_247;
        self->head->next=litem_247;
    }
    else {
        litem_248=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1float$*"))));
        litem_248->prev=self->tail;
        litem_248->next=((void*)0);
        litem_248->item=item;
        self->tail->next=litem_248;
        self->tail=litem_248;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_249;
struct list_item$1float$* prev_it_250;
    it_249=self->head;
    while(    it_249!=((void*)0)    ) {
        prev_it_250=it_249;
        it_249=it_249->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__121;
    __result_obj__121 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3812, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_251;
struct list$1double$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_251=0    ;    i_251<num_value    ;    i_251++    ){
        list$1double$_push_back(self,values[i_251]);
    }
    __result_obj__123 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_252;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_253;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_254;
struct list$1double$* __result_obj__122;
    if(    self->len==0    ) {
        litem_252=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1double$*"))));
        litem_252->prev=((void*)0);
        litem_252->next=((void*)0);
        litem_252->item=item;
        self->tail=litem_252;
        self->head=litem_252;
    }
    else if(    self->len==1    ) {
        litem_253=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1double$*"))));
        litem_253->prev=self->head;
        litem_253->next=((void*)0);
        litem_253->item=item;
        self->tail=litem_253;
        self->head->next=litem_253;
    }
    else {
        litem_254=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1double$*"))));
        litem_254->prev=self->tail;
        litem_254->next=((void*)0);
        litem_254->item=item;
        self->tail->next=litem_254;
        self->tail=litem_254;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_255;
struct list_item$1double$* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)    ) {
        prev_it_256=it_255;
        it_255=it_255->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__124;
    __result_obj__124 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3817, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
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
char* __result_obj__125;
int len_257;
void* __right_value85 = (void*)0;
char* result_258;
char* __result_obj__126;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    len_257=strlen(self)+strlen(right);
    result_258=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_257+1)), "/usr/local/include/comelang.h", 4046, "char*"));
    strncpy(result_258,self,len_257+1);
    strncat(result_258,right,len_257+1);
    __result_obj__126 = (char*)come_increment_ref_count(result_258);
    (result_258 = come_decrement_ref_count(result_258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__127;
int len_259;
void* __right_value87 = (void*)0;
char* result_260;
char* __result_obj__128;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    len_259=strlen(self)+strlen(right);
    result_260=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_259+1)), "/usr/local/include/comelang.h", 4061, "char*"));
    strncpy(result_260,self,len_259+1);
    strncat(result_260,right,len_259+1);
    __result_obj__128 = (char*)come_increment_ref_count(result_260);
    (result_260 = come_decrement_ref_count(result_260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__129;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_261;
int i_262;
void* __right_value91 = (void*)0;
char* __result_obj__130;
    if(    self==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    buf_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "struct buffer*"))));
    for(    i_262=0    ;    i_262<right    ;    i_262++    ){
        buffer_append_str(buf_261,self);
    }
    __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_261))));
    come_call_finalizer(buffer_finalize, buf_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__131;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_263;
int i_264;
void* __right_value95 = (void*)0;
char* __result_obj__132;
    if(    self==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    buf_263=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "struct buffer*"))));
    for(    i_264=0    ;    i_264<right    ;    i_264++    ){
        buffer_append_str(buf_263,self);
    }
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_263))));
    come_call_finalizer(buffer_finalize, buf_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_265;
int i_266;
    result_265=(_Bool)0;
    for(    i_266=0    ;    i_266<len    ;    i_266++    ){
        if(        strncmp(self[i_266],str,strlen(self[i_266]))==0        ) {
            result_265=(_Bool)1;
            break;
        }
    }
    return result_265;
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
int result_267;
char* p_268;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_267=0;
    p_268=value;
    while(    *p_268    ) {
        result_267+=(*p_268);
        p_268++;
    }
    return result_267;
}

unsigned int string_get_hash_key(char* value){
int result_269;
char* p_270;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_269=0;
    p_270=value;
    while(    *p_270    ) {
        result_269+=(*p_270);
        p_270++;
    }
    return result_269;
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
_Bool result_271;
    result_271=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_271;
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
_Bool result_272;
    result_272=(c>=32&&c<=126);
    return result_272;
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
char* __result_obj__133;
int len_273;
void* __right_value97 = (void*)0;
char* result_274;
int i_275;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    len_273=strlen(str);
    result_274=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_273+1)), "/usr/local/include/comelang.h", 4356, "char*"));
    for(    i_275=0    ;    i_275<len_273    ;    i_275++    ){
        result_274[i_275]=str[len_273-i_275-1];
    }
    result_274[len_273]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_274);
    (result_274 = come_decrement_ref_count(result_274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__135;
int len_276;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__136;
void* __right_value101 = (void*)0;
char* __result_obj__137;
void* __right_value102 = (void*)0;
char* __result_obj__138;
void* __right_value103 = (void*)0;
char* result_277;
char* __result_obj__139;
    if(    str==((void*)0)    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    len_276=strlen(str);
    if(    head<0    ) {
        head+=len_276;
    }
    if(    tail<0    ) {
        tail+=len_276+1;
    }
    if(    head>tail    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_276    ) {
        tail=len_276;
    }
    if(    head==tail    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    tail-head+1<1    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    result_277=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4402, "char*"));
    memcpy(result_277,str+head,tail-head);
    result_277[tail-head]=0;
    __result_obj__139 = (char*)come_increment_ref_count(result_277);
    (result_277 = come_decrement_ref_count(result_277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__140;
int len_278;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__141;
void* __right_value107 = (void*)0;
char* __result_obj__142;
void* __right_value108 = (void*)0;
char* __result_obj__143;
void* __right_value109 = (void*)0;
char* result_279;
char* __result_obj__144;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_278=strlen(str);
    if(    head<0    ) {
        head+=len_278;
    }
    if(    tail<0    ) {
        tail+=len_278+1;
    }
    if(    head>tail    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_278    ) {
        tail=len_278;
    }
    if(    head==tail    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    if(    tail-head+1<1    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    result_279=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4445, "char*"));
    memcpy(result_279,str+head,tail-head);
    result_279[tail-head]=0;
    __result_obj__144 = (char*)come_increment_ref_count(result_279);
    (result_279 = come_decrement_ref_count(result_279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__145;
int len_280;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__146;
void* __right_value113 = (void*)0;
char* __result_obj__147;
void* __right_value114 = (void*)0;
char* __result_obj__148;
void* __right_value115 = (void*)0;
char* result_281;
char* __result_obj__149;
    if(    str==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    len_280=strlen(str);
    if(    head<0    ) {
        head+=len_280;
    }
    if(    tail<0    ) {
        tail+=len_280+1;
    }
    if(    head>tail    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_280    ) {
        tail=len_280;
    }
    if(    head==tail    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    if(    tail-head+1<1    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    result_281=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4488, "char*"));
    memcpy(result_281,str+head,tail-head);
    result_281[tail-head]=0;
    __result_obj__149 = (char*)come_increment_ref_count(result_281);
    (result_281 = come_decrement_ref_count(result_281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__150;
va_list args_282;
char* result_283;
int len_284;
void* __right_value117 = (void*)0;
char* __result_obj__151;
void* __right_value118 = (void*)0;
char* result2_285;
char* __result_obj__152;
memset(&args_282, 0, sizeof(va_list));
result_283 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __builtin_va_start(args_282,msg);
    len_284=vasprintf(&result_283,msg,args_282);
    __builtin_va_end(args_282);
    if(    len_284<0    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    result2_285=(char*)come_increment_ref_count(__builtin_string(result_283));
    free(result_283);
    __result_obj__152 = (char*)come_increment_ref_count(result2_285);
    (result2_285 = come_decrement_ref_count(result2_285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__153;
int len_286;
void* __right_value120 = (void*)0;
char* __result_obj__154;
void* __right_value121 = (void*)0;
char* __result_obj__155;
void* __right_value122 = (void*)0;
char* result_287;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    len_286=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    head<0    ) {
        head+=len_286;
    }
    if(    tail<0    ) {
        tail+=len_286+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    if(    tail>=len_286    ) {
        tail=len_286;
    }
    result_287=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_286-(tail-head)+1)), "/usr/local/include/comelang.h", 4550, "char*"));
    memcpy(result_287,str,head);
    memcpy(result_287+head,str+tail,len_286-tail);
    result_287[len_286-(tail-head)]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_287);
    (result_287 = come_decrement_ref_count(result_287, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__157;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__157 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_288;
struct list_item$1char$ph* prev_it_289;
    it_288=self->head;
    while(    it_288!=((void*)0)    ) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_294;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj15;
struct list$1char$ph* __result_obj__159;
    if(    self->len==0    ) {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$ph*"))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj13=litem_293->item,
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1    ) {
        litem_294=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$ph*"))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj14=litem_294->item,
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$ph*"))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj15=litem_295->item,
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_295;
        self->tail=litem_295;
    }
    self->len++;
    __result_obj__159 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__159;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__158;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_290;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_291;
int i_292;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__160;
    if(    self==((void*)0)    ) {
        __result_obj__158 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4563, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__158;
    }
    result_290=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4566, "struct list$1char$ph*"))));
    str_291=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4568, "struct buffer*"))));
    for(    i_292=0    ;    i_292<charp_length(self)    ;    i_292++    ){
        if(        self[i_292]==c        ) {
            list$1char$ph_push_back(result_290,(char*)come_increment_ref_count(__builtin_string(str_291->buf)));
            buffer_reset(str_291);
        }
        else {
            buffer_append_char(str_291,self[i_292]);
        }
    }
    if(    buffer_length(str_291)!=0    ) {
        list$1char$ph_push_back(result_290,(char*)come_increment_ref_count(__builtin_string(str_291->buf)));
    }
    __result_obj__160 = (struct list$1char$ph*)come_increment_ref_count(result_290);
    come_call_finalizer(list$1char$ph$p_finalize, result_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_291, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* charp_printable(char* str){
int len_296;
void* __right_value136 = (void*)0;
char* result_297;
int n_298;
int i_299;
char c_300;
char* __result_obj__163;
    len_296=charp_length(str);
    result_297=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_296*2+1)), "/usr/local/include/comelang.h", 4600, "char*"));
    n_298=0;
    for(    i_299=0    ;    i_299<len_296    ;    i_299++    ){
        c_300=str[i_299];
        if(        (c_300>=0&&c_300<32)||c_300==127        ) {
            result_297[n_298++]=94;
            result_297[n_298++]=c_300+65-1;
        }
        else {
            result_297[n_298++]=c_300;
        }
    }
    result_297[n_298]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_297);
    (result_297 = come_decrement_ref_count(result_297, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__164;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_301;
char* p_302;
char* p2_303;
void* __right_value140 = (void*)0;
char* __result_obj__165;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    result_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4628, "struct buffer*"))));
    p_302=self;
    while(    (_Bool)1    ) {
        p2_303=strstr(p_302,str);
        if(        p2_303==((void*)0)        ) {
            p2_303=p_302;
            while(            *p2_303            ) {
                p2_303++;
            }
            buffer_append(result_301,p_302,p2_303-p_302);
            break;
        }
        buffer_append(result_301,p_302,p2_303-p_302);
        buffer_append_str(result_301,replace);
        p_302=p2_303+strlen(str);
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_301))));
    come_call_finalizer(buffer_finalize, result_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__166;
char* p_304;
void* __right_value142 = (void*)0;
char* __result_obj__167;
void* __right_value143 = (void*)0;
char* __result_obj__168;
void* __right_value144 = (void*)0;
char* __result_obj__169;
    if(    path==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    p_304=path+strlen(path);
    while(    p_304>=path    ) {
        if(        *p_304==47        ) {
            break;
        }
        else {
            p_304--;
        }
    }
    if(    p_304<path    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    else {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_304+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__170;
void* __right_value146 = (void*)0;
char* path2_305;
char* p_306;
void* __right_value147 = (void*)0;
char* __result_obj__171;
void* __right_value148 = (void*)0;
char* __result_obj__172;
void* __right_value149 = (void*)0;
char* __result_obj__173;
    if(    path==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    path2_305=(char*)come_increment_ref_count(xbasename(path));
    p_306=path2_305+strlen(path2_305);
    while(    p_306>=path2_305    ) {
        if(        *p_306==46        ) {
            break;
        }
        else {
            p_306--;
        }
    }
    if(    p_306<path2_305    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_305))));
        (path2_305 = come_decrement_ref_count(path2_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    else {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_305,0,p_306-path2_305))));
        (path2_305 = come_decrement_ref_count(path2_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_305 = come_decrement_ref_count(path2_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__174;
char* p_307;
void* __right_value151 = (void*)0;
char* __result_obj__175;
void* __right_value152 = (void*)0;
char* __result_obj__176;
void* __right_value153 = (void*)0;
char* __result_obj__177;
    if(    path==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    p_307=path+strlen(path);
    while(    p_307>=path    ) {
        if(        *p_307==46        ) {
            break;
        }
        else {
            p_307--;
        }
    }
    if(    p_307<path    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    else {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_307+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__178;
void* __right_value155 = (void*)0;
char* __result_obj__179;
    if(    self    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__180;
void* __right_value157 = (void*)0;
char* __result_obj__181;
    if(    self    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    else {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__182;
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__183;
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__185;
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__186;
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__187;
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__188;
    __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__188;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__189;
void* __right_value166 = (void*)0;
char* __result_obj__190;
    if(    self==((void*)0)    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__191;
void* __right_value168 = (void*)0;
char* __result_obj__192;
    if(    self==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
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
int i_308;
    for(    i_308=0    ;    i_308<self    ;    i_308++    ){
        block(parent,i_308);
    }
}

