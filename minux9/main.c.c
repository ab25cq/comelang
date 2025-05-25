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
typedef unsigned long  long pte_t;

typedef unsigned long  long* pagetable_t;

struct proc
{
    struct context context;
    struct proc* parent;
    char* stack;
    unsigned long  long* pagetable;
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
void putchar(int c);
void puts(const char* s);
void user_mmu_init(unsigned long  long* user_pagetable);
struct proc* alloc_proc(void (*task)());
void load_context(struct context* anonymous_var_nameX33);
void save_context(struct context* anonymous_var_nameX34);
void reset_watchdog();
void putc(char c);
void enable_mmu(unsigned long  long* kernel_pagetable);
void yield();
void task1();
void task2();
void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);
void plic_enable(int irq);
void mmu_init();
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
    user_mmu_init(result_1->pagetable);
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
    enable_mmu(p->pagetable);
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
    mmu_init();
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
char* __result_obj__19;
os_25 = (void*)0;
    os_25=s;
    if(    n<=0    ) {
        __result_obj__18 = os_25;
        return __result_obj__18;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__19 = os_25;
    return __result_obj__19;
}

int strlen(const char* s){
int n_26;
memset(&n_26, 0, sizeof(int));
    for(    n_26=0    ;    s[n_26]    ;    n_26++    ){
        ;
    }
    return n_26;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_27;
char* __result_obj__20;
    d_27=dest;
    while(    *d_27    ) {
        d_27++;
    }
    while(    n--&&*src    ) {
        *d_27++=*src++;
    }
    *d_27=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_28;
int i_30;
int negative_31;
char* __result_obj__21;
int digit_32;
char* __result_obj__22;
    p_28=buf;
    char tmp_29[32];
    memset(&tmp_29, 0, sizeof(char)    *(32)    );
    i_30=0;
    negative_31=0;
    if(    base<2||base>16    ) {
        *p_28=0;
        __result_obj__21 = p_28;
        return __result_obj__21;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_31=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_32=val_%base;
        tmp_29[i_30++]=(((digit_32<10))?(48+digit_32):(97+digit_32-10));
        val_/=base;
    } while(    val_    );
    if(    negative_31    ) {
        *p_28++=45;
    }
    while(    i_30--    ) {
        *p_28++=tmp_29[i_30];
    }
    *p_28=0;
    __result_obj__22 = buf;
    return __result_obj__22;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_34;
const char* s_35;
unsigned long  int remaining_37;
s_35 = (void*)0;
    char out2_33[512];
    memset(&out2_33, 0, sizeof(char)    *(512)    );
    p_34=out2_33;
    char buf_36[32];
    memset(&buf_36, 0, sizeof(char)    *(32)    );
    remaining_37=sizeof(out2_33);
    for(    ;    *fmt&&remaining_37>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_34++=*fmt;
            remaining_37--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_36,__builtin_va_arg(ap,int),10,1);
            s_35=buf_36;
            break;
            case 117:
            itoa(buf_36,__builtin_va_arg(ap,unsigned int),10,0);
            s_35=buf_36;
            break;
            case 120:
            itoa(buf_36,__builtin_va_arg(ap,unsigned int),16,0);
            s_35=buf_36;
            break;
            case 115:
            s_35=__builtin_va_arg(ap,const char*);
            if(            !s_35            ) {
                s_35="(null)";
            }
            break;
            case 99:
            buf_36[0]=(char)__builtin_va_arg(ap,int);
            buf_36[1]=0;
            s_35=buf_36;
            break;
            case 112:
            strncpy(buf_36,"0x",32);
            itoa(buf_36+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_35=buf_36;
            break;
            case 37:
            buf_36[0]=37;
            buf_36[1]=0;
            s_35=buf_36;
            break;
            default:
            buf_36[0]=37;
            buf_36[1]=*fmt;
            buf_36[2]=0;
            s_35=buf_36;
            break;
        }
        while(        *s_35&&remaining_37>1        ) {
            *p_34++=*s_35++;
            remaining_37--;
        }
    }
    *p_34=0;
    *out=strdup(out2_33);
    return p_34-out2_33;
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

