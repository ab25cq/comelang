// source head
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "pico/stdlib.h"
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
void buffer_force_finalize(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
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
int fun();
int main();
// uniq global variable

// source head3
void* gComeFunResultObject=((void*)0);
char* gComeStackFrameSName[128];
int gComeStackFrameSLine[128];
int gComeStackFrameID[128];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
_Bool gComeMallocLib=0;
_Bool gComeDebugLib=0;
_Bool gComeGCLib=0;
int gNumAlloc=0;
int gNumFree=0;
struct sMemHeader* gAllocMem;
struct sHeapPage gHeapPages;

// inline function

// body function
struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2364, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

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

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2371, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2380, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2387, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2394, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2401, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2408, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}

struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value18=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2708, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value18,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
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

struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct smart_pointer$1char* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value21=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 2713, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value21,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}

struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct smart_pointer$1short* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value24=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 2718, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value24,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
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

struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct smart_pointer$1int* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value27=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 2723, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value27,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
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

struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct smart_pointer$1long* __result18__;
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value30=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 2728, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value30,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
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

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* buf_9;
void* __right_value33 = (void*)0;
int i_10;
void* __right_value34 = (void*)0;
void* __right_value41 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 2789, "buffer"))));
    buffer_append_str(buf_9,((char*)(__right_value33=xsprintf("%s %d\n",sname,sline))));
    /* U11 */__right_value33 = come_decrement_ref_count2(__right_value33, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_10=gNumComeStackFrame-2;    i_10>=0;    i_10--    ){
        buffer_append_str(buf_9,((char*)(__right_value34=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_10],gComeStackFrameSLine[i_10],gComeStackFrameID[i_10]))));
        /* U11 */__right_value34 = come_decrement_ref_count2(__right_value34, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value41=buffer_to_string(buf_9))));
    /* U11 */__right_value41 = come_decrement_ref_count2(__right_value41, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
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

void stackframe(){
int i_12;
    for(    i_12=gNumComeStackFrame-1;    i_12>=0;    i_12--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_12],gComeStackFrameSLine[i_12],gComeStackFrameID[i_12]);
    }
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result20__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result20__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result20__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result21__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result21__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result21__;
}

_Bool _Bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool _Bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool _Bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool _Bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_13;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    __builtin___memset_chk(gComeStackFrameSName,0,sizeof(char*)*128,__builtin_object_size(gComeStackFrameSName,0));
    __builtin___memset_chk(gComeStackFrameSLine,0,sizeof(int)*128,__builtin_object_size(gComeStackFrameSLine,0));
    __builtin___memset_chk(gComeStackFrameID,0,sizeof(int)*128,__builtin_object_size(gComeStackFrameID,0));
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_13=0;    i_13<gHeapPages.mSizePages;    i_13++    ){
        gHeapPages.mPages[i_13]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    __builtin___memset_chk(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2,__builtin_object_size(gHeapPages.mFreeMem,0));
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_14;
int n_15;
_Bool flag_16;
int i_17;
struct sMemHeaderTiny* it_18;
int n_19;
int i_20;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_14=gAllocMem;
        n_15=0;
        while(it_14) {
            n_15++;
            flag_16=0;
            printf("#%d ",n_15);
            if(            it_14->class_name) {
                printf("%p (%s): ",(char*)it_14+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_14->class_name);
            }
            for(            i_17=0;            i_17<16;            i_17++            ){
                if(                it_14->sname[i_17]) {
                    printf("%s %d #%d, ",it_14->sname[i_17],it_14->sline[i_17],it_14->id[i_17]);
                    flag_16=1;
                }
            }
            if(            flag_16) {
                puts("");
            }
            it_14=it_14->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_15,gNumAlloc,gNumFree);
    }
    else {
        it_18=(struct sMemHeaderTiny*)gAllocMem;
        n_19=0;
        while(it_18) {
            n_19++;
            it_18=it_18->next;
        }
        if(        n_19>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_19,gNumAlloc,gNumFree);
        }
    }
    for(    i_20=0;    i_20<gHeapPages.mSizePages;    i_20++    ){
        free(gHeapPages.mPages[i_20]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_21;
unsigned long  int free_area_22;
int new_size_pages_23;
void** new_pages_24;
int i_25;
void* __result22__;
    result_21=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_21=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            __builtin___memset_chk(result_21,0,size,__builtin_object_size(result_21,0));
        }
        if(        result_21==((void*)0)) {
            free_area_22=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_22) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_23=gHeapPages.mSizePages*2;
                    new_pages_24=calloc(1,sizeof(char*)*new_size_pages_23);
                    i_25=0;
                    for(                    ;                    i_25<gHeapPages.mSizePages;                    i_25++                    ){
                        new_pages_24[i_25]=gHeapPages.mPages[i_25];
                    }
                    for(                    ;                    i_25<new_size_pages_23;                    i_25++                    ){
                        new_pages_24[i_25]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_24;
                    gHeapPages.mSizePages=new_size_pages_23;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_21=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_21=calloc(1,size);
    }
    __result22__ = gComeFunResultObject = __result_obj__ = result_21;
    gComeFunResultObject = (void*)0;
    return __result22__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_26;
struct sMemHeader* it_27;
void* __result23__;
void* result_28;
struct sMemHeaderTiny* it_29;
void* __result24__;
    if(    gComeDebugLib) {
        result_26=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_27=result_26;
        it_27->allocated=177783;
        it_27->size=size+sizeof(struct sMemHeader);
        it_27->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            __builtin___memcpy_chk(it_27->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame,__builtin_object_size(it_27->sname,0));
            __builtin___memcpy_chk(it_27->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame,__builtin_object_size(it_27->sline,0));
            __builtin___memcpy_chk(it_27->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame,__builtin_object_size(it_27->id,0));
        }
        else {
            __builtin___memcpy_chk(it_27->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16,__builtin_object_size(it_27->sname,0));
            __builtin___memcpy_chk(it_27->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16,__builtin_object_size(it_27->sline,0));
            __builtin___memcpy_chk(it_27->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16,__builtin_object_size(it_27->id,0));
        }
        come_pop_stackframe();
        it_27->next=gAllocMem;
        it_27->prev=((void*)0);
        if(        class_name) {
            it_27->class_name=strdup(class_name);
        }
        else {
            it_27->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_27;
        }
        gAllocMem=it_27;
        gNumAlloc++;
        __result23__ = gComeFunResultObject = __result_obj__ = (char*)result_26+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result23__;
    }
    else {
        result_28=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_29=result_28;
        it_29->allocated=177783;
        it_29->size=size+sizeof(struct sMemHeaderTiny);
        it_29->free_next=((void*)0);
        it_29->next=(struct sMemHeaderTiny*)gAllocMem;
        it_29->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_29;
        }
        gAllocMem=(struct sMemHeader*)it_29;
        gNumAlloc++;
        __result24__ = gComeFunResultObject = __result_obj__ = (char*)result_28+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_30;
