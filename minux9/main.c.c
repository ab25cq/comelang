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
void swtch(struct context* anonymous_var_nameX62, struct context* anonymous_var_nameX63);
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
    w_mtvec((unsigned long  int)timervec&~3);
    now_10=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_10+-1;
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

void timer_reset(){
unsigned long  int now_18;
    now_18=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_18+10000000;
}

void timer_handler(){
struct proc* p_19;
struct context* tf_20;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_19=gProc[gActiveProc];
    tf_20=(struct context*)TRAPFRAME;
    p_19->context=*tf_20;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_20->ra);
    printf("ra %x\n",p_19->context.ra);
    printf("sp %x\n",tf_20->sp);
    printf("sp %x\n",p_19->context.sp);
    printf("gp %x\n",p_19->context.gp);
    printf("mepc %x\n",tf_20->mepc);
    printf("mepc %x\n",p_19->context.mepc);
    yield();
}

void yield(){
struct proc* p_21;
    p_21=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_21=gProc[gActiveProc];
    p_21->state=(3);
    scheduler();
}

void scheduler(){
int i_22;
struct proc* p_23;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_22=0        ;        i_22<gNumProc        ;        i_22++        ){
            p_23=gProc[i_22];
            if(            p_23->state==(3)            ) {
                gActiveProc=i_22;
                p_23->state=(4);
                printf("SWITCH TO %d\n",i_22);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_23->context);
                disable_timer_interrupts();
                p_23->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_24;
    now_24=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value0 = (void*)0;
    come_heap_init(0, 0, 0);
    puts("HELLO WORLD");
    kinit();
    ((char*)(__right_value0=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 447, "char*")));
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
void* prev_25;
void* __result_obj__8;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__7 = (void*)-1;
        return __result_obj__7;
    }
    prev_25=heap_end;
    heap_end+=incr;
    __result_obj__8 = prev_25;
    return __result_obj__8;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_26;
struct sBlock* __result_obj__9;
struct sBlock* __result_obj__10;
    curr_26=free_list;
    while(    curr_26    ) {
        if(        curr_26->free&&curr_26->size>=size        ) {
            __result_obj__9 = curr_26;
            return __result_obj__9;
        }
        curr_26=curr_26->next;
    }
    __result_obj__10 = ((void*)0);
    return __result_obj__10;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_27;
struct sBlock* __result_obj__11;
struct sBlock* b_28;
struct sBlock* __result_obj__12;
    mem_27=_sbrk(size+sizeof(struct sBlock));
    if(    mem_27==(void*)-1    ) {
        __result_obj__11 = ((void*)0);
        return __result_obj__11;
    }
    b_28=(struct sBlock*)mem_27;
    b_28->size=size;
    b_28->next=((void*)0);
    b_28->free=0;
    __result_obj__12 = b_28;
    return __result_obj__12;
}

void* malloc(unsigned long  int size){
struct sBlock* block_29;
void* __result_obj__13;
void* __result_obj__14;
struct sBlock* curr_30;
void* __result_obj__15;
block_29 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_29=find_free_block(size))    ) {
        block_29->free=0;
        __result_obj__13 = (void*)(block_29+1);
        return __result_obj__13;
    }
    block_29=request_space(size);
    if(    !block_29    ) {
        __result_obj__14 = ((void*)0);
        return __result_obj__14;
    }
    if(    !free_list    ) {
        free_list=block_29;
    }
    else {
        curr_30=free_list;
        while(        curr_30->next        ) {
            curr_30=curr_30->next;
        }
        curr_30->next=block_29;
    }
    __result_obj__15 = (void*)(block_29+1);
    return __result_obj__15;
}

void free(void* ptr){
struct sBlock* block_31;
    if(    !ptr    ) {
        return;
    }
    block_31=((struct sBlock*)ptr)-1;
    block_31->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_32;
void* ptr_33;
void* __result_obj__16;
    total_32=n*size;
    ptr_33=malloc(total_32);
    if(    ptr_33    ) {
        memset(ptr_33,0,total_32);
    }
    __result_obj__16 = ptr_33;
    return __result_obj__16;
}

char* strdup(const char* s){
unsigned long  int len_34;
char* p_35;
char* __result_obj__17;
    len_34=strlen(s)+1;
    p_35=malloc(len_34);
    if(    p_35    ) {
        memcpy(p_35,s,len_34);
    }
    __result_obj__17 = p_35;
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
        const char* h_36=haystack;
        const char* n_37=needle;
        while(        *h_36&&*n_37&&(*h_36==*n_37)        ) {
            h_36++;
            n_37++;
        }
        if(        !*n_37        ) {
            __result_obj__19 = (char*)haystack;
            return __result_obj__19;
        }
    }
    __result_obj__20 = ((void*)0);
    return __result_obj__20;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_38;
