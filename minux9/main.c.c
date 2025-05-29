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
extern char _code_end[];
extern char stack_top[];
int gActiveProc=0;
int gNumProc=0;
int gCountTask1=0;
int gCountTask2=0;
extern char last_key;
struct proc* p;
struct proc* p2;
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
unsigned long  long* create_pagetable();
struct proc* alloc_proc(void (*task)());
unsigned long  long load_program(unsigned long  long* pagetable);
void alloc_prog();
void reset_watchdog();
void putc(char c);
void enable_mmu(unsigned long  long* kernel_pagetable);
void swtch(struct proc* current_proc, struct proc* next_proc);
void task1();
void task2();
void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);
void plic_enable(int irq);
void mmu_init();
void mmu_test();
void kinit();
void load_context(struct context* anonymous_var_nameX34);
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
    result_1->stack=calloc(1,4096);
    result_1->context.sp=(unsigned long  long)(result_1->stack+4096);
    result_1->context.ra=(unsigned long  long)task;
    result_1->pagetable=create_pagetable();
    user_mmu_init(result_1->pagetable);
    gProc[gNumProc++]=result_1;
    __result_obj__1 = result_1;
    return __result_obj__1;
}

void alloc_prog(){
struct proc* result_2;
    result_2=calloc(1,sizeof(struct proc));
    memset(result_2,0,sizeof(struct proc));
    result_2->stack=calloc(1,256);
    result_2->context.sp=(unsigned long  long)(result_2->stack+256);
    gProc[gNumProc++]=result_2;
    result_2->pagetable=create_pagetable();
    result_2->context.ra=load_program(result_2->pagetable);
    user_mmu_init(result_2->pagetable);
}

