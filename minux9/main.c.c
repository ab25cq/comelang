/// previous struct definition ///
/// struct definition ///
typedef void* any;

typedef char* string;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

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

struct context
{
    unsigned long  long ra;
    unsigned long  long sp;
    unsigned long  long gp;
    unsigned long  long tp;
    unsigned long  long t0;
    unsigned long  long t1;
    unsigned long  long t2;
    unsigned long  long t3;
    unsigned long  long t4;
    unsigned long  long t5;
    unsigned long  long t6;
    unsigned long  long a0;
    unsigned long  long a1;
    unsigned long  long a2;
    unsigned long  long a3;
    unsigned long  long a4;
    unsigned long  long a5;
    unsigned long  long a6;
    unsigned long  long a7;
    unsigned long  long s0;
    unsigned long  long s1;
    unsigned long  long s2;
    unsigned long  long s3;
    unsigned long  long s4;
    unsigned long  long s5;
    unsigned long  long s6;
    unsigned long  long s7;
    unsigned long  long s8;
    unsigned long  long s9;
    unsigned long  long s10;
    unsigned long  long s11;
    unsigned long  long mepc;
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
void mutex_init(struct anonymous_typeX2* mutex);
void mutex_enter_blocking(struct anonymous_typeX2* mutex);
void mutex_exit(struct anonymous_typeX2* mutex);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
void putchar(char c);
void puts(const char* s);
struct proc* alloc_proc(void (*task)());
void load_context(struct context* anonymous_var_nameX40);
void save_context(struct context* anonymous_var_nameX41);
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
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
void exit(int n);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(long num, int base, int is_signed);
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

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_1;
int i_3;
int negative_4;
char* __result_obj__1;
int digit_5;
char* __result_obj__2;
    p_1=buf;
    char tmp_2[32];
    memset(&tmp_2, 0, sizeof(char)    *(32)    );
    i_3=0;
    negative_4=0;
    if(    base<2||base>16    ) {
        *p_1=0;
        __result_obj__1 = p_1;
        return __result_obj__1;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_4=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_5=val_%base;
        tmp_2[i_3++]=(((digit_5<10))?(48+digit_5):(97+digit_5-10));
        val_/=base;
    } while(    val_    );
    if(    negative_4    ) {
        *p_1++=45;
    }
    while(    i_3--    ) {
        *p_1++=tmp_2[i_3];
    }
    *p_1=0;
    __result_obj__2 = buf;
    return __result_obj__2;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_7;
const char* s_8;
unsigned long  int remaining_10;
s_8 = (void*)0;
    char out2_6[512];
    memset(&out2_6, 0, sizeof(char)    *(512)    );
    p_7=out2_6;
    char buf_9[32];
    memset(&buf_9, 0, sizeof(char)    *(32)    );
    remaining_10=sizeof(out2_6);
    for(    ;    *fmt&&remaining_10>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_7++=*fmt;
            remaining_10--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_9,__builtin_va_arg(ap,int),10,1);
            s_8=buf_9;
            break;
            case 117:
            itoa(buf_9,__builtin_va_arg(ap,unsigned int),10,0);
            s_8=buf_9;
            break;
            case 120:
            itoa(buf_9,__builtin_va_arg(ap,unsigned int),16,0);
            s_8=buf_9;
            break;
            case 115:
            s_8=__builtin_va_arg(ap,const char*);
            if(            !s_8            ) {
                s_8="(null)";
            }
            break;
            case 99:
            buf_9[0]=(char)__builtin_va_arg(ap,int);
            buf_9[1]=0;
            s_8=buf_9;
            break;
            case 112:
            strncpy(buf_9,"0x",32);
            itoa(buf_9+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_8=buf_9;
            break;
            case 37:
            buf_9[0]=37;
            buf_9[1]=0;
            s_8=buf_9;
            break;
            default:
            buf_9[0]=37;
            buf_9[1]=*fmt;
            buf_9[2]=0;
            s_8=buf_9;
            break;
        }
        while(        *s_8&&remaining_10>1        ) {
            *p_7++=*s_8++;
            remaining_10--;
        }
    }
    *p_7=0;
    *out=strdup(out2_6);
    return p_7-out2_6;
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_11;
struct proc* __result_obj__3;
    result_11=calloc(1,sizeof(struct proc));
    memset(result_11,0,sizeof(struct proc));
    result_11->stack=calloc(1,256);
    result_11->context.sp=(unsigned long  long)(result_11->stack+256);
    result_11->context.ra=(unsigned long  long)task;
    gProc[gNumProc++]=result_11;
    __result_obj__3 = result_11;
    return __result_obj__3;
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
char* a_12;
    while(    1    ) {
        puts("2\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        ((char*)(__right_value1=charp_puts("ABC")));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        {
            a_12=(char*)come_increment_ref_count(xsprintf("123"));
            puts(a_12);
            (a_12 = come_decrement_ref_count(a_12, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        gCountTask2++;
        yield();
    }
}

int main(){
void* __right_value3 = (void*)0;
struct proc* p_14;
    come_heap_init(0, 0, 0);
    trap_init();
    plic_init();
    plic_enable(10);
    uart_init();
    alloc_proc(task1);
    alloc_proc(task2);
    char buf_13[128];
    memset(&buf_13, 0, sizeof(char)    *(128)    );
    snprintf(buf_13,128,"%d\n",1+1);
    puts(buf_13);
    puts(((char*)(__right_value3=xsprintf("%d\n",1+1))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    p_14=gProc[gActiveProc];
    load_context(&p_14->context);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void disable_interrupts(){
unsigned long  long mstatus_15;
memset(&mstatus_15, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_15));
    mstatus_15&=~(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_15));
}

void enable_interrupts(){
unsigned long  long mstatus_16;
memset(&mstatus_16, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_16));
    mstatus_16|=(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_16));
}

void* sbrk(long incr){
void* __result_obj__4;
void* prev_17;
void* __result_obj__5;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__4 = (void*)-1;
        return __result_obj__4;
    }
    prev_17=heap_end;
    heap_end+=incr;
    __result_obj__5 = prev_17;
    return __result_obj__5;
}

