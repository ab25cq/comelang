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
void putchar(char c);
void uartputc_sync(char c);
static void va_list_finalize(va_list self);
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
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vasprintf(const char* fmt, ...);
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
unsigned long  int x_19;
memset(&x_19, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_19));
    x_19|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_19));
}
static inline void intr_off(){
unsigned long  int x_20;
memset(&x_20, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_20));
    x_20&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_20));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_24;
memset(&x_24, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_24));
    return x_24;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_25;
memset(&x_25, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_25));
    return x_25;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_26;
memset(&x_26, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_26));
    return x_26;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_27;
memset(&x_27, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_27));
    return x_27;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_28));
    return x_28;
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

static void va_list_finalize(va_list self){
}

void puts(const char* s){
    intr_off();
    while(    *s    ) {
        putchar(*s++);
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_21;
r_21 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic: kfree");
    }
    r_21=(struct run*)pa;
    r_21->next=kmem.freelist;
    kmem.freelist=r_21;
}

void freerange(void* pa_start, void* pa_end){
char* p_22;
p_22 = (void*)0;
    p_22=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_22+4096<=(_end+4096*256)    ;    p_22+=4096    ){
        kfree(p_22);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_23;
void* __result_obj__8;
r_23 = (void*)0;
    r_23=kmem.freelist;
    if(    r_23    ) {
        kmem.freelist=r_23->next;
    }
    __result_obj__8 = (void*)r_23;
    return __result_obj__8;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_29;
    w_mtvec((unsigned long  int)timervec&~3);
    now_29=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_29+1000000;
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
struct proc* result_36;
struct proc* __result_obj__13;
    result_36=kalloc();
    memset(result_36,0,sizeof(struct proc));
    result_36->stack=kalloc();
    result_36->context.sp=(unsigned long  int)(result_36->stack+4096);
    result_36->context.mepc=(unsigned long  int)task;
    result_36->state=(3);
    gProc[gNumProc++]=result_36;
    __result_obj__13 = result_36;
    return __result_obj__13;
}

void timer_reset(){
unsigned long  int now_37;
    now_37=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_37+1000000;
}

void timer_handler(){
struct proc* p_38;
struct context* tf_39;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_38=gProc[gActiveProc];
    tf_39=(struct context*)TRAPFRAME;
    p_38->context=*tf_39;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %lx\n",tf_39->ra);
    printf("ra %lx\n",p_38->context.ra);
    printf("sp %lx\n",tf_39->sp);
    printf("sp %lx\n",p_38->context.sp);
    printf("gp %lx\n",p_38->context.gp);
    printf("mepc %lx\n",tf_39->mepc);
    printf("mepc %lx\n",p_38->context.mepc);
    timer_reset();
    yield();
}

void yield(){
struct proc* p_40;
    p_40=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_40=gProc[gActiveProc];
    p_40->state=(3);
    scheduler();
}

void scheduler(){
int i_41;
struct proc* p_42;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_41=0        ;        i_41<gNumProc        ;        i_41++        ){
            p_42=gProc[i_41];
            if(            p_42->state==(3)            ) {
                gActiveProc=i_41;
                p_42->state=(4);
                printf("SWITCH TO %d\n",i_41);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_42->context);
                enable_timer_interrupts();
                p_42->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_43;
    now_43=*(unsigned long  int*)33603576;
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

void* _sbrk(long incr){
void* __result_obj__14;
void* prev_44;
void* __result_obj__15;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__14 = (void*)-1;
        return __result_obj__14;
    }
    prev_44=heap_end;
    heap_end+=incr;
    __result_obj__15 = prev_44;
    return __result_obj__15;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_45;
struct sBlock* __result_obj__16;
struct sBlock* __result_obj__17;
    curr_45=free_list;
    while(    curr_45    ) {
        if(        curr_45->free&&curr_45->size>=size        ) {
            __result_obj__16 = curr_45;
            return __result_obj__16;
        }
        curr_45=curr_45->next;
    }
    __result_obj__17 = ((void*)0);
    return __result_obj__17;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_46;
struct sBlock* __result_obj__18;
struct sBlock* b_47;
struct sBlock* __result_obj__19;
    mem_46=_sbrk(size+sizeof(struct sBlock));
    if(    mem_46==(void*)-1    ) {
        __result_obj__18 = ((void*)0);
        return __result_obj__18;
    }
    b_47=(struct sBlock*)mem_46;
    b_47->size=size;
    b_47->next=((void*)0);
    b_47->free=0;
    __result_obj__19 = b_47;
    return __result_obj__19;
}

void* malloc(unsigned long  int size){
struct sBlock* block_48;
void* __result_obj__20;
void* __result_obj__21;
struct sBlock* curr_49;
void* __result_obj__22;
block_48 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_48=find_free_block(size))    ) {
        block_48->free=0;
        __result_obj__20 = (void*)(block_48+1);
        return __result_obj__20;
    }
    block_48=request_space(size);
    if(    !block_48    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
    }
    if(    !free_list    ) {
        free_list=block_48;
    }
    else {
        curr_49=free_list;
        while(        curr_49->next        ) {
            curr_49=curr_49->next;
        }
        curr_49->next=block_48;
    }
    __result_obj__22 = (void*)(block_48+1);
    return __result_obj__22;
}

void free(void* ptr){
struct sBlock* block_50;
    if(    !ptr    ) {
        return;
    }
    block_50=((struct sBlock*)ptr)-1;
    block_50->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_51;
void* ptr_52;
void* __result_obj__23;
    total_51=n*size;
    ptr_52=malloc(total_51);
    if(    ptr_52    ) {
        memset(ptr_52,0,total_51);
    }
    __result_obj__23 = ptr_52;
    return __result_obj__23;
}