struct sMemHeader* prev_it_31;
struct sMemHeader* next_it_32;
unsigned long  int size_33;
struct sMemHeaderTiny* it_34;
struct sMemHeaderTiny* prev_it_35;
struct sMemHeaderTiny* next_it_36;
unsigned long  int size_37;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_30=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_30->allocated!=177783) {
                return;
            }
            it_30->allocated=0;
            prev_it_31=it_30->prev;
            next_it_32=it_30->next;
            if(            it_30->class_name) {
                free(it_30->class_name);
            }
            if(            gAllocMem==it_30) {
                gAllocMem=next_it_32;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_31) {
                    prev_it_31->next=next_it_32;
                }
                if(                next_it_32) {
                    next_it_32->prev=prev_it_31;
                }
            }
            size_33=it_30->size;
            if(            size_33<2048*2) {
                if(                gHeapPages.mFreeMem[size_33]==((void*)0)) {
                    it_30->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_33]=(struct sMemHeaderTiny*)it_30;
                }
                else {
                    it_30->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_33];
                    gHeapPages.mFreeMem[size_33]=(struct sMemHeaderTiny*)it_30;
                }
            }
            else {
                free(it_30);
            }
            gNumFree++;
        }
        else {
            it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_34->allocated!=177783) {
                return;
            }
            it_34->allocated=0;
            prev_it_35=it_34->prev;
            next_it_36=it_34->next;
            if(            gAllocMem==it_34) {
                gAllocMem=(struct sMemHeader*)next_it_36;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_35) {
                    prev_it_35->next=next_it_36;
                }
                if(                next_it_36) {
                    next_it_36->prev=prev_it_35;
                }
            }
            size_37=it_34->size;
            if(            size_37<2048*2) {
                if(                gHeapPages.mFreeMem[size_37]==((void*)0)) {
                    it_34->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_37]=it_34;
                }
                else {
                    it_34->free_next=gHeapPages.mFreeMem[size_37];
                    gHeapPages.mFreeMem[size_37]=it_34;
                }
            }
            else {
                free(it_34);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_38;
char* __result25__;
    it_38=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
    if(    it_38->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_38);
        exit(2);
    }
    __result25__ = gComeFunResultObject = __result_obj__ = it_38->class_name;
    gComeFunResultObject = (void*)0;
    return __result25__;
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_39;
unsigned long  int* ref_count_40;
unsigned long  int* size2_41;
void* __result26__;
    mem_39=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_40=(unsigned long  int*)mem_39;
    *ref_count_40=0;
    size2_41=(unsigned long  int*)(mem_39+sizeof(unsigned long  int));
    *size2_41=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result26__ = gComeFunResultObject = __result_obj__ = mem_39+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result26__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_42;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_42=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_42);
}

void come_free(void* mem){
unsigned long  int* ref_count_43;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_43=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_43);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result27__;
char* mem_44;
unsigned long  int* size_p_45;
unsigned long  int size_46;
void* result_47;
void* __result28__;
    if(    !block) {
        __result27__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result27__;
    }
    mem_44=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_45=(unsigned long  int*)(mem_44+sizeof(unsigned long  int));
    size_46=*size_p_45-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_47=come_calloc(1,size_46,sname,sline,class_name);
    __builtin___memcpy_chk(result_47,block,size_46,__builtin_object_size(result_47,0));
    __result28__ = gComeFunResultObject = __result_obj__ = result_47;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result29__;
unsigned long  int* ref_count_48;
void* __result30__;
    if(    mem==((void*)0)) {
        __result29__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result29__;
    }
    ref_count_48=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_48)++;
    __result30__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result31__;
unsigned long  int* ref_count_49;
void* __result32__;
    if(    mem==((void*)0)) {
        __result31__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result31__;
    }
    ref_count_49=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_49);
    __result32__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result33__;
unsigned long  int* ref_count_50;
unsigned long  int count_51;
void (*finalizer_52)(void*);
void* __result34__;
void* __result35__;
memset(&finalizer_52, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    ref_count_50=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_50)--;
    }
    count_51=*ref_count_50;
    if(    !no_free&&(count_51<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_52=protocol_fun;
            finalizer_52(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result34__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result34__;
    }
    __result35__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result35__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result36__;
void* __result37__;
unsigned long  int* ref_count_53;
unsigned long  int count_54;
void (*finalizer_55)(void*);
void* __result38__;
void* __result39__;
memset(&finalizer_55, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result36__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result36__;
        }
    }
    if(    mem==((void*)0)) {
        __result37__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    ref_count_53=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_53)--;
    }
    count_54=*ref_count_53;
    if(    !no_free&&(count_54<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_55=protocol_fun;
            finalizer_55(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result38__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result38__;
    }
    __result39__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_56)(void*);
void (*finalizer_57)(void*);
unsigned long  int* ref_count_58;
unsigned long  int count_59;
void (*finalizer_60)(void*);
void (*finalizer_61)(void*);
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
memset(&finalizer_60, 0, sizeof(void (*)(void*)));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_56=protocol_fun;
                finalizer_56(protocol_obj);
            }
            finalizer_57=fun;
            finalizer_57(mem);
        }
    }
    else {
        ref_count_58=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_58)--;
        }
        count_59=*ref_count_58;
        if(        !no_free&&(count_59<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_60=protocol_fun;
                    finalizer_60(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_61=fun;
                    finalizer_61(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_62)(void*);
void (*finalizer_63)(void*);
unsigned long  int* ref_count_64;
unsigned long  int count_65;
void (*finalizer_66)(void*);
void (*finalizer_67)(void*);
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
memset(&finalizer_66, 0, sizeof(void (*)(void*)));
memset(&finalizer_67, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_62=protocol_fun;
                finalizer_62(protocol_obj);
            }
            finalizer_63=fun;
            finalizer_63(mem);
        }
    }
    else {
        ref_count_64=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_64)--;
        }
        count_65=*ref_count_64;
        if(        !no_free&&(count_65<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_66=protocol_fun;
                    finalizer_66(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_67=fun;
                    finalizer_67(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_68)(void*);
unsigned long  int* ref_count_69;
unsigned long  int count_70;
void (*finalizer_71)(void*);
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            finalizer_68=fun;
            finalizer_68(mem);
        }
    }
    else {
        ref_count_69=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_69)--;
        }
        count_70=*ref_count_69;
        if(        !no_free&&(count_70<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_71=fun;
                    finalizer_71(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result40__;
int len_72;
void* __right_value42 = (void*)0;
char* result_73;
char* __result41__;
    if(    str==((void*)0)) {
        __result40__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result40__;
    }
    len_72=strlen(str)+1;
    result_73=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_72)), "/usr/local/include/comelang-pico.h", 3604, "char"));
    __builtin___strncpy_chk(result_73,str,len_72,__builtin_object_size(result_73,((2>1)?(1):(0))));
    __result41__ = gComeFunResultObject = __result_obj__ = result_73;
    /* U13 */result_73 = come_decrement_ref_count2(result_73, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_74;
int i_75;
    found_74=0;
    for(    i_75=0;    i_75<len;    i_75++    ){
        if(        array[i_75]==element) {
            found_74=1;
            break;
        }
    }
    return found_74;
}

char* _Bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
char* __result42__;
void* __right_value44 = (void*)0;
char* __result43__;
    if(    self) {
        __result42__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value43=__builtin_string("true")));
        /* U11 */__right_value43 = come_decrement_ref_count2(__right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result42__;
    }
    else {
        __result43__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value44=__builtin_string("false")));
        /* U11 */__right_value44 = come_decrement_ref_count2(__right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result43__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
char* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value45=xsprintf("%c",self)));
    /* U11 */__right_value45 = come_decrement_ref_count2(__right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
char* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value46=xsprintf("%d",self)));
    /* U11 */__right_value46 = come_decrement_ref_count2(__right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value47 = (void*)0;
char* __result46__;
    __result46__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value47=xsprintf("%d",self)));
    /* U11 */__right_value47 = come_decrement_ref_count2(__right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
char* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value48=xsprintf("%ld",self)));
    /* U11 */__right_value48 = come_decrement_ref_count2(__right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
char* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value49=xsprintf("%ld",self)));
    /* U11 */__right_value49 = come_decrement_ref_count2(__right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value50 = (void*)0;
char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value50=xsprintf("%f",self)));
    /* U11 */__right_value50 = come_decrement_ref_count2(__right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value51=xsprintf("%lf",self)));
    /* U11 */__right_value51 = come_decrement_ref_count2(__right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
char* __result51__;
void* __right_value53 = (void*)0;
char* __result52__;
    if(    self==((void*)0)) {
        __result51__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value52=__builtin_string("")));
        /* U11 */__right_value52 = come_decrement_ref_count2(__right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result51__;
    }
    __result52__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value53=__builtin_string(self)));
    /* U11 */__right_value53 = come_decrement_ref_count2(__right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
char* __result53__;
void* __right_value55 = (void*)0;
char* __result54__;
    if(    self==((void*)0)) {
        __result53__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value54=__builtin_string("")));
        /* U11 */__right_value54 = come_decrement_ref_count2(__right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result53__;
    }
    __result54__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value55=__builtin_string(self)));
    /* U11 */__right_value55 = come_decrement_ref_count2(__right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value56 = (void*)0;
char* __dec_obj11;
struct buffer* __result55__;
    self->size=128;
    __dec_obj11=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3693, "char"));
    /*G*/ __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}

