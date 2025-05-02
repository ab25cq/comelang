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
char* uart=(char*)268435456;
int gActiveProc=0;
int gNumProc=0;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void putc(int fd, char c);
void uartputc_sync(char c);
void puts(const char* s);
static void printint(int fd, int xx, int base, int sgn);
static void printptr(int fd, unsigned long  int x);
void vprintf(int fd, const char* fmt, va_list ap);
int fprintf(int fd, const char* fmt, ...);
static void va_list_finalize(va_list self);
void printf(const char* fmt, ...);
void kfree(void* pa);
void freerange(void* pa_start, void* pa_end);
void kinit();
void* kalloc();
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
char* safestrcpy(char* s, const char* t, int n);
int strlen(const char* s);
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
unsigned long  int x_27;
memset(&x_27, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_27));
    return x_27;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_28));
    return x_28;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_29;
memset(&x_29, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_29));
    return x_29;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_30;
memset(&x_30, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_30));
    return x_30;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_31;
memset(&x_31, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_31));
    return x_31;
}
static inline void w_mie(unsigned long  int x){
    __asm volatile("csrw mie, %0" : : "r"(x));
}
static inline void w_mtvec(unsigned long  int x){
    __asm volatile("csrw mtvec, %0" : : "r"(x));
}

// body function
void putc(int fd, char c){
    if(    fd==1    ) {
        *(char*)(268435456)=c;
    }
}

void uartputc_sync(char c){
    *(char*)(268435456)=c;
}

void puts(const char* s){
    intr_off();
    while(    *s    ) {
        putc(1,*s++);
    }
    intr_on();
}

static void printint(int fd, int xx, int base, int sgn){
int i_3;
int neg_4;
unsigned int x_5;
memset(&i_3, 0, sizeof(int));
memset(&neg_4, 0, sizeof(int));
memset(&x_5, 0, sizeof(unsigned int));
    char buf_2[16];
    memset(&buf_2, 0, sizeof(char)    *(16)    );
    neg_4=0;
    if(    sgn&&xx<0    ) {
        neg_4=1;
        x_5=-xx;
    }
    else {
        x_5=xx;
    }
    i_3=0;
    do {
        buf_2[i_3++]=digits[x_5%base];
    } while(    (x_5/=base)!=0    );
    if(    neg_4    ) {
        buf_2[i_3++]=45;
    }
    while(    --i_3>=0    ) {
        putc(fd,buf_2[i_3]);
    }
}

static void printptr(int fd, unsigned long  int x){
int i_6;
memset(&i_6, 0, sizeof(int));
    putc(fd,48);
    putc(fd,120);
    for(    i_6=0    ;    i_6<(sizeof(unsigned long  int)*2)    ;    i_6++,x<<=4    ){
        putc(fd,digits[x>>(sizeof(unsigned long  int)*8-4)]);
    }
}

void vprintf(int fd, const char* fmt, va_list ap){
char* s_7;
int c0_8;
int c1_9;
int c2_10;
int i_11;
int state_12;
s_7 = (void*)0;
memset(&c0_8, 0, sizeof(int));
memset(&c1_9, 0, sizeof(int));
memset(&c2_10, 0, sizeof(int));
memset(&i_11, 0, sizeof(int));
memset(&state_12, 0, sizeof(int));
    state_12=0;
    for(    i_11=0    ;    fmt[i_11]    ;    i_11++    ){
        c0_8=fmt[i_11]&255;
        if(        state_12==0        ) {
            if(            c0_8==37            ) {
                state_12=37;
            }
            else {
                putc(fd,c0_8);
            }
        }
        else if(        state_12==37        ) {
            c1_9=c2_10=0;
            if(            c0_8            ) {
                c1_9=fmt[i_11+1]&255;
            }
            if(            c1_9            ) {
                c2_10=fmt[i_11+2]&255;
            }
            if(            c0_8==100            ) {
                printint(fd,__builtin_va_arg(ap,int),10,1);
            }
            else if(            c0_8==108&&c1_9==100            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),10,1);
                i_11+=1;
            }
            else if(            c0_8==108&&c1_9==108&&c2_10==100            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),10,1);
                i_11+=2;
            }
            else if(            c0_8==117            ) {
                printint(fd,__builtin_va_arg(ap,int),10,0);
            }
            else if(            c0_8==108&&c1_9==117            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),10,0);
                i_11+=1;
            }
            else if(            c0_8==108&&c1_9==108&&c2_10==117            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),10,0);
                i_11+=2;
            }
            else if(            c0_8==120            ) {
                printint(fd,__builtin_va_arg(ap,int),16,0);
            }
            else if(            c0_8==108&&c1_9==120            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),16,0);
                i_11+=1;
            }
            else if(            c0_8==108&&c1_9==108&&c2_10==120            ) {
                printint(fd,__builtin_va_arg(ap,unsigned long  int),16,0);
                i_11+=2;
            }
            else if(            c0_8==112            ) {
                printptr(fd,__builtin_va_arg(ap,unsigned long  int));
            }
            else if(            c0_8==115            ) {
                if(                (s_7=__builtin_va_arg(ap,char*))==0                ) {
                    s_7="(null)";
                }
                for(                ;                *s_7                ;                s_7++                ){
                    putc(fd,*s_7);
                }
            }
            else if(            c0_8==37            ) {
                putc(fd,37);
            }
            else {
                putc(fd,37);
                putc(fd,c0_8);
            }
            state_12=0;
        }
    }
}