void printint(int val_, int base, int sign){
int i_49;
int negative_50;
unsigned int uval_51;
int digit_52;
memset(&uval_51, 0, sizeof(unsigned int));
    char buf_48[33];
    memset(&buf_48, 0, sizeof(char)    *(33)    );
    i_49=0;
    negative_50=0;
    if(    sign&&val_<0    ) {
        negative_50=1;
        uval_51=-val_;
    }
    else {
        uval_51=(unsigned int)val_;
    }
    if(    uval_51==0    ) {
        putchar(48);
        return;
    }
    while(    uval_51>0    ) {
        digit_52=uval_51%base;
        buf_48[i_49++]=((digit_52<10)?(48+digit_52):(97+(digit_52-10)));
        uval_51/=base;
    }
    if(    negative_50    ) {
        putchar(45);
    }
    while(    --i_49>=0    ) {
        putchar(buf_48[i_49]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_54;
int negative_55;
int digit_56;
    char buf_53[65];
    memset(&buf_53, 0, sizeof(char)    *(65)    );
    i_54=0;
    negative_55=0;
    if(    sign&&(long)val_<0    ) {
        negative_55=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_56=val_%base;
        buf_53[i_54++]=((digit_56<10)?(48+digit_56):(97+(digit_56-10)));
        val_/=base;
    }
    if(    negative_55    ) {
        putchar(45);
    }
    while(    --i_54>=0    ) {
        putchar(buf_53[i_54]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_58;
int negative_59;
int digit_60;
    char buf_57[65];
    memset(&buf_57, 0, sizeof(char)    *(65)    );
    i_58=0;
    negative_59=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_59=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_60=val_%base;
        buf_57[i_58++]=((digit_60<10)?(48+digit_60):(97+(digit_60-10)));
        val_/=base;
    }
    if(    negative_59    ) {
        putchar(45);
    }
    while(    --i_58>=0    ) {
        putchar(buf_57[i_58]);
    }
}

int printf(const char* fmt, ...){
va_list ap_61;
const char* p_62;
int lcount_63;
unsigned long  int val__64;
unsigned long  long val__65;
long val__66;
long long val__67;
int i_68;
int val__69;
unsigned int val__70;
unsigned long  int val__71;
char c_73;
memset(&ap_61, 0, sizeof(va_list));
p_62 = (void*)0;
    __builtin_va_start(ap_61,fmt);
    for(    p_62=fmt    ;    *p_62    ;    p_62++    ){
        if(        *p_62!=37        ) {
            putchar(*p_62);
            continue;
        }
        p_62++;
        if(        *p_62==108        ) {
            lcount_63=1;
            if(            *(p_62+1)==108            ) {
                lcount_63=2;
                p_62++;
            }
            p_62++;
            switch (            *p_62) {
                case 120:
                {
                    if(                    lcount_63==1                    ) {
                        val__64=__builtin_va_arg(ap_61,unsigned long  int);
                        printlong(val__64,16,0);
                    }
                    else {
                        val__65=__builtin_va_arg(ap_61,unsigned long  long);
                        printlonglong(val__65,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_63==1                    ) {
                        val__66=__builtin_va_arg(ap_61,long);
                        printlong(val__66,10,1);
                    }
                    else {
                        val__67=__builtin_va_arg(ap_61,long  long);
                        printlonglong(val__67,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_68=0                    ;                    i_68<lcount_63                    ;                    i_68++                    ){
                        putchar(108);
                    }
                    putchar(*p_62);
                    break;
                }
            }
        }
        else {
            switch (            *p_62) {
                case 100:
                {
                    val__69=__builtin_va_arg(ap_61,int);
                    printint(val__69,10,1);
                    break;
                }
                case 120:
                {
                    val__70=__builtin_va_arg(ap_61,unsigned int);
                    printint(val__70,16,0);
                    break;
                }
                case 112:
                {
                    val__71=(unsigned long  int)__builtin_va_arg(ap_61,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__71,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_72=__builtin_va_arg(ap_61,const char*);
                    if(                    !s_72                    ) {
                        s_72="(null)";
                    }
                    while(                    *s_72                    ) {
                        putchar(*s_72++);
                    }
                    break;
                }
                case 99:
                {
                    c_73=(char)__builtin_va_arg(ap_61,int);
                    putchar(c_73);
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
                    putchar(*p_62);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_61);
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
char* result_74;
char* __result_obj__23;
    result_74=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__23 = (char*)come_increment_ref_count(result_74);
    (result_74 = come_decrement_ref_count(result_74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__23 = come_decrement_ref_count(__result_obj__23, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__23;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_75;
void* __result_obj__24;
    result_75=come_calloc(count,size,sname,sline,class_name);
    __result_obj__24 = result_75;
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
struct buffer* buf_76;
int i_77;
void* __right_value7 = (void*)0;
    buf_76=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_76,"%s %d\n",sname,sline);
    for(    i_77=gNumComeStackFrame-2    ;    i_77>=0    ;    i_77--    ){
        buffer_append_format(buf_76,"%s %d #%d\n",gComeStackFrameSName[i_77],gComeStackFrameSLine[i_77],gComeStackFrameID[i_77]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value7=buffer_to_string(buf_76))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_78;
    for(    i_78=gNumComeStackFrame-1    ;    i_78>=0    ;    i_78--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_78],gComeStackFrameSLine[i_78],gComeStackFrameID[i_78]);
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
int i_79;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_79=0    ;    i_79<gHeapPages.mSizePages    ;    i_79++    ){
        gHeapPages.mPages[i_79]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_80;
int n_81;
_Bool flag_82;
int i_83;
struct sMemHeaderTiny* it_84;
int n_85;
int i_86;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_80=gAllocMem;
        n_81=0;
        while(        it_80        ) {
            n_81++;
            flag_82=(_Bool)0;
            printf("#%d ",n_81);
            if(            it_80->class_name            ) {
                printf("%p (%s): ",(char*)it_80+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_80->class_name);
            }
            for(            i_83=0            ;            i_83<16            ;            i_83++            ){
                if(                it_80->sname[i_83]                ) {
                    printf("%s %d #%d, ",it_80->sname[i_83],it_80->sline[i_83],it_80->id[i_83]);
                    flag_82=(_Bool)1;
                }
            }
            if(            flag_82            ) {
                puts("");
            }
            it_80=it_80->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_81,gNumAlloc,gNumFree);
    }
    else {
        it_84=(struct sMemHeaderTiny*)gAllocMem;
        n_85=0;
        while(        it_84        ) {
            n_85++;
            if(            it_84->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_85,(char*)it_84+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_84->class_name,it_84->sname,it_84->sline);
            }
            it_84=it_84->next;
        }
        if(        n_85>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_85,gNumAlloc,gNumFree);
        }
    }
    for(    i_86=0    ;    i_86<gHeapPages.mSizePages    ;    i_86++    ){
        free(gHeapPages.mPages[i_86]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_87;
void* __result_obj__26;
    result_87=((void*)0);
    size=(size+7&~7);
    result_87=calloc(1,size);
    __result_obj__26 = result_87;
    return __result_obj__26;
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
        if(        gComeDebugLib        ) {
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
            free(it_88);
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
            free(it_92);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_96;
struct sMemHeader* it_97;
int i_98;
int i_99;
void* __result_obj__27;
void* result_100;
struct sMemHeaderTiny* it_101;
void* __result_obj__28;
memset(&i_98, 0, sizeof(int));
memset(&i_99, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_96=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_97=result_96;
        it_97->allocated=177783;
        it_97->size=size+sizeof(struct sMemHeader);
        it_97->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_98=0            ;            i_98<gNumComeStackFrame            ;            i_98++            ){
                it_97->sname[i_98]=gComeStackFrameSName[i_98];
                it_97->sline[i_98]=gComeStackFrameSLine[i_98];
                it_97->id[i_98]=gComeStackFrameID[i_98];
            }
        }
        else {
            for(            i_99=0            ;            i_99<16            ;            i_99++            ){
                it_97->sname[i_99]=gComeStackFrameSName[gNumComeStackFrame-1-i_99];
                it_97->sline[i_99]=gComeStackFrameSLine[gNumComeStackFrame-1-i_99];
                it_97->id[i_99]=gComeStackFrameID[gNumComeStackFrame-1-i_99];
            }
        }
        come_pop_stackframe_v2();
        it_97->next=gAllocMem;
        it_97->prev=((void*)0);
        it_97->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_97;
        }
        gAllocMem=it_97;
        gNumAlloc++;
        __result_obj__27 = (char*)result_96+sizeof(struct sMemHeader);
        return __result_obj__27;
    }
    else {
        result_100=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_101=result_100;
        it_101->allocated=177783;
        it_101->class_name=class_name;
        it_101->sname=sname;
        it_101->sline=sline;
        it_101->size=size+sizeof(struct sMemHeaderTiny);
        it_101->free_next=((void*)0);
        it_101->next=(struct sMemHeaderTiny*)gAllocMem;
        it_101->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_101;
        }
        gAllocMem=(struct sMemHeader*)it_101;
        gNumAlloc++;
        __result_obj__28 = (char*)result_100+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_102;
char* __result_obj__29;
struct sMemHeaderTiny* it_103;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_102=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_102->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_102);
            exit(2);
        }
        __result_obj__29 = it_102->class_name;
        return __result_obj__29;
    }
    else {
        it_103=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_103->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_103);
            exit(2);
        }
        __result_obj__30 = it_103->class_name;
        return __result_obj__30;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_104;
int i_105;
struct sMemHeaderTiny* it_106;
    if(    gComeDebugLib    ) {
        it_104=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_104->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_104->class_name        ) {
            printf("(%s): ",it_104->class_name);
        }
        for(        i_105=0        ;        i_105<16        ;        i_105++        ){
            if(            it_104->sname[i_105]            ) {
                printf("%s %d #%d, ",it_104->sname[i_105],it_104->sline[i_105],it_104->id[i_105]);
            }
        }
        puts("");
    }
    else {
        it_106=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_106->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_106->class_name,it_106->sname,it_106->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_107;
unsigned long  int* ref_count_108;
unsigned long  int* size2_109;
void* __result_obj__31;
    mem_107=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_108=(unsigned long  int*)mem_107;
    *ref_count_108=0;
    size2_109=(unsigned long  int*)(mem_107+sizeof(unsigned long  int));
    *size2_109=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_107+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_110;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_110);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_111;
unsigned long  int* size_p_112;
unsigned long  int size_113;
void* result_114;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_111=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_112=(unsigned long  int*)(mem_111+sizeof(unsigned long  int));
    size_113=*size_p_112-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_114=come_calloc_v2(1,size_113,sname,sline,class_name);
    memcpy(result_114,block,size_113);
    __result_obj__33 = result_114;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_115;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_115=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_115)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_116;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_116=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_116);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_117;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_117;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_118;
unsigned long  int count_119;
void (*finalizer_120)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_120, 0, sizeof(void (*)(void*)));
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
    ref_count_118=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_118)--;
    }
    count_119=*ref_count_118;
    if(    !no_free&&count_119<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_120=protocol_fun;
            finalizer_120(protocol_obj);
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
void (*finalizer_121)(void*);
void (*finalizer_122)(void*);
void (*finalizer_123)(void*);
unsigned long  int* ref_count_124;
unsigned long  int count_125;
void (*finalizer_126)(void*);
void (*finalizer_127)(void*);
void (*finalizer_128)(void*);
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
memset(&finalizer_126, 0, sizeof(void (*)(void*)));
memset(&finalizer_127, 0, sizeof(void (*)(void*)));
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
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
                finalizer_121=protocol_fun;
                finalizer_121(protocol_obj);
            }
            finalizer_122=fun;
            finalizer_122(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_123=protocol_fun;
                finalizer_123(protocol_obj);
            }
        }
    }
    else {
        ref_count_124=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_124)--;
        }
        count_125=*ref_count_124;
        if(        !no_free&&count_125<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_126=protocol_fun;
                        finalizer_126(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_127=fun;
                        finalizer_127(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_128=protocol_fun;
                        finalizer_128(protocol_obj);
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
int len_129;
void* __right_value9 = (void*)0;
char* result_130;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_129=strlen(str)+1;
    result_130=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_129)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_130,str,len_129);
    __result_obj__43 = (char*)come_increment_ref_count(result_130);
    (result_130 = come_decrement_ref_count(result_130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct buffer* result_131;
void* __right_value13 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__47;
    if(    self==((void*)0)    ) {
        __result_obj__46 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__46;
    }
    result_131=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_131->size=self->size;
    __dec_obj3=result_131->buf,
    result_131->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_131->len=self->len;
    memcpy(result_131->buf,self->buf,self->len);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result_131);
    come_call_finalizer(buffer_finalize, result_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_132;
int old_len_133;
int new_size_134;
void* __right_value17 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__50;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_132,self->buf,self->size);
        old_len_133=self->len;
        new_size_134=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_134)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_132,old_len_133);
        self->buf[old_len_133]=0;
        self->size=new_size_134;
        (old_buf_132 = come_decrement_ref_count(old_buf_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value19 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__52;
    if(    self==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_136=self->len;
        new_size_137=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_137)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__53;
int size_138;
void* __right_value20 = (void*)0;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* __right_value21 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__54;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    size_138=strlen(mem);
    if(    self->len+size_138+1+1>=self->size    ) {
        old_buf_139=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size_138+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_141)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        (old_buf_139 = come_decrement_ref_count(old_buf_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_138);
    self->len+=size_138;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__55;
va_list args_143;
int len_144;
void* __right_value22 = (void*)0;
char* mem_145;
int size_146;
void* __right_value23 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value24 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    char result_142[128];
    memset(&result_142, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_143,msg);
    snprintf(result_142,128,args_143);
    __builtin_va_end(args_143);
    len_144=strlen(result_142);
    mem_145=(char*)come_increment_ref_count(__builtin_string(result_142));
    size_146=strlen(mem_145);
    if(    self->len+size_146+1+1>=self->size    ) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_145,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    free(result_142);
    __result_obj__56 = self;
    (mem_145 = come_decrement_ref_count(mem_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__56;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__57;
int size_150;
void* __right_value25 = (void*)0;
char* old_buf_151;
int old_len_152;
int new_size_153;
void* __right_value26 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__58;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    size_150=strlen(mem)+1;
    if(    self->len+size_150+1+1+1>=self->size    ) {
        old_buf_151=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_151,self->buf,self->size);
        old_len_152=self->len;
        new_size_153=(self->size+size_150+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_153)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_151,old_len_152);
        self->buf[old_len_152]=0;
        self->size=new_size_153;
        (old_buf_151 = come_decrement_ref_count(old_buf_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_150);
    self->len+=size_150;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__59;
int* mem_154;
int size_155;
void* __right_value27 = (void*)0;
char* old_buf_156;
int old_len_157;
int new_size_158;
void* __right_value28 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    mem_154=&value;
    size_155=sizeof(int);
    if(    self->len+size_155+1+1>=self->size    ) {
        old_buf_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_156,self->buf,self->size);
        old_len_157=self->len;
        new_size_158=(self->size+size_155+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_158)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_156,old_len_157);
        self->buf[old_len_157]=0;
        self->size=new_size_158;
        (old_buf_156 = come_decrement_ref_count(old_buf_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_154,size_155);
    self->len+=size_155;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_159;
int size_160;
void* __right_value29 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value30 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__61;
    mem_159=&value;
    size_160=sizeof(long);
    if(    self->len+size_160+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_161,self->buf,self->size);
        old_len_162=self->len;
        new_size_163=(self->size+size_160+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_159,size_160);
    self->len+=size_160;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__62;
short* mem_164;
int size_165;
void* __right_value31 = (void*)0;
char* old_buf_166;
int old_len_167;
int new_size_168;
void* __right_value32 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_164=&value;
    size_165=sizeof(short);
    if(    self->len+size_165+1+1>=self->size    ) {
        old_buf_166=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_166,self->buf,self->size);
        old_len_167=self->len;
        new_size_168=(self->size+size_165+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_168)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_166,old_len_167);
        self->buf[old_len_167]=0;
        self->size=new_size_168;
        (old_buf_166 = come_decrement_ref_count(old_buf_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_164,size_165);
    self->len+=size_165;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__64;
int len_169;
int new_size_170;
void* __right_value33 = (void*)0;
char* __dec_obj12;
int i_171;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    len_169=self->len;
    len_169=(len_169+3)&~3;
    if(    len_169>=self->size    ) {
        new_size_170=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_170)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_170;
    }
    for(    i_171=self->len    ;    i_171<len_169    ;    i_171++    ){
        self->buf[i_171]=0;
    }
    self->len=len_169;
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
struct buffer* result_172;
struct buffer* __result_obj__66;
struct buffer* __result_obj__67;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__66 = (struct buffer*)come_increment_ref_count(result_172);
        come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__66;
    }
    buffer_append_str(result_172,self);
    __result_obj__67 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_173;
struct buffer* __result_obj__71;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_173,self,sizeof(char)*len);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_174;
int i_175;
struct buffer* __result_obj__72;
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_175=0    ;    i_175<len    ;    i_175++    ){
        buffer_append(result_174,self[i_175],strlen(self[i_175]));
    }
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_176;
struct buffer* __result_obj__73;
    result_176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_176,(char*)self,sizeof(short)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_176);
    come_call_finalizer(buffer_finalize, result_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_177;
struct buffer* __result_obj__74;
    result_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_177,(char*)self,sizeof(int)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_177);
    come_call_finalizer(buffer_finalize, result_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_178;
struct buffer* __result_obj__75;
    result_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_178,(char*)self,sizeof(long)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_178);
    come_call_finalizer(buffer_finalize, result_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct buffer* result_179;
struct buffer* __result_obj__76;
    result_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_179,(char*)self,sizeof(float)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_179);
    come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct buffer* result_180;