void buffer_force_finalize(struct buffer* self){
    if(    self&&self->buf) {
        /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result58__;
void* __right_value59 = (void*)0;
char* old_buf_77;
int old_len_78;
int new_size_79;
void* __right_value60 = (void*)0;
char* __dec_obj13;
struct buffer* __result59__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result58__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result58__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_77=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3757, "char"));
        __builtin___memcpy_chk(old_buf_77,self->buf,self->size,__builtin_object_size(old_buf_77,0));
        old_len_78=self->len;
        new_size_79=(self->size+size+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_79)), "/usr/local/include/comelang-pico.h", 3761, "char"));
        /*G*/ __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_77,old_len_78,__builtin_object_size(self->buf,0));
        self->buf[old_len_78]=0;
        self->size=new_size_79;
        /* U13 */old_buf_77 = come_decrement_ref_count2(old_buf_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size,__builtin_object_size(self->buf+self->len,0));
    self->len+=size;
    self->buf[self->len]=0;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result59__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result60__;
void* __right_value61 = (void*)0;
char* old_buf_80;
int old_len_81;
int new_size_82;
void* __right_value62 = (void*)0;
char* __dec_obj14;
struct buffer* __result61__;
    if(    self==((void*)0)) {
        __result60__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result60__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_80=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang-pico.h", 3780, "char*"));
        old_len_81=self->len;
        new_size_82=(self->size+10+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_82)), "/usr/local/include/comelang-pico.h", 3784, "char"));
        /*G*/ __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_80,old_len_81,__builtin_object_size(self->buf,0));
        self->buf[old_len_81]=0;
        self->size=new_size_82;
        /* U13 */old_buf_80 = come_decrement_ref_count2(old_buf_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result61__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result62__;
int size_83;
void* __right_value63 = (void*)0;
char* old_buf_84;
int old_len_85;
int new_size_86;
void* __right_value64 = (void*)0;
char* __dec_obj15;
struct buffer* __result63__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result62__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result62__;
    }
    size_83=strlen(mem);
    if(    self->len+size_83+1+1>=self->size) {
        old_buf_84=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3806, "char"));
        __builtin___memcpy_chk(old_buf_84,self->buf,self->size,__builtin_object_size(old_buf_84,0));
        old_len_85=self->len;
        new_size_86=(self->size+size_83+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "/usr/local/include/comelang-pico.h", 3810, "char"));
        /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_84,old_len_85,__builtin_object_size(self->buf,0));
        self->buf[old_len_85]=0;
        self->size=new_size_86;
        /* U13 */old_buf_84 = come_decrement_ref_count2(old_buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size_83,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_83;
    self->buf[self->len]=0;
    __result63__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result63__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
int size_87;
void* __right_value65 = (void*)0;
char* old_buf_88;
int old_len_89;
int new_size_90;
void* __right_value66 = (void*)0;
char* __dec_obj16;
struct buffer* __result65__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result64__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result64__;
    }
    size_87=strlen(mem)+1;
    if(    self->len+size_87+1+1+1>=self->size) {
        old_buf_88=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3830, "char"));
        __builtin___memcpy_chk(old_buf_88,self->buf,self->size,__builtin_object_size(old_buf_88,0));
        old_len_89=self->len;
        new_size_90=(self->size+size_87+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_90)), "/usr/local/include/comelang-pico.h", 3834, "char"));
        /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_88,old_len_89,__builtin_object_size(self->buf,0));
        self->buf[old_len_89]=0;
        self->size=new_size_90;
        /* U13 */old_buf_88 = come_decrement_ref_count2(old_buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem,size_87,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_87;
    self->buf[self->len]=0;
    self->len++;
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result65__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result66__;
int* mem_91;
int size_92;
void* __right_value67 = (void*)0;
char* old_buf_93;
int old_len_94;
int new_size_95;
void* __right_value68 = (void*)0;
char* __dec_obj17;
struct buffer* __result67__;
    if(    self==((void*)0)) {
        __result66__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    mem_91=&value;
    size_92=sizeof(int);
    if(    self->len+size_92+1+1>=self->size) {
        old_buf_93=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3857, "char"));
        __builtin___memcpy_chk(old_buf_93,self->buf,self->size,__builtin_object_size(old_buf_93,0));
        old_len_94=self->len;
        new_size_95=(self->size+size_92+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_95)), "/usr/local/include/comelang-pico.h", 3861, "char"));
        /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_93,old_len_94,__builtin_object_size(self->buf,0));
        self->buf[old_len_94]=0;
        self->size=new_size_95;
        /* U13 */old_buf_93 = come_decrement_ref_count2(old_buf_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_91,size_92,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_92;
    self->buf[self->len]=0;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_96;
int size_97;
void* __right_value69 = (void*)0;
char* old_buf_98;
int old_len_99;
int new_size_100;
void* __right_value70 = (void*)0;
char* __dec_obj18;
struct buffer* __result68__;
    mem_96=&value;
    size_97=sizeof(long);
    if(    self->len+size_97+1+1>=self->size) {
        old_buf_98=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3880, "char"));
        __builtin___memcpy_chk(old_buf_98,self->buf,self->size,__builtin_object_size(old_buf_98,0));
        old_len_99=self->len;
        new_size_100=(self->size+size_97+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_100)), "/usr/local/include/comelang-pico.h", 3884, "char"));
        /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_98,old_len_99,__builtin_object_size(self->buf,0));
        self->buf[old_len_99]=0;
        self->size=new_size_100;
        /* U13 */old_buf_98 = come_decrement_ref_count2(old_buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_96,size_97,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_97;
    self->buf[self->len]=0;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result69__;
short* mem_101;
int size_102;
void* __right_value71 = (void*)0;
char* old_buf_103;
int old_len_104;
int new_size_105;
void* __right_value72 = (void*)0;
char* __dec_obj19;
struct buffer* __result70__;
    if(    self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    mem_101=&value;
    size_102=sizeof(short);
    if(    self->len+size_102+1+1>=self->size) {
        old_buf_103=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 3907, "char"));
        __builtin___memcpy_chk(old_buf_103,self->buf,self->size,__builtin_object_size(old_buf_103,0));
        old_len_104=self->len;
        new_size_105=(self->size+size_102+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_105)), "/usr/local/include/comelang-pico.h", 3911, "char"));
        /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        __builtin___memcpy_chk(self->buf,old_buf_103,old_len_104,__builtin_object_size(self->buf,0));
        self->buf[old_len_104]=0;
        self->size=new_size_105;
        /* U13 */old_buf_103 = come_decrement_ref_count2(old_buf_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __builtin___memcpy_chk(self->buf+self->len,mem_101,size_102,__builtin_object_size(self->buf+self->len,0));
    self->len+=size_102;
    self->buf[self->len]=0;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result71__;
int len_106;
int new_size_107;
void* __right_value73 = (void*)0;
char* __dec_obj20;
int i_108;
struct buffer* __result72__;
    if(    self==((void*)0)) {
        __result71__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    len_106=self->len;
    len_106=(len_106+3)&~3;
    if(    len_106>=self->size) {
        new_size_107=(self->size+1+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_107)), "/usr/local/include/comelang-pico.h", 3935, "char"));
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_107;
    }
    for(    i_108=self->len;    i_108<len_106;    i_108++    ){
        self->buf[i_108]=0;
    }
    self->len=len_106;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct buffer* result_109;