void* malloc(unsigned long  int size){
void* __result_obj__6;
struct mem_block* current_18;
struct mem_block* prev_19;
void* __result_obj__7;
struct mem_block* new_mem_20;
void* __result_obj__8;
void* __result_obj__9;
    if(    size==0    ) {
        __result_obj__6 = ((void*)0);
        return __result_obj__6;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_18=free_list;
    prev_19=((void*)0);
    while(    current_18!=((void*)0)    ) {
        if(        current_18->size>=size        ) {
            if(            prev_19==((void*)0)            ) {
                free_list=current_18->next;
            }
            else {
                prev_19->next=current_18->next;
            }
            __result_obj__7 = (void*)(current_18+1);
            return __result_obj__7;
        }
        prev_19=current_18;
        current_18=current_18->next;
    }
    new_mem_20=(struct mem_block*)sbrk(size);
    if(    new_mem_20==(void*)-1    ) {
        __result_obj__8 = ((void*)0);
        return __result_obj__8;
    }
    new_mem_20->size=size;
    new_mem_20->next=((void*)0);
    __result_obj__9 = (void*)(new_mem_20+1);
    return __result_obj__9;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_21;
void* __result_obj__10;
void* ptr_22;
void* __result_obj__11;
    total_size_21=nmemb*size;
    if(    total_size_21==0    ) {
        __result_obj__10 = ((void*)0);
        return __result_obj__10;
    }
    ptr_22=malloc(total_size_21);
    if(    ptr_22!=((void*)0)    ) {
        memset(ptr_22,0,total_size_21);
    }
    __result_obj__11 = ptr_22;
    return __result_obj__11;
}

void free(void* ptr){
struct mem_block* block_23;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_23=(struct mem_block*)ptr-1;
    block_23->next=free_list;
    free_list=block_23;
}

char* strdup(const char* s){
char* s2_24;
unsigned long  int len_25;
char* p_26;
char* __result_obj__12;
    s2_24=s;
    len_25=strlen(s2_24)+1;
    p_26=malloc(len_25);
    if(    p_26    ) {
        memcpy(p_26,s2_24,len_25);
    }
    __result_obj__12 = p_26;
    return __result_obj__12;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__13;
char* __result_obj__14;
char* __result_obj__15;
    if(    !*needle    ) {
        __result_obj__13 = (char*)haystack;
        return __result_obj__13;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_27=haystack;
        const char* n_28=needle;
        while(        *h_27&&*n_28&&(*h_27==*n_28)        ) {
            h_27++;
            n_28++;
        }
        if(        !*n_28        ) {
            __result_obj__14 = (char*)haystack;
            return __result_obj__14;
        }
    }
    __result_obj__15 = ((void*)0);
    return __result_obj__15;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_29;
int i_30;
void* __result_obj__16;
    cdst_29=(char*)dst;
    for(    i_30=0    ;    i_30<n    ;    i_30++    ){
        cdst_29[i_30]=c;
    }
    __result_obj__16 = dst;
    return __result_obj__16;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_31;
const unsigned char* s2_32;
memset(&s1_31, 0, sizeof(const unsigned char*));
memset(&s2_32, 0, sizeof(const unsigned char*));
    s1_31=v1;
    s2_32=v2;
    while(    n-->0    ) {
        if(        *s1_31!=*s2_32        ) {
            return *s1_31-*s2_32;
        }
        s1_31++,s2_32++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_33;
char* d_34;
void* __result_obj__17;
void* __result_obj__18;
s_33 = (void*)0;
d_34 = (void*)0;
    if(    n==0    ) {
        __result_obj__17 = dst;
        return __result_obj__17;
    }
    s_33=src;
    d_34=dst;
    if(    s_33<d_34&&s_33+n>d_34    ) {
        s_33+=n;
        d_34+=n;
        while(        n-->0        ) {
            *--d_34=*--s_33;
        }
    }
    else {
        while(        n-->0        ) {
            *d_34++=*s_33++;
        }
    }
    __result_obj__18 = dst;
    return __result_obj__18;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__19;
    __result_obj__19 = memmove(dst,src,n);
    return __result_obj__19;
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
char* os_35;
char* __result_obj__20;
char* __result_obj__21;
os_35 = (void*)0;
    os_35=s;
    if(    n<=0    ) {
        __result_obj__20 = os_35;
        return __result_obj__20;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__21 = os_35;
    return __result_obj__21;
}

int strlen(const char* s){
int n_36;
memset(&n_36, 0, sizeof(int));
    for(    n_36=0    ;    s[n_36]    ;    n_36++    ){
        ;
    }
    return n_36;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_37;
char* __result_obj__22;
    d_37=dest;
    while(    *d_37    ) {
        d_37++;
    }
    while(    n--&&*src    ) {
        *d_37++=*src++;
    }
    *d_37=0;
    __result_obj__22 = dest;
    return __result_obj__22;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_38;
char* p_39;
const char* s_40;
unsigned long  int remaining_42;
s_40 = (void*)0;
    __builtin_va_start(ap_38,fmt);
    p_39=out;
    char buf_41[32];
    memset(&buf_41, 0, sizeof(char)    *(32)    );
    remaining_42=out_size;
    if(    remaining_42==0    ) {
        __builtin_va_end(ap_38);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_42>1            ) {
                *p_39++=*fmt;
                remaining_42--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_40=__builtin_va_arg(ap_38,const char*);
            while(            *s_40&&remaining_42>1            ) {
                *p_39++=*s_40++;
                remaining_42--;
            }
            break;
            case 100:
            itoa(buf_41,__builtin_va_arg(ap_38,int),10,0);
            s_40=buf_41;
            while(            *s_40&&remaining_42>1            ) {
                *p_39++=*s_40++;
                remaining_42--;
            }
            break;
            case 120:
            itoa(buf_41,(unsigned int)__builtin_va_arg(ap_38,int),16,1);
            s_40=buf_41;
            while(            *s_40&&remaining_42>1            ) {
                *p_39++=*s_40++;
                remaining_42--;
            }
            break;
            case 99:
            if(            remaining_42>1            ) {
                *p_39++=(char)__builtin_va_arg(ap_38,int);
                remaining_42--;
            }
            break;
            case 112:
            s_40="0x";
            while(            *s_40&&remaining_42>1            ) {
                *p_39++=*s_40++;
                remaining_42--;
            }
            itoa(buf_41,(long)__builtin_va_arg(ap_38,void*),16,1);
            s_40=buf_41;
            while(            *s_40&&remaining_42>1            ) {
                *p_39++=*s_40++;
                remaining_42--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_41,__builtin_va_arg(ap_38,long),10,1);
                s_40=buf_41;
                while(                *s_40&&remaining_42>1                ) {
                    *p_39++=*s_40++;
                    remaining_42--;
                }
            }
            break;
            default:
            if(            remaining_42>1            ) {
                *p_39++=37;
                remaining_42--;
                if(                remaining_42>1                ) {
                    *p_39++=*fmt;
                    remaining_42--;
                }
            }
            break;
        }
    }
    *p_39=0;
    __builtin_va_end(ap_38);
    return p_39-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_43;
char* p_44;
const char* s_45;
unsigned long  int remaining_47;
s_45 = (void*)0;
    __builtin_va_start(ap_43,fmt);
    p_44=out;
    char buf_46[32];
    memset(&buf_46, 0, sizeof(char)    *(32)    );
    remaining_47=out_size;
    if(    remaining_47==0    ) {
        __builtin_va_end(ap_43);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_47>1            ) {
                *p_44++=*fmt;
                remaining_47--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_45=__builtin_va_arg(ap_43,const char*);
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 100:
            itoa(buf_46,__builtin_va_arg(ap_43,int),10,0);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 120:
            itoa(buf_46,(unsigned int)__builtin_va_arg(ap_43,int),16,1);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 99:
            if(            remaining_47>1            ) {
                *p_44++=(char)__builtin_va_arg(ap_43,int);
                remaining_47--;
            }
            break;
            case 112:
            s_45="0x";
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            itoa(buf_46,(long)__builtin_va_arg(ap_43,void*),16,1);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_46,__builtin_va_arg(ap_43,long),10,1);
                s_45=buf_46;
                while(                *s_45&&remaining_47>1                ) {
                    *p_44++=*s_45++;
                    remaining_47--;
                }
            }
            break;
            default:
            if(            remaining_47>1            ) {
                *p_44++=37;
                remaining_47--;
                if(                remaining_47>1                ) {
                    *p_44++=*fmt;
                    remaining_47--;
                }
            }
            break;
        }
    }
    *p_44=0;
    __builtin_va_end(ap_43);
    return p_44-out;
}