int i_39;
void* __result_obj__21;
    cdst_38=(char*)dst;
    for(    i_39=0    ;    i_39<n    ;    i_39++    ){
        cdst_38[i_39]=c;
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_40;
const unsigned char* s2_41;
memset(&s1_40, 0, sizeof(const unsigned char*));
memset(&s2_41, 0, sizeof(const unsigned char*));
    s1_40=v1;
    s2_41=v2;
    while(    n-->0    ) {
        if(        *s1_40!=*s2_41        ) {
            return *s1_40-*s2_41;
        }
        s1_40++,s2_41++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_42;
char* d_43;
void* __result_obj__22;
void* __result_obj__23;
s_42 = (void*)0;
d_43 = (void*)0;
    if(    n==0    ) {
        __result_obj__22 = dst;
        return __result_obj__22;
    }
    s_42=src;
    d_43=dst;
    if(    s_42<d_43&&s_42+n>d_43    ) {
        s_42+=n;
        d_43+=n;
        while(        n-->0        ) {
            *--d_43=*--s_42;
        }
    }
    else {
        while(        n-->0        ) {
            *d_43++=*s_42++;
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
char* os_44;
char* __result_obj__25;
os_44 = (void*)0;
    os_44=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__25 = os_44;
    return __result_obj__25;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_45;
char* __result_obj__26;
char* __result_obj__27;
os_45 = (void*)0;
    os_45=s;
    if(    n<=0    ) {
        __result_obj__26 = os_45;
        return __result_obj__26;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__27 = os_45;
    return __result_obj__27;
}

int strlen(const char* s){
int n_46;
memset(&n_46, 0, sizeof(int));
    for(    n_46=0    ;    s[n_46]    ;    n_46++    ){
        ;
    }
    return n_46;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_47;
char* __result_obj__28;
    d_47=dest;
    while(    *d_47    ) {
        d_47++;
    }
    while(    n--&&*src    ) {
        *d_47++=*src++;
    }
    *d_47=0;
    __result_obj__28 = dest;
    return __result_obj__28;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_48;
char* __result_obj__29;
int digit_52;
char* __result_obj__30;
    p_48=buf;
    char tmp_49[32];
    memset(&tmp_49, 0, sizeof(char)    *(32)    );
    int i_50=0;
    int negative_51=0;
    if(    base<2||base>16    ) {
        *p_48=0;
        __result_obj__29 = p_48;
        return __result_obj__29;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_51=1;
        val_=-val_;
    }
    do {
        digit_52=val_%base;
        tmp_49[i_50++]=(((digit_52<10))?(48+digit_52):(97+digit_52-10));
        val_/=base;
    } while(    val_    );
    if(    negative_51    ) {
        *p_48++=45;
    }
    while(    i_50--    ) {
        *p_48++=tmp_49[i_50];
    }
    *p_48=0;
    __result_obj__30 = buf;
    return __result_obj__30;
}

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_53;
char* p_54;
const char* s_55;
unsigned long  int remaining_57;
int __result_obj__31;
int __result_obj__32;
memset(&ap_53, 0, sizeof(va_list));
s_55 = (void*)0;
    __builtin_va_start(ap_53,fmt);
    p_54=out;
    char buf_56[32];
    memset(&buf_56, 0, sizeof(char)    *(32)    );
    remaining_57=out_size;
    if(    remaining_57==0    ) {
        __builtin_va_end(ap_53);
        __result_obj__31 = 0;
        come_call_finalizer(va_list_finalize, (&ap_53), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__31;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_57>1            ) {
                *p_54++=*fmt;
                remaining_57--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_55=__builtin_va_arg(ap_53,const char*);
            while(            *s_55&&remaining_57>1            ) {
                *p_54++=*s_55++;
                remaining_57--;
            }
            break;
            case 100:
            itoa(buf_56,__builtin_va_arg(ap_53,int),10,0);
            s_55=buf_56;
            while(            *s_55&&remaining_57>1            ) {
                *p_54++=*s_55++;
                remaining_57--;
            }
            break;
            case 120:
            itoa(buf_56,(unsigned int)__builtin_va_arg(ap_53,int),16,1);
            s_55=buf_56;
            while(            *s_55&&remaining_57>1            ) {
                *p_54++=*s_55++;
                remaining_57--;
            }
            break;
            case 99:
            if(            remaining_57>1            ) {
                *p_54++=(char)__builtin_va_arg(ap_53,int);
                remaining_57--;
            }
            break;
            case 112:
            s_55="0x";
            while(            *s_55&&remaining_57>1            ) {
                *p_54++=*s_55++;
                remaining_57--;
            }
            itoa(buf_56,(long)__builtin_va_arg(ap_53,void*),16,1);
            s_55=buf_56;
            while(            *s_55&&remaining_57>1            ) {
                *p_54++=*s_55++;
                remaining_57--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_56,__builtin_va_arg(ap_53,long),10,1);
                s_55=buf_56;
                while(                *s_55&&remaining_57>1                ) {
                    *p_54++=*s_55++;
                    remaining_57--;
                }
            }
            break;
            default:
            if(            remaining_57>1            ) {
                *p_54++=37;
                remaining_57--;
                if(                remaining_57>1                ) {
                    *p_54++=*fmt;
                    remaining_57--;
                }
            }
            break;
        }
    }
    *p_54=0;
    __builtin_va_end(ap_53);
    __result_obj__32 = p_54-out;
    come_call_finalizer(va_list_finalize, (&ap_53), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

int vasprintf(char** result, const char* fmt, ...){
va_list ap_58;
unsigned long  int out_size_60;
char* p_61;
const char* s_62;
unsigned long  int remaining_64;
int __result_obj__33;
int __result_obj__34;
memset(&ap_58, 0, sizeof(va_list));
s_62 = (void*)0;
    __builtin_va_start(ap_58,fmt);
    char out_59[256];
    memset(&out_59, 0, sizeof(char)    *(256)    );
    out_size_60=256;
    p_61=out_59;
    char buf_63[32];
    memset(&buf_63, 0, sizeof(char)    *(32)    );
    remaining_64=out_size_60;
    if(    remaining_64==0    ) {
        __builtin_va_end(ap_58);
        __result_obj__33 = 0;
        come_call_finalizer(va_list_finalize, (&ap_58), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__33;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_64>1            ) {
                *p_61++=*fmt;
                remaining_64--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_62=__builtin_va_arg(ap_58,const char*);
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 100:
            itoa(buf_63,__builtin_va_arg(ap_58,int),10,0);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 120:
            itoa(buf_63,(unsigned int)__builtin_va_arg(ap_58,int),16,1);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 99:
            if(            remaining_64>1            ) {
                *p_61++=(char)__builtin_va_arg(ap_58,int);
                remaining_64--;
            }
            break;
            case 112:
            s_62="0x";
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            itoa(buf_63,(long)__builtin_va_arg(ap_58,void*),16,1);
            s_62=buf_63;
            while(            *s_62&&remaining_64>1            ) {
                *p_61++=*s_62++;
                remaining_64--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_63,__builtin_va_arg(ap_58,long),10,1);
                s_62=buf_63;
                while(                *s_62&&remaining_64>1                ) {
                    *p_61++=*s_62++;
                    remaining_64--;
                }
            }
            break;
            default:
            if(            remaining_64>1            ) {
                *p_61++=37;
                remaining_64--;
                if(                remaining_64>1                ) {
                    *p_61++=*fmt;
                    remaining_64--;
                }
            }
            break;
        }
    }
    *p_61=0;
    __builtin_va_end(ap_58);
    *result=malloc(sizeof(char)*(p_61-out_59+1));
    strncpy(*result,out_59,p_61-out_59);
    __result_obj__34 = p_61-out_59;
    come_call_finalizer(va_list_finalize, (&ap_58), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_65;
char* p_66;
const char* s_67;
unsigned long  int remaining_69;
int __result_obj__35;
int __result_obj__36;
memset(&ap_65, 0, sizeof(va_list));
s_67 = (void*)0;
    __builtin_va_start(ap_65,fmt);
    p_66=out;
    char buf_68[32];
    memset(&buf_68, 0, sizeof(char)    *(32)    );
    remaining_69=out_size;
    if(    remaining_69==0    ) {
        __builtin_va_end(ap_65);
        __result_obj__35 = 0;
        come_call_finalizer(va_list_finalize, (&ap_65), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__35;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_69>1            ) {
                *p_66++=*fmt;
                remaining_69--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_67=__builtin_va_arg(ap_65,const char*);
            while(            *s_67&&remaining_69>1            ) {
                *p_66++=*s_67++;
                remaining_69--;
            }
            break;
            case 100:
            itoa(buf_68,__builtin_va_arg(ap_65,int),10,0);
            s_67=buf_68;
            while(            *s_67&&remaining_69>1            ) {
                *p_66++=*s_67++;
                remaining_69--;
            }
            break;
            case 120:
            itoa(buf_68,(unsigned int)__builtin_va_arg(ap_65,int),16,1);
            s_67=buf_68;
            while(            *s_67&&remaining_69>1            ) {
                *p_66++=*s_67++;
                remaining_69--;
            }
            break;
            case 99:
            if(            remaining_69>1            ) {
                *p_66++=(char)__builtin_va_arg(ap_65,int);
                remaining_69--;
            }
            break;
            case 112:
            s_67="0x";
            while(            *s_67&&remaining_69>1            ) {
                *p_66++=*s_67++;
                remaining_69--;
            }
            itoa(buf_68,(long)__builtin_va_arg(ap_65,void*),16,1);
            s_67=buf_68;
            while(            *s_67&&remaining_69>1            ) {
                *p_66++=*s_67++;
                remaining_69--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_68,__builtin_va_arg(ap_65,long),10,1);
                s_67=buf_68;
                while(                *s_67&&remaining_69>1                ) {
                    *p_66++=*s_67++;
                    remaining_69--;
                }
            }
            break;
            default:
            if(            remaining_69>1            ) {
                *p_66++=37;
                remaining_69--;
                if(                remaining_69>1                ) {
                    *p_66++=*fmt;
                    remaining_69--;
                }
            }
            break;
        }
    }
    *p_66=0;
    __builtin_va_end(ap_65);
    __result_obj__36 = p_66-out;
    come_call_finalizer(va_list_finalize, (&ap_65), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

void printint(long num, int base, int is_signed){
int i_71;
unsigned long  int n_72;
memset(&n_72, 0, sizeof(unsigned long  int));
    char buf_70[32];
    memset(&buf_70, 0, sizeof(char)    *(32)    );
    i_71=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_72=-num;
    }
    else {
        n_72=num;
    }
    do {
        buf_70[i_71++]="0123456789abcdef"[n_72%base];
        n_72/=base;
    } while(    n_72>0    );
    while(    i_71--    ) {
        putchar(buf_70[i_71]);
    }
}

int printf(const char* fmt, ...){
va_list ap_73;
char* p_74;
int val__75;
unsigned int val__76;
unsigned long  int val__77;
char c_79;
int __result_obj__37;
memset(&ap_73, 0, sizeof(va_list));
p_74 = (void*)0;
    __builtin_va_start(ap_73,fmt);
    for(    p_74=fmt    ;    *p_74    ;    p_74++    ){
        if(        *p_74!=37        ) {
            putchar(*p_74);
            continue;
        }
        p_74++;
        switch (        *p_74) {
            case 100:
            {
                val__75=__builtin_va_arg(ap_73,int);
                printint(val__75,10,1);
                break;
            }
            case 120:
            {
                val__76=__builtin_va_arg(ap_73,unsigned int);
                printint(val__76,16,0);
                break;
            }
            case 112:
            {
                val__77=(unsigned long  int)__builtin_va_arg(ap_73,void*);
                putchar(48);
                putchar(120);
                printint(val__77,16,0);
                break;
            }
            case 115:
            {
                const char* s_78=__builtin_va_arg(ap_73,const char*);
                if(                !s_78                ) {
                    s_78="(null)";
                }
                while(                *s_78                ) {
                    putchar(*s_78++);
                }
                break;
            }
            case 99:
            {
                c_79=(char)__builtin_va_arg(ap_73,int);
                putchar(c_79);
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
                putchar(*p_74);
                break;
            }
        }
    }
    __builtin_va_end(ap_73);
    __result_obj__37 = 0;
    come_call_finalizer(va_list_finalize, (&ap_73), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct buffer* buf_80;
int i_81;
void* __right_value3 = (void*)0;
    buf_80=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 852, "struct buffer*"))));
    buffer_append_format(buf_80,"%s %d\n",sname,sline);
    for(    i_81=gNumComeStackFrame-2    ;    i_81>=0    ;    i_81--    ){
        buffer_append_format(buf_80,"%s %d #%d\n",gComeStackFrameSName[i_81],gComeStackFrameSLine[i_81],gComeStackFrameID[i_81]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_80))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_82;
    for(    i_82=gNumComeStackFrame-1    ;    i_82>=0    ;    i_82--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_82],gComeStackFrameSLine[i_82],gComeStackFrameID[i_82]);
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
int i_83;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_83=0    ;    i_83<gHeapPages.mSizePages    ;    i_83++    ){
        gHeapPages.mPages[i_83]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_84;
int n_85;
_Bool flag_86;
int i_87;
struct sMemHeaderTiny* it_88;
int n_89;
int i_90;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_84=gAllocMem;
        n_85=0;
        while(        it_84        ) {
            n_85++;
            flag_86=(_Bool)0;
            printf("#%d ",n_85);
            if(            it_84->class_name            ) {
                printf("%p (%s): ",(char*)it_84+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_84->class_name);
            }
            for(            i_87=0            ;            i_87<16            ;            i_87++            ){
                if(                it_84->sname[i_87]                ) {
                    printf("%s %d #%d, ",it_84->sname[i_87],it_84->sline[i_87],it_84->id[i_87]);
                    flag_86=(_Bool)1;
                }
            }
            if(            flag_86            ) {
                puts("");
            }
            it_84=it_84->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_85,gNumAlloc,gNumFree);
    }
    else {
        it_88=(struct sMemHeaderTiny*)gAllocMem;
        n_89=0;
        while(        it_88        ) {
            n_89++;
            if(            it_88->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_89,(char*)it_88+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_88->class_name,it_88->sname,it_88->sline);
            }
            it_88=it_88->next;
        }
        if(        n_89>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_89,gNumAlloc,gNumFree);
        }
    }
    for(    i_90=0    ;    i_90<gHeapPages.mSizePages    ;    i_90++    ){
        free(gHeapPages.mPages[i_90]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_91;
unsigned long  int free_area_92;
int new_size_pages_93;
char** new_pages_94;
int i_95;
void* __result_obj__39;
    result_91=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_91=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_91,0,size);
        }
        if(        result_91==((void*)0)        ) {
            free_area_92=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_92            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_93=gHeapPages.mSizePages*2;
                    new_pages_94=calloc(1,sizeof(char*)*new_size_pages_93);
                    i_95=0;
                    for(                    ;                    i_95<gHeapPages.mSizePages                    ;                    i_95++                    ){
                        new_pages_94[i_95]=gHeapPages.mPages[i_95];
                    }
                    for(                    ;                    i_95<new_size_pages_93                    ;                    i_95++                    ){
                        new_pages_94[i_95]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_94;
                    gHeapPages.mSizePages=new_size_pages_93;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_91=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_91=calloc(1,size);
    }
    __result_obj__39 = result_91;
    return __result_obj__39;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_96;
struct sMemHeader* it_97;
int i_98;
int i_99;
void* __result_obj__40;
void* result_100;
struct sMemHeaderTiny* it_101;
void* __result_obj__41;
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
        __result_obj__40 = (char*)result_96+sizeof(struct sMemHeader);
        return __result_obj__40;
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
        __result_obj__41 = (char*)result_100+sizeof(struct sMemHeaderTiny);
        return __result_obj__41;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_102;
struct sMemHeader* prev_it_103;
struct sMemHeader* next_it_104;
unsigned long  int size_105;
struct sMemHeaderTiny* it_106;
struct sMemHeaderTiny* prev_it_107;
struct sMemHeaderTiny* next_it_108;
unsigned long  int size_109;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_102=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_102->allocated!=177783            ) {
                return;
            }
            it_102->allocated=0;
            prev_it_103=it_102->prev;
            next_it_104=it_102->next;
            if(            gAllocMem==it_102            ) {
                gAllocMem=next_it_104;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_103                ) {
                    prev_it_103->next=next_it_104;
                }
                if(                next_it_104                ) {
                    next_it_104->prev=prev_it_103;
                }
            }
            size_105=it_102->size;
            if(            size_105<4096            ) {
                if(                gHeapPages.mFreeMem[size_105]==((void*)0)                ) {
                    it_102->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_105]=(struct sMemHeaderTiny*)it_102;
                }
                else {
                    it_102->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_105];
                    gHeapPages.mFreeMem[size_105]=(struct sMemHeaderTiny*)it_102;
                }
            }
            else {
                free(it_102);
            }
            gNumFree++;
        }
        else {
            it_106=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_106->allocated!=177783            ) {
                return;
            }
            it_106->allocated=0;
            prev_it_107=it_106->prev;
            next_it_108=it_106->next;
            if(            gAllocMem==it_106            ) {
                gAllocMem=(struct sMemHeader*)next_it_108;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_107                ) {
                    prev_it_107->next=next_it_108;
                }
                if(                next_it_108                ) {
                    next_it_108->prev=prev_it_107;
                }
            }
            size_109=it_106->size;
            if(            size_109<4096            ) {
                if(                gHeapPages.mFreeMem[size_109]==((void*)0)                ) {
                    it_106->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_109]=it_106;
                }
                else {
                    it_106->free_next=gHeapPages.mFreeMem[size_109];
                    gHeapPages.mFreeMem[size_109]=it_106;
                }
            }
            else {
                free(it_106);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_110;
char* __result_obj__42;
struct sMemHeaderTiny* it_111;
char* __result_obj__43;
    if(    gComeDebugLib    ) {
        it_110=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_110->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_110);
            exit(2);
        }
        __result_obj__42 = it_110->class_name;
        return __result_obj__42;
    }
    else {
        it_111=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_111->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_111);
            exit(2);
        }
        __result_obj__43 = it_111->class_name;
        return __result_obj__43;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_112;