char* strdup(const char* s){
unsigned long  int len_53;
char* p_54;
char* __result_obj__24;
    len_53=strlen(s)+1;
    p_54=malloc(len_53);
    if(    p_54    ) {
        memcpy(p_54,s,len_53);
    }
    __result_obj__24 = p_54;
    return __result_obj__24;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__25;
char* __result_obj__26;
char* __result_obj__27;
    if(    !*needle    ) {
        __result_obj__25 = (char*)haystack;
        return __result_obj__25;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_55=haystack;
        const char* n_56=needle;
        while(        *h_55&&*n_56&&(*h_55==*n_56)        ) {
            h_55++;
            n_56++;
        }
        if(        !*n_56        ) {
            __result_obj__26 = (char*)haystack;
            return __result_obj__26;
        }
    }
    __result_obj__27 = ((void*)0);
    return __result_obj__27;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_57;
int i_58;
void* __result_obj__28;
    cdst_57=(char*)dst;
    for(    i_58=0    ;    i_58<n    ;    i_58++    ){
        cdst_57[i_58]=c;
    }
    __result_obj__28 = dst;
    return __result_obj__28;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_59;
const unsigned char* s2_60;
memset(&s1_59, 0, sizeof(const unsigned char*));
memset(&s2_60, 0, sizeof(const unsigned char*));
    s1_59=v1;
    s2_60=v2;
    while(    n-->0    ) {
        if(        *s1_59!=*s2_60        ) {
            return *s1_59-*s2_60;
        }
        s1_59++,s2_60++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_61;
char* d_62;
void* __result_obj__29;
void* __result_obj__30;
s_61 = (void*)0;
d_62 = (void*)0;
    if(    n==0    ) {
        __result_obj__29 = dst;
        return __result_obj__29;
    }
    s_61=src;
    d_62=dst;
    if(    s_61<d_62&&s_61+n>d_62    ) {
        s_61+=n;
        d_62+=n;
        while(        n-->0        ) {
            *--d_62=*--s_61;
        }
    }
    else {
        while(        n-->0        ) {
            *d_62++=*s_61++;
        }
    }
    __result_obj__30 = dst;
    return __result_obj__30;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__31;
    __result_obj__31 = memmove(dst,src,n);
    return __result_obj__31;
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
char* os_63;
char* __result_obj__32;
os_63 = (void*)0;
    os_63=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__32 = os_63;
    return __result_obj__32;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_64;
char* __result_obj__33;
char* __result_obj__34;
os_64 = (void*)0;
    os_64=s;
    if(    n<=0    ) {
        __result_obj__33 = os_64;
        return __result_obj__33;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__34 = os_64;
    return __result_obj__34;
}

int strlen(const char* s){
int n_65;
memset(&n_65, 0, sizeof(int));
    for(    n_65=0    ;    s[n_65]    ;    n_65++    ){
        ;
    }
    return n_65;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_66;
char* __result_obj__35;
    d_66=dest;
    while(    *d_66    ) {
        d_66++;
    }
    while(    n--&&*src    ) {
        *d_66++=*src++;
    }
    *d_66=0;
    __result_obj__35 = dest;
    return __result_obj__35;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_67;
char* __result_obj__36;
int digit_71;
char* __result_obj__37;
    p_67=buf;
    char tmp_68[32];
    memset(&tmp_68, 0, sizeof(char)    *(32)    );
    int i_69=0;
    int negative_70=0;
    if(    base<2||base>16    ) {
        *p_67=0;
        __result_obj__36 = p_67;
        return __result_obj__36;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_70=1;
        val_=-val_;
    }
    do {
        digit_71=val_%base;
        tmp_68[i_69++]=(((digit_71<10))?(48+digit_71):(97+digit_71-10));
        val_/=base;
    } while(    val_    );
    if(    negative_70    ) {
        *p_67++=45;
    }
    while(    i_69--    ) {
        *p_67++=tmp_68[i_69];
    }
    *p_67=0;
    __result_obj__37 = buf;
    return __result_obj__37;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_72;
char* p_73;
const char* s_74;
unsigned long  int remaining_76;
int __result_obj__38;
int __result_obj__39;
memset(&ap_72, 0, sizeof(va_list));
s_74 = (void*)0;
    __builtin_va_start(ap_72,fmt);
    p_73=out;
    char buf_75[32];
    memset(&buf_75, 0, sizeof(char)    *(32)    );
    remaining_76=out_size;
    if(    remaining_76==0    ) {
        __builtin_va_end(ap_72);
        __result_obj__38 = 0;
        come_call_finalizer(va_list_finalize, (&ap_72), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__38;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_76>1            ) {
                *p_73++=*fmt;
                remaining_76--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_74=__builtin_va_arg(ap_72,const char*);
            while(            *s_74&&remaining_76>1            ) {
                *p_73++=*s_74++;
                remaining_76--;
            }
            break;
            case 100:
            itoa(buf_75,__builtin_va_arg(ap_72,int),10,0);
            s_74=buf_75;
            while(            *s_74&&remaining_76>1            ) {
                *p_73++=*s_74++;
                remaining_76--;
            }
            break;
            case 120:
            itoa(buf_75,(unsigned int)__builtin_va_arg(ap_72,int),16,1);
            s_74=buf_75;
            while(            *s_74&&remaining_76>1            ) {
                *p_73++=*s_74++;
                remaining_76--;
            }
            break;
            case 99:
            if(            remaining_76>1            ) {
                *p_73++=(char)__builtin_va_arg(ap_72,int);
                remaining_76--;
            }
            break;
            case 112:
            s_74="0x";
            while(            *s_74&&remaining_76>1            ) {
                *p_73++=*s_74++;
                remaining_76--;
            }
            itoa(buf_75,(long)__builtin_va_arg(ap_72,void*),16,1);
            s_74=buf_75;
            while(            *s_74&&remaining_76>1            ) {
                *p_73++=*s_74++;
                remaining_76--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_75,__builtin_va_arg(ap_72,long),10,1);
                s_74=buf_75;
                while(                *s_74&&remaining_76>1                ) {
                    *p_73++=*s_74++;
                    remaining_76--;
                }
            }
            break;
            default:
            if(            remaining_76>1            ) {
                *p_73++=37;
                remaining_76--;
                if(                remaining_76>1                ) {
                    *p_73++=*fmt;
                    remaining_76--;
                }
            }
            break;
        }
    }
    *p_73=0;
    __builtin_va_end(ap_72);
    __result_obj__39 = p_73-out;
    come_call_finalizer(va_list_finalize, (&ap_72), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

int vasprintf(const char* fmt, ...){
va_list ap_77;
unsigned long  int out_size_79;
char* p_80;
const char* s_81;
unsigned long  int remaining_83;
int __result_obj__40;
char* result_84;
int __result_obj__41;
memset(&ap_77, 0, sizeof(va_list));
s_81 = (void*)0;
    __builtin_va_start(ap_77,fmt);
    char out_78[256];
    memset(&out_78, 0, sizeof(char)    *(256)    );
    out_size_79=256;
    p_80=out_78;
    char buf_82[32];
    memset(&buf_82, 0, sizeof(char)    *(32)    );
    remaining_83=out_size_79;
    if(    remaining_83==0    ) {
        __builtin_va_end(ap_77);
        __result_obj__40 = 0;
        come_call_finalizer(va_list_finalize, (&ap_77), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__40;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_83>1            ) {
                *p_80++=*fmt;
                remaining_83--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_81=__builtin_va_arg(ap_77,const char*);
            while(            *s_81&&remaining_83>1            ) {
                *p_80++=*s_81++;
                remaining_83--;
            }
            break;
            case 100:
            itoa(buf_82,__builtin_va_arg(ap_77,int),10,0);
            s_81=buf_82;
            while(            *s_81&&remaining_83>1            ) {
                *p_80++=*s_81++;
                remaining_83--;
            }
            break;
            case 120:
            itoa(buf_82,(unsigned int)__builtin_va_arg(ap_77,int),16,1);
            s_81=buf_82;
            while(            *s_81&&remaining_83>1            ) {
                *p_80++=*s_81++;
                remaining_83--;
            }
            break;
            case 99:
            if(            remaining_83>1            ) {
                *p_80++=(char)__builtin_va_arg(ap_77,int);
                remaining_83--;
            }
            break;
            case 112:
            s_81="0x";
            while(            *s_81&&remaining_83>1            ) {
                *p_80++=*s_81++;
                remaining_83--;
            }
            itoa(buf_82,(long)__builtin_va_arg(ap_77,void*),16,1);
            s_81=buf_82;
            while(            *s_81&&remaining_83>1            ) {
                *p_80++=*s_81++;
                remaining_83--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_82,__builtin_va_arg(ap_77,long),10,1);
                s_81=buf_82;
                while(                *s_81&&remaining_83>1                ) {
                    *p_80++=*s_81++;
                    remaining_83--;
                }
            }
            break;
            default:
            if(            remaining_83>1            ) {
                *p_80++=37;
                remaining_83--;
                if(                remaining_83>1                ) {
                    *p_80++=*fmt;
                    remaining_83--;
                }
            }
            break;
        }
    }
    *p_80=0;
    __builtin_va_end(ap_77);
    result_84=malloc(sizeof(char)*(p_80-out_78+1));
    strncpy(result_84,out_78,p_80-out_78);
    __result_obj__41 = result_84;
    come_call_finalizer(va_list_finalize, (&ap_77), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_85;
char* p_86;
const char* s_87;
unsigned long  int remaining_89;
int __result_obj__42;
int __result_obj__43;
memset(&ap_85, 0, sizeof(va_list));
s_87 = (void*)0;
    __builtin_va_start(ap_85,fmt);
    p_86=out;
    char buf_88[32];
    memset(&buf_88, 0, sizeof(char)    *(32)    );
    remaining_89=out_size;
    if(    remaining_89==0    ) {
        __builtin_va_end(ap_85);
        __result_obj__42 = 0;
        come_call_finalizer(va_list_finalize, (&ap_85), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__42;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_89>1            ) {
                *p_86++=*fmt;
                remaining_89--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_87=__builtin_va_arg(ap_85,const char*);
            while(            *s_87&&remaining_89>1            ) {
                *p_86++=*s_87++;
                remaining_89--;
            }
            break;
            case 100:
            itoa(buf_88,__builtin_va_arg(ap_85,int),10,0);
            s_87=buf_88;
            while(            *s_87&&remaining_89>1            ) {
                *p_86++=*s_87++;
                remaining_89--;
            }
            break;
            case 120:
            itoa(buf_88,(unsigned int)__builtin_va_arg(ap_85,int),16,1);
            s_87=buf_88;
            while(            *s_87&&remaining_89>1            ) {
                *p_86++=*s_87++;
                remaining_89--;
            }
            break;
            case 99:
            if(            remaining_89>1            ) {
                *p_86++=(char)__builtin_va_arg(ap_85,int);
                remaining_89--;
            }
            break;
            case 112:
            s_87="0x";
            while(            *s_87&&remaining_89>1            ) {
                *p_86++=*s_87++;
                remaining_89--;
            }
            itoa(buf_88,(long)__builtin_va_arg(ap_85,void*),16,1);
            s_87=buf_88;
            while(            *s_87&&remaining_89>1            ) {
                *p_86++=*s_87++;
                remaining_89--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_88,__builtin_va_arg(ap_85,long),10,1);
                s_87=buf_88;
                while(                *s_87&&remaining_89>1                ) {
                    *p_86++=*s_87++;
                    remaining_89--;
                }
            }
            break;
            default:
            if(            remaining_89>1            ) {
                *p_86++=37;
                remaining_89--;
                if(                remaining_89>1                ) {
                    *p_86++=*fmt;
                    remaining_89--;
                }
            }
            break;
        }
    }
    *p_86=0;
    __builtin_va_end(ap_85);
    __result_obj__43 = p_86-out;
    come_call_finalizer(va_list_finalize, (&ap_85), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__43;
}

void printint(long num, int base, int is_signed){
int i_91;
unsigned long  int n_92;
memset(&n_92, 0, sizeof(unsigned long  int));
    char buf_90[32];
    memset(&buf_90, 0, sizeof(char)    *(32)    );
    i_91=0;
    if(    is_signed&&num<0    ) {
        putchar(45);
        n_92=-num;
    }
    else {
        n_92=num;
    }
    do {
        buf_90[i_91++]="0123456789abcdef"[n_92%base];
        n_92/=base;
    } while(    n_92>0    );
    while(    i_91--    ) {
        putchar(buf_90[i_91]);
    }
}

int printf(const char* fmt, ...){
va_list ap_93;
char* p_94;
int val__95;
unsigned int val__96;
unsigned long  int val__97;
char c_99;
int __result_obj__44;
memset(&ap_93, 0, sizeof(va_list));
p_94 = (void*)0;
    __builtin_va_start(ap_93,fmt);
    for(    p_94=fmt    ;    *p_94    ;    p_94++    ){
        if(        *p_94!=37        ) {
            putchar(*p_94);
            continue;
        }
        p_94++;
        switch (        *p_94) {
            case 100:
            {
                val__95=__builtin_va_arg(ap_93,int);
                printint(val__95,10,1);
                break;
            }
            case 120:
            {
                val__96=__builtin_va_arg(ap_93,unsigned int);
                printint(val__96,16,0);
                break;
            }
            case 112:
            {
                val__97=(unsigned long  int)__builtin_va_arg(ap_93,void*);
                putchar(48);
                putchar(120);
                printint(val__97,16,0);
                break;
            }
            case 115:
            {
                const char* s_98=__builtin_va_arg(ap_93,const char*);
                if(                !s_98                ) {
                    s_98="(null)";
                }
                while(                *s_98                ) {
                    putchar(*s_98++);
                }
                break;
            }
            case 99:
            {
                c_99=(char)__builtin_va_arg(ap_93,int);
                putchar(c_99);
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
                putchar(*p_94);
                break;
            }
        }
    }
    __builtin_va_end(ap_93);
    __result_obj__44 = 0;
    come_call_finalizer(va_list_finalize, (&ap_93), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__44;
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
struct buffer* buf_100;
int i_101;
void* __right_value3 = (void*)0;
    buf_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 852, "struct buffer*"))));
    buffer_append_format(buf_100,"%s %d\n",sname,sline);
    for(    i_101=gNumComeStackFrame-2    ;    i_101>=0    ;    i_101--    ){
        buffer_append_format(buf_100,"%s %d #%d\n",gComeStackFrameSName[i_101],gComeStackFrameSLine[i_101],gComeStackFrameID[i_101]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_100))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_102;
    for(    i_102=gNumComeStackFrame-1    ;    i_102>=0    ;    i_102--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_102],gComeStackFrameSLine[i_102],gComeStackFrameID[i_102]);
    }
}