int fprintf(int fd, const char* fmt, ...){
va_list ap_13;
memset(&ap_13, 0, sizeof(va_list));
    __builtin_va_start(ap_13,fmt);
    vprintf(fd,fmt,ap_13);
    come_call_finalizer(va_list_finalize, (&ap_13), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static void va_list_finalize(va_list self){
}

void printf(const char* fmt, ...){
va_list ap_14;
memset(&ap_14, 0, sizeof(va_list));
    __builtin_va_start(ap_14,fmt);
    vprintf(1,fmt,ap_14);
    come_call_finalizer(va_list_finalize, (&ap_14), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void kfree(void* pa){
struct run* r_15;
r_15 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_15=(struct run*)pa;
    r_15->next=kmem.freelist;
    kmem.freelist=r_15;
}

void freerange(void* pa_start, void* pa_end){
char* p_16;
p_16 = (void*)0;
    p_16=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_16+4096<=(_end+4096*256)    ;    p_16+=4096    ){
        kfree(p_16);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_17;
void* __result_obj__1;
r_17 = (void*)0;
    r_17=kmem.freelist;
    if(    r_17    ) {
        kmem.freelist=r_17->next;
    }
    __result_obj__1 = (void*)r_17;
    return __result_obj__1;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_18;
int i_19;
void* __result_obj__2;
memset(&i_19, 0, sizeof(int));
    cdst_18=(char*)dst;
    for(    i_19=0    ;    i_19<n    ;    i_19++    ){
        cdst_18[i_19]=c;
    }
    __result_obj__2 = dst;
    return __result_obj__2;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_20;
const unsigned char* s2_21;
memset(&s1_20, 0, sizeof(const unsigned char*));
memset(&s2_21, 0, sizeof(const unsigned char*));
    s1_20=v1;
    s2_21=v2;
    while(    n-->0    ) {
        if(        *s1_20!=*s2_21        ) {
            return *s1_20-*s2_21;
        }
        s1_20++,s2_21++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_22;
char* d_23;
void* __result_obj__3;
void* __result_obj__4;
s_22 = (void*)0;
d_23 = (void*)0;
    if(    n==0    ) {
        __result_obj__3 = dst;
        return __result_obj__3;
    }
    s_22=src;
    d_23=dst;
    if(    s_22<d_23&&s_22+n>d_23    ) {
        s_22+=n;
        d_23+=n;
        while(        n-->0        ) {
            *--d_23=*--s_22;
        }
    }
    else {
        while(        n-->0        ) {
            *d_23++=*s_22++;
        }
    }
    __result_obj__4 = dst;
    return __result_obj__4;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__5;
    __result_obj__5 = memmove(dst,src,n);
    return __result_obj__5;
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
char* os_24;
char* __result_obj__6;
os_24 = (void*)0;
    os_24=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__6 = os_24;
    return __result_obj__6;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_25;
char* __result_obj__7;
char* __result_obj__8;
os_25 = (void*)0;
    os_25=s;
    if(    n<=0    ) {
        __result_obj__7 = os_25;
        return __result_obj__7;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__8 = os_25;
    return __result_obj__8;
}

int strlen(const char* s){
int n_26;
memset(&n_26, 0, sizeof(int));
    for(    n_26=0    ;    s[n_26]    ;    n_26++    ){
        ;
    }
    return n_26;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_32;
    w_mtvec((unsigned long  int)timervec&~3);
    now_32=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_32+-1;
    w_mie(0);
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
struct proc* result_33;
struct proc* __result_obj__9;
    result_33=kalloc();
    memset(result_33,0,sizeof(struct proc));
    result_33->stack=kalloc();
    result_33->context.sp=(unsigned long  int)(result_33->stack+4096);
    result_33->context.mepc=(unsigned long  int)task;
    result_33->state=(3);
    gProc[gNumProc++]=result_33;
    __result_obj__9 = result_33;
    return __result_obj__9;
}

void timer_reset(){
unsigned long  int now_34;
    now_34=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_34+10000000;
}

void timer_handler(){
struct proc* p_35;
struct context* tf_36;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_35=gProc[gActiveProc];
    tf_36=(struct context*)TRAPFRAME;
    p_35->context=*tf_36;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_36->ra);
    printf("ra %x\n",p_35->context.ra);
    printf("sp %x\n",tf_36->sp);
    printf("sp %x\n",p_35->context.sp);
    printf("gp %x\n",p_35->context.gp);
    printf("mepc %x\n",tf_36->mepc);
    printf("mepc %x\n",p_35->context.mepc);
    yield();
}

void yield(){
struct proc* p_37;
    p_37=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_37=gProc[gActiveProc];
    p_37->state=(3);
    scheduler();
}

void scheduler(){
int i_38;
struct proc* p_39;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_38=0        ;        i_38<gNumProc        ;        i_38++        ){
            p_39=gProc[i_38];
            if(            p_39->state==(3)            ) {
                gActiveProc=i_38;
                p_39->state=(4);
                printf("SWITCH TO %d\n",i_38);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_39->context);
                disable_timer_interrupts();
                p_39->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_40;
    now_40=*(unsigned long  int*)33603576;
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
void* __result_obj__10;
void* prev_41;
void* __result_obj__11;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__10 = (void*)-1;
        return __result_obj__10;
    }
    prev_41=heap_end;
    heap_end+=incr;
    __result_obj__11 = prev_41;
    return __result_obj__11;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_42;
struct sBlock* __result_obj__12;
struct sBlock* __result_obj__13;
    curr_42=free_list;
    while(    curr_42    ) {
        if(        curr_42->free&&curr_42->size>=size        ) {
            __result_obj__12 = curr_42;
            return __result_obj__12;
        }
        curr_42=curr_42->next;
    }
    __result_obj__13 = ((void*)0);
    return __result_obj__13;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_43;
struct sBlock* __result_obj__14;
struct sBlock* b_44;
struct sBlock* __result_obj__15;
    mem_43=_sbrk(size+sizeof(struct sBlock));
    if(    mem_43==(void*)-1    ) {
        __result_obj__14 = ((void*)0);
        return __result_obj__14;
    }
    b_44=(struct sBlock*)mem_43;
    b_44->size=size;
    b_44->next=((void*)0);
    b_44->free=0;
    __result_obj__15 = b_44;
    return __result_obj__15;
}

void* malloc(unsigned long  int size){
struct sBlock* block_45;
void* __result_obj__16;
void* __result_obj__17;
struct sBlock* curr_46;
void* __result_obj__18;
block_45 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_45=find_free_block(size))    ) {
        block_45->free=0;
        __result_obj__16 = (void*)(block_45+1);
        return __result_obj__16;
    }
    block_45=request_space(size);
    if(    !block_45    ) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    if(    !free_list    ) {
        free_list=block_45;
    }
    else {
        curr_46=free_list;
        while(        curr_46->next        ) {
            curr_46=curr_46->next;
        }
        curr_46->next=block_45;
    }
    __result_obj__18 = (void*)(block_45+1);
    return __result_obj__18;
}

void free(void* ptr){
struct sBlock* block_47;
    if(    !ptr    ) {
        return;
    }
    block_47=((struct sBlock*)ptr)-1;
    block_47->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_48;
void* ptr_49;
void* __result_obj__19;
    total_48=n*size;
    ptr_49=malloc(total_48);
    if(    ptr_49    ) {
        memset(ptr_49,0,total_48);
    }
    __result_obj__19 = ptr_49;
    return __result_obj__19;
}

char* strdup(const char* s){
unsigned long  int len_50;
char* p_51;
char* __result_obj__20;
    len_50=strlen(s)+1;
    p_51=malloc(len_50);
    if(    p_51    ) {
        memcpy(p_51,s,len_50);
    }
    __result_obj__20 = p_51;
    return __result_obj__20;
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
struct buffer* buf_52;
int i_53;
void* __right_value2 = (void*)0;
    buf_52=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 295, "struct buffer*"))));
    buffer_append_format(buf_52,"%s %d\n",sname,sline);
    for(    i_53=gNumComeStackFrame-2    ;    i_53>=0    ;    i_53--    ){
        buffer_append_format(buf_52,"%s %d #%d\n",gComeStackFrameSName[i_53],gComeStackFrameSLine[i_53],gComeStackFrameID[i_53]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_52))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_54;
    for(    i_54=gNumComeStackFrame-1    ;    i_54>=0    ;    i_54--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_54],gComeStackFrameSLine[i_54],gComeStackFrameID[i_54]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__21;
    __result_obj__21 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__21 = come_decrement_ref_count(__result_obj__21, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__21;
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
int i_55;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_55=0    ;    i_55<gHeapPages.mSizePages    ;    i_55++    ){
        gHeapPages.mPages[i_55]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_56;
int n_57;
_Bool flag_58;
int i_59;
struct sMemHeaderTiny* it_60;
int n_61;
int i_62;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_56=gAllocMem;
        n_57=0;
        while(        it_56        ) {
            n_57++;
            flag_58=(_Bool)0;
            printf("#%d ",n_57);
            if(            it_56->class_name            ) {
                printf("%p (%s): ",(char*)it_56+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_56->class_name);
            }
            for(            i_59=0            ;            i_59<16            ;            i_59++            ){
                if(                it_56->sname[i_59]                ) {
                    printf("%s %d #%d, ",it_56->sname[i_59],it_56->sline[i_59],it_56->id[i_59]);
                    flag_58=(_Bool)1;
                }
            }
            if(            flag_58            ) {
                puts("");
            }
            it_56=it_56->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_57,gNumAlloc,gNumFree);
    }
    else {
        it_60=(struct sMemHeaderTiny*)gAllocMem;
        n_61=0;
        while(        it_60        ) {
            n_61++;
            if(            it_60->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_61,(char*)it_60+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_60->class_name,it_60->sname,it_60->sline);
            }
            it_60=it_60->next;
        }
        if(        n_61>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_61,gNumAlloc,gNumFree);
        }
    }
    for(    i_62=0    ;    i_62<gHeapPages.mSizePages    ;    i_62++    ){
        free(gHeapPages.mPages[i_62]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_63;
unsigned long  int free_area_64;
int new_size_pages_65;
char** new_pages_66;
int i_67;
void* __result_obj__22;
    result_63=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_63=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_63,0,size);
        }
        if(        result_63==((void*)0)        ) {
            free_area_64=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_64            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_65=gHeapPages.mSizePages*2;
                    new_pages_66=calloc(1,sizeof(char*)*new_size_pages_65);
                    i_67=0;
                    for(                    ;                    i_67<gHeapPages.mSizePages                    ;                    i_67++                    ){
                        new_pages_66[i_67]=gHeapPages.mPages[i_67];
                    }
                    for(                    ;                    i_67<new_size_pages_65                    ;                    i_67++                    ){
                        new_pages_66[i_67]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_66;
                    gHeapPages.mSizePages=new_size_pages_65;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_63=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_63=calloc(1,size);
    }
    __result_obj__22 = result_63;
    return __result_obj__22;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_68;
struct sMemHeader* it_69;
int i_70;
int i_71;
void* __result_obj__23;
void* result_72;
struct sMemHeaderTiny* it_73;
void* __result_obj__24;
memset(&i_70, 0, sizeof(int));
memset(&i_71, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_68=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_69=result_68;
        it_69->allocated=177783;
        it_69->size=size+sizeof(struct sMemHeader);
        it_69->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_70=0            ;            i_70<gNumComeStackFrame            ;            i_70++            ){
                it_69->sname[i_70]=gComeStackFrameSName[i_70];
                it_69->sline[i_70]=gComeStackFrameSLine[i_70];
                it_69->id[i_70]=gComeStackFrameID[i_70];
            }
        }
        else {
            for(            i_71=0            ;            i_71<16            ;            i_71++            ){
                it_69->sname[i_71]=gComeStackFrameSName[gNumComeStackFrame-1-i_71];
                it_69->sline[i_71]=gComeStackFrameSLine[gNumComeStackFrame-1-i_71];
                it_69->id[i_71]=gComeStackFrameID[gNumComeStackFrame-1-i_71];
            }
        }
        come_pop_stackframe_v2();
        it_69->next=gAllocMem;
        it_69->prev=((void*)0);
        it_69->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_69;
        }
        gAllocMem=it_69;
        gNumAlloc++;
        __result_obj__23 = (char*)result_68+sizeof(struct sMemHeader);
        return __result_obj__23;
    }
    else {
        result_72=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_73=result_72;
        it_73->allocated=177783;
        it_73->class_name=class_name;
        it_73->sname=sname;
        it_73->sline=sline;
        it_73->size=size+sizeof(struct sMemHeaderTiny);
        it_73->free_next=((void*)0);
        it_73->next=(struct sMemHeaderTiny*)gAllocMem;
        it_73->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_73;
        }
        gAllocMem=(struct sMemHeader*)it_73;
        gNumAlloc++;
        __result_obj__24 = (char*)result_72+sizeof(struct sMemHeaderTiny);
        return __result_obj__24;
    }
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
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
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
            if(            size_77<4096            ) {
                if(                gHeapPages.mFreeMem[size_77]==((void*)0)                ) {
                    it_74->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_77]=(struct sMemHeaderTiny*)it_74;
                }
                else {
                    it_74->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_77];
                    gHeapPages.mFreeMem[size_77]=(struct sMemHeaderTiny*)it_74;
                }
            }
            else {
                free(it_74);
            }
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
            if(            size_81<4096            ) {
                if(                gHeapPages.mFreeMem[size_81]==((void*)0)                ) {
                    it_78->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_81]=it_78;
                }
                else {
                    it_78->free_next=gHeapPages.mFreeMem[size_81];
                    gHeapPages.mFreeMem[size_81]=it_78;
                }
            }
            else {
                free(it_78);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_82;
char* __result_obj__25;
struct sMemHeaderTiny* it_83;
char* __result_obj__26;
    if(    gComeDebugLib    ) {
        it_82=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_82->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_82);
            exit(2);
        }
        __result_obj__25 = it_82->class_name;
        return __result_obj__25;
    }
    else {
        it_83=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_83->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_83);
            exit(2);
        }
        __result_obj__26 = it_83->class_name;
        return __result_obj__26;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_84;