int i_113;
struct sMemHeaderTiny* it_114;
    if(    gComeDebugLib    ) {
        it_112=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_112->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_112->class_name        ) {
            printf("(%s): ",it_112->class_name);
        }
        for(        i_113=0        ;        i_113<16        ;        i_113++        ){
            if(            it_112->sname[i_113]            ) {
                printf("%s %d #%d, ",it_112->sname[i_113],it_112->sline[i_113],it_112->id[i_113]);
            }
        }
        puts("");
    }
    else {
        it_114=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_114->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_114->class_name,it_114->sname,it_114->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_115;
unsigned long  int* ref_count_116;
unsigned long  int* size2_117;
void* __result_obj__44;
    mem_115=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_116=(unsigned long  int*)mem_115;
    *ref_count_116=0;
    size2_117=(unsigned long  int*)(mem_115+sizeof(unsigned long  int));
    *size2_117=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__44 = mem_115+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__44;
}

void come_free(void* mem){
unsigned long  int* ref_count_118;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_118=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_118);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__45;
char* mem_119;
unsigned long  int* size_p_120;
unsigned long  int size_121;
void* result_122;
void* __result_obj__46;
    if(    !block    ) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_119=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_120=(unsigned long  int*)(mem_119+sizeof(unsigned long  int));
    size_121=*size_p_120-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_122=come_calloc_v2(1,size_121,sname,sline,class_name);
    memcpy(result_122,block,size_121);
    __result_obj__46 = result_122;
    return __result_obj__46;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__47;