void printint(long num, int base, int is_signed){
int i_49;
unsigned long  int n_50;
memset(&n_50, 0, sizeof(unsigned long  int));
    char buf_48[32];
    memset(&buf_48, 0, sizeof(char)    *(32)    );
    i_49=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_50=-num;
    }
    else {
        n_50=num;
    }
    do {
        buf_48[i_49++]="0123456789abcdef"[n_50%base];
        n_50/=base;
    } while(    n_50>0    );
    while(    i_49--    ) {
        putchar(buf_48[i_49]);
    }
}

int printf(const char* fmt, ...){
va_list ap_51;
char* p_52;
int val__53;
unsigned int val__54;
unsigned long  int val__55;
char c_57;
p_52 = (void*)0;
    __builtin_va_start(ap_51,fmt);
    for(    p_52=fmt    ;    *p_52    ;    p_52++    ){
        if(        *p_52!=37        ) {
            putchar(*p_52);
            continue;
        }
        p_52++;
        switch (        *p_52) {
            case 100:
            {
                val__53=__builtin_va_arg(ap_51,int);
                printint(val__53,10,1);
                break;
            }
            case 120:
            {
                val__54=__builtin_va_arg(ap_51,unsigned int);
                printint(val__54,16,0);
                break;
            }
            case 112:
            {
                val__55=(unsigned long  int)__builtin_va_arg(ap_51,void*);
                putchar(48);
                putchar(120);
                printint(val__55,16,0);
                break;
            }
            case 115:
            {
                const char* s_56=__builtin_va_arg(ap_51,const char*);
                if(                !s_56                ) {
                    s_56="(null)";
                }
                while(                *s_56                ) {
                    putchar(*s_56++);
                }
                break;
            }
            case 99:
            {
                c_57=(char)__builtin_va_arg(ap_51,int);
                putchar(c_57);
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
                putchar(*p_52);
                break;
            }
        }
    }
    __builtin_va_end(ap_51);
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
void* __right_value4 = (void*)0;
char* result_58;
char* __result_obj__23;
    result_58=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__23 = (char*)come_increment_ref_count(result_58);
    (result_58 = come_decrement_ref_count(result_58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__23 = come_decrement_ref_count(__result_obj__23, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__23;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_59;
void* __result_obj__24;
    result_59=come_calloc(count,size,sname,sline,class_name);
    __result_obj__24 = result_59;
    return __result_obj__24;
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
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct buffer* buf_60;
int i_61;
void* __right_value7 = (void*)0;
    buf_60=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_60,"%s %d\n",sname,sline);
    for(    i_61=gNumComeStackFrame-2    ;    i_61>=0    ;    i_61--    ){
        buffer_append_format(buf_60,"%s %d #%d\n",gComeStackFrameSName[i_61],gComeStackFrameSLine[i_61],gComeStackFrameID[i_61]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value7=buffer_to_string(buf_60))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_62;
    for(    i_62=gNumComeStackFrame-1    ;    i_62>=0    ;    i_62--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_62],gComeStackFrameSLine[i_62],gComeStackFrameID[i_62]);
    }
}

char* come_get_stackframe(){
void* __right_value8 = (void*)0;
char* __result_obj__25;
    __result_obj__25 = (char*)come_increment_ref_count(((char*)(__right_value8=__builtin_string(gComeStackFrameBuffer))));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__25 = come_decrement_ref_count(__result_obj__25, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__25;
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
int i_63;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_63=0    ;    i_63<gHeapPages.mSizePages    ;    i_63++    ){
        gHeapPages.mPages[i_63]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_64;
int n_65;
_Bool flag_66;
int i_67;
struct sMemHeaderTiny* it_68;
int n_69;
int i_70;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_64=gAllocMem;
        n_65=0;
        while(        it_64        ) {
            n_65++;
            flag_66=(_Bool)0;
            printf("#%d ",n_65);
            if(            it_64->class_name            ) {
                printf("%p (%s): ",(char*)it_64+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_64->class_name);
            }
            for(            i_67=0            ;            i_67<16            ;            i_67++            ){
                if(                it_64->sname[i_67]                ) {
                    printf("%s %d #%d, ",it_64->sname[i_67],it_64->sline[i_67],it_64->id[i_67]);
                    flag_66=(_Bool)1;
                }
            }
            if(            flag_66            ) {
                puts("");
            }
            it_64=it_64->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_65,gNumAlloc,gNumFree);
    }
    else {
        it_68=(struct sMemHeaderTiny*)gAllocMem;
        n_69=0;
        while(        it_68        ) {
            n_69++;
            if(            it_68->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_69,(char*)it_68+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_68->class_name,it_68->sname,it_68->sline);
            }
            it_68=it_68->next;
        }
        if(        n_69>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_69,gNumAlloc,gNumFree);
        }
    }
    for(    i_70=0    ;    i_70<gHeapPages.mSizePages    ;    i_70++    ){
        free(gHeapPages.mPages[i_70]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_71;
void* __result_obj__26;
    result_71=((void*)0);
    size=(size+7&~7);
    result_71=calloc(1,size);
    __result_obj__26 = result_71;
    return __result_obj__26;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_72;
struct sMemHeader* prev_it_73;
struct sMemHeader* next_it_74;
unsigned long  int size_75;
struct sMemHeaderTiny* it_76;
struct sMemHeaderTiny* prev_it_77;
struct sMemHeaderTiny* next_it_78;
unsigned long  int size_79;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_72=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_72->allocated!=177783            ) {
                return;
            }
            it_72->allocated=0;
            prev_it_73=it_72->prev;
            next_it_74=it_72->next;
            if(            gAllocMem==it_72            ) {
                gAllocMem=next_it_74;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_73                ) {
                    prev_it_73->next=next_it_74;
                }
                if(                next_it_74                ) {
                    next_it_74->prev=prev_it_73;
                }
            }
            size_75=it_72->size;
            free(it_72);
            gNumFree++;
        }
        else {
            it_76=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_76->allocated!=177783            ) {
                return;
            }
            it_76->allocated=0;
            prev_it_77=it_76->prev;
            next_it_78=it_76->next;
            if(            gAllocMem==it_76            ) {
                gAllocMem=(struct sMemHeader*)next_it_78;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_77                ) {
                    prev_it_77->next=next_it_78;
                }
                if(                next_it_78                ) {
                    next_it_78->prev=prev_it_77;
                }
            }
            size_79=it_76->size;
            free(it_76);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_80;
