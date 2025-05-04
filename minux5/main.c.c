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
int gActiveProc=0;
int gNumProc=0;
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
void swtch(struct context* anonymous_var_nameX76, struct context* anonymous_var_nameX77);
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
void* memmove(void* dst, const void* src, uint n);
void* memcpy(void* dst, const void* src, uint n);
int strncmp(const char* p, const char* q, uint n);
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
static inline void intr_on(){
unsigned long  int x_28;
memset(&x_28, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_28));
    x_28|=(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_28));
}
static inline void intr_off(){
unsigned long  int x_29;
memset(&x_29, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_29));
    x_29&=~(1<<7);
    __asm volatile("csrw mie, %0" : : "r"(x_29));
}
static inline unsigned long  int r_sepc(){
unsigned long  int x_33;
memset(&x_33, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sepc" : "=r" (x_33));
    return x_33;
}
static inline void w_sepc(unsigned long  int x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}
static inline unsigned long  int r_mepc(){
unsigned long  int x_34;
memset(&x_34, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mepc" : "=r" (x_34));
    return x_34;
}
static inline unsigned long  int r_mstatus(){
unsigned long  int x_35;
memset(&x_35, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mstatus" : "=r" (x_35));
    return x_35;
}
static inline unsigned long  int r_sstatus(){
unsigned long  int x_36;
memset(&x_36, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, sstatus" : "=r" (x_36));
    return x_36;
}
static inline void w_sstatus(unsigned long  int x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void w_mstatus(unsigned long  int x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  int r_mie(){
unsigned long  int x_37;
memset(&x_37, 0, sizeof(unsigned long  int));
    __asm volatile("csrr %0, mie" : "=r"(x_37));
    return x_37;
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
    intr_off();
    while(    *s    ) {
        putchar(*s++);
    }
    intr_on();
}

void kfree(void* pa){
struct run* r_30;
r_30 = (void*)0;
    if(    ((unsigned long  int)pa%4096)!=0||(char*)pa<_end||(unsigned long  int)pa>=(_end+4096*256)    ) {
        puts("panic");
    }
    r_30=(struct run*)pa;
    r_30->next=kmem.freelist;
    kmem.freelist=r_30;
}

void freerange(void* pa_start, void* pa_end){
char* p_31;
p_31 = (void*)0;
    p_31=(char*)((((unsigned long  int)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_31+4096<=(_end+4096*256)    ;    p_31+=4096    ){
        kfree(p_31);
    }
}

void kinit(){
    freerange(_end,(_end+4096*256));
}

void* kalloc(){
struct run* r_32;
void* __result_obj__12;
r_32 = (void*)0;
    r_32=kmem.freelist;
    if(    r_32    ) {
        kmem.freelist=r_32->next;
    }
    __result_obj__12 = (void*)r_32;
    return __result_obj__12;
}

void disable_timer_interrupt(){
}

void enable_timer_interrupts(){
unsigned long  int now_38;
    w_mtvec((unsigned long  int)timervec&~3);
    now_38=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_38+-1;
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
struct proc* result_45;
struct proc* __result_obj__17;
    result_45=kalloc();
    memset(result_45,0,sizeof(struct proc));
    result_45->stack=kalloc();
    result_45->context.sp=(unsigned long  int)(result_45->stack+4096);
    result_45->context.mepc=(unsigned long  int)task;
    result_45->state=(3);
    gProc[gNumProc++]=result_45;
    __result_obj__17 = result_45;
    return __result_obj__17;
}

void timer_reset(){
unsigned long  int now_46;
    now_46=*(unsigned long  int*)33603576;
    *(unsigned long  int*)33570816=now_46+10000000;
}

void timer_handler(){
struct proc* p_47;
struct context* tf_48;
    disable_timer_interrupts();
    printf("TIMER\n");
    p_47=gProc[gActiveProc];
    tf_48=(struct context*)TRAPFRAME;
    p_47->context=*tf_48;
    printf("TRAPFRAME %p\n",TRAPFRAME);
    printf("ative proc saved %d\n",gActiveProc);
    printf("ra %x\n",tf_48->ra);
    printf("ra %x\n",p_47->context.ra);
    printf("sp %x\n",tf_48->sp);
    printf("sp %x\n",p_47->context.sp);
    printf("gp %x\n",p_47->context.gp);
    printf("mepc %x\n",tf_48->mepc);
    printf("mepc %x\n",p_47->context.mepc);
    yield();
}

void yield(){
struct proc* p_49;
    p_49=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    p_49=gProc[gActiveProc];
    p_49->state=(3);
    scheduler();
}

void scheduler(){
int i_50;
struct proc* p_51;
    printf("SCHEDULER\n");
    while(    1    ) {
        for(        i_50=0        ;        i_50<gNumProc        ;        i_50++        ){
            p_51=gProc[i_50];
            if(            p_51->state==(3)            ) {
                gActiveProc=i_50;
                p_51->state=(4);
                printf("SWITCH TO %d\n",i_50);
                disable_timer_interrupts();
                swtch(&gCPU.context,&p_51->context);
                disable_timer_interrupts();
                p_51->state=(3);
            }
        }
    }
}

void mask_and_clear_timer_interrupt(){
unsigned long  int now_52;
    now_52=*(unsigned long  int*)33603576;
    w_mie(r_mie()&~(1<<7));
    w_mstatus(r_mstatus()&~(1<<3));
}

int main(){
void* __right_value0 = (void*)0;
    come_heap_init(0, 0, 0);
    puts("HELLO WORLD");
    kinit();
    ((char*)(__right_value0=(char*)come_calloc_v2(1, sizeof(char)*(1*(123)), "main.c", 687, "char*")));
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
void* __result_obj__18;
void* prev_53;
void* __result_obj__19;
    if(    heap_end==0    ) {
        heap_end=&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__18 = (void*)-1;
        return __result_obj__18;
    }
    prev_53=heap_end;
    heap_end+=incr;
    __result_obj__19 = prev_53;
    return __result_obj__19;
}

struct sBlock* find_free_block(unsigned long  int size){
struct sBlock* curr_54;
struct sBlock* __result_obj__20;
struct sBlock* __result_obj__21;
    curr_54=free_list;
    while(    curr_54    ) {
        if(        curr_54->free&&curr_54->size>=size        ) {
            __result_obj__20 = curr_54;
            return __result_obj__20;
        }
        curr_54=curr_54->next;
    }
    __result_obj__21 = ((void*)0);
    return __result_obj__21;
}

struct sBlock* request_space(unsigned long  int size){
void* mem_55;
struct sBlock* __result_obj__22;
struct sBlock* b_56;
struct sBlock* __result_obj__23;
    mem_55=_sbrk(size+sizeof(struct sBlock));
    if(    mem_55==(void*)-1    ) {
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    b_56=(struct sBlock*)mem_55;
    b_56->size=size;
    b_56->next=((void*)0);
    b_56->free=0;
    __result_obj__23 = b_56;
    return __result_obj__23;
}

void* malloc(unsigned long  int size){
struct sBlock* block_57;
void* __result_obj__24;
void* __result_obj__25;
struct sBlock* curr_58;
void* __result_obj__26;
block_57 = (void*)0;
    size=(((size)+7)&~7);
    if(    (block_57=find_free_block(size))    ) {
        block_57->free=0;
        __result_obj__24 = (void*)(block_57+1);
        return __result_obj__24;
    }
    block_57=request_space(size);
    if(    !block_57    ) {
        __result_obj__25 = ((void*)0);
        return __result_obj__25;
    }
    if(    !free_list    ) {
        free_list=block_57;
    }
    else {
        curr_58=free_list;
        while(        curr_58->next        ) {
            curr_58=curr_58->next;
        }
        curr_58->next=block_57;
    }
    __result_obj__26 = (void*)(block_57+1);
    return __result_obj__26;
}

void free(void* ptr){
struct sBlock* block_59;
    if(    !ptr    ) {
        return;
    }
    block_59=((struct sBlock*)ptr)-1;
    block_59->free=1;
}

void* calloc(unsigned long  int n, unsigned long  int size){
unsigned long  int total_60;
void* ptr_61;
void* __result_obj__27;
    total_60=n*size;
    ptr_61=malloc(total_60);
    if(    ptr_61    ) {
        memset(ptr_61,0,total_60);
    }
    __result_obj__27 = ptr_61;
    return __result_obj__27;
}

char* strdup(const char* s){
unsigned long  int len_62;
char* p_63;
char* __result_obj__28;
    len_62=strlen(s)+1;
    p_63=malloc(len_62);
    if(    p_63    ) {
        memcpy(p_63,s,len_62);
    }
    __result_obj__28 = p_63;
    return __result_obj__28;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__29;
char* __result_obj__30;
char* __result_obj__31;
    if(    !*needle    ) {
        __result_obj__29 = (char*)haystack;
        return __result_obj__29;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_64=haystack;
        const char* n_65=needle;
        while(        *h_64&&*n_65&&(*h_64==*n_65)        ) {
            h_64++;
            n_65++;
        }
        if(        !*n_65        ) {
            __result_obj__30 = (char*)haystack;
            return __result_obj__30;
        }
    }
    __result_obj__31 = ((void*)0);
    return __result_obj__31;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_66;
int i_67;
void* __result_obj__32;
    cdst_66=(char*)dst;
    for(    i_67=0    ;    i_67<n    ;    i_67++    ){
        cdst_66[i_67]=c;
    }
    __result_obj__32 = dst;
    return __result_obj__32;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_68;
const unsigned char* s2_69;
memset(&s1_68, 0, sizeof(const unsigned char*));
memset(&s2_69, 0, sizeof(const unsigned char*));
    s1_68=v1;
    s2_69=v2;
    while(    n-->0    ) {
        if(        *s1_68!=*s2_69        ) {
            return *s1_68-*s2_69;
        }
        s1_68++,s2_69++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, uint n){
const char* s_70;
char* d_71;
void* __result_obj__33;
void* __result_obj__34;
s_70 = (void*)0;
d_71 = (void*)0;
    if(    n==0    ) {
        __result_obj__33 = dst;
        return __result_obj__33;
    }
    s_70=src;
    d_71=dst;
    if(    s_70<d_71&&s_70+n>d_71    ) {
        s_70+=n;
        d_71+=n;
        while(        n-->0        ) {
            *--d_71=*--s_70;
        }
    }
    else {
        while(        n-->0        ) {
            *d_71++=*s_70++;
        }
    }
    __result_obj__34 = dst;
    return __result_obj__34;
}

void* memcpy(void* dst, const void* src, uint n){
void* __result_obj__35;
    __result_obj__35 = memmove(dst,src,n);
    return __result_obj__35;
}

int strncmp(const char* p, const char* q, uint n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_72;
char* __result_obj__36;
os_72 = (void*)0;
    os_72=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__36 = os_72;
    return __result_obj__36;
}

char* safestrcpy(char* s, const char* t, int n){
char* os_73;
char* __result_obj__37;
char* __result_obj__38;
os_73 = (void*)0;
    os_73=s;
    if(    n<=0    ) {
        __result_obj__37 = os_73;
        return __result_obj__37;
    }
    while(    --n>0&&(*s++=*t++)!=0    ) {
        ;
    }
    *s=0;
    __result_obj__38 = os_73;
    return __result_obj__38;
}

int strlen(const char* s){
int n_74;
memset(&n_74, 0, sizeof(int));
    for(    n_74=0    ;    s[n_74]    ;    n_74++    ){
        ;
    }
    return n_74;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_75;
char* __result_obj__39;
    d_75=dest;
    while(    *d_75    ) {
        d_75++;
    }
    while(    n--&&*src    ) {
        *d_75++=*src++;
    }
    *d_75=0;
    __result_obj__39 = dest;
    return __result_obj__39;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, long val_, int base, int is_unsigned){
char* p_76;
char* __result_obj__40;
int digit_80;
char* __result_obj__41;
    p_76=buf;
    char tmp_77[32];
    memset(&tmp_77, 0, sizeof(char)    *(32)    );
    int i_78=0;
    int negative_79=0;
    if(    base<2||base>16    ) {
        *p_76=0;
        __result_obj__40 = p_76;
        return __result_obj__40;
    }
    if(    !is_unsigned&&val_<0    ) {
        negative_79=1;
        val_=-val_;
    }
    do {
        digit_80=val_%base;
        tmp_77[i_78++]=(((digit_80<10))?(48+digit_80):(97+digit_80-10));
        val_/=base;
    } while(    val_    );
    if(    negative_79    ) {
        *p_76++=45;
    }
    while(    i_78--    ) {
        *p_76++=tmp_77[i_78];
    }
    *p_76=0;
    __result_obj__41 = buf;
    return __result_obj__41;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_81;
char* p_82;
const char* s_83;
unsigned long  int remaining_85;
int __result_obj__42;
int __result_obj__43;
memset(&ap_81, 0, sizeof(va_list));
s_83 = (void*)0;
    __builtin_va_start(ap_81,fmt);
    p_82=out;
    char buf_84[32];
    memset(&buf_84, 0, sizeof(char)    *(32)    );
    remaining_85=out_size;
    if(    remaining_85==0    ) {
        __builtin_va_end(ap_81);
        __result_obj__42 = 0;
        come_call_finalizer(va_list_finalize, (&ap_81), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__42;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_85>1            ) {
                *p_82++=*fmt;
                remaining_85--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_83=__builtin_va_arg(ap_81,const char*);
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 100:
            itoa(buf_84,__builtin_va_arg(ap_81,int),10,0);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 120:
            itoa(buf_84,(unsigned int)__builtin_va_arg(ap_81,int),16,1);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 99:
            if(            remaining_85>1            ) {
                *p_82++=(char)__builtin_va_arg(ap_81,int);
                remaining_85--;
            }
            break;
            case 112:
            s_83="0x";
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            itoa(buf_84,(long)__builtin_va_arg(ap_81,void*),16,1);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_84,__builtin_va_arg(ap_81,long),10,1);
                s_83=buf_84;
                while(                *s_83&&remaining_85>1                ) {
                    *p_82++=*s_83++;
                    remaining_85--;
                }
            }
            break;
            default:
            if(            remaining_85>1            ) {
                *p_82++=37;
                remaining_85--;
                if(                remaining_85>1                ) {
                    *p_82++=*fmt;
                    remaining_85--;
                }
            }
            break;
        }
    }
    *p_82=0;
    __builtin_va_end(ap_81);
    __result_obj__43 = p_82-out;
    come_call_finalizer(va_list_finalize, (&ap_81), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__43;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_86;
char* p_87;
const char* s_88;
unsigned long  int remaining_90;
int __result_obj__44;
int __result_obj__45;
memset(&ap_86, 0, sizeof(va_list));
s_88 = (void*)0;
    __builtin_va_start(ap_86,fmt);
    p_87=out;
    char buf_89[32];
    memset(&buf_89, 0, sizeof(char)    *(32)    );
    remaining_90=out_size;
    if(    remaining_90==0    ) {
        __builtin_va_end(ap_86);
        __result_obj__44 = 0;
        come_call_finalizer(va_list_finalize, (&ap_86), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__44;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_90>1            ) {
                *p_87++=*fmt;
                remaining_90--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_88=__builtin_va_arg(ap_86,const char*);
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 100:
            itoa(buf_89,__builtin_va_arg(ap_86,int),10,0);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 120:
            itoa(buf_89,(unsigned int)__builtin_va_arg(ap_86,int),16,1);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 99:
            if(            remaining_90>1            ) {
                *p_87++=(char)__builtin_va_arg(ap_86,int);
                remaining_90--;
            }
            break;
            case 112:
            s_88="0x";
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            itoa(buf_89,(long)__builtin_va_arg(ap_86,void*),16,1);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_89,__builtin_va_arg(ap_86,long),10,1);
                s_88=buf_89;
                while(                *s_88&&remaining_90>1                ) {
                    *p_87++=*s_88++;
                    remaining_90--;
                }
            }
            break;
            default:
            if(            remaining_90>1            ) {
                *p_87++=37;
                remaining_90--;
                if(                remaining_90>1                ) {
                    *p_87++=*fmt;
                    remaining_90--;
                }
            }
            break;
        }
    }
    *p_87=0;
    __builtin_va_end(ap_86);
    __result_obj__45 = p_87-out;
    come_call_finalizer(va_list_finalize, (&ap_86), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__45;
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
struct buffer* buf_91;
int i_92;
void* __right_value3 = (void*)0;
    buf_91=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 709, "struct buffer*"))));
    buffer_append_format(buf_91,"%s %d\n",sname,sline);
    for(    i_92=gNumComeStackFrame-2    ;    i_92>=0    ;    i_92--    ){
        buffer_append_format(buf_91,"%s %d #%d\n",gComeStackFrameSName[i_92],gComeStackFrameSLine[i_92],gComeStackFrameID[i_92]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_91))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_93;
    for(    i_93=gNumComeStackFrame-1    ;    i_93>=0    ;    i_93--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_93],gComeStackFrameSLine[i_93],gComeStackFrameID[i_93]);
    }
}

char* come_get_stackframe(){
void* __right_value4 = (void*)0;
char* __result_obj__46;
    __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(gComeStackFrameBuffer))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__46;
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
int i_94;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_94=0    ;    i_94<gHeapPages.mSizePages    ;    i_94++    ){
        gHeapPages.mPages[i_94]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_95;
int n_96;
_Bool flag_97;
int i_98;
struct sMemHeaderTiny* it_99;
int n_100;
int i_101;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_95=gAllocMem;
        n_96=0;
        while(        it_95        ) {
            n_96++;
            flag_97=(_Bool)0;
            printf("#%d ",n_96);
            if(            it_95->class_name            ) {
                printf("%p (%s): ",(char*)it_95+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_95->class_name);
            }
            for(            i_98=0            ;            i_98<16            ;            i_98++            ){
                if(                it_95->sname[i_98]                ) {
                    printf("%s %d #%d, ",it_95->sname[i_98],it_95->sline[i_98],it_95->id[i_98]);
                    flag_97=(_Bool)1;
                }
            }
            if(            flag_97            ) {
                puts("");
            }
            it_95=it_95->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_96,gNumAlloc,gNumFree);
    }
    else {
        it_99=(struct sMemHeaderTiny*)gAllocMem;
        n_100=0;
        while(        it_99        ) {
            n_100++;
            if(            it_99->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_100,(char*)it_99+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_99->class_name,it_99->sname,it_99->sline);
            }
            it_99=it_99->next;
        }
        if(        n_100>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_100,gNumAlloc,gNumFree);
        }
    }
    for(    i_101=0    ;    i_101<gHeapPages.mSizePages    ;    i_101++    ){
        free(gHeapPages.mPages[i_101]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_102;
unsigned long  int free_area_103;
int new_size_pages_104;
char** new_pages_105;
int i_106;
void* __result_obj__47;
    result_102=((void*)0);
    size=(size+7&~7);
    if(    size<4096    ) {
        if(        gHeapPages.mFreeMem[size]        ) {
            result_102=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_102,0,size);
        }
        if(        result_102==((void*)0)        ) {
            free_area_103=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_103            ) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages                ) {
                    new_size_pages_104=gHeapPages.mSizePages*2;
                    new_pages_105=calloc(1,sizeof(char*)*new_size_pages_104);
                    i_106=0;
                    for(                    ;                    i_106<gHeapPages.mSizePages                    ;                    i_106++                    ){
                        new_pages_105[i_106]=gHeapPages.mPages[i_106];
                    }
                    for(                    ;                    i_106<new_size_pages_104                    ;                    i_106++                    ){
                        new_pages_105[i_106]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_105;
                    gHeapPages.mSizePages=new_size_pages_104;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_102=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_102=calloc(1,size);
    }
    __result_obj__47 = result_102;
    return __result_obj__47;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_107;
struct sMemHeader* it_108;
int i_109;
int i_110;
void* __result_obj__48;
void* result_111;
struct sMemHeaderTiny* it_112;
void* __result_obj__49;
memset(&i_109, 0, sizeof(int));
memset(&i_110, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_107=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_108=result_107;
        it_108->allocated=177783;
        it_108->size=size+sizeof(struct sMemHeader);
        it_108->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_109=0            ;            i_109<gNumComeStackFrame            ;            i_109++            ){
                it_108->sname[i_109]=gComeStackFrameSName[i_109];
                it_108->sline[i_109]=gComeStackFrameSLine[i_109];
                it_108->id[i_109]=gComeStackFrameID[i_109];
            }
        }
        else {
            for(            i_110=0            ;            i_110<16            ;            i_110++            ){
                it_108->sname[i_110]=gComeStackFrameSName[gNumComeStackFrame-1-i_110];
                it_108->sline[i_110]=gComeStackFrameSLine[gNumComeStackFrame-1-i_110];
                it_108->id[i_110]=gComeStackFrameID[gNumComeStackFrame-1-i_110];
            }
        }
        come_pop_stackframe_v2();
        it_108->next=gAllocMem;
        it_108->prev=((void*)0);
        it_108->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_108;
        }
        gAllocMem=it_108;
        gNumAlloc++;
        __result_obj__48 = (char*)result_107+sizeof(struct sMemHeader);
        return __result_obj__48;
    }
    else {
        result_111=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_112=result_111;
        it_112->allocated=177783;
        it_112->class_name=class_name;
        it_112->sname=sname;
        it_112->sline=sline;
        it_112->size=size+sizeof(struct sMemHeaderTiny);
        it_112->free_next=((void*)0);
        it_112->next=(struct sMemHeaderTiny*)gAllocMem;
        it_112->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_112;
        }
        gAllocMem=(struct sMemHeader*)it_112;
        gNumAlloc++;
        __result_obj__49 = (char*)result_111+sizeof(struct sMemHeaderTiny);
        return __result_obj__49;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_113;