int i_85;
struct sMemHeaderTiny* it_86;
    if(    gComeDebugLib    ) {
        it_84=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_84->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_84->class_name        ) {
            printf("(%s): ",it_84->class_name);
        }
        for(        i_85=0        ;        i_85<16        ;        i_85++        ){
            if(            it_84->sname[i_85]            ) {
                printf("%s %d #%d, ",it_84->sname[i_85],it_84->sline[i_85],it_84->id[i_85]);
            }
        }
        puts("");
    }
    else {
        it_86=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_86->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_86->class_name,it_86->sname,it_86->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_87;
unsigned long  int* ref_count_88;
unsigned long  int* size2_89;
void* __result_obj__27;
    mem_87=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_88=(unsigned long  int*)mem_87;
    *ref_count_88=0;
    size2_89=(unsigned long  int*)(mem_87+sizeof(unsigned long  int));
    *size2_89=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__27 = mem_87+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__27;
}

void come_free(void* mem){
unsigned long  int* ref_count_90;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_90=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_90);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__28;
char* mem_91;
unsigned long  int* size_p_92;
unsigned long  int size_93;
void* result_94;
void* __result_obj__29;
    if(    !block    ) {
        __result_obj__28 = ((void*)0);
        return __result_obj__28;
    }
    mem_91=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_92=(unsigned long  int*)(mem_91+sizeof(unsigned long  int));
    size_93=*size_p_92-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_94=come_calloc_v2(1,size_93,sname,sline,class_name);
    memcpy(result_94,block,size_93);
    __result_obj__29 = result_94;
    return __result_obj__29;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__30;
