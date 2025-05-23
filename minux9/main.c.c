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
void putchar(char c);
void puts(const char* s);
struct proc* alloc_proc(void (*task)());
void load_context(struct context* anonymous_var_nameX33);
void save_context(struct context* anonymous_var_nameX34);
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
char* itoa(char* buf, int val_, int base, int is_unsigned);
int vasprintf(char** out, const char* fmt, va_list ap);
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

struct proc* alloc_proc(void (*task)()){
struct proc* result_1;
struct proc* __result_obj__1;
    result_1=calloc(1,sizeof(struct proc));
    memset(result_1,0,sizeof(struct proc));
    result_1->stack=calloc(1,256);
    result_1->context.sp=(unsigned long  long)(result_1->stack+256);
    result_1->context.ra=(unsigned long  long)task;
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
void* __right_value3 = (void*)0;
struct proc* p_4;
    come_heap_init(0, 0, 0);
    trap_init();
    plic_init();
    plic_enable(10);
    uart_init();
    alloc_proc(task1);
    alloc_proc(task2);
    char buf_3[128];
    memset(&buf_3, 0, sizeof(char)    *(128)    );
    snprintf(buf_3,128,"%d\n",1+1);
    puts(buf_3);
    puts(((char*)(__right_value3=xsprintf("%d\n",1+1))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    p_4=gProc[gActiveProc];
    load_context(&p_4->context);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void disable_interrupts(){
unsigned long  long mstatus_5;
memset(&mstatus_5, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_5));
    mstatus_5&=~(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_5));
}

void enable_interrupts(){
unsigned long  long mstatus_6;
memset(&mstatus_6, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_6));
    mstatus_6|=(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_6));
}

void* sbrk(long incr){
void* __result_obj__2;
void* prev_7;
void* __result_obj__3;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    prev_7=heap_end;
    heap_end+=incr;
    __result_obj__3 = prev_7;
    return __result_obj__3;
}

void* malloc(unsigned long  int size){
void* __result_obj__4;
struct mem_block* current_8;
struct mem_block* prev_9;
void* __result_obj__5;
struct mem_block* new_mem_10;
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
    current_8=free_list;
    prev_9=((void*)0);
    while(    current_8!=((void*)0)    ) {
        if(        current_8->size>=size        ) {
            if(            prev_9==((void*)0)            ) {
                free_list=current_8->next;
            }
            else {
                prev_9->next=current_8->next;
            }
            __result_obj__5 = (void*)(current_8+1);
            return __result_obj__5;
        }
        prev_9=current_8;
        current_8=current_8->next;
    }
    new_mem_10=(struct mem_block*)sbrk(size);
    if(    new_mem_10==(void*)-1    ) {
        __result_obj__6 = ((void*)0);
        return __result_obj__6;
    }
    new_mem_10->size=size;
    new_mem_10->next=((void*)0);
    __result_obj__7 = (void*)(new_mem_10+1);
    return __result_obj__7;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_11;
void* __result_obj__8;
void* ptr_12;
void* __result_obj__9;
    total_size_11=nmemb*size;
    if(    total_size_11==0    ) {
        __result_obj__8 = ((void*)0);
        return __result_obj__8;
    }
    ptr_12=malloc(total_size_11);
    if(    ptr_12!=((void*)0)    ) {
        memset(ptr_12,0,total_size_11);
    }
    __result_obj__9 = ptr_12;
    return __result_obj__9;
}

void free(void* ptr){
struct mem_block* block_13;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_13=(struct mem_block*)ptr-1;
    block_13->next=free_list;
    free_list=block_13;
}

char* strdup(const char* s){
char* s2_14;
unsigned long  int len_15;
char* p_16;
char* __result_obj__10;
    s2_14=s;
    len_15=strlen(s2_14)+1;
    p_16=malloc(len_15);
    if(    p_16    ) {
        memcpy(p_16,s2_14,len_15);
    }
    __result_obj__10 = p_16;
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
        const char* h_17=haystack;
        const char* n_18=needle;
        while(        *h_17&&*n_18&&(*h_17==*n_18)        ) {
            h_17++;
            n_18++;
        }
        if(        !*n_18        ) {
            __result_obj__12 = (char*)haystack;
            return __result_obj__12;
        }
    }
    __result_obj__13 = ((void*)0);
    return __result_obj__13;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_19;
int i_20;
void* __result_obj__14;
    cdst_19=(char*)dst;
    for(    i_20=0    ;    i_20<n    ;    i_20++    ){
        cdst_19[i_20]=c;
    }
    __result_obj__14 = dst;
    return __result_obj__14;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_21;