struct sMemHeader* prev_it_114;
struct sMemHeader* next_it_115;
unsigned long  int size_116;
struct sMemHeaderTiny* it_117;
struct sMemHeaderTiny* prev_it_118;
struct sMemHeaderTiny* next_it_119;
unsigned long  int size_120;
    if(    mem    ) {
        if(        gComeGCLib        ) {
        }
        else if(        gComeDebugLib        ) {
            it_113=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_113->allocated!=177783            ) {
                return;
            }
            it_113->allocated=0;
            prev_it_114=it_113->prev;
            next_it_115=it_113->next;
            if(            gAllocMem==it_113            ) {
                gAllocMem=next_it_115;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_114                ) {
                    prev_it_114->next=next_it_115;
                }
                if(                next_it_115                ) {
                    next_it_115->prev=prev_it_114;
                }
            }
            size_116=it_113->size;
            if(            size_116<4096            ) {
                if(                gHeapPages.mFreeMem[size_116]==((void*)0)                ) {
                    it_113->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_116]=(struct sMemHeaderTiny*)it_113;
                }
                else {
                    it_113->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_116];
                    gHeapPages.mFreeMem[size_116]=(struct sMemHeaderTiny*)it_113;
                }
            }
            else {
                free(it_113);
            }
            gNumFree++;
        }
        else {
            it_117=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_117->allocated!=177783            ) {
                return;
            }
            it_117->allocated=0;
            prev_it_118=it_117->prev;
            next_it_119=it_117->next;
            if(            gAllocMem==it_117            ) {
                gAllocMem=(struct sMemHeader*)next_it_119;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_118                ) {
                    prev_it_118->next=next_it_119;
                }
                if(                next_it_119                ) {
                    next_it_119->prev=prev_it_118;
                }
            }
            size_120=it_117->size;
            if(            size_120<4096            ) {
                if(                gHeapPages.mFreeMem[size_120]==((void*)0)                ) {
                    it_117->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_120]=it_117;
                }
                else {
                    it_117->free_next=gHeapPages.mFreeMem[size_120];
                    gHeapPages.mFreeMem[size_120]=it_117;
                }
            }
            else {
                free(it_117);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_121;
char* __result_obj__50;
struct sMemHeaderTiny* it_122;
char* __result_obj__51;
    if(    gComeDebugLib    ) {
        it_121=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_121->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_121);
            exit(2);
        }
        __result_obj__50 = it_121->class_name;
        return __result_obj__50;
    }
    else {
        it_122=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_122->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_122);
            exit(2);
        }
        __result_obj__51 = it_122->class_name;
        return __result_obj__51;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_123;