unsigned long  int* ref_count_95;
void* __result_obj__31;
    if(    mem==((void*)0)    ) {
        __result_obj__30 = mem;
        return __result_obj__30;
    }
    ref_count_95=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_95)++;
    __result_obj__31 = mem;
    return __result_obj__31;
}

void* come_print_ref_count(void* mem){
void* __result_obj__32;
unsigned long  int* ref_count_96;
void* __result_obj__33;
    if(    mem==((void*)0)    ) {
        __result_obj__32 = mem;
        return __result_obj__32;
    }
    ref_count_96=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_96);
    __result_obj__33 = mem;
    return __result_obj__33;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__34;
void* __result_obj__35;
unsigned long  int* ref_count_97;
unsigned long  int count_98;
void (*finalizer_99)(void*);
void* __result_obj__36;
void* __result_obj__37;
memset(&finalizer_99, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__34 = mem;
            return __result_obj__34;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    ref_count_97=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_97)--;
    }
    count_98=*ref_count_97;
    if(    !no_free&&count_98<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_99=protocol_fun;
            finalizer_99(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__36 = ((void*)0);
        return __result_obj__36;
    }
    __result_obj__37 = mem;
    return __result_obj__37;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_100)(void*);
void (*finalizer_101)(void*);
void (*finalizer_102)(void*);
unsigned long  int* ref_count_103;
unsigned long  int count_104;
void (*finalizer_105)(void*);
void (*finalizer_106)(void*);
void (*finalizer_107)(void*);
memset(&finalizer_100, 0, sizeof(void (*)(void*)));
memset(&finalizer_101, 0, sizeof(void (*)(void*)));
memset(&finalizer_102, 0, sizeof(void (*)(void*)));
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
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
                finalizer_100=protocol_fun;
                finalizer_100(protocol_obj);
            }
            finalizer_101=fun;
            finalizer_101(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_102=protocol_fun;
                finalizer_102(protocol_obj);
            }
        }
    }
    else {
        ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_103)--;
        }
        count_104=*ref_count_103;
        if(        !no_free&&count_104<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_105=protocol_fun;
                        finalizer_105(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_106=fun;
                        finalizer_106(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_107=protocol_fun;
                        finalizer_107(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__38;
int len_108;
void* __right_value4 = (void*)0;
char* result_109;
char* __result_obj__39;
    if(    str==((void*)0)    ) {
        __result_obj__38 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__38;
    }
    len_108=strlen(str)+1;
    result_109=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_108)), "/usr/local/include/comelang.h", 971, "char*"));
    strncpy(result_109,str,len_108);
    __result_obj__39 = (char*)come_increment_ref_count(result_109);
    (result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__39;
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
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__40;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__41;
    __result_obj__41 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__41;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__42;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__42 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__43;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2935, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__43 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__44;
void* __right_value8 = (void*)0;
struct buffer* result_110;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__45;
    if(    self==((void*)0)    ) {
        __result_obj__44 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__44;
    }
    result_110=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2955, "struct buffer*"));
    result_110->size=self->size;
    __dec_obj3=result_110->buf,
    result_110->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2958, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_110->len=self->len;
    memcpy(result_110->buf,self->buf,self->len);
    __result_obj__45 = (struct buffer*)come_increment_ref_count(result_110);
    come_call_finalizer(buffer_finalize, result_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__46;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__46 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__46;
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
struct buffer* __result_obj__47;
void* __right_value12 = (void*)0;
char* old_buf_111;
int old_len_112;
int new_size_113;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__48;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__47 = self;
        return __result_obj__47;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_111=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3006, "char*"));
        memcpy(old_buf_111,self->buf,self->size);
        old_len_112=self->len;
        new_size_113=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_113)), "/usr/local/include/comelang.h", 3010, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_111,old_len_112);
        self->buf[old_len_112]=0;
        self->size=new_size_113;
        (old_buf_111 = come_decrement_ref_count(old_buf_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__48 = self;
    return __result_obj__48;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__49;
void* __right_value14 = (void*)0;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__50;
    if(    self==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_114=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3029, "char*"));
        old_len_115=self->len;
        new_size_116=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_116)), "/usr/local/include/comelang.h", 3033, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        (old_buf_114 = come_decrement_ref_count(old_buf_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__51;
int size_117;
void* __right_value16 = (void*)0;
char* old_buf_118;
int old_len_119;
int new_size_120;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__52;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__51 = self;
        return __result_obj__51;
    }
    size_117=strlen(mem);
    if(    self->len+size_117+1+1>=self->size    ) {
        old_buf_118=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3055, "char*"));
        memcpy(old_buf_118,self->buf,self->size);
        old_len_119=self->len;
        new_size_120=(self->size+size_117+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_120)), "/usr/local/include/comelang.h", 3059, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_118,old_len_119);
        self->buf[old_len_119]=0;
        self->size=new_size_120;
        (old_buf_118 = come_decrement_ref_count(old_buf_118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_117);
    self->len+=size_117;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__53;
va_list args_121;
char* result_122;
int len_123;
struct buffer* __result_obj__54;
void* __right_value18 = (void*)0;
char* mem_124;
int size_125;
void* __right_value19 = (void*)0;
char* old_buf_126;
int old_len_127;
int new_size_128;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__55;
memset(&args_121, 0, sizeof(va_list));
result_122 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    __builtin_va_start(args_121,msg);
    len_123=vasprintf(&result_122,msg,args_121);
    __builtin_va_end(args_121);
    if(    len_123<0    ) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    mem_124=(char*)come_increment_ref_count(__builtin_string(result_122));
    size_125=strlen(mem_124);
    if(    self->len+size_125+1+1>=self->size    ) {
        old_buf_126=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3092, "char*"));
        memcpy(old_buf_126,self->buf,self->size);
        old_len_127=self->len;
        new_size_128=(self->size+size_125+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_128)), "/usr/local/include/comelang.h", 3096, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_126,old_len_127);
        self->buf[old_len_127]=0;
        self->size=new_size_128;
        (old_buf_126 = come_decrement_ref_count(old_buf_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_124,size_125);
    self->len+=size_125;
    self->buf[self->len]=0;
    free(result_122);
    __result_obj__55 = self;
    (mem_124 = come_decrement_ref_count(mem_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__55;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__56;
int size_129;
void* __right_value21 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    size_129=strlen(mem)+1;
    if(    self->len+size_129+1+1+1>=self->size    ) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3118, "char*"));
        memcpy(old_buf_130,self->buf,self->size);
        old_len_131=self->len;
        new_size_132=(self->size+size_129+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_132)), "/usr/local/include/comelang.h", 3122, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        (old_buf_130 = come_decrement_ref_count(old_buf_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_129);
    self->len+=size_129;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__58;
int* mem_133;
int size_134;
void* __right_value23 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__59;
    if(    self==((void*)0)    ) {
        __result_obj__58 = ((void*)0);
        return __result_obj__58;
    }
    mem_133=&value;
    size_134=sizeof(int);
    if(    self->len+size_134+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3145, "char*"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_137)), "/usr/local/include/comelang.h", 3149, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_133,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    __result_obj__59 = self;
    return __result_obj__59;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_138;
