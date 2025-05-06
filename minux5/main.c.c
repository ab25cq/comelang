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
extern char _end[];
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
typedef unsigned long  int pte_t;

typedef unsigned long  int* pagetable_t;

unsigned long  int* kernel_pagetable;
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
    unsigned long  int* pagetable;
    struct proc* parent;
    char* stack;
};

struct proc* gProc[128];
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
void kinit();
void* kalloc();
void kvminit();
void map_page(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int pa, int perm);
void enable_vm(unsigned long  int* pagetable);
unsigned long  int* uvmcreate();
unsigned long  int* walk(unsigned long  int* pagetable, unsigned long  int va, int alloc);
int copyout(unsigned long  int* pagetable, unsigned long  int dstva, void* src, unsigned long  int len);
int mappages(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int size, unsigned long  int pa, int perm);
unsigned long  int uvmalloc(unsigned long  int* pagetable, unsigned long  int oldsz, unsigned long  int newsz, int perm);
void kfree(void* pa);
void freerange(void* pa_start, void* pa_end);
void timervec();
void enable_timer_interrupts();
void timer_interrupts_for_task_switch();
void timer_interrupts_for_scheduler();
void disable_timer_interrupts();
void task1();
void task2();
struct proc* alloc_proc(void (*task)());
void swtch(struct context* anonymous_var_nameX126, struct context* anonymous_var_nameX127);
void timer_reset();
void timer_handler();
void yield();
void userret(unsigned long  int* pagetable);
void scheduler();
void mask_and_clear_timer_interrupt();
void puts(const char* s);
void user_puts(const char* s);
void usertrap();
void kernelvec();
void trap_init();
void user_mode();
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
unsigned long  int x_35;
memset(&x_35, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_35));
    return (x_35&(1<<3))!=0;
}
static inline void intr_off(){
unsigned long  int x_36;
memset(&x_36, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_36));
    x_36&=~(1<<3);
    __asm volatile("csrw mstatus, %0" : : "r"(x_36));
}
static inline void intr_on(){
unsigned long  int x_37;
memset(&x_37, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r"(x_37));
    x_37|=(1<<3);
    __asm volatile("csrw mstatus, %0" : : "r"(x_37));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_40;
memset(&x_40, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_40));
    return x_40;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_41;
memset(&x_41, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_41));
    return x_41;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_42;
memset(&x_42, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_42));
    return x_42;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_43;
memset(&x_43, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_43));
    return x_43;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_44;
memset(&x_44, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_44));
    return x_44;
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

void kinit(){
    freerange(_end,(_end+4096*4096));
}

void* kalloc(){
struct run* r_9;
void* __result_obj__5;
r_9 = (void*)0;
    r_9=kmem.freelist;
    if(    r_9    ) {
        kmem.freelist=r_9->next;
    }
    __result_obj__5 = (void*)r_9;
    return __result_obj__5;
}

void kvminit(){
unsigned long  int addr_10;
    kernel_pagetable=(unsigned long  int*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_10=2147483648L    ;    addr_10<(2147483648L+128*1024*1024)    ;    addr_10+=4096    ){
        map_page(kernel_pagetable,addr_10,addr_10,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    map_page(kernel_pagetable,268435456,268435456,(1L<<1)|(1L<<2)|(1L<<0));
}

void map_page(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int pa, int perm){
int level_11;
unsigned long  int* pt_12;
int idx_13;
unsigned long  int* new_pt_14;
int idx_15;
memset(&level_11, 0, sizeof(int));
    pt_12=pagetable;
    for(    level_11=2    ;    level_11>0    ;    level_11--    ){
        idx_13=((((unsigned long  int)(va))>>(12+(9*level_11)))&511);
        if(        !(pt_12[idx_13]&(1L<<0))        ) {
            new_pt_14=(unsigned long  int*)kalloc();
            memset(new_pt_14,0,4096);
            pt_12[idx_13]=((unsigned long  int)new_pt_14>>12)<<10|(1L<<0);
        }
        pt_12=(unsigned long  int*)(((pt_12[idx_13]>>10)<<12));
    }
    idx_15=((((unsigned long  int)(va))>>(12+(9*0)))&511);
    pt_12[idx_15]=(pa>>12)<<10|perm|(1L<<0);
}

void enable_vm(unsigned long  int* pagetable){
unsigned long  int satp_16;
    satp_16=(8L<<60)|(((unsigned long  int)pagetable>>12)&-1);
    __asm volatile("csrw satp, %0" : : "r"(satp_16));
    __asm volatile("sfence.vma zero, zero");
}

unsigned long  int* uvmcreate(){
unsigned long  int* pagetable_17;
unsigned long  int* __result_obj__6;
    pagetable_17=(unsigned long  int*)kalloc();
    memset(pagetable_17,0,4096);
    __result_obj__6 = pagetable_17;
    return __result_obj__6;
}

unsigned long  int* walk(unsigned long  int* pagetable, unsigned long  int va, int alloc){
unsigned long  int* __result_obj__7;
int level_18;
int idx_19;
unsigned long  int* pte_20;
unsigned long  int* __result_obj__8;
unsigned long  int* newpage_21;
unsigned long  int* __result_obj__9;
int idx_22;
unsigned long  int* __result_obj__10;
    if(    va>=(1L<<39)    ) {
        __result_obj__7 = (unsigned long  int*)0;
        return __result_obj__7;
    }
    for(    level_18=2    ;    level_18>0    ;    level_18--    ){
        idx_19=(va>>(12+9*level_18))&511;
        pte_20=&pagetable[idx_19];
        if(        *pte_20&(1L<<0)        ) {
            pagetable=(unsigned long  int*)(((*pte_20>>10)<<12));
        }
        else {
            if(            !alloc            ) {
                __result_obj__8 = (unsigned long  int*)0;
                return __result_obj__8;
            }
            newpage_21=(unsigned long  int*)kalloc();
            if(            newpage_21==0            ) {
                __result_obj__9 = (unsigned long  int*)0;
                return __result_obj__9;
            }
            memset(newpage_21,0,4096);
            *pte_20=((unsigned long  int)newpage_21>>12)<<10|(1L<<0);
            pagetable=newpage_21;
        }
    }
    idx_22=(va>>12)&511;
    __result_obj__10 = &pagetable[idx_22];
    return __result_obj__10;
}

int copyout(unsigned long  int* pagetable, unsigned long  int dstva, void* src, unsigned long  int len){
unsigned long  int va_23;
unsigned long  int end_24;
unsigned long  int* pte_25;
unsigned long  int pa_26;
unsigned long  int page_offset_27;
unsigned long  int n_28;
    va_23=dstva;
    end_24=dstva+len;
    while(    va_23<end_24    ) {
        pte_25=walk(pagetable,va_23,0);
        if(        pte_25==0||(*pte_25&(1L<<0))==0        ) {
            return -1;
        }
        pa_26=((*pte_25>>10)<<12);
        page_offset_27=va_23%4096;
        n_28=4096-page_offset_27;
        if(        n_28>end_24-va_23        ) {
            n_28=end_24-va_23;
        }
        memmove((void*)(pa_26+page_offset_27),src,n_28);
        va_23+=n_28;
        src+=n_28;
    }
    return 0;
}

int mappages(unsigned long  int* pagetable, unsigned long  int va, unsigned long  int size, unsigned long  int pa, int perm){
unsigned long  int a_31;
unsigned long  int* pte_32;
memset(&a_31, 0, sizeof(unsigned long  int));
pte_32 = (void*)0;
    va=(((va))&~(4096-1));
    for(    a_31=va    ;    a_31<va+size    ;    a_31+=4096,pa+=4096    ){
        pte_32=walk(pagetable,a_31,1);
        if(        pte_32==0        ) {
            return -1;
        }
        if(        *pte_32&(1L<<0)        ) {
            return -1;
        }
        *pte_32=(pa>>12<<10)|perm|(1L<<0);
    }
    return 0;
}

unsigned long  int uvmalloc(unsigned long  int* pagetable, unsigned long  int oldsz, unsigned long  int newsz, int perm){
unsigned long  int a_33;
void* mem_34;
    if(    newsz<oldsz    ) {
        return oldsz;
    }
    oldsz=(((oldsz)+4096-1)&~(4096-1));
    for(    a_33=oldsz    ;    a_33<newsz    ;    a_33+=4096    ){
        mem_34=kalloc();
        if(        !mem_34        ) {
            puts("uvmalloc: kalloc failed");
        }
        memset(mem_34,0,4096);
        if(        mappages(pagetable,a_33,4096,(unsigned long  int)mem_34,perm)!=0        ) {
            puts("uvmalloc: mappages failed");
        }
    }
    return newsz;
}

void kfree(void* pa){
struct run* r_38;
r_38 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*4096)    ) {
        puts("panic");
    }
    r_38=(struct run*)pa;
    r_38->next=kmem.freelist;
    kmem.freelist=r_38;
}