struct sMemHeader* it_81;
int i_82;
int i_83;
void* __result_obj__27;
void* result_84;
struct sMemHeaderTiny* it_85;
void* __result_obj__28;
memset(&i_82, 0, sizeof(int));
memset(&i_83, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_80=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_81=result_80;
        it_81->allocated=177783;
        it_81->size=size+sizeof(struct sMemHeader);
        it_81->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_82=0            ;            i_82<gNumComeStackFrame            ;            i_82++            ){
                it_81->sname[i_82]=gComeStackFrameSName[i_82];
                it_81->sline[i_82]=gComeStackFrameSLine[i_82];
                it_81->id[i_82]=gComeStackFrameID[i_82];
            }
        }
        else {
            for(            i_83=0            ;            i_83<16            ;            i_83++            ){
                it_81->sname[i_83]=gComeStackFrameSName[gNumComeStackFrame-1-i_83];
                it_81->sline[i_83]=gComeStackFrameSLine[gNumComeStackFrame-1-i_83];
                it_81->id[i_83]=gComeStackFrameID[gNumComeStackFrame-1-i_83];
            }
        }
        come_pop_stackframe_v2();
        it_81->next=gAllocMem;
        it_81->prev=((void*)0);
        it_81->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_81;
        }
        gAllocMem=it_81;
        gNumAlloc++;
        __result_obj__27 = (char*)result_80+sizeof(struct sMemHeader);
        return __result_obj__27;
    }
    else {
        result_84=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_85=result_84;
        it_85->allocated=177783;
        it_85->class_name=class_name;
        it_85->sname=sname;
        it_85->sline=sline;
        it_85->size=size+sizeof(struct sMemHeaderTiny);
        it_85->free_next=((void*)0);
        it_85->next=(struct sMemHeaderTiny*)gAllocMem;
        it_85->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_85;
        }
        gAllocMem=(struct sMemHeader*)it_85;
        gNumAlloc++;
        __result_obj__28 = (char*)result_84+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_86;
char* __result_obj__29;
struct sMemHeaderTiny* it_87;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_86=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_86->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_86);
            exit(2);
        }
        __result_obj__29 = it_86->class_name;
        return __result_obj__29;
    }
    else {
        it_87=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_87->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_87);
            exit(2);
        }
        __result_obj__30 = it_87->class_name;
        return __result_obj__30;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_88;
int i_89;
struct sMemHeaderTiny* it_90;
    if(    gComeDebugLib    ) {
        it_88=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_88->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_88->class_name        ) {
            printf("(%s): ",it_88->class_name);
        }
        for(        i_89=0        ;        i_89<16        ;        i_89++        ){
            if(            it_88->sname[i_89]            ) {
                printf("%s %d #%d, ",it_88->sname[i_89],it_88->sline[i_89],it_88->id[i_89]);
            }
        }
        puts("");
    }
    else {
        it_90=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_90->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_90->class_name,it_90->sname,it_90->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_91;
unsigned long  int* ref_count_92;
unsigned long  int* size2_93;
void* __result_obj__31;
    mem_91=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_92=(unsigned long  int*)mem_91;
    *ref_count_92=0;
    size2_93=(unsigned long  int*)(mem_91+sizeof(unsigned long  int));
    *size2_93=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_91+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_94;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_94=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_95;
unsigned long  int* size_p_96;
unsigned long  int size_97;
void* result_98;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_95=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_96=(unsigned long  int*)(mem_95+sizeof(unsigned long  int));
    size_97=*size_p_96-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_98=come_calloc_v2(1,size_97,sname,sline,class_name);
    memcpy(result_98,block,size_97);
    __result_obj__33 = result_98;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_99;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_99=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_99)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_100;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_100=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_100);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_101;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_101;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_102;