int size_139;
void* __right_value25 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__60;
    mem_138=&value;
    size_139=sizeof(long);
    if(    self->len+size_139+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3168, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3172, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__61;
short* mem_143;
int size_144;
void* __right_value27 = (void*)0;
char* old_buf_145;
int old_len_146;
int new_size_147;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_143=&value;
    size_144=sizeof(short);
    if(    self->len+size_144+1+1>=self->size    ) {
        old_buf_145=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3195, "char*"));
        memcpy(old_buf_145,self->buf,self->size);
        old_len_146=self->len;
        new_size_147=(self->size+size_144+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_147)), "/usr/local/include/comelang.h", 3199, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_145,old_len_146);
        self->buf[old_len_146]=0;
        self->size=new_size_147;
        (old_buf_145 = come_decrement_ref_count(old_buf_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_143,size_144);
    self->len+=size_144;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__63;
int len_148;
int new_size_149;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_150;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    len_148=self->len;
    len_148=(len_148+3)&~3;
    if(    len_148>=self->size    ) {
        new_size_149=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3223, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_149;
    }
    for(    i_150=self->len    ;    i_150<len_148    ;    i_150++    ){
        self->buf[i_150]=0;
    }
    self->len=len_148;
    __result_obj__64 = self;
    return __result_obj__64;
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
struct buffer* result_151;
struct buffer* __result_obj__65;
struct buffer* __result_obj__66;
    result_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__65 = (struct buffer*)come_increment_ref_count(result_151);
        come_call_finalizer(buffer_finalize, result_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__65;
    }
    buffer_append_str(result_151,self);
    __result_obj__66 = (struct buffer*)come_increment_ref_count(result_151);
    come_call_finalizer(buffer_finalize, result_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__67;
void* __right_value33 = (void*)0;
char* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__67 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__67;
    }
    __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__68;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__69;
    __result_obj__69 = self->buf;
    return __result_obj__69;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_152;
struct buffer* __result_obj__70;
    result_152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3280, "struct buffer*"))));
    buffer_append(result_152,self,sizeof(char)*len);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_152);
    come_call_finalizer(buffer_finalize, result_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_153;
int i_154;
struct buffer* __result_obj__71;
    result_153=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3287, "struct buffer*"))));
    for(    i_154=0    ;    i_154<len    ;    i_154++    ){
        buffer_append(result_153,self[i_154],strlen(self[i_154]));
    }
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_153);
    come_call_finalizer(buffer_finalize, result_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_155;
struct buffer* __result_obj__72;
    result_155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3296, "struct buffer*"))));
    buffer_append(result_155,(char*)self,sizeof(short)*len);
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_155);
    come_call_finalizer(buffer_finalize, result_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_156;
struct buffer* __result_obj__73;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3303, "struct buffer*"))));
    buffer_append(result_156,(char*)self,sizeof(int)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_156);
    come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_157;