struct buffer* __result_obj__77;
    result_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_180,(char*)self,sizeof(double)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_180);
    come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

char* buffer_printable(struct buffer* self){
int len_181;
void* __right_value52 = (void*)0;
char* result_182;
int n_183;
int i_184;
unsigned char c_185;
char* __result_obj__78;
    len_181=self->len;
    result_182=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_181*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_183=0;
    for(    i_184=0    ;    i_184<len_181    ;    i_184++    ){
        c_185=self->buf[i_184];
        if(        (c_185>=0&&c_185<32)||c_185==127        ) {
            result_182[n_183++]=94;
            result_182[n_183++]=c_185+65-1;
        }
        else if(        c_185>127        ) {
            result_182[n_183++]=63;
        }
        else {
            result_182[n_183++]=c_185;
        }
    }
    result_182[n_183]=0;
    __result_obj__78 = (char*)come_increment_ref_count(result_182);
    (result_182 = come_decrement_ref_count(result_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_186;
struct list$1char$* __result_obj__80;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0    ;    i_186<num_value    ;    i_186++    ){
        list$1char$_push_back(self,values[i_186]);
    }
    __result_obj__80 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_187;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_188;
void* __right_value56 = (void*)0;
struct list_item$1char$* litem_189;
struct list$1char$* __result_obj__79;
    if(    self->len==0    ) {
        litem_187=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1    ) {
        litem_188=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value56=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__79 = self;
    return __result_obj__79;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_190;
struct list_item$1char$* prev_it_191;
    it_190=self->head;
    while(    it_190!=((void*)0)    ) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_192;
struct list$1char$p* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0    ;    i_192<num_value    ;    i_192++    ){
        list$1char$p_push_back(self,values[i_192]);
    }
    __result_obj__83 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_193;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_194;
void* __right_value61 = (void*)0;
struct list_item$1char$p* litem_195;
struct list$1char$p* __result_obj__82;
    if(    self->len==0    ) {
        litem_193=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1    ) {
        litem_194=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value61=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_196;
struct list_item$1char$p* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)    ) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_198;
struct list$1short$* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0    ;    i_198<num_value    ;    i_198++    ){
        list$1short$_push_back(self,values[i_198]);
    }
    __result_obj__86 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_199;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_200;