char* come_get_stackframe(){
void* __right_value4 = (void*)0;
char* __result_obj__45;
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(gComeStackFrameBuffer))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__45;
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
int i_103;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_103=0    ;    i_103<gHeapPages.mSizePages    ;    i_103++    ){
        gHeapPages.mPages[i_103]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_104;
int n_105;
_Bool flag_106;
int i_107;
struct sMemHeaderTiny* it_108;
int n_109;
int i_110;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_104=gAllocMem;
        n_105=0;
        while(        it_104        ) {
            n_105++;
            flag_106=(_Bool)0;
            printf("#%d ",n_105);
            if(            it_104->class_name            ) {
                printf("%p (%s): ",(char*)it_104+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_104->class_name);
            }
            for(            i_107=0            ;            i_107<16            ;            i_107++            ){
                if(                it_104->sname[i_107]                ) {
                    printf("%s %d #%d, ",it_104->sname[i_107],it_104->sline[i_107],it_104->id[i_107]);
                    flag_106=(_Bool)1;
                }
            }
            if(            flag_106            ) {
                puts("");
            }
            it_104=it_104->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_105,gNumAlloc,gNumFree);
    }
    else {
        it_108=(struct sMemHeaderTiny*)gAllocMem;
        n_109=0;
        while(        it_108        ) {
            n_109++;
            if(            it_108->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_109,(char*)it_108+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_108->class_name,it_108->sname,it_108->sline);
            }
            it_108=it_108->next;
        }
        if(        n_109>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_109,gNumAlloc,gNumFree);
        }
    }
    for(    i_110=0    ;    i_110<gHeapPages.mSizePages    ;    i_110++    ){
        free(gHeapPages.mPages[i_110]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_111;
unsigned long  int free_area_112;
int new_size_pages_113;
char** new_pages_114;
int i_115;
void* __result_obj__46;
    result_111=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_111=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_111,0,size);
        }
        if(        result_111==((void*)0)        ) {
            free_area_112=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_112            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_113=gHeapPages.mSizePages*2;
                    new_pages_114=calloc(1,sizeof(char*)*new_size_pages_113);
                    i_115=0;
                    for(                    ;                    i_115<gHeapPages.mSizePages                    ;                    i_115++                    ){
                        new_pages_114[i_115]=gHeapPages.mPages[i_115];
                    }
                    for(                    ;                    i_115<new_size_pages_113                    ;                    i_115++                    ){
                        new_pages_114[i_115]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_114;
                    gHeapPages.mSizePages=new_size_pages_113;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_111=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_111=calloc(1,size);
    }
    __result_obj__46 = result_111;
    return __result_obj__46;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_116;
struct sMemHeader* it_117;
int i_118;
int i_119;
void* __result_obj__47;
void* result_120;
struct sMemHeaderTiny* it_121;
void* __result_obj__48;
memset(&i_118, 0, sizeof(int));
memset(&i_119, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_116=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_117=result_116;
        it_117->allocated=177783;
        it_117->size=size+sizeof(struct sMemHeader);
        it_117->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_118=0            ;            i_118<gNumComeStackFrame            ;            i_118++            ){
                it_117->sname[i_118]=gComeStackFrameSName[i_118];
                it_117->sline[i_118]=gComeStackFrameSLine[i_118];
                it_117->id[i_118]=gComeStackFrameID[i_118];
            }
        }
        else {
            for(            i_119=0            ;            i_119<16            ;            i_119++            ){
                it_117->sname[i_119]=gComeStackFrameSName[gNumComeStackFrame-1-i_119];
                it_117->sline[i_119]=gComeStackFrameSLine[gNumComeStackFrame-1-i_119];
                it_117->id[i_119]=gComeStackFrameID[gNumComeStackFrame-1-i_119];
            }
        }
        come_pop_stackframe_v2();
        it_117->next=gAllocMem;
        it_117->prev=((void*)0);
        it_117->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_117;
        }
        gAllocMem=it_117;
        gNumAlloc++;
        __result_obj__47 = (char*)result_116+sizeof(struct sMemHeader);
        return __result_obj__47;
    }
    else {
        result_120=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_121=result_120;
        it_121->allocated=177783;
        it_121->class_name=class_name;
        it_121->sname=sname;
        it_121->sline=sline;
        it_121->size=size+sizeof(struct sMemHeaderTiny);
        it_121->free_next=((void*)0);
        it_121->next=(struct sMemHeaderTiny*)gAllocMem;
        it_121->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_121;
        }
        gAllocMem=(struct sMemHeader*)it_121;
        gNumAlloc++;
        __result_obj__48 = (char*)result_120+sizeof(struct sMemHeaderTiny);
        return __result_obj__48;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_122;