struct buffer* __result_obj__74;
    result_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3310, "struct buffer*"))));
    buffer_append(result_157,(char*)self,sizeof(long)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_158;
struct buffer* __result_obj__75;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3317, "struct buffer*"))));
    buffer_append(result_158,(char*)self,sizeof(float)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_159;
struct buffer* __result_obj__76;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3324, "struct buffer*"))));
    buffer_append(result_159,(char*)self,sizeof(double)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_159);
    come_call_finalizer(buffer_finalize, result_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

char* buffer_printable(struct buffer* self){
int len_160;
void* __right_value48 = (void*)0;
char* result_161;
int n_162;
int i_163;
unsigned char c_164;
char* __result_obj__77;
    len_160=self->len;
    result_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_160*2+1)), "/usr/local/include/comelang.h", 3332, "char*"));
    n_162=0;
    for(    i_163=0    ;    i_163<len_160    ;    i_163++    ){
        c_164=self->buf[i_163];
        if(        (c_164>=0&&c_164<32)||c_164==127        ) {
            result_161[n_162++]=94;
            result_161[n_162++]=c_164+65-1;
        }
        else if(        c_164>127        ) {
            result_161[n_162++]=63;
        }
        else {
            result_161[n_162++]=c_164;
        }
    }
    result_161[n_162]=0;
    __result_obj__77 = (char*)come_increment_ref_count(result_161);
    (result_161 = come_decrement_ref_count(result_161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__77 = come_decrement_ref_count(__result_obj__77, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__77;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_165;
struct list$1char$* __result_obj__79;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0    ;    i_165<num_value    ;    i_165++    ){
        list$1char$_push_back(self,values[i_165]);
    }
    __result_obj__79 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_166;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_167;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_168;
struct list$1char$* __result_obj__78;
    if(    self->len==0    ) {
        litem_166=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1char$*"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1    ) {
        litem_167=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1char$*"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1char$*"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result_obj__78 = self;
    return __result_obj__78;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_169;
struct list_item$1char$* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)    ) {
        prev_it_170=it_169;
        it_169=it_169->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__80;
    __result_obj__80 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3373, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_171;
struct list$1char$p* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_171=0    ;    i_171<num_value    ;    i_171++    ){
        list$1char$p_push_back(self,values[i_171]);
    }
    __result_obj__82 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_172;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_173;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_174;
struct list$1char$p* __result_obj__81;
    if(    self->len==0    ) {
        litem_172=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1char$p*"))));
        litem_172->prev=((void*)0);
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head=litem_172;
    }
    else if(    self->len==1    ) {
        litem_173=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1char$p*"))));
        litem_173->prev=self->head;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head->next=litem_173;
    }
    else {
        litem_174=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1char$p*"))));
        litem_174->prev=self->tail;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail->next=litem_174;
        self->tail=litem_174;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_175;
struct list_item$1char$p* prev_it_176;
    it_175=self->head;
    while(    it_175!=((void*)0)    ) {
        prev_it_176=it_175;
        it_175=it_175->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__83;
    __result_obj__83 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3378, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_177;
struct list$1short$* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0    ;    i_177<num_value    ;    i_177++    ){
        list$1short$_push_back(self,values[i_177]);
    }
    __result_obj__85 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_178;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_179;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_180;
struct list$1short$* __result_obj__84;
    if(    self->len==0    ) {
        litem_178=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1short$*"))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1    ) {
        litem_179=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1short$*"))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1short$*"))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_181;
struct list_item$1short$* prev_it_182;
    it_181=self->head;
    while(    it_181!=((void*)0)    ) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__86;
    __result_obj__86 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3383, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_183;
struct list$1int$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0    ;    i_183<num_value    ;    i_183++    ){
        list$1int$_push_back(self,values[i_183]);
    }
    __result_obj__88 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_184;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_185;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_186;
struct list$1int$* __result_obj__87;
    if(    self->len==0    ) {
        litem_184=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1int$*"))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1    ) {
        litem_185=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1int$*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1int$*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_187;
struct list_item$1int$* prev_it_188;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__89;
    __result_obj__89 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3388, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_189;
struct list$1long$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0    ;    i_189<num_value    ;    i_189++    ){
        list$1long$_push_back(self,values[i_189]);
    }
    __result_obj__91 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_190;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_191;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_192;
struct list$1long$* __result_obj__90;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1long$*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1long$*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1long$*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_193;
struct list_item$1long$* prev_it_194;
    it_193=self->head;
    while(    it_193!=((void*)0)    ) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__92;
    __result_obj__92 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3393, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_195;
struct list$1float$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0    ;    i_195<num_value    ;    i_195++    ){
        list$1float$_push_back(self,values[i_195]);
    }
    __result_obj__94 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_196;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_197;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_198;
struct list$1float$* __result_obj__93;
    if(    self->len==0    ) {
        litem_196=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1float$*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1    ) {
        litem_197=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1float$*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1float$*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_199;
struct list_item$1float$* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__95;
    __result_obj__95 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3398, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_201;
struct list$1double$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0    ;    i_201<num_value    ;    i_201++    ){
        list$1double$_push_back(self,values[i_201]);
    }
    __result_obj__97 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_202;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_203;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_204;
struct list$1double$* __result_obj__96;
    if(    self->len==0    ) {
        litem_202=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1double$*"))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1    ) {
        litem_203=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1double$*"))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1double$*"))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_205;