const unsigned char* s2_22;
memset(&s1_21, 0, sizeof(const unsigned char*));
memset(&s2_22, 0, sizeof(const unsigned char*));
    s1_21=v1;
    s2_22=v2;
    while(    n-->0    ) {
        if(        *s1_21!=*s2_22        ) {
            return *s1_21-*s2_22;
        }
        s1_21++,s2_22++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_23;
char* d_24;
void* __result_obj__15;
void* __result_obj__16;
s_23 = (void*)0;
d_24 = (void*)0;
    if(    n==0    ) {
        __result_obj__15 = dst;
        return __result_obj__15;
    }
    s_23=src;
    d_24=dst;
    if(    s_23<d_24&&s_23+n>d_24    ) {
        s_23+=n;
        d_24+=n;
        while(        n-->0        ) {
            *--d_24=*--s_23;
        }
    }
    else {
        while(        n-->0        ) {
            *d_24++=*s_23++;
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
char* os_25;
char* __result_obj__18;
os_25 = (void*)0;
    os_25=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__18 = os_25;
    return __result_obj__18;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_26;
char* __result_obj__19;
char* __result_obj__20;
os_26 = (void*)0;
    os_26=s;
    if(    n<=0    ) {
        __result_obj__19 = os_26;
        return __result_obj__19;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__20 = os_26;
    return __result_obj__20;
}

int strlen(const char* s){
int n_27;
memset(&n_27, 0, sizeof(int));
    for(    n_27=0    ;    s[n_27]    ;    n_27++    ){
        ;
    }
    return n_27;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_28;
char* __result_obj__21;
    d_28=dest;
    while(    *d_28    ) {
        d_28++;
    }
    while(    n--&&*src    ) {
        *d_28++=*src++;
    }
    *d_28=0;
    __result_obj__21 = dest;
    return __result_obj__21;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, int val_, int base, int is_unsigned){
char* p_29;
unsigned int val2_33;
char* __result_obj__22;
int digit_34;
char* __result_obj__23;
memset(&val2_33, 0, sizeof(unsigned int));
    p_29=buf;
    char tmp_30[32];
    memset(&tmp_30, 0, sizeof(char)    *(32)    );
    int i_31=0;
    int negative_32=0;
    if(    base<2||base>16    ) {
        *p_29=0;
        __result_obj__22 = p_29;
        return __result_obj__22;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_32=1;
        val2_33=-val_;
    }
    else {
        val2_33=(unsigned int)val_;
    }
    do {
        digit_34=val2_33%base;
        tmp_30[i_31++]=(((digit_34<10))?(48+digit_34):(97+digit_34-10));
        val2_33/=base;
    } while(    val2_33    );
    if(    negative_32    ) {
        *p_29++=45;
    }
    while(    i_31--    ) {
        *p_29++=tmp_30[i_31];
    }
    *p_29=0;
    __result_obj__23 = buf;
    return __result_obj__23;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_36;
const char* s_37;
unsigned long  int remaining_39;
s_37 = (void*)0;
    char out2_35[512];
    memset(&out2_35, 0, sizeof(char)    *(512)    );
    p_36=out2_35;
    char buf_38[32];
    memset(&buf_38, 0, sizeof(char)    *(32)    );
    remaining_39=sizeof(out2_35);
    for(    ;    *fmt&&remaining_39>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_36++=*fmt;
            remaining_39--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_38,__builtin_va_arg(ap,int),10,0);
            s_37=buf_38;
            break;
            case 120:
            itoa(buf_38,__builtin_va_arg(ap,unsigned int),16,1);
            s_37=buf_38;
            break;
            case 115:
            s_37=__builtin_va_arg(ap,const char*);
            if(            !s_37            ) {
                s_37="(null)";
            }
            break;
            default:
            *p_36++=37;
            if(            remaining_39>1            ) {
                *p_36++=*fmt;
                remaining_39-=2;
            }
            continue;
        }
        while(        *s_37&&remaining_39>1        ) {
            *p_36++=*s_37++;
            remaining_39--;
        }
    }
    *p_36=0;
    *out=strdup(out2_35);
    return p_36-out2_35;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_40;
char* p_41;
const char* s_42;
unsigned long  int remaining_44;
s_42 = (void*)0;
    __builtin_va_start(ap_40,fmt);
    p_41=out;
    char buf_43[32];
    memset(&buf_43, 0, sizeof(char)    *(32)    );
    remaining_44=out_size;
    if(    remaining_44==0    ) {
        __builtin_va_end(ap_40);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_44>1            ) {
                *p_41++=*fmt;
                remaining_44--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_42=__builtin_va_arg(ap_40,const char*);
            while(            *s_42&&remaining_44>1            ) {
                *p_41++=*s_42++;
                remaining_44--;
            }
            break;
            case 100:
            itoa(buf_43,__builtin_va_arg(ap_40,int),10,0);
            s_42=buf_43;
            while(            *s_42&&remaining_44>1            ) {
                *p_41++=*s_42++;
                remaining_44--;
            }
            break;
            case 120:
            itoa(buf_43,(unsigned int)__builtin_va_arg(ap_40,int),16,1);
            s_42=buf_43;
            while(            *s_42&&remaining_44>1            ) {
                *p_41++=*s_42++;
                remaining_44--;
            }
            break;
            case 99:
            if(            remaining_44>1            ) {
                *p_41++=(char)__builtin_va_arg(ap_40,int);
                remaining_44--;
            }
            break;
            case 112:
            s_42="0x";
            while(            *s_42&&remaining_44>1            ) {
                *p_41++=*s_42++;
                remaining_44--;
            }
            itoa(buf_43,(long)__builtin_va_arg(ap_40,void*),16,1);
            s_42=buf_43;
            while(            *s_42&&remaining_44>1            ) {
                *p_41++=*s_42++;
                remaining_44--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_43,__builtin_va_arg(ap_40,long),10,1);
                s_42=buf_43;
                while(                *s_42&&remaining_44>1                ) {
                    *p_41++=*s_42++;
                    remaining_44--;
                }
            }
            break;
            default:
            if(            remaining_44>1            ) {
                *p_41++=37;
                remaining_44--;
                if(                remaining_44>1                ) {
                    *p_41++=*fmt;
                    remaining_44--;
                }
            }
            break;
        }
    }
    *p_41=0;
    __builtin_va_end(ap_40);
    return p_41-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_45;
char* p_46;
const char* s_47;
unsigned long  int remaining_49;
s_47 = (void*)0;
    __builtin_va_start(ap_45,fmt);
    p_46=out;
    char buf_48[32];
    memset(&buf_48, 0, sizeof(char)    *(32)    );
    remaining_49=out_size;
    if(    remaining_49==0    ) {
        __builtin_va_end(ap_45);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_49>1            ) {
                *p_46++=*fmt;
                remaining_49--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_47=__builtin_va_arg(ap_45,const char*);
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 100:
            itoa(buf_48,__builtin_va_arg(ap_45,int),10,0);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 120:
            itoa(buf_48,(unsigned int)__builtin_va_arg(ap_45,int),16,1);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 99:
            if(            remaining_49>1            ) {
                *p_46++=(char)__builtin_va_arg(ap_45,int);
                remaining_49--;
            }
            break;
            case 112:
            s_47="0x";
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            itoa(buf_48,(long)__builtin_va_arg(ap_45,void*),16,1);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_48,__builtin_va_arg(ap_45,long),10,1);
                s_47=buf_48;
                while(                *s_47&&remaining_49>1                ) {
                    *p_46++=*s_47++;
                    remaining_49--;
                }
            }
            break;
            default:
            if(            remaining_49>1            ) {
                *p_46++=37;
                remaining_49--;
                if(                remaining_49>1                ) {
                    *p_46++=*fmt;
                    remaining_49--;
                }
            }
            break;
        }
    }
    *p_46=0;
    __builtin_va_end(ap_45);
    return p_46-out;
}