struct sMemHeader* prev_it_123;
struct sMemHeader* next_it_124;
unsigned long  int size_125;
struct sMemHeaderTiny* it_126;
struct sMemHeaderTiny* prev_it_127;
struct sMemHeaderTiny* next_it_128;
unsigned long  int size_129;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_122=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_122->allocated!=177783            ) {
                return;
            }
            it_122->allocated=0;
            prev_it_123=it_122->prev;
            next_it_124=it_122->next;
            if(            gAllocMem==it_122            ) {
                gAllocMem=next_it_124;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_123                ) {
                    prev_it_123->next=next_it_124;
                }
                if(                next_it_124                ) {
                    next_it_124->prev=prev_it_123;
                }
            }
            size_125=it_122->size;
            if(            size_125<4096            ) {
                if(                gHeapPages.mFreeMem[size_125]==((void*)0)                ) {
                    it_122->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_125]=(struct sMemHeaderTiny*)it_122;
                }
                else {
                    it_122->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_125];
                    gHeapPages.mFreeMem[size_125]=(struct sMemHeaderTiny*)it_122;
                }
            }
            else {
                free(it_122);
            }
            gNumFree++;
        }
        else {
            it_126=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_126->allocated!=177783            ) {
                return;
            }
            it_126->allocated=0;
            prev_it_127=it_126->prev;
            next_it_128=it_126->next;
            if(            gAllocMem==it_126            ) {
                gAllocMem=(struct sMemHeader*)next_it_128;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_127                ) {
                    prev_it_127->next=next_it_128;
                }
                if(                next_it_128                ) {
                    next_it_128->prev=prev_it_127;
                }
            }
            size_129=it_126->size;
            if(            size_129<4096            ) {
                if(                gHeapPages.mFreeMem[size_129]==((void*)0)                ) {
                    it_126->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_129]=it_126;
                }
                else {
                    it_126->free_next=gHeapPages.mFreeMem[size_129];
                    gHeapPages.mFreeMem[size_129]=it_126;
                }
            }
            else {
                free(it_126);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_130;
char* __result_obj__49;
struct sMemHeaderTiny* it_131;
char* __result_obj__50;
    if(    gComeDebugLib    ) {
        it_130=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_130->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_130);
            exit(2);
        }
        __result_obj__49 = it_130->class_name;
        return __result_obj__49;
    }
    else {
        it_131=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_131->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_131);
            exit(2);
        }
        __result_obj__50 = it_131->class_name;
        return __result_obj__50;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_132;
int i_133;
struct sMemHeaderTiny* it_134;
    if(    gComeDebugLib    ) {
        it_132=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_132->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_132->class_name        ) {
            printf("(%s): ",it_132->class_name);
        }
        for(        i_133=0        ;        i_133<16        ;        i_133++        ){
            if(            it_132->sname[i_133]            ) {
                printf("%s %d #%d, ",it_132->sname[i_133],it_132->sline[i_133],it_132->id[i_133]);
            }
        }
        puts("");
    }
    else {
        it_134=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_134->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_134->class_name,it_134->sname,it_134->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_135;
unsigned long  int* ref_count_136;
unsigned long  int* size2_137;
void* __result_obj__51;
    mem_135=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_136=(unsigned long  int*)mem_135;
    *ref_count_136=0;
    size2_137=(unsigned long  int*)(mem_135+sizeof(unsigned long  int));
    *size2_137=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__51 = mem_135+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__51;
}

void come_free(void* mem){
unsigned long  int* ref_count_138;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_138=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_138);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__52;
char* mem_139;
unsigned long  int* size_p_140;
unsigned long  int size_141;
void* result_142;
void* __result_obj__53;
    if(    !block    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    mem_139=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_140=(unsigned long  int*)(mem_139+sizeof(unsigned long  int));
    size_141=*size_p_140-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_142=come_calloc_v2(1,size_141,sname,sline,class_name);
    memcpy(result_142,block,size_141);
    __result_obj__53 = result_142;
    return __result_obj__53;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__54;
unsigned long  int* ref_count_143;
void* __result_obj__55;
    if(    mem==((void*)0)    ) {
        __result_obj__54 = mem;
        return __result_obj__54;
    }
    ref_count_143=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_143)++;
    __result_obj__55 = mem;
    return __result_obj__55;
}

void* come_print_ref_count(void* mem){
void* __result_obj__56;
unsigned long  int* ref_count_144;
void* __result_obj__57;
    if(    mem==((void*)0)    ) {
        __result_obj__56 = mem;
        return __result_obj__56;
    }
    ref_count_144=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_144);
    __result_obj__57 = mem;
    return __result_obj__57;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__58;
void* __result_obj__59;
unsigned long  int* ref_count_145;
unsigned long  int count_146;
void (*finalizer_147)(void*);
void* __result_obj__60;
void* __result_obj__61;
memset(&finalizer_147, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__58 = mem;
            return __result_obj__58;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    ref_count_145=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_145)--;
    }
    count_146=*ref_count_145;
    if(    !no_free&&count_146<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_147=protocol_fun;
            finalizer_147(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__60 = ((void*)0);
        return __result_obj__60;
    }
    __result_obj__61 = mem;
    return __result_obj__61;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_148)(void*);