void* __right_value66 = (void*)0;
struct list_item$1short$* litem_201;
struct list$1short$* __result_obj__85;
    if(    self->len==0    ) {
        litem_199=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1    ) {
        litem_200=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value66=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_202;
struct list_item$1short$* prev_it_203;
    it_202=self->head;
    while(    it_202!=((void*)0)    ) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_204;
struct list$1int$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0    ;    i_204<num_value    ;    i_204++    ){
        list$1int$_push_back(self,values[i_204]);
    }
    __result_obj__89 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_205;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_206;
void* __right_value71 = (void*)0;
struct list_item$1int$* litem_207;
struct list$1int$* __result_obj__88;
    if(    self->len==0    ) {
        litem_205=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1    ) {
        litem_206=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value71=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_208;
struct list_item$1int$* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_210;
struct list$1long$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0    ;    i_210<num_value    ;    i_210++    ){
        list$1long$_push_back(self,values[i_210]);
    }
    __result_obj__92 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_211;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_212;
void* __right_value76 = (void*)0;
struct list_item$1long$* litem_213;
struct list$1long$* __result_obj__91;
    if(    self->len==0    ) {
        litem_211=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1    ) {
        litem_212=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value76=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_214;
struct list_item$1long$* prev_it_215;
    it_214=self->head;
    while(    it_214!=((void*)0)    ) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_216;
struct list$1float$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0    ;    i_216<num_value    ;    i_216++    ){
        list$1float$_push_back(self,values[i_216]);
    }
    __result_obj__95 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_217;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_218;