void freerange(void* pa_start, void* pa_end){
char* p_39;
p_39 = (void*)0;
    p_39=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_39+4096<=(_end+4096*4096)    ;    p_39+=4096    ){
        kfree(p_39);
    }
}

void enable_timer_interrupts(){
unsigned long  int now_45;
    now_45=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_45+-1;
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
    user_puts("TASK1");
    while(    1    ) {
        user_puts("1a");
        user_puts("1b");
        user_puts("1c");
        user_puts("1d");
        user_puts("1e");
        user_puts("1f");
        user_puts("1g");
    }
}

void task2(){
    user_puts("TASK2");
    while(    1    ) {
        user_puts("2a");
        user_puts("2b");
        user_puts("2c");
        user_puts("2d");
        user_puts("2e");
        user_puts("2f");
        user_puts("2g");
    }
}

struct proc* alloc_proc(void (*task)()){
struct proc* result_46;
struct proc* __result_obj__11;
    result_46=kalloc();
    memset(result_46,0,sizeof(struct proc));
    result_46->stack=kalloc();
    result_46->context.sp=(unsigned long  int)(result_46->stack+4096);
    result_46->context.mepc=(unsigned long  int)4096;
    result_46->state=(3);
    gProc[gNumProc++]=result_46;
    result_46->pagetable=uvmcreate();
    uvmalloc(result_46->pagetable,0,131072,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<4));
    copyout(result_46->pagetable,4096,(void*)task,4096);
    mappages(result_46->pagetable,12288,4096,(unsigned long  int)&result_46->context,(1L<<1)|(1L<<2)|(1L<<4));
    __result_obj__11 = result_46;
    return __result_obj__11;
}

void timer_reset(){
unsigned long  int now_47;
    now_47=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_47+10000000;
}

void timer_handler(){
struct proc* p_48;
struct context* tf_49;
    disable_timer_interrupts();
    p_48=gProc[gActiveProc];
    tf_49=(struct context*)TRAPFRAME;
    p_48->context=*tf_49;
    yield();
}

void yield(){
struct proc* p_50;
    p_50=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_50=gProc[gActiveProc];
    p_50->state=(3);
    scheduler();
}