void printint(long num, int base, int is_signed){
int i_51;
unsigned long  int n_52;
memset(&n_52, 0, sizeof(unsigned long  int));
    char buf_50[32];
    memset(&buf_50, 0, sizeof(char)    *(32)    );
    i_51=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_52=-num;
    }
    else {
        n_52=num;
    }
    do {
        buf_50[i_51++]="0123456789abcdef"[n_52%base];
        n_52/=base;
    } while(    n_52>0    );
    while(    i_51--    ) {
        putchar(buf_50[i_51]);
    }
}

int printf(const char* fmt, ...){
va_list ap_53;
char* p_54;
int val__55;
unsigned int val__56;
unsigned long  int val__57;
char c_59;
p_54 = (void*)0;
    __builtin_va_start(ap_53,fmt);
    for(    p_54=fmt    ;    *p_54    ;    p_54++    ){
        if(        *p_54!=37        ) {
            putchar(*p_54);
            continue;
        }
        p_54++;
        switch (        *p_54) {
            case 100:
            {
                val__55=__builtin_va_arg(ap_53,int);
                printint(val__55,10,1);
                break;
            }
            case 120:
            {
                val__56=__builtin_va_arg(ap_53,unsigned int);
                printint(val__56,16,0);
                break;
            }
            case 112:
            {
                val__57=(unsigned long  int)__builtin_va_arg(ap_53,void*);
                putchar(48);
                putchar(120);
                printint(val__57,16,0);
                break;
            }
            case 115:
            {
                const char* s_58=__builtin_va_arg(ap_53,const char*);
                if(                !s_58                ) {
                    s_58="(null)";
                }
                while(                *s_58                ) {
                    putchar(*s_58++);
                }
                break;
            }
            case 99:
            {
                c_59=(char)__builtin_va_arg(ap_53,int);
                putchar(c_59);
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
                putchar(*p_54);
                break;
            }
        }
    }
    __builtin_va_end(ap_53);
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
char* result_60;
char* __result_obj__24;
    result_60=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__24 = (char*)come_increment_ref_count(result_60);
    (result_60 = come_decrement_ref_count(result_60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_61;
void* __result_obj__25;
    result_61=come_calloc(count,size,sname,sline,class_name);
    __result_obj__25 = result_61;
    return __result_obj__25;
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
struct buffer* buf_62;
int i_63;
void* __right_value7 = (void*)0;
    buf_62=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_62,"%s %d\n",sname,sline);
    for(    i_63=gNumComeStackFrame-2    ;    i_63>=0    ;    i_63--    ){
        buffer_append_format(buf_62,"%s %d #%d\n",gComeStackFrameSName[i_63],gComeStackFrameSLine[i_63],gComeStackFrameID[i_63]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value7=buffer_to_string(buf_62))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_64;
    for(    i_64=gNumComeStackFrame-1    ;    i_64>=0    ;    i_64--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_64],gComeStackFrameSLine[i_64],gComeStackFrameID[i_64]);
    }
}

char* come_get_stackframe(){
void* __right_value8 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value8=__builtin_string(gComeStackFrameBuffer))));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__26;
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
int i_65;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_65=0    ;    i_65<gHeapPages.mSizePages    ;    i_65++    ){
        gHeapPages.mPages[i_65]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_66;
int n_67;
_Bool flag_68;
int i_69;
struct sMemHeaderTiny* it_70;
int n_71;
int i_72;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_66=gAllocMem;
        n_67=0;
        while(        it_66        ) {
            n_67++;
            flag_68=(_Bool)0;
            printf("#%d ",n_67);
            if(            it_66->class_name            ) {
                printf("%p (%s): ",(char*)it_66+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_66->class_name);
            }
            for(            i_69=0            ;            i_69<16            ;            i_69++            ){
                if(                it_66->sname[i_69]                ) {
                    printf("%s %d #%d, ",it_66->sname[i_69],it_66->sline[i_69],it_66->id[i_69]);
                    flag_68=(_Bool)1;
                }
            }
            if(            flag_68            ) {
                puts("");
            }
            it_66=it_66->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_67,gNumAlloc,gNumFree);
    }
    else {
        it_70=(struct sMemHeaderTiny*)gAllocMem;
        n_71=0;
        while(        it_70        ) {
            n_71++;
            if(            it_70->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_71,(char*)it_70+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_70->class_name,it_70->sname,it_70->sline);
            }
            it_70=it_70->next;
        }
        if(        n_71>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_71,gNumAlloc,gNumFree);
        }
    }
    for(    i_72=0    ;    i_72<gHeapPages.mSizePages    ;    i_72++    ){
        free(gHeapPages.mPages[i_72]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_73;
void* __result_obj__27;
    result_73=((void*)0);
    size=(size+7&~7);
    result_73=calloc(1,size);
    __result_obj__27 = result_73;
    return __result_obj__27;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_74;
struct sMemHeader* prev_it_75;
struct sMemHeader* next_it_76;
unsigned long  int size_77;
struct sMemHeaderTiny* it_78;
struct sMemHeaderTiny* prev_it_79;
struct sMemHeaderTiny* next_it_80;
unsigned long  int size_81;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_74=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_74->allocated!=177783            ) {
                return;
            }
            it_74->allocated=0;
            prev_it_75=it_74->prev;
            next_it_76=it_74->next;
            if(            gAllocMem==it_74            ) {
                gAllocMem=next_it_76;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_75                ) {
                    prev_it_75->next=next_it_76;
                }
                if(                next_it_76                ) {
                    next_it_76->prev=prev_it_75;
                }
            }
            size_77=it_74->size;
            free(it_74);
            gNumFree++;
        }
        else {
            it_78=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_78->allocated!=177783            ) {
                return;
            }
            it_78->allocated=0;
            prev_it_79=it_78->prev;
            next_it_80=it_78->next;
            if(            gAllocMem==it_78            ) {
                gAllocMem=(struct sMemHeader*)next_it_80;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_79                ) {
                    prev_it_79->next=next_it_80;
                }
                if(                next_it_80                ) {
                    next_it_80->prev=prev_it_79;
                }
            }
            size_81=it_78->size;
            free(it_78);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_82;