int i_124;
struct sMemHeaderTiny* it_125;
    if(    gComeDebugLib    ) {
        it_123=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_123->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_123->class_name        ) {
            printf("(%s): ",it_123->class_name);
        }
        for(        i_124=0        ;        i_124<16        ;        i_124++        ){
            if(            it_123->sname[i_124]            ) {
                printf("%s %d #%d, ",it_123->sname[i_124],it_123->sline[i_124],it_123->id[i_124]);
            }
        }
        puts("");
    }
    else {
        it_125=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_125->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_125->class_name,it_125->sname,it_125->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_126;
unsigned long  int* ref_count_127;
unsigned long  int* size2_128;
void* __result_obj__52;
    mem_126=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_127=(unsigned long  int*)mem_126;
    *ref_count_127=0;
    size2_128=(unsigned long  int*)(mem_126+sizeof(unsigned long  int));
    *size2_128=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__52 = mem_126+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__52;
}

void come_free(void* mem){
unsigned long  int* ref_count_129;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_129=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_129);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__53;
char* mem_130;
unsigned long  int* size_p_131;
unsigned long  int size_132;
void* result_133;
void* __result_obj__54;
    if(    !block    ) {
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    mem_130=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_131=(unsigned long  int*)(mem_130+sizeof(unsigned long  int));
    size_132=*size_p_131-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_133=come_calloc_v2(1,size_132,sname,sline,class_name);
    memcpy(result_133,block,size_132);
    __result_obj__54 = result_133;
    return __result_obj__54;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__55;
unsigned long  int* ref_count_134;
void* __result_obj__56;
    if(    mem==((void*)0)    ) {
        __result_obj__55 = mem;
        return __result_obj__55;
    }
    ref_count_134=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_134)++;
    __result_obj__56 = mem;
    return __result_obj__56;
}

