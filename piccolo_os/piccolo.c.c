/// previous struct definition ///
/// struct definition ///
typedef void* any;

typedef char* string;

extern void* gComeFunResultObject;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};

extern struct sMemHeader* gAllocMem;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

struct integer
{
    long value;
};

struct floating
{
    double value;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct anonymous_typeX14
{
    unsigned int task_stacks[3][256];
    unsigned int* the_tasks[3];
    unsigned long  int task_count;
    unsigned long  int current_task;
};

typedef struct anonymous_typeX14 piccolo_os_internals_t;

typedef unsigned int piccolo_sleep_t;

struct anonymous_typeX14 piccolo_ctx;
// source head
#include "stdint.h"
#include "stdarg.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// header function
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
static void buffer_finalize(struct buffer* self);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct buffer* buffer_clone(struct buffer* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static char* buffer_to_string(struct buffer* self);
void stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool _Bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool _Bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool _Bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool _Bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
struct buffer* buffer_initialize(struct buffer* self);
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
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
int string_length(char* str);
int charp_length(char* str);
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
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
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct integer* integer_initialize(struct integer* self, long value);
static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);
struct integer* _Bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_compare(struct integer* left, struct integer* right);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
char* integer_to_string(struct integer* self);
struct floating* floating_initialize(struct floating* self, double value);
static void floating_finalize(struct floating* self);
double floating_to_double(struct floating* self);
int floating_compare(struct floating* left, struct floating* right);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
_Bool floating_equals(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
int floating_operator_add(struct floating* left, struct floating* right);
int floating_operator_sub(struct floating* left, struct floating* right);
int floating_operator_mult(struct floating* left, struct floating* right);
int floating_operator_div(struct floating* left, struct floating* right);
int floating_operator_gteq(struct floating* left, struct floating* right);
int floating_operator_lteq(struct floating* left, struct floating* right);
int floating_operator_lt(struct floating* left, struct floating* right);
int floating_operator_gt(struct floating* left, struct floating* right);
char* floating_to_string(struct floating* self);
_Bool die(char* msg);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
char* string_xsprintf(char* self, char* msg, ...);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
void piccolo_yield();
void piccolo_syscall();
void piccolo_task_init();
unsigned int* __piccolo_pre_switch(unsigned int* stack);
void __piccolo_task_init_stack(unsigned int* stack);
unsigned int* __piccolo_os_create_task(unsigned int* task_stack, void (*pointer_to_task_function)());
int piccolo_create_task(void (*pointer_to_task_function)());
void piccolo_sleep(unsigned int* start, int ticks);
void __piccolo_task_init();
void piccolo_init();
void piccolo_start();
// uniq global variable
// inline function

// body function

static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}








static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
    __dec_obj2=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj3;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj3=self->memory;
            come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result9__;
void* __right_value15 = (void*)0;
struct buffer* result_8;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result10__;
    if(    self==(void*)0) {
        __result9__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result9__;
    }
    result_8=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_clone", 3, "buffer"));
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        __dec_obj4=result_8->buf;
        result_8->buf=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "buffer_clone", 4, "char*"));
        /*G*/ __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_8->size=self->size;
    }
    __result10__ = gComeFunResultObject = __result_obj__ = result_8;
    /*i*/come_call_finalizer3(result_8,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result10__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1short* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1int* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result17__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result17__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result17__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}




static char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_11;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
char* __result19__;
    result_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "buffer_to_string", 2, "buffer"))));
    buffer_append_str(result_11,"buffer {");
    buffer_append_str(result_11,"buf:");
    buffer_append_str(result_11,((char*)(__right_value37=charp_to_string(self->buf))));
    /* U11 */__right_value37 = come_decrement_ref_count2(__right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_11,",");
    buffer_append_str(result_11,"len:");
    buffer_append_str(result_11,((char*)(__right_value38=int_to_string(self->len))));
    /* U11 */__right_value38 = come_decrement_ref_count2(__right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_11,",");
    buffer_append_str(result_11,"size:");
    buffer_append_str(result_11,((char*)(__right_value39=int_to_string(self->size))));
    /* U11 */__right_value39 = come_decrement_ref_count2(__right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(result_11,"}");
    __result19__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value40=buffer_to_string(result_11)));
    /*i*/come_call_finalizer3(result_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value40 = come_decrement_ref_count2(__right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}



































































































































static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result129__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_157;
struct list_item$1charph* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj22;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj22=self->item;
            /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_162;
char* __dec_obj23;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_163;
char* __dec_obj24;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_164;
char* __dec_obj25;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1charph"))));
        litem_162->prev=((void*)0);
        litem_162->next=((void*)0);
        __dec_obj23=litem_162->item;
        litem_162->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_162;
        self->head=litem_162;
    }
    else if(    self->len==1) {
        litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1charph"))));
        litem_163->prev=self->head;
        litem_163->next=((void*)0);
        __dec_obj24=litem_163->item;
        litem_163->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_163;
        self->head->next=litem_163;
    }
    else {
        litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1charph"))));
        litem_164->prev=self->tail;
        litem_164->next=((void*)0);
        __dec_obj25=litem_164->item;
        litem_164->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_164;
        self->tail=litem_164;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}


