struct buffer* __result73__;
struct buffer* __result74__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3965, "buffer"))));
    if(    self==((void*)0)) {
        __result73__ = gComeFunResultObject = __result_obj__ = result_109;
        /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    buffer_append_str(result_109,self);
    __result74__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct buffer* result_110;
struct buffer* __result75__;
struct buffer* __result76__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 3978, "buffer"))));
    if(    self==((void*)0)) {
        __result75__ = gComeFunResultObject = __result_obj__ = result_110;
        /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    buffer_append_str(result_110,self);
    __result76__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(    self==((void*)0)) {
        return 0;
    }
    else if(    right==((void*)0)) {
        return 0;
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
    if(    self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    self==((void*)0)) {
        return 1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    self==((void*)0)) {
        return 1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value80 = (void*)0;
char* __result79__;
int len_111;
void* __right_value81 = (void*)0;
char* result_112;
char* __result80__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value80=__builtin_string("")));
        /* U11 */__right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    len_111=strlen(self)+strlen(right);
    result_112=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_111+1)), "/usr/local/include/comelang-pico.h", 4205, "char"));
    __builtin___strncpy_chk(result_112,self,len_111+1,__builtin_object_size(result_112,((2>1)?(1):(0))));
    __builtin___strncat_chk(result_112,right,len_111+1,__builtin_object_size(result_112,((2>1)?(1):(0))));
    __result80__ = gComeFunResultObject = __result_obj__ = result_112;
    /* U13 */result_112 = come_decrement_ref_count2(result_112, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
char* __result81__;
int len_113;
void* __right_value83 = (void*)0;
char* result_114;
char* __result82__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value82=__builtin_string("")));
        /* U11 */__right_value82 = come_decrement_ref_count2(__right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    len_113=strlen(self)+strlen(right);
    result_114=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_113+1)), "/usr/local/include/comelang-pico.h", 4220, "char"));
    __builtin___strncpy_chk(result_114,self,len_113+1,__builtin_object_size(result_114,((2>1)?(1):(0))));
    __builtin___strncat_chk(result_114,right,len_113+1,__builtin_object_size(result_114,((2>1)?(1):(0))));
    __result82__ = gComeFunResultObject = __result_obj__ = result_114;
    /* U13 */result_114 = come_decrement_ref_count2(result_114, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value84 = (void*)0;
char* __result83__;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_115;
int i_116;
void* __right_value87 = (void*)0;
char* __result84__;
    if(    self==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value84=__builtin_string("")));
        /* U11 */__right_value84 = come_decrement_ref_count2(__right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    buf_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4233, "buffer"))));
    for(    i_116=0;    i_116<right;    i_116++    ){
        buffer_append_str(buf_115,self);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value87=buffer_to_string(buf_115)));
    /*i*/come_call_finalizer3(buf_115,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value87 = come_decrement_ref_count2(__right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
char* __result85__;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_117;
int i_118;
void* __right_value91 = (void*)0;
char* __result86__;
    if(    self==((void*)0)) {
        __result85__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value88=__builtin_string("")));
        /* U11 */__right_value88 = come_decrement_ref_count2(__right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    buf_117=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4247, "buffer"))));
    for(    i_118=0;    i_118<right;    i_118++    ){
        buffer_append_str(buf_117,self);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value91=buffer_to_string(buf_117)));
    /*i*/come_call_finalizer3(buf_117,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value91 = come_decrement_ref_count2(__right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
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

unsigned int string_get_hash_key(char* value){
int result_119;
char* p_120;
    if(    value==((void*)0)) {
        return 0;
    }
    result_119=0;
    p_120=value;
    while(*p_120) {
        result_119+=(*p_120);
        p_120++;
    }
    return result_119;
}

unsigned int charp_get_hash_key(char* value){
int result_121;
char* p_122;
    if(    value==((void*)0)) {
        return 0;
    }
    result_121=0;
    p_122=value;
    while(*p_122) {
        result_121+=(*p_122);
        p_122++;
    }
    return result_121;
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

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result87__;
void* __right_value92 = (void*)0;
char* __result88__;
    if(    self==((void*)0)) {
        __result87__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value92=__builtin_string(self)));
    /* U11 */__right_value92 = come_decrement_ref_count2(__right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result89__;
void* __right_value93 = (void*)0;
char* __result90__;
    if(    self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value93=__builtin_string(self)));
    /* U11 */__right_value93 = come_decrement_ref_count2(__right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool xiswalpha(int c){
_Bool result_123;
    result_123=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_123;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_124;
    result_124=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_124;
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
_Bool result_125;
    result_125=(c>=32&&c<=126);
    return result_125;
}

_Bool xiswascii(int c){
_Bool result_126;
    result_126=(c>=32&&c<=126);
    return result_126;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
char* __result91__;
int len_127;
void* __right_value95 = (void*)0;
char* result_128;
int i_129;
char* __result92__;
    if(    str==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value94=__builtin_string("")));
        /* U11 */__right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    len_127=strlen(str);
    result_128=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_127+1)), "/usr/local/include/comelang-pico.h", 4464, "char"));
    for(    i_129=0;    i_129<len_127;    i_129++    ){
        result_128[i_129]=str[len_127-i_129-1];
    }
    result_128[len_127]=0;
    __result92__ = gComeFunResultObject = __result_obj__ = result_128;
    /* U13 */result_128 = come_decrement_ref_count2(result_128, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
char* __result93__;
int len_130;
void* __right_value97 = (void*)0;
char* result_131;
int i_132;
char* __result94__;
    if(    str==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value96=__builtin_string("")));
        /* U11 */__right_value96 = come_decrement_ref_count2(__right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    len_130=strlen(str);
    result_131=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_130+1)), "/usr/local/include/comelang-pico.h", 4481, "char"));
    for(    i_132=0;    i_132<len_130;    i_132++    ){
        result_131[i_132]=str[len_130-i_132-1];
    }
    result_131[len_130]=0;
    __result94__ = gComeFunResultObject = __result_obj__ = result_131;
    /* U13 */result_131 = come_decrement_ref_count2(result_131, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
char* __result95__;
int len_133;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result96__;
void* __right_value101 = (void*)0;
char* __result97__;
void* __right_value102 = (void*)0;
char* __result98__;
void* __right_value103 = (void*)0;
char* result_134;
char* __result99__;
    if(    str==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value98=__builtin_string("")));
        /* U11 */__right_value98 = come_decrement_ref_count2(__right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    len_133=strlen(str);
    if(    head<0) {
        head+=len_133;
    }
    if(    tail<0) {
        tail+=len_133+1;
    }
    if(    head>tail) {
        __result96__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value100=string_reverse(((char*)(__right_value99=charp_substring(str,tail,head))))));
        /* U11 */__right_value99 = come_decrement_ref_count2(__right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value100 = come_decrement_ref_count2(__right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_133) {
        tail=len_133;
    }
    if(    head==tail) {
        __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value101=__builtin_string("")));
        /* U11 */__right_value101 = come_decrement_ref_count2(__right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    if(    tail-head+1<1) {
        __result98__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value102=__builtin_string("")));
        /* U11 */__right_value102 = come_decrement_ref_count2(__right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_134=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4526, "char"));
    __builtin___memcpy_chk(result_134,str+head,tail-head,__builtin_object_size(result_134,0));
    result_134[tail-head]=0;
    __result99__ = gComeFunResultObject = __result_obj__ = result_134;
    /* U13 */result_134 = come_decrement_ref_count2(result_134, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
char* __result100__;
int len_135;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result101__;
void* __right_value107 = (void*)0;
char* __result102__;
void* __right_value108 = (void*)0;
char* __result103__;
void* __right_value109 = (void*)0;
char* result_136;
char* __result104__;
    if(    str==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value104=__builtin_string("")));
        /* U11 */__right_value104 = come_decrement_ref_count2(__right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    len_135=strlen(str);
    if(    head<0) {
        head+=len_135;
    }
    if(    tail<0) {
        tail+=len_135+1;
    }
    if(    head>tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value106=string_reverse(((char*)(__right_value105=charp_substring(str,tail,head))))));
        /* U11 */__right_value105 = come_decrement_ref_count2(__right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value106 = come_decrement_ref_count2(__right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_135) {
        tail=len_135;
    }
    if(    head==tail) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value107=__builtin_string("")));
        /* U11 */__right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    if(    tail-head+1<1) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value108=__builtin_string("")));
        /* U11 */__right_value108 = come_decrement_ref_count2(__right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    result_136=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4569, "char"));
    __builtin___memcpy_chk(result_136,str+head,tail-head,__builtin_object_size(result_136,0));
    result_136[tail-head]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = result_136;
    /* U13 */result_136 = come_decrement_ref_count2(result_136, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
char* __result105__;
int len_137;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result106__;
void* __right_value113 = (void*)0;
char* __result107__;
void* __right_value114 = (void*)0;
char* __result108__;
void* __right_value115 = (void*)0;
char* result_138;
char* __result109__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value110=__builtin_string("")));
        /* U11 */__right_value110 = come_decrement_ref_count2(__right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_137=strlen(str);
    if(    head<0) {
        head+=len_137;
    }
    if(    tail<0) {
        tail+=len_137+1;
    }
    if(    head>tail) {
        __result106__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value112=string_reverse(((char*)(__right_value111=charp_substring(str,tail,head))))));
        /* U11 */__right_value111 = come_decrement_ref_count2(__right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value112 = come_decrement_ref_count2(__right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_137) {
        tail=len_137;
    }
    if(    head==tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=__builtin_string("")));
        /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(    tail-head+1<1) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=__builtin_string("")));
        /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4612, "char"));
    __builtin___memcpy_chk(result_138,str+head,tail-head,__builtin_object_size(result_138,0));
    result_138[tail-head]=0;
    __result109__ = gComeFunResultObject = __result_obj__ = result_138;
    /* U13 */result_138 = come_decrement_ref_count2(result_138, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* __result110__;
int len_139;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
char* __result111__;
void* __right_value119 = (void*)0;
char* __result112__;
void* __right_value120 = (void*)0;
char* __result113__;
void* __right_value121 = (void*)0;
char* result_140;
char* __result114__;
    if(    str==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value116=__builtin_string("")));
        /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    len_139=strlen(str);
    if(    head<0) {
        head+=len_139;
    }
    if(    tail<0) {
        tail+=len_139+1;
    }
    if(    head>tail) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=string_reverse(((char*)(__right_value117=charp_substring(str,tail,head))))));
        /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_139) {
        tail=len_139;
    }
    if(    head==tail) {
        __result112__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("")));
        /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    if(    tail-head+1<1) {
        __result113__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value120=__builtin_string("")));
        /* U11 */__right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    result_140=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang-pico.h", 4655, "char"));
    __builtin___memcpy_chk(result_140,str+head,tail-head,__builtin_object_size(result_140,0));
    result_140[tail-head]=0;
    __result114__ = gComeFunResultObject = __result_obj__ = result_140;
    /* U13 */result_140 = come_decrement_ref_count2(result_140, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result115__;
va_list args_141;
char* result_142;
int len_143;
void* __right_value123 = (void*)0;
char* __result116__;
void* __right_value124 = (void*)0;
char* result2_144;
char* __result117__;
memset(&args_141, 0, sizeof(va_list));
result_142 = (void*)0;
    if(    msg==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=__builtin_string("")));
        /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    __builtin_va_start(args_141,msg);
    len_143=vasprintf(&result_142,msg,args_141);
    __builtin_va_end(args_141);
    if(    len_143<0) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=__builtin_string("")));
        /* U11 */__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result2_144=(char*)come_increment_ref_count(__builtin_string(result_142));
    free(result_142);
    __result117__ = gComeFunResultObject = __result_obj__ = result2_144;
    /* U13 */result2_144 = come_decrement_ref_count2(result2_144, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result118__;
int len_145;
void* __right_value126 = (void*)0;
char* __result119__;
void* __right_value127 = (void*)0;
char* __result120__;
void* __right_value128 = (void*)0;
char* sub_str_146;
void* __right_value129 = (void*)0;
char* __result121__;
    if(    str==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=__builtin_string("")));
        /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    len_145=strlen(str);
    if(    strcmp(str,"")==0) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value126=__builtin_string(str)));
        /* U11 */__right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    head<0) {
        head+=len_145;
    }
    if(    tail<0) {
        tail+=len_145+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value127=__builtin_string(str)));
        /* U11 */__right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    if(    tail>=len_145) {
        tail=len_145;
    }
    sub_str_146=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    __builtin___memcpy_chk(str+head,sub_str_146,string_length(sub_str_146)+1,__builtin_object_size(str+head,0));
    __result121__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value129=__builtin_string(str)));
    /* U13 */sub_str_146 = come_decrement_ref_count2(sub_str_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
char* __result122__;
int len_147;
void* __right_value131 = (void*)0;
char* __result123__;
void* __right_value132 = (void*)0;
char* __result124__;
void* __right_value133 = (void*)0;
char* sub_str_148;
void* __right_value134 = (void*)0;
char* __result125__;
    if(    str==((void*)0)) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value130=__builtin_string("")));
        /* U11 */__right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    len_147=strlen(str);
    if(    strcmp(str,"")==0) {
        __result123__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value131=__builtin_string(str)));
        /* U11 */__right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    if(    head<0) {
        head+=len_147;
    }
    if(    tail<0) {
        tail+=len_147+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=__builtin_string(str)));
        /* U11 */__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    if(    tail>=len_147) {
        tail=len_147;
    }
    sub_str_148=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    __builtin___memcpy_chk(str+head,sub_str_148,string_length(sub_str_148)+1,__builtin_object_size(str+head,0));
    __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=__builtin_string(str)));
    /* U13 */sub_str_148 = come_decrement_ref_count2(sub_str_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result127__;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* result_151;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* str_152;
int i_153;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1charph* __result129__;
    if(    self==((void*)0)) {
        __result127__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4766, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    result_151=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4769, "list$1charph"))));
    str_152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4771, "buffer"))));
    for(    i_153=0;    i_153<charp_length(self);    i_153++    ){
        if(        self[i_153]==c) {
            list$1charph_push_back(result_151,(char*)come_increment_ref_count(__builtin_string(str_152->buf)));
            buffer_reset(str_152);
        }
        else {
            buffer_append_char(str_152,self[i_153]);
        }
    }
    if(    buffer_length(str_152)!=0) {
        list$1charph_push_back(result_151,(char*)come_increment_ref_count(__builtin_string(str_152->buf)));
    }
    __result129__ = gComeFunResultObject = __result_obj__ = result_151;
    /*i*/come_call_finalizer3(result_151,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_152,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result126__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_149;
struct list_item$1charph* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*i*/come_call_finalizer3(prev_it_150,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj21;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj21=self->item;
            /*G*/ __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_154;
char* __dec_obj22;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_155;
char* __dec_obj23;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_156;
char* __dec_obj24;
struct list$1charph* __result128__;
    if(    self->len==0) {
        litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1charph"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        __dec_obj22=litem_154->item;
        litem_154->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1charph"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        __dec_obj23=litem_155->item;
        litem_155->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1charph"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        __dec_obj24=litem_156->item;
        litem_156->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1charph* __result130__;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1charph* result_157;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* str_158;
int i_159;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct list$1charph* __result131__;
    if(    self==((void*)0)) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value147=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4792, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value147,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    result_157=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 4795, "list$1charph"))));
    str_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 4797, "buffer"))));
    for(    i_159=0;    i_159<charp_length(self);    i_159++    ){
        if(        self[i_159]==c) {
            list$1charph_push_back(result_157,(char*)come_increment_ref_count(__builtin_string(str_158->buf)));
            buffer_reset(str_158);
        }
        else {
            buffer_append_char(str_158,self[i_159]);
        }
    }
    if(    buffer_length(str_158)!=0) {
        list$1charph_push_back(result_157,(char*)come_increment_ref_count(__builtin_string(str_158->buf)));
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_157;
    /*i*/come_call_finalizer3(result_157,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(str_158,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value154 = (void*)0;
char* __result132__;
char* p_160;
void* __right_value155 = (void*)0;
char* __result133__;
void* __right_value156 = (void*)0;
char* __result134__;
void* __right_value157 = (void*)0;
char* __result135__;
    if(    path==((void*)0)) {
        __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=__builtin_string("")));
        /* U11 */__right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    p_160=path+strlen(path);
    while(p_160>=path) {
        if(        *p_160==47) {
            break;
        }
        else {
            p_160--;
        }
    }
    if(    p_160<path) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string(path)));
        /* U11 */__right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    else {
        __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value156=__builtin_string(p_160+1)));
        /* U11 */__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value157=__builtin_string("")));
    /* U11 */__right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value158 = (void*)0;