void* come_print_ref_count(void* mem){
void* __result_obj__57;
unsigned long  int* ref_count_135;
void* __result_obj__58;
    if(    mem==((void*)0)    ) {
        __result_obj__57 = mem;
        return __result_obj__57;
    }
    ref_count_135=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_135);
    __result_obj__58 = mem;
    return __result_obj__58;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__59;
void* __result_obj__60;
unsigned long  int* ref_count_136;
unsigned long  int count_137;
void (*finalizer_138)(void*);
void* __result_obj__61;
void* __result_obj__62;
memset(&finalizer_138, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__59 = mem;
            return __result_obj__59;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__60 = ((void*)0);
        return __result_obj__60;
    }
    ref_count_136=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_136)--;
    }
    count_137=*ref_count_136;
    if(    !no_free&&count_137<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_138=protocol_fun;
            finalizer_138(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    __result_obj__62 = mem;
    return __result_obj__62;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_139)(void*);
void (*finalizer_140)(void*);
void (*finalizer_141)(void*);
unsigned long  int* ref_count_142;
unsigned long  int count_143;
void (*finalizer_144)(void*);
void (*finalizer_145)(void*);
void (*finalizer_146)(void*);
memset(&finalizer_139, 0, sizeof(void (*)(void*)));
memset(&finalizer_140, 0, sizeof(void (*)(void*)));
memset(&finalizer_141, 0, sizeof(void (*)(void*)));
memset(&finalizer_144, 0, sizeof(void (*)(void*)));
memset(&finalizer_145, 0, sizeof(void (*)(void*)));
memset(&finalizer_146, 0, sizeof(void (*)(void*)));
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
                finalizer_139=protocol_fun;
                finalizer_139(protocol_obj);
            }
            finalizer_140=fun;
            finalizer_140(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_141=protocol_fun;
                finalizer_141(protocol_obj);
            }
        }
    }
    else {
        ref_count_142=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_142)--;
        }
        count_143=*ref_count_142;
        if(        !no_free&&count_143<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_144=protocol_fun;
                        finalizer_144(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_145=fun;
                        finalizer_145(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_146=protocol_fun;
                        finalizer_146(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__63;
int len_147;
void* __right_value5 = (void*)0;
char* result_148;
char* __result_obj__64;
    if(    str==((void*)0)    ) {
        __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__63;
    }
    len_147=strlen(str)+1;
    result_148=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_147)), "/usr/local/include/comelang.h", 1385, "char*"));
    strncpy(result_148,str,len_147);
    __result_obj__64 = (char*)come_increment_ref_count(result_148);
    (result_148 = come_decrement_ref_count(result_148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
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
char* __result_obj__65;
    __result_obj__65 = (char*)come_increment_ref_count(((char*)(__right_value6=come_get_stackframe())));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__65;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__66;
    __result_obj__66 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__66;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value7 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__67;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3339, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__67 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value8 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__68;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3349, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__68 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__69;
void* __right_value9 = (void*)0;
struct buffer* result_149;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__70;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_149=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3369, "struct buffer*"));
    result_149->size=self->size;
    __dec_obj3=result_149->buf,
    result_149->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3372, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_149->len=self->len;
    memcpy(result_149->buf,self->buf,self->len);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_149);
    come_call_finalizer(buffer_finalize, result_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__71;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__71 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__71;
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
struct buffer* __result_obj__72;
void* __right_value13 = (void*)0;
char* old_buf_150;
int old_len_151;
int new_size_152;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__73;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__72 = self;
        return __result_obj__72;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_150=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3420, "char*"));
        memcpy(old_buf_150,self->buf,self->size);
        old_len_151=self->len;
        new_size_152=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_152)), "/usr/local/include/comelang.h", 3424, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_150,old_len_151);
        self->buf[old_len_151]=0;
        self->size=new_size_152;
        (old_buf_150 = come_decrement_ref_count(old_buf_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__74;
void* __right_value15 = (void*)0;
char* old_buf_153;
int old_len_154;
int new_size_155;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__75;
    if(    self==((void*)0)    ) {
        __result_obj__74 = ((void*)0);
        return __result_obj__74;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_153=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3443, "char*"));
        old_len_154=self->len;
        new_size_155=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_155)), "/usr/local/include/comelang.h", 3447, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_153,old_len_154);
        self->buf[old_len_154]=0;
        self->size=new_size_155;
        (old_buf_153 = come_decrement_ref_count(old_buf_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__76;
int size_156;
void* __right_value17 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__77;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__76 = self;
        return __result_obj__76;
    }
    size_156=strlen(mem);
    if(    self->len+size_156+1+1>=self->size    ) {
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3469, "char*"));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_159)), "/usr/local/include/comelang.h", 3473, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        (old_buf_157 = come_decrement_ref_count(old_buf_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__78;
va_list args_160;
char* result_161;
int len_162;
struct buffer* __result_obj__79;
void* __right_value19 = (void*)0;
char* mem_163;
int size_164;
void* __right_value20 = (void*)0;
char* old_buf_165;
int old_len_166;
int new_size_167;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__80;
memset(&args_160, 0, sizeof(va_list));
result_161 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__78 = self;
        return __result_obj__78;
    }
    __builtin_va_start(args_160,msg);
    len_162=vasprintf(&result_161,msg,args_160);
    __builtin_va_end(args_160);
    if(    len_162<0    ) {
        __result_obj__79 = self;
        return __result_obj__79;
    }
    mem_163=(char*)come_increment_ref_count(__builtin_string(result_161));
    size_164=strlen(mem_163);
    if(    self->len+size_164+1+1>=self->size    ) {
        old_buf_165=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3506, "char*"));
        memcpy(old_buf_165,self->buf,self->size);
        old_len_166=self->len;
        new_size_167=(self->size+size_164+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_167)), "/usr/local/include/comelang.h", 3510, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_165,old_len_166);
        self->buf[old_len_166]=0;
        self->size=new_size_167;
        (old_buf_165 = come_decrement_ref_count(old_buf_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_163,size_164);
    self->len+=size_164;
    self->buf[self->len]=0;
    free(result_161);
    __result_obj__80 = self;
    (mem_163 = come_decrement_ref_count(mem_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__80;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__81;
int size_168;
void* __right_value22 = (void*)0;
char* old_buf_169;
int old_len_170;
int new_size_171;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__82;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__81 = self;
        return __result_obj__81;
    }
    size_168=strlen(mem)+1;
    if(    self->len+size_168+1+1+1>=self->size    ) {
        old_buf_169=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3532, "char*"));
        memcpy(old_buf_169,self->buf,self->size);
        old_len_170=self->len;
        new_size_171=(self->size+size_168+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_171)), "/usr/local/include/comelang.h", 3536, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_169,old_len_170);
        self->buf[old_len_170]=0;
        self->size=new_size_171;
        (old_buf_169 = come_decrement_ref_count(old_buf_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_168);
    self->len+=size_168;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__83;
int* mem_172;
int size_173;
void* __right_value24 = (void*)0;
char* old_buf_174;
int old_len_175;
int new_size_176;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__84;
    if(    self==((void*)0)    ) {
        __result_obj__83 = ((void*)0);
        return __result_obj__83;
    }
    mem_172=&value;
    size_173=sizeof(int);
    if(    self->len+size_173+1+1>=self->size    ) {
        old_buf_174=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3559, "char*"));
        memcpy(old_buf_174,self->buf,self->size);
        old_len_175=self->len;
        new_size_176=(self->size+size_173+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_176)), "/usr/local/include/comelang.h", 3563, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_174,old_len_175);
        self->buf[old_len_175]=0;
        self->size=new_size_176;
        (old_buf_174 = come_decrement_ref_count(old_buf_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_172,size_173);
    self->len+=size_173;
    self->buf[self->len]=0;
    __result_obj__84 = self;
    return __result_obj__84;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_177;
int size_178;
void* __right_value26 = (void*)0;
char* old_buf_179;
int old_len_180;
int new_size_181;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__85;
    mem_177=&value;
    size_178=sizeof(long);
    if(    self->len+size_178+1+1>=self->size    ) {
        old_buf_179=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3582, "char*"));
        memcpy(old_buf_179,self->buf,self->size);
        old_len_180=self->len;
        new_size_181=(self->size+size_178+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_181)), "/usr/local/include/comelang.h", 3586, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_179,old_len_180);
        self->buf[old_len_180]=0;
        self->size=new_size_181;
        (old_buf_179 = come_decrement_ref_count(old_buf_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_177,size_178);
    self->len+=size_178;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__86;
short* mem_182;
int size_183;
void* __right_value28 = (void*)0;
char* old_buf_184;
int old_len_185;
int new_size_186;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__87;
    if(    self==((void*)0)    ) {
        __result_obj__86 = ((void*)0);
        return __result_obj__86;
    }
    mem_182=&value;
    size_183=sizeof(short);
    if(    self->len+size_183+1+1>=self->size    ) {
        old_buf_184=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3609, "char*"));
        memcpy(old_buf_184,self->buf,self->size);
        old_len_185=self->len;
        new_size_186=(self->size+size_183+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_186)), "/usr/local/include/comelang.h", 3613, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_184,old_len_185);
        self->buf[old_len_185]=0;
        self->size=new_size_186;
        (old_buf_184 = come_decrement_ref_count(old_buf_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_182,size_183);
    self->len+=size_183;
    self->buf[self->len]=0;
    __result_obj__87 = self;
    return __result_obj__87;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__88;
int len_187;
int new_size_188;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_189;
struct buffer* __result_obj__89;
    if(    self==((void*)0)    ) {
        __result_obj__88 = ((void*)0);
        return __result_obj__88;
    }
    len_187=self->len;
    len_187=(len_187+3)&~3;
    if(    len_187>=self->size    ) {
        new_size_188=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_188)), "/usr/local/include/comelang.h", 3637, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_188;
    }
    for(    i_189=self->len    ;    i_189<len_187    ;    i_189++    ){
        self->buf[i_189]=0;
    }
    self->len=len_187;
    __result_obj__89 = self;
    return __result_obj__89;
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
struct buffer* result_190;
struct buffer* __result_obj__90;
struct buffer* __result_obj__91;
    result_190=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3667, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__90 = (struct buffer*)come_increment_ref_count(result_190);
        come_call_finalizer(buffer_finalize, result_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__90;
    }
    buffer_append_str(result_190,self);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_190);
    come_call_finalizer(buffer_finalize, result_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__92;
void* __right_value34 = (void*)0;
char* __result_obj__93;
    if(    self==((void*)0)    ) {
        __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__92;
    }
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__94;
    __result_obj__94 = self->buf;
    return __result_obj__94;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_191;
struct buffer* __result_obj__95;
    result_191=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3694, "struct buffer*"))));
    buffer_append(result_191,self,sizeof(char)*len);
    __result_obj__95 = (struct buffer*)come_increment_ref_count(result_191);
    come_call_finalizer(buffer_finalize, result_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_192;
int i_193;
struct buffer* __result_obj__96;
    result_192=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3701, "struct buffer*"))));
    for(    i_193=0    ;    i_193<len    ;    i_193++    ){
        buffer_append(result_192,self[i_193],strlen(self[i_193]));
    }
    __result_obj__96 = (struct buffer*)come_increment_ref_count(result_192);
    come_call_finalizer(buffer_finalize, result_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_194;
struct buffer* __result_obj__97;
    result_194=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3710, "struct buffer*"))));
    buffer_append(result_194,(char*)self,sizeof(short)*len);
    __result_obj__97 = (struct buffer*)come_increment_ref_count(result_194);
    come_call_finalizer(buffer_finalize, result_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_195;
struct buffer* __result_obj__98;
    result_195=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3717, "struct buffer*"))));
    buffer_append(result_195,(char*)self,sizeof(int)*len);
    __result_obj__98 = (struct buffer*)come_increment_ref_count(result_195);
    come_call_finalizer(buffer_finalize, result_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_196;
struct buffer* __result_obj__99;
    result_196=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3724, "struct buffer*"))));
    buffer_append(result_196,(char*)self,sizeof(long)*len);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_196);
    come_call_finalizer(buffer_finalize, result_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_197;
struct buffer* __result_obj__100;
    result_197=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3731, "struct buffer*"))));
    buffer_append(result_197,(char*)self,sizeof(float)*len);
    __result_obj__100 = (struct buffer*)come_increment_ref_count(result_197);
    come_call_finalizer(buffer_finalize, result_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_198;
struct buffer* __result_obj__101;
    result_198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3738, "struct buffer*"))));
    buffer_append(result_198,(char*)self,sizeof(double)*len);
    __result_obj__101 = (struct buffer*)come_increment_ref_count(result_198);
    come_call_finalizer(buffer_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

char* buffer_printable(struct buffer* self){
int len_199;
void* __right_value49 = (void*)0;
char* result_200;
int n_201;
int i_202;
unsigned char c_203;
char* __result_obj__102;
    len_199=self->len;
    result_200=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_199*2+1)), "/usr/local/include/comelang.h", 3746, "char*"));
    n_201=0;
    for(    i_202=0    ;    i_202<len_199    ;    i_202++    ){
        c_203=self->buf[i_202];
        if(        (c_203>=0&&c_203<32)||c_203==127        ) {
            result_200[n_201++]=94;
            result_200[n_201++]=c_203+65-1;
        }
        else if(        c_203>127        ) {
            result_200[n_201++]=63;
        }
        else {
            result_200[n_201++]=c_203;
        }
    }
    result_200[n_201]=0;
    __result_obj__102 = (char*)come_increment_ref_count(result_200);
    (result_200 = come_decrement_ref_count(result_200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__102;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_204;
struct list$1char$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0    ;    i_204<num_value    ;    i_204++    ){
        list$1char$_push_back(self,values[i_204]);
    }
    __result_obj__104 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_205;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_206;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_207;
struct list$1char$* __result_obj__103;
    if(    self->len==0    ) {
        litem_205=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1    ) {
        litem_206=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_208;
struct list_item$1char$* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__105;
    __result_obj__105 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3787, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_210;
struct list$1char$p* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0    ;    i_210<num_value    ;    i_210++    ){
        list$1char$p_push_back(self,values[i_210]);
    }
    __result_obj__107 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_211;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_212;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_213;
struct list$1char$p* __result_obj__106;
    if(    self->len==0    ) {
        litem_211=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$p*"))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1    ) {
        litem_212=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$p*"))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$p*"))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_214;