unsigned long  int* ref_count_123;
void* __result_obj__48;
    if(    mem==((void*)0)    ) {
        __result_obj__47 = mem;
        return __result_obj__47;
    }
    ref_count_123=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_123)++;
    __result_obj__48 = mem;
    return __result_obj__48;
}

void* come_print_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_124;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_124=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_124);
    __result_obj__50 = mem;
    return __result_obj__50;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_125;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_125=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_125;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__51;
void* __result_obj__52;
unsigned long  int* ref_count_126;
unsigned long  int count_127;
void (*finalizer_128)(void*);
void* __result_obj__53;
void* __result_obj__54;
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
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
    ref_count_126=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_126)--;
    }
    count_127=*ref_count_126;
    if(    !no_free&&count_127<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_128=protocol_fun;
            finalizer_128(protocol_obj);
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
void (*finalizer_129)(void*);
void (*finalizer_130)(void*);
void (*finalizer_131)(void*);
unsigned long  int* ref_count_132;
unsigned long  int count_133;
void (*finalizer_134)(void*);
void (*finalizer_135)(void*);
void (*finalizer_136)(void*);
memset(&finalizer_129, 0, sizeof(void (*)(void*)));
memset(&finalizer_130, 0, sizeof(void (*)(void*)));
memset(&finalizer_131, 0, sizeof(void (*)(void*)));
memset(&finalizer_134, 0, sizeof(void (*)(void*)));
memset(&finalizer_135, 0, sizeof(void (*)(void*)));
memset(&finalizer_136, 0, sizeof(void (*)(void*)));
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
                finalizer_129=protocol_fun;
                finalizer_129(protocol_obj);
            }
            finalizer_130=fun;
            finalizer_130(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_131=protocol_fun;
                finalizer_131(protocol_obj);
            }
        }
    }
    else {
        ref_count_132=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_132)--;
        }
        count_133=*ref_count_132;
        if(        !no_free&&count_133<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_134=protocol_fun;
                        finalizer_134(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_135=fun;
                        finalizer_135(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_136=protocol_fun;
                        finalizer_136(protocol_obj);
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
int len_137;
void* __right_value5 = (void*)0;
char* result_138;
char* __result_obj__56;
    if(    str==((void*)0)    ) {
        __result_obj__55 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__55;
    }
    len_137=strlen(str)+1;
    result_138=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_137)), "/usr/local/include/comelang.h", 1539, "char*"));
    strncpy(result_138,str,len_137);
    __result_obj__56 = (char*)come_increment_ref_count(result_138);
    (result_138 = come_decrement_ref_count(result_138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct buffer* result_139;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__61;
    }
    result_139=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3523, "struct buffer*"));
    result_139->size=self->size;
    __dec_obj3=result_139->buf,
    result_139->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3526, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_139->len=self->len;
    memcpy(result_139->buf,self->buf,self->len);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(result_139);
    come_call_finalizer(buffer_finalize, result_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3574, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3578, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_143;
int old_len_144;
int new_size_145;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_143=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3597, "char*"));
        old_len_144=self->len;
        new_size_145=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_145)), "/usr/local/include/comelang.h", 3601, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_143,old_len_144);
        self->buf[old_len_144]=0;
        self->size=new_size_145;
        (old_buf_143 = come_decrement_ref_count(old_buf_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__68;
int size_146;
void* __right_value17 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__69;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    size_146=strlen(mem);
    if(    self->len+size_146+1+1>=self->size    ) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3623, "char*"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3627, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__70;
va_list args_150;
char* result_151;
int len_152;
struct buffer* __result_obj__71;
void* __right_value19 = (void*)0;
char* mem_153;
int size_154;
void* __right_value20 = (void*)0;
char* old_buf_155;
int old_len_156;
int new_size_157;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__72;
memset(&args_150, 0, sizeof(va_list));
result_151 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    __builtin_va_start(args_150,msg);
    len_152=vasprintf(&result_151,msg,args_150);
    __builtin_va_end(args_150);
    if(    len_152<0    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    mem_153=(char*)come_increment_ref_count(__builtin_string(result_151));
    size_154=strlen(mem_153);
    if(    self->len+size_154+1+1>=self->size    ) {
        old_buf_155=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3660, "char*"));
        memcpy(old_buf_155,self->buf,self->size);
        old_len_156=self->len;
        new_size_157=(self->size+size_154+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_157)), "/usr/local/include/comelang.h", 3664, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_155,old_len_156);
        self->buf[old_len_156]=0;
        self->size=new_size_157;
        (old_buf_155 = come_decrement_ref_count(old_buf_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_153,size_154);
    self->len+=size_154;
    self->buf[self->len]=0;
    free(result_151);
    __result_obj__72 = self;
    (mem_153 = come_decrement_ref_count(mem_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__72;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__73;
int size_158;
void* __right_value22 = (void*)0;
char* old_buf_159;
int old_len_160;
int new_size_161;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__74;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    size_158=strlen(mem)+1;
    if(    self->len+size_158+1+1+1>=self->size    ) {
        old_buf_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3686, "char*"));
        memcpy(old_buf_159,self->buf,self->size);
        old_len_160=self->len;
        new_size_161=(self->size+size_158+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3690, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_159,old_len_160);
        self->buf[old_len_160]=0;
        self->size=new_size_161;
        (old_buf_159 = come_decrement_ref_count(old_buf_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_158);
    self->len+=size_158;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__75;
int* mem_162;
int size_163;
void* __right_value24 = (void*)0;
char* old_buf_164;
int old_len_165;
int new_size_166;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_162=&value;
    size_163=sizeof(int);
    if(    self->len+size_163+1+1>=self->size    ) {
        old_buf_164=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3713, "char*"));
        memcpy(old_buf_164,self->buf,self->size);
        old_len_165=self->len;
        new_size_166=(self->size+size_163+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_166)), "/usr/local/include/comelang.h", 3717, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_164,old_len_165);
        self->buf[old_len_165]=0;
        self->size=new_size_166;
        (old_buf_164 = come_decrement_ref_count(old_buf_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_162,size_163);
    self->len+=size_163;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_167;
int size_168;
void* __right_value26 = (void*)0;
char* old_buf_169;
int old_len_170;
int new_size_171;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__77;
    mem_167=&value;
    size_168=sizeof(long);
    if(    self->len+size_168+1+1>=self->size    ) {
        old_buf_169=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3736, "char*"));
        memcpy(old_buf_169,self->buf,self->size);
        old_len_170=self->len;
        new_size_171=(self->size+size_168+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_171)), "/usr/local/include/comelang.h", 3740, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_169,old_len_170);
        self->buf[old_len_170]=0;
        self->size=new_size_171;
        (old_buf_169 = come_decrement_ref_count(old_buf_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_167,size_168);
    self->len+=size_168;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__78;
short* mem_172;
int size_173;
void* __right_value28 = (void*)0;
char* old_buf_174;
int old_len_175;
int new_size_176;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    mem_172=&value;
    size_173=sizeof(short);
    if(    self->len+size_173+1+1>=self->size    ) {
        old_buf_174=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3763, "char*"));
        memcpy(old_buf_174,self->buf,self->size);
        old_len_175=self->len;
        new_size_176=(self->size+size_173+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_176)), "/usr/local/include/comelang.h", 3767, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_174,old_len_175);
        self->buf[old_len_175]=0;
        self->size=new_size_176;
        (old_buf_174 = come_decrement_ref_count(old_buf_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_172,size_173);
    self->len+=size_173;
    self->buf[self->len]=0;
    __result_obj__79 = self;
    return __result_obj__79;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__80;
int len_177;
int new_size_178;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_179;
struct buffer* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = ((void*)0);
        return __result_obj__80;
    }
    len_177=self->len;
    len_177=(len_177+3)&~3;
    if(    len_177>=self->size    ) {
        new_size_178=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_178)), "/usr/local/include/comelang.h", 3791, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_178;
    }
    for(    i_179=self->len    ;    i_179<len_177    ;    i_179++    ){
        self->buf[i_179]=0;
    }
    self->len=len_177;
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
struct buffer* result_180;
struct buffer* __result_obj__82;
struct buffer* __result_obj__83;
    result_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3821, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__82 = (struct buffer*)come_increment_ref_count(result_180);
        come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__82;
    }
    buffer_append_str(result_180,self);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_180);
    come_call_finalizer(buffer_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_181;
struct buffer* __result_obj__87;
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3848, "struct buffer*"))));
    buffer_append(result_181,self,sizeof(char)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_182;
int i_183;
struct buffer* __result_obj__88;
    result_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3855, "struct buffer*"))));
    for(    i_183=0    ;    i_183<len    ;    i_183++    ){
        buffer_append(result_182,self[i_183],strlen(self[i_183]));
    }
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_182);
    come_call_finalizer(buffer_finalize, result_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_184;
struct buffer* __result_obj__89;
    result_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3864, "struct buffer*"))));
    buffer_append(result_184,(char*)self,sizeof(short)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_184);
    come_call_finalizer(buffer_finalize, result_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_185;
struct buffer* __result_obj__90;
    result_185=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3871, "struct buffer*"))));
    buffer_append(result_185,(char*)self,sizeof(int)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_185);
    come_call_finalizer(buffer_finalize, result_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_186;
struct buffer* __result_obj__91;
    result_186=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3878, "struct buffer*"))));
    buffer_append(result_186,(char*)self,sizeof(long)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_186);
    come_call_finalizer(buffer_finalize, result_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_187;
struct buffer* __result_obj__92;
    result_187=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3885, "struct buffer*"))));
    buffer_append(result_187,(char*)self,sizeof(float)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_187);
    come_call_finalizer(buffer_finalize, result_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_188;
struct buffer* __result_obj__93;
    result_188=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3892, "struct buffer*"))));
    buffer_append(result_188,(char*)self,sizeof(double)*len);
    __result_obj__93 = (struct buffer*)come_increment_ref_count(result_188);
    come_call_finalizer(buffer_finalize, result_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

char* buffer_printable(struct buffer* self){
int len_189;
void* __right_value49 = (void*)0;
char* result_190;
int n_191;
int i_192;
unsigned char c_193;
char* __result_obj__94;
    len_189=self->len;
    result_190=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_189*2+1)), "/usr/local/include/comelang.h", 3900, "char*"));
    n_191=0;
    for(    i_192=0    ;    i_192<len_189    ;    i_192++    ){
        c_193=self->buf[i_192];
        if(        (c_193>=0&&c_193<32)||c_193==127        ) {
            result_190[n_191++]=94;
            result_190[n_191++]=c_193+65-1;
        }
        else if(        c_193>127        ) {
            result_190[n_191++]=63;
        }
        else {
            result_190[n_191++]=c_193;
        }
    }
    result_190[n_191]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result_190);
    (result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_194;
struct list$1char$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_194=0    ;    i_194<num_value    ;    i_194++    ){
        list$1char$_push_back(self,values[i_194]);
    }
    __result_obj__96 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_195;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_196;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_197;