void task1(){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* a_3;
    while(    1    ) {
        puts("1\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        ((char*)(__right_value0=charp_puts("ABCABC")));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        a_3=(char*)come_increment_ref_count(xsprintf("123"));
        puts(a_3);
        gCountTask1++;
        if(        last_key        ) {
            putc(last_key);
            last_key=0;
        }
        reset_watchdog();
        p=gProc[gActiveProc];
        gActiveProc++;
        if(        gActiveProc>=gNumProc        ) {
            gActiveProc=0;
        }
        p2=gProc[gActiveProc];
        enable_mmu(p2->pagetable);
        swtch(p,p2);
        (a_3 = come_decrement_ref_count(a_3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void task2(){
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
char* a_4;
    while(    1    ) {
        puts("2\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        ((char*)(__right_value2=charp_puts("ABCD")));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        a_4=(char*)come_increment_ref_count(xsprintf("123"));
        puts(a_4);
        gCountTask2++;
        if(        last_key        ) {
            putc(last_key);
            last_key=0;
        }
        reset_watchdog();
        p=gProc[gActiveProc];
        gActiveProc++;
        if(        gActiveProc>=gNumProc        ) {
            gActiveProc=0;
        }
        p2=gProc[gActiveProc];
        enable_mmu(p2->pagetable);
        swtch(p,p2);
        (a_4 = come_decrement_ref_count(a_4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

int main(){
void* __right_value4 = (void*)0;
struct proc* p_6;
    come_heap_init(0, 0, 0);
    trap_init();
    plic_init();
    plic_enable(10);
    uart_init();
    kinit();
    mmu_init();
    alloc_proc(task1);
    alloc_proc(task2);
    char buf_5[128];
    memset(&buf_5, 0, sizeof(char)    *(128)    );
    snprintf(buf_5,128,"%d\n",1+1);
    puts(buf_5);
    puts(((char*)(__right_value4=xsprintf("%d\n",1+1))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    p_6=gProc[gActiveProc];
    load_context(&p_6->context);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void disable_interrupts(){
unsigned long  long mstatus_7;
memset(&mstatus_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_7));
    mstatus_7&=~(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_7));
}

void enable_interrupts(){
unsigned long  long mstatus_8;
memset(&mstatus_8, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r"(mstatus_8));
    mstatus_8|=(1<<3);
    __asm volatile("csrw mstatus, %0" :: "r"(mstatus_8));
}

void* sbrk(long incr){
void* __result_obj__2;
void* prev_9;
void* __result_obj__3;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    prev_9=heap_end;
    heap_end+=incr;
    __result_obj__3 = prev_9;
    return __result_obj__3;
}

void* malloc(unsigned long  int size){
void* __result_obj__4;
struct mem_block* current_10;
struct mem_block* prev_11;
void* __result_obj__5;
struct mem_block* new_mem_12;
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
    current_10=free_list;
    prev_11=((void*)0);
    while(    current_10!=((void*)0)    ) {
        if(        current_10->size>=size        ) {
            if(            prev_11==((void*)0)            ) {
                free_list=current_10->next;
            }
            else {
                prev_11->next=current_10->next;
            }
            __result_obj__5 = (void*)(current_10+1);
            return __result_obj__5;
        }
        prev_11=current_10;
        current_10=current_10->next;
    }
    new_mem_12=(struct mem_block*)sbrk(size);
    if(    new_mem_12==(void*)-1    ) {
        __result_obj__6 = ((void*)0);
        return __result_obj__6;
    }
    new_mem_12->size=size;
    new_mem_12->next=((void*)0);
    __result_obj__7 = (void*)(new_mem_12+1);
    return __result_obj__7;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_13;
void* __result_obj__8;
void* ptr_14;
void* __result_obj__9;
    total_size_13=nmemb*size;
    if(    total_size_13==0    ) {
        __result_obj__8 = ((void*)0);
        return __result_obj__8;
    }
    ptr_14=malloc(total_size_13);
    if(    ptr_14!=((void*)0)    ) {
        memset(ptr_14,0,total_size_13);
    }
    __result_obj__9 = ptr_14;
    return __result_obj__9;
}

void free(void* ptr){
struct mem_block* block_15;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_15=(struct mem_block*)ptr-1;
    block_15->next=free_list;
    free_list=block_15;
}

char* strdup(const char* s){
char* s2_16;
unsigned long  int len_17;
char* p_18;
char* __result_obj__10;
    s2_16=s;
    len_17=strlen(s2_16)+1;
    p_18=malloc(len_17);
    if(    p_18    ) {
        memcpy(p_18,s2_16,len_17);
    }
    __result_obj__10 = p_18;
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
        const char* h_19=haystack;
        const char* n_20=needle;
        while(        *h_19&&*n_20&&(*h_19==*n_20)        ) {
            h_19++;
            n_20++;
        }
        if(        !*n_20        ) {
            __result_obj__12 = (char*)haystack;
            return __result_obj__12;
        }
    }
    __result_obj__13 = ((void*)0);
    return __result_obj__13;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_21;
int i_22;
void* __result_obj__14;
    cdst_21=(char*)dst;
    for(    i_22=0    ;    i_22<n    ;    i_22++    ){
        cdst_21[i_22]=c;
    }
    __result_obj__14 = dst;
    return __result_obj__14;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_23;
const unsigned char* s2_24;
memset(&s1_23, 0, sizeof(const unsigned char*));
memset(&s2_24, 0, sizeof(const unsigned char*));
    s1_23=v1;
    s2_24=v2;
    while(    n-->0    ) {
        if(        *s1_23!=*s2_24        ) {
            return *s1_23-*s2_24;
        }
        s1_23++,s2_24++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_25;
char* d_26;
void* __result_obj__15;
void* __result_obj__16;
s_25 = (void*)0;
d_26 = (void*)0;
    if(    n==0    ) {
        __result_obj__15 = dst;
        return __result_obj__15;
    }
    s_25=src;
    d_26=dst;
    if(    s_25<d_26&&s_25+n>d_26    ) {
        s_25+=n;
        d_26+=n;
        while(        n-->0        ) {
            *--d_26=*--s_25;
        }
    }
    else {
        while(        n-->0        ) {
            *d_26++=*s_25++;
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
char* os_27;
char* __result_obj__18;
char* __result_obj__19;
os_27 = (void*)0;
    os_27=s;
    if(    n<=0    ) {
        __result_obj__18 = os_27;
        return __result_obj__18;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__19 = os_27;
    return __result_obj__19;
}

int strlen(const char* s){
int n_28;
memset(&n_28, 0, sizeof(int));
    for(    n_28=0    ;    s[n_28]    ;    n_28++    ){
        ;
    }
    return n_28;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_29;
char* __result_obj__20;
    d_29=dest;
    while(    *d_29    ) {
        d_29++;
    }
    while(    n--&&*src    ) {
        *d_29++=*src++;
    }
    *d_29=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_30;
int i_32;
int negative_33;
char* __result_obj__21;
int digit_34;
char* __result_obj__22;
    p_30=buf;
    char tmp_31[32];
    memset(&tmp_31, 0, sizeof(char)    *(32)    );
    i_32=0;
    negative_33=0;
    if(    base<2||base>16    ) {
        *p_30=0;
        __result_obj__21 = p_30;
        return __result_obj__21;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_33=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_34=val_%base;
        tmp_31[i_32++]=(((digit_34<10))?(48+digit_34):(97+digit_34-10));
        val_/=base;
    } while(    val_    );
    if(    negative_33    ) {
        *p_30++=45;
    }
    while(    i_32--    ) {
        *p_30++=tmp_31[i_32];
    }
    *p_30=0;
    __result_obj__22 = buf;
    return __result_obj__22;
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
            itoa(buf_38,__builtin_va_arg(ap,int),10,1);
            s_37=buf_38;
            break;
            case 117:
            itoa(buf_38,__builtin_va_arg(ap,unsigned int),10,0);
            s_37=buf_38;
            break;
            case 120:
            itoa(buf_38,__builtin_va_arg(ap,unsigned int),16,0);
            s_37=buf_38;
            break;
            case 115:
            s_37=__builtin_va_arg(ap,const char*);
            if(            !s_37            ) {
                s_37="(null)";
            }
            break;
            case 99:
            buf_38[0]=(char)__builtin_va_arg(ap,int);
            buf_38[1]=0;
            s_37=buf_38;
            break;
            case 112:
            strncpy(buf_38,"0x",32);
            itoa(buf_38+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_37=buf_38;
            break;
            case 37:
            buf_38[0]=37;
            buf_38[1]=0;
            s_37=buf_38;
            break;
            default:
            buf_38[0]=37;
            buf_38[1]=*fmt;
            buf_38[2]=0;
            s_37=buf_38;
            break;
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

void printint(int val_, int base, int sign){
int i_51;
int negative_52;
unsigned int uval_53;
int digit_54;
memset(&uval_53, 0, sizeof(unsigned int));
    char buf_50[33];
    memset(&buf_50, 0, sizeof(char)    *(33)    );
    i_51=0;
    negative_52=0;
    if(    sign&&val_<0    ) {
        negative_52=1;
        uval_53=-val_;
    }
    else {
        uval_53=(unsigned int)val_;
    }
    if(    uval_53==0    ) {
        putchar(48);
        return;
    }
    while(    uval_53>0    ) {
        digit_54=uval_53%base;
        buf_50[i_51++]=((digit_54<10)?(48+digit_54):(97+(digit_54-10)));
        uval_53/=base;
    }
    if(    negative_52    ) {
        putchar(45);
    }
    while(    --i_51>=0    ) {
        putchar(buf_50[i_51]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_56;
int negative_57;
int digit_58;
    char buf_55[65];
    memset(&buf_55, 0, sizeof(char)    *(65)    );
    i_56=0;
    negative_57=0;
    if(    sign&&(long)val_<0    ) {
        negative_57=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_58=val_%base;
        buf_55[i_56++]=((digit_58<10)?(48+digit_58):(97+(digit_58-10)));
        val_/=base;
    }
    if(    negative_57    ) {
        putchar(45);
    }
    while(    --i_56>=0    ) {
        putchar(buf_55[i_56]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_60;
int negative_61;
int digit_62;
    char buf_59[65];
    memset(&buf_59, 0, sizeof(char)    *(65)    );
    i_60=0;
    negative_61=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_61=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_62=val_%base;
        buf_59[i_60++]=((digit_62<10)?(48+digit_62):(97+(digit_62-10)));
        val_/=base;
    }
    if(    negative_61    ) {
        putchar(45);
    }
    while(    --i_60>=0    ) {
        putchar(buf_59[i_60]);
    }
}

int printf(const char* fmt, ...){
va_list ap_63;
const char* p_64;
int lcount_65;
unsigned long  int val__66;
unsigned long  long val__67;
long val__68;
long long val__69;
int i_70;
int val__71;
unsigned int val__72;
unsigned long  int val__73;
char c_75;
memset(&ap_63, 0, sizeof(va_list));
p_64 = (void*)0;
    __builtin_va_start(ap_63,fmt);
    for(    p_64=fmt    ;    *p_64    ;    p_64++    ){
        if(        *p_64!=37        ) {
            putchar(*p_64);
            continue;
        }
        p_64++;
        if(        *p_64==108        ) {
            lcount_65=1;
            if(            *(p_64+1)==108            ) {
                lcount_65=2;
                p_64++;
            }
            p_64++;
            switch (            *p_64) {
                case 120:
                {
                    if(                    lcount_65==1                    ) {
                        val__66=__builtin_va_arg(ap_63,unsigned long  int);
                        printlong(val__66,16,0);
                    }
                    else {
                        val__67=__builtin_va_arg(ap_63,unsigned long  long);
                        printlonglong(val__67,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_65==1                    ) {
                        val__68=__builtin_va_arg(ap_63,long);
                        printlong(val__68,10,1);
                    }
                    else {
                        val__69=__builtin_va_arg(ap_63,long  long);
                        printlonglong(val__69,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_70=0                    ;                    i_70<lcount_65                    ;                    i_70++                    ){
                        putchar(108);
                    }
                    putchar(*p_64);
                    break;
                }
            }
        }
        else {
            switch (            *p_64) {
                case 100:
                {
                    val__71=__builtin_va_arg(ap_63,int);
                    printint(val__71,10,1);
                    break;
                }
                case 120:
                {
                    val__72=__builtin_va_arg(ap_63,unsigned int);
                    printint(val__72,16,0);
                    break;
                }
                case 112:
                {
                    val__73=(unsigned long  int)__builtin_va_arg(ap_63,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__73,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_74=__builtin_va_arg(ap_63,const char*);
                    if(                    !s_74                    ) {
                        s_74="(null)";
                    }
                    while(                    *s_74                    ) {
                        putchar(*s_74++);
                    }
                    break;
                }
                case 99:
                {
                    c_75=(char)__builtin_va_arg(ap_63,int);
                    putchar(c_75);
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
                    putchar(*p_64);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_63);
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
void* __right_value5 = (void*)0;
char* result_76;
char* __result_obj__23;
    result_76=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__23 = (char*)come_increment_ref_count(result_76);
    (result_76 = come_decrement_ref_count(result_76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__23 = come_decrement_ref_count(__result_obj__23, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__23;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_77;
void* __result_obj__24;
    result_77=come_calloc(count,size,sname,sline,class_name);
    __result_obj__24 = result_77;
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
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* buf_78;
int i_79;
void* __right_value8 = (void*)0;
    buf_78=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_78,"%s %d\n",sname,sline);
    for(    i_79=gNumComeStackFrame-2    ;    i_79>=0    ;    i_79--    ){
        buffer_append_format(buf_78,"%s %d #%d\n",gComeStackFrameSName[i_79],gComeStackFrameSLine[i_79],gComeStackFrameID[i_79]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value8=buffer_to_string(buf_78))));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_80;
    for(    i_80=gNumComeStackFrame-1    ;    i_80>=0    ;    i_80--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_80],gComeStackFrameSLine[i_80],gComeStackFrameID[i_80]);
    }
}

char* come_get_stackframe(){
void* __right_value9 = (void*)0;
char* __result_obj__25;
    __result_obj__25 = (char*)come_increment_ref_count(((char*)(__right_value9=__builtin_string(gComeStackFrameBuffer))));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
int i_81;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_81=0    ;    i_81<gHeapPages.mSizePages    ;    i_81++    ){
        gHeapPages.mPages[i_81]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_82;
int n_83;
_Bool flag_84;
int i_85;
struct sMemHeaderTiny* it_86;
int n_87;
int i_88;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_82=gAllocMem;
        n_83=0;
        while(        it_82        ) {
            n_83++;
            flag_84=(_Bool)0;
            printf("#%d ",n_83);
            if(            it_82->class_name            ) {
                printf("%p (%s): ",(char*)it_82+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_82->class_name);
            }
            for(            i_85=0            ;            i_85<16            ;            i_85++            ){
                if(                it_82->sname[i_85]                ) {
                    printf("%s %d #%d, ",it_82->sname[i_85],it_82->sline[i_85],it_82->id[i_85]);
                    flag_84=(_Bool)1;
                }
            }
            if(            flag_84            ) {
                puts("");
            }
            it_82=it_82->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_83,gNumAlloc,gNumFree);
    }
    else {
        it_86=(struct sMemHeaderTiny*)gAllocMem;
        n_87=0;
        while(        it_86        ) {
            n_87++;
            if(            it_86->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_87,(char*)it_86+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_86->class_name,it_86->sname,it_86->sline);
            }
            it_86=it_86->next;
        }
        if(        n_87>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_87,gNumAlloc,gNumFree);
        }
    }
    for(    i_88=0    ;    i_88<gHeapPages.mSizePages    ;    i_88++    ){
        free(gHeapPages.mPages[i_88]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_89;
void* __result_obj__26;
    result_89=((void*)0);
    size=(size+7&~7);
    result_89=calloc(1,size);
    __result_obj__26 = result_89;
    return __result_obj__26;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_90;
struct sMemHeader* prev_it_91;
struct sMemHeader* next_it_92;
unsigned long  int size_93;
struct sMemHeaderTiny* it_94;
struct sMemHeaderTiny* prev_it_95;
struct sMemHeaderTiny* next_it_96;
unsigned long  int size_97;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_90=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_90->allocated!=177783            ) {
                return;
            }
            it_90->allocated=0;
            prev_it_91=it_90->prev;
            next_it_92=it_90->next;
            if(            gAllocMem==it_90            ) {
                gAllocMem=next_it_92;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_91                ) {
                    prev_it_91->next=next_it_92;
                }
                if(                next_it_92                ) {
                    next_it_92->prev=prev_it_91;
                }
            }
            size_93=it_90->size;
            free(it_90);
            gNumFree++;
        }
        else {
            it_94=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_94->allocated!=177783            ) {
                return;
            }
            it_94->allocated=0;
            prev_it_95=it_94->prev;
            next_it_96=it_94->next;
            if(            gAllocMem==it_94            ) {
                gAllocMem=(struct sMemHeader*)next_it_96;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_95                ) {
                    prev_it_95->next=next_it_96;
                }
                if(                next_it_96                ) {
                    next_it_96->prev=prev_it_95;
                }
            }
            size_97=it_94->size;
            free(it_94);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_98;
struct sMemHeader* it_99;
int i_100;
int i_101;
void* __result_obj__27;
void* result_102;
struct sMemHeaderTiny* it_103;
void* __result_obj__28;
memset(&i_100, 0, sizeof(int));
memset(&i_101, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_98=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_99=result_98;
        it_99->allocated=177783;
        it_99->size=size+sizeof(struct sMemHeader);
        it_99->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_100=0            ;            i_100<gNumComeStackFrame            ;            i_100++            ){
                it_99->sname[i_100]=gComeStackFrameSName[i_100];
                it_99->sline[i_100]=gComeStackFrameSLine[i_100];
                it_99->id[i_100]=gComeStackFrameID[i_100];
            }
        }
        else {
            for(            i_101=0            ;            i_101<16            ;            i_101++            ){
                it_99->sname[i_101]=gComeStackFrameSName[gNumComeStackFrame-1-i_101];
                it_99->sline[i_101]=gComeStackFrameSLine[gNumComeStackFrame-1-i_101];
                it_99->id[i_101]=gComeStackFrameID[gNumComeStackFrame-1-i_101];
            }
        }
        come_pop_stackframe_v2();
        it_99->next=gAllocMem;
        it_99->prev=((void*)0);
        it_99->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_99;
        }
        gAllocMem=it_99;
        gNumAlloc++;
        __result_obj__27 = (char*)result_98+sizeof(struct sMemHeader);
        return __result_obj__27;
    }
    else {
        result_102=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_103=result_102;
        it_103->allocated=177783;
        it_103->class_name=class_name;
        it_103->sname=sname;
        it_103->sline=sline;
        it_103->size=size+sizeof(struct sMemHeaderTiny);
        it_103->free_next=((void*)0);
        it_103->next=(struct sMemHeaderTiny*)gAllocMem;
        it_103->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_103;
        }
        gAllocMem=(struct sMemHeader*)it_103;
        gNumAlloc++;
        __result_obj__28 = (char*)result_102+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_104;
char* __result_obj__29;
struct sMemHeaderTiny* it_105;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_104=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_104->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_104);
            exit(2);
        }
        __result_obj__29 = it_104->class_name;
        return __result_obj__29;
    }
    else {
        it_105=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_105->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_105);
            exit(2);
        }
        __result_obj__30 = it_105->class_name;
        return __result_obj__30;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_106;
int i_107;
struct sMemHeaderTiny* it_108;
    if(    gComeDebugLib    ) {
        it_106=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_106->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_106->class_name        ) {
            printf("(%s): ",it_106->class_name);
        }
        for(        i_107=0        ;        i_107<16        ;        i_107++        ){
            if(            it_106->sname[i_107]            ) {
                printf("%s %d #%d, ",it_106->sname[i_107],it_106->sline[i_107],it_106->id[i_107]);
            }
        }
        puts("");
    }
    else {
        it_108=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_108->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_108->class_name,it_108->sname,it_108->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_109;
unsigned long  int* ref_count_110;
unsigned long  int* size2_111;
void* __result_obj__31;
    mem_109=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_110=(unsigned long  int*)mem_109;
    *ref_count_110=0;
    size2_111=(unsigned long  int*)(mem_109+sizeof(unsigned long  int));
    *size2_111=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_109+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_112;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_112=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_112);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_113;
unsigned long  int* size_p_114;
unsigned long  int size_115;
void* result_116;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_113=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_114=(unsigned long  int*)(mem_113+sizeof(unsigned long  int));
    size_115=*size_p_114-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_116=come_calloc_v2(1,size_115,sname,sline,class_name);
    memcpy(result_116,block,size_115);
    __result_obj__33 = result_116;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_117;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_117)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_118;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_118=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_118);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_119;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_119=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_119;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_120;
unsigned long  int count_121;
void (*finalizer_122)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
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
    ref_count_120=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_120)--;
    }
    count_121=*ref_count_120;
    if(    !no_free&&count_121<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_122=protocol_fun;
            finalizer_122(protocol_obj);
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
void (*finalizer_123)(void*);
void (*finalizer_124)(void*);
void (*finalizer_125)(void*);
unsigned long  int* ref_count_126;
unsigned long  int count_127;
void (*finalizer_128)(void*);
void (*finalizer_129)(void*);
void (*finalizer_130)(void*);
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
memset(&finalizer_124, 0, sizeof(void (*)(void*)));
memset(&finalizer_125, 0, sizeof(void (*)(void*)));
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
memset(&finalizer_129, 0, sizeof(void (*)(void*)));
memset(&finalizer_130, 0, sizeof(void (*)(void*)));
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
                finalizer_123=protocol_fun;
                finalizer_123(protocol_obj);
            }
            finalizer_124=fun;
            finalizer_124(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_125=protocol_fun;
                finalizer_125(protocol_obj);
            }
        }
    }
    else {
        ref_count_126=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_126)--;
        }
        count_127=*ref_count_126;
        if(        !no_free&&count_127<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_128=protocol_fun;
                        finalizer_128(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_129=fun;
                        finalizer_129(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_130=protocol_fun;
                        finalizer_130(protocol_obj);
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
int len_131;
void* __right_value10 = (void*)0;
char* result_132;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_131=strlen(str)+1;
    result_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_131)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_132,str,len_131);
    __result_obj__43 = (char*)come_increment_ref_count(result_132);
    (result_132 = come_decrement_ref_count(result_132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value11 = (void*)0;
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
void* __right_value12 = (void*)0;
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
void* __right_value13 = (void*)0;
struct buffer* result_133;
void* __right_value14 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__47;
    if(    self==((void*)0)    ) {
        __result_obj__46 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__46;
    }
    result_133=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_133->size=self->size;
    __dec_obj3=result_133->buf,
    result_133->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_133->len=self->len;
    memcpy(result_133->buf,self->buf,self->len);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result_133);
    come_call_finalizer(buffer_finalize, result_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
_Bool __result_obj__48;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__48 = string_equals(((char*)(__right_value15=buffer_to_string(left))),((char*)(__right_value16=buffer_to_string(right))));
    (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value16 = come_decrement_ref_count(__right_value16, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value17 = (void*)0;
char* old_buf_134;
int old_len_135;
int new_size_136;
void* __right_value18 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__50;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_134=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_134,self->buf,self->size);
        old_len_135=self->len;
        new_size_136=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_136)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_134,old_len_135);
        self->buf[old_len_135]=0;
        self->size=new_size_136;
        (old_buf_134 = come_decrement_ref_count(old_buf_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__51;
void* __right_value19 = (void*)0;
char* old_buf_137;
int old_len_138;
int new_size_139;
void* __right_value20 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__52;
    if(    self==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_137=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_138=self->len;
        new_size_139=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_139)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_137,old_len_138);
        self->buf[old_len_138]=0;
        self->size=new_size_139;
        (old_buf_137 = come_decrement_ref_count(old_buf_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__53;
int size_140;
void* __right_value21 = (void*)0;
char* old_buf_141;
int old_len_142;
int new_size_143;
void* __right_value22 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__54;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    size_140=strlen(mem);
    if(    self->len+size_140+1+1>=self->size    ) {
        old_buf_141=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_141,self->buf,self->size);
        old_len_142=self->len;
        new_size_143=(self->size+size_140+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_143)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_141,old_len_142);
        self->buf[old_len_142]=0;
        self->size=new_size_143;
        (old_buf_141 = come_decrement_ref_count(old_buf_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_140);
    self->len+=size_140;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__55;
va_list args_145;
int len_146;
void* __right_value23 = (void*)0;
char* mem_147;
int size_148;
void* __right_value24 = (void*)0;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* __right_value25 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    char result_144[128];
    memset(&result_144, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_145,msg);
    snprintf(result_144,128,args_145);
    __builtin_va_end(args_145);
    len_146=strlen(result_144);
    mem_147=(char*)come_increment_ref_count(__builtin_string(result_144));
    size_148=strlen(mem_147);
    if(    self->len+size_148+1+1>=self->size    ) {
        old_buf_149=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_151)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        (old_buf_149 = come_decrement_ref_count(old_buf_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    free(result_144);
    __result_obj__56 = self;
    (mem_147 = come_decrement_ref_count(mem_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__56;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__57;
int size_152;
void* __right_value26 = (void*)0;
char* old_buf_153;
int old_len_154;
int new_size_155;
void* __right_value27 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__58;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    size_152=strlen(mem)+1;
    if(    self->len+size_152+1+1+1>=self->size    ) {
        old_buf_153=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_153,self->buf,self->size);
        old_len_154=self->len;
        new_size_155=(self->size+size_152+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_155)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_153,old_len_154);
        self->buf[old_len_154]=0;
        self->size=new_size_155;
        (old_buf_153 = come_decrement_ref_count(old_buf_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_152);
    self->len+=size_152;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__59;
int* mem_156;
int size_157;
void* __right_value28 = (void*)0;
char* old_buf_158;
int old_len_159;
int new_size_160;
void* __right_value29 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    mem_156=&value;
    size_157=sizeof(int);
    if(    self->len+size_157+1+1>=self->size    ) {
        old_buf_158=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_158,self->buf,self->size);
        old_len_159=self->len;
        new_size_160=(self->size+size_157+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_160)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_158,old_len_159);
        self->buf[old_len_159]=0;
        self->size=new_size_160;
        (old_buf_158 = come_decrement_ref_count(old_buf_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_156,size_157);
    self->len+=size_157;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_161;
int size_162;
void* __right_value30 = (void*)0;
char* old_buf_163;
int old_len_164;
int new_size_165;
void* __right_value31 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__61;
    mem_161=&value;
    size_162=sizeof(long);
    if(    self->len+size_162+1+1>=self->size    ) {
        old_buf_163=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_163,self->buf,self->size);
        old_len_164=self->len;
        new_size_165=(self->size+size_162+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_165)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_163,old_len_164);
        self->buf[old_len_164]=0;
        self->size=new_size_165;
        (old_buf_163 = come_decrement_ref_count(old_buf_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_161,size_162);
    self->len+=size_162;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__62;
short* mem_166;
int size_167;
void* __right_value32 = (void*)0;
char* old_buf_168;
int old_len_169;
int new_size_170;
void* __right_value33 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_166=&value;
    size_167=sizeof(short);
    if(    self->len+size_167+1+1>=self->size    ) {
        old_buf_168=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_168,self->buf,self->size);
        old_len_169=self->len;
        new_size_170=(self->size+size_167+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_170)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_168,old_len_169);
        self->buf[old_len_169]=0;
        self->size=new_size_170;
        (old_buf_168 = come_decrement_ref_count(old_buf_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_166,size_167);
    self->len+=size_167;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__64;
int len_171;
int new_size_172;
void* __right_value34 = (void*)0;
char* __dec_obj12;
int i_173;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    len_171=self->len;
    len_171=(len_171+3)&~3;
    if(    len_171>=self->size    ) {
        new_size_172=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_172)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_172;
    }
    for(    i_173=self->len    ;    i_173<len_171    ;    i_173++    ){
        self->buf[i_173]=0;
    }
    self->len=len_171;
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
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_174;
struct buffer* __result_obj__66;
struct buffer* __result_obj__67;
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__66 = (struct buffer*)come_increment_ref_count(result_174);
        come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__66;
    }
    buffer_append_str(result_174,self);
    __result_obj__67 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

char* buffer_to_string(struct buffer* self){
void* __right_value37 = (void*)0;
char* __result_obj__68;
void* __right_value38 = (void*)0;
char* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value37=__builtin_string(""))));
        (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__68;
    }
    __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value38=__builtin_string(self->buf))));
    (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__69;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__70;
    __result_obj__70 = self->buf;
    return __result_obj__70;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_175;
struct buffer* __result_obj__71;
    result_175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_175,self,sizeof(char)*len);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_175);
    come_call_finalizer(buffer_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_176;
int i_177;
struct buffer* __result_obj__72;
    result_176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_177=0    ;    i_177<len    ;    i_177++    ){
        buffer_append(result_176,self[i_177],strlen(self[i_177]));
    }
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_176);
    come_call_finalizer(buffer_finalize, result_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_178;
struct buffer* __result_obj__73;
    result_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_178,(char*)self,sizeof(short)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_178);
    come_call_finalizer(buffer_finalize, result_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_179;
struct buffer* __result_obj__74;
    result_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_179,(char*)self,sizeof(int)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_179);
    come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_180;
struct buffer* __result_obj__75;
    result_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_180,(char*)self,sizeof(long)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_180);
    come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* result_181;
struct buffer* __result_obj__76;
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_181,(char*)self,sizeof(float)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct buffer* result_182;
struct buffer* __result_obj__77;
    result_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_182,(char*)self,sizeof(double)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_182);
    come_call_finalizer(buffer_finalize, result_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

char* buffer_printable(struct buffer* self){
int len_183;
void* __right_value53 = (void*)0;
char* result_184;
int n_185;
int i_186;
unsigned char c_187;
char* __result_obj__78;
    len_183=self->len;
    result_184=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_183*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_185=0;
    for(    i_186=0    ;    i_186<len_183    ;    i_186++    ){
        c_187=self->buf[i_186];
        if(        (c_187>=0&&c_187<32)||c_187==127        ) {
            result_184[n_185++]=94;
            result_184[n_185++]=c_187+65-1;
        }
        else if(        c_187>127        ) {
            result_184[n_185++]=63;
        }
        else {
            result_184[n_185++]=c_187;
        }
    }
    result_184[n_185]=0;
    __result_obj__78 = (char*)come_increment_ref_count(result_184);
    (result_184 = come_decrement_ref_count(result_184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_188;
struct list$1char$* __result_obj__80;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0    ;    i_188<num_value    ;    i_188++    ){
        list$1char$_push_back(self,values[i_188]);
    }
    __result_obj__80 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_189;
void* __right_value56 = (void*)0;
struct list_item$1char$* litem_190;
void* __right_value57 = (void*)0;
struct list_item$1char$* litem_191;
struct list$1char$* __result_obj__79;
    if(    self->len==0    ) {
        litem_189=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1    ) {
        litem_190=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value56=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value57=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result_obj__79 = self;
    return __result_obj__79;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_192;
struct list_item$1char$* prev_it_193;
    it_192=self->head;
    while(    it_192!=((void*)0)    ) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$* __result_obj__81;
    __result_obj__81 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value58=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3330, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_194;
struct list$1char$p* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_194=0    ;    i_194<num_value    ;    i_194++    ){
        list$1char$p_push_back(self,values[i_194]);
    }
    __result_obj__83 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_195;
void* __right_value61 = (void*)0;
struct list_item$1char$p* litem_196;
void* __right_value62 = (void*)0;
struct list_item$1char$p* litem_197;
struct list$1char$p* __result_obj__82;
    if(    self->len==0    ) {
        litem_195=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1    ) {
        litem_196=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value61=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value62=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_198;
struct list_item$1char$p* prev_it_199;
    it_198=self->head;
    while(    it_198!=((void*)0)    ) {
        prev_it_199=it_198;
        it_198=it_198->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1char$p* __result_obj__84;
    __result_obj__84 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value63=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3335, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_200;
struct list$1short$* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1short$_push_back(self,values[i_200]);
    }
    __result_obj__86 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_201;
void* __right_value66 = (void*)0;
struct list_item$1short$* litem_202;
void* __right_value67 = (void*)0;
struct list_item$1short$* litem_203;
struct list$1short$* __result_obj__85;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value66=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value67=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_204;
struct list_item$1short$* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1short$* __result_obj__87;
    __result_obj__87 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value68=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3340, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_206;
struct list$1int$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1int$_push_back(self,values[i_206]);
    }
    __result_obj__89 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_207;
void* __right_value71 = (void*)0;
struct list_item$1int$* litem_208;
void* __right_value72 = (void*)0;
struct list_item$1int$* litem_209;
struct list$1int$* __result_obj__88;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value71=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value72=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_210;
struct list_item$1int$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1int$* __result_obj__90;
    __result_obj__90 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value73=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3345, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_212;
struct list$1long$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0    ;    i_212<num_value    ;    i_212++    ){
        list$1long$_push_back(self,values[i_212]);
    }
    __result_obj__92 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_213;
void* __right_value76 = (void*)0;
struct list_item$1long$* litem_214;
void* __right_value77 = (void*)0;
struct list_item$1long$* litem_215;
struct list$1long$* __result_obj__91;
    if(    self->len==0    ) {
        litem_213=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1    ) {
        litem_214=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value76=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value77=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_216;
struct list_item$1long$* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1long$* __result_obj__93;
    __result_obj__93 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value78=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3350, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_218;
struct list$1float$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0    ;    i_218<num_value    ;    i_218++    ){
        list$1float$_push_back(self,values[i_218]);
    }
    __result_obj__95 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_219;
void* __right_value81 = (void*)0;
struct list_item$1float$* litem_220;
void* __right_value82 = (void*)0;
struct list_item$1float$* litem_221;
struct list$1float$* __result_obj__94;
    if(    self->len==0    ) {
        litem_219=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1    ) {
        litem_220=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value81=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value82=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_222;
struct list_item$1float$* prev_it_223;
    it_222=self->head;
    while(    it_222!=((void*)0)    ) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1float$* __result_obj__96;
    __result_obj__96 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value83=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3355, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_224;
struct list$1double$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0    ;    i_224<num_value    ;    i_224++    ){
        list$1double$_push_back(self,values[i_224]);
    }
    __result_obj__98 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_225;
void* __right_value86 = (void*)0;
struct list_item$1double$* litem_226;
void* __right_value87 = (void*)0;
struct list_item$1double$* litem_227;
struct list$1double$* __result_obj__97;
    if(    self->len==0    ) {
        litem_225=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1    ) {
        litem_226=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value86=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value87=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_228;
struct list_item$1double$* prev_it_229;
    it_228=self->head;
    while(    it_228!=((void*)0)    ) {
        prev_it_229=it_228;
        it_228=it_228->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value84 = (void*)0;
void* __right_value88 = (void*)0;
struct list$1double$* __result_obj__99;
    __result_obj__99 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value88=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3360, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value88, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value89 = (void*)0;
char* __result_obj__100;
int len_230;
void* __right_value90 = (void*)0;
char* result_231;
char* __result_obj__101;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    len_230=strlen(self)+strlen(right);
    result_231=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_230+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_231,self,len_230+1);
    strncat(result_231,right,len_230+1);
    __result_obj__101 = (char*)come_increment_ref_count(result_231);
    (result_231 = come_decrement_ref_count(result_231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

char* string_operator_add(char* self, char* right){
void* __right_value91 = (void*)0;
char* __result_obj__102;
int len_232;
void* __right_value92 = (void*)0;
char* result_233;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_232=strlen(self)+strlen(right);
    result_233=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_232+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_233,self,len_232+1);
    strncat(result_233,right,len_232+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_233);
    (result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* charp_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__104;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_234;
int i_235;
void* __right_value96 = (void*)0;
char* __result_obj__105;
    if(    self==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    buf_234=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_235=0    ;    i_235<right    ;    i_235++    ){
        buffer_append_str(buf_234,self);
    }
    __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_234))));
    come_call_finalizer(buffer_finalize, buf_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_mult(char* self, int right){
void* __right_value97 = (void*)0;
char* __result_obj__106;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct buffer* buf_236;
int i_237;
void* __right_value100 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_236=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_237=0    ;    i_237<right    ;    i_237++    ){
        buffer_append_str(buf_236,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value100=buffer_to_string(buf_236))));
    come_call_finalizer(buffer_finalize, buf_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_238;
int i_239;
    result_238=(_Bool)0;
    for(    i_239=0    ;    i_239<len    ;    i_239++    ){
        if(        strncmp(self[i_239],str,strlen(self[i_239]))==0        ) {
            result_238=(_Bool)1;
            break;
        }
    }
    return result_238;
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

unsigned int string_get_hash_key(char* value){
int result_242;
char* p_243;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_242=0;
    p_243=value;
    while(    *p_243    ) {
        result_242+=(*p_243);
        p_243++;
    }
    return result_242;
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
_Bool result_244;
    result_244=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_244;
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
_Bool result_245;
    result_245=(c>=32&&c<=126);
    return result_245;
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
void* __right_value101 = (void*)0;
char* __result_obj__108;
int len_246;
void* __right_value102 = (void*)0;
char* result_247;
int i_248;
char* __result_obj__109;
    if(    str==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    len_246=strlen(str);
    result_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_246+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_248=0    ;    i_248<len_246    ;    i_248++    ){
        result_247[i_248]=str[len_246-i_248-1];
    }
    result_247[len_246]=0;
    __result_obj__109 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value103 = (void*)0;
char* __result_obj__110;
int len_249;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
char* __result_obj__111;
void* __right_value106 = (void*)0;
char* __result_obj__112;
void* __right_value107 = (void*)0;
char* __result_obj__113;
void* __right_value108 = (void*)0;
char* result_250;
char* __result_obj__114;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_249=strlen(str);
    if(    head<0    ) {
        head+=len_249;
    }
    if(    tail<0    ) {
        tail+=len_249+1;
    }
    if(    head>tail    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value105=charp_reverse(((char*)(__right_value104=charp_substring(str,tail,head)))))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_249    ) {
        tail=len_249;
    }
    if(    head==tail    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    if(    tail-head+1<1    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    result_250=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_250,str+head,tail-head);
    result_250[tail-head]=0;
    __result_obj__114 = (char*)come_increment_ref_count(result_250);
    (result_250 = come_decrement_ref_count(result_250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value109 = (void*)0;
char* __result_obj__115;
int len_251;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __result_obj__116;
void* __right_value112 = (void*)0;
char* __result_obj__117;
void* __right_value113 = (void*)0;
char* __result_obj__118;
void* __right_value114 = (void*)0;
char* result_252;
char* __result_obj__119;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_251=strlen(str);
    if(    head<0    ) {
        head+=len_251;
    }
    if(    tail<0    ) {
        tail+=len_251+1;
    }
    if(    head>tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value111=charp_reverse(((char*)(__right_value110=charp_substring(str,tail,head)))))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_251    ) {
        tail=len_251;
    }
    if(    head==tail    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    if(    tail-head+1<1    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    result_252=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_252,str+head,tail-head);
    result_252[tail-head]=0;
    __result_obj__119 = (char*)come_increment_ref_count(result_252);
    (result_252 = come_decrement_ref_count(result_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value115 = (void*)0;
char* __result_obj__120;
int len_253;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __result_obj__121;
void* __right_value118 = (void*)0;
char* __result_obj__122;
void* __right_value119 = (void*)0;
char* __result_obj__123;
void* __right_value120 = (void*)0;
char* result_254;
char* __result_obj__124;
    if(    str==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_253=strlen(str);
    if(    head<0    ) {
        head+=len_253;
    }
    if(    tail<0    ) {
        tail+=len_253+1;
    }
    if(    head>tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value117=charp_reverse(((char*)(__right_value116=charp_substring(str,tail,head)))))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_253    ) {
        tail=len_253;
    }
    if(    head==tail    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    if(    tail-head+1<1    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    result_254=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_254,str+head,tail-head);
    result_254[tail-head]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_254);
    (result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* xsprintf(char* msg, ...){
void* __right_value121 = (void*)0;
char* __result_obj__125;
va_list args_255;
char* result_256;
int len_257;
void* __right_value122 = (void*)0;
char* __result_obj__126;
void* __right_value123 = (void*)0;
char* result2_258;
char* __result_obj__127;
result_256 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    __builtin_va_start(args_255,msg);
    len_257=vasprintf(&result_256,msg,args_255);
    __builtin_va_end(args_255);
    if(    len_257<0    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result2_258=(char*)come_increment_ref_count(__builtin_string(result_256));
    free(result_256);
    __result_obj__127 = (char*)come_increment_ref_count(result2_258);
    (result2_258 = come_decrement_ref_count(result2_258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value124 = (void*)0;
char* __result_obj__128;
int len_259;
void* __right_value125 = (void*)0;
char* __result_obj__129;
void* __right_value126 = (void*)0;
char* __result_obj__130;
void* __right_value127 = (void*)0;
char* result_260;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(""))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_259=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(str))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head+=len_259;
    }
    if(    tail<0    ) {
        tail+=len_259+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string(str))));
        (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail>=len_259    ) {
        tail=len_259;
    }
    result_260=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_259-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_260,str,head);
    memcpy(result_260+head,str+tail,len_259-tail);
    result_260[len_259-(tail-head)]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_260);
    (result_260 = come_decrement_ref_count(result_260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_261;
struct list_item$1char$ph* prev_it_262;
    it_261=self->head;
    while(    it_261!=((void*)0)    ) {
        prev_it_262=it_261;
        it_261=it_261->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_266;
char* __dec_obj13;
void* __right_value135 = (void*)0;
struct list_item$1char$ph* litem_267;
char* __dec_obj14;
void* __right_value136 = (void*)0;
struct list_item$1char$ph* litem_268;
char* __dec_obj15;
struct list$1char$ph* __result_obj__134;
    if(    self->len==0    ) {
        litem_266=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_266->prev=((void*)0);
        litem_266->next=((void*)0);
        __dec_obj13=litem_266->item,
        litem_266->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_266;
        self->head=litem_266;
    }
    else if(    self->len==1    ) {
        litem_267=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value135=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_267->prev=self->head;
        litem_267->next=((void*)0);
        __dec_obj14=litem_267->item,
        litem_267->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_267;
        self->head->next=litem_267;
    }
    else {
        litem_268=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value136=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_268->prev=self->tail;
        litem_268->next=((void*)0);
        __dec_obj15=litem_268->item,
        litem_268->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_268;
        self->tail=litem_268;
    }
    self->len++;
    __result_obj__134 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__134;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1char$ph* __result_obj__133;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1char$ph* result_263;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct buffer* str_264;
int i_265;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1char$ph* __result_obj__135;
    if(    self==((void*)0)    ) {
        __result_obj__133 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value129=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value129, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__133;
    }
    result_263=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_264=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_265=0    ;    i_265<charp_length(self)    ;    i_265++    ){
        if(        self[i_265]==c        ) {
            list$1char$ph_push_back(result_263,(char*)come_increment_ref_count(__builtin_string(str_264->buf)));
            buffer_reset(str_264);
        }
        else {
            buffer_append_char(str_264,self[i_265]);
        }
    }
    if(    buffer_length(str_264)!=0    ) {
        list$1char$ph_push_back(result_263,(char*)come_increment_ref_count(__builtin_string(str_264->buf)));
    }
    __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(result_263);
    come_call_finalizer(list$1char$ph$p_finalize, result_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value139 = (void*)0;
char* __result_obj__136;
    __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value139=xsprintf(msg,self))));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value140 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value140=xsprintf(msg,self))));
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_printable(char* str){
int len_269;
void* __right_value141 = (void*)0;
char* result_270;
int n_271;
int i_272;
char c_273;
char* __result_obj__138;
    len_269=charp_length(str);
    result_270=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_269*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_271=0;
    for(    i_272=0    ;    i_272<len_269    ;    i_272++    ){
        c_273=str[i_272];
        if(        (c_273>=0&&c_273<32)||c_273==127        ) {
            result_270[n_271++]=94;
            result_270[n_271++]=c_273+65-1;
        }
        else {
            result_270[n_271++]=c_273;
        }
    }
    result_270[n_271]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_270);
    (result_270 = come_decrement_ref_count(result_270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value142 = (void*)0;
char* __result_obj__139;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct buffer* result_274;
char* p_275;
char* p2_276;
void* __right_value145 = (void*)0;
char* __result_obj__140;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(self))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_275=self;
    while(    (_Bool)1    ) {
        p2_276=strstr(p_275,str);
        if(        p2_276==((void*)0)        ) {
            p2_276=p_275;
            while(            *p2_276            ) {
                p2_276++;
            }
            buffer_append(result_274,p_275,p2_276-p_275);
            break;
        }
        buffer_append(result_274,p_275,p2_276-p_275);
        buffer_append_str(result_274,replace);
        p_275=p2_276+strlen(str);
    }
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value145=buffer_to_string(result_274))));
    come_call_finalizer(buffer_finalize, result_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xbasename(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__141;
char* p_277;
void* __right_value147 = (void*)0;
char* __result_obj__142;
void* __right_value148 = (void*)0;
char* __result_obj__143;
void* __right_value149 = (void*)0;
char* __result_obj__144;
    if(    path==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    p_277=path+strlen(path);
    while(    p_277>=path    ) {
        if(        *p_277==47        ) {
            break;
        }
        else {
            p_277--;
        }
    }
    if(    p_277<path    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    else {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(p_277+1))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xnoextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__145;
void* __right_value151 = (void*)0;
char* path2_278;
char* p_279;
void* __right_value152 = (void*)0;
char* __result_obj__146;
void* __right_value153 = (void*)0;
char* __result_obj__147;
void* __right_value154 = (void*)0;
char* __result_obj__148;
    if(    path==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    path2_278=(char*)come_increment_ref_count(xbasename(path));
    p_279=path2_278+strlen(path2_278);
    while(    p_279>=path2_278    ) {
        if(        *p_279==46        ) {
            break;
        }
        else {
            p_279--;
        }
    }
    if(    p_279<path2_278    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path2_278))));
        (path2_278 = come_decrement_ref_count(path2_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value153=charp_substring(path2_278,0,p_279-path2_278))));
        (path2_278 = come_decrement_ref_count(path2_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (path2_278 = come_decrement_ref_count(path2_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xextname(char* path){
void* __right_value155 = (void*)0;
char* __result_obj__149;
char* p_280;
void* __right_value156 = (void*)0;
char* __result_obj__150;
void* __right_value157 = (void*)0;
char* __result_obj__151;
void* __right_value158 = (void*)0;
char* __result_obj__152;
    if(    path==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(""))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    p_280=path+strlen(path);
    while(    p_280>=path    ) {
        if(        *p_280==46        ) {
            break;
        }
        else {
            p_280--;
        }
    }
    if(    p_280<path    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(path))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(p_280+1))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* bool_to_string(_Bool self){
void* __right_value159 = (void*)0;
char* __result_obj__153;
void* __right_value160 = (void*)0;
char* __result_obj__154;
    if(    self    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("true"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("false"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value161 = (void*)0;
char* __result_obj__155;
void* __right_value162 = (void*)0;
char* __result_obj__156;
    if(    self    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string("true"))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string("false"))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
}

char* char_to_string(char self){
void* __right_value163 = (void*)0;
char* __result_obj__157;
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%c",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* short_to_string(short self){
void* __right_value164 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%d",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* int_to_string(int self){
void* __right_value165 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%d",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* long_to_string(long self){
void* __right_value166 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%ld",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value167 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%ld",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* float_to_string(float self){
void* __right_value168 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value168=xsprintf("%f",self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* double_to_string(double self){
void* __right_value169 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value169=xsprintf("%lf",self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* string_to_string(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__164;
void* __right_value171 = (void*)0;
char* __result_obj__165;
    if(    self==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* charp_to_string(char* self){
void* __right_value172 = (void*)0;
char* __result_obj__166;
void* __right_value173 = (void*)0;
char* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value174 = (void*)0;
char* __result_obj__168;
void* __right_value175 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    puts(self);
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_print(char* self){
void* __right_value176 = (void*)0;
char* __result_obj__170;
void* __right_value177 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    printf("%s",self);
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(self))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* charp_printf(char* self, ...){
void* __right_value178 = (void*)0;
char* __result_obj__172;
char* msg2_281;
va_list args_283;
int len_284;
void* __right_value179 = (void*)0;
char* __result_obj__173;
msg2_281 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    char msg2_282[128];
    memset(&msg2_282, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_283,self);
    len_284=snprintf(msg2_282,128,self,args_283);
    __builtin_va_end(args_283);
    printf("%s",msg2_282);
    free(msg2_282);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(self))));
    (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_285;
    for(    i_285=0    ;    i_285<self    ;    i_285++    ){
        block(parent,i_285);
    }
}