struct sMemHeader* it_83;
int i_84;
int i_85;
void* __result_obj__28;
void* result_86;
struct sMemHeaderTiny* it_87;
void* __result_obj__29;
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
        __result_obj__28 = (char*)result_82+sizeof(struct sMemHeader);
        return __result_obj__28;
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
        __result_obj__29 = (char*)result_86+sizeof(struct sMemHeaderTiny);
        return __result_obj__29;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_88;
char* __result_obj__30;
struct sMemHeaderTiny* it_89;
char* __result_obj__31;
    if(    gComeDebugLib    ) {
        it_88=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_88->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_88);
            exit(2);
        }
        __result_obj__30 = it_88->class_name;
        return __result_obj__30;
    }
    else {
        it_89=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_89->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_89);
            exit(2);
        }
        __result_obj__31 = it_89->class_name;
        return __result_obj__31;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_90;
int i_91;
struct sMemHeaderTiny* it_92;
    if(    gComeDebugLib    ) {
        it_90=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_90->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_90->class_name        ) {
            printf("(%s): ",it_90->class_name);
        }
        for(        i_91=0        ;        i_91<16        ;        i_91++        ){
            if(            it_90->sname[i_91]            ) {
                printf("%s %d #%d, ",it_90->sname[i_91],it_90->sline[i_91],it_90->id[i_91]);
            }
        }
        puts("");
    }
    else {
        it_92=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_92->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_92->class_name,it_92->sname,it_92->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_93;
unsigned long  int* ref_count_94;
unsigned long  int* size2_95;
void* __result_obj__32;
    mem_93=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_94=(unsigned long  int*)mem_93;
    *ref_count_94=0;
    size2_95=(unsigned long  int*)(mem_93+sizeof(unsigned long  int));
    *size2_95=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__32 = mem_93+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__32;
}

void come_free(void* mem){
unsigned long  int* ref_count_96;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_96=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_96);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__33;
char* mem_97;
unsigned long  int* size_p_98;
unsigned long  int size_99;
void* result_100;
void* __result_obj__34;
    if(    !block    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    mem_97=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_98=(unsigned long  int*)(mem_97+sizeof(unsigned long  int));
    size_99=*size_p_98-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_100=come_calloc_v2(1,size_99,sname,sline,class_name);
    memcpy(result_100,block,size_99);
    __result_obj__34 = result_100;
    return __result_obj__34;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__35;
unsigned long  int* ref_count_101;
void* __result_obj__36;
    if(    mem==((void*)0)    ) {
        __result_obj__35 = mem;
        return __result_obj__35;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_101)++;
    __result_obj__36 = mem;
    return __result_obj__36;
}

void* come_print_ref_count(void* mem){
void* __result_obj__37;
unsigned long  int* ref_count_102;
void* __result_obj__38;
    if(    mem==((void*)0)    ) {
        __result_obj__37 = mem;
        return __result_obj__37;
    }
    ref_count_102=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_102);
    __result_obj__38 = mem;
    return __result_obj__38;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_103;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_103;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__39;