char* __result136__;
void* __right_value159 = (void*)0;
char* path2_161;
char* p_162;
void* __right_value160 = (void*)0;
char* __result137__;
void* __right_value161 = (void*)0;
char* __result138__;
void* __right_value162 = (void*)0;
char* __result139__;
    if(    path==((void*)0)) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string("")));
        /* U11 */__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    path2_161=(char*)come_increment_ref_count(xbasename(path));
    p_162=path2_161+strlen(path2_161);
    while(p_162>=path2_161) {
        if(        *p_162==46) {
            break;
        }
        else {
            p_162--;
        }
    }
    if(    p_162<path2_161) {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value160=__builtin_string(path2_161)));
        /* U13 */path2_161 = come_decrement_ref_count2(path2_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    else {
        __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=string_substring(path2_161,0,p_162-path2_161)));
        /* U13 */path2_161 = come_decrement_ref_count2(path2_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value162=__builtin_string("")));
    /* U13 */path2_161 = come_decrement_ref_count2(path2_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
char* __result140__;
char* p_163;
void* __right_value164 = (void*)0;
char* __result141__;
void* __right_value165 = (void*)0;
char* __result142__;
void* __right_value166 = (void*)0;
char* __result143__;
    if(    path==((void*)0)) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string("")));
        /* U11 */__right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    p_163=path+strlen(path);
    while(p_163>=path) {
        if(        *p_163==46) {
            break;
        }
        else {
            p_163--;
        }
    }
    if(    p_163<path) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=__builtin_string(path)));
        /* U11 */__right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    else {
        __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string(p_163+1)));
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("")));
    /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result144__;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct buffer* buf_164;