void scheduler(){
int i_51;
struct proc* p_52;
    while(    1    ) {
        for(        i_51=0        ;        i_51<gNumProc        ;        i_51++        ){
            p_52=gProc[i_51];
            if(            p_52->state==(3)            ) {
                gActiveProc=i_51;
                p_52->state=(4);
                enable_vm(p_52->pagetable);
                userret(p_52->pagetable);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_53;
    now_53=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

void user_puts(const char* s){
long syscall_id_55;
    const char* a0_54=s;
    syscall_id_55=1;
    __asm volatile("ecall" : : "r"(a0_54), "r"(syscall_id_55));
}

void usertrap(){
struct proc* p_56;
struct context* tf_57;
unsigned long  int epc_58;
unsigned long  int syscall_id_59;
    p_56=gProc[gActiveProc];
    tf_57=&p_56->context;
    epc_58=tf_57->mepc;
    syscall_id_59=tf_57->a7;
    if(    syscall_id_59==1    ) {
        puts("ABC");
    }
    tf_57->mepc+=4;
}

void trap_init(){
    w_mtvec((unsigned long  int)kernelvec);
}

void user_mode(){
unsigned long  int x_60;
    x_60=r_sstatus();
    x_60&=~(1L<<8);
    w_sstatus(x_60);
}

int main(){
    come_heap_init(0, 0, 0);
    kinit();
    trap_init();
    kvminit();
    enable_vm(kernel_pagetable);
    user_mode();
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
void* __result_obj__12;
void* prev_61;
void* __result_obj__13;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__12 = (void*)-1;
        return __result_obj__12;
    }
    prev_61=heap_end;
    heap_end+=incr;
    __result_obj__13 = prev_61;
    return __result_obj__13;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_62;
struct sBlock* __result_obj__14;
struct sBlock* __result_obj__15;
    curr_62=free_list;
    while(    curr_62    ) {
        if(        curr_62->free&&curr_62->size>=size        ) {
            __result_obj__14 = curr_62;
            return __result_obj__14;
        }
        curr_62=curr_62->next;
    }
    __result_obj__15 = ((void*)0);
    return __result_obj__15;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_63;
struct sBlock* __result_obj__16;
struct sBlock* b_64;
struct sBlock* __result_obj__17;
    mem_63=_sbrk(size+sizeof(struct sBlock));
    if(    mem_63==(void*)-1    ) {
        __result_obj__16 = ((void*)0);
        return __result_obj__16;
    }
    b_64=(struct sBlock*)mem_63;
    b_64->size=size;
    b_64->next=((void*)0);
    b_64->free=0;
    __result_obj__17 = b_64;
    return __result_obj__17;
}

void* malloc(unsigned long  int size){
struct sBlock* block_65;
void* __result_obj__18;
void* __result_obj__19;
struct sBlock* curr_66;
void* __result_obj__20;
block_65 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_65=find_free_block(size))    ) {
        block_65->free=0;
        __result_obj__18 = (void*)(block_65+1);
        return __result_obj__18;
    }
    block_65=request_space(size);
    if(    !block_65    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    if(    !free_list    ) {
        free_list=block_65;
    }
    else {
        curr_66=free_list;
        while(        curr_66->next        ) {
            curr_66=curr_66->next;
        }
        curr_66->next=block_65;
    }
    __result_obj__20 = (void*)(block_65+1);
    return __result_obj__20;
}

void free(void* ptr){
struct sBlock* block_67;
    if(    !ptr    ) {
        return;
    }
    block_67=((struct sBlock*)ptr)-1;
    block_67->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_68;
void* ptr_69;
void* __result_obj__21;
    total_68=n*size;
    ptr_69=malloc(total_68);
    if(    ptr_69    ) {
        memset(ptr_69,0,total_68);
    }
    __result_obj__21 = ptr_69;
    return __result_obj__21;
}

char* strdup(const char* s){
unsigned long  int len_70;
char* p_71;
char* __result_obj__22;
    len_70=strlen(s)+1;
    p_71=malloc(len_70);
    if(    p_71    ) {
        memcpy(p_71,s,len_70);
    }
    __result_obj__22 = p_71;
    return __result_obj__22;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__23;
char* __result_obj__24;
char* __result_obj__25;
    if(    !*needle    ) {
        __result_obj__23 = (char*)haystack;
        return __result_obj__23;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_72=haystack;
        const char* n_73=needle;
        while(        *h_72&&*n_73&&(*h_72==*n_73)        ) {
            h_72++;
            n_73++;
        }
        if(        !*n_73        ) {
            __result_obj__24 = (char*)haystack;
            return __result_obj__24;
        }
    }
    __result_obj__25 = ((void*)0);
    return __result_obj__25;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_74;
int i_75;
void* __result_obj__26;
    cdst_74=(char*)dst;
    for(    i_75=0    ;    i_75<n    ;    i_75++    ){
        cdst_74[i_75]=c;
    }
    __result_obj__26 = dst;
    return __result_obj__26;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_76;
const unsigned char* s2_77;
memset(&s1_76, 0, sizeof(const unsigned char*));
memset(&s2_77, 0, sizeof(const unsigned char*));
    s1_76=v1;
    s2_77=v2;
    while(    n-->0    ) {
        if(        *s1_76!=*s2_77        ) {
            return *s1_76-*s2_77;
        }
        s1_76++,s2_77++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_78;
char* d_79;
void* __result_obj__27;
void* __result_obj__28;
s_78 = (void*)0;
d_79 = (void*)0;
    if(    n==0    ) {
        __result_obj__27 = dst;
        return __result_obj__27;
    }
    s_78=src;
    d_79=dst;
    if(    s_78<d_79&&s_78+n>d_79    ) {
        s_78+=n;
        d_79+=n;
        while(        n-->0        ) {
            *--d_79=*--s_78;
        }
    }
    else {
        while(        n-->0        ) {
            *d_79++=*s_78++;
        }
    }
    __result_obj__28 = dst;
    return __result_obj__28;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__29;
    __result_obj__29 = memmove(dst,src,n);
    return __result_obj__29;
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
char* os_80;
char* __result_obj__30;
os_80 = (void*)0;
    os_80=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__30 = os_80;
    return __result_obj__30;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_81;
char* __result_obj__31;
char* __result_obj__32;
os_81 = (void*)0;
    os_81=s;
    if(    n<=0    ) {
        __result_obj__31 = os_81;
        return __result_obj__31;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__32 = os_81;
    return __result_obj__32;
}

int strlen(const char* s){
int n_82;
memset(&n_82, 0, sizeof(int));
    for(    n_82=0    ;    s[n_82]    ;    n_82++    ){
        ;
    }
    return n_82;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_83;
char* __result_obj__33;
    d_83=dest;
    while(    *d_83    ) {
        d_83++;
    }
    while(    n--&&*src    ) {
        *d_83++=*src++;
    }
    *d_83=0;
    __result_obj__33 = dest;
    return __result_obj__33;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_84;
char* __result_obj__34;
int digit_88;
char* __result_obj__35;
    p_84=buf;
    char tmp_85[32];
    memset(&tmp_85, 0, sizeof(char)    *(32)    );
    int i_86=0;
    int negative_87=0;
    if(    base<2||base>16    ) {
        *p_84=0;
        __result_obj__34 = p_84;
        return __result_obj__34;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_87=1;
        val_=-val_;
    }
    do {
        digit_88=val_%base;
        tmp_85[i_86++]=(((digit_88<10))?(48+digit_88):(97+digit_88-10));
        val_/=base;
    } while(    val_    );
    if(    negative_87    ) {
        *p_84++=45;
    }
    while(    i_86--    ) {
        *p_84++=tmp_85[i_86];
    }
    *p_84=0;
    __result_obj__35 = buf;
    return __result_obj__35;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_89;
char* p_90;
const char* s_91;
unsigned long  int remaining_93;
int __result_obj__36;
int __result_obj__37;
memset(&ap_89, 0, sizeof(va_list));
s_91 = (void*)0;
    __builtin_va_start(ap_89,fmt);
    p_90=out;
    char buf_92[32];
    memset(&buf_92, 0, sizeof(char)    *(32)    );
    remaining_93=out_size;
    if(    remaining_93==0    ) {
        __builtin_va_end(ap_89);
        __result_obj__36 = 0;
        come_call_finalizer(va_list_finalize, (&ap_89), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__36;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_93>1            ) {
                *p_90++=*fmt;
                remaining_93--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_91=__builtin_va_arg(ap_89,const char*);
            while(            *s_91&&remaining_93>1            ) {
                *p_90++=*s_91++;
                remaining_93--;
            }
            break;
            case 100:
            itoa(buf_92,__builtin_va_arg(ap_89,int),10,0);
            s_91=buf_92;
            while(            *s_91&&remaining_93>1            ) {
                *p_90++=*s_91++;
                remaining_93--;
            }
            break;
            case 120:
            itoa(buf_92,(unsigned int)__builtin_va_arg(ap_89,int),16,1);
            s_91=buf_92;
            while(            *s_91&&remaining_93>1            ) {
                *p_90++=*s_91++;
                remaining_93--;
            }
            break;
            case 99:
            if(            remaining_93>1            ) {
                *p_90++=(char)__builtin_va_arg(ap_89,int);
                remaining_93--;
            }
            break;
            case 112:
            s_91="0x";
            while(            *s_91&&remaining_93>1            ) {
                *p_90++=*s_91++;
                remaining_93--;
            }
            itoa(buf_92,(long)__builtin_va_arg(ap_89,void*),16,1);
            s_91=buf_92;
            while(            *s_91&&remaining_93>1            ) {
                *p_90++=*s_91++;
                remaining_93--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_92,__builtin_va_arg(ap_89,long),10,1);
                s_91=buf_92;
                while(                *s_91&&remaining_93>1                ) {
                    *p_90++=*s_91++;
                    remaining_93--;
                }
            }
            break;
            default:
            if(            remaining_93>1            ) {
                *p_90++=37;
                remaining_93--;
                if(                remaining_93>1                ) {
                    *p_90++=*fmt;
                    remaining_93--;
                }
            }
            break;
        }
    }
    *p_90=0;
    __builtin_va_end(ap_89);
    __result_obj__37 = p_90-out;
    come_call_finalizer(va_list_finalize, (&ap_89), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__37;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_94;
char* p_95;
const char* s_96;
unsigned long  int remaining_98;
int __result_obj__38;
int __result_obj__39;
memset(&ap_94, 0, sizeof(va_list));
s_96 = (void*)0;
    __builtin_va_start(ap_94,fmt);
    p_95=out;
    char buf_97[32];
    memset(&buf_97, 0, sizeof(char)    *(32)    );
    remaining_98=out_size;
    if(    remaining_98==0    ) {
        __builtin_va_end(ap_94);
        __result_obj__38 = 0;
        come_call_finalizer(va_list_finalize, (&ap_94), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__38;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_98>1            ) {
                *p_95++=*fmt;
                remaining_98--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_96=__builtin_va_arg(ap_94,const char*);
            while(            *s_96&&remaining_98>1            ) {
                *p_95++=*s_96++;
                remaining_98--;
            }
            break;
            case 100:
            itoa(buf_97,__builtin_va_arg(ap_94,int),10,0);
            s_96=buf_97;
            while(            *s_96&&remaining_98>1            ) {
                *p_95++=*s_96++;
                remaining_98--;
            }
            break;
            case 120:
            itoa(buf_97,(unsigned int)__builtin_va_arg(ap_94,int),16,1);
            s_96=buf_97;
            while(            *s_96&&remaining_98>1            ) {
                *p_95++=*s_96++;
                remaining_98--;
            }
            break;
            case 99:
            if(            remaining_98>1            ) {
                *p_95++=(char)__builtin_va_arg(ap_94,int);
                remaining_98--;
            }
            break;
            case 112:
            s_96="0x";
            while(            *s_96&&remaining_98>1            ) {
                *p_95++=*s_96++;
                remaining_98--;
            }
            itoa(buf_97,(long)__builtin_va_arg(ap_94,void*),16,1);
            s_96=buf_97;
            while(            *s_96&&remaining_98>1            ) {
                *p_95++=*s_96++;
                remaining_98--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_97,__builtin_va_arg(ap_94,long),10,1);
                s_96=buf_97;
                while(                *s_96&&remaining_98>1                ) {
                    *p_95++=*s_96++;
                    remaining_98--;
                }
            }
            break;
            default:
            if(            remaining_98>1            ) {
                *p_95++=37;
                remaining_98--;
                if(                remaining_98>1                ) {
                    *p_95++=*fmt;
                    remaining_98--;
                }
            }
            break;
        }
    }
    *p_95=0;
    __builtin_va_end(ap_94);
    __result_obj__39 = p_95-out;
    come_call_finalizer(va_list_finalize, (&ap_94), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
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
struct buffer* buf_99;
int i_100;
void* __right_value2 = (void*)0;
    buf_99=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 709, "struct buffer*"))));
    buffer_append_format(buf_99,"%s %d\n",sname,sline);
    for(    i_100=gNumComeStackFrame-2    ;    i_100>=0    ;    i_100--    ){
        buffer_append_format(buf_99,"%s %d #%d\n",gComeStackFrameSName[i_100],gComeStackFrameSLine[i_100],gComeStackFrameID[i_100]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_99))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_101;
    for(    i_101=gNumComeStackFrame-1    ;    i_101>=0    ;    i_101--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_101],gComeStackFrameSLine[i_101],gComeStackFrameID[i_101]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
int i_102;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_102=0    ;    i_102<gHeapPages.mSizePages    ;    i_102++    ){
        gHeapPages.mPages[i_102]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_103;
int n_104;
_Bool flag_105;
int i_106;
struct sMemHeaderTiny* it_107;
int n_108;
int i_109;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_103=gAllocMem;
        n_104=0;
        while(        it_103        ) {
            n_104++;
            flag_105=(_Bool)0;
            printf("#%d ",n_104);
            if(            it_103->class_name            ) {
                printf("%p (%s): ",(char*)it_103+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_103->class_name);
            }
            for(            i_106=0            ;            i_106<16            ;            i_106++            ){
                if(                it_103->sname[i_106]                ) {
                    printf("%s %d #%d, ",it_103->sname[i_106],it_103->sline[i_106],it_103->id[i_106]);
                    flag_105=(_Bool)1;
                }
            }
            if(            flag_105            ) {
                puts("");
            }
            it_103=it_103->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_104,gNumAlloc,gNumFree);
    }
    else {
        it_107=(struct sMemHeaderTiny*)gAllocMem;
        n_108=0;
        while(        it_107        ) {
            n_108++;
            if(            it_107->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_108,(char*)it_107+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_107->class_name,it_107->sname,it_107->sline);
            }
            it_107=it_107->next;
        }
        if(        n_108>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_108,gNumAlloc,gNumFree);
        }
    }
    for(    i_109=0    ;    i_109<gHeapPages.mSizePages    ;    i_109++    ){
        free(gHeapPages.mPages[i_109]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_110;
unsigned long  int free_area_111;
int new_size_pages_112;
char** new_pages_113;
int i_114;
void* __result_obj__41;
    result_110=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_110=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_110,0,size);
        }
        if(        result_110==((void*)0)        ) {
            free_area_111=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_111            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_112=gHeapPages.mSizePages*2;
                    new_pages_113=calloc(1,sizeof(char*)*new_size_pages_112);
                    i_114=0;
                    for(                    ;                    i_114<gHeapPages.mSizePages                    ;                    i_114++                    ){
                        new_pages_113[i_114]=gHeapPages.mPages[i_114];
                    }
                    for(                    ;                    i_114<new_size_pages_112                    ;                    i_114++                    ){
                        new_pages_113[i_114]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_113;
                    gHeapPages.mSizePages=new_size_pages_112;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_110=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_110=calloc(1,size);
    }
    __result_obj__41 = result_110;
    return __result_obj__41;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_115;
struct sMemHeader* it_116;
int i_117;
int i_118;
void* __result_obj__42;
void* result_119;
struct sMemHeaderTiny* it_120;
void* __result_obj__43;
memset(&i_117, 0, sizeof(int));
memset(&i_118, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_115=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_116=result_115;
        it_116->allocated=177783;
        it_116->size=size+sizeof(struct sMemHeader);
        it_116->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_117=0            ;            i_117<gNumComeStackFrame            ;            i_117++            ){
                it_116->sname[i_117]=gComeStackFrameSName[i_117];
                it_116->sline[i_117]=gComeStackFrameSLine[i_117];
                it_116->id[i_117]=gComeStackFrameID[i_117];
            }
        }
        else {
            for(            i_118=0            ;            i_118<16            ;            i_118++            ){
                it_116->sname[i_118]=gComeStackFrameSName[gNumComeStackFrame-1-i_118];
                it_116->sline[i_118]=gComeStackFrameSLine[gNumComeStackFrame-1-i_118];
                it_116->id[i_118]=gComeStackFrameID[gNumComeStackFrame-1-i_118];
            }
        }
        come_pop_stackframe_v2();
        it_116->next=gAllocMem;
        it_116->prev=((void*)0);
        it_116->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_116;
        }
        gAllocMem=it_116;
        gNumAlloc++;
        __result_obj__42 = (char*)result_115+sizeof(struct sMemHeader);
        return __result_obj__42;
    }
    else {
        result_119=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_120=result_119;
        it_120->allocated=177783;
        it_120->class_name=class_name;
        it_120->sname=sname;
        it_120->sline=sline;
        it_120->size=size+sizeof(struct sMemHeaderTiny);
        it_120->free_next=((void*)0);
        it_120->next=(struct sMemHeaderTiny*)gAllocMem;
        it_120->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_120;
        }
        gAllocMem=(struct sMemHeader*)it_120;
        gNumAlloc++;
        __result_obj__43 = (char*)result_119+sizeof(struct sMemHeaderTiny);
        return __result_obj__43;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_121;
