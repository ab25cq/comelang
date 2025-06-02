/// previous struct definition ///
/// struct definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef void* any;

typedef char* string;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned short int uint16_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

struct anonymous_typeX2
{
    _Atomic int locked;
};

typedef struct anonymous_typeX2 mutex_t;

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

extern struct anonymous_typeX2 gComeHeapMutex;

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

typedef unsigned short int anonymous_var_nameX31;

typedef unsigned int uint32;

typedef unsigned int uint32_t;

typedef unsigned long  int uint64;

typedef unsigned long  long anonymous_var_nameX32;

typedef unsigned long  long pte_t;

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
int gActiveProc=0;
int gNumProc=0;
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
void swtch(struct context* anonymous_var_nameX70, struct context* anonymous_var_nameX71);
void timer_reset();
void timer_handler();
void yield();
void scheduler();
void mask_and_clear_timer_interrupt();
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
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void perror(char* str);
void panic();
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

struct anonymous_typeX2 gComeHeapMutex={ 0 };

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
unsigned long  long x_20;
memset(&x_20, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mie" : "=r"(x_20));
    x_20|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_20));
}
static inline void intr_off(){
unsigned long  long x_21;
memset(&x_21, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mie" : "=r"(x_21));
    x_21&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_21));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_25;
memset(&x_25, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_25));
    return x_25;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  long r_mepc(){
unsigned long  long x_26;
memset(&x_26, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mepc" : "=r" (x_26));
    return x_26;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_27;
memset(&x_27, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_27));
    return x_27;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_28));
    return x_28;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_mie(){
unsigned long  long x_29;
memset(&x_29, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mie" : "=r"(x_29));
    return x_29;
}
static inline void w_mie(unsigned long  long x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  long x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
void mutex_init(struct anonymous_typeX2* mutex){
    atomic_store(&mutex->locked,0);
}

void mutex_enter_blocking(struct anonymous_typeX2* mutex){
int expected_0;
    while(    1    ) {
        expected_0=0;
        if(        atomic_compare_exchange_weak(&mutex->locked,&expected_0,1)        ) {
            break;
        }
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

void puts(const char* s){
    intr_off();
    while(    *s    ) {
        putchar(*s++);
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_22;
r_22 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic: kfree");
    }
    r_22=(struct run*)pa;
    r_22->next=kmem.freelist;
    kmem.freelist=r_22;
}

void freerange(void* pa_start, void* pa_end){
char* p_23;
p_23 = (void*)0;
    p_23=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_23+4096<=(_end+4096*256)    ;    p_23+=4096    ){
        kfree(p_23);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_24;
void* __result_obj__3;
r_24 = (void*)0;
    r_24=kmem.freelist;
    if(    r_24    ) {
        kmem.freelist=r_24->next;
    }
    __result_obj__3 = (void*)r_24;
    return __result_obj__3;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_30;
    w_mtvec((unsigned long  int)timervec&~3);
    now_30=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_30+1000000;
    w_mie((1<<7));
    w_mstatus(r_mstatus()|(1<<3));
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
struct proc* result_37;
struct proc* __result_obj__8;
    result_37=kalloc();
    memset(result_37,0,sizeof(struct proc));
    result_37->stack=kalloc();
    result_37->context.sp=(unsigned long  int)(result_37->stack+4096);
    result_37->context.mepc=(unsigned long  int)task;
    result_37->state=(3);
    gProc[gNumProc++]=result_37;
    __result_obj__8 = result_37;
    return __result_obj__8;
}

void timer_reset(){
unsigned long  long now_38;
    now_38=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_38+1000000;
}

void timer_handler(){
struct proc* p_39;
struct context* tf_40;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_39=gProc[gActiveProc];
    tf_40=(struct context*)TRAPFRAME;
    p_39->context=*tf_40;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %lx\n",tf_40->ra);
    printf("ra %lx\n",p_39->context.ra);
    printf("sp %lx\n",tf_40->sp);
    printf("sp %lx\n",p_39->context.sp);
    printf("gp %lx\n",p_39->context.gp);
    printf("mepc %lx\n",tf_40->mepc);
    printf("mepc %lx\n",p_39->context.mepc);
    timer_reset();
    yield();
}

void yield(){
struct proc* p_41;
    p_41=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_41=gProc[gActiveProc];
    p_41->state=(3);
    scheduler();
}

void scheduler(){
int i_42;
struct proc* p_43;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_42=0        ;        i_42<gNumProc        ;        i_42++        ){
            p_43=gProc[i_42];
            if(            p_43->state==(3)            ) {
                gActiveProc=i_42;
                p_43->state=(4);
                printf("SWITCH TO %d\n",i_42);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_43->context);
                enable_timer_interrupts();
                p_43->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  long now_44;
    now_44=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value0 = (void*)0;
    come_heap_init(0, 0, 0);
    puts("HELLO WORLD");
    kinit();
    ((char*)(__right_value0=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 679, "char*")));
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

void disable_interrupts(){
unsigned long  long mstatus_45;
memset(&mstatus_45, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_45));
    mstatus_45&=~(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_45));
}

void enable_interrupts(){
unsigned long  long mstatus_46;
memset(&mstatus_46, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_46));
    mstatus_46|=(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_46));
}

void* sbrk(long incr){
void* __result_obj__9;
void* prev_47;
void* __result_obj__10;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__9 = (void*)-1;
        return __result_obj__9;
    }
    prev_47=heap_end;
    heap_end+=incr;
    __result_obj__10 = prev_47;
    return __result_obj__10;
}