int size_166;
void* __right_value170 = (void*)0;
char* __result145__;
    if(    f==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string("")));
        /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    buf_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5064, "buffer"))));
    while(1) {
        char buf2_165[1024];
        memset(&buf2_165, 0, sizeof(char)        *(1024)        );
        size_166=fread(buf2_165,1,1024,f);
        buffer_append(buf_164,buf2_165,size_166);
        if(        size_166<1024) {
            break;
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=buffer_to_string(buf_164)));
    /*i*/come_call_finalizer3(buf_164,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_167;
    if(    f==((void*)0)) {
        return -1;
    }
    result_167=fclose(f);
    if(    result_167<0) {
        return result_167;
    }
    return result_167;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result146__;
va_list args_169;
int result_170;
struct __sFILE* __result147__;
struct __sFILE* __result148__;
memset(&args_169, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    char msg2_168[1024*2*2*2];
    memset(&msg2_168, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_169,msg);
    __builtin___vsnprintf_chk(msg2_168,1024*2*2*2,0,__builtin_object_size(msg2_168,((2>1)?(1):(0))),msg,args_169);
    __builtin_va_end(args_169);
    result_170=fprintf(f,"%s",msg2_168);
    if(    result_170<0) {
        __result147__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    __result148__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result148__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_171;
int result_172;
int result2_173;
f_171 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_171=fopen(file_name,"a");
    }
    else {
        f_171=fopen(file_name,"w");
    }
    if(    f_171==((void*)0)) {
        return -1;
    }
    result_172=fwrite(self,strlen(self),1,f_171);
    if(    result_172<0) {
        return result_172;
    }
    result2_173=fclose(f_171);
    if(    result2_173<0) {
        return result2_173;
    }
    return result_172;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_174;
int result_175;
int result2_176;
f_174 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_174=fopen(file_name,"a");
    }
    else {
        f_174=fopen(file_name,"w");
    }
    if(    f_174==((void*)0)) {
        return -1;
    }
    result_175=fwrite(self,strlen(self),1,f_174);
    if(    result_175<0) {
        return result_175;
    }
    result2_176=fclose(f_174);
    if(    result2_176<0) {
        return result2_176;
    }
    return result_175;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
char* __result149__;
struct __sFILE* f_177;
void* __right_value172 = (void*)0;
char* __result150__;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct buffer* buf_178;
int size_180;
void* __right_value175 = (void*)0;
char* result_181;
int result2_182;
void* __right_value176 = (void*)0;
char* __result151__;
char* __result152__;
    if(    file_name==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string("")));
        /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    f_177=fopen(file_name,"r");
    if(    f_177==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value172=__builtin_string("")));
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    buf_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5204, "buffer"))));
    while(1) {
        char buf2_179[1024];
        memset(&buf2_179, 0, sizeof(char)        *(1024)        );
        size_180=fread(buf2_179,1,1024,f_177);
        buffer_append(buf_178,buf2_179,size_180);
        if(        size_180<1024) {
            break;
        }
    }
    result_181=(char*)come_increment_ref_count(buffer_to_string(buf_178));
    result2_182=fclose(f_177);
    if(    result2_182<0) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value176=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_178,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_181 = come_decrement_ref_count2(result_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    __result152__ = gComeFunResultObject = __result_obj__ = result_181;
    /*i*/come_call_finalizer3(buf_178,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_181 = come_decrement_ref_count2(result_181, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
char* __result153__;
struct __sFILE* f_183;
void* __right_value178 = (void*)0;
char* __result154__;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct buffer* buf_184;
int size_186;
void* __right_value181 = (void*)0;
char* result_187;
int result2_188;
void* __right_value182 = (void*)0;
char* __result155__;
char* __result156__;
    if(    file_name==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=__builtin_string("")));
        /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    f_183=fopen(file_name,"r");
    if(    f_183==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value178=__builtin_string("")));
        /* U11 */__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    buf_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5241, "buffer"))));
    while(1) {
        char buf2_185[1024];
        memset(&buf2_185, 0, sizeof(char)        *(1024)        );
        size_186=fread(buf2_185,1,1024,f_183);
        buffer_append(buf_184,buf2_185,size_186);
        if(        size_186<1024) {
            break;
        }
    }
    result_187=(char*)come_increment_ref_count(buffer_to_string(buf_184));
    result2_188=fclose(f_183);
    if(    result2_188<0) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value182=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    __result156__ = gComeFunResultObject = __result_obj__ = result_187;
    /*i*/come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct list$1charph* result_189;
struct list$1charph* __result157__;
void* __right_value185 = (void*)0;
struct list$1charph* __result158__;
    result_189=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang-pico.h", 5268, "list$1charph"))));
    if(    f==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = result_189;
        /*i*/come_call_finalizer3(result_189,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    while(1) {
        char buf_190[1024];
        memset(&buf_190, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_190,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_189,(char*)come_increment_ref_count(__builtin_string(buf_190)));
    }
    __result158__ = gComeFunResultObject = __result_obj__ = result_189;
    /*i*/come_call_finalizer3(result_189,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_191;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_191=fopen(path,mode);
    if(    f_191) {
        block(parent,f_191);
        fclose(f_191);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
char* __result159__;
void* __right_value187 = (void*)0;
char* __result160__;
    if(    self==((void*)0)) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("")));
        /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    puts(self);
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value187=__builtin_string(self)));
    /* U11 */__right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
char* __result161__;
void* __right_value189 = (void*)0;
char* __result162__;
    if(    self==((void*)0)) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value188=__builtin_string("")));
        /* U11 */__right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    printf("%s",self);
    __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string(self)));
    /* U11 */__right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value190 = (void*)0;
char* __result163__;
char* msg2_192;
va_list args_193;
void* __right_value191 = (void*)0;
char* __result164__;
msg2_192 = (void*)0;
memset(&args_193, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string("")));
        /* U11 */__right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    __builtin_va_start(args_193,self);
    vasprintf(&msg2_192,self,args_193);
    __builtin_va_end(args_193);
    printf("%s",msg2_192);
    free(msg2_192);
    __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value191=__builtin_string(self)));
    /* U11 */__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
char* __result165__;
char* msg2_194;
va_list args_195;
void* __right_value193 = (void*)0;
char* __result166__;
msg2_194 = (void*)0;
memset(&args_195, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string("")));
        /* U11 */__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    __builtin_va_start(args_195,self);
    vasprintf(&msg2_194,self,args_195);
    __builtin_va_end(args_195);
    printf("%s",msg2_194);
    free(msg2_194);
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string(self)));
    /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