struct list$1char$* __result_obj__95;
    if(    self->len==0    ) {
        litem_195=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$*"))));
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1    ) {
        litem_196=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$*"))));
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$*"))));
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_198;
struct list_item$1char$* prev_it_199;
    it_198=self->head;
    while(    it_198!=((void*)0)    ) {
        prev_it_199=it_198;
        it_198=it_198->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_200;
struct list$1char$p* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1char$p_push_back(self,values[i_200]);
    }
    __result_obj__99 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_201;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_202;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_203;
struct list$1char$p* __result_obj__98;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$p*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$p*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$p*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_204;
struct list_item$1char$p* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_206;
struct list$1short$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1short$_push_back(self,values[i_206]);
    }
    __result_obj__102 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_207;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_208;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_209;
struct list$1short$* __result_obj__101;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1short$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1short$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1short$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_210;
struct list_item$1short$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_212;
struct list$1int$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0    ;    i_212<num_value    ;    i_212++    ){
        list$1int$_push_back(self,values[i_212]);
    }
    __result_obj__105 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_213;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_214;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_215;
struct list$1int$* __result_obj__104;
    if(    self->len==0    ) {
        litem_213=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1int$*"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1    ) {
        litem_214=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1int$*"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1int$*"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_216;
struct list_item$1int$* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_218;
struct list$1long$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0    ;    i_218<num_value    ;    i_218++    ){
        list$1long$_push_back(self,values[i_218]);
    }
    __result_obj__108 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_219;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_220;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_221;