struct list_item$1char$p* prev_it_215;
    it_214=self->head;
    while(    it_214!=((void*)0)    ) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__108;
    __result_obj__108 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3792, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_216;
struct list$1short$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0    ;    i_216<num_value    ;    i_216++    ){
        list$1short$_push_back(self,values[i_216]);
    }
    __result_obj__110 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_217;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_218;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_219;
struct list$1short$* __result_obj__109;
    if(    self->len==0    ) {
        litem_217=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1short$*"))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1    ) {
        litem_218=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1short$*"))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1short$*"))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_220;
struct list_item$1short$* prev_it_221;
    it_220=self->head;
    while(    it_220!=((void*)0)    ) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__111;
    __result_obj__111 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3797, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_222;
struct list$1int$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_222=0    ;    i_222<num_value    ;    i_222++    ){
        list$1int$_push_back(self,values[i_222]);
    }
    __result_obj__113 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_223;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_224;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_225;
struct list$1int$* __result_obj__112;
    if(    self->len==0    ) {
        litem_223=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1int$*"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1    ) {
        litem_224=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1int$*"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1int$*"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_226;
struct list_item$1int$* prev_it_227;
    it_226=self->head;
    while(    it_226!=((void*)0)    ) {
        prev_it_227=it_226;
        it_226=it_226->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__114;
    __result_obj__114 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3802, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_228;
struct list$1long$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_228=0    ;    i_228<num_value    ;    i_228++    ){
        list$1long$_push_back(self,values[i_228]);
    }
    __result_obj__116 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_229;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_230;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_231;
struct list$1long$* __result_obj__115;
    if(    self->len==0    ) {
        litem_229=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1long$*"))));
        litem_229->prev=((void*)0);
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail=litem_229;
        self->head=litem_229;
    }
    else if(    self->len==1    ) {
        litem_230=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1long$*"))));
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        litem_231=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1long$*"))));
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_232;
struct list_item$1long$* prev_it_233;
    it_232=self->head;
    while(    it_232!=((void*)0)    ) {
        prev_it_233=it_232;
        it_232=it_232->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__117;
    __result_obj__117 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3807, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_234;
struct list$1float$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_234=0    ;    i_234<num_value    ;    i_234++    ){
        list$1float$_push_back(self,values[i_234]);
    }
    __result_obj__119 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_235;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_236;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_237;
struct list$1float$* __result_obj__118;
    if(    self->len==0    ) {
        litem_235=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1float$*"))));
        litem_235->prev=((void*)0);
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail=litem_235;
        self->head=litem_235;
    }
    else if(    self->len==1    ) {
        litem_236=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1float$*"))));
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        litem_236->item=item;
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        litem_237=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1float$*"))));
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_238;
struct list_item$1float$* prev_it_239;
    it_238=self->head;
    while(    it_238!=((void*)0)    ) {
        prev_it_239=it_238;
        it_238=it_238->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__120;
    __result_obj__120 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3812, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_240;
struct list$1double$* __result_obj__122;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_240=0    ;    i_240<num_value    ;    i_240++    ){
        list$1double$_push_back(self,values[i_240]);
    }
    __result_obj__122 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_241;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_242;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_243;
struct list$1double$* __result_obj__121;
    if(    self->len==0    ) {
        litem_241=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1double$*"))));
        litem_241->prev=((void*)0);
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail=litem_241;
        self->head=litem_241;
    }
    else if(    self->len==1    ) {
        litem_242=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1double$*"))));
        litem_242->prev=self->head;
        litem_242->next=((void*)0);
        litem_242->item=item;
        self->tail=litem_242;
        self->head->next=litem_242;
    }
    else {
        litem_243=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1double$*"))));
        litem_243->prev=self->tail;
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail->next=litem_243;
        self->tail=litem_243;
    }
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_244;
struct list_item$1double$* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)    ) {
        prev_it_245=it_244;
        it_244=it_244->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__123;
    __result_obj__123 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3817, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
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
char* __result_obj__124;
int len_246;
void* __right_value86 = (void*)0;
char* result_247;
char* __result_obj__125;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_246=strlen(self)+strlen(right);
    result_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_246+1)), "/usr/local/include/comelang.h", 4046, "char*"));
    strncpy(result_247,self,len_246+1);
    strncat(result_247,right,len_246+1);
    __result_obj__125 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__126;