struct list_item$1double$* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__98;
    __result_obj__98 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3403, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
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
char* __result_obj__99;
int len_207;
void* __right_value85 = (void*)0;
char* result_208;
char* __result_obj__100;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__99 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__99;
    }
    len_207=strlen(self)+strlen(right);
    result_208=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_207+1)), "/usr/local/include/comelang.h", 3632, "char*"));
    strncpy(result_208,self,len_207+1);
    strncat(result_208,right,len_207+1);
    __result_obj__100 = (char*)come_increment_ref_count(result_208);
    (result_208 = come_decrement_ref_count(result_208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__100;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__101;
int len_209;
void* __right_value87 = (void*)0;
char* result_210;
char* __result_obj__102;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__101;
    }
    len_209=strlen(self)+strlen(right);
    result_210=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_209+1)), "/usr/local/include/comelang.h", 3647, "char*"));
    strncpy(result_210,self,len_209+1);
    strncat(result_210,right,len_209+1);
    __result_obj__102 = (char*)come_increment_ref_count(result_210);
    (result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__102;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__103;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_211;
int i_212;
void* __right_value91 = (void*)0;
char* __result_obj__104;
    if(    self==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    buf_211=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3660, "struct buffer*"))));
    for(    i_212=0    ;    i_212<right    ;    i_212++    ){
        buffer_append_str(buf_211,self);
    }
    __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_211))));
    come_call_finalizer(buffer_finalize, buf_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__105;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_213;
int i_214;
void* __right_value95 = (void*)0;
char* __result_obj__106;
    if(    self==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    buf_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3674, "struct buffer*"))));
    for(    i_214=0    ;    i_214<right    ;    i_214++    ){
        buffer_append_str(buf_213,self);
    }
    __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_213))));
    come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_215;
int i_216;
    result_215=(_Bool)0;
    for(    i_216=0    ;    i_216<len    ;    i_216++    ){
        if(        strncmp(self[i_216],str,strlen(self[i_216]))==0        ) {
            result_215=(_Bool)1;
            break;
        }
    }
    return result_215;
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
int result_217;
char* p_218;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_217=0;
    p_218=value;
    while(    *p_218    ) {
        result_217+=(*p_218);
        p_218++;
    }
    return result_217;
}

unsigned int string_get_hash_key(char* value){
int result_219;
char* p_220;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_219=0;
    p_220=value;
    while(    *p_220    ) {
        result_219+=(*p_220);
        p_220++;
    }
    return result_219;
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
_Bool result_221;
    result_221=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_221;
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
_Bool result_222;
    result_222=(c>=32&&c<=126);
    return result_222;
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
char* __result_obj__107;
int len_223;
void* __right_value97 = (void*)0;
char* result_224;
int i_225;
char* __result_obj__108;
    if(    str==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    len_223=strlen(str);
    result_224=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_223+1)), "/usr/local/include/comelang.h", 3942, "char*"));
    for(    i_225=0    ;    i_225<len_223    ;    i_225++    ){
        result_224[i_225]=str[len_223-i_225-1];
    }
    result_224[len_223]=0;
    __result_obj__108 = (char*)come_increment_ref_count(result_224);
    (result_224 = come_decrement_ref_count(result_224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__109;
int len_226;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__110;
void* __right_value101 = (void*)0;
char* __result_obj__111;
void* __right_value102 = (void*)0;
char* __result_obj__112;
void* __right_value103 = (void*)0;
char* result_227;
char* __result_obj__113;
    if(    str==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    len_226=strlen(str);
    if(    head<0    ) {
        head+=len_226;
    }
    if(    tail<0    ) {
        tail+=len_226+1;
    }
    if(    head>tail    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_226    ) {
        tail=len_226;
    }
    if(    head==tail    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    if(    tail-head+1<1    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    result_227=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_227,str+head,tail-head);
    result_227[tail-head]=0;
    __result_obj__113 = (char*)come_increment_ref_count(result_227);
    (result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__114;
int len_228;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__115;
void* __right_value107 = (void*)0;
char* __result_obj__116;
void* __right_value108 = (void*)0;
char* __result_obj__117;
void* __right_value109 = (void*)0;
char* result_229;
char* __result_obj__118;
    if(    str==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_228=strlen(str);
    if(    head<0    ) {
        head+=len_228;
    }
    if(    tail<0    ) {
        tail+=len_228+1;
    }
    if(    head>tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_228    ) {
        tail=len_228;
    }
    if(    head==tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    tail-head+1<1    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    result_229=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_229,str+head,tail-head);
    result_229[tail-head]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_229);
    (result_229 = come_decrement_ref_count(result_229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__119;
int len_230;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__120;
void* __right_value113 = (void*)0;
char* __result_obj__121;
void* __right_value114 = (void*)0;
char* __result_obj__122;
void* __right_value115 = (void*)0;
char* result_231;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    len_230=strlen(str);
    if(    head<0    ) {
        head+=len_230;
    }
    if(    tail<0    ) {
        tail+=len_230+1;
    }
    if(    head>tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_230    ) {
        tail=len_230;
    }
    if(    head==tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    tail-head+1<1    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    result_231=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4074, "char*"));
    memcpy(result_231,str+head,tail-head);
    result_231[tail-head]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_231);
    (result_231 = come_decrement_ref_count(result_231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__124;
va_list args_232;
char* result_233;
int len_234;
void* __right_value117 = (void*)0;
char* __result_obj__125;
void* __right_value118 = (void*)0;
char* result2_235;
char* __result_obj__126;
memset(&args_232, 0, sizeof(va_list));
result_233 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    __builtin_va_start(args_232,msg);
    len_234=vasprintf(&result_233,msg,args_232);
    __builtin_va_end(args_232);
    if(    len_234<0    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result2_235=(char*)come_increment_ref_count(__builtin_string(result_233));
    free(result_233);
    __result_obj__126 = (char*)come_increment_ref_count(result2_235);
    (result2_235 = come_decrement_ref_count(result2_235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__127;
int len_236;
void* __right_value120 = (void*)0;
char* __result_obj__128;
void* __right_value121 = (void*)0;
char* __result_obj__129;
void* __right_value122 = (void*)0;
char* result_237;
char* __result_obj__130;
    if(    str==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    len_236=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    head<0    ) {
        head+=len_236;
    }
    if(    tail<0    ) {
        tail+=len_236+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    tail>=len_236    ) {
        tail=len_236;
    }
    result_237=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_236-(tail-head)+1)), "/usr/local/include/comelang.h", 4136, "char*"));
    memcpy(result_237,str,head);
    memcpy(result_237+head,str+tail,len_236-tail);
    result_237[len_236-(tail-head)]=0;
    __result_obj__130 = (char*)come_increment_ref_count(result_237);
    (result_237 = come_decrement_ref_count(result_237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__131;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__131 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_238;
struct list_item$1char$ph* prev_it_239;
    it_238=self->head;
    while(    it_238!=((void*)0)    ) {
        prev_it_239=it_238;
        it_238=it_238->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_243;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_244;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_245;
char* __dec_obj15;
struct list$1char$ph* __result_obj__133;
    if(    self->len==0    ) {
        litem_243=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1154, "struct list_item$1char$ph*"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        __dec_obj13=litem_243->item,
        litem_243->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1    ) {
        litem_244=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1164, "struct list_item$1char$ph*"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        __dec_obj14=litem_244->item,
        litem_244->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1174, "struct list_item$1char$ph*"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        __dec_obj15=litem_245->item,
        litem_245->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result_obj__133 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__133;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__132;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_240;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_241;
int i_242;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__134;
    if(    self==((void*)0)    ) {
        __result_obj__132 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4149, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__132;
    }
    result_240=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4152, "struct list$1char$ph*"))));
    str_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4154, "struct buffer*"))));
    for(    i_242=0    ;    i_242<charp_length(self)    ;    i_242++    ){
        if(        self[i_242]==c        ) {
            list$1char$ph_push_back(result_240,(char*)come_increment_ref_count(__builtin_string(str_241->buf)));
            buffer_reset(str_241);
        }
        else {
            buffer_append_char(str_241,self[i_242]);
        }
    }
    if(    buffer_length(str_241)!=0    ) {
        list$1char$ph_push_back(result_240,(char*)come_increment_ref_count(__builtin_string(str_241->buf)));
    }
    __result_obj__134 = (struct list$1char$ph*)come_increment_ref_count(result_240);
    come_call_finalizer(list$1char$ph$p_finalize, result_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__135;
    __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__136;
    __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* charp_printable(char* str){
int len_246;
void* __right_value136 = (void*)0;
char* result_247;
int n_248;
int i_249;
char c_250;
char* __result_obj__137;
    len_246=charp_length(str);
    result_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_246*2+1)), "/usr/local/include/comelang.h", 4186, "char*"));
    n_248=0;
    for(    i_249=0    ;    i_249<len_246    ;    i_249++    ){
        c_250=str[i_249];
        if(        (c_250>=0&&c_250<32)||c_250==127        ) {
            result_247[n_248++]=94;
            result_247[n_248++]=c_250+65-1;
        }
        else {
            result_247[n_248++]=c_250;
        }
    }
    result_247[n_248]=0;
    __result_obj__137 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__138;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_251;