struct list$1long$* __result_obj__107;
    if(    self->len==0    ) {
        litem_219=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1long$*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1    ) {
        litem_220=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1long$*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1long$*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_222;
struct list_item$1long$* prev_it_223;
    it_222=self->head;
    while(    it_222!=((void*)0)    ) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_224;
struct list$1float$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0    ;    i_224<num_value    ;    i_224++    ){
        list$1float$_push_back(self,values[i_224]);
    }
    __result_obj__111 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_225;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_226;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_227;
struct list$1float$* __result_obj__110;
    if(    self->len==0    ) {
        litem_225=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1float$*"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1    ) {
        litem_226=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1float$*"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1float$*"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_228;
struct list_item$1float$* prev_it_229;
    it_228=self->head;
    while(    it_228!=((void*)0)    ) {
        prev_it_229=it_228;
        it_228=it_228->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_230;
struct list$1double$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_230=0    ;    i_230<num_value    ;    i_230++    ){
        list$1double$_push_back(self,values[i_230]);
    }
    __result_obj__114 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_231;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_232;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_233;
struct list$1double$* __result_obj__113;
    if(    self->len==0    ) {
        litem_231=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1double$*"))));
        litem_231->prev=((void*)0);
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail=litem_231;
        self->head=litem_231;
    }
    else if(    self->len==1    ) {
        litem_232=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1double$*"))));
        litem_232->prev=self->head;
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head->next=litem_232;
    }
    else {
        litem_233=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1double$*"))));
        litem_233->prev=self->tail;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail->next=litem_233;
        self->tail=litem_233;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_234;
struct list_item$1double$* prev_it_235;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_236;
void* __right_value86 = (void*)0;
char* result_237;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_236=strlen(self)+strlen(right);
    result_237=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_236+1)), "/usr/local/include/comelang.h", 4200, "char*"));
    strncpy(result_237,self,len_236+1);
    strncat(result_237,right,len_236+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_237);
    (result_237 = come_decrement_ref_count(result_237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__118;
int len_238;
void* __right_value88 = (void*)0;
char* result_239;
char* __result_obj__119;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_238=strlen(self)+strlen(right);
    result_239=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_238+1)), "/usr/local/include/comelang.h", 4215, "char*"));
    strncpy(result_239,self,len_238+1);
    strncat(result_239,right,len_238+1);
    __result_obj__119 = (char*)come_increment_ref_count(result_239);
    (result_239 = come_decrement_ref_count(result_239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__120;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_240;
int i_241;
void* __right_value92 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    buf_240=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4228, "struct buffer*"))));
    for(    i_241=0    ;    i_241<right    ;    i_241++    ){
        buffer_append_str(buf_240,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_240))));
    come_call_finalizer(buffer_finalize, buf_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__122;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_242;
int i_243;
void* __right_value96 = (void*)0;
char* __result_obj__123;
    if(    self==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    buf_242=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4242, "struct buffer*"))));
    for(    i_243=0    ;    i_243<right    ;    i_243++    ){
        buffer_append_str(buf_242,self);
    }
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_242))));
    come_call_finalizer(buffer_finalize, buf_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_244;
int i_245;
    result_244=(_Bool)0;
    for(    i_245=0    ;    i_245<len    ;    i_245++    ){
        if(        strncmp(self[i_245],str,strlen(self[i_245]))==0        ) {
            result_244=(_Bool)1;
            break;
        }
    }
    return result_244;
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
int result_246;
char* p_247;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_246=0;
    p_247=value;
    while(    *p_247    ) {
        result_246+=(*p_247);
        p_247++;
    }
    return result_246;
}