int len_248;
void* __right_value88 = (void*)0;
char* result_249;
char* __result_obj__127;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_248=strlen(self)+strlen(right);
    result_249=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_248+1)), "/usr/local/include/comelang.h", 4061, "char*"));
    strncpy(result_249,self,len_248+1);
    strncat(result_249,right,len_248+1);
    __result_obj__127 = (char*)come_increment_ref_count(result_249);
    (result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__128;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_250;
int i_251;
void* __right_value92 = (void*)0;
char* __result_obj__129;
    if(    self==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    buf_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "struct buffer*"))));
    for(    i_251=0    ;    i_251<right    ;    i_251++    ){
        buffer_append_str(buf_250,self);
    }
    __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_250))));
    come_call_finalizer(buffer_finalize, buf_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__129;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__130;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_252;
int i_253;
void* __right_value96 = (void*)0;
char* __result_obj__131;
    if(    self==((void*)0)    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "struct buffer*"))));
    for(    i_253=0    ;    i_253<right    ;    i_253++    ){
        buffer_append_str(buf_252,self);
    }
    __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_252))));
    come_call_finalizer(buffer_finalize, buf_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_254;
int i_255;
    result_254=(_Bool)0;
    for(    i_255=0    ;    i_255<len    ;    i_255++    ){
        if(        strncmp(self[i_255],str,strlen(self[i_255]))==0        ) {
            result_254=(_Bool)1;
            break;
        }
    }
    return result_254;
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
int result_256;
char* p_257;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_256=0;
    p_257=value;
    while(    *p_257    ) {
        result_256+=(*p_257);
        p_257++;
    }
    return result_256;
}