char* __result167__;
void* __right_value195 = (void*)0;
char* __result168__;
    if(    self==((void*)0)) {
        __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string("")));
        /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    puts(self);
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value195=__builtin_string(self)));
    /* U11 */__right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_196;
    for(    i_196=0;    i_196<self;    i_196++    ){
        block(parent,i_196);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result169__;
    self->value=value;
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void integer_finalize(struct integer* self){
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* _Bool_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct integer* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value197=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5435, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value197,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

struct integer* char_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct integer* __result171__;
    __result171__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value199=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5440, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value199,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

struct integer* short_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct integer* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value201=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5445, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value201,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

struct integer* int_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct integer* __result173__;
    __result173__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value203=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5450, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value203,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct integer* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((struct integer*)(__right_value205=integer_initialize((struct integer*)come_increment_ref_count((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "/usr/local/include/comelang-pico.h", 5455, "integer")),self)));
    /*g*/come_call_finalizer3(__right_value205,integer_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return !integer_operator_equals(self,right);
}

int integer_operator_add(struct integer* left, struct integer* right){
    return left->value+right->value;
}

int integer_operator_sub(struct integer* left, struct integer* right){
    return left->value-right->value;
}

int integer_operator_mult(struct integer* left, struct integer* right){
    return left->value*right->value;
}

int integer_operator_div(struct integer* left, struct integer* right){
    return left->value/right->value;
}

int integer_operator_mod(struct integer* left, struct integer* right){
    return left->value%right->value;
}

int integer_operator_lshift(struct integer* left, struct integer* right){
    return left->value<<right->value;
}

int integer_operator_rshift(struct integer* left, struct integer* right){
    return left->value>>right->value;
}

int integer_operator_gteq(struct integer* left, struct integer* right){
    return left->value>=right->value;
}

int integer_operator_lteq(struct integer* left, struct integer* right){
    return left->value<=right->value;
}

int integer_operator_lt(struct integer* left, struct integer* right){
    return left->value<right->value;
}

int integer_operator_gt(struct integer* left, struct integer* right){
    return left->value>right->value;
}

int integer_operator_and(struct integer* left, struct integer* right){
    return left->value&right->value;
}

int integer_operator_xor(struct integer* left, struct integer* right){
    return left->value^right->value;
}

int integer_operator_or(struct integer* left, struct integer* right){
    return left->value|right->value;
}

char* integer_to_string(struct integer* self){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=long_to_string(self->value)));
    /* U11 */__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

struct floating* floating_initialize(struct floating* self, double value){
void* __result_obj__=(void*)0;
struct floating* __result176__;
    self->value=value;
    __result176__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,floating_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static void floating_finalize(struct floating* self){
}

double floating_to_double(struct floating* self){
    return self->value;
}

int floating_compare(struct floating* left, struct floating* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

struct floating* float_to_floating(float self){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct floating* __result177__;
    __result177__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value208=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5595, "floating")),self)));
    /*g*/come_call_finalizer3(__right_value208,floating_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

struct floating* double_to_floating(double self){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct floating* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((struct floating*)(__right_value210=floating_initialize((struct floating*)come_increment_ref_count((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "/usr/local/include/comelang-pico.h", 5600, "floating")),self)));
    /*g*/come_call_finalizer3(__right_value210,floating_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

_Bool floating_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_not_equals(struct floating* self, struct floating* right){
    return !floating_operator_equals(self,right);
}

int floating_operator_add(struct floating* left, struct floating* right){
    return left->value+right->value;
}

int floating_operator_sub(struct floating* left, struct floating* right){
    return left->value-right->value;
}

int floating_operator_mult(struct floating* left, struct floating* right){
    return left->value*right->value;
}

int floating_operator_div(struct floating* left, struct floating* right){
    return left->value/right->value;
}

int floating_operator_gteq(struct floating* left, struct floating* right){
    return left->value>=right->value;
}

int floating_operator_lteq(struct floating* left, struct floating* right){
    return left->value<=right->value;
}

int floating_operator_lt(struct floating* left, struct floating* right){
    return left->value<right->value;
}

int floating_operator_gt(struct floating* left, struct floating* right){
    return left->value>right->value;
}

char* floating_to_string(struct floating* self){
void* __result_obj__=(void*)0;
void* __right_value211 = (void*)0;
char* __result179__;
    __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value211=double_to_string(self->value)));
    /* U11 */__right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return 0;
}

struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct buffer* buf_197;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct smart_pointer$1char* __result180__;
    buf_197=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5727, "buffer"))));
    buffer_append(buf_197,(char*)self,sizeof(char)*len);
    __result180__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value215=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang-pico.h", 5729, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_197))));
    /*i*/come_call_finalizer3(buf_197,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value215,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct buffer* buf_198;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct smart_pointer$1charp* __result182__;
    buf_198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5734, "buffer"))));
    buffer_append(buf_198,(char*)self,sizeof(char*)*len);
    __result182__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value219=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang-pico.h", 5736, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_198))));
    /*i*/come_call_finalizer3(buf_198,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value219,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1charp* __result181__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct buffer* buf_199;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct smart_pointer$1short* __result183__;
    buf_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5741, "buffer"))));
    buffer_append(buf_199,(char*)self,sizeof(short)*len);
    __result183__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value223=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang-pico.h", 5743, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_199))));
    /*i*/come_call_finalizer3(buf_199,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value223,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct buffer* buf_200;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct smart_pointer$1int* __result184__;
    buf_200=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5748, "buffer"))));
    buffer_append(buf_200,(char*)self,sizeof(int)*len);
    __result184__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value227=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang-pico.h", 5750, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_200))));
    /*i*/come_call_finalizer3(buf_200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value227,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct buffer* buf_201;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct smart_pointer$1long* __result185__;
    buf_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5755, "buffer"))));
    buffer_append(buf_201,(char*)self,sizeof(long)*len);
    __result185__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value231=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang-pico.h", 5757, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_201))));
    /*i*/come_call_finalizer3(buf_201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value231,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* buf_202;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct smart_pointer$1float* __result187__;
    buf_202=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5762, "buffer"))));
    buffer_append(buf_202,(char*)self,sizeof(float)*len);
    __result187__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value235=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang-pico.h", 5764, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_202))));
    /*i*/come_call_finalizer3(buf_202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value235,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj27;
struct smart_pointer$1float* __result186__;
    __dec_obj27=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj28;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj28=self->memory;
            come_call_finalizer3(__dec_obj28,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct buffer* buf_203;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct smart_pointer$1double* __result189__;
    buf_203=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang-pico.h", 5769, "buffer"))));
    buffer_append(buf_203,(char*)self,sizeof(double)*len);
    __result189__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value239=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang-pico.h", 5771, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_203))));
    /*i*/come_call_finalizer3(buf_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value239,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj29;
struct smart_pointer$1double* __result188__;
    __dec_obj29=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj29,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result188__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj30;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj30=self->memory;
            come_call_finalizer3(__dec_obj30,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1char* __result192__;
    __result192__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value244=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang-pico.h", 5776, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value244,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_204;
struct list$1char* __result191__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1char_push_back(self,values[i_204]);
    }
    __result191__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
struct list_item$1char* litem_205;
void* __right_value242 = (void*)0;
struct list_item$1char* litem_206;
void* __right_value243 = (void*)0;
struct list_item$1char* litem_207;
struct list$1char* __result190__;
    if(    self->len==0) {
        litem_205=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value241=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1char"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value242=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1char"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value243=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1char"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result190__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_208;
struct list_item$1char* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1charp* __result195__;
    __result195__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value249=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang-pico.h", 5781, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value249,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_210;
struct list$1charp* __result194__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1charp_push_back(self,values[i_210]);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
struct list_item$1charp* litem_211;
void* __right_value247 = (void*)0;
struct list_item$1charp* litem_212;
void* __right_value248 = (void*)0;
struct list_item$1charp* litem_213;
struct list$1charp* __result193__;
    if(    self->len==0) {
        litem_211=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value246=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1charp"))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value247=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1charp"))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value248=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1charp"))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_214;
struct list_item$1charp* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        /*i*/come_call_finalizer3(prev_it_215,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1short* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value254=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang-pico.h", 5786, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value254,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_216;
struct list$1short* __result197__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1short_push_back(self,values[i_216]);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct list_item$1short* litem_217;
void* __right_value252 = (void*)0;
struct list_item$1short* litem_218;
void* __right_value253 = (void*)0;
struct list_item$1short* litem_219;
struct list$1short* __result196__;
    if(    self->len==0) {
        litem_217=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value251=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1short"))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value252=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1short"))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value253=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1short"))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_220;
struct list_item$1short* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        /*i*/come_call_finalizer3(prev_it_221,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1int* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value259=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang-pico.h", 5791, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value259,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_222;
struct list$1int* __result200__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        list$1int_push_back(self,values[i_222]);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1int* litem_223;
void* __right_value257 = (void*)0;
struct list_item$1int* litem_224;
void* __right_value258 = (void*)0;
struct list_item$1int* litem_225;
struct list$1int* __result199__;
    if(    self->len==0) {
        litem_223=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value256=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1int"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value257=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1int"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value258=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1int"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_226;
struct list_item$1int* prev_it_227;
    it_226=self->head;
    while(it_226!=((void*)0)) {
        prev_it_227=it_226;
        it_226=it_226->next;
        /*i*/come_call_finalizer3(prev_it_227,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1long* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value264=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang-pico.h", 5796, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value264,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_228;
struct list$1long* __result203__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_228=0;    i_228<num_value;    i_228++    ){
        list$1long_push_back(self,values[i_228]);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1long* litem_229;
void* __right_value262 = (void*)0;
struct list_item$1long* litem_230;
void* __right_value263 = (void*)0;
struct list_item$1long* litem_231;
struct list$1long* __result202__;
    if(    self->len==0) {
        litem_229=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value261=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1long"))));
        litem_229->prev=((void*)0);
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail=litem_229;
        self->head=litem_229;
    }
    else if(    self->len==1) {
        litem_230=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value262=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1long"))));
        litem_230->prev=self->head;
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail=litem_230;
        self->head->next=litem_230;
    }
    else {
        litem_231=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value263=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1long"))));
        litem_231->prev=self->tail;
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail->next=litem_231;
        self->tail=litem_231;
    }
    self->len++;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_232;
struct list_item$1long* prev_it_233;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        /*i*/come_call_finalizer3(prev_it_233,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1float* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value269=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang-pico.h", 5801, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value269,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_234;
struct list$1float* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_234=0;    i_234<num_value;    i_234++    ){
        list$1float_push_back(self,values[i_234]);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1float* litem_235;
void* __right_value267 = (void*)0;
struct list_item$1float* litem_236;
void* __right_value268 = (void*)0;
struct list_item$1float* litem_237;
struct list$1float* __result205__;
    if(    self->len==0) {
        litem_235=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value266=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1float"))));
        litem_235->prev=((void*)0);
        litem_235->next=((void*)0);
        litem_235->item=item;
        self->tail=litem_235;
        self->head=litem_235;
    }
    else if(    self->len==1) {
        litem_236=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value267=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1float"))));
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        litem_236->item=item;
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        litem_237=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value268=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1float"))));
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_238;
struct list_item$1float* prev_it_239;
    it_238=self->head;
    while(it_238!=((void*)0)) {
        prev_it_239=it_238;
        it_238=it_238->next;
        /*i*/come_call_finalizer3(prev_it_239,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1double* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value274=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang-pico.h", 5806, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value274,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_240;
struct list$1double* __result209__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_240=0;    i_240<num_value;    i_240++    ){
        list$1double_push_back(self,values[i_240]);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1double* litem_241;
void* __right_value272 = (void*)0;
struct list_item$1double* litem_242;
void* __right_value273 = (void*)0;
struct list_item$1double* litem_243;
struct list$1double* __result208__;
    if(    self->len==0) {
        litem_241=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value271=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 195, "list_item$1double"))));
        litem_241->prev=((void*)0);
        litem_241->next=((void*)0);
        litem_241->item=item;
        self->tail=litem_241;
        self->head=litem_241;
    }
    else if(    self->len==1) {
        litem_242=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value272=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 205, "list_item$1double"))));
        litem_242->prev=self->head;
        litem_242->next=((void*)0);
        litem_242->item=item;
        self->tail=litem_242;
        self->head->next=litem_242;
    }
    else {
        litem_243=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value273=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang-pico.h", 215, "list_item$1double"))));
        litem_243->prev=self->tail;
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail->next=litem_243;
        self->tail=litem_243;
    }
    self->len++;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_244;
struct list_item$1double* prev_it_245;
    it_244=self->head;
    while(it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*i*/come_call_finalizer3(prev_it_245,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
void* __right_value277 = (void*)0;
struct vector$1char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value277=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang-pico.h", 5811, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value277,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct vector$1char* __result211__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value276=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "char")));
    __builtin___memcpy_chk(self->items,values,sizeof(char)*self->len,__builtin_object_size(self->items,0));
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value280 = (void*)0;
struct vector$1charp* __result214__;
    __result214__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value280=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang-pico.h", 5816, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value280,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct vector$1charp* __result213__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value279=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "char*")));
    __builtin___memcpy_chk(self->items,values,sizeof(char*)*self->len,__builtin_object_size(self->items,0));
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_247;
    if(    0) {
        for(        i_247=0;        i_247<self->len;        i_247++        ){
            /* U13 */self->items[i_247] = come_decrement_ref_count2(self->items[i_247], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
void* __right_value283 = (void*)0;
struct vector$1short* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value283=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang-pico.h", 5821, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value283,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct vector$1short* __result215__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value282=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "short")));
    __builtin___memcpy_chk(self->items,values,sizeof(short)*self->len,__builtin_object_size(self->items,0));
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_248;
    if(    0) {
        for(        i_248=0;        i_248<self->len;        i_248++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
void* __right_value286 = (void*)0;
struct vector$1int* __result218__;
    __result218__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value286=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang-pico.h", 5826, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value286,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct vector$1int* __result217__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value285=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "int")));
    __builtin___memcpy_chk(self->items,values,sizeof(int)*self->len,__builtin_object_size(self->items,0));
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_249;
    if(    0) {
        for(        i_249=0;        i_249<self->len;        i_249++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
void* __right_value289 = (void*)0;
struct vector$1long* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value289=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang-pico.h", 5831, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value289,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct vector$1long* __result219__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value288=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "long")));
    __builtin___memcpy_chk(self->items,values,sizeof(long)*self->len,__builtin_object_size(self->items,0));
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_250;
    if(    0) {
        for(        i_250=0;        i_250<self->len;        i_250++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
void* __right_value292 = (void*)0;
struct vector$1float* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value292=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang-pico.h", 5836, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value292,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct vector$1float* __result221__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value291=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "float")));
    __builtin___memcpy_chk(self->items,values,sizeof(float)*self->len,__builtin_object_size(self->items,0));
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
void* __right_value295 = (void*)0;
struct vector$1double* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value295=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang-pico.h", 5841, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value295,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct vector$1double* __result223__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value294=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang-pico.h", 989, "double")));
    __builtin___memcpy_chk(self->items,values,sizeof(double)*self->len,__builtin_object_size(self->items,0));
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_252;
    if(    0) {
        for(        i_252=0;        i_252<self->len;        i_252++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_253;
int i_254;
    result_253=0;
    for(    i_254=0;    i_254<len;    i_254++    ){
        if(        strncmp(self[i_254],str,strlen(self[i_254]))==0) {
            result_253=1;
            break;
        }
    }
    return result_253;
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

char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=xsprintf(msg,self)));
    /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
char* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value297=xsprintf(msg,self)));
    /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value298=xsprintf(msg,self)));
    /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

int fun(){
    return 3;
}

int main(){
int __result228__;
    come_heap_init(0, 0, 0);
    const unsigned int LED_PIN_255=25;
    gpio_init(LED_PIN_255);
    gpio_set_dir(LED_PIN_255,1);
    while(1) {
        gpio_put(LED_PIN_255,1);
        sleep_ms(500);
        gpio_put(LED_PIN_255,0);
        sleep_ms(500);
    }
    __result228__ = 0;
    come_heap_final();
    return __result228__;
}