void* malloc(unsigned long  int size){
void* __result_obj__11;
struct mem_block* current_48;
struct mem_block* prev_49;
void* __result_obj__12;
struct mem_block* new_mem_50;
void* __result_obj__13;
void* __result_obj__14;
    if(    size==0    ) {
        __result_obj__11 = ((void*)0);
        return __result_obj__11;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_48=free_list;
    prev_49=((void*)0);
    while(    current_48!=((void*)0)    ) {
        if(        current_48->size>=size        ) {
            if(            prev_49==((void*)0)            ) {
                free_list=current_48->next;
            }
            else {
                prev_49->next=current_48->next;
            }
            __result_obj__12 = (void*)(current_48+1);
            return __result_obj__12;
        }
        prev_49=current_48;
        current_48=current_48->next;
    }
    new_mem_50=(struct mem_block*)sbrk(size);
    if(    new_mem_50==(void*)-1    ) {
        __result_obj__13 = ((void*)0);
        return __result_obj__13;
    }
    new_mem_50->size=size;
    new_mem_50->next=((void*)0);
    __result_obj__14 = (void*)(new_mem_50+1);
    return __result_obj__14;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_51;
void* __result_obj__15;
void* ptr_52;
void* __result_obj__16;
    total_size_51=nmemb*size;
    if(    total_size_51==0    ) {
        __result_obj__15 = ((void*)0);
        return __result_obj__15;
    }
    ptr_52=malloc(total_size_51);
    if(    ptr_52!=((void*)0)    ) {
        memset(ptr_52,0,total_size_51);
    }
    __result_obj__16 = ptr_52;
    return __result_obj__16;
}

void free(void* ptr){
struct mem_block* block_53;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_53=(struct mem_block*)ptr-1;
    block_53->next=free_list;
    free_list=block_53;
}

char* strdup(const char* s){
char* s2_54;
unsigned long  int len_55;
char* p_56;
char* __result_obj__17;
    s2_54=s;
    len_55=strlen(s2_54)+1;
    p_56=malloc(len_55);
    if(    p_56    ) {
        memcpy(p_56,s2_54,len_55);
    }
    __result_obj__17 = p_56;
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
        const char* h_57=haystack;
        const char* n_58=needle;
        while(        *h_57&&*n_58&&(*h_57==*n_58)        ) {
            h_57++;
            n_58++;
        }
        if(        !*n_58        ) {
            __result_obj__19 = (char*)haystack;
            return __result_obj__19;
        }
    }
    __result_obj__20 = ((void*)0);
    return __result_obj__20;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_59;
int i_60;
void* __result_obj__21;
    cdst_59=(char*)dst;
    for(    i_60=0    ;    i_60<n    ;    i_60++    ){
        cdst_59[i_60]=c;
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_61;
const unsigned char* s2_62;
memset(&s1_61, 0, sizeof(const unsigned char*));
memset(&s2_62, 0, sizeof(const unsigned char*));
    s1_61=v1;
    s2_62=v2;
    while(    n-->0    ) {
        if(        *s1_61!=*s2_62        ) {
            return *s1_61-*s2_62;
        }
        s1_61++,s2_62++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_63;
char* d_64;
void* __result_obj__22;
void* __result_obj__23;
s_63 = (void*)0;
d_64 = (void*)0;
    if(    n==0    ) {
        __result_obj__22 = dst;
        return __result_obj__22;
    }
    s_63=src;
    d_64=dst;
    if(    s_63<d_64&&s_63+n>d_64    ) {
        s_63+=n;
        d_64+=n;
        while(        n-->0        ) {
            *--d_64=*--s_63;
        }
    }
    else {
        while(        n-->0        ) {
            *d_64++=*s_63++;
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
char* os_65;
char* __result_obj__25;
char* __result_obj__26;
os_65 = (void*)0;
    os_65=s;
    if(    n<=0    ) {
        __result_obj__25 = os_65;
        return __result_obj__25;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__26 = os_65;
    return __result_obj__26;
}

int strlen(const char* s){
int n_66;
memset(&n_66, 0, sizeof(int));
    for(    n_66=0    ;    s[n_66]    ;    n_66++    ){
        ;
    }
    return n_66;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_67;
char* __result_obj__27;
    d_67=dest;
    while(    *d_67    ) {
        d_67++;
    }
    while(    n--&&*src    ) {
        *d_67++=*src++;
    }
    *d_67=0;
    __result_obj__27 = dest;
    return __result_obj__27;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_68;
int i_70;
int negative_71;
char* __result_obj__28;
int digit_72;
char* __result_obj__29;
    p_68=buf;
    char tmp_69[32];
    memset(&tmp_69, 0, sizeof(char)    *(32)    );
    i_70=0;
    negative_71=0;
    if(    base<2||base>16    ) {
        *p_68=0;
        __result_obj__28 = p_68;
        return __result_obj__28;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_71=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_72=val_%base;
        tmp_69[i_70++]=(((digit_72<10))?(48+digit_72):(97+digit_72-10));
        val_/=base;
    } while(    val_    );
    if(    negative_71    ) {
        *p_68++=45;
    }
    while(    i_70--    ) {
        *p_68++=tmp_69[i_70];
    }
    *p_68=0;
    __result_obj__29 = buf;
    return __result_obj__29;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_74;
const char* s_75;
unsigned long  int remaining_77;
s_75 = (void*)0;
    char out2_73[512];
    memset(&out2_73, 0, sizeof(char)    *(512)    );
    p_74=out2_73;
    char buf_76[32];
    memset(&buf_76, 0, sizeof(char)    *(32)    );
    remaining_77=sizeof(out2_73);
    for(    ;    *fmt&&remaining_77>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_74++=*fmt;
            remaining_77--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_76,__builtin_va_arg(ap,int),10,1);
            s_75=buf_76;
            break;
            case 117:
            itoa(buf_76,__builtin_va_arg(ap,unsigned int),10,0);
            s_75=buf_76;
            break;
            case 120:
            itoa(buf_76,__builtin_va_arg(ap,unsigned int),16,0);
            s_75=buf_76;
            break;
            case 115:
            s_75=__builtin_va_arg(ap,const char*);
            if(            !s_75            ) {
                s_75="(null)";
            }
            break;
            case 99:
            buf_76[0]=(char)__builtin_va_arg(ap,int);
            buf_76[1]=0;
            s_75=buf_76;
            break;
            case 112:
            strncpy(buf_76,"0x",32);
            itoa(buf_76+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_75=buf_76;
            break;
            case 37:
            buf_76[0]=37;
            buf_76[1]=0;
            s_75=buf_76;
            break;
            default:
            buf_76[0]=37;
            buf_76[1]=*fmt;
            buf_76[2]=0;
            s_75=buf_76;
            break;
        }
        while(        *s_75&&remaining_77>1        ) {
            *p_74++=*s_75++;
            remaining_77--;
        }
    }
    *p_74=0;
    *out=strdup(out2_73);
    return p_74-out2_73;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_78;
char* p_79;
const char* s_80;
unsigned long  int remaining_82;
s_80 = (void*)0;
    __builtin_va_start(ap_78,fmt);
    p_79=out;
    char buf_81[32];
    memset(&buf_81, 0, sizeof(char)    *(32)    );
    remaining_82=out_size;
    if(    remaining_82==0    ) {
        __builtin_va_end(ap_78);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_82>1            ) {
                *p_79++=*fmt;
                remaining_82--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_80=__builtin_va_arg(ap_78,const char*);
            while(            *s_80&&remaining_82>1            ) {
                *p_79++=*s_80++;
                remaining_82--;
            }
            break;
            case 100:
            itoa(buf_81,__builtin_va_arg(ap_78,int),10,0);
            s_80=buf_81;
            while(            *s_80&&remaining_82>1            ) {
                *p_79++=*s_80++;
                remaining_82--;
            }
            break;
            case 120:
            itoa(buf_81,(unsigned int)__builtin_va_arg(ap_78,int),16,1);
            s_80=buf_81;
            while(            *s_80&&remaining_82>1            ) {
                *p_79++=*s_80++;
                remaining_82--;
            }
            break;
            case 99:
            if(            remaining_82>1            ) {
                *p_79++=(char)__builtin_va_arg(ap_78,int);
                remaining_82--;
            }
            break;
            case 112:
            s_80="0x";
            while(            *s_80&&remaining_82>1            ) {
                *p_79++=*s_80++;
                remaining_82--;
            }
            itoa(buf_81,(long)__builtin_va_arg(ap_78,void*),16,1);
            s_80=buf_81;
            while(            *s_80&&remaining_82>1            ) {
                *p_79++=*s_80++;
                remaining_82--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_81,__builtin_va_arg(ap_78,long),10,1);
                s_80=buf_81;
                while(                *s_80&&remaining_82>1                ) {
                    *p_79++=*s_80++;
                    remaining_82--;
                }
            }
            break;
            default:
            if(            remaining_82>1            ) {
                *p_79++=37;
                remaining_82--;
                if(                remaining_82>1                ) {
                    *p_79++=*fmt;
                    remaining_82--;
                }
            }
            break;
        }
    }
    *p_79=0;
    __builtin_va_end(ap_78);
    return p_79-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_83;
char* p_84;
const char* s_85;
unsigned long  int remaining_87;
s_85 = (void*)0;
    __builtin_va_start(ap_83,fmt);
    p_84=out;
    char buf_86[32];
    memset(&buf_86, 0, sizeof(char)    *(32)    );
    remaining_87=out_size;
    if(    remaining_87==0    ) {
        __builtin_va_end(ap_83);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_87>1            ) {
                *p_84++=*fmt;
                remaining_87--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_85=__builtin_va_arg(ap_83,const char*);
            while(            *s_85&&remaining_87>1            ) {
                *p_84++=*s_85++;
                remaining_87--;
            }
            break;
            case 100:
            itoa(buf_86,__builtin_va_arg(ap_83,int),10,0);
            s_85=buf_86;
            while(            *s_85&&remaining_87>1            ) {
                *p_84++=*s_85++;
                remaining_87--;
            }
            break;
            case 120:
            itoa(buf_86,(unsigned int)__builtin_va_arg(ap_83,int),16,1);
            s_85=buf_86;
            while(            *s_85&&remaining_87>1            ) {
                *p_84++=*s_85++;
                remaining_87--;
            }
            break;
            case 99:
            if(            remaining_87>1            ) {
                *p_84++=(char)__builtin_va_arg(ap_83,int);
                remaining_87--;
            }
            break;
            case 112:
            s_85="0x";
            while(            *s_85&&remaining_87>1            ) {
                *p_84++=*s_85++;
                remaining_87--;
            }
            itoa(buf_86,(long)__builtin_va_arg(ap_83,void*),16,1);
            s_85=buf_86;
            while(            *s_85&&remaining_87>1            ) {
                *p_84++=*s_85++;
                remaining_87--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_86,__builtin_va_arg(ap_83,long),10,1);
                s_85=buf_86;
                while(                *s_85&&remaining_87>1                ) {
                    *p_84++=*s_85++;
                    remaining_87--;
                }
            }
            break;
            default:
            if(            remaining_87>1            ) {
                *p_84++=37;
                remaining_87--;
                if(                remaining_87>1                ) {
                    *p_84++=*fmt;
                    remaining_87--;
                }
            }
            break;
        }
    }
    *p_84=0;
    __builtin_va_end(ap_83);
    return p_84-out;
}