unsigned int string_get_hash_key(char* value){
int result_258;
char* p_259;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_258=0;
    p_259=value;
    while(    *p_259    ) {
        result_258+=(*p_259);
        p_259++;
    }
    return result_258;
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
_Bool result_260;
    result_260=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_260;
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
_Bool result_261;
    result_261=(c>=32&&c<=126);
    return result_261;
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
char* __result_obj__132;
int len_262;
void* __right_value98 = (void*)0;
char* result_263;
int i_264;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_262=strlen(str);
    result_263=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_262+1)), "/usr/local/include/comelang.h", 4356, "char*"));
    for(    i_264=0    ;    i_264<len_262    ;    i_264++    ){
        result_263[i_264]=str[len_262-i_264-1];
    }
    result_263[len_262]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_263);
    (result_263 = come_decrement_ref_count(result_263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__134;
int len_265;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__135;
void* __right_value102 = (void*)0;
char* __result_obj__136;
void* __right_value103 = (void*)0;
char* __result_obj__137;
void* __right_value104 = (void*)0;
char* result_266;
char* __result_obj__138;
    if(    str==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_265=strlen(str);
    if(    head<0    ) {
        head+=len_265;
    }
    if(    tail<0    ) {
        tail+=len_265+1;
    }
    if(    head>tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_265    ) {
        tail=len_265;
    }
    if(    head==tail    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    tail-head+1<1    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    result_266=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4402, "char*"));
    memcpy(result_266,str+head,tail-head);
    result_266[tail-head]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_266);
    (result_266 = come_decrement_ref_count(result_266, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__139;
int len_267;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__140;
void* __right_value108 = (void*)0;
char* __result_obj__141;
void* __right_value109 = (void*)0;
char* __result_obj__142;
void* __right_value110 = (void*)0;
char* result_268;
char* __result_obj__143;
    if(    str==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    len_267=strlen(str);
    if(    head<0    ) {
        head+=len_267;
    }
    if(    tail<0    ) {
        tail+=len_267+1;
    }
    if(    head>tail    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_267    ) {
        tail=len_267;
    }
    if(    head==tail    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    if(    tail-head+1<1    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result_268=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4445, "char*"));
    memcpy(result_268,str+head,tail-head);
    result_268[tail-head]=0;
    __result_obj__143 = (char*)come_increment_ref_count(result_268);
    (result_268 = come_decrement_ref_count(result_268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__144;
int len_269;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__145;
void* __right_value114 = (void*)0;
char* __result_obj__146;
void* __right_value115 = (void*)0;
char* __result_obj__147;
void* __right_value116 = (void*)0;
char* result_270;
char* __result_obj__148;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_269=strlen(str);
    if(    head<0    ) {
        head+=len_269;
    }
    if(    tail<0    ) {
        tail+=len_269+1;
    }
    if(    head>tail    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_269    ) {
        tail=len_269;
    }
    if(    head==tail    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    tail-head+1<1    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    result_270=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4488, "char*"));
    memcpy(result_270,str+head,tail-head);
    result_270[tail-head]=0;
    __result_obj__148 = (char*)come_increment_ref_count(result_270);
    (result_270 = come_decrement_ref_count(result_270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__149;
va_list args_271;
char* result_272;
int len_273;
void* __right_value118 = (void*)0;
char* __result_obj__150;
void* __right_value119 = (void*)0;
char* result2_274;
char* __result_obj__151;
memset(&args_271, 0, sizeof(va_list));
result_272 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    __builtin_va_start(args_271,msg);
    len_273=vasprintf(&result_272,msg,args_271);
    __builtin_va_end(args_271);
    if(    len_273<0    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    result2_274=(char*)come_increment_ref_count(__builtin_string(result_272));
    free(result_272);
    __result_obj__151 = (char*)come_increment_ref_count(result2_274);
    (result2_274 = come_decrement_ref_count(result2_274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__152;
int len_275;
void* __right_value121 = (void*)0;
char* __result_obj__153;
void* __right_value122 = (void*)0;
char* __result_obj__154;
void* __right_value123 = (void*)0;
char* result_276;
char* __result_obj__155;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_275=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    head<0    ) {
        head+=len_275;
    }
    if(    tail<0    ) {
        tail+=len_275+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    tail>=len_275    ) {
        tail=len_275;
    }
    result_276=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_275-(tail-head)+1)), "/usr/local/include/comelang.h", 4550, "char*"));
    memcpy(result_276,str,head);
    memcpy(result_276+head,str+tail,len_275-tail);
    result_276[len_275-(tail-head)]=0;
    __result_obj__155 = (char*)come_increment_ref_count(result_276);
    (result_276 = come_decrement_ref_count(result_276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__156 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_277;
struct list_item$1char$ph* prev_it_278;
    it_277=self->head;
    while(    it_277!=((void*)0)    ) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_282;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_283;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_284;
char* __dec_obj15;
struct list$1char$ph* __result_obj__158;
    if(    self->len==0    ) {
        litem_282=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1568, "struct list_item$1char$ph*"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj13=litem_282->item,
        litem_282->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1    ) {
        litem_283=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1578, "struct list_item$1char$ph*"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj14=litem_283->item,
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1588, "struct list_item$1char$ph*"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj15=litem_284->item,
        litem_284->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result_obj__158 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__158;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__157;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_279;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_280;
int i_281;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__159;
    if(    self==((void*)0)    ) {
        __result_obj__157 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4563, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__157;
    }
    result_279=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4566, "struct list$1char$ph*"))));
    str_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4568, "struct buffer*"))));
    for(    i_281=0    ;    i_281<charp_length(self)    ;    i_281++    ){
        if(        self[i_281]==c        ) {
            list$1char$ph_push_back(result_279,(char*)come_increment_ref_count(__builtin_string(str_280->buf)));
            buffer_reset(str_280);
        }
        else {
            buffer_append_char(str_280,self[i_281]);
        }
    }
    if(    buffer_length(str_280)!=0    ) {
        list$1char$ph_push_back(result_279,(char*)come_increment_ref_count(__builtin_string(str_280->buf)));
    }
    __result_obj__159 = (struct list$1char$ph*)come_increment_ref_count(result_279);
    come_call_finalizer(list$1char$ph$p_finalize, result_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* charp_printable(char* str){
int len_285;
void* __right_value137 = (void*)0;
char* result_286;
int n_287;
int i_288;
char c_289;
char* __result_obj__162;
    len_285=charp_length(str);
    result_286=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_285*2+1)), "/usr/local/include/comelang.h", 4600, "char*"));
    n_287=0;
    for(    i_288=0    ;    i_288<len_285    ;    i_288++    ){
        c_289=str[i_288];
        if(        (c_289>=0&&c_289<32)||c_289==127        ) {
            result_286[n_287++]=94;
            result_286[n_287++]=c_289+65-1;
        }
        else {
            result_286[n_287++]=c_289;
        }
    }
    result_286[n_287]=0;
    __result_obj__162 = (char*)come_increment_ref_count(result_286);
    (result_286 = come_decrement_ref_count(result_286, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__163;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_290;
char* p_291;
char* p2_292;
void* __right_value141 = (void*)0;
char* __result_obj__164;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    result_290=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4628, "struct buffer*"))));
    p_291=self;
    while(    (_Bool)1    ) {
        p2_292=strstr(p_291,str);
        if(        p2_292==((void*)0)        ) {
            p2_292=p_291;
            while(            *p2_292            ) {
                p2_292++;
            }
            buffer_append(result_290,p_291,p2_292-p_291);
            break;
        }
        buffer_append(result_290,p_291,p2_292-p_291);
        buffer_append_str(result_290,replace);
        p_291=p2_292+strlen(str);
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_290))));
    come_call_finalizer(buffer_finalize, result_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__165;
char* p_293;
void* __right_value143 = (void*)0;
char* __result_obj__166;
void* __right_value144 = (void*)0;
char* __result_obj__167;
void* __right_value145 = (void*)0;
char* __result_obj__168;
    if(    path==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    p_293=path+strlen(path);
    while(    p_293>=path    ) {
        if(        *p_293==47        ) {
            break;
        }
        else {
            p_293--;
        }
    }
    if(    p_293<path    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_293+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__169;
void* __right_value147 = (void*)0;
char* path2_294;
char* p_295;
void* __right_value148 = (void*)0;
char* __result_obj__170;
void* __right_value149 = (void*)0;
char* __result_obj__171;
void* __right_value150 = (void*)0;
char* __result_obj__172;
    if(    path==((void*)0)    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    path2_294=(char*)come_increment_ref_count(xbasename(path));
    p_295=path2_294+strlen(path2_294);
    while(    p_295>=path2_294    ) {
        if(        *p_295==46        ) {
            break;
        }
        else {
            p_295--;
        }
    }
    if(    p_295<path2_294    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_294))));
        (path2_294 = come_decrement_ref_count(path2_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    else {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_294,0,p_295-path2_294))));
        (path2_294 = come_decrement_ref_count(path2_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_294 = come_decrement_ref_count(path2_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__173;
char* p_296;
void* __right_value152 = (void*)0;
char* __result_obj__174;
void* __right_value153 = (void*)0;
char* __result_obj__175;
void* __right_value154 = (void*)0;
char* __result_obj__176;
    if(    path==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    p_296=path+strlen(path);
    while(    p_296>=path    ) {
        if(        *p_296==46        ) {
            break;
        }
        else {
            p_296--;
        }
    }
    if(    p_296<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_296+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__177;
void* __right_value156 = (void*)0;
char* __result_obj__178;
    if(    self    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    else {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__179;
void* __right_value158 = (void*)0;
char* __result_obj__180;
    if(    self    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    else {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
}

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__181;
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__182;
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__183;
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__185;
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__186;
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__187;
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__188;
void* __right_value167 = (void*)0;
char* __result_obj__189;
    if(    self==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* charp_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__190;
void* __right_value169 = (void*)0;
char* __result_obj__191;
    if(    self==((void*)0)    ) {
        __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__190;
    }
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
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
int i_297;
    for(    i_297=0    ;    i_297<self    ;    i_297++    ){
        block(parent,i_297);
    }
}