void (*finalizer_149)(void*);
void (*finalizer_150)(void*);
unsigned long  int* ref_count_151;
unsigned long  int count_152;
void (*finalizer_153)(void*);
void (*finalizer_154)(void*);
void (*finalizer_155)(void*);
memset(&finalizer_148, 0, sizeof(void (*)(void*)));
memset(&finalizer_149, 0, sizeof(void (*)(void*)));
memset(&finalizer_150, 0, sizeof(void (*)(void*)));
memset(&finalizer_153, 0, sizeof(void (*)(void*)));
memset(&finalizer_154, 0, sizeof(void (*)(void*)));
memset(&finalizer_155, 0, sizeof(void (*)(void*)));
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
                finalizer_148=protocol_fun;
                finalizer_148(protocol_obj);
            }
            finalizer_149=fun;
            finalizer_149(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_150=protocol_fun;
                finalizer_150(protocol_obj);
            }
        }
    }
    else {
        ref_count_151=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_151)--;
        }
        count_152=*ref_count_151;
        if(        !no_free&&count_152<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_153=protocol_fun;
                        finalizer_153(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_154=fun;
                        finalizer_154(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_155=protocol_fun;
                        finalizer_155(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__62;
int len_156;
void* __right_value5 = (void*)0;
char* result_157;
char* __result_obj__63;
    if(    str==((void*)0)    ) {
        __result_obj__62 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__62;
    }
    len_156=strlen(str)+1;
    result_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_156)), "/usr/local/include/comelang.h", 1528, "char*"));
    strncpy(result_157,str,len_156);
    __result_obj__63 = (char*)come_increment_ref_count(result_157);
    (result_157 = come_decrement_ref_count(result_157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__63;
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
char* __result_obj__64;
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value6=come_get_stackframe())));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__65;
    __result_obj__65 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__65;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value7 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__66;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3482, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__66 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value8 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__67;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3492, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__67 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__68;
void* __right_value9 = (void*)0;
struct buffer* result_158;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__68;
    }
    result_158=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3512, "struct buffer*"));
    result_158->size=self->size;
    __dec_obj3=result_158->buf,
    result_158->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3515, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_158->len=self->len;
    memcpy(result_158->buf,self->buf,self->len);
    __result_obj__69 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__70;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__70 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__70;
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
struct buffer* __result_obj__71;
void* __right_value13 = (void*)0;
char* old_buf_159;
int old_len_160;
int new_size_161;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__72;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3563, "char*"));
        memcpy(old_buf_159,self->buf,self->size);
        old_len_160=self->len;
        new_size_161=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3567, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_159,old_len_160);
        self->buf[old_len_160]=0;
        self->size=new_size_161;
        (old_buf_159 = come_decrement_ref_count(old_buf_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__72 = self;
    return __result_obj__72;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__73;
void* __right_value15 = (void*)0;
char* old_buf_162;
int old_len_163;
int new_size_164;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__73 = ((void*)0);
        return __result_obj__73;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_162=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3586, "char*"));
        old_len_163=self->len;
        new_size_164=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_164)), "/usr/local/include/comelang.h", 3590, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_162,old_len_163);
        self->buf[old_len_163]=0;
        self->size=new_size_164;
        (old_buf_162 = come_decrement_ref_count(old_buf_162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__75;
int size_165;
void* __right_value17 = (void*)0;
char* old_buf_166;
int old_len_167;
int new_size_168;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__76;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__75 = self;
        return __result_obj__75;
    }
    size_165=strlen(mem);
    if(    self->len+size_165+1+1>=self->size    ) {
        old_buf_166=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3612, "char*"));
        memcpy(old_buf_166,self->buf,self->size);
        old_len_167=self->len;
        new_size_168=(self->size+size_165+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_168)), "/usr/local/include/comelang.h", 3616, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_166,old_len_167);
        self->buf[old_len_167]=0;
        self->size=new_size_168;
        (old_buf_166 = come_decrement_ref_count(old_buf_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_165);
    self->len+=size_165;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__77;
va_list args_169;
char* result_170;
int len_171;
struct buffer* __result_obj__78;
void* __right_value19 = (void*)0;
char* mem_172;
int size_173;
void* __right_value20 = (void*)0;
char* old_buf_174;
int old_len_175;
int new_size_176;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__79;
memset(&args_169, 0, sizeof(va_list));
result_170 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__77 = self;
        return __result_obj__77;
    }
    __builtin_va_start(args_169,msg);
    len_171=vasprintf(&result_170,msg,args_169);
    __builtin_va_end(args_169);
    if(    len_171<0    ) {
        __result_obj__78 = self;
        return __result_obj__78;
    }
    mem_172=(char*)come_increment_ref_count(__builtin_string(result_170));
    size_173=strlen(mem_172);
    if(    self->len+size_173+1+1>=self->size    ) {
        old_buf_174=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3649, "char*"));
        memcpy(old_buf_174,self->buf,self->size);
        old_len_175=self->len;
        new_size_176=(self->size+size_173+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_176)), "/usr/local/include/comelang.h", 3653, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_174,old_len_175);
        self->buf[old_len_175]=0;
        self->size=new_size_176;
        (old_buf_174 = come_decrement_ref_count(old_buf_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_172,size_173);
    self->len+=size_173;
    self->buf[self->len]=0;
    free(result_170);
    __result_obj__79 = self;
    (mem_172 = come_decrement_ref_count(mem_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__79;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__80;
int size_177;
void* __right_value22 = (void*)0;
char* old_buf_178;
int old_len_179;
int new_size_180;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    size_177=strlen(mem)+1;
    if(    self->len+size_177+1+1+1>=self->size    ) {
        old_buf_178=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3675, "char*"));
        memcpy(old_buf_178,self->buf,self->size);
        old_len_179=self->len;
        new_size_180=(self->size+size_177+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_180)), "/usr/local/include/comelang.h", 3679, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_178,old_len_179);
        self->buf[old_len_179]=0;
        self->size=new_size_180;
        (old_buf_178 = come_decrement_ref_count(old_buf_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_177);
    self->len+=size_177;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__82;
int* mem_181;
int size_182;
void* __right_value24 = (void*)0;
char* old_buf_183;
int old_len_184;
int new_size_185;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    mem_181=&value;
    size_182=sizeof(int);
    if(    self->len+size_182+1+1>=self->size    ) {
        old_buf_183=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3702, "char*"));
        memcpy(old_buf_183,self->buf,self->size);
        old_len_184=self->len;
        new_size_185=(self->size+size_182+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_185)), "/usr/local/include/comelang.h", 3706, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_183,old_len_184);
        self->buf[old_len_184]=0;
        self->size=new_size_185;
        (old_buf_183 = come_decrement_ref_count(old_buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_181,size_182);
    self->len+=size_182;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_186;
int size_187;
void* __right_value26 = (void*)0;
char* old_buf_188;
int old_len_189;
int new_size_190;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__84;
    mem_186=&value;
    size_187=sizeof(long);
    if(    self->len+size_187+1+1>=self->size    ) {
        old_buf_188=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3725, "char*"));
        memcpy(old_buf_188,self->buf,self->size);
        old_len_189=self->len;
        new_size_190=(self->size+size_187+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_190)), "/usr/local/include/comelang.h", 3729, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_188,old_len_189);
        self->buf[old_len_189]=0;
        self->size=new_size_190;
        (old_buf_188 = come_decrement_ref_count(old_buf_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_186,size_187);
    self->len+=size_187;
    self->buf[self->len]=0;
    __result_obj__84 = self;
    return __result_obj__84;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__85;
short* mem_191;
int size_192;
void* __right_value28 = (void*)0;
char* old_buf_193;
int old_len_194;
int new_size_195;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__86;
    if(    self==((void*)0)    ) {
        __result_obj__85 = ((void*)0);
        return __result_obj__85;
    }
    mem_191=&value;
    size_192=sizeof(short);
    if(    self->len+size_192+1+1>=self->size    ) {
        old_buf_193=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3752, "char*"));
        memcpy(old_buf_193,self->buf,self->size);
        old_len_194=self->len;
        new_size_195=(self->size+size_192+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_195)), "/usr/local/include/comelang.h", 3756, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_193,old_len_194);
        self->buf[old_len_194]=0;
        self->size=new_size_195;
        (old_buf_193 = come_decrement_ref_count(old_buf_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_191,size_192);
    self->len+=size_192;
    self->buf[self->len]=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__87;
int len_196;
int new_size_197;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_198;
struct buffer* __result_obj__88;
    if(    self==((void*)0)    ) {
        __result_obj__87 = ((void*)0);
        return __result_obj__87;
    }
    len_196=self->len;
    len_196=(len_196+3)&~3;
    if(    len_196>=self->size    ) {
        new_size_197=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_197)), "/usr/local/include/comelang.h", 3780, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_197;
    }
    for(    i_198=self->len    ;    i_198<len_196    ;    i_198++    ){
        self->buf[i_198]=0;
    }
    self->len=len_196;
    __result_obj__88 = self;
    return __result_obj__88;
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
struct buffer* result_199;
struct buffer* __result_obj__89;
struct buffer* __result_obj__90;
    result_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3810, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__89 = (struct buffer*)come_increment_ref_count(result_199);
        come_call_finalizer(buffer_finalize, result_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__89;
    }
    buffer_append_str(result_199,self);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_199);
    come_call_finalizer(buffer_finalize, result_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__91;
void* __right_value34 = (void*)0;
char* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__91;
    }
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__93;
    __result_obj__93 = self->buf;
    return __result_obj__93;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_200;