unsigned long  int count_103;
void (*finalizer_104)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_104, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__38 = mem;
            return __result_obj__38;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    ref_count_102=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_102)--;
    }
    count_103=*ref_count_102;
    if(    !no_free&&count_103<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_104=protocol_fun;
            finalizer_104(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    __result_obj__41 = mem;
    return __result_obj__41;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_105)(void*);
void (*finalizer_106)(void*);
void (*finalizer_107)(void*);
unsigned long  int* ref_count_108;
unsigned long  int count_109;
void (*finalizer_110)(void*);
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
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
                finalizer_105=protocol_fun;
                finalizer_105(protocol_obj);
            }
            finalizer_106=fun;
            finalizer_106(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
        }
    }
    else {
        ref_count_108=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_108)--;
        }
        count_109=*ref_count_108;
        if(        !no_free&&count_109<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_110=protocol_fun;
                        finalizer_110(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_111=fun;
                        finalizer_111(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_112=protocol_fun;
                        finalizer_112(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__42;
int len_113;
void* __right_value9 = (void*)0;
char* result_114;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_113=strlen(str)+1;
    result_114=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_113)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_114,str,len_113);
    __result_obj__43 = (char*)come_increment_ref_count(result_114);
    (result_114 = come_decrement_ref_count(result_114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value10 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__44;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__44 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value11 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__45;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__45 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__46;
void* __right_value12 = (void*)0;
struct buffer* result_115;
void* __right_value13 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__47;
    if(    self==((void*)0)    ) {
        __result_obj__46 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__46;
    }
    result_115=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_115->size=self->size;
    __dec_obj3=result_115->buf,
    result_115->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_115->len=self->len;
    memcpy(result_115->buf,self->buf,self->len);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result_115);
    come_call_finalizer(buffer_finalize, result_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
_Bool __result_obj__48;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__48 = string_equals(((char*)(__right_value14=buffer_to_string(left))),((char*)(__right_value15=buffer_to_string(right))));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__48;
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
struct buffer* __result_obj__49;
void* __right_value16 = (void*)0;
char* old_buf_116;
int old_len_117;
int new_size_118;
void* __right_value17 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__50;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_116=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_116,self->buf,self->size);
        old_len_117=self->len;
        new_size_118=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_118)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_116,old_len_117);
        self->buf[old_len_117]=0;
        self->size=new_size_118;
        (old_buf_116 = come_decrement_ref_count(old_buf_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__51;
void* __right_value18 = (void*)0;
char* old_buf_119;
int old_len_120;
int new_size_121;
void* __right_value19 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__52;
    if(    self==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_119=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_120=self->len;
        new_size_121=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_121)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_119,old_len_120);
        self->buf[old_len_120]=0;
        self->size=new_size_121;
        (old_buf_119 = come_decrement_ref_count(old_buf_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__53;
int size_122;
void* __right_value20 = (void*)0;
char* old_buf_123;
int old_len_124;
int new_size_125;
void* __right_value21 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__54;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    size_122=strlen(mem);
    if(    self->len+size_122+1+1>=self->size    ) {
        old_buf_123=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_123,self->buf,self->size);
        old_len_124=self->len;
        new_size_125=(self->size+size_122+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_125)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
        (old_buf_123 = come_decrement_ref_count(old_buf_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_122);
    self->len+=size_122;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__55;
va_list args_127;
int len_128;
void* __right_value22 = (void*)0;
char* mem_129;
int size_130;
void* __right_value23 = (void*)0;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* __right_value24 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    char result_126[128];
    memset(&result_126, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_127,msg);
    snprintf(result_126,128,args_127);
    __builtin_va_end(args_127);
    len_128=strlen(result_126);
    mem_129=(char*)come_increment_ref_count(__builtin_string(result_126));
    size_130=strlen(mem_129);
    if(    self->len+size_130+1+1>=self->size    ) {
        old_buf_131=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_131,self->buf,self->size);
        old_len_132=self->len;
        new_size_133=(self->size+size_130+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_133)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        (old_buf_131 = come_decrement_ref_count(old_buf_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_129,size_130);
    self->len+=size_130;
    self->buf[self->len]=0;
    free(result_126);
    __result_obj__56 = self;
    (mem_129 = come_decrement_ref_count(mem_129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__56;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__57;
int size_134;
void* __right_value25 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value26 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__58;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    size_134=strlen(mem)+1;
    if(    self->len+size_134+1+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_137)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__59;
int* mem_138;
int size_139;
void* __right_value27 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value28 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    mem_138=&value;
    size_139=sizeof(int);
    if(    self->len+size_139+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_138,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_143;
int size_144;
void* __right_value29 = (void*)0;
char* old_buf_145;
int old_len_146;
int new_size_147;
void* __right_value30 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__61;
    mem_143=&value;
    size_144=sizeof(long);
    if(    self->len+size_144+1+1>=self->size    ) {
        old_buf_145=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_145,self->buf,self->size);
        old_len_146=self->len;
        new_size_147=(self->size+size_144+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_147)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_145,old_len_146);
        self->buf[old_len_146]=0;
        self->size=new_size_147;
        (old_buf_145 = come_decrement_ref_count(old_buf_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_143,size_144);
    self->len+=size_144;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__62;
short* mem_148;
int size_149;
void* __right_value31 = (void*)0;
char* old_buf_150;
int old_len_151;
int new_size_152;
void* __right_value32 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_148=&value;
    size_149=sizeof(short);
    if(    self->len+size_149+1+1>=self->size    ) {
        old_buf_150=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_150,self->buf,self->size);
        old_len_151=self->len;
        new_size_152=(self->size+size_149+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_152)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_150,old_len_151);
        self->buf[old_len_151]=0;
        self->size=new_size_152;
        (old_buf_150 = come_decrement_ref_count(old_buf_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_148,size_149);
    self->len+=size_149;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__64;
int len_153;
int new_size_154;
void* __right_value33 = (void*)0;
char* __dec_obj12;
int i_155;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    len_153=self->len;
    len_153=(len_153+3)&~3;
    if(    len_153>=self->size    ) {
        new_size_154=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_154;
    }
    for(    i_155=self->len    ;    i_155<len_153    ;    i_155++    ){
        self->buf[i_155]=0;
    }
    self->len=len_153;
    __result_obj__65 = self;
    return __result_obj__65;
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
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_156;
struct buffer* __result_obj__66;
struct buffer* __result_obj__67;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__66 = (struct buffer*)come_increment_ref_count(result_156);
        come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__66;
    }
    buffer_append_str(result_156,self);
    __result_obj__67 = (struct buffer*)come_increment_ref_count(result_156);
    come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

char* buffer_to_string(struct buffer* self){
void* __right_value36 = (void*)0;
char* __result_obj__68;
void* __right_value37 = (void*)0;
char* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(""))));
        (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__68;
    }
    __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value37=__builtin_string(self->buf))));
    (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__69;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__70;
    __result_obj__70 = self->buf;
    return __result_obj__70;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_157;
struct buffer* __result_obj__71;
    result_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_157,self,sizeof(char)*len);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_158;
int i_159;
struct buffer* __result_obj__72;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_159=0    ;    i_159<len    ;    i_159++    ){
        buffer_append(result_158,self[i_159],strlen(self[i_159]));
    }
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_160;
struct buffer* __result_obj__73;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_160,(char*)self,sizeof(short)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__74;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_161,(char*)self,sizeof(int)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__75;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(long)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__76;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_163,(char*)self,sizeof(float)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__77;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(double)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

char* buffer_printable(struct buffer* self){
int len_165;
void* __right_value52 = (void*)0;
char* result_166;
int n_167;
int i_168;
unsigned char c_169;
char* __result_obj__78;
    len_165=self->len;
    result_166=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_165*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_167=0;
    for(    i_168=0    ;    i_168<len_165    ;    i_168++    ){
        c_169=self->buf[i_168];
        if(        (c_169>=0&&c_169<32)||c_169==127        ) {
            result_166[n_167++]=94;
            result_166[n_167++]=c_169+65-1;
        }
        else if(        c_169>127        ) {
            result_166[n_167++]=63;
        }
        else {
            result_166[n_167++]=c_169;
        }
    }
    result_166[n_167]=0;
    __result_obj__78 = (char*)come_increment_ref_count(result_166);
    (result_166 = come_decrement_ref_count(result_166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_170;
struct list$1char$* __result_obj__80;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0    ;    i_170<num_value    ;    i_170++    ){
        list$1char$_push_back(self,values[i_170]);
    }
    __result_obj__80 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_171;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_172;
void* __right_value56 = (void*)0;
struct list_item$1char$* litem_173;
struct list$1char$* __result_obj__79;
    if(    self->len==0    ) {
        litem_171=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1    ) {
        litem_172=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value56=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result_obj__79 = self;
    return __result_obj__79;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_174;
struct list_item$1char$* prev_it_175;
    it_174=self->head;
    while(    it_174!=((void*)0)    ) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value53 = (void*)0;
void* __right_value57 = (void*)0;
struct list$1char$* __result_obj__81;
    __result_obj__81 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value57=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3330, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_176;
struct list$1char$p* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0    ;    i_176<num_value    ;    i_176++    ){
        list$1char$p_push_back(self,values[i_176]);
    }
    __result_obj__83 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_177;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_178;
void* __right_value61 = (void*)0;
struct list_item$1char$p* litem_179;
struct list$1char$p* __result_obj__82;
    if(    self->len==0    ) {
        litem_177=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1    ) {
        litem_178=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value61=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_180;
struct list_item$1char$p* prev_it_181;
    it_180=self->head;
    while(    it_180!=((void*)0)    ) {
        prev_it_181=it_180;
        it_180=it_180->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1char$p* __result_obj__84;
    __result_obj__84 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value62=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3335, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_182;
struct list$1short$* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0    ;    i_182<num_value    ;    i_182++    ){
        list$1short$_push_back(self,values[i_182]);
    }
    __result_obj__86 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_183;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_184;
void* __right_value66 = (void*)0;
struct list_item$1short$* litem_185;
struct list$1short$* __result_obj__85;
    if(    self->len==0    ) {
        litem_183=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1    ) {
        litem_184=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value66=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_186;
struct list_item$1short$* prev_it_187;
    it_186=self->head;
    while(    it_186!=((void*)0)    ) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value67 = (void*)0;
struct list$1short$* __result_obj__87;
    __result_obj__87 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value67=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3340, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_188;
struct list$1int$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0    ;    i_188<num_value    ;    i_188++    ){
        list$1int$_push_back(self,values[i_188]);
    }
    __result_obj__89 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_189;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_190;
void* __right_value71 = (void*)0;
struct list_item$1int$* litem_191;
struct list$1int$* __result_obj__88;
    if(    self->len==0    ) {
        litem_189=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1    ) {
        litem_190=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value71=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_192;
struct list_item$1int$* prev_it_193;
    it_192=self->head;
    while(    it_192!=((void*)0)    ) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value72 = (void*)0;
struct list$1int$* __result_obj__90;
    __result_obj__90 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value72=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3345, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_194;
struct list$1long$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_194=0    ;    i_194<num_value    ;    i_194++    ){
        list$1long$_push_back(self,values[i_194]);
    }
    __result_obj__92 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_195;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_196;
void* __right_value76 = (void*)0;
struct list_item$1long$* litem_197;
struct list$1long$* __result_obj__91;
    if(    self->len==0    ) {
        litem_195=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1    ) {
        litem_196=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value76=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_198;
struct list_item$1long$* prev_it_199;
    it_198=self->head;
    while(    it_198!=((void*)0)    ) {
        prev_it_199=it_198;
        it_198=it_198->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1long$* __result_obj__93;
    __result_obj__93 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value77=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3350, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_200;
struct list$1float$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1float$_push_back(self,values[i_200]);
    }
    __result_obj__95 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_201;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_202;
void* __right_value81 = (void*)0;
struct list_item$1float$* litem_203;
struct list$1float$* __result_obj__94;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value81=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_204;
struct list_item$1float$* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1float$* __result_obj__96;
    __result_obj__96 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value82=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3355, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_206;
struct list$1double$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1double$_push_back(self,values[i_206]);
    }
    __result_obj__98 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_207;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_208;
void* __right_value86 = (void*)0;
struct list_item$1double$* litem_209;
struct list$1double$* __result_obj__97;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value86=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_210;
struct list_item$1double$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value87 = (void*)0;
struct list$1double$* __result_obj__99;
    __result_obj__99 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value87=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3360, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value87, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
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
void* __right_value88 = (void*)0;
char* __result_obj__100;
int len_212;
void* __right_value89 = (void*)0;
char* result_213;
char* __result_obj__101;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    len_212=strlen(self)+strlen(right);
    result_213=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_212+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_213,self,len_212+1);
    strncat(result_213,right,len_212+1);
    __result_obj__101 = (char*)come_increment_ref_count(result_213);
    (result_213 = come_decrement_ref_count(result_213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

char* string_operator_add(char* self, char* right){
void* __right_value90 = (void*)0;
char* __result_obj__102;
int len_214;
void* __right_value91 = (void*)0;
char* result_215;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value90=__builtin_string(""))));
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_214=strlen(self)+strlen(right);
    result_215=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_214+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_215,self,len_214+1);
    strncat(result_215,right,len_214+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_215);
    (result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* charp_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__104;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_216;
int i_217;
void* __right_value95 = (void*)0;
char* __result_obj__105;
    if(    self==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    buf_216=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_217=0    ;    i_217<right    ;    i_217++    ){
        buffer_append_str(buf_216,self);
    }
    __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_216))));
    come_call_finalizer(buffer_finalize, buf_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_mult(char* self, int right){
void* __right_value96 = (void*)0;
char* __result_obj__106;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* buf_218;
int i_219;
void* __right_value99 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_219=0    ;    i_219<right    ;    i_219++    ){
        buffer_append_str(buf_218,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value99=buffer_to_string(buf_218))));
    come_call_finalizer(buffer_finalize, buf_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_220;
int i_221;
    result_220=(_Bool)0;
    for(    i_221=0    ;    i_221<len    ;    i_221++    ){
        if(        strncmp(self[i_221],str,strlen(self[i_221]))==0        ) {
            result_220=(_Bool)1;
            break;
        }
    }
    return result_220;
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
int result_222;
char* p_223;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_222=0;
    p_223=value;
    while(    *p_223    ) {
        result_222+=(*p_223);
        p_223++;
    }
    return result_222;
}