void* __right_value81 = (void*)0;
struct list_item$1float$* litem_219;
struct list$1float$* __result_obj__94;
    if(    self->len==0    ) {
        litem_217=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1    ) {
        litem_218=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value81=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_220;
struct list_item$1float$* prev_it_221;
    it_220=self->head;
    while(    it_220!=((void*)0)    ) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_222;
struct list$1double$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_222=0    ;    i_222<num_value    ;    i_222++    ){
        list$1double$_push_back(self,values[i_222]);
    }
    __result_obj__98 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_223;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_224;
void* __right_value86 = (void*)0;
struct list_item$1double$* litem_225;
struct list$1double$* __result_obj__97;
    if(    self->len==0    ) {
        litem_223=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1    ) {
        litem_224=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value86=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_226;
struct list_item$1double$* prev_it_227;
    it_226=self->head;
    while(    it_226!=((void*)0)    ) {
        prev_it_227=it_226;
        it_226=it_226->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_228;
void* __right_value89 = (void*)0;
char* result_229;
char* __result_obj__101;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    len_228=strlen(self)+strlen(right);
    result_229=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_228+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_229,self,len_228+1);
    strncat(result_229,right,len_228+1);
    __result_obj__101 = (char*)come_increment_ref_count(result_229);
    (result_229 = come_decrement_ref_count(result_229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

char* string_operator_add(char* self, char* right){
void* __right_value90 = (void*)0;
char* __result_obj__102;
int len_230;
void* __right_value91 = (void*)0;
char* result_231;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value90=__builtin_string(""))));
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_230=strlen(self)+strlen(right);
    result_231=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_230+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_231,self,len_230+1);
    strncat(result_231,right,len_230+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_231);
    (result_231 = come_decrement_ref_count(result_231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* charp_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__104;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_232;
int i_233;
void* __right_value95 = (void*)0;
char* __result_obj__105;
    if(    self==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    buf_232=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_233=0    ;    i_233<right    ;    i_233++    ){
        buffer_append_str(buf_232,self);
    }
    __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_232))));
    come_call_finalizer(buffer_finalize, buf_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_mult(char* self, int right){
void* __right_value96 = (void*)0;
char* __result_obj__106;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* buf_234;
int i_235;
void* __right_value99 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_234=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_235=0    ;    i_235<right    ;    i_235++    ){
        buffer_append_str(buf_234,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value99=buffer_to_string(buf_234))));
    come_call_finalizer(buffer_finalize, buf_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_236;
int i_237;
    result_236=(_Bool)0;
    for(    i_237=0    ;    i_237<len    ;    i_237++    ){
        if(        strncmp(self[i_237],str,strlen(self[i_237]))==0        ) {
            result_236=(_Bool)1;
            break;
        }
    }
    return result_236;
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
int result_238;
char* p_239;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_238=0;
    p_239=value;
    while(    *p_239    ) {
        result_238+=(*p_239);
        p_239++;
    }
    return result_238;
}