struct buffer* __result_obj__94;
    result_200=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3837, "struct buffer*"))));
    buffer_append(result_200,self,sizeof(char)*len);
    __result_obj__94 = (struct buffer*)come_increment_ref_count(result_200);
    come_call_finalizer(buffer_finalize, result_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_201;
int i_202;
struct buffer* __result_obj__95;
    result_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3844, "struct buffer*"))));
    for(    i_202=0    ;    i_202<len    ;    i_202++    ){
        buffer_append(result_201,self[i_202],strlen(self[i_202]));
    }
    __result_obj__95 = (struct buffer*)come_increment_ref_count(result_201);
    come_call_finalizer(buffer_finalize, result_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_203;
struct buffer* __result_obj__96;
    result_203=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3853, "struct buffer*"))));
    buffer_append(result_203,(char*)self,sizeof(short)*len);
    __result_obj__96 = (struct buffer*)come_increment_ref_count(result_203);
    come_call_finalizer(buffer_finalize, result_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_204;
struct buffer* __result_obj__97;
    result_204=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3860, "struct buffer*"))));
    buffer_append(result_204,(char*)self,sizeof(int)*len);
    __result_obj__97 = (struct buffer*)come_increment_ref_count(result_204);
    come_call_finalizer(buffer_finalize, result_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_205;
struct buffer* __result_obj__98;
    result_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3867, "struct buffer*"))));
    buffer_append(result_205,(char*)self,sizeof(long)*len);
    __result_obj__98 = (struct buffer*)come_increment_ref_count(result_205);
    come_call_finalizer(buffer_finalize, result_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_206;
struct buffer* __result_obj__99;
    result_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3874, "struct buffer*"))));
    buffer_append(result_206,(char*)self,sizeof(float)*len);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_206);
    come_call_finalizer(buffer_finalize, result_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_207;
struct buffer* __result_obj__100;
    result_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3881, "struct buffer*"))));
    buffer_append(result_207,(char*)self,sizeof(double)*len);
    __result_obj__100 = (struct buffer*)come_increment_ref_count(result_207);
    come_call_finalizer(buffer_finalize, result_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

char* buffer_printable(struct buffer* self){
int len_208;
void* __right_value49 = (void*)0;
char* result_209;
int n_210;
int i_211;
unsigned char c_212;
char* __result_obj__101;
    len_208=self->len;
    result_209=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_208*2+1)), "/usr/local/include/comelang.h", 3889, "char*"));
    n_210=0;
    for(    i_211=0    ;    i_211<len_208    ;    i_211++    ){
        c_212=self->buf[i_211];
        if(        (c_212>=0&&c_212<32)||c_212==127        ) {
            result_209[n_210++]=94;
            result_209[n_210++]=c_212+65-1;
        }
        else if(        c_212>127        ) {
            result_209[n_210++]=63;
        }
        else {
            result_209[n_210++]=c_212;
        }
    }
    result_209[n_210]=0;
    __result_obj__101 = (char*)come_increment_ref_count(result_209);
    (result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_213;
struct list$1char$* __result_obj__103;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_213=0    ;    i_213<num_value    ;    i_213++    ){
        list$1char$_push_back(self,values[i_213]);
    }
    __result_obj__103 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_214;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_215;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_216;
struct list$1char$* __result_obj__102;
    if(    self->len==0    ) {
        litem_214=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1char$*"))));
        litem_214->prev=((void*)0);
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head=litem_214;
    }
    else if(    self->len==1    ) {
        litem_215=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1char$*"))));
        litem_215->prev=self->head;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head->next=litem_215;
    }
    else {
        litem_216=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1char$*"))));
        litem_216->prev=self->tail;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail->next=litem_216;
        self->tail=litem_216;
    }
    self->len++;
    __result_obj__102 = self;
    return __result_obj__102;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_217;
struct list_item$1char$* prev_it_218;
    it_217=self->head;
    while(    it_217!=((void*)0)    ) {
        prev_it_218=it_217;
        it_217=it_217->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__104;
    __result_obj__104 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3930, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_219;
struct list$1char$p* __result_obj__106;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_219=0    ;    i_219<num_value    ;    i_219++    ){
        list$1char$p_push_back(self,values[i_219]);
    }
    __result_obj__106 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_220;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_221;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_222;
struct list$1char$p* __result_obj__105;
    if(    self->len==0    ) {
        litem_220=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1char$p*"))));
        litem_220->prev=((void*)0);
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head=litem_220;
    }
    else if(    self->len==1    ) {
        litem_221=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1char$p*"))));
        litem_221->prev=self->head;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head->next=litem_221;
    }
    else {
        litem_222=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1char$p*"))));
        litem_222->prev=self->tail;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail->next=litem_222;
        self->tail=litem_222;
    }
    self->len++;
    __result_obj__105 = self;
    return __result_obj__105;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_223;
struct list_item$1char$p* prev_it_224;
    it_223=self->head;
    while(    it_223!=((void*)0)    ) {
        prev_it_224=it_223;
        it_223=it_223->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__107;
    __result_obj__107 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3935, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_225;
struct list$1short$* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_225=0    ;    i_225<num_value    ;    i_225++    ){
        list$1short$_push_back(self,values[i_225]);
    }
    __result_obj__109 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_226;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_227;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_228;
struct list$1short$* __result_obj__108;
    if(    self->len==0    ) {
        litem_226=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1short$*"))));
        litem_226->prev=((void*)0);
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head=litem_226;
    }
    else if(    self->len==1    ) {
        litem_227=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1short$*"))));
        litem_227->prev=self->head;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail=litem_227;
        self->head->next=litem_227;
    }
    else {
        litem_228=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1short$*"))));
        litem_228->prev=self->tail;
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail->next=litem_228;
        self->tail=litem_228;
    }
    self->len++;
    __result_obj__108 = self;
    return __result_obj__108;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_229;
struct list_item$1short$* prev_it_230;
    it_229=self->head;
    while(    it_229!=((void*)0)    ) {
        prev_it_230=it_229;
        it_229=it_229->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__110;
    __result_obj__110 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3940, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_231;
struct list$1int$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_231=0    ;    i_231<num_value    ;    i_231++    ){
        list$1int$_push_back(self,values[i_231]);
    }
    __result_obj__112 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_232;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_233;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_234;