struct sMemHeader* prev_it_122;
struct sMemHeader* next_it_123;
unsigned long  int size_124;
struct sMemHeaderTiny* it_125;
struct sMemHeaderTiny* prev_it_126;
struct sMemHeaderTiny* next_it_127;
unsigned long  int size_128;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_121=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_121->allocated!=177783            ) {
                return;
            }
            it_121->allocated=0;
            prev_it_122=it_121->prev;
            next_it_123=it_121->next;
            if(            gAllocMem==it_121            ) {
                gAllocMem=next_it_123;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_122                ) {
                    prev_it_122->next=next_it_123;
                }
                if(                next_it_123                ) {
                    next_it_123->prev=prev_it_122;
                }
            }
            size_124=it_121->size;
            if(            size_124<4096            ) {
                if(                gHeapPages.mFreeMem[size_124]==((void*)0)                ) {
                    it_121->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_124]=(struct sMemHeaderTiny*)it_121;
                }
                else {
                    it_121->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_124];
                    gHeapPages.mFreeMem[size_124]=(struct sMemHeaderTiny*)it_121;
                }
            }
            else {
                free(it_121);
            }
            gNumFree++;
        }
        else {
            it_125=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_125->allocated!=177783            ) {
                return;
            }
            it_125->allocated=0;
            prev_it_126=it_125->prev;
            next_it_127=it_125->next;
            if(            gAllocMem==it_125            ) {
                gAllocMem=(struct sMemHeader*)next_it_127;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_126                ) {
                    prev_it_126->next=next_it_127;
                }
                if(                next_it_127                ) {
                    next_it_127->prev=prev_it_126;
                }
            }
            size_128=it_125->size;
            if(            size_128<4096            ) {
                if(                gHeapPages.mFreeMem[size_128]==((void*)0)                ) {
                    it_125->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_128]=it_125;
                }
                else {
                    it_125->free_next=gHeapPages.mFreeMem[size_128];
                    gHeapPages.mFreeMem[size_128]=it_125;
                }
            }
            else {
                free(it_125);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_129;
char* __result_obj__44;
struct sMemHeaderTiny* it_130;
char* __result_obj__45;
    if(    gComeDebugLib    ) {
        it_129=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_129->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_129);
            exit(2);
        }
        __result_obj__44 = it_129->class_name;
        return __result_obj__44;
    }
    else {
        it_130=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_130->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_130);
            exit(2);
        }
        __result_obj__45 = it_130->class_name;
        return __result_obj__45;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_131;