unsigned int string_get_hash_key(char* value){
int result_224;
char* p_225;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_224=0;
    p_225=value;
    while(    *p_225    ) {
        result_224+=(*p_225);
        p_225++;
    }
    return result_224;
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
_Bool result_226;
    result_226=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_226;
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
_Bool result_227;
    result_227=(c>=32&&c<=126);
    return result_227;
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
void* __right_value100 = (void*)0;
char* __result_obj__108;
int len_228;
void* __right_value101 = (void*)0;
char* result_229;
int i_230;
char* __result_obj__109;
    if(    str==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    len_228=strlen(str);
    result_229=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_228+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_230=0    ;    i_230<len_228    ;    i_230++    ){
        result_229[i_230]=str[len_228-i_230-1];
    }
    result_229[len_228]=0;
    __result_obj__109 = (char*)come_increment_ref_count(result_229);
    (result_229 = come_decrement_ref_count(result_229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value102 = (void*)0;
char* __result_obj__110;
int len_231;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
char* __result_obj__111;
void* __right_value105 = (void*)0;
char* __result_obj__112;
void* __right_value106 = (void*)0;
char* __result_obj__113;
void* __right_value107 = (void*)0;
char* result_232;
char* __result_obj__114;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_231=strlen(str);
    if(    head<0    ) {
        head+=len_231;
    }
    if(    tail<0    ) {
        tail+=len_231+1;
    }
    if(    head>tail    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value104=charp_reverse(((char*)(__right_value103=charp_substring(str,tail,head)))))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_231    ) {
        tail=len_231;
    }
    if(    head==tail    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    if(    tail-head+1<1    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    result_232=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_232,str+head,tail-head);
    result_232[tail-head]=0;
    __result_obj__114 = (char*)come_increment_ref_count(result_232);
    (result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value108 = (void*)0;
char* __result_obj__115;
int len_233;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
char* __result_obj__116;
void* __right_value111 = (void*)0;
char* __result_obj__117;
void* __right_value112 = (void*)0;
char* __result_obj__118;
void* __right_value113 = (void*)0;
char* result_234;
char* __result_obj__119;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_233=strlen(str);
    if(    head<0    ) {
        head+=len_233;
    }
    if(    tail<0    ) {
        tail+=len_233+1;
    }
    if(    head>tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value110=charp_reverse(((char*)(__right_value109=charp_substring(str,tail,head)))))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_233    ) {
        tail=len_233;
    }
    if(    head==tail    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    if(    tail-head+1<1    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    result_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_234,str+head,tail-head);
    result_234[tail-head]=0;
    __result_obj__119 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value114 = (void*)0;
char* __result_obj__120;
int len_235;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
char* __result_obj__121;
void* __right_value117 = (void*)0;
char* __result_obj__122;
void* __right_value118 = (void*)0;
char* __result_obj__123;
void* __right_value119 = (void*)0;
char* result_236;
char* __result_obj__124;
    if(    str==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_235=strlen(str);
    if(    head<0    ) {
        head+=len_235;
    }
    if(    tail<0    ) {
        tail+=len_235+1;
    }
    if(    head>tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value116=charp_reverse(((char*)(__right_value115=charp_substring(str,tail,head)))))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_235    ) {
        tail=len_235;
    }
    if(    head==tail    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    if(    tail-head+1<1    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_236,str+head,tail-head);
    result_236[tail-head]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* xsprintf(char* msg, ...){
void* __right_value120 = (void*)0;
char* __result_obj__125;
va_list args_237;
char* result_238;
int len_239;
void* __right_value121 = (void*)0;
char* __result_obj__126;
void* __right_value122 = (void*)0;
char* result2_240;
char* __result_obj__127;
result_238 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    __builtin_va_start(args_237,msg);
    len_239=vasprintf(&result_238,msg,args_237);
    __builtin_va_end(args_237);
    if(    len_239<0    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result2_240=(char*)come_increment_ref_count(__builtin_string(result_238));
    free(result_238);
    __result_obj__127 = (char*)come_increment_ref_count(result2_240);
    (result2_240 = come_decrement_ref_count(result2_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value123 = (void*)0;
char* __result_obj__128;
int len_241;
void* __right_value124 = (void*)0;
char* __result_obj__129;
void* __right_value125 = (void*)0;
char* __result_obj__130;
void* __right_value126 = (void*)0;
char* result_242;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_241=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head+=len_241;
    }
    if(    tail<0    ) {
        tail+=len_241+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(str))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail>=len_241    ) {
        tail=len_241;
    }
    result_242=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_241-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_242,str,head);
    memcpy(result_242+head,str+tail,len_241-tail);
    result_242[len_241-(tail-head)]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_242);
    (result_242 = come_decrement_ref_count(result_242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__132;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__132 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_243;
struct list_item$1char$ph* prev_it_244;
    it_243=self->head;
    while(    it_243!=((void*)0)    ) {
        prev_it_244=it_243;
        it_243=it_243->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_248;
char* __dec_obj13;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_249;
char* __dec_obj14;
void* __right_value135 = (void*)0;
struct list_item$1char$ph* litem_250;
char* __dec_obj15;
struct list$1char$ph* __result_obj__134;
    if(    self->len==0    ) {
        litem_248=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_248->prev=((void*)0);
        litem_248->next=((void*)0);
        __dec_obj13=litem_248->item,
        litem_248->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_248;
        self->head=litem_248;
    }
    else if(    self->len==1    ) {
        litem_249=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_249->prev=self->head;
        litem_249->next=((void*)0);
        __dec_obj14=litem_249->item,
        litem_249->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_249;
        self->head->next=litem_249;
    }
    else {
        litem_250=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value135=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_250->prev=self->tail;
        litem_250->next=((void*)0);
        __dec_obj15=litem_250->item,
        litem_250->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_250;
        self->tail=litem_250;
    }
    self->len++;
    __result_obj__134 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__134;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1char$ph* __result_obj__133;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* result_245;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct buffer* str_246;
int i_247;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct list$1char$ph* __result_obj__135;
    if(    self==((void*)0)    ) {
        __result_obj__133 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value128=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__133;
    }
    result_245=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_246=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_247=0    ;    i_247<charp_length(self)    ;    i_247++    ){
        if(        self[i_247]==c        ) {
            list$1char$ph_push_back(result_245,(char*)come_increment_ref_count(__builtin_string(str_246->buf)));
            buffer_reset(str_246);
        }
        else {
            buffer_append_char(str_246,self[i_247]);
        }
    }
    if(    buffer_length(str_246)!=0    ) {
        list$1char$ph_push_back(result_245,(char*)come_increment_ref_count(__builtin_string(str_246->buf)));
    }
    __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(result_245);
    come_call_finalizer(list$1char$ph$p_finalize, result_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__136;
    __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value139 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value139=xsprintf(msg,self))));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_printable(char* str){
int len_251;
void* __right_value140 = (void*)0;
char* result_252;
int n_253;
int i_254;
char c_255;
char* __result_obj__138;
    len_251=charp_length(str);
    result_252=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_251*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_253=0;
    for(    i_254=0    ;    i_254<len_251    ;    i_254++    ){
        c_255=str[i_254];
        if(        (c_255>=0&&c_255<32)||c_255==127        ) {
            result_252[n_253++]=94;
            result_252[n_253++]=c_255+65-1;
        }
        else {
            result_252[n_253++]=c_255;
        }
    }
    result_252[n_253]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_252);
    (result_252 = come_decrement_ref_count(result_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value141 = (void*)0;
char* __result_obj__139;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* result_256;
char* p_257;
char* p2_258;
void* __right_value144 = (void*)0;
char* __result_obj__140;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(self))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_256=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_257=self;
    while(    (_Bool)1    ) {
        p2_258=strstr(p_257,str);
        if(        p2_258==((void*)0)        ) {
            p2_258=p_257;
            while(            *p2_258            ) {
                p2_258++;
            }
            buffer_append(result_256,p_257,p2_258-p_257);
            break;
        }
        buffer_append(result_256,p_257,p2_258-p_257);
        buffer_append_str(result_256,replace);
        p_257=p2_258+strlen(str);
    }
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value144=buffer_to_string(result_256))));
    come_call_finalizer(buffer_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xbasename(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__141;
char* p_259;
void* __right_value146 = (void*)0;
char* __result_obj__142;
void* __right_value147 = (void*)0;
char* __result_obj__143;
void* __right_value148 = (void*)0;
char* __result_obj__144;
    if(    path==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    p_259=path+strlen(path);
    while(    p_259>=path    ) {
        if(        *p_259==47        ) {
            break;
        }
        else {
            p_259--;
        }
    }
    if(    p_259<path    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    else {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(p_259+1))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xnoextname(char* path){
void* __right_value149 = (void*)0;
char* __result_obj__145;
void* __right_value150 = (void*)0;
char* path2_260;
char* p_261;
void* __right_value151 = (void*)0;
char* __result_obj__146;
void* __right_value152 = (void*)0;
char* __result_obj__147;
void* __right_value153 = (void*)0;
char* __result_obj__148;
    if(    path==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    path2_260=(char*)come_increment_ref_count(xbasename(path));
    p_261=path2_260+strlen(path2_260);
    while(    p_261>=path2_260    ) {
        if(        *p_261==46        ) {
            break;
        }
        else {
            p_261--;
        }
    }
    if(    p_261<path2_260    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path2_260))));
        (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value152=charp_substring(path2_260,0,p_261-path2_260))));
        (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xextname(char* path){
void* __right_value154 = (void*)0;
char* __result_obj__149;
char* p_262;
void* __right_value155 = (void*)0;
char* __result_obj__150;
void* __right_value156 = (void*)0;
char* __result_obj__151;
void* __right_value157 = (void*)0;
char* __result_obj__152;
    if(    path==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    p_262=path+strlen(path);
    while(    p_262>=path    ) {
        if(        *p_262==46        ) {
            break;
        }
        else {
            p_262--;
        }
    }
    if(    p_262<path    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(path))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(p_262+1))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* bool_to_string(_Bool self){
void* __right_value158 = (void*)0;
char* __result_obj__153;
void* __right_value159 = (void*)0;
char* __result_obj__154;
    if(    self    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("true"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("false"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value160 = (void*)0;
char* __result_obj__155;
void* __right_value161 = (void*)0;
char* __result_obj__156;
    if(    self    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("true"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string("false"))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
}

char* char_to_string(char self){
void* __right_value162 = (void*)0;
char* __result_obj__157;
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%c",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* short_to_string(short self){
void* __right_value163 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* int_to_string(int self){
void* __right_value164 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%d",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* long_to_string(long self){
void* __right_value165 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value166 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%ld",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* float_to_string(float self){
void* __right_value167 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%f",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* double_to_string(double self){
void* __right_value168 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value168=xsprintf("%lf",self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* string_to_string(char* self){
void* __right_value169 = (void*)0;
char* __result_obj__164;
void* __right_value170 = (void*)0;
char* __result_obj__165;
    if(    self==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* charp_to_string(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__166;
void* __right_value172 = (void*)0;
char* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
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
void* __right_value173 = (void*)0;
char* __result_obj__168;
void* __right_value174 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    puts(self);
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_print(char* self){
void* __right_value175 = (void*)0;
char* __result_obj__170;
void* __right_value176 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    printf("%s",self);
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(self))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* charp_printf(char* self, ...){
void* __right_value177 = (void*)0;
char* __result_obj__172;
char* msg2_263;
va_list args_265;
int len_266;
void* __right_value178 = (void*)0;
char* __result_obj__173;
msg2_263 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    char msg2_264[128];
    memset(&msg2_264, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_265,self);
    len_266=snprintf(msg2_264,128,self,args_265);
    __builtin_va_end(args_265);
    printf("%s",msg2_264);
    free(msg2_264);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(self))));
    (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_267;
    for(    i_267=0    ;    i_267<self    ;    i_267++    ){
        block(parent,i_267);
    }
}