struct list$1int$* __result_obj__111;
    if(    self->len==0    ) {
        litem_232=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1int$*"))));
        litem_232->prev=((void*)0);
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head=litem_232;
    }
    else if(    self->len==1    ) {
        litem_233=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1int$*"))));
        litem_233->prev=self->head;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail=litem_233;
        self->head->next=litem_233;
    }
    else {
        litem_234=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1int$*"))));
        litem_234->prev=self->tail;
        litem_234->next=((void*)0);
        litem_234->item=item;
        self->tail->next=litem_234;
        self->tail=litem_234;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_235;
struct list_item$1int$* prev_it_236;
    it_235=self->head;
    while(    it_235!=((void*)0)    ) {
        prev_it_236=it_235;
        it_235=it_235->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__113;
    __result_obj__113 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3945, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_237;
struct list$1long$* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_237=0    ;    i_237<num_value    ;    i_237++    ){
        list$1long$_push_back(self,values[i_237]);
    }
    __result_obj__115 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_238;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_239;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_240;
struct list$1long$* __result_obj__114;
    if(    self->len==0    ) {
        litem_238=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1long$*"))));
        litem_238->prev=((void*)0);
        litem_238->next=((void*)0);
        litem_238->item=item;
        self->tail=litem_238;
        self->head=litem_238;
    }
    else if(    self->len==1    ) {
        litem_239=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1long$*"))));
        litem_239->prev=self->head;
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail=litem_239;
        self->head->next=litem_239;
    }
    else {
        litem_240=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1long$*"))));
        litem_240->prev=self->tail;
        litem_240->next=((void*)0);
        litem_240->item=item;
        self->tail->next=litem_240;
        self->tail=litem_240;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_241;
struct list_item$1long$* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)    ) {
        prev_it_242=it_241;
        it_241=it_241->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__116;
    __result_obj__116 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3950, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_243;
struct list$1float$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_243=0    ;    i_243<num_value    ;    i_243++    ){
        list$1float$_push_back(self,values[i_243]);
    }
    __result_obj__118 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_244;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_245;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_246;
struct list$1float$* __result_obj__117;
    if(    self->len==0    ) {
        litem_244=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1float$*"))));
        litem_244->prev=((void*)0);
        litem_244->next=((void*)0);
        litem_244->item=item;
        self->tail=litem_244;
        self->head=litem_244;
    }
    else if(    self->len==1    ) {
        litem_245=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1float$*"))));
        litem_245->prev=self->head;
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail=litem_245;
        self->head->next=litem_245;
    }
    else {
        litem_246=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1float$*"))));
        litem_246->prev=self->tail;
        litem_246->next=((void*)0);
        litem_246->item=item;
        self->tail->next=litem_246;
        self->tail=litem_246;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_247;
struct list_item$1float$* prev_it_248;
    it_247=self->head;
    while(    it_247!=((void*)0)    ) {
        prev_it_248=it_247;
        it_247=it_247->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__119;
    __result_obj__119 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3955, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_249;
struct list$1double$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_249=0    ;    i_249<num_value    ;    i_249++    ){
        list$1double$_push_back(self,values[i_249]);
    }
    __result_obj__121 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_250;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_251;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_252;
struct list$1double$* __result_obj__120;
    if(    self->len==0    ) {
        litem_250=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1double$*"))));
        litem_250->prev=((void*)0);
        litem_250->next=((void*)0);
        litem_250->item=item;
        self->tail=litem_250;
        self->head=litem_250;
    }
    else if(    self->len==1    ) {
        litem_251=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1double$*"))));
        litem_251->prev=self->head;
        litem_251->next=((void*)0);
        litem_251->item=item;
        self->tail=litem_251;
        self->head->next=litem_251;
    }
    else {
        litem_252=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1double$*"))));
        litem_252->prev=self->tail;
        litem_252->next=((void*)0);
        litem_252->item=item;
        self->tail->next=litem_252;
        self->tail=litem_252;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_253;
struct list_item$1double$* prev_it_254;
    it_253=self->head;
    while(    it_253!=((void*)0)    ) {
        prev_it_254=it_253;
        it_253=it_253->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__122;
    __result_obj__122 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3960, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
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
char* __result_obj__123;
int len_255;
void* __right_value86 = (void*)0;
char* result_256;
char* __result_obj__124;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_255=strlen(self)+strlen(right);
    result_256=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_255+1)), "/usr/local/include/comelang.h", 4189, "char*"));
    strncpy(result_256,self,len_255+1);
    strncat(result_256,right,len_255+1);
    __result_obj__124 = (char*)come_increment_ref_count(result_256);
    (result_256 = come_decrement_ref_count(result_256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__125;
int len_257;
void* __right_value88 = (void*)0;
char* result_258;
char* __result_obj__126;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    len_257=strlen(self)+strlen(right);
    result_258=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_257+1)), "/usr/local/include/comelang.h", 4204, "char*"));
    strncpy(result_258,self,len_257+1);
    strncat(result_258,right,len_257+1);
    __result_obj__126 = (char*)come_increment_ref_count(result_258);
    (result_258 = come_decrement_ref_count(result_258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__127;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_259;
int i_260;
void* __right_value92 = (void*)0;
char* __result_obj__128;
    if(    self==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    buf_259=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4217, "struct buffer*"))));
    for(    i_260=0    ;    i_260<right    ;    i_260++    ){
        buffer_append_str(buf_259,self);
    }
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_259))));
    come_call_finalizer(buffer_finalize, buf_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__129;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_261;
int i_262;
void* __right_value96 = (void*)0;
char* __result_obj__130;
    if(    self==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    buf_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4231, "struct buffer*"))));
    for(    i_262=0    ;    i_262<right    ;    i_262++    ){
        buffer_append_str(buf_261,self);
    }
    __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_261))));
    come_call_finalizer(buffer_finalize, buf_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_263;
int i_264;
    result_263=(_Bool)0;
    for(    i_264=0    ;    i_264<len    ;    i_264++    ){
        if(        strncmp(self[i_264],str,strlen(self[i_264]))==0        ) {
            result_263=(_Bool)1;
            break;
        }
    }
    return result_263;
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
int result_265;
char* p_266;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_265=0;
    p_266=value;
    while(    *p_266    ) {
        result_265+=(*p_266);
        p_266++;
    }
    return result_265;
}