unsigned int string_get_hash_key(char* value){
int result_240;
char* p_241;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_240=0;
    p_241=value;
    while(    *p_241    ) {
        result_240+=(*p_241);
        p_241++;
    }
    return result_240;
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
_Bool result_242;
    result_242=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_242;
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
_Bool result_243;
    result_243=(c>=32&&c<=126);
    return result_243;
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
int len_244;
void* __right_value101 = (void*)0;
char* result_245;
int i_246;
char* __result_obj__109;
    if(    str==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    len_244=strlen(str);
    result_245=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_244+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_246=0    ;    i_246<len_244    ;    i_246++    ){
        result_245[i_246]=str[len_244-i_246-1];
    }
    result_245[len_244]=0;
    __result_obj__109 = (char*)come_increment_ref_count(result_245);
    (result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value102 = (void*)0;
char* __result_obj__110;
int len_247;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
char* __result_obj__111;
void* __right_value105 = (void*)0;
char* __result_obj__112;
void* __right_value106 = (void*)0;
char* __result_obj__113;
void* __right_value107 = (void*)0;
char* result_248;
char* __result_obj__114;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_247=strlen(str);
    if(    head<0    ) {
        head+=len_247;
    }
    if(    tail<0    ) {
        tail+=len_247+1;
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
    if(    tail>=len_247    ) {
        tail=len_247;
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
    result_248=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_248,str+head,tail-head);
    result_248[tail-head]=0;
    __result_obj__114 = (char*)come_increment_ref_count(result_248);
    (result_248 = come_decrement_ref_count(result_248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value108 = (void*)0;
char* __result_obj__115;
int len_249;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
char* __result_obj__116;
void* __right_value111 = (void*)0;
char* __result_obj__117;
void* __right_value112 = (void*)0;
char* __result_obj__118;
void* __right_value113 = (void*)0;
char* result_250;
char* __result_obj__119;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_249=strlen(str);
    if(    head<0    ) {
        head+=len_249;
    }
    if(    tail<0    ) {
        tail+=len_249+1;
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
    if(    tail>=len_249    ) {
        tail=len_249;
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
    result_250=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_250,str+head,tail-head);
    result_250[tail-head]=0;
    __result_obj__119 = (char*)come_increment_ref_count(result_250);
    (result_250 = come_decrement_ref_count(result_250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value114 = (void*)0;
char* __result_obj__120;
int len_251;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
char* __result_obj__121;
void* __right_value117 = (void*)0;
char* __result_obj__122;
void* __right_value118 = (void*)0;
char* __result_obj__123;
void* __right_value119 = (void*)0;
char* result_252;
char* __result_obj__124;
    if(    str==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_251=strlen(str);
    if(    head<0    ) {
        head+=len_251;
    }
    if(    tail<0    ) {
        tail+=len_251+1;
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
    if(    tail>=len_251    ) {
        tail=len_251;
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
    result_252=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_252,str+head,tail-head);
    result_252[tail-head]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_252);
    (result_252 = come_decrement_ref_count(result_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* xsprintf(char* msg, ...){
void* __right_value120 = (void*)0;
char* __result_obj__125;
va_list args_253;
char* result_254;
int len_255;
void* __right_value121 = (void*)0;
char* __result_obj__126;
void* __right_value122 = (void*)0;
char* result2_256;
char* __result_obj__127;
result_254 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    __builtin_va_start(args_253,msg);
    len_255=vasprintf(&result_254,msg,args_253);
    __builtin_va_end(args_253);
    if(    len_255<0    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result2_256=(char*)come_increment_ref_count(__builtin_string(result_254));
    free(result_254);
    __result_obj__127 = (char*)come_increment_ref_count(result2_256);
    (result2_256 = come_decrement_ref_count(result2_256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value123 = (void*)0;
char* __result_obj__128;
int len_257;
void* __right_value124 = (void*)0;
char* __result_obj__129;
void* __right_value125 = (void*)0;
char* __result_obj__130;
void* __right_value126 = (void*)0;
char* result_258;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_257=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head+=len_257;
    }
    if(    tail<0    ) {
        tail+=len_257+1;
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
    if(    tail>=len_257    ) {
        tail=len_257;
    }
    result_258=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_257-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_258,str,head);
    memcpy(result_258+head,str+tail,len_257-tail);
    result_258[len_257-(tail-head)]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_258);
    (result_258 = come_decrement_ref_count(result_258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_259;
struct list_item$1char$ph* prev_it_260;
    it_259=self->head;
    while(    it_259!=((void*)0)    ) {
        prev_it_260=it_259;
        it_259=it_259->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj13;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_265;
char* __dec_obj14;
void* __right_value135 = (void*)0;
struct list_item$1char$ph* litem_266;
char* __dec_obj15;
struct list$1char$ph* __result_obj__134;
    if(    self->len==0    ) {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj13=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1    ) {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj14=litem_265->item,
        litem_265->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value135=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj15=litem_266->item,
        litem_266->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_266;
        self->tail=litem_266;
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
struct list$1char$ph* result_261;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct buffer* str_262;
int i_263;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct list$1char$ph* __result_obj__135;
    if(    self==((void*)0)    ) {
        __result_obj__133 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value128=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__133;
    }
    result_261=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_262=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_263=0    ;    i_263<charp_length(self)    ;    i_263++    ){
        if(        self[i_263]==c        ) {
            list$1char$ph_push_back(result_261,(char*)come_increment_ref_count(__builtin_string(str_262->buf)));
            buffer_reset(str_262);
        }
        else {
            buffer_append_char(str_262,self[i_263]);
        }
    }
    if(    buffer_length(str_262)!=0    ) {
        list$1char$ph_push_back(result_261,(char*)come_increment_ref_count(__builtin_string(str_262->buf)));
    }
    __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(result_261);
    come_call_finalizer(list$1char$ph$p_finalize, result_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_267;
void* __right_value140 = (void*)0;
char* result_268;
int n_269;
int i_270;
char c_271;
char* __result_obj__138;
    len_267=charp_length(str);
    result_268=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_267*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_269=0;
    for(    i_270=0    ;    i_270<len_267    ;    i_270++    ){
        c_271=str[i_270];
        if(        (c_271>=0&&c_271<32)||c_271==127        ) {
            result_268[n_269++]=94;
            result_268[n_269++]=c_271+65-1;
        }
        else {
            result_268[n_269++]=c_271;
        }
    }
    result_268[n_269]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_268);
    (result_268 = come_decrement_ref_count(result_268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value141 = (void*)0;
char* __result_obj__139;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* result_272;
char* p_273;
char* p2_274;
void* __right_value144 = (void*)0;
char* __result_obj__140;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(self))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_272=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_273=self;
    while(    (_Bool)1    ) {
        p2_274=strstr(p_273,str);
        if(        p2_274==((void*)0)        ) {
            p2_274=p_273;
            while(            *p2_274            ) {
                p2_274++;
            }
            buffer_append(result_272,p_273,p2_274-p_273);
            break;
        }
        buffer_append(result_272,p_273,p2_274-p_273);
        buffer_append_str(result_272,replace);
        p_273=p2_274+strlen(str);
    }
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value144=buffer_to_string(result_272))));
    come_call_finalizer(buffer_finalize, result_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xbasename(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__141;
char* p_275;
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
    p_275=path+strlen(path);
    while(    p_275>=path    ) {
        if(        *p_275==47        ) {
            break;
        }
        else {
            p_275--;
        }
    }
    if(    p_275<path    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    else {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(p_275+1))));
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
char* path2_276;
char* p_277;
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
    path2_276=(char*)come_increment_ref_count(xbasename(path));
    p_277=path2_276+strlen(path2_276);
    while(    p_277>=path2_276    ) {
        if(        *p_277==46        ) {
            break;
        }
        else {
            p_277--;
        }
    }
    if(    p_277<path2_276    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path2_276))));
        (path2_276 = come_decrement_ref_count(path2_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value152=charp_substring(path2_276,0,p_277-path2_276))));
        (path2_276 = come_decrement_ref_count(path2_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (path2_276 = come_decrement_ref_count(path2_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xextname(char* path){
void* __right_value154 = (void*)0;
char* __result_obj__149;
char* p_278;
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
    p_278=path+strlen(path);
    while(    p_278>=path    ) {
        if(        *p_278==46        ) {
            break;
        }
        else {
            p_278--;
        }
    }
    if(    p_278<path    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(path))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(p_278+1))));
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
char* msg2_279;
va_list args_281;
int len_282;
void* __right_value178 = (void*)0;
char* __result_obj__173;
msg2_279 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    char msg2_280[128];
    memset(&msg2_280, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_281,self);
    len_282=snprintf(msg2_280,128,self,args_281);
    __builtin_va_end(args_281);
    printf("%s",msg2_280);
    free(msg2_280);
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
int i_283;
    for(    i_283=0    ;    i_283<self    ;    i_283++    ){
        block(parent,i_283);
    }
}