unsigned int string_get_hash_key(char* value){
int result_248;
char* p_249;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_248=0;
    p_249=value;
    while(    *p_249    ) {
        result_248+=(*p_249);
        p_249++;
    }
    return result_248;
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
_Bool result_250;
    result_250=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_250;
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
_Bool result_251;
    result_251=(c>=32&&c<=126);
    return result_251;
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
int len_252;
void* __right_value98 = (void*)0;
char* result_253;
int i_254;
char* __result_obj__125;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_252=strlen(str);
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_252+1)), "/usr/local/include/comelang.h", 4510, "char*"));
    for(    i_254=0    ;    i_254<len_252    ;    i_254++    ){
        result_253[i_254]=str[len_252-i_254-1];
    }
    result_253[len_252]=0;
    __result_obj__125 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__126;
int len_255;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__127;
void* __right_value102 = (void*)0;
char* __result_obj__128;
void* __right_value103 = (void*)0;
char* __result_obj__129;
void* __right_value104 = (void*)0;
char* result_256;
char* __result_obj__130;
    if(    str==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_255=strlen(str);
    if(    head<0    ) {
        head+=len_255;
    }
    if(    tail<0    ) {
        tail+=len_255+1;
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
    if(    tail>=len_255    ) {
        tail=len_255;
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
    result_256=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4556, "char*"));
    memcpy(result_256,str+head,tail-head);
    result_256[tail-head]=0;
    __result_obj__130 = (char*)come_increment_ref_count(result_256);
    (result_256 = come_decrement_ref_count(result_256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__131;
int len_257;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__132;
void* __right_value108 = (void*)0;
char* __result_obj__133;
void* __right_value109 = (void*)0;
char* __result_obj__134;
void* __right_value110 = (void*)0;
char* result_258;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_257=strlen(str);
    if(    head<0    ) {
        head+=len_257;
    }
    if(    tail<0    ) {
        tail+=len_257+1;
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
    if(    tail>=len_257    ) {
        tail=len_257;
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
    result_258=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4599, "char*"));
    memcpy(result_258,str+head,tail-head);
    result_258[tail-head]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_258);
    (result_258 = come_decrement_ref_count(result_258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__136;
int len_259;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__137;
void* __right_value114 = (void*)0;
char* __result_obj__138;
void* __right_value115 = (void*)0;
char* __result_obj__139;
void* __right_value116 = (void*)0;
char* result_260;
char* __result_obj__140;
    if(    str==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_259=strlen(str);
    if(    head<0    ) {
        head+=len_259;
    }
    if(    tail<0    ) {
        tail+=len_259+1;
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
    if(    tail>=len_259    ) {
        tail=len_259;
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
    result_260=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4642, "char*"));
    memcpy(result_260,str+head,tail-head);
    result_260[tail-head]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_260);
    (result_260 = come_decrement_ref_count(result_260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__141;
va_list args_261;
char* result_262;
int len_263;
void* __right_value118 = (void*)0;
char* __result_obj__142;
void* __right_value119 = (void*)0;
char* result2_264;
char* __result_obj__143;
memset(&args_261, 0, sizeof(va_list));
result_262 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    __builtin_va_start(args_261,msg);
    len_263=vasprintf(&result_262,msg,args_261);
    __builtin_va_end(args_261);
    if(    len_263<0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result2_264=(char*)come_increment_ref_count(__builtin_string(result_262));
    free(result_262);
    __result_obj__143 = (char*)come_increment_ref_count(result2_264);
    (result2_264 = come_decrement_ref_count(result2_264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__144;
int len_265;
void* __right_value121 = (void*)0;
char* __result_obj__145;
void* __right_value122 = (void*)0;
char* __result_obj__146;
void* __right_value123 = (void*)0;
char* result_266;
char* __result_obj__147;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_265=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head+=len_265;
    }
    if(    tail<0    ) {
        tail+=len_265+1;
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
    if(    tail>=len_265    ) {
        tail=len_265;
    }
    result_266=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_265-(tail-head)+1)), "/usr/local/include/comelang.h", 4704, "char*"));
    memcpy(result_266,str,head);
    memcpy(result_266+head,str+tail,len_265-tail);
    result_266[len_265-(tail-head)]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_266);
    (result_266 = come_decrement_ref_count(result_266, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_267;
struct list_item$1char$ph* prev_it_268;
    it_267=self->head;
    while(    it_267!=((void*)0)    ) {
        prev_it_268=it_267;
        it_267=it_267->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj15;
struct list$1char$ph* __result_obj__150;
    if(    self->len==0    ) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1722, "struct list_item$1char$ph*"))));
        litem_272->prev=((void*)0);
        litem_272->next=((void*)0);
        __dec_obj13=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_272;
        self->head=litem_272;
    }
    else if(    self->len==1    ) {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1732, "struct list_item$1char$ph*"))));
        litem_273->prev=self->head;
        litem_273->next=((void*)0);
        __dec_obj14=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_273;
        self->head->next=litem_273;
    }
    else {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1742, "struct list_item$1char$ph*"))));
        litem_274->prev=self->tail;
        litem_274->next=((void*)0);
        __dec_obj15=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_274;
        self->tail=litem_274;
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
struct list$1char$ph* result_269;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_270;
int i_271;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__151;
    if(    self==((void*)0)    ) {
        __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4717, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__149;
    }
    result_269=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4720, "struct list$1char$ph*"))));
    str_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4722, "struct buffer*"))));
    for(    i_271=0    ;    i_271<charp_length(self)    ;    i_271++    ){
        if(        self[i_271]==c        ) {
            list$1char$ph_push_back(result_269,(char*)come_increment_ref_count(__builtin_string(str_270->buf)));
            buffer_reset(str_270);
        }
        else {
            buffer_append_char(str_270,self[i_271]);
        }
    }
    if(    buffer_length(str_270)!=0    ) {
        list$1char$ph_push_back(result_269,(char*)come_increment_ref_count(__builtin_string(str_270->buf)));
    }
    __result_obj__151 = (struct list$1char$ph*)come_increment_ref_count(result_269);
    come_call_finalizer(list$1char$ph$p_finalize, result_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_275;
void* __right_value137 = (void*)0;
char* result_276;
int n_277;
int i_278;
char c_279;
char* __result_obj__154;
    len_275=charp_length(str);
    result_276=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_275*2+1)), "/usr/local/include/comelang.h", 4754, "char*"));
    n_277=0;
    for(    i_278=0    ;    i_278<len_275    ;    i_278++    ){
        c_279=str[i_278];
        if(        (c_279>=0&&c_279<32)||c_279==127        ) {
            result_276[n_277++]=94;
            result_276[n_277++]=c_279+65-1;
        }
        else {
            result_276[n_277++]=c_279;
        }
    }
    result_276[n_277]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_276);
    (result_276 = come_decrement_ref_count(result_276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__155;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_280;
char* p_281;
char* p2_282;
void* __right_value141 = (void*)0;
char* __result_obj__156;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4782, "struct buffer*"))));
    p_281=self;
    while(    (_Bool)1    ) {
        p2_282=strstr(p_281,str);
        if(        p2_282==((void*)0)        ) {
            p2_282=p_281;
            while(            *p2_282            ) {
                p2_282++;
            }
            buffer_append(result_280,p_281,p2_282-p_281);
            break;
        }
        buffer_append(result_280,p_281,p2_282-p_281);
        buffer_append_str(result_280,replace);
        p_281=p2_282+strlen(str);
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_280))));
    come_call_finalizer(buffer_finalize, result_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__157;
char* p_283;
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
    p_283=path+strlen(path);
    while(    p_283>=path    ) {
        if(        *p_283==47        ) {
            break;
        }
        else {
            p_283--;
        }
    }
    if(    p_283<path    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_283+1))));
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
char* path2_284;
char* p_285;
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
    path2_284=(char*)come_increment_ref_count(xbasename(path));
    p_285=path2_284+strlen(path2_284);
    while(    p_285>=path2_284    ) {
        if(        *p_285==46        ) {
            break;
        }
        else {
            p_285--;
        }
    }
    if(    p_285<path2_284    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_284))));
        (path2_284 = come_decrement_ref_count(path2_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_284,0,p_285-path2_284))));
        (path2_284 = come_decrement_ref_count(path2_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_284 = come_decrement_ref_count(path2_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__165;
char* p_286;
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
    p_286=path+strlen(path);
    while(    p_286>=path    ) {
        if(        *p_286==46        ) {
            break;
        }
        else {
            p_286--;
        }
    }
    if(    p_286<path    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_286+1))));
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
char* msg2_287;
va_list args_288;
void* __right_value175 = (void*)0;
char* __result_obj__189;
msg2_287 = (void*)0;
memset(&args_288, 0, sizeof(va_list));
    if(    self==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    __builtin_va_start(args_288,self);
    vasprintf(&msg2_287,self,args_288);
    __builtin_va_end(args_288);
    printf("%s",msg2_287);
    free(msg2_287);
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
int i_289;
    for(    i_289=0    ;    i_289<self    ;    i_289++    ){
        block(parent,i_289);
    }
}