char* p_252;
char* p2_253;
void* __right_value140 = (void*)0;
char* __result_obj__139;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    result_251=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4214, "struct buffer*"))));
    p_252=self;
    while(    (_Bool)1    ) {
        p2_253=strstr(p_252,str);
        if(        p2_253==((void*)0)        ) {
            p2_253=p_252;
            while(            *p2_253            ) {
                p2_253++;
            }
            buffer_append(result_251,p_252,p2_253-p_252);
            break;
        }
        buffer_append(result_251,p_252,p2_253-p_252);
        buffer_append_str(result_251,replace);
        p_252=p2_253+strlen(str);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_251))));
    come_call_finalizer(buffer_finalize, result_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__140;
char* p_254;
void* __right_value142 = (void*)0;
char* __result_obj__141;
void* __right_value143 = (void*)0;
char* __result_obj__142;
void* __right_value144 = (void*)0;
char* __result_obj__143;
    if(    path==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    p_254=path+strlen(path);
    while(    p_254>=path    ) {
        if(        *p_254==47        ) {
            break;
        }
        else {
            p_254--;
        }
    }
    if(    p_254<path    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    else {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_254+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__144;
void* __right_value146 = (void*)0;
char* path2_255;
char* p_256;
void* __right_value147 = (void*)0;
char* __result_obj__145;
void* __right_value148 = (void*)0;
char* __result_obj__146;
void* __right_value149 = (void*)0;
char* __result_obj__147;
    if(    path==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    path2_255=(char*)come_increment_ref_count(xbasename(path));
    p_256=path2_255+strlen(path2_255);
    while(    p_256>=path2_255    ) {
        if(        *p_256==46        ) {
            break;
        }
        else {
            p_256--;
        }
    }
    if(    p_256<path2_255    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_255))));
        (path2_255 = come_decrement_ref_count(path2_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    else {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_255,0,p_256-path2_255))));
        (path2_255 = come_decrement_ref_count(path2_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_255 = come_decrement_ref_count(path2_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__148;
char* p_257;
void* __right_value151 = (void*)0;
char* __result_obj__149;
void* __right_value152 = (void*)0;
char* __result_obj__150;
void* __right_value153 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    p_257=path+strlen(path);
    while(    p_257>=path    ) {
        if(        *p_257==46        ) {
            break;
        }
        else {
            p_257--;
        }
    }
    if(    p_257<path    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_257+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__152;
void* __right_value155 = (void*)0;
char* __result_obj__153;
    if(    self    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    else {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__154;
void* __right_value157 = (void*)0;
char* __result_obj__155;
    if(    self    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__156;
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__157;
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__163;
void* __right_value166 = (void*)0;
char* __result_obj__164;
    if(    self==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__165;
void* __right_value168 = (void*)0;
char* __result_obj__166;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
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
int i_258;
    for(    i_258=0    ;    i_258<self    ;    i_258++    ){
        block(parent,i_258);
    }
}