int i_132;
struct sMemHeaderTiny* it_133;
    if(    gComeDebugLib    ) {
        it_131=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_131->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_131->class_name        ) {
            printf("(%s): ",it_131->class_name);
        }
        for(        i_132=0        ;        i_132<16        ;        i_132++        ){
            if(            it_131->sname[i_132]            ) {
                printf("%s %d #%d, ",it_131->sname[i_132],it_131->sline[i_132],it_131->id[i_132]);
            }
        }
        puts("");
    }
    else {
        it_133=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_133->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_133->class_name,it_133->sname,it_133->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_134;
unsigned long  int* ref_count_135;
unsigned long  int* size2_136;
void* __result_obj__46;
    mem_134=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_135=(unsigned long  int*)mem_134;
    *ref_count_135=0;
    size2_136=(unsigned long  int*)(mem_134+sizeof(unsigned long  int));
    *size2_136=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__46 = mem_134+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__46;
}

void come_free(void* mem){
unsigned long  int* ref_count_137;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_137=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_137);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__47;
char* mem_138;
unsigned long  int* size_p_139;
unsigned long  int size_140;
void* result_141;
void* __result_obj__48;
    if(    !block    ) {
        __result_obj__47 = ((void*)0);
        return __result_obj__47;
    }
    mem_138=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_139=(unsigned long  int*)(mem_138+sizeof(unsigned long  int));
    size_140=*size_p_139-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_141=come_calloc_v2(1,size_140,sname,sline,class_name);
    memcpy(result_141,block,size_140);
    __result_obj__48 = result_141;
    return __result_obj__48;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_142;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_142=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_142)++;
    __result_obj__50 = mem;
    return __result_obj__50;
}

void* come_print_ref_count(void* mem){
void* __result_obj__51;
unsigned long  int* ref_count_143;
void* __result_obj__52;
    if(    mem==((void*)0)    ) {
        __result_obj__51 = mem;
        return __result_obj__51;
    }
    ref_count_143=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_143);
    __result_obj__52 = mem;
    return __result_obj__52;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__53;
void* __result_obj__54;
unsigned long  int* ref_count_144;
unsigned long  int count_145;
void (*finalizer_146)(void*);
void* __result_obj__55;
void* __result_obj__56;
memset(&finalizer_146, 0, sizeof(void (*)(void*)));
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
    ref_count_144=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_144)--;
    }
    count_145=*ref_count_144;
    if(    !no_free&&count_145<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_146=protocol_fun;
            finalizer_146(protocol_obj);
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
void (*finalizer_147)(void*);
void (*finalizer_148)(void*);
void (*finalizer_149)(void*);
unsigned long  int* ref_count_150;
unsigned long  int count_151;
void (*finalizer_152)(void*);
void (*finalizer_153)(void*);
void (*finalizer_154)(void*);
memset(&finalizer_147, 0, sizeof(void (*)(void*)));
memset(&finalizer_148, 0, sizeof(void (*)(void*)));
memset(&finalizer_149, 0, sizeof(void (*)(void*)));
memset(&finalizer_152, 0, sizeof(void (*)(void*)));
memset(&finalizer_153, 0, sizeof(void (*)(void*)));
memset(&finalizer_154, 0, sizeof(void (*)(void*)));
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
                finalizer_147=protocol_fun;
                finalizer_147(protocol_obj);
            }
            finalizer_148=fun;
            finalizer_148(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_149=protocol_fun;
                finalizer_149(protocol_obj);
            }
        }
    }
    else {
        ref_count_150=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_150)--;
        }
        count_151=*ref_count_150;
        if(        !no_free&&count_151<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_152=protocol_fun;
                        finalizer_152(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_153=fun;
                        finalizer_153(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_154=protocol_fun;
                        finalizer_154(protocol_obj);
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
int len_155;
void* __right_value4 = (void*)0;
char* result_156;
char* __result_obj__58;
    if(    str==((void*)0)    ) {
        __result_obj__57 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__57;
    }
    len_155=strlen(str)+1;
    result_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_155)), "/usr/local/include/comelang.h", 1385, "char*"));
    strncpy(result_156,str,len_155);
    __result_obj__58 = (char*)come_increment_ref_count(result_156);
    (result_156 = come_decrement_ref_count(result_156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
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
char* __result_obj__59;
    __result_obj__59 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__59;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__60;
    __result_obj__60 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__60;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__61;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3339, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__61 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__62;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3349, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__63;
void* __right_value8 = (void*)0;
struct buffer* result_157;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__63;
    }
    result_157=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3369, "struct buffer*"));
    result_157->size=self->size;
    __dec_obj3=result_157->buf,
    result_157->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3372, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_157->len=self->len;
    memcpy(result_157->buf,self->buf,self->len);
    __result_obj__64 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__65;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__65 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__65;
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
struct buffer* __result_obj__66;
void* __right_value12 = (void*)0;
char* old_buf_158;
int old_len_159;
int new_size_160;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__67;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__66 = self;
        return __result_obj__66;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_158=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3420, "char*"));
        memcpy(old_buf_158,self->buf,self->size);
        old_len_159=self->len;
        new_size_160=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_160)), "/usr/local/include/comelang.h", 3424, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_158,old_len_159);
        self->buf[old_len_159]=0;
        self->size=new_size_160;
        (old_buf_158 = come_decrement_ref_count(old_buf_158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__68;
void* __right_value14 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3443, "char*"));
        old_len_162=self->len;
        new_size_163=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3447, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__70;