void* __result_obj__40;
unsigned long  int* ref_count_104;
unsigned long  int count_105;
void (*finalizer_106)(void*);
void* __result_obj__41;
void* __result_obj__42;
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__39 = mem;
            return __result_obj__39;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    ref_count_104=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_104)--;
    }
    count_105=*ref_count_104;
    if(    !no_free&&count_105<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_106=protocol_fun;
            finalizer_106(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__41 = ((void*)0);
        return __result_obj__41;
    }
    __result_obj__42 = mem;
    return __result_obj__42;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
void (*finalizer_109)(void*);
unsigned long  int* ref_count_110;
unsigned long  int count_111;
void (*finalizer_112)(void*);
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&finalizer_109, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
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
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
            finalizer_108=fun;
            finalizer_108(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_109=protocol_fun;
                finalizer_109(protocol_obj);
            }
        }
    }
    else {
        ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_110)--;
        }
        count_111=*ref_count_110;
        if(        !no_free&&count_111<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_112=protocol_fun;
                        finalizer_112(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_113=fun;
                        finalizer_113(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_114=protocol_fun;
                        finalizer_114(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__43;
int len_115;
void* __right_value9 = (void*)0;
char* result_116;
char* __result_obj__44;
    if(    str==((void*)0)    ) {
        __result_obj__43 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    len_115=strlen(str)+1;
    result_116=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_115)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_116,str,len_115);
    __result_obj__44 = (char*)come_increment_ref_count(result_116);
    (result_116 = come_decrement_ref_count(result_116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value10 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__45;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__45 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value11 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__46;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__46 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__47;
void* __right_value12 = (void*)0;
struct buffer* result_117;
void* __right_value13 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__48;
    if(    self==((void*)0)    ) {
        __result_obj__47 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__47;
    }
    result_117=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_117->size=self->size;
    __dec_obj3=result_117->buf,
    result_117->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_117->len=self->len;
    memcpy(result_117->buf,self->buf,self->len);
    __result_obj__48 = (struct buffer*)come_increment_ref_count(result_117);
    come_call_finalizer(buffer_finalize, result_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
_Bool __result_obj__49;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__49 = string_equals(((char*)(__right_value14=buffer_to_string(left))),((char*)(__right_value15=buffer_to_string(right))));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__49;
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
struct buffer* __result_obj__50;
void* __right_value16 = (void*)0;
char* old_buf_118;
int old_len_119;
int new_size_120;
void* __right_value17 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__51;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__50 = self;
        return __result_obj__50;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_118=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_118,self->buf,self->size);
        old_len_119=self->len;
        new_size_120=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_120)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_118,old_len_119);
        self->buf[old_len_119]=0;
        self->size=new_size_120;
        (old_buf_118 = come_decrement_ref_count(old_buf_118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__51 = self;
    return __result_obj__51;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__52;
void* __right_value18 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value19 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__53;
    if(    self==((void*)0)    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_122=self->len;
        new_size_123=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_123)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        (old_buf_121 = come_decrement_ref_count(old_buf_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__54;
int size_124;
void* __right_value20 = (void*)0;
char* old_buf_125;
int old_len_126;
int new_size_127;
void* __right_value21 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__55;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    size_124=strlen(mem);
    if(    self->len+size_124+1+1>=self->size    ) {
        old_buf_125=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_125,self->buf,self->size);
        old_len_126=self->len;
        new_size_127=(self->size+size_124+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_127)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_125,old_len_126);
        self->buf[old_len_126]=0;
        self->size=new_size_127;
        (old_buf_125 = come_decrement_ref_count(old_buf_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_124);
    self->len+=size_124;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__56;
va_list args_129;
int len_130;
void* __right_value22 = (void*)0;
char* mem_131;
int size_132;
void* __right_value23 = (void*)0;
char* old_buf_133;
int old_len_134;
int new_size_135;
void* __right_value24 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    char result_128[128];
    memset(&result_128, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_129,msg);
    snprintf(result_128,128,args_129);
    __builtin_va_end(args_129);
    len_130=strlen(result_128);
    mem_131=(char*)come_increment_ref_count(__builtin_string(result_128));
    size_132=strlen(mem_131);
    if(    self->len+size_132+1+1>=self->size    ) {
        old_buf_133=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size_132+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_135)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
        (old_buf_133 = come_decrement_ref_count(old_buf_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_131,size_132);
    self->len+=size_132;
    self->buf[self->len]=0;
    free(result_128);
    __result_obj__57 = self;
    (mem_131 = come_decrement_ref_count(mem_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__57;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__58;
int size_136;
void* __right_value25 = (void*)0;
char* old_buf_137;
int old_len_138;
int new_size_139;
void* __right_value26 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__59;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    size_136=strlen(mem)+1;
    if(    self->len+size_136+1+1+1>=self->size    ) {
        old_buf_137=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_137,self->buf,self->size);
        old_len_138=self->len;
        new_size_139=(self->size+size_136+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_139)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_137,old_len_138);
        self->buf[old_len_138]=0;
        self->size=new_size_139;
        (old_buf_137 = come_decrement_ref_count(old_buf_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_136);
    self->len+=size_136;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__59 = self;
    return __result_obj__59;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__60;
int* mem_140;
int size_141;
void* __right_value27 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value28 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__61;
    if(    self==((void*)0)    ) {
        __result_obj__60 = ((void*)0);
        return __result_obj__60;
    }
    mem_140=&value;
    size_141=sizeof(int);
    if(    self->len+size_141+1+1>=self->size    ) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_144)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_140,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_145;
int size_146;
void* __right_value29 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value30 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__62;
    mem_145=&value;
    size_146=sizeof(long);
    if(    self->len+size_146+1+1>=self->size    ) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_145,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__63;
short* mem_150;
int size_151;
void* __right_value31 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value32 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_150=&value;
    size_151=sizeof(short);
    if(    self->len+size_151+1+1>=self->size    ) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__65;
int len_155;
int new_size_156;
void* __right_value33 = (void*)0;
char* __dec_obj12;
int i_157;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    len_155=self->len;
    len_155=(len_155+3)&~3;
    if(    len_155>=self->size    ) {
        new_size_156=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_156)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_156;
    }
    for(    i_157=self->len    ;    i_157<len_155    ;    i_157++    ){
        self->buf[i_157]=0;
    }
    self->len=len_155;
    __result_obj__66 = self;
    return __result_obj__66;
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
struct buffer* result_158;
struct buffer* __result_obj__67;
struct buffer* __result_obj__68;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__67 = (struct buffer*)come_increment_ref_count(result_158);
        come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__67;
    }
    buffer_append_str(result_158,self);
    __result_obj__68 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

char* buffer_to_string(struct buffer* self){
void* __right_value36 = (void*)0;
char* __result_obj__69;
void* __right_value37 = (void*)0;
char* __result_obj__70;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(""))));
        (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__69;
    }
    __result_obj__70 = (char*)come_increment_ref_count(((char*)(__right_value37=__builtin_string(self->buf))));
    (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__70;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__71;
    __result_obj__71 = self->buf;
    return __result_obj__71;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_159;
struct buffer* __result_obj__72;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_159,self,sizeof(char)*len);
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_159);
    come_call_finalizer(buffer_finalize, result_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_160;
int i_161;
struct buffer* __result_obj__73;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_161=0    ;    i_161<len    ;    i_161++    ){
        buffer_append(result_160,self[i_161],strlen(self[i_161]));
    }
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__74;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(short)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__75;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_163,(char*)self,sizeof(int)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__76;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(long)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__77;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_165,(char*)self,sizeof(float)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct buffer* result_166;
struct buffer* __result_obj__78;
    result_166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_166,(char*)self,sizeof(double)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_166);
    come_call_finalizer(buffer_finalize, result_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

char* buffer_printable(struct buffer* self){
int len_167;
void* __right_value52 = (void*)0;
char* result_168;
int n_169;
int i_170;
unsigned char c_171;
char* __result_obj__79;
    len_167=self->len;
    result_168=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_167*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_169=0;
    for(    i_170=0    ;    i_170<len_167    ;    i_170++    ){
        c_171=self->buf[i_170];
        if(        (c_171>=0&&c_171<32)||c_171==127        ) {
            result_168[n_169++]=94;
            result_168[n_169++]=c_171+65-1;
        }
        else if(        c_171>127        ) {
            result_168[n_169++]=63;
        }
        else {
            result_168[n_169++]=c_171;
        }
    }
    result_168[n_169]=0;
    __result_obj__79 = (char*)come_increment_ref_count(result_168);
    (result_168 = come_decrement_ref_count(result_168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__79;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_172;
struct list$1char$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0    ;    i_172<num_value    ;    i_172++    ){
        list$1char$_push_back(self,values[i_172]);
    }
    __result_obj__81 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_173;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_174;
void* __right_value56 = (void*)0;
struct list_item$1char$* litem_175;
struct list$1char$* __result_obj__80;
    if(    self->len==0    ) {
        litem_173=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1    ) {
        litem_174=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value56=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_176;
struct list_item$1char$* prev_it_177;
    it_176=self->head;
    while(    it_176!=((void*)0)    ) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value53 = (void*)0;
void* __right_value57 = (void*)0;
struct list$1char$* __result_obj__82;
    __result_obj__82 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value57=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3330, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_178;
struct list$1char$p* __result_obj__84;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0    ;    i_178<num_value    ;    i_178++    ){
        list$1char$p_push_back(self,values[i_178]);
    }
    __result_obj__84 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_179;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_180;
void* __right_value61 = (void*)0;
struct list_item$1char$p* litem_181;
struct list$1char$p* __result_obj__83;
    if(    self->len==0    ) {
        litem_179=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1    ) {
        litem_180=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value61=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_182;
struct list_item$1char$p* prev_it_183;
    it_182=self->head;
    while(    it_182!=((void*)0)    ) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1char$p* __result_obj__85;
    __result_obj__85 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value62=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3335, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_184;
struct list$1short$* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0    ;    i_184<num_value    ;    i_184++    ){
        list$1short$_push_back(self,values[i_184]);
    }
    __result_obj__87 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_185;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_186;
void* __right_value66 = (void*)0;
struct list_item$1short$* litem_187;
struct list$1short$* __result_obj__86;
    if(    self->len==0    ) {
        litem_185=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1    ) {
        litem_186=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value66=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_188;
struct list_item$1short$* prev_it_189;
    it_188=self->head;
    while(    it_188!=((void*)0)    ) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value67 = (void*)0;
struct list$1short$* __result_obj__88;
    __result_obj__88 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value67=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3340, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_190;
struct list$1int$* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0    ;    i_190<num_value    ;    i_190++    ){
        list$1int$_push_back(self,values[i_190]);
    }
    __result_obj__90 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_191;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_192;
void* __right_value71 = (void*)0;
struct list_item$1int$* litem_193;
struct list$1int$* __result_obj__89;
    if(    self->len==0    ) {
        litem_191=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1    ) {
        litem_192=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value71=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_194;
struct list_item$1int$* prev_it_195;
    it_194=self->head;
    while(    it_194!=((void*)0)    ) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value72 = (void*)0;
struct list$1int$* __result_obj__91;
    __result_obj__91 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value72=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3345, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_196;
struct list$1long$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0    ;    i_196<num_value    ;    i_196++    ){
        list$1long$_push_back(self,values[i_196]);
    }
    __result_obj__93 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_197;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_198;
void* __right_value76 = (void*)0;
struct list_item$1long$* litem_199;
struct list$1long$* __result_obj__92;
    if(    self->len==0    ) {
        litem_197=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1    ) {
        litem_198=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value76=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_200;
struct list_item$1long$* prev_it_201;
    it_200=self->head;
    while(    it_200!=((void*)0)    ) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1long$* __result_obj__94;
    __result_obj__94 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value77=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3350, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_202;
struct list$1float$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0    ;    i_202<num_value    ;    i_202++    ){
        list$1float$_push_back(self,values[i_202]);
    }
    __result_obj__96 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_203;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_204;
void* __right_value81 = (void*)0;
struct list_item$1float$* litem_205;
struct list$1float$* __result_obj__95;
    if(    self->len==0    ) {
        litem_203=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1    ) {
        litem_204=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value81=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_206;
struct list_item$1float$* prev_it_207;
    it_206=self->head;
    while(    it_206!=((void*)0)    ) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1float$* __result_obj__97;
    __result_obj__97 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value82=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3355, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_208;
struct list$1double$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_208=0    ;    i_208<num_value    ;    i_208++    ){
        list$1double$_push_back(self,values[i_208]);
    }
    __result_obj__99 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_209;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_210;
void* __right_value86 = (void*)0;
struct list_item$1double$* litem_211;
struct list$1double$* __result_obj__98;
    if(    self->len==0    ) {
        litem_209=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_209->prev=((void*)0);
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head=litem_209;
    }
    else if(    self->len==1    ) {
        litem_210=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_210->prev=self->head;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head->next=litem_210;
    }
    else {
        litem_211=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value86=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_211->prev=self->tail;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail->next=litem_211;
        self->tail=litem_211;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_212;
struct list_item$1double$* prev_it_213;
    it_212=self->head;
    while(    it_212!=((void*)0)    ) {
        prev_it_213=it_212;
        it_212=it_212->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value87 = (void*)0;
struct list$1double$* __result_obj__100;
    __result_obj__100 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value87=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3360, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value87, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
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
char* __result_obj__101;
int len_214;
void* __right_value89 = (void*)0;
char* result_215;
char* __result_obj__102;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__101;
    }
    len_214=strlen(self)+strlen(right);
    result_215=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_214+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_215,self,len_214+1);
    strncat(result_215,right,len_214+1);
    __result_obj__102 = (char*)come_increment_ref_count(result_215);
    (result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__102;
}

char* string_operator_add(char* self, char* right){
void* __right_value90 = (void*)0;
char* __result_obj__103;
int len_216;
void* __right_value91 = (void*)0;
char* result_217;
char* __result_obj__104;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value90=__builtin_string(""))));
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    len_216=strlen(self)+strlen(right);
    result_217=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_216+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_217,self,len_216+1);
    strncat(result_217,right,len_216+1);
    __result_obj__104 = (char*)come_increment_ref_count(result_217);
    (result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* charp_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__105;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_218;
int i_219;
void* __right_value95 = (void*)0;
char* __result_obj__106;
    if(    self==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    buf_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_219=0    ;    i_219<right    ;    i_219++    ){
        buffer_append_str(buf_218,self);
    }
    __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_218))));
    come_call_finalizer(buffer_finalize, buf_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

char* string_operator_mult(char* self, int right){
void* __right_value96 = (void*)0;
char* __result_obj__107;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* buf_220;
int i_221;
void* __right_value99 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    buf_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_221=0    ;    i_221<right    ;    i_221++    ){
        buffer_append_str(buf_220,self);
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value99=buffer_to_string(buf_220))));
    come_call_finalizer(buffer_finalize, buf_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_222;
int i_223;
    result_222=(_Bool)0;
    for(    i_223=0    ;    i_223<len    ;    i_223++    ){
        if(        strncmp(self[i_223],str,strlen(self[i_223]))==0        ) {
            result_222=(_Bool)1;
            break;
        }
    }
    return result_222;
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

unsigned int string_get_hash_key(char* value){
int result_226;
char* p_227;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_226=0;
    p_227=value;
    while(    *p_227    ) {
        result_226+=(*p_227);
        p_227++;
    }
    return result_226;
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
_Bool result_228;
    result_228=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_228;
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
_Bool result_229;
    result_229=(c>=32&&c<=126);
    return result_229;
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
char* __result_obj__109;
int len_230;
void* __right_value101 = (void*)0;
char* result_231;
int i_232;
char* __result_obj__110;
    if(    str==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    len_230=strlen(str);
    result_231=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_230+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_232=0    ;    i_232<len_230    ;    i_232++    ){
        result_231[i_232]=str[len_230-i_232-1];
    }
    result_231[len_230]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_231);
    (result_231 = come_decrement_ref_count(result_231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value102 = (void*)0;
char* __result_obj__111;
int len_233;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
char* __result_obj__112;
void* __right_value105 = (void*)0;
char* __result_obj__113;
void* __right_value106 = (void*)0;
char* __result_obj__114;
void* __right_value107 = (void*)0;
char* result_234;
char* __result_obj__115;
    if(    str==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_233=strlen(str);
    if(    head<0    ) {
        head+=len_233;
    }
    if(    tail<0    ) {
        tail+=len_233+1;
    }
    if(    head>tail    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value104=charp_reverse(((char*)(__right_value103=charp_substring(str,tail,head)))))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_233    ) {
        tail=len_233;
    }
    if(    head==tail    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    if(    tail-head+1<1    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    result_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_234,str+head,tail-head);
    result_234[tail-head]=0;
    __result_obj__115 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__115;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value108 = (void*)0;
char* __result_obj__116;
int len_235;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
char* __result_obj__117;
void* __right_value111 = (void*)0;
char* __result_obj__118;
void* __right_value112 = (void*)0;
char* __result_obj__119;
void* __right_value113 = (void*)0;
char* result_236;
char* __result_obj__120;
    if(    str==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_235=strlen(str);
    if(    head<0    ) {
        head+=len_235;
    }
    if(    tail<0    ) {
        tail+=len_235+1;
    }
    if(    head>tail    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value110=charp_reverse(((char*)(__right_value109=charp_substring(str,tail,head)))))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_235    ) {
        tail=len_235;
    }
    if(    head==tail    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    if(    tail-head+1<1    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_236,str+head,tail-head);
    result_236[tail-head]=0;
    __result_obj__120 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__120;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value114 = (void*)0;
char* __result_obj__121;
int len_237;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
char* __result_obj__122;
void* __right_value117 = (void*)0;
char* __result_obj__123;
void* __right_value118 = (void*)0;
char* __result_obj__124;
void* __right_value119 = (void*)0;
char* result_238;
char* __result_obj__125;
    if(    str==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    len_237=strlen(str);
    if(    head<0    ) {
        head+=len_237;
    }
    if(    tail<0    ) {
        tail+=len_237+1;
    }
    if(    head>tail    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value116=charp_reverse(((char*)(__right_value115=charp_substring(str,tail,head)))))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_237    ) {
        tail=len_237;
    }
    if(    head==tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    tail-head+1<1    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_238,str+head,tail-head);
    result_238[tail-head]=0;
    __result_obj__125 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* xsprintf(char* msg, ...){
void* __right_value120 = (void*)0;
char* __result_obj__126;
va_list args_239;
char* result_240;
int len_241;
void* __right_value121 = (void*)0;
char* __result_obj__127;
void* __right_value122 = (void*)0;
char* result2_242;
char* __result_obj__128;
result_240 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    __builtin_va_start(args_239,msg);
    len_241=vasprintf(&result_240,msg,args_239);
    __builtin_va_end(args_239);
    if(    len_241<0    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    result2_242=(char*)come_increment_ref_count(__builtin_string(result_240));
    free(result_240);
    __result_obj__128 = (char*)come_increment_ref_count(result2_242);
    (result2_242 = come_decrement_ref_count(result2_242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value123 = (void*)0;
char* __result_obj__129;
int len_243;
void* __right_value124 = (void*)0;
char* __result_obj__130;
void* __right_value125 = (void*)0;
char* __result_obj__131;
void* __right_value126 = (void*)0;
char* result_244;
char* __result_obj__132;
    if(    str==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    len_243=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    head<0    ) {
        head+=len_243;
    }
    if(    tail<0    ) {
        tail+=len_243+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(str))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    tail>=len_243    ) {
        tail=len_243;
    }
    result_244=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_243-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_244,str,head);
    memcpy(result_244+head,str+tail,len_243-tail);
    result_244[len_243-(tail-head)]=0;
    __result_obj__132 = (char*)come_increment_ref_count(result_244);
    (result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__133;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__133 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_245;
struct list_item$1char$ph* prev_it_246;
    it_245=self->head;
    while(    it_245!=((void*)0)    ) {
        prev_it_246=it_245;
        it_245=it_245->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_250;
char* __dec_obj13;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_251;
char* __dec_obj14;
void* __right_value135 = (void*)0;
struct list_item$1char$ph* litem_252;
char* __dec_obj15;
struct list$1char$ph* __result_obj__135;
    if(    self->len==0    ) {
        litem_250=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_250->prev=((void*)0);
        litem_250->next=((void*)0);
        __dec_obj13=litem_250->item,
        litem_250->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_250;
        self->head=litem_250;
    }
    else if(    self->len==1    ) {
        litem_251=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_251->prev=self->head;
        litem_251->next=((void*)0);
        __dec_obj14=litem_251->item,
        litem_251->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_251;
        self->head->next=litem_251;
    }
    else {
        litem_252=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value135=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_252->prev=self->tail;
        litem_252->next=((void*)0);
        __dec_obj15=litem_252->item,
        litem_252->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_252;
        self->tail=litem_252;
    }
    self->len++;
    __result_obj__135 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__135;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1char$ph* __result_obj__134;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* result_247;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct buffer* str_248;
int i_249;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct list$1char$ph* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__134 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value128=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__134;
    }
    result_247=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_248=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_249=0    ;    i_249<charp_length(self)    ;    i_249++    ){
        if(        self[i_249]==c        ) {
            list$1char$ph_push_back(result_247,(char*)come_increment_ref_count(__builtin_string(str_248->buf)));
            buffer_reset(str_248);
        }
        else {
            buffer_append_char(str_248,self[i_249]);
        }
    }
    if(    buffer_length(str_248)!=0    ) {
        list$1char$ph_push_back(result_247,(char*)come_increment_ref_count(__builtin_string(str_248->buf)));
    }
    __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(result_247);
    come_call_finalizer(list$1char$ph$p_finalize, result_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value139 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value139=xsprintf(msg,self))));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_printable(char* str){
int len_253;
void* __right_value140 = (void*)0;
char* result_254;
int n_255;
int i_256;
char c_257;
char* __result_obj__139;
    len_253=charp_length(str);
    result_254=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_253*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_255=0;
    for(    i_256=0    ;    i_256<len_253    ;    i_256++    ){
        c_257=str[i_256];
        if(        (c_257>=0&&c_257<32)||c_257==127        ) {
            result_254[n_255++]=94;
            result_254[n_255++]=c_257+65-1;
        }
        else {
            result_254[n_255++]=c_257;
        }
    }
    result_254[n_255]=0;
    __result_obj__139 = (char*)come_increment_ref_count(result_254);
    (result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value141 = (void*)0;
char* __result_obj__140;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* result_258;
char* p_259;
char* p2_260;
void* __right_value144 = (void*)0;
char* __result_obj__141;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(self))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    result_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_259=self;
    while(    (_Bool)1    ) {
        p2_260=strstr(p_259,str);
        if(        p2_260==((void*)0)        ) {
            p2_260=p_259;
            while(            *p2_260            ) {
                p2_260++;
            }
            buffer_append(result_258,p_259,p2_260-p_259);
            break;
        }
        buffer_append(result_258,p_259,p2_260-p_259);
        buffer_append_str(result_258,replace);
        p_259=p2_260+strlen(str);
    }
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value144=buffer_to_string(result_258))));
    come_call_finalizer(buffer_finalize, result_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* xbasename(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__142;
char* p_261;
void* __right_value146 = (void*)0;
char* __result_obj__143;
void* __right_value147 = (void*)0;
char* __result_obj__144;
void* __right_value148 = (void*)0;
char* __result_obj__145;
    if(    path==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    p_261=path+strlen(path);
    while(    p_261>=path    ) {
        if(        *p_261==47        ) {
            break;
        }
        else {
            p_261--;
        }
    }
    if(    p_261<path    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    else {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(p_261+1))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* xnoextname(char* path){
void* __right_value149 = (void*)0;
char* __result_obj__146;
void* __right_value150 = (void*)0;
char* path2_262;
char* p_263;
void* __right_value151 = (void*)0;
char* __result_obj__147;
void* __right_value152 = (void*)0;
char* __result_obj__148;
void* __right_value153 = (void*)0;
char* __result_obj__149;
    if(    path==((void*)0)    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    path2_262=(char*)come_increment_ref_count(xbasename(path));
    p_263=path2_262+strlen(path2_262);
    while(    p_263>=path2_262    ) {
        if(        *p_263==46        ) {
            break;
        }
        else {
            p_263--;
        }
    }
    if(    p_263<path2_262    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path2_262))));
        (path2_262 = come_decrement_ref_count(path2_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    else {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value152=charp_substring(path2_262,0,p_263-path2_262))));
        (path2_262 = come_decrement_ref_count(path2_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (path2_262 = come_decrement_ref_count(path2_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* xextname(char* path){
void* __right_value154 = (void*)0;
char* __result_obj__150;
char* p_264;
void* __right_value155 = (void*)0;
char* __result_obj__151;
void* __right_value156 = (void*)0;
char* __result_obj__152;
void* __right_value157 = (void*)0;
char* __result_obj__153;
    if(    path==((void*)0)    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    p_264=path+strlen(path);
    while(    p_264>=path    ) {
        if(        *p_264==46        ) {
            break;
        }
        else {
            p_264--;
        }
    }
    if(    p_264<path    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(path))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    else {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(p_264+1))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* bool_to_string(_Bool self){
void* __right_value158 = (void*)0;
char* __result_obj__154;
void* __right_value159 = (void*)0;
char* __result_obj__155;
    if(    self    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("true"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("false"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value160 = (void*)0;
char* __result_obj__156;
void* __right_value161 = (void*)0;
char* __result_obj__157;
    if(    self    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("true"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string("false"))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
}

char* char_to_string(char self){
void* __right_value162 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%c",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* short_to_string(short self){
void* __right_value163 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* int_to_string(int self){
void* __right_value164 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%d",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* long_to_string(long self){
void* __right_value165 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value166 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%ld",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* float_to_string(float self){
void* __right_value167 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%f",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* double_to_string(double self){
void* __right_value168 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value168=xsprintf("%lf",self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* string_to_string(char* self){
void* __right_value169 = (void*)0;
char* __result_obj__165;
void* __right_value170 = (void*)0;
char* __result_obj__166;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* charp_to_string(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__167;
void* __right_value172 = (void*)0;
char* __result_obj__168;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
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
char* __result_obj__169;
void* __right_value174 = (void*)0;
char* __result_obj__170;
    if(    self==((void*)0)    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    puts(self);
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_print(char* self){
void* __right_value175 = (void*)0;
char* __result_obj__171;
void* __right_value176 = (void*)0;
char* __result_obj__172;
    if(    self==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    printf("%s",self);
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(self))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_printf(char* self, ...){
void* __right_value177 = (void*)0;
char* __result_obj__173;
char* msg2_265;
va_list args_267;
int len_268;
void* __right_value178 = (void*)0;
char* __result_obj__174;
msg2_265 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    char msg2_266[128];
    memset(&msg2_266, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_267,self);
    len_268=snprintf(msg2_266,128,self,args_267);
    __builtin_va_end(args_267);
    printf("%s",msg2_266);
    free(msg2_266);
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(self))));
    (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_269;
    for(    i_269=0    ;    i_269<self    ;    i_269++    ){
        block(parent,i_269);
    }
}