static void integer_finalize(struct integer* self){
}



























static void floating_finalize(struct floating* self){
}




















static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1charp* __result184__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj28;
struct smart_pointer$1float* __result189__;
    __dec_obj28=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj28,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj29;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj29=self->memory;
            come_call_finalizer3(__dec_obj29,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj30;
struct smart_pointer$1double* __result191__;
    __dec_obj30=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj30,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result191__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj31;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj31=self->memory;
            come_call_finalizer3(__dec_obj31,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_212;
struct list$1char* __result194__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0;    i_212<num_value;    i_212++    ){
        list$1char_push_back(self,values[i_212]);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
struct list_item$1char* litem_213;
void* __right_value245 = (void*)0;
struct list_item$1char* litem_214;
void* __right_value246 = (void*)0;
struct list_item$1char* litem_215;
struct list$1char* __result193__;
    if(    self->len==0) {
        litem_213=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value244=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1char"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value245=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1char"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value246=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1char"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_216;
struct list_item$1char* prev_it_217;
    it_216=self->head;
    while(it_216!=((void*)0)) {
        prev_it_217=it_216;
        it_216=it_216->next;
        /*i*/come_call_finalizer3(prev_it_217,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_218;
struct list$1charp* __result197__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0;    i_218<num_value;    i_218++    ){
        list$1charp_push_back(self,values[i_218]);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list_item$1charp* litem_219;
void* __right_value250 = (void*)0;
struct list_item$1charp* litem_220;
void* __right_value251 = (void*)0;
struct list_item$1charp* litem_221;
struct list$1charp* __result196__;
    if(    self->len==0) {
        litem_219=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value249=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1charp"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value250=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1charp"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value251=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1charp"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_222;
struct list_item$1charp* prev_it_223;
    it_222=self->head;
    while(it_222!=((void*)0)) {
        prev_it_223=it_222;
        it_222=it_222->next;
        /*i*/come_call_finalizer3(prev_it_223,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_224;
struct list$1short* __result200__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0;    i_224<num_value;    i_224++    ){
        list$1short_push_back(self,values[i_224]);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
struct list_item$1short* litem_225;
void* __right_value255 = (void*)0;
struct list_item$1short* litem_226;
void* __right_value256 = (void*)0;
struct list_item$1short* litem_227;
struct list$1short* __result199__;
    if(    self->len==0) {
        litem_225=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value254=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1short"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1) {
        litem_226=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value255=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1short"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value256=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1short"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_228;
struct list_item$1short* prev_it_229;
    it_228=self->head;
    while(it_228!=((void*)0)) {
        prev_it_229=it_228;
        it_228=it_228->next;
        /*i*/come_call_finalizer3(prev_it_229,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_230;
struct list$1int* __result203__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_230=0;    i_230<num_value;    i_230++    ){
        list$1int_push_back(self,values[i_230]);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1int* litem_231;
void* __right_value260 = (void*)0;
struct list_item$1int* litem_232;
void* __right_value261 = (void*)0;
struct list_item$1int* litem_233;
struct list$1int* __result202__;
    if(    self->len==0) {
        litem_231=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value259=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1int"))));
        litem_231->prev=((void*)0);
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail=litem_231;
        self->head=litem_231;
    }
    else if(    self->len==1) {
        litem_232=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value260=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1int"))));
        litem_232->prev=self->head;
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head->next=litem_232;
    }
    else {
        litem_233=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value261=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1int"))));
        litem_233->prev=self->tail;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail->next=litem_233;
        self->tail=litem_233;
    }
    self->len++;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_234;
struct list_item$1int* prev_it_235;
    it_234=self->head;
    while(it_234!=((void*)0)) {
        prev_it_235=it_234;
        it_234=it_234->next;
        /*i*/come_call_finalizer3(prev_it_235,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_236;
struct list$1long* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_236=0;    i_236<num_value;    i_236++    ){
        list$1long_push_back(self,values[i_236]);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1long* litem_237;
void* __right_value265 = (void*)0;
struct list_item$1long* litem_238;
void* __right_value266 = (void*)0;
struct list_item$1long* litem_239;
struct list$1long* __result205__;
    if(    self->len==0) {
        litem_237=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value264=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1long"))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1) {
        litem_238=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value265=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1long"))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        litem_238->item=item;
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value266=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1long"))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_240;
struct list_item$1long* prev_it_241;
    it_240=self->head;
    while(it_240!=((void*)0)) {
        prev_it_241=it_240;
        it_240=it_240->next;
        /*i*/come_call_finalizer3(prev_it_241,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_242;
struct list$1float* __result209__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        list$1float_push_back(self,values[i_242]);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1float* litem_243;
void* __right_value270 = (void*)0;
struct list_item$1float* litem_244;
void* __right_value271 = (void*)0;
struct list_item$1float* litem_245;
struct list$1float* __result208__;
    if(    self->len==0) {
        litem_243=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value269=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1float"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1) {
        litem_244=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value270=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1float"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        litem_244->item=item;
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value271=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1float"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_246;
struct list_item$1float* prev_it_247;
    it_246=self->head;
    while(it_246!=((void*)0)) {
        prev_it_247=it_246;
        it_246=it_246->next;
        /*i*/come_call_finalizer3(prev_it_247,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_248;
struct list$1double* __result212__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_248=0;    i_248<num_value;    i_248++    ){
        list$1double_push_back(self,values[i_248]);
    }
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1double* litem_249;
void* __right_value275 = (void*)0;
struct list_item$1double* litem_250;
void* __right_value276 = (void*)0;
struct list_item$1double* litem_251;
struct list$1double* __result211__;
    if(    self->len==0) {
        litem_249=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value274=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 192, "list_item$1double"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        litem_249->item=item;
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1) {
        litem_250=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value275=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 202, "list_item$1double"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        litem_250->item=item;
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value276=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 212, "list_item$1double"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        litem_251->item=item;
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_252;
struct list_item$1double* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        /*i*/come_call_finalizer3(prev_it_253,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct vector$1char* __result214__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value279=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_254;
    if(    0) {
        for(        i_254=0;        i_254<self->len;        i_254++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct vector$1charp* __result216__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value282=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_255;
    if(    0) {
        for(        i_255=0;        i_255<self->len;        i_255++        ){
            /* U13 */self->items[i_255] = come_decrement_ref_count2(self->items[i_255], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct vector$1short* __result218__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value285=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct vector$1int* __result220__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value288=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_257;
    if(    0) {
        for(        i_257=0;        i_257<self->len;        i_257++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct vector$1long* __result222__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value291=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_258;
    if(    0) {
        for(        i_258=0;        i_258<self->len;        i_258++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct vector$1float* __result224__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value294=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_259;
    if(    0) {
        for(        i_259=0;        i_259<self->len;        i_259++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct vector$1double* __result226__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value297=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 986, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_260;
    if(    0) {
        for(        i_260=0;        i_260<self->len;        i_260++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











unsigned int* __piccolo_os_create_task(unsigned int* task_stack, void (*pointer_to_task_function)()){
void* __result_obj__=(void*)0;
unsigned int* __result231__;
    task_stack+=256-17;
    task_stack[8]=(unsigned int)-3;
    task_stack[15]=(unsigned int)pointer_to_task_function;
    task_stack[16]=(unsigned int)16777216;
    task_stack=__piccolo_pre_switch(task_stack);
    __result231__ = gComeFunResultObject = __result_obj__ = task_stack;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

int piccolo_create_task(void (*pointer_to_task_function)()){
int tc_263;
    if(    piccolo_ctx.task_count>=3) {
        return -1;
    }
    tc_263=piccolo_ctx.task_count;
    piccolo_ctx.the_tasks[tc_263]=__piccolo_os_create_task(/*b*/(void*)piccolo_ctx.task_stacks[tc_263],pointer_to_task_function);
    piccolo_ctx.task_count++;
    return piccolo_ctx.task_count-1;
}

void piccolo_sleep(unsigned int* start, int ticks){
    *start=to_ms_since_boot(get_absolute_time());
    while(to_ms_since_boot(get_absolute_time())<*start+ticks) {
        piccolo_yield();
    }
}

void __piccolo_task_init(){
    unsigned int dummy_264[32];
    memset(&dummy_264, 0, sizeof(unsigned int)    *(32)    );
    __piccolo_task_init_stack(dummy_264+32);
}

void piccolo_init(){
    piccolo_ctx.task_count=0;
    stdio_init_all();
    __piccolo_task_init();
}

void piccolo_start(){
    piccolo_ctx.current_task=0;
    while(1) {
        piccolo_ctx.the_tasks[piccolo_ctx.current_task]=__piccolo_pre_switch(piccolo_ctx.the_tasks[piccolo_ctx.current_task]);
        piccolo_ctx.current_task++;
        if(        piccolo_ctx.current_task>=piccolo_ctx.task_count) {
            piccolo_ctx.current_task=0;
        }
    }
}