int size_164;
void* __right_value16 = (void*)0;
char* old_buf_165;
int old_len_166;
int new_size_167;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__71;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    size_164=strlen(mem);
    if(    self->len+size_164+1+1>=self->size    ) {
        old_buf_165=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3469, "char*"));
        memcpy(old_buf_165,self->buf,self->size);
        old_len_166=self->len;
        new_size_167=(self->size+size_164+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_167)), "/usr/local/include/comelang.h", 3473, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_165,old_len_166);
        self->buf[old_len_166]=0;
        self->size=new_size_167;
        (old_buf_165 = come_decrement_ref_count(old_buf_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_164);
    self->len+=size_164;
    self->buf[self->len]=0;
    __result_obj__71 = self;
    return __result_obj__71;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__72;
va_list args_168;
char* result_169;
int len_170;
struct buffer* __result_obj__73;
void* __right_value18 = (void*)0;
char* mem_171;
int size_172;
void* __right_value19 = (void*)0;
char* old_buf_173;
int old_len_174;
int new_size_175;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__74;
memset(&args_168, 0, sizeof(va_list));
result_169 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__72 = self;
        return __result_obj__72;
    }
    __builtin_va_start(args_168,msg);
    len_170=vasprintf(&result_169,msg,args_168);
    __builtin_va_end(args_168);
    if(    len_170<0    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    mem_171=(char*)come_increment_ref_count(__builtin_string(result_169));
    size_172=strlen(mem_171);
    if(    self->len+size_172+1+1>=self->size    ) {
        old_buf_173=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3506, "char*"));
        memcpy(old_buf_173,self->buf,self->size);
        old_len_174=self->len;
        new_size_175=(self->size+size_172+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_175)), "/usr/local/include/comelang.h", 3510, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_173,old_len_174);
        self->buf[old_len_174]=0;
        self->size=new_size_175;
        (old_buf_173 = come_decrement_ref_count(old_buf_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_171,size_172);
    self->len+=size_172;
    self->buf[self->len]=0;
    free(result_169);
    __result_obj__74 = self;
    (mem_171 = come_decrement_ref_count(mem_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__74;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__75;
int size_176;
void* __right_value21 = (void*)0;
char* old_buf_177;
int old_len_178;
int new_size_179;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__76;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__75 = self;
        return __result_obj__75;
    }
    size_176=strlen(mem)+1;
    if(    self->len+size_176+1+1+1>=self->size    ) {
        old_buf_177=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3532, "char*"));
        memcpy(old_buf_177,self->buf,self->size);
        old_len_178=self->len;
        new_size_179=(self->size+size_176+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_179)), "/usr/local/include/comelang.h", 3536, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_177,old_len_178);
        self->buf[old_len_178]=0;
        self->size=new_size_179;
        (old_buf_177 = come_decrement_ref_count(old_buf_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_176);
    self->len+=size_176;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__77;
int* mem_180;
int size_181;
void* __right_value23 = (void*)0;
char* old_buf_182;
int old_len_183;
int new_size_184;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    mem_180=&value;
    size_181=sizeof(int);
    if(    self->len+size_181+1+1>=self->size    ) {
        old_buf_182=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3559, "char*"));
        memcpy(old_buf_182,self->buf,self->size);
        old_len_183=self->len;
        new_size_184=(self->size+size_181+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_184)), "/usr/local/include/comelang.h", 3563, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_182,old_len_183);
        self->buf[old_len_183]=0;
        self->size=new_size_184;
        (old_buf_182 = come_decrement_ref_count(old_buf_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_180,size_181);
    self->len+=size_181;
    self->buf[self->len]=0;
    __result_obj__78 = self;
    return __result_obj__78;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_185;
int size_186;
void* __right_value25 = (void*)0;
char* old_buf_187;
int old_len_188;
int new_size_189;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__79;
    mem_185=&value;
    size_186=sizeof(long);
    if(    self->len+size_186+1+1>=self->size    ) {
        old_buf_187=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3582, "char*"));
        memcpy(old_buf_187,self->buf,self->size);
        old_len_188=self->len;
        new_size_189=(self->size+size_186+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_189)), "/usr/local/include/comelang.h", 3586, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_187,old_len_188);
        self->buf[old_len_188]=0;
        self->size=new_size_189;
        (old_buf_187 = come_decrement_ref_count(old_buf_187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_185,size_186);
    self->len+=size_186;
    self->buf[self->len]=0;
    __result_obj__79 = self;
    return __result_obj__79;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__80;
short* mem_190;
int size_191;
void* __right_value27 = (void*)0;
char* old_buf_192;
int old_len_193;
int new_size_194;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = ((void*)0);
        return __result_obj__80;
    }
    mem_190=&value;
    size_191=sizeof(short);
    if(    self->len+size_191+1+1>=self->size    ) {
        old_buf_192=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3609, "char*"));
        memcpy(old_buf_192,self->buf,self->size);
        old_len_193=self->len;
        new_size_194=(self->size+size_191+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_194)), "/usr/local/include/comelang.h", 3613, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_192,old_len_193);
        self->buf[old_len_193]=0;
        self->size=new_size_194;
        (old_buf_192 = come_decrement_ref_count(old_buf_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_190,size_191);
    self->len+=size_191;
    self->buf[self->len]=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__82;
int len_195;
int new_size_196;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_197;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    len_195=self->len;
    len_195=(len_195+3)&~3;
    if(    len_195>=self->size    ) {
        new_size_196=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_196)), "/usr/local/include/comelang.h", 3637, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_196;
    }
    for(    i_197=self->len    ;    i_197<len_195    ;    i_197++    ){
        self->buf[i_197]=0;
    }
    self->len=len_195;
    __result_obj__83 = self;
    return __result_obj__83;
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
struct buffer* result_198;
struct buffer* __result_obj__84;
struct buffer* __result_obj__85;
    result_198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3667, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__84 = (struct buffer*)come_increment_ref_count(result_198);
        come_call_finalizer(buffer_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    buffer_append_str(result_198,self);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_198);
    come_call_finalizer(buffer_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__86;
void* __right_value33 = (void*)0;
char* __result_obj__87;
    if(    self==((void*)0)    ) {
        __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__86;
    }
    __result_obj__87 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__87;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__88;
    __result_obj__88 = self->buf;
    return __result_obj__88;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_199;
struct buffer* __result_obj__89;
    result_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3694, "struct buffer*"))));
    buffer_append(result_199,self,sizeof(char)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_199);
    come_call_finalizer(buffer_finalize, result_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_200;
int i_201;
struct buffer* __result_obj__90;
    result_200=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3701, "struct buffer*"))));
    for(    i_201=0    ;    i_201<len    ;    i_201++    ){
        buffer_append(result_200,self[i_201],strlen(self[i_201]));
    }
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_200);
    come_call_finalizer(buffer_finalize, result_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_202;
struct buffer* __result_obj__91;
    result_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3710, "struct buffer*"))));
    buffer_append(result_202,(char*)self,sizeof(short)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_202);
    come_call_finalizer(buffer_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_203;
struct buffer* __result_obj__92;
    result_203=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3717, "struct buffer*"))));
    buffer_append(result_203,(char*)self,sizeof(int)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_203);
    come_call_finalizer(buffer_finalize, result_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_204;
struct buffer* __result_obj__93;
    result_204=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3724, "struct buffer*"))));
    buffer_append(result_204,(char*)self,sizeof(long)*len);
    __result_obj__93 = (struct buffer*)come_increment_ref_count(result_204);
    come_call_finalizer(buffer_finalize, result_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_205;
struct buffer* __result_obj__94;
    result_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3731, "struct buffer*"))));
    buffer_append(result_205,(char*)self,sizeof(float)*len);
    __result_obj__94 = (struct buffer*)come_increment_ref_count(result_205);
    come_call_finalizer(buffer_finalize, result_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_206;
struct buffer* __result_obj__95;
    result_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3738, "struct buffer*"))));
    buffer_append(result_206,(char*)self,sizeof(double)*len);
    __result_obj__95 = (struct buffer*)come_increment_ref_count(result_206);
    come_call_finalizer(buffer_finalize, result_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

char* buffer_printable(struct buffer* self){
int len_207;
void* __right_value48 = (void*)0;
char* result_208;
int n_209;
int i_210;
unsigned char c_211;
char* __result_obj__96;
    len_207=self->len;
    result_208=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_207*2+1)), "/usr/local/include/comelang.h", 3746, "char*"));
    n_209=0;
    for(    i_210=0    ;    i_210<len_207    ;    i_210++    ){
        c_211=self->buf[i_210];
        if(        (c_211>=0&&c_211<32)||c_211==127        ) {
            result_208[n_209++]=94;
            result_208[n_209++]=c_211+65-1;
        }
        else if(        c_211>127        ) {
            result_208[n_209++]=63;
        }
        else {
            result_208[n_209++]=c_211;
        }
    }
    result_208[n_209]=0;
    __result_obj__96 = (char*)come_increment_ref_count(result_208);
    (result_208 = come_decrement_ref_count(result_208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__96;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_212;
struct list$1char$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0    ;    i_212<num_value    ;    i_212++    ){
        list$1char$_push_back(self,values[i_212]);
    }
    __result_obj__98 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_213;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_214;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_215;
struct list$1char$* __result_obj__97;
    if(    self->len==0    ) {
        litem_213=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$*"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1    ) {
        litem_214=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$*"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$*"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_216;
struct list_item$1char$* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__99;
    __result_obj__99 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3787, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_218;
struct list$1char$p* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0    ;    i_218<num_value    ;    i_218++    ){
        list$1char$p_push_back(self,values[i_218]);
    }
    __result_obj__101 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_219;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_220;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_221;
struct list$1char$p* __result_obj__100;
    if(    self->len==0    ) {
        litem_219=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$p*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1    ) {
        litem_220=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$p*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$p*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_222;
struct list_item$1char$p* prev_it_223;
    it_222=self->head;
    while(    it_222!=((void*)0)    ) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__102;
    __result_obj__102 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3792, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_224;
struct list$1short$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0    ;    i_224<num_value    ;    i_224++    ){
        list$1short$_push_back(self,values[i_224]);
    }
    __result_obj__104 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_225;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_226;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_227;
struct list$1short$* __result_obj__103;
    if(    self->len==0    ) {
        litem_225=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1short$*"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1    ) {
        litem_226=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1short$*"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1short$*"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_228;
struct list_item$1short$* prev_it_229;
    it_228=self->head;
    while(    it_228!=((void*)0)    ) {
        prev_it_229=it_228;
        it_228=it_228->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__105;
    __result_obj__105 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3797, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_230;
struct list$1int$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_230=0    ;    i_230<num_value    ;    i_230++    ){
        list$1int$_push_back(self,values[i_230]);
    }
    __result_obj__107 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_231;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_232;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_233;
struct list$1int$* __result_obj__106;
    if(    self->len==0    ) {
        litem_231=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1int$*"))));
        litem_231->prev=((void*)0);
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail=litem_231;
        self->head=litem_231;
    }
    else if(    self->len==1    ) {
        litem_232=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1int$*"))));
        litem_232->prev=self->head;
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head->next=litem_232;
    }
    else {
        litem_233=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1int$*"))));
        litem_233->prev=self->tail;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail->next=litem_233;
        self->tail=litem_233;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_234;
struct list_item$1int$* prev_it_235;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__108;
    __result_obj__108 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3802, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_236;
struct list$1long$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_236=0    ;    i_236<num_value    ;    i_236++    ){
        list$1long$_push_back(self,values[i_236]);
    }
    __result_obj__110 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_237;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_238;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_239;
struct list$1long$* __result_obj__109;
    if(    self->len==0    ) {
        litem_237=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1long$*"))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1    ) {
        litem_238=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1long$*"))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        litem_238->item=item;
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1long$*"))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_240;
struct list_item$1long$* prev_it_241;
    it_240=self->head;
    while(    it_240!=((void*)0)    ) {
        prev_it_241=it_240;
        it_240=it_240->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__111;
    __result_obj__111 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3807, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_242;
struct list$1float$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0    ;    i_242<num_value    ;    i_242++    ){
        list$1float$_push_back(self,values[i_242]);
    }
    __result_obj__113 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_243;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_244;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_245;
struct list$1float$* __result_obj__112;
    if(    self->len==0    ) {
        litem_243=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1float$*"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1    ) {
        litem_244=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1float$*"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        litem_244->item=item;
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1float$*"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_246;
struct list_item$1float$* prev_it_247;
    it_246=self->head;
    while(    it_246!=((void*)0)    ) {
        prev_it_247=it_246;
        it_246=it_246->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__114;
    __result_obj__114 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3812, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_248;
struct list$1double$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_248=0    ;    i_248<num_value    ;    i_248++    ){
        list$1double$_push_back(self,values[i_248]);
    }
    __result_obj__116 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_249;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_250;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_251;
struct list$1double$* __result_obj__115;
    if(    self->len==0    ) {
        litem_249=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1double$*"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        litem_249->item=item;
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1    ) {
        litem_250=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1double$*"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        litem_250->item=item;
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1double$*"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        litem_251->item=item;
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_252;
struct list_item$1double$* prev_it_253;
    it_252=self->head;
    while(    it_252!=((void*)0)    ) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__117;
    __result_obj__117 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3817, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
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
char* __result_obj__118;
int len_254;
void* __right_value85 = (void*)0;
char* result_255;
char* __result_obj__119;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_254=strlen(self)+strlen(right);
    result_255=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_254+1)), "/usr/local/include/comelang.h", 4046, "char*"));
    strncpy(result_255,self,len_254+1);
    strncat(result_255,right,len_254+1);
    __result_obj__119 = (char*)come_increment_ref_count(result_255);
    (result_255 = come_decrement_ref_count(result_255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__120;
int len_256;
void* __right_value87 = (void*)0;
char* result_257;
char* __result_obj__121;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_256=strlen(self)+strlen(right);
    result_257=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_256+1)), "/usr/local/include/comelang.h", 4061, "char*"));
    strncpy(result_257,self,len_256+1);
    strncat(result_257,right,len_256+1);
    __result_obj__121 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__122;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_258;