unsigned int string_get_hash_key(char* value){
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
_Bool result_269;
    result_269=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_269;
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
_Bool result_270;
    result_270=(c>=32&&c<=126);
    return result_270;
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
char* __result_obj__131;
int len_271;
void* __right_value98 = (void*)0;
char* result_272;
int i_273;
char* __result_obj__132;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_271=strlen(str);
    result_272=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_271+1)), "/usr/local/include/comelang.h", 4499, "char*"));
    for(    i_273=0    ;    i_273<len_271    ;    i_273++    ){
        result_272[i_273]=str[len_271-i_273-1];
    }
    result_272[len_271]=0;
    __result_obj__132 = (char*)come_increment_ref_count(result_272);
    (result_272 = come_decrement_ref_count(result_272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__133;
int len_274;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__134;
void* __right_value102 = (void*)0;
char* __result_obj__135;
void* __right_value103 = (void*)0;
char* __result_obj__136;
void* __right_value104 = (void*)0;
char* result_275;
char* __result_obj__137;
    if(    str==((void*)0)    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    len_274=strlen(str);
    if(    head<0    ) {
        head+=len_274;
    }
    if(    tail<0    ) {
        tail+=len_274+1;
    }
    if(    head>tail    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_274    ) {
        tail=len_274;
    }
    if(    head==tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    tail-head+1<1    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    result_275=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4545, "char*"));
    memcpy(result_275,str+head,tail-head);
    result_275[tail-head]=0;
    __result_obj__137 = (char*)come_increment_ref_count(result_275);
    (result_275 = come_decrement_ref_count(result_275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__138;
int len_276;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__139;
void* __right_value108 = (void*)0;
char* __result_obj__140;
void* __right_value109 = (void*)0;
char* __result_obj__141;
void* __right_value110 = (void*)0;
char* result_277;
char* __result_obj__142;
    if(    str==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    len_276=strlen(str);
    if(    head<0    ) {
        head+=len_276;
    }
    if(    tail<0    ) {
        tail+=len_276+1;
    }
    if(    head>tail    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_276    ) {
        tail=len_276;
    }
    if(    head==tail    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    if(    tail-head+1<1    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    result_277=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4588, "char*"));
    memcpy(result_277,str+head,tail-head);
    result_277[tail-head]=0;
    __result_obj__142 = (char*)come_increment_ref_count(result_277);
    (result_277 = come_decrement_ref_count(result_277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__143;
int len_278;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__144;
void* __right_value114 = (void*)0;
char* __result_obj__145;
void* __right_value115 = (void*)0;
char* __result_obj__146;
void* __right_value116 = (void*)0;
char* result_279;
char* __result_obj__147;
    if(    str==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    len_278=strlen(str);
    if(    head<0    ) {
        head+=len_278;
    }
    if(    tail<0    ) {
        tail+=len_278+1;
    }
    if(    head>tail    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_278    ) {
        tail=len_278;
    }
    if(    head==tail    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    tail-head+1<1    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    result_279=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4631, "char*"));
    memcpy(result_279,str+head,tail-head);
    result_279[tail-head]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_279);
    (result_279 = come_decrement_ref_count(result_279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__148;
va_list args_280;
char* result_281;
int len_282;
void* __right_value118 = (void*)0;
char* __result_obj__149;
void* __right_value119 = (void*)0;
char* result2_283;
char* __result_obj__150;
memset(&args_280, 0, sizeof(va_list));
result_281 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    __builtin_va_start(args_280,msg);
    len_282=vasprintf(&result_281,msg,args_280);
    __builtin_va_end(args_280);
    if(    len_282<0    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    result2_283=(char*)come_increment_ref_count(__builtin_string(result_281));
    free(result_281);
    __result_obj__150 = (char*)come_increment_ref_count(result2_283);
    (result2_283 = come_decrement_ref_count(result2_283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__151;
int len_284;
void* __right_value121 = (void*)0;
char* __result_obj__152;
void* __right_value122 = (void*)0;
char* __result_obj__153;
void* __right_value123 = (void*)0;
char* result_285;
char* __result_obj__154;
    if(    str==((void*)0)    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    len_284=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    if(    head<0    ) {
        head+=len_284;
    }
    if(    tail<0    ) {
        tail+=len_284+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    tail>=len_284    ) {
        tail=len_284;
    }
    result_285=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_284-(tail-head)+1)), "/usr/local/include/comelang.h", 4693, "char*"));
    memcpy(result_285,str,head);
    memcpy(result_285+head,str+tail,len_284-tail);
    result_285[len_284-(tail-head)]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_285);
    (result_285 = come_decrement_ref_count(result_285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__155;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__155 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_286;
struct list_item$1char$ph* prev_it_287;
    it_286=self->head;
    while(    it_286!=((void*)0)    ) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj15;
struct list$1char$ph* __result_obj__157;
    if(    self->len==0    ) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1711, "struct list_item$1char$ph*"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj13=litem_291->item,
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1    ) {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1721, "struct list_item$1char$ph*"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj14=litem_292->item,
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1731, "struct list_item$1char$ph*"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj15=litem_293->item,
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result_obj__157 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__157;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__156;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_288;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_289;
int i_290;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__158;
    if(    self==((void*)0)    ) {
        __result_obj__156 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4706, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__156;
    }
    result_288=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4709, "struct list$1char$ph*"))));
    str_289=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4711, "struct buffer*"))));
    for(    i_290=0    ;    i_290<charp_length(self)    ;    i_290++    ){
        if(        self[i_290]==c        ) {
            list$1char$ph_push_back(result_288,(char*)come_increment_ref_count(__builtin_string(str_289->buf)));
            buffer_reset(str_289);
        }
        else {
            buffer_append_char(str_289,self[i_290]);
        }
    }
    if(    buffer_length(str_289)!=0    ) {
        list$1char$ph_push_back(result_288,(char*)come_increment_ref_count(__builtin_string(str_289->buf)));
    }
    __result_obj__158 = (struct list$1char$ph*)come_increment_ref_count(result_288);
    come_call_finalizer(list$1char$ph$p_finalize, result_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* charp_printable(char* str){
int len_294;
void* __right_value137 = (void*)0;
char* result_295;
int n_296;
int i_297;
char c_298;
char* __result_obj__161;
    len_294=charp_length(str);
    result_295=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_294*2+1)), "/usr/local/include/comelang.h", 4743, "char*"));
    n_296=0;
    for(    i_297=0    ;    i_297<len_294    ;    i_297++    ){
        c_298=str[i_297];
        if(        (c_298>=0&&c_298<32)||c_298==127        ) {
            result_295[n_296++]=94;
            result_295[n_296++]=c_298+65-1;
        }
        else {
            result_295[n_296++]=c_298;
        }
    }
    result_295[n_296]=0;
    __result_obj__161 = (char*)come_increment_ref_count(result_295);
    (result_295 = come_decrement_ref_count(result_295, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__162;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_299;
char* p_300;
char* p2_301;
void* __right_value141 = (void*)0;
char* __result_obj__163;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    result_299=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4771, "struct buffer*"))));
    p_300=self;
    while(    (_Bool)1    ) {
        p2_301=strstr(p_300,str);
        if(        p2_301==((void*)0)        ) {
            p2_301=p_300;
            while(            *p2_301            ) {
                p2_301++;
            }
            buffer_append(result_299,p_300,p2_301-p_300);
            break;
        }
        buffer_append(result_299,p_300,p2_301-p_300);
        buffer_append_str(result_299,replace);
        p_300=p2_301+strlen(str);
    }
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_299))));
    come_call_finalizer(buffer_finalize, result_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__164;
char* p_302;
void* __right_value143 = (void*)0;
char* __result_obj__165;
void* __right_value144 = (void*)0;
char* __result_obj__166;
void* __right_value145 = (void*)0;
char* __result_obj__167;
    if(    path==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    p_302=path+strlen(path);
    while(    p_302>=path    ) {
        if(        *p_302==47        ) {
            break;
        }
        else {
            p_302--;
        }
    }
    if(    p_302<path    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    else {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_302+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__168;
void* __right_value147 = (void*)0;
char* path2_303;
char* p_304;
void* __right_value148 = (void*)0;
char* __result_obj__169;
void* __right_value149 = (void*)0;
char* __result_obj__170;
void* __right_value150 = (void*)0;
char* __result_obj__171;
    if(    path==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    path2_303=(char*)come_increment_ref_count(xbasename(path));
    p_304=path2_303+strlen(path2_303);
    while(    p_304>=path2_303    ) {
        if(        *p_304==46        ) {
            break;
        }
        else {
            p_304--;
        }
    }
    if(    p_304<path2_303    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_303))));
        (path2_303 = come_decrement_ref_count(path2_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_303,0,p_304-path2_303))));
        (path2_303 = come_decrement_ref_count(path2_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_303 = come_decrement_ref_count(path2_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__172;
char* p_305;
void* __right_value152 = (void*)0;
char* __result_obj__173;
void* __right_value153 = (void*)0;
char* __result_obj__174;
void* __right_value154 = (void*)0;
char* __result_obj__175;
    if(    path==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    p_305=path+strlen(path);
    while(    p_305>=path    ) {
        if(        *p_305==46        ) {
            break;
        }
        else {
            p_305--;
        }
    }
    if(    p_305<path    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    else {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_305+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__176;
void* __right_value156 = (void*)0;
char* __result_obj__177;
    if(    self    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    else {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__178;
void* __right_value158 = (void*)0;
char* __result_obj__179;
    if(    self    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
}

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__180;
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__181;
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__182;
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__183;
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__185;
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__186;
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__187;
void* __right_value167 = (void*)0;
char* __result_obj__188;
    if(    self==((void*)0)    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__188;
}

char* charp_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__189;
void* __right_value169 = (void*)0;
char* __result_obj__190;
    if(    self==((void*)0)    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
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
int i_306;
    for(    i_306=0    ;    i_306<self    ;    i_306++    ){
        block(parent,i_306);
    }
}