void printint(int val_, int base, int sign){
int i_89;
int negative_90;
unsigned int uval_91;
int digit_92;
memset(&uval_91, 0, sizeof(unsigned int));
    char buf_88[33];
    memset(&buf_88, 0, sizeof(char)    *(33)    );
    i_89=0;
    negative_90=0;
    if(    sign&&val_<0    ) {
        negative_90=1;
        uval_91=-val_;
    }
    else {
        uval_91=(unsigned int)val_;
    }
    if(    uval_91==0    ) {
        putchar(48);
        return;
    }
    while(    uval_91>0    ) {
        digit_92=uval_91%base;
        buf_88[i_89++]=((digit_92<10)?(48+digit_92):(97+(digit_92-10)));
        uval_91/=base;
    }
    if(    negative_90    ) {
        putchar(45);
    }
    while(    --i_89>=0    ) {
        putchar(buf_88[i_89]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_94;
int negative_95;
int digit_96;
    char buf_93[65];
    memset(&buf_93, 0, sizeof(char)    *(65)    );
    i_94=0;
    negative_95=0;
    if(    sign&&(long)val_<0    ) {
        negative_95=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_96=val_%base;
        buf_93[i_94++]=((digit_96<10)?(48+digit_96):(97+(digit_96-10)));
        val_/=base;
    }
    if(    negative_95    ) {
        putchar(45);
    }
    while(    --i_94>=0    ) {
        putchar(buf_93[i_94]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_98;
int negative_99;
int digit_100;
    char buf_97[65];
    memset(&buf_97, 0, sizeof(char)    *(65)    );
    i_98=0;
    negative_99=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_99=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_100=val_%base;
        buf_97[i_98++]=((digit_100<10)?(48+digit_100):(97+(digit_100-10)));
        val_/=base;
    }
    if(    negative_99    ) {
        putchar(45);
    }
    while(    --i_98>=0    ) {
        putchar(buf_97[i_98]);
    }
}

int printf(const char* fmt, ...){
va_list ap_101;
const char* p_102;
int lcount_103;
unsigned long  int val__104;
unsigned long  long val__105;
long val__106;
long long val__107;
int i_108;
int val__109;
unsigned int val__110;
unsigned long  int val__111;
char c_113;
memset(&ap_101, 0, sizeof(va_list));
p_102 = (void*)0;
    __builtin_va_start(ap_101,fmt);
    for(    p_102=fmt    ;    *p_102    ;    p_102++    ){
        if(        *p_102!=37        ) {
            putchar(*p_102);
            continue;
        }
        p_102++;
        if(        *p_102==108        ) {
            lcount_103=1;
            if(            *(p_102+1)==108            ) {
                lcount_103=2;
                p_102++;
            }
            p_102++;
            switch (            *p_102) {
                case 120:
                {
                    if(                    lcount_103==1                    ) {
                        val__104=__builtin_va_arg(ap_101,unsigned long  int);
                        printlong(val__104,16,0);
                    }
                    else {
                        val__105=__builtin_va_arg(ap_101,unsigned long  long);
                        printlonglong(val__105,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_103==1                    ) {
                        val__106=__builtin_va_arg(ap_101,long);
                        printlong(val__106,10,1);
                    }
                    else {
                        val__107=__builtin_va_arg(ap_101,long  long);
                        printlonglong(val__107,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_108=0                    ;                    i_108<lcount_103                    ;                    i_108++                    ){
                        putchar(108);
                    }
                    putchar(*p_102);
                    break;
                }
            }
        }
        else {
            switch (            *p_102) {
                case 100:
                {
                    val__109=__builtin_va_arg(ap_101,int);
                    printint(val__109,10,1);
                    break;
                }
                case 120:
                {
                    val__110=__builtin_va_arg(ap_101,unsigned int);
                    printint(val__110,16,0);
                    break;
                }
                case 112:
                {
                    val__111=(unsigned long  int)__builtin_va_arg(ap_101,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__111,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_112=__builtin_va_arg(ap_101,const char*);
                    if(                    !s_112                    ) {
                        s_112="(null)";
                    }
                    while(                    *s_112                    ) {
                        putchar(*s_112++);
                    }
                    break;
                }
                case 99:
                {
                    c_113=(char)__builtin_va_arg(ap_101,int);
                    putchar(c_113);
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
                    putchar(*p_102);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_101);
    return 0;
}

void perror(char* str){
    puts(str);
}

void panic(){
    puts("panic!");
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
void* __right_value1 = (void*)0;
char* result_114;
char* __result_obj__30;
    result_114=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__30 = (char*)come_increment_ref_count(result_114);
    (result_114 = come_decrement_ref_count(result_114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__30 = come_decrement_ref_count(__result_obj__30, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__30;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_115;
void* __result_obj__31;
    result_115=come_calloc(count,size,sname,sline,class_name);
    __result_obj__31 = result_115;
    return __result_obj__31;
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
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* buf_116;
int i_117;
void* __right_value4 = (void*)0;
    buf_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_116,"%s %d\n",sname,sline);
    for(    i_117=gNumComeStackFrame-2    ;    i_117>=0    ;    i_117--    ){
        buffer_append_format(buf_116,"%s %d #%d\n",gComeStackFrameSName[i_117],gComeStackFrameSLine[i_117],gComeStackFrameID[i_117]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value4=buffer_to_string(buf_116))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_118;
    for(    i_118=gNumComeStackFrame-1    ;    i_118>=0    ;    i_118--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_118],gComeStackFrameSLine[i_118],gComeStackFrameID[i_118]);
    }
}

char* come_get_stackframe(){
void* __right_value5 = (void*)0;
char* __result_obj__32;
    __result_obj__32 = (char*)come_increment_ref_count(((char*)(__right_value5=__builtin_string(gComeStackFrameBuffer))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__32 = come_decrement_ref_count(__result_obj__32, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__32;
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
int i_119;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_119=0    ;    i_119<gHeapPages.mSizePages    ;    i_119++    ){
        gHeapPages.mPages[i_119]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_120;
int n_121;
_Bool flag_122;
int i_123;
struct sMemHeaderTiny* it_124;
int n_125;
int i_126;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_120=gAllocMem;
        n_121=0;
        while(        it_120        ) {
            n_121++;
            flag_122=(_Bool)0;
            printf("#%d ",n_121);
            if(            it_120->class_name            ) {
                printf("%p (%s): ",(char*)it_120+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_120->class_name);
            }
            for(            i_123=0            ;            i_123<16            ;            i_123++            ){
                if(                it_120->sname[i_123]                ) {
                    printf("%s %d #%d, ",it_120->sname[i_123],it_120->sline[i_123],it_120->id[i_123]);
                    flag_122=(_Bool)1;
                }
            }
            if(            flag_122            ) {
                puts("");
            }
            it_120=it_120->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_121,gNumAlloc,gNumFree);
    }
    else {
        it_124=(struct sMemHeaderTiny*)gAllocMem;
        n_125=0;
        while(        it_124        ) {
            n_125++;
            if(            it_124->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_125,(char*)it_124+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_124->class_name,it_124->sname,it_124->sline);
            }
            it_124=it_124->next;
        }
        if(        n_125>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_125,gNumAlloc,gNumFree);
        }
    }
    for(    i_126=0    ;    i_126<gHeapPages.mSizePages    ;    i_126++    ){
        free(gHeapPages.mPages[i_126]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_127;
void* __result_obj__33;
    result_127=((void*)0);
    size=(size+7&~7);
    result_127=calloc(1,size);
    __result_obj__33 = result_127;
    return __result_obj__33;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_128;
struct sMemHeader* prev_it_129;
struct sMemHeader* next_it_130;
unsigned long  int size_131;
struct sMemHeaderTiny* it_132;
struct sMemHeaderTiny* prev_it_133;
struct sMemHeaderTiny* next_it_134;
unsigned long  int size_135;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_128=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_128->allocated!=177783            ) {
                return;
            }
            it_128->allocated=0;
            prev_it_129=it_128->prev;
            next_it_130=it_128->next;
            if(            gAllocMem==it_128            ) {
                gAllocMem=next_it_130;
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
            free(it_128);
            gNumFree++;
        }
        else {
            it_132=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_132->allocated!=177783            ) {
                return;
            }
            it_132->allocated=0;
            prev_it_133=it_132->prev;
            next_it_134=it_132->next;
            if(            gAllocMem==it_132            ) {
                gAllocMem=(struct sMemHeader*)next_it_134;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_133                ) {
                    prev_it_133->next=next_it_134;
                }
                if(                next_it_134                ) {
                    next_it_134->prev=prev_it_133;
                }
            }
            size_135=it_132->size;
            free(it_132);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_136;
struct sMemHeader* it_137;
int i_138;
int i_139;
void* __result_obj__34;
void* result_140;
struct sMemHeaderTiny* it_141;
void* __result_obj__35;
memset(&i_138, 0, sizeof(int));
memset(&i_139, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_136=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_137=result_136;
        it_137->allocated=177783;
        it_137->size=size+sizeof(struct sMemHeader);
        it_137->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_138=0            ;            i_138<gNumComeStackFrame            ;            i_138++            ){
                it_137->sname[i_138]=gComeStackFrameSName[i_138];
                it_137->sline[i_138]=gComeStackFrameSLine[i_138];
                it_137->id[i_138]=gComeStackFrameID[i_138];
            }
        }
        else {
            for(            i_139=0            ;            i_139<16            ;            i_139++            ){
                it_137->sname[i_139]=gComeStackFrameSName[gNumComeStackFrame-1-i_139];
                it_137->sline[i_139]=gComeStackFrameSLine[gNumComeStackFrame-1-i_139];
                it_137->id[i_139]=gComeStackFrameID[gNumComeStackFrame-1-i_139];
            }
        }
        come_pop_stackframe_v2();
        it_137->next=gAllocMem;
        it_137->prev=((void*)0);
        it_137->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_137;
        }
        gAllocMem=it_137;
        gNumAlloc++;
        __result_obj__34 = (char*)result_136+sizeof(struct sMemHeader);
        return __result_obj__34;
    }
    else {
        result_140=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_141=result_140;
        it_141->allocated=177783;
        it_141->class_name=class_name;
        it_141->sname=sname;
        it_141->sline=sline;
        it_141->size=size+sizeof(struct sMemHeaderTiny);
        it_141->free_next=((void*)0);
        it_141->next=(struct sMemHeaderTiny*)gAllocMem;
        it_141->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_141;
        }
        gAllocMem=(struct sMemHeader*)it_141;
        gNumAlloc++;
        __result_obj__35 = (char*)result_140+sizeof(struct sMemHeaderTiny);
        return __result_obj__35;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_142;
char* __result_obj__36;
struct sMemHeaderTiny* it_143;
char* __result_obj__37;
    if(    gComeDebugLib    ) {
        it_142=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_142->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_142);
            exit(2);
        }
        __result_obj__36 = it_142->class_name;
        return __result_obj__36;
    }
    else {
        it_143=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_143->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_143);
            exit(2);
        }
        __result_obj__37 = it_143->class_name;
        return __result_obj__37;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_144;
int i_145;
struct sMemHeaderTiny* it_146;
    if(    gComeDebugLib    ) {
        it_144=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_144->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_144->class_name        ) {
            printf("(%s): ",it_144->class_name);
        }
        for(        i_145=0        ;        i_145<16        ;        i_145++        ){
            if(            it_144->sname[i_145]            ) {
                printf("%s %d #%d, ",it_144->sname[i_145],it_144->sline[i_145],it_144->id[i_145]);
            }
        }
        puts("");
    }
    else {
        it_146=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_146->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_146->class_name,it_146->sname,it_146->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_147;
unsigned long  int* ref_count_148;
unsigned long  int* size2_149;
void* __result_obj__38;
    mem_147=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_148=(unsigned long  int*)mem_147;
    *ref_count_148=0;
    size2_149=(unsigned long  int*)(mem_147+sizeof(unsigned long  int));
    *size2_149=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__38 = mem_147+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__38;
}

void come_free(void* mem){
unsigned long  int* ref_count_150;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_150=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_150);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__39;
char* mem_151;
unsigned long  int* size_p_152;
unsigned long  int size_153;
void* result_154;
void* __result_obj__40;
    if(    !block    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    mem_151=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_152=(unsigned long  int*)(mem_151+sizeof(unsigned long  int));
    size_153=*size_p_152-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_154=come_calloc_v2(1,size_153,sname,sline,class_name);
    memcpy(result_154,block,size_153);
    __result_obj__40 = result_154;
    return __result_obj__40;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__41;
unsigned long  int* ref_count_155;
void* __result_obj__42;
    if(    mem==((void*)0)    ) {
        __result_obj__41 = mem;
        return __result_obj__41;
    }
    ref_count_155=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_155)++;
    __result_obj__42 = mem;
    return __result_obj__42;
}

void* come_print_ref_count(void* mem){
void* __result_obj__43;
unsigned long  int* ref_count_156;
void* __result_obj__44;
    if(    mem==((void*)0)    ) {
        __result_obj__43 = mem;
        return __result_obj__43;
    }
    ref_count_156=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_156);
    __result_obj__44 = mem;
    return __result_obj__44;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_157;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_157=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_157;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__45;
void* __result_obj__46;
unsigned long  int* ref_count_158;
unsigned long  int count_159;
void (*finalizer_160)(void*);
void* __result_obj__47;
void* __result_obj__48;
memset(&finalizer_160, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__45 = mem;
            return __result_obj__45;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__46 = ((void*)0);
        return __result_obj__46;
    }
    ref_count_158=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_158)--;
    }
    count_159=*ref_count_158;
    if(    !no_free&&count_159<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_160=protocol_fun;
            finalizer_160(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__47 = ((void*)0);
        return __result_obj__47;
    }
    __result_obj__48 = mem;
    return __result_obj__48;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_161)(void*);
void (*finalizer_162)(void*);
void (*finalizer_163)(void*);
unsigned long  int* ref_count_164;
unsigned long  int count_165;
void (*finalizer_166)(void*);
void (*finalizer_167)(void*);
void (*finalizer_168)(void*);
memset(&finalizer_161, 0, sizeof(void (*)(void*)));
memset(&finalizer_162, 0, sizeof(void (*)(void*)));
memset(&finalizer_163, 0, sizeof(void (*)(void*)));
memset(&finalizer_166, 0, sizeof(void (*)(void*)));
memset(&finalizer_167, 0, sizeof(void (*)(void*)));
memset(&finalizer_168, 0, sizeof(void (*)(void*)));
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
                finalizer_161=protocol_fun;
                finalizer_161(protocol_obj);
            }
            finalizer_162=fun;
            finalizer_162(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_163=protocol_fun;
                finalizer_163(protocol_obj);
            }
        }
    }
    else {
        ref_count_164=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_164)--;
        }
        count_165=*ref_count_164;
        if(        !no_free&&count_165<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_166=protocol_fun;
                        finalizer_166(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_167=fun;
                        finalizer_167(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_168=protocol_fun;
                        finalizer_168(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__49;
int len_169;
void* __right_value6 = (void*)0;
char* result_170;
char* __result_obj__50;
    if(    str==((void*)0)    ) {
        __result_obj__49 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__49;
    }
    len_169=strlen(str)+1;
    result_170=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_169)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_170,str,len_169);
    __result_obj__50 = (char*)come_increment_ref_count(result_170);
    (result_170 = come_decrement_ref_count(result_170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__50;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value7 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__51;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__51 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value8 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__52;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__52 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__53;
void* __right_value9 = (void*)0;
struct buffer* result_171;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__53 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__53;
    }
    result_171=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_171->size=self->size;
    __dec_obj3=result_171->buf,
    result_171->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_171->len=self->len;
    memcpy(result_171->buf,self->buf,self->len);
    __result_obj__54 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__55;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__55 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__55;
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
struct buffer* __result_obj__56;
void* __right_value13 = (void*)0;
char* old_buf_172;
int old_len_173;
int new_size_174;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_172=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_172,self->buf,self->size);
        old_len_173=self->len;
        new_size_174=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_174)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_172,old_len_173);
        self->buf[old_len_173]=0;
        self->size=new_size_174;
        (old_buf_172 = come_decrement_ref_count(old_buf_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__58;
void* __right_value15 = (void*)0;
char* old_buf_175;
int old_len_176;
int new_size_177;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__59;
    if(    self==((void*)0)    ) {
        __result_obj__58 = ((void*)0);
        return __result_obj__58;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_175=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_176=self->len;
        new_size_177=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_177)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_175,old_len_176);
        self->buf[old_len_176]=0;
        self->size=new_size_177;
        (old_buf_175 = come_decrement_ref_count(old_buf_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__59 = self;
    return __result_obj__59;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__60;
int size_178;
void* __right_value17 = (void*)0;
char* old_buf_179;
int old_len_180;
int new_size_181;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    size_178=strlen(mem);
    if(    self->len+size_178+1+1>=self->size    ) {
        old_buf_179=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_179,self->buf,self->size);
        old_len_180=self->len;
        new_size_181=(self->size+size_178+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_181)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_179,old_len_180);
        self->buf[old_len_180]=0;
        self->size=new_size_181;
        (old_buf_179 = come_decrement_ref_count(old_buf_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_178);
    self->len+=size_178;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__62;
va_list args_183;
int len_184;
void* __right_value19 = (void*)0;
char* mem_185;
int size_186;
void* __right_value20 = (void*)0;
char* old_buf_187;
int old_len_188;
int new_size_189;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__63;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__62 = self;
        return __result_obj__62;
    }
    char result_182[128];
    memset(&result_182, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_183,msg);
    snprintf(result_182,128,args_183);
    __builtin_va_end(args_183);
    len_184=strlen(result_182);
    mem_185=(char*)come_increment_ref_count(__builtin_string(result_182));
    size_186=strlen(mem_185);
    if(    self->len+size_186+1+1>=self->size    ) {
        old_buf_187=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_187,self->buf,self->size);
        old_len_188=self->len;
        new_size_189=(self->size+size_186+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_189)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_187,old_len_188);
        self->buf[old_len_188]=0;
        self->size=new_size_189;
        (old_buf_187 = come_decrement_ref_count(old_buf_187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_185,size_186);
    self->len+=size_186;
    self->buf[self->len]=0;
    free(result_182);
    __result_obj__63 = self;
    (mem_185 = come_decrement_ref_count(mem_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__63;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__64;
int size_190;
void* __right_value22 = (void*)0;
char* old_buf_191;
int old_len_192;
int new_size_193;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    size_190=strlen(mem)+1;
    if(    self->len+size_190+1+1+1>=self->size    ) {
        old_buf_191=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_191,self->buf,self->size);
        old_len_192=self->len;
        new_size_193=(self->size+size_190+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_193)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_191,old_len_192);
        self->buf[old_len_192]=0;
        self->size=new_size_193;
        (old_buf_191 = come_decrement_ref_count(old_buf_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_190);
    self->len+=size_190;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__66;
int* mem_194;
int size_195;
void* __right_value24 = (void*)0;
char* old_buf_196;
int old_len_197;
int new_size_198;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    mem_194=&value;
    size_195=sizeof(int);
    if(    self->len+size_195+1+1>=self->size    ) {
        old_buf_196=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_196,self->buf,self->size);
        old_len_197=self->len;
        new_size_198=(self->size+size_195+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_198)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_196,old_len_197);
        self->buf[old_len_197]=0;
        self->size=new_size_198;
        (old_buf_196 = come_decrement_ref_count(old_buf_196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_194,size_195);
    self->len+=size_195;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_199;
int size_200;
void* __right_value26 = (void*)0;
char* old_buf_201;
int old_len_202;
int new_size_203;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__68;
    mem_199=&value;
    size_200=sizeof(long);
    if(    self->len+size_200+1+1>=self->size    ) {
        old_buf_201=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_201,self->buf,self->size);
        old_len_202=self->len;
        new_size_203=(self->size+size_200+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_203)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_201,old_len_202);
        self->buf[old_len_202]=0;
        self->size=new_size_203;
        (old_buf_201 = come_decrement_ref_count(old_buf_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_199,size_200);
    self->len+=size_200;
    self->buf[self->len]=0;
    __result_obj__68 = self;
    return __result_obj__68;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__69;
short* mem_204;
int size_205;
void* __right_value28 = (void*)0;
char* old_buf_206;
int old_len_207;
int new_size_208;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__70;
    if(    self==((void*)0)    ) {
        __result_obj__69 = ((void*)0);
        return __result_obj__69;
    }
    mem_204=&value;
    size_205=sizeof(short);
    if(    self->len+size_205+1+1>=self->size    ) {
        old_buf_206=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_206,self->buf,self->size);
        old_len_207=self->len;
        new_size_208=(self->size+size_205+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_208)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_206,old_len_207);
        self->buf[old_len_207]=0;
        self->size=new_size_208;
        (old_buf_206 = come_decrement_ref_count(old_buf_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_204,size_205);
    self->len+=size_205;
    self->buf[self->len]=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__71;
int len_209;
int new_size_210;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_211;
struct buffer* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    len_209=self->len;
    len_209=(len_209+3)&~3;
    if(    len_209>=self->size    ) {
        new_size_210=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_210)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_210;
    }
    for(    i_211=self->len    ;    i_211<len_209    ;    i_211++    ){
        self->buf[i_211]=0;
    }
    self->len=len_209;
    __result_obj__72 = self;
    return __result_obj__72;
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
struct buffer* result_212;
struct buffer* __result_obj__73;
struct buffer* __result_obj__74;
    result_212=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__73 = (struct buffer*)come_increment_ref_count(result_212);
        come_call_finalizer(buffer_finalize, result_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__73;
    }
    buffer_append_str(result_212,self);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_212);
    come_call_finalizer(buffer_finalize, result_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__75;
void* __right_value34 = (void*)0;
char* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__75;
    }
    __result_obj__76 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__76 = come_decrement_ref_count(__result_obj__76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__76;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__77;
    __result_obj__77 = self->buf;
    return __result_obj__77;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_213;
struct buffer* __result_obj__78;
    result_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_213,self,sizeof(char)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_213);
    come_call_finalizer(buffer_finalize, result_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_214;
int i_215;
struct buffer* __result_obj__79;
    result_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_215=0    ;    i_215<len    ;    i_215++    ){
        buffer_append(result_214,self[i_215],strlen(self[i_215]));
    }
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_214);
    come_call_finalizer(buffer_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_216;
struct buffer* __result_obj__80;
    result_216=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_216,(char*)self,sizeof(short)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_216);
    come_call_finalizer(buffer_finalize, result_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_217;
struct buffer* __result_obj__81;
    result_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_217,(char*)self,sizeof(int)*len);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_217);
    come_call_finalizer(buffer_finalize, result_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_218;
struct buffer* __result_obj__82;
    result_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_218,(char*)self,sizeof(long)*len);
    __result_obj__82 = (struct buffer*)come_increment_ref_count(result_218);
    come_call_finalizer(buffer_finalize, result_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_219;
struct buffer* __result_obj__83;
    result_219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_219,(char*)self,sizeof(float)*len);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_219);
    come_call_finalizer(buffer_finalize, result_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_220;
struct buffer* __result_obj__84;
    result_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_220,(char*)self,sizeof(double)*len);
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_220);
    come_call_finalizer(buffer_finalize, result_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

char* buffer_printable(struct buffer* self){
int len_221;
void* __right_value49 = (void*)0;
char* result_222;
int n_223;
int i_224;
unsigned char c_225;
char* __result_obj__85;
    len_221=self->len;
    result_222=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_221*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_223=0;
    for(    i_224=0    ;    i_224<len_221    ;    i_224++    ){
        c_225=self->buf[i_224];
        if(        (c_225>=0&&c_225<32)||c_225==127        ) {
            result_222[n_223++]=94;
            result_222[n_223++]=c_225+65-1;
        }
        else if(        c_225>127        ) {
            result_222[n_223++]=63;
        }
        else {
            result_222[n_223++]=c_225;
        }
    }
    result_222[n_223]=0;
    __result_obj__85 = (char*)come_increment_ref_count(result_222);
    (result_222 = come_decrement_ref_count(result_222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_226;
struct list$1char$* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_226=0    ;    i_226<num_value    ;    i_226++    ){
        list$1char$_push_back(self,values[i_226]);
    }
    __result_obj__87 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_227;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_228;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_229;
struct list$1char$* __result_obj__86;
    if(    self->len==0    ) {
        litem_227=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_227->prev=((void*)0);
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail=litem_227;
        self->head=litem_227;
    }
    else if(    self->len==1    ) {
        litem_228=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_228->prev=self->head;
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail=litem_228;
        self->head->next=litem_228;
    }
    else {
        litem_229=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_229->prev=self->tail;
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail->next=litem_229;
        self->tail=litem_229;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_230;
struct list_item$1char$* prev_it_231;
    it_230=self->head;
    while(    it_230!=((void*)0)    ) {
        prev_it_231=it_230;
        it_230=it_230->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__88;
    __result_obj__88 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3330, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_232;
struct list$1char$p* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_232=0    ;    i_232<num_value    ;    i_232++    ){
        list$1char$p_push_back(self,values[i_232]);
    }
    __result_obj__90 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_233;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_234;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_235;
struct list$1char$p* __result_obj__89;
    if(    self->len==0    ) {
        litem_233=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_233->prev=((void*)0);
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail=litem_233;
        self->head=litem_233;
    }
    else if(    self->len==1    ) {
        litem_234=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_234->prev=self->head;
        litem_234->next=((void*)0);
        litem_234->item=item;
        self->tail=litem_234;
        self->head->next=litem_234;
    }
    else {
        litem_235=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_235->prev=self->tail;
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail->next=litem_235;
        self->tail=litem_235;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_236;
struct list_item$1char$p* prev_it_237;
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        prev_it_237=it_236;
        it_236=it_236->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__91;
    __result_obj__91 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3335, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_238;
struct list$1short$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_238=0    ;    i_238<num_value    ;    i_238++    ){
        list$1short$_push_back(self,values[i_238]);
    }
    __result_obj__93 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_239;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_240;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_241;
struct list$1short$* __result_obj__92;
    if(    self->len==0    ) {
        litem_239=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_239->prev=((void*)0);
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail=litem_239;
        self->head=litem_239;
    }
    else if(    self->len==1    ) {
        litem_240=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_240->prev=self->head;
        litem_240->next=((void*)0);
        litem_240->item=item;
        self->tail=litem_240;
        self->head->next=litem_240;
    }
    else {
        litem_241=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_241->prev=self->tail;
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail->next=litem_241;
        self->tail=litem_241;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_242;
struct list_item$1short$* prev_it_243;
    it_242=self->head;
    while(    it_242!=((void*)0)    ) {
        prev_it_243=it_242;
        it_242=it_242->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__94;
    __result_obj__94 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3340, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_244;
struct list$1int$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_244=0    ;    i_244<num_value    ;    i_244++    ){
        list$1int$_push_back(self,values[i_244]);
    }
    __result_obj__96 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_245;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_246;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_247;
struct list$1int$* __result_obj__95;
    if(    self->len==0    ) {
        litem_245=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_245->prev=((void*)0);
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail=litem_245;
        self->head=litem_245;
    }
    else if(    self->len==1    ) {
        litem_246=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_246->prev=self->head;
        litem_246->next=((void*)0);
        litem_246->item=item;
        self->tail=litem_246;
        self->head->next=litem_246;
    }
    else {
        litem_247=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_247->prev=self->tail;
        litem_247->next=((void*)0);
        litem_247->item=item;
        self->tail->next=litem_247;
        self->tail=litem_247;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_248;
struct list_item$1int$* prev_it_249;
    it_248=self->head;
    while(    it_248!=((void*)0)    ) {
        prev_it_249=it_248;
        it_248=it_248->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__97;
    __result_obj__97 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3345, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_250;
struct list$1long$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_250=0    ;    i_250<num_value    ;    i_250++    ){
        list$1long$_push_back(self,values[i_250]);
    }
    __result_obj__99 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_251;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_252;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_253;
struct list$1long$* __result_obj__98;
    if(    self->len==0    ) {
        litem_251=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_251->prev=((void*)0);
        litem_251->next=((void*)0);
        litem_251->item=item;
        self->tail=litem_251;
        self->head=litem_251;
    }
    else if(    self->len==1    ) {
        litem_252=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_252->prev=self->head;
        litem_252->next=((void*)0);
        litem_252->item=item;
        self->tail=litem_252;
        self->head->next=litem_252;
    }
    else {
        litem_253=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_253->prev=self->tail;
        litem_253->next=((void*)0);
        litem_253->item=item;
        self->tail->next=litem_253;
        self->tail=litem_253;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_254;
struct list_item$1long$* prev_it_255;
    it_254=self->head;
    while(    it_254!=((void*)0)    ) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__100;
    __result_obj__100 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3350, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_256;
struct list$1float$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_256=0    ;    i_256<num_value    ;    i_256++    ){
        list$1float$_push_back(self,values[i_256]);
    }
    __result_obj__102 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_257;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_258;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_259;
struct list$1float$* __result_obj__101;
    if(    self->len==0    ) {
        litem_257=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        litem_257->item=item;
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1    ) {
        litem_258=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        litem_258->item=item;
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        litem_259->item=item;
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_260;
struct list_item$1float$* prev_it_261;
    it_260=self->head;
    while(    it_260!=((void*)0)    ) {
        prev_it_261=it_260;
        it_260=it_260->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__103;
    __result_obj__103 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3355, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_262;
struct list$1double$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_262=0    ;    i_262<num_value    ;    i_262++    ){
        list$1double$_push_back(self,values[i_262]);
    }
    __result_obj__105 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_263;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_264;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_265;
struct list$1double$* __result_obj__104;
    if(    self->len==0    ) {
        litem_263=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        litem_263->item=item;
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1    ) {
        litem_264=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        litem_264->item=item;
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        litem_265->item=item;
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_266;
struct list_item$1double$* prev_it_267;
    it_266=self->head;
    while(    it_266!=((void*)0)    ) {
        prev_it_267=it_266;
        it_266=it_266->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__106;
    __result_obj__106 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3360, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
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
char* __result_obj__107;
int len_268;
void* __right_value86 = (void*)0;
char* result_269;
char* __result_obj__108;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    len_268=strlen(self)+strlen(right);
    result_269=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_268+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_269,self,len_268+1);
    strncat(result_269,right,len_268+1);
    __result_obj__108 = (char*)come_increment_ref_count(result_269);
    (result_269 = come_decrement_ref_count(result_269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__109;
int len_270;
void* __right_value88 = (void*)0;
char* result_271;
char* __result_obj__110;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    len_270=strlen(self)+strlen(right);
    result_271=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_270+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_271,self,len_270+1);
    strncat(result_271,right,len_270+1);
    __result_obj__110 = (char*)come_increment_ref_count(result_271);
    (result_271 = come_decrement_ref_count(result_271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__111;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_272;
int i_273;
void* __right_value92 = (void*)0;
char* __result_obj__112;
    if(    self==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    buf_272=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_273=0    ;    i_273<right    ;    i_273++    ){
        buffer_append_str(buf_272,self);
    }
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_272))));
    come_call_finalizer(buffer_finalize, buf_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__113;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_274;
int i_275;
void* __right_value96 = (void*)0;
char* __result_obj__114;
    if(    self==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    buf_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_275=0    ;    i_275<right    ;    i_275++    ){
        buffer_append_str(buf_274,self);
    }
    __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_274))));
    come_call_finalizer(buffer_finalize, buf_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_276;
int i_277;
    result_276=(_Bool)0;
    for(    i_277=0    ;    i_277<len    ;    i_277++    ){
        if(        strncmp(self[i_277],str,strlen(self[i_277]))==0        ) {
            result_276=(_Bool)1;
            break;
        }
    }
    return result_276;
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
int result_278;
char* p_279;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_278=0;
    p_279=value;
    while(    *p_279    ) {
        result_278+=(*p_279);
        p_279++;
    }
    return result_278;
}

unsigned int string_get_hash_key(char* value){
int result_280;
char* p_281;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_280=0;
    p_281=value;
    while(    *p_281    ) {
        result_280+=(*p_281);
        p_281++;
    }
    return result_280;
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
_Bool result_282;
    result_282=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_282;
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
_Bool result_283;
    result_283=(c>=32&&c<=126);
    return result_283;
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
char* __result_obj__115;
int len_284;
void* __right_value98 = (void*)0;
char* result_285;
int i_286;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_284=strlen(str);
    result_285=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_284+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_286=0    ;    i_286<len_284    ;    i_286++    ){
        result_285[i_286]=str[len_284-i_286-1];
    }
    result_285[len_284]=0;
    __result_obj__116 = (char*)come_increment_ref_count(result_285);
    (result_285 = come_decrement_ref_count(result_285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__117;
int len_287;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__118;
void* __right_value102 = (void*)0;
char* __result_obj__119;
void* __right_value103 = (void*)0;
char* __result_obj__120;
void* __right_value104 = (void*)0;
char* result_288;
char* __result_obj__121;
    if(    str==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_287=strlen(str);
    if(    head<0    ) {
        head+=len_287;
    }
    if(    tail<0    ) {
        tail+=len_287+1;
    }
    if(    head>tail    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_287    ) {
        tail=len_287;
    }
    if(    head==tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    tail-head+1<1    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    result_288=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_288,str+head,tail-head);
    result_288[tail-head]=0;
    __result_obj__121 = (char*)come_increment_ref_count(result_288);
    (result_288 = come_decrement_ref_count(result_288, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__122;
int len_289;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__123;
void* __right_value108 = (void*)0;
char* __result_obj__124;
void* __right_value109 = (void*)0;
char* __result_obj__125;
void* __right_value110 = (void*)0;
char* result_290;
char* __result_obj__126;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_289=strlen(str);
    if(    head<0    ) {
        head+=len_289;
    }
    if(    tail<0    ) {
        tail+=len_289+1;
    }
    if(    head>tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_289    ) {
        tail=len_289;
    }
    if(    head==tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    tail-head+1<1    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_290=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_290,str+head,tail-head);
    result_290[tail-head]=0;
    __result_obj__126 = (char*)come_increment_ref_count(result_290);
    (result_290 = come_decrement_ref_count(result_290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__127;
int len_291;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__128;
void* __right_value114 = (void*)0;
char* __result_obj__129;
void* __right_value115 = (void*)0;
char* __result_obj__130;
void* __right_value116 = (void*)0;
char* result_292;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    len_291=strlen(str);
    if(    head<0    ) {
        head+=len_291;
    }
    if(    tail<0    ) {
        tail+=len_291+1;
    }
    if(    head>tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_291    ) {
        tail=len_291;
    }
    if(    head==tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    tail-head+1<1    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result_292=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_292,str+head,tail-head);
    result_292[tail-head]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_292);
    (result_292 = come_decrement_ref_count(result_292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__132;
va_list args_293;
char* result_294;
int len_295;
void* __right_value118 = (void*)0;
char* __result_obj__133;
void* __right_value119 = (void*)0;
char* result2_296;
char* __result_obj__134;
result_294 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    __builtin_va_start(args_293,msg);
    len_295=vasprintf(&result_294,msg,args_293);
    __builtin_va_end(args_293);
    if(    len_295<0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    result2_296=(char*)come_increment_ref_count(__builtin_string(result_294));
    free(result_294);
    __result_obj__134 = (char*)come_increment_ref_count(result2_296);
    (result2_296 = come_decrement_ref_count(result2_296, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__135;
int len_297;
void* __right_value121 = (void*)0;
char* __result_obj__136;
void* __right_value122 = (void*)0;
char* __result_obj__137;
void* __right_value123 = (void*)0;
char* result_298;
char* __result_obj__138;
    if(    str==((void*)0)    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    len_297=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    head<0    ) {
        head+=len_297;
    }
    if(    tail<0    ) {
        tail+=len_297+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    tail>=len_297    ) {
        tail=len_297;
    }
    result_298=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_297-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_298,str,head);
    memcpy(result_298+head,str+tail,len_297-tail);
    result_298[len_297-(tail-head)]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_298);
    (result_298 = come_decrement_ref_count(result_298, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__139;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__139 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_299;
struct list_item$1char$ph* prev_it_300;
    it_299=self->head;
    while(    it_299!=((void*)0)    ) {
        prev_it_300=it_299;
        it_299=it_299->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_304;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_305;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_306;
char* __dec_obj15;
struct list$1char$ph* __result_obj__141;
    if(    self->len==0    ) {
        litem_304=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj13=litem_304->item,
        litem_304->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1    ) {
        litem_305=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj14=litem_305->item,
        litem_305->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj15=litem_306->item,
        litem_306->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result_obj__141 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__141;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__140;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_301;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_302;
int i_303;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__142;
    if(    self==((void*)0)    ) {
        __result_obj__140 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__140;
    }
    result_301=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_303=0    ;    i_303<charp_length(self)    ;    i_303++    ){
        if(        self[i_303]==c        ) {
            list$1char$ph_push_back(result_301,(char*)come_increment_ref_count(__builtin_string(str_302->buf)));
            buffer_reset(str_302);
        }
        else {
            buffer_append_char(str_302,self[i_303]);
        }
    }
    if(    buffer_length(str_302)!=0    ) {
        list$1char$ph_push_back(result_301,(char*)come_increment_ref_count(__builtin_string(str_302->buf)));
    }
    __result_obj__142 = (struct list$1char$ph*)come_increment_ref_count(result_301);
    come_call_finalizer(list$1char$ph$p_finalize, result_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__144;
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* charp_printable(char* str){
int len_307;
void* __right_value137 = (void*)0;
char* result_308;
int n_309;
int i_310;
char c_311;
char* __result_obj__145;
    len_307=charp_length(str);
    result_308=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_307*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_309=0;
    for(    i_310=0    ;    i_310<len_307    ;    i_310++    ){
        c_311=str[i_310];
        if(        (c_311>=0&&c_311<32)||c_311==127        ) {
            result_308[n_309++]=94;
            result_308[n_309++]=c_311+65-1;
        }
        else {
            result_308[n_309++]=c_311;
        }
    }
    result_308[n_309]=0;
    __result_obj__145 = (char*)come_increment_ref_count(result_308);
    (result_308 = come_decrement_ref_count(result_308, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__146;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_312;
char* p_313;
char* p2_314;
void* __right_value141 = (void*)0;
char* __result_obj__147;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    result_312=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_313=self;
    while(    (_Bool)1    ) {
        p2_314=strstr(p_313,str);
        if(        p2_314==((void*)0)        ) {
            p2_314=p_313;
            while(            *p2_314            ) {
                p2_314++;
            }
            buffer_append(result_312,p_313,p2_314-p_313);
            break;
        }
        buffer_append(result_312,p_313,p2_314-p_313);
        buffer_append_str(result_312,replace);
        p_313=p2_314+strlen(str);
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_312))));
    come_call_finalizer(buffer_finalize, result_312, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__148;
char* p_315;
void* __right_value143 = (void*)0;
char* __result_obj__149;
void* __right_value144 = (void*)0;
char* __result_obj__150;
void* __right_value145 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    p_315=path+strlen(path);
    while(    p_315>=path    ) {
        if(        *p_315==47        ) {
            break;
        }
        else {
            p_315--;
        }
    }
    if(    p_315<path    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_315+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__152;
void* __right_value147 = (void*)0;
char* path2_316;
char* p_317;
void* __right_value148 = (void*)0;
char* __result_obj__153;
void* __right_value149 = (void*)0;
char* __result_obj__154;
void* __right_value150 = (void*)0;
char* __result_obj__155;
    if(    path==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    path2_316=(char*)come_increment_ref_count(xbasename(path));
    p_317=path2_316+strlen(path2_316);
    while(    p_317>=path2_316    ) {
        if(        *p_317==46        ) {
            break;
        }
        else {
            p_317--;
        }
    }
    if(    p_317<path2_316    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_316))));
        (path2_316 = come_decrement_ref_count(path2_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_316,0,p_317-path2_316))));
        (path2_316 = come_decrement_ref_count(path2_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_316 = come_decrement_ref_count(path2_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__156;
char* p_318;
void* __right_value152 = (void*)0;
char* __result_obj__157;
void* __right_value153 = (void*)0;
char* __result_obj__158;
void* __right_value154 = (void*)0;
char* __result_obj__159;
    if(    path==((void*)0)    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    p_318=path+strlen(path);
    while(    p_318>=path    ) {
        if(        *p_318==46        ) {
            break;
        }
        else {
            p_318--;
        }
    }
    if(    p_318<path    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_318+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__160;
void* __right_value156 = (void*)0;
char* __result_obj__161;
    if(    self    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    else {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
}

char* _Bool_to_string(_Bool self){
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

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__167;
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__171;
void* __right_value167 = (void*)0;
char* __result_obj__172;
    if(    self==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_to_string(char* self){
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
char* __result_obj__175;
void* __right_value171 = (void*)0;
char* __result_obj__176;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    puts(self);
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* charp_print(char* self){
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
    printf("%s",self);
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* charp_printf(char* self, ...){
void* __right_value174 = (void*)0;
char* __result_obj__179;
char* msg2_319;
va_list args_321;
int len_322;
void* __right_value175 = (void*)0;
char* __result_obj__180;
msg2_319 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    char msg2_320[128];
    memset(&msg2_320, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_321,self);
    len_322=snprintf(msg2_320,128,self,args_321);
    __builtin_va_end(args_321);
    printf("%s",msg2_320);
    free(msg2_320);
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_323;
    for(    i_323=0    ;    i_323<self    ;    i_323++    ){
        block(parent,i_323);
    }
}