int i_259;
void* __right_value91 = (void*)0;
char* __result_obj__123;
    if(    self==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "struct buffer*"))));
    for(    i_259=0    ;    i_259<right    ;    i_259++    ){
        buffer_append_str(buf_258,self);
    }
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_258))));
    come_call_finalizer(buffer_finalize, buf_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__124;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_260;
int i_261;
void* __right_value95 = (void*)0;
char* __result_obj__125;
    if(    self==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    buf_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "struct buffer*"))));
    for(    i_261=0    ;    i_261<right    ;    i_261++    ){
        buffer_append_str(buf_260,self);
    }
    __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_260))));
    come_call_finalizer(buffer_finalize, buf_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_262;
int i_263;
    result_262=(_Bool)0;
    for(    i_263=0    ;    i_263<len    ;    i_263++    ){
        if(        strncmp(self[i_263],str,strlen(self[i_263]))==0        ) {
            result_262=(_Bool)1;
            break;
        }
    }
    return result_262;
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
int result_264;
char* p_265;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_264=0;
    p_265=value;
    while(    *p_265    ) {
        result_264+=(*p_265);
        p_265++;
    }
    return result_264;
}

unsigned int string_get_hash_key(char* value){
int result_266;
char* p_267;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_266=0;
    p_267=value;
    while(    *p_267    ) {
        result_266+=(*p_267);
        p_267++;
    }
    return result_266;
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
_Bool result_268;
    result_268=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_268;
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
_Bool result_269;
    result_269=(c>=32&&c<=126);
    return result_269;
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
char* __result_obj__126;
int len_270;
void* __right_value97 = (void*)0;
char* result_271;
int i_272;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_270=strlen(str);
    result_271=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_270+1)), "/usr/local/include/comelang.h", 4356, "char*"));
    for(    i_272=0    ;    i_272<len_270    ;    i_272++    ){
        result_271[i_272]=str[len_270-i_272-1];
    }
    result_271[len_270]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_271);
    (result_271 = come_decrement_ref_count(result_271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__128;
int len_273;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__129;
void* __right_value101 = (void*)0;
char* __result_obj__130;
void* __right_value102 = (void*)0;
char* __result_obj__131;
void* __right_value103 = (void*)0;
char* result_274;
char* __result_obj__132;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_273=strlen(str);
    if(    head<0    ) {
        head+=len_273;
    }
    if(    tail<0    ) {
        tail+=len_273+1;
    }
    if(    head>tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_273    ) {
        tail=len_273;
    }
    if(    head==tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail-head+1<1    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    result_274=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4402, "char*"));
    memcpy(result_274,str+head,tail-head);
    result_274[tail-head]=0;
    __result_obj__132 = (char*)come_increment_ref_count(result_274);
    (result_274 = come_decrement_ref_count(result_274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__133;
int len_275;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__134;
void* __right_value107 = (void*)0;
char* __result_obj__135;
void* __right_value108 = (void*)0;
char* __result_obj__136;
void* __right_value109 = (void*)0;
char* result_276;
char* __result_obj__137;
    if(    str==((void*)0)    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    len_275=strlen(str);
    if(    head<0    ) {
        head+=len_275;
    }
    if(    tail<0    ) {
        tail+=len_275+1;
    }
    if(    head>tail    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_275    ) {
        tail=len_275;
    }
    if(    head==tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    tail-head+1<1    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    result_276=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4445, "char*"));
    memcpy(result_276,str+head,tail-head);
    result_276[tail-head]=0;
    __result_obj__137 = (char*)come_increment_ref_count(result_276);
    (result_276 = come_decrement_ref_count(result_276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__138;
int len_277;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__139;
void* __right_value113 = (void*)0;
char* __result_obj__140;
void* __right_value114 = (void*)0;
char* __result_obj__141;
void* __right_value115 = (void*)0;
char* result_278;
char* __result_obj__142;
    if(    str==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    len_277=strlen(str);
    if(    head<0    ) {
        head+=len_277;
    }
    if(    tail<0    ) {
        tail+=len_277+1;
    }
    if(    head>tail    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_277    ) {
        tail=len_277;
    }
    if(    head==tail    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    if(    tail-head+1<1    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    result_278=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4488, "char*"));
    memcpy(result_278,str+head,tail-head);
    result_278[tail-head]=0;
    __result_obj__142 = (char*)come_increment_ref_count(result_278);
    (result_278 = come_decrement_ref_count(result_278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__143;
va_list args_279;
char* result_280;
int len_281;
void* __right_value117 = (void*)0;
char* __result_obj__144;
void* __right_value118 = (void*)0;
char* result2_282;
char* __result_obj__145;
memset(&args_279, 0, sizeof(va_list));
result_280 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    __builtin_va_start(args_279,msg);
    len_281=vasprintf(&result_280,msg,args_279);
    __builtin_va_end(args_279);
    if(    len_281<0    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    result2_282=(char*)come_increment_ref_count(__builtin_string(result_280));
    free(result_280);
    __result_obj__145 = (char*)come_increment_ref_count(result2_282);
    (result2_282 = come_decrement_ref_count(result2_282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__146;
int len_283;
void* __right_value120 = (void*)0;
char* __result_obj__147;
void* __right_value121 = (void*)0;
char* __result_obj__148;
void* __right_value122 = (void*)0;
char* result_284;
char* __result_obj__149;
    if(    str==((void*)0)    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    len_283=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    if(    head<0    ) {
        head+=len_283;
    }
    if(    tail<0    ) {
        tail+=len_283+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    if(    tail>=len_283    ) {
        tail=len_283;
    }
    result_284=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_283-(tail-head)+1)), "/usr/local/include/comelang.h", 4550, "char*"));
    memcpy(result_284,str,head);
    memcpy(result_284+head,str+tail,len_283-tail);
    result_284[len_283-(tail-head)]=0;
    __result_obj__149 = (char*)come_increment_ref_count(result_284);
    (result_284 = come_decrement_ref_count(result_284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__150;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__150 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(    it_285!=((void*)0)    ) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj15;
struct list$1char$ph* __result_obj__152;
    if(    self->len==0    ) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$ph*"))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj13=litem_290->item,
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1    ) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$ph*"))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj14=litem_291->item,
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$ph*"))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj15=litem_292->item,
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result_obj__152 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__152;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__151;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_287;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_288;
int i_289;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__153;
    if(    self==((void*)0)    ) {
        __result_obj__151 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4563, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__151;
    }
    result_287=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4566, "struct list$1char$ph*"))));
    str_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4568, "struct buffer*"))));
    for(    i_289=0    ;    i_289<charp_length(self)    ;    i_289++    ){
        if(        self[i_289]==c        ) {
            list$1char$ph_push_back(result_287,(char*)come_increment_ref_count(__builtin_string(str_288->buf)));
            buffer_reset(str_288);
        }
        else {
            buffer_append_char(str_288,self[i_289]);
        }
    }
    if(    buffer_length(str_288)!=0    ) {
        list$1char$ph_push_back(result_287,(char*)come_increment_ref_count(__builtin_string(str_288->buf)));
    }
    __result_obj__153 = (struct list$1char$ph*)come_increment_ref_count(result_287);
    come_call_finalizer(list$1char$ph$p_finalize, result_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__154;
    __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__155;
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* charp_printable(char* str){
int len_293;
void* __right_value136 = (void*)0;
char* result_294;
int n_295;
int i_296;
char c_297;
char* __result_obj__156;
    len_293=charp_length(str);
    result_294=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_293*2+1)), "/usr/local/include/comelang.h", 4600, "char*"));
    n_295=0;
    for(    i_296=0    ;    i_296<len_293    ;    i_296++    ){
        c_297=str[i_296];
        if(        (c_297>=0&&c_297<32)||c_297==127        ) {
            result_294[n_295++]=94;
            result_294[n_295++]=c_297+65-1;
        }
        else {
            result_294[n_295++]=c_297;
        }
    }
    result_294[n_295]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_294);
    (result_294 = come_decrement_ref_count(result_294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__157;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_298;
char* p_299;
char* p2_300;
void* __right_value140 = (void*)0;
char* __result_obj__158;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    result_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4628, "struct buffer*"))));
    p_299=self;
    while(    (_Bool)1    ) {
        p2_300=strstr(p_299,str);
        if(        p2_300==((void*)0)        ) {
            p2_300=p_299;
            while(            *p2_300            ) {
                p2_300++;
            }
            buffer_append(result_298,p_299,p2_300-p_299);
            break;
        }
        buffer_append(result_298,p_299,p2_300-p_299);
        buffer_append_str(result_298,replace);
        p_299=p2_300+strlen(str);
    }
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_298))));
    come_call_finalizer(buffer_finalize, result_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__159;
char* p_301;
void* __right_value142 = (void*)0;
char* __result_obj__160;
void* __right_value143 = (void*)0;
char* __result_obj__161;
void* __right_value144 = (void*)0;
char* __result_obj__162;
    if(    path==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    p_301=path+strlen(path);
    while(    p_301>=path    ) {
        if(        *p_301==47        ) {
            break;
        }
        else {
            p_301--;
        }
    }
    if(    p_301<path    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    else {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_301+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__163;
void* __right_value146 = (void*)0;
char* path2_302;
char* p_303;
void* __right_value147 = (void*)0;
char* __result_obj__164;
void* __right_value148 = (void*)0;
char* __result_obj__165;
void* __right_value149 = (void*)0;
char* __result_obj__166;
    if(    path==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    path2_302=(char*)come_increment_ref_count(xbasename(path));
    p_303=path2_302+strlen(path2_302);
    while(    p_303>=path2_302    ) {
        if(        *p_303==46        ) {
            break;
        }
        else {
            p_303--;
        }
    }
    if(    p_303<path2_302    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_302))));
        (path2_302 = come_decrement_ref_count(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    else {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_302,0,p_303-path2_302))));
        (path2_302 = come_decrement_ref_count(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_302 = come_decrement_ref_count(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__167;
char* p_304;
void* __right_value151 = (void*)0;
char* __result_obj__168;
void* __right_value152 = (void*)0;
char* __result_obj__169;
void* __right_value153 = (void*)0;
char* __result_obj__170;
    if(    path==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    p_304=path+strlen(path);
    while(    p_304>=path    ) {
        if(        *p_304==46        ) {
            break;
        }
        else {
            p_304--;
        }
    }
    if(    p_304<path    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    else {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_304+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__171;
void* __right_value155 = (void*)0;
char* __result_obj__172;
    if(    self    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    else {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__173;
void* __right_value157 = (void*)0;
char* __result_obj__174;
    if(    self    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    else {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__179;
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__180;
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__181;
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__182;
void* __right_value166 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__184;
void* __right_value168 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
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
int i_305;
    for(    i_305=0    ;    i_305<self    ;    i_305++    ){
        block(parent,i_305);
    }
}

