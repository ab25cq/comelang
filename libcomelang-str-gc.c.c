// source head
typedef unsigned long unsigned  int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long  long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long unsigned  int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long unsigned  int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long unsigned  int);
    long (*write)(void*,const char*,unsigned long unsigned  int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef void* any;
typedef char* string;
extern void* wildcard;
extern _Bool gComeGCLib;
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
    short short* p;
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
    short short item;
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
    short short* items;
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
struct integer
{
    long value;
};
struct floating
{
    double value;
};
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
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long unsigned  int flags;
    void* study_data;
    unsigned long unsigned  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long unsigned  int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(unsigned long unsigned  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long unsigned  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long unsigned  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long unsigned  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef unsigned int wint_t;
typedef unsigned long unsigned  int wctype_t;
struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};
typedef struct __mbstate_t mbstate_t;
struct tm;
typedef unsigned int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};
struct anonymous_typeX4
{
    long  long __ll;
    long  double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long unsigned  int GC_word;
typedef long GC_signed_word;
extern unsigned long unsigned  int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long unsigned  int);
extern void* (*GC_oom_fn)(unsigned long unsigned  int);
typedef void (*GC_on_heap_resize_proc)(unsigned long unsigned  int);
extern void (*GC_on_heap_resize)(unsigned long unsigned  int);
enum anonymous_typeY5 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long unsigned  int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long unsigned  int GC_free_space_divisor;
extern unsigned long unsigned  int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long unsigned  int GC_time_limit;
struct GC_timeval_s
{
    unsigned long unsigned  int tv_ms;
    unsigned long unsigned  int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long unsigned  int heapsize_full;
    unsigned long unsigned  int free_bytes_full;
    unsigned long unsigned  int unmapped_bytes;
    unsigned long unsigned  int bytes_allocd_since_gc;
    unsigned long unsigned  int allocd_bytes_before_gc;
    unsigned long unsigned  int non_gc_bytes;
    unsigned long unsigned  int gc_no;
    unsigned long unsigned  int markers_m1;
    unsigned long unsigned  int bytes_reclaimed_since_gc;
    unsigned long unsigned  int reclaimed_bytes_before_gc;
    unsigned long unsigned  int expl_freed_bytes_since_gc;
    unsigned long unsigned  int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long unsigned  int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long unsigned  int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long unsigned  int);

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);
struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);
int fclose(struct _IO_FILE* anonymous_var_nameX6);
int remove(const char* anonymous_var_nameX7);
int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);
int feof(struct _IO_FILE* anonymous_var_nameX10);
int ferror(struct _IO_FILE* anonymous_var_nameX11);
int fflush(struct _IO_FILE* anonymous_var_nameX12);
void clearerr(struct _IO_FILE* anonymous_var_nameX13);
int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);
long ftell(struct _IO_FILE* anonymous_var_nameX17);
void rewind(struct _IO_FILE* anonymous_var_nameX18);
int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);
int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);
unsigned long unsigned  int fread(void* anonymous_var_nameX23, unsigned long unsigned  int anonymous_var_nameX24, unsigned long unsigned  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long unsigned  int fwrite(const void* anonymous_var_nameX27, unsigned long unsigned  int anonymous_var_nameX28, unsigned long unsigned  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
int fgetc(struct _IO_FILE* anonymous_var_nameX31);
int getc(struct _IO_FILE* anonymous_var_nameX32);
int getchar();
int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);
int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);
int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);
int putchar(int anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);
int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);
int puts(const char* anonymous_var_nameX45);
int printf(const char* anonymous_var_nameX46, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);
int snprintf(char* anonymous_var_nameX51, unsigned long unsigned  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long unsigned  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long unsigned  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long unsigned  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long unsigned  int* anonymous_var_nameX91);
struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);
struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int pclose(struct _IO_FILE* anonymous_var_nameX96);
int fileno(struct _IO_FILE* anonymous_var_nameX97);
int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
long ftello(struct _IO_FILE* anonymous_var_nameX101);
int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);
int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
void flockfile(struct _IO_FILE* anonymous_var_nameX107);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);
void funlockfile(struct _IO_FILE* anonymous_var_nameX109);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);
int putchar_unlocked(int anonymous_var_nameX113);
long getdelim(char** anonymous_var_nameX114, unsigned long unsigned  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long unsigned  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long unsigned  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long unsigned  int fread_unlocked(void* anonymous_var_nameX137, unsigned long unsigned  int anonymous_var_nameX138, unsigned long unsigned  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long unsigned  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long unsigned  int anonymous_var_nameX142, unsigned long unsigned  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long unsigned  int* anonymous_var_nameX153);
int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);
int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);
int atoi(const char* anonymous_var_nameX177);
long atol(const char* anonymous_var_nameX178);
long long atoll(const char* anonymous_var_nameX179);
double atof(const char* anonymous_var_nameX180);
float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);
double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);
long  double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long unsigned  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long unsigned  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long unsigned  int anonymous_var_nameX200);
void* calloc(unsigned long unsigned  int anonymous_var_nameX201, unsigned long unsigned  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long unsigned  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long unsigned  int anonymous_var_nameX206, unsigned long unsigned  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long unsigned  int anonymous_var_nameX215, unsigned long unsigned  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long unsigned  int anonymous_var_nameX220, unsigned long unsigned  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long unsigned  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long unsigned  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long unsigned  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long unsigned  int anonymous_var_nameX242);
unsigned long unsigned  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long unsigned  int anonymous_var_nameX245);
unsigned long unsigned  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long unsigned  int anonymous_var_nameX247, unsigned long unsigned  int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long  int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long unsigned  int anonymous_var_nameX266);
char* setstate(char* anonymous_var_nameX267);
int putenv(char* anonymous_var_nameX268);
int posix_openpt(int anonymous_var_nameX269);
int grantpt(int anonymous_var_nameX270);
int unlockpt(int anonymous_var_nameX271);
char* ptsname(int anonymous_var_nameX272);
char* l64a(long anonymous_var_nameX273);
long a64l(const char* anonymous_var_nameX274);
void setkey(const char* anonymous_var_nameX275);
double drand48();
double erand48(unsigned short int anonymous_var_nameX276[3]);
long  int lrand48();
long  int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long unsigned  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long unsigned  int anonymous_var_nameX289);
void* memalign(unsigned long unsigned  int anonymous_var_nameX290, unsigned long unsigned  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long unsigned  int anonymous_var_nameX295, unsigned long unsigned  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long unsigned  int anonymous_var_nameX298, unsigned long unsigned  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long unsigned  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long unsigned  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long unsigned  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long unsigned  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long unsigned  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long unsigned  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long unsigned  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long unsigned  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long unsigned  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long unsigned  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long unsigned  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long unsigned  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long unsigned  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long unsigned  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long unsigned  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long unsigned  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long unsigned  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long unsigned  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long unsigned  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long unsigned  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long unsigned  int anonymous_var_nameX416);
unsigned long unsigned  int strnlen(const char* anonymous_var_nameX417, unsigned long unsigned  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long unsigned  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long unsigned  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long unsigned  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long unsigned  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long unsigned  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long unsigned  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long unsigned  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long unsigned  int anonymous_var_nameX444);
unsigned long unsigned  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long unsigned  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long unsigned  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long unsigned  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long unsigned  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(struct integer* self, struct integer* right);
_Bool char_operator_equals(struct integer* self, struct integer* right);
_Bool short_operator_equals(struct integer* self, struct integer* right);
_Bool int_operator_equals(struct integer* self, struct integer* right);
_Bool long_operator_equals(struct integer* self, struct integer* right);
_Bool bool_operator_not_equals(struct integer* self, struct integer* right);
_Bool char_operator_not_equals(struct integer* self, struct integer* right);
_Bool short_operator_not_equals(struct integer* self, struct integer* right);
_Bool int_operator_not_equals(struct integer* self, struct integer* right);
_Bool long_operator_not_equals(struct integer* self, struct integer* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long unsigned  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short short left, short short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(char self);
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
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
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX591, int anonymous_var_nameX592, const char** anonymous_var_nameX593, int* anonymous_var_nameX594, const unsigned char* anonymous_var_nameX595);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX596, int anonymous_var_nameX597, const char** anonymous_var_nameX598, int* anonymous_var_nameX599, const unsigned char* anonymous_var_nameX600);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX601, int anonymous_var_nameX602, const char** anonymous_var_nameX603, int* anonymous_var_nameX604, const unsigned char* anonymous_var_nameX605);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX606, int anonymous_var_nameX607, int* anonymous_var_nameX608, const char** anonymous_var_nameX609, int* anonymous_var_nameX610, const unsigned char* anonymous_var_nameX611);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX612, int anonymous_var_nameX613, int* anonymous_var_nameX614, const char** anonymous_var_nameX615, int* anonymous_var_nameX616, const unsigned char* anonymous_var_nameX617);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX618, int anonymous_var_nameX619, int* anonymous_var_nameX620, const char** anonymous_var_nameX621, int* anonymous_var_nameX622, const unsigned char* anonymous_var_nameX623);
int pcre_config(int anonymous_var_nameX624, void* anonymous_var_nameX625);
int pcre16_config(int anonymous_var_nameX626, void* anonymous_var_nameX627);
int pcre32_config(int anonymous_var_nameX628, void* anonymous_var_nameX629);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX630, const char* anonymous_var_nameX631, int* anonymous_var_nameX632, int anonymous_var_nameX633, const char* anonymous_var_nameX634, char* anonymous_var_nameX635, int anonymous_var_nameX636);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX637, const unsigned short int* anonymous_var_nameX638, int* anonymous_var_nameX639, int anonymous_var_nameX640, const unsigned short int* anonymous_var_nameX641, unsigned short int* anonymous_var_nameX642, int anonymous_var_nameX643);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX644, const unsigned int* anonymous_var_nameX645, int* anonymous_var_nameX646, int anonymous_var_nameX647, const unsigned int* anonymous_var_nameX648, unsigned int* anonymous_var_nameX649, int anonymous_var_nameX650);
int pcre_copy_substring(const char* anonymous_var_nameX651, int* anonymous_var_nameX652, int anonymous_var_nameX653, int anonymous_var_nameX654, char* anonymous_var_nameX655, int anonymous_var_nameX656);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX657, int* anonymous_var_nameX658, int anonymous_var_nameX659, int anonymous_var_nameX660, unsigned short int* anonymous_var_nameX661, int anonymous_var_nameX662);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX663, int* anonymous_var_nameX664, int anonymous_var_nameX665, int anonymous_var_nameX666, unsigned int* anonymous_var_nameX667, int anonymous_var_nameX668);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX669, const struct pcre_extra* anonymous_var_nameX670, const char* anonymous_var_nameX671, int anonymous_var_nameX672, int anonymous_var_nameX673, int anonymous_var_nameX674, int* anonymous_var_nameX675, int anonymous_var_nameX676, int* anonymous_var_nameX677, int anonymous_var_nameX678);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX679, const struct pcre16_extra* anonymous_var_nameX680, const unsigned short int* anonymous_var_nameX681, int anonymous_var_nameX682, int anonymous_var_nameX683, int anonymous_var_nameX684, int* anonymous_var_nameX685, int anonymous_var_nameX686, int* anonymous_var_nameX687, int anonymous_var_nameX688);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX689, const struct pcre32_extra* anonymous_var_nameX690, const unsigned int* anonymous_var_nameX691, int anonymous_var_nameX692, int anonymous_var_nameX693, int anonymous_var_nameX694, int* anonymous_var_nameX695, int anonymous_var_nameX696, int* anonymous_var_nameX697, int anonymous_var_nameX698);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX699, const struct pcre_extra* anonymous_var_nameX700, const char* anonymous_var_nameX701, int anonymous_var_nameX702, int anonymous_var_nameX703, int anonymous_var_nameX704, int* anonymous_var_nameX705, int anonymous_var_nameX706);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX707, const struct pcre16_extra* anonymous_var_nameX708, const unsigned short int* anonymous_var_nameX709, int anonymous_var_nameX710, int anonymous_var_nameX711, int anonymous_var_nameX712, int* anonymous_var_nameX713, int anonymous_var_nameX714);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX715, const struct pcre32_extra* anonymous_var_nameX716, const unsigned int* anonymous_var_nameX717, int anonymous_var_nameX718, int anonymous_var_nameX719, int anonymous_var_nameX720, int* anonymous_var_nameX721, int anonymous_var_nameX722);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX723, const struct pcre_extra* anonymous_var_nameX724, const char* anonymous_var_nameX725, int anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, int* anonymous_var_nameX729, int anonymous_var_nameX730, struct real_pcre_jit_stack* anonymous_var_nameX731);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX732, const struct pcre16_extra* anonymous_var_nameX733, const unsigned short int* anonymous_var_nameX734, int anonymous_var_nameX735, int anonymous_var_nameX736, int anonymous_var_nameX737, int* anonymous_var_nameX738, int anonymous_var_nameX739, struct real_pcre16_jit_stack* anonymous_var_nameX740);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX741, const struct pcre32_extra* anonymous_var_nameX742, const unsigned int* anonymous_var_nameX743, int anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, int* anonymous_var_nameX747, int anonymous_var_nameX748, struct real_pcre32_jit_stack* anonymous_var_nameX749);
void pcre_free_substring(const char* anonymous_var_nameX750);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX751);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX752);
void pcre_free_substring_list(const char** anonymous_var_nameX753);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX754);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX755);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX756, const struct pcre_extra* anonymous_var_nameX757, int anonymous_var_nameX758, void* anonymous_var_nameX759);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX760, const struct pcre16_extra* anonymous_var_nameX761, int anonymous_var_nameX762, void* anonymous_var_nameX763);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX764, const struct pcre32_extra* anonymous_var_nameX765, int anonymous_var_nameX766, void* anonymous_var_nameX767);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX768, const char* anonymous_var_nameX769, int* anonymous_var_nameX770, int anonymous_var_nameX771, const char* anonymous_var_nameX772, const char** anonymous_var_nameX773);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX774, const unsigned short int* anonymous_var_nameX775, int* anonymous_var_nameX776, int anonymous_var_nameX777, const unsigned short int* anonymous_var_nameX778, const unsigned short int** anonymous_var_nameX779);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX780, const unsigned int* anonymous_var_nameX781, int* anonymous_var_nameX782, int anonymous_var_nameX783, const unsigned int* anonymous_var_nameX784, const unsigned int** anonymous_var_nameX785);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX786, const char* anonymous_var_nameX787);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX788, const unsigned short int* anonymous_var_nameX789);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX790, const unsigned int* anonymous_var_nameX791);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX792, const char* anonymous_var_nameX793, char** anonymous_var_nameX794, char** anonymous_var_nameX795);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX796, const unsigned short int* anonymous_var_nameX797, unsigned short int** anonymous_var_nameX798, unsigned short int** anonymous_var_nameX799);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX800, const unsigned int* anonymous_var_nameX801, unsigned int** anonymous_var_nameX802, unsigned int** anonymous_var_nameX803);
int pcre_get_substring(const char* anonymous_var_nameX804, int* anonymous_var_nameX805, int anonymous_var_nameX806, int anonymous_var_nameX807, const char** anonymous_var_nameX808);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX809, int* anonymous_var_nameX810, int anonymous_var_nameX811, int anonymous_var_nameX812, const unsigned short int** anonymous_var_nameX813);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX814, int* anonymous_var_nameX815, int anonymous_var_nameX816, int anonymous_var_nameX817, const unsigned int** anonymous_var_nameX818);
int pcre_get_substring_list(const char* anonymous_var_nameX819, int* anonymous_var_nameX820, int anonymous_var_nameX821, const char*** anonymous_var_nameX822);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX823, int* anonymous_var_nameX824, int anonymous_var_nameX825, const unsigned short int*** anonymous_var_nameX826);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX827, int* anonymous_var_nameX828, int anonymous_var_nameX829, const unsigned int*** anonymous_var_nameX830);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX831, int anonymous_var_nameX832);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX833, int anonymous_var_nameX834);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX835, int anonymous_var_nameX836);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX837, int anonymous_var_nameX838, const char** anonymous_var_nameX839);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX840, int anonymous_var_nameX841, const char** anonymous_var_nameX842);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX843, int anonymous_var_nameX844, const char** anonymous_var_nameX845);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX846);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX847);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX848);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX849, struct pcre_extra* anonymous_var_nameX850, const unsigned char* anonymous_var_nameX851);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX852, struct pcre16_extra* anonymous_var_nameX853, const unsigned char* anonymous_var_nameX854);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX855, struct pcre32_extra* anonymous_var_nameX856, const unsigned char* anonymous_var_nameX857);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX858, const unsigned short int* anonymous_var_nameX859, int anonymous_var_nameX860, int* anonymous_var_nameX861, int anonymous_var_nameX862);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX863, const unsigned int* anonymous_var_nameX864, int anonymous_var_nameX865, int* anonymous_var_nameX866, int anonymous_var_nameX867);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX868, int anonymous_var_nameX869);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX870, int anonymous_var_nameX871);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX872, int anonymous_var_nameX873);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX874);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX875);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX876);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX877, struct real_pcre_jit_stack* (*anonymous_var_nameX878)(void*), void* anonymous_var_nameX879);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX880, struct real_pcre16_jit_stack* (*anonymous_var_nameX881)(void*), void* anonymous_var_nameX882);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX883, struct real_pcre32_jit_stack* (*anonymous_var_nameX884)(void*), void* anonymous_var_nameX885);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
unsigned int* wcscpy(unsigned int* anonymous_var_nameX886, const unsigned int* anonymous_var_nameX887);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX888, const unsigned int* anonymous_var_nameX889, unsigned long unsigned  int anonymous_var_nameX890);
unsigned int* wcscat(unsigned int* anonymous_var_nameX891, const unsigned int* anonymous_var_nameX892);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX893, const unsigned int* anonymous_var_nameX894, unsigned long unsigned  int anonymous_var_nameX895);
int wcscmp(const unsigned int* anonymous_var_nameX896, const unsigned int* anonymous_var_nameX897);
int wcsncmp(const unsigned int* anonymous_var_nameX898, const unsigned int* anonymous_var_nameX899, unsigned long unsigned  int anonymous_var_nameX900);
int wcscoll(const unsigned int* anonymous_var_nameX901, const unsigned int* anonymous_var_nameX902);
unsigned long unsigned  int wcsxfrm(unsigned int* anonymous_var_nameX903, const unsigned int* anonymous_var_nameX904, unsigned long unsigned  int anonymous_var_nameX905);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX906, unsigned int anonymous_var_nameX907);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX908, unsigned int anonymous_var_nameX909);
unsigned long unsigned  int wcscspn(const unsigned int* anonymous_var_nameX910, const unsigned int* anonymous_var_nameX911);
unsigned long unsigned  int wcsspn(const unsigned int* anonymous_var_nameX912, const unsigned int* anonymous_var_nameX913);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX914, const unsigned int* anonymous_var_nameX915);
unsigned int* wcstok(unsigned int* anonymous_var_nameX916, const unsigned int* anonymous_var_nameX917, unsigned int** anonymous_var_nameX918);
unsigned long unsigned  int wcslen(const unsigned int* anonymous_var_nameX919);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX920, const unsigned int* anonymous_var_nameX921);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX922, const unsigned int* anonymous_var_nameX923);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX924, unsigned int anonymous_var_nameX925, unsigned long unsigned  int anonymous_var_nameX926);
int wmemcmp(const unsigned int* anonymous_var_nameX927, const unsigned int* anonymous_var_nameX928, unsigned long unsigned  int anonymous_var_nameX929);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX930, const unsigned int* anonymous_var_nameX931, unsigned long unsigned  int anonymous_var_nameX932);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX933, const unsigned int* anonymous_var_nameX934, unsigned long unsigned  int anonymous_var_nameX935);
unsigned int* wmemset(unsigned int* anonymous_var_nameX936, unsigned int anonymous_var_nameX937, unsigned long unsigned  int anonymous_var_nameX938);
unsigned int btowc(int anonymous_var_nameX939);
int wctob(unsigned int anonymous_var_nameX940);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX941);
unsigned long unsigned  int mbrtowc(unsigned int* anonymous_var_nameX942, const char* anonymous_var_nameX943, unsigned long unsigned  int anonymous_var_nameX944, struct __mbstate_t* anonymous_var_nameX945);
unsigned long unsigned  int wcrtomb(char* anonymous_var_nameX946, unsigned int anonymous_var_nameX947, struct __mbstate_t* anonymous_var_nameX948);
unsigned long unsigned  int mbrlen(const char* anonymous_var_nameX949, unsigned long unsigned  int anonymous_var_nameX950, struct __mbstate_t* anonymous_var_nameX951);
unsigned long unsigned  int mbsrtowcs(unsigned int* anonymous_var_nameX952, const char** anonymous_var_nameX953, unsigned long unsigned  int anonymous_var_nameX954, struct __mbstate_t* anonymous_var_nameX955);
unsigned long unsigned  int wcsrtombs(char* anonymous_var_nameX956, const unsigned int** anonymous_var_nameX957, unsigned long unsigned  int anonymous_var_nameX958, struct __mbstate_t* anonymous_var_nameX959);
float wcstof(const unsigned int* anonymous_var_nameX960, unsigned int** anonymous_var_nameX961);
double wcstod(const unsigned int* anonymous_var_nameX962, unsigned int** anonymous_var_nameX963);
long  double wcstold(const unsigned int* anonymous_var_nameX964, unsigned int** anonymous_var_nameX965);
long wcstol(const unsigned int* anonymous_var_nameX966, unsigned int** anonymous_var_nameX967, int anonymous_var_nameX968);
unsigned long unsigned  int wcstoul(const unsigned int* anonymous_var_nameX969, unsigned int** anonymous_var_nameX970, int anonymous_var_nameX971);
long long wcstoll(const unsigned int* anonymous_var_nameX972, unsigned int** anonymous_var_nameX973, int anonymous_var_nameX974);
unsigned long unsigned  long wcstoull(const unsigned int* anonymous_var_nameX975, unsigned int** anonymous_var_nameX976, int anonymous_var_nameX977);
int fwide(struct _IO_FILE* anonymous_var_nameX978, int anonymous_var_nameX979);
int wprintf(const unsigned int* anonymous_var_nameX980, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX981, const unsigned int* anonymous_var_nameX982, ...);
int swprintf(unsigned int* anonymous_var_nameX983, unsigned long unsigned  int anonymous_var_nameX984, const unsigned int* anonymous_var_nameX985, ...);
int vwprintf(const unsigned int* anonymous_var_nameX986, va_list anonymous_var_nameX987);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX988, const unsigned int* anonymous_var_nameX989, va_list anonymous_var_nameX990);
int vswprintf(unsigned int* anonymous_var_nameX991, unsigned long unsigned  int anonymous_var_nameX992, const unsigned int* anonymous_var_nameX993, va_list anonymous_var_nameX994);
int wscanf(const unsigned int* anonymous_var_nameX995, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997, ...);
int swscanf(const unsigned int* anonymous_var_nameX998, const unsigned int* anonymous_var_nameX999, ...);
int vwscanf(const unsigned int* anonymous_var_nameX1000, va_list anonymous_var_nameX1001);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX1002, const unsigned int* anonymous_var_nameX1003, va_list anonymous_var_nameX1004);
int vswscanf(const unsigned int* anonymous_var_nameX1005, const unsigned int* anonymous_var_nameX1006, va_list anonymous_var_nameX1007);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1008);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1009);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX1010, struct _IO_FILE* anonymous_var_nameX1011);
unsigned int putwc(unsigned int anonymous_var_nameX1012, struct _IO_FILE* anonymous_var_nameX1013);
unsigned int putwchar(unsigned int anonymous_var_nameX1014);
unsigned int* fgetws(unsigned int* anonymous_var_nameX1015, int anonymous_var_nameX1016, struct _IO_FILE* anonymous_var_nameX1017);
int fputws(const unsigned int* anonymous_var_nameX1018, struct _IO_FILE* anonymous_var_nameX1019);
unsigned int ungetwc(unsigned int anonymous_var_nameX1020, struct _IO_FILE* anonymous_var_nameX1021);
unsigned long unsigned  int wcsftime(unsigned int* anonymous_var_nameX1022, unsigned long unsigned  int anonymous_var_nameX1023, const unsigned int* anonymous_var_nameX1024, const struct tm* anonymous_var_nameX1025);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1026);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1027);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1028, struct _IO_FILE* anonymous_var_nameX1029);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1030, struct _IO_FILE* anonymous_var_nameX1031);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1032);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1033, int anonymous_var_nameX1034, struct _IO_FILE* anonymous_var_nameX1035);
int fputws_unlocked(const unsigned int* anonymous_var_nameX1036, struct _IO_FILE* anonymous_var_nameX1037);
unsigned long unsigned  int wcsftime_l(unsigned int* anonymous_var_nameX1038, unsigned long unsigned  int anonymous_var_nameX1039, const unsigned int* anonymous_var_nameX1040, const struct tm* anonymous_var_nameX1041, struct __locale_struct* anonymous_var_nameX1042);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1043, unsigned long unsigned  int* anonymous_var_nameX1044);
unsigned long unsigned  int mbsnrtowcs(unsigned int* anonymous_var_nameX1045, const char** anonymous_var_nameX1046, unsigned long unsigned  int anonymous_var_nameX1047, unsigned long unsigned  int anonymous_var_nameX1048, struct __mbstate_t* anonymous_var_nameX1049);
unsigned long unsigned  int wcsnrtombs(char* anonymous_var_nameX1050, const unsigned int** anonymous_var_nameX1051, unsigned long unsigned  int anonymous_var_nameX1052, unsigned long unsigned  int anonymous_var_nameX1053, struct __mbstate_t* anonymous_var_nameX1054);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1055);
unsigned long unsigned  int wcsnlen(const unsigned int* anonymous_var_nameX1056, unsigned long unsigned  int anonymous_var_nameX1057);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1058, const unsigned int* anonymous_var_nameX1059);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1060, const unsigned int* anonymous_var_nameX1061, unsigned long unsigned  int anonymous_var_nameX1062);
int wcscasecmp(const unsigned int* anonymous_var_nameX1063, const unsigned int* anonymous_var_nameX1064);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX1065, const unsigned int* anonymous_var_nameX1066, struct __locale_struct* anonymous_var_nameX1067);
int wcsncasecmp(const unsigned int* anonymous_var_nameX1068, const unsigned int* anonymous_var_nameX1069, unsigned long unsigned  int anonymous_var_nameX1070);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1071, const unsigned int* anonymous_var_nameX1072, unsigned long unsigned  int anonymous_var_nameX1073, struct __locale_struct* anonymous_var_nameX1074);
int wcscoll_l(const unsigned int* anonymous_var_nameX1075, const unsigned int* anonymous_var_nameX1076, struct __locale_struct* anonymous_var_nameX1077);
unsigned long unsigned  int wcsxfrm_l(unsigned int* anonymous_var_nameX1078, const unsigned int* anonymous_var_nameX1079, unsigned long unsigned  int anonymous_var_nameX1080, struct __locale_struct* anonymous_var_nameX1081);
int wcwidth(unsigned int anonymous_var_nameX1082);
int wcswidth(const unsigned int* anonymous_var_nameX1083, unsigned long unsigned  int anonymous_var_nameX1084);
int iswalnum(unsigned int anonymous_var_nameX1085);
int iswalpha(unsigned int anonymous_var_nameX1086);
int iswblank(unsigned int anonymous_var_nameX1087);
int iswcntrl(unsigned int anonymous_var_nameX1088);
int iswdigit(unsigned int anonymous_var_nameX1089);
int iswgraph(unsigned int anonymous_var_nameX1090);
int iswlower(unsigned int anonymous_var_nameX1091);
int iswprint(unsigned int anonymous_var_nameX1092);
int iswpunct(unsigned int anonymous_var_nameX1093);
int iswspace(unsigned int anonymous_var_nameX1094);
int iswupper(unsigned int anonymous_var_nameX1095);
int iswxdigit(unsigned int anonymous_var_nameX1096);
int iswctype(unsigned int anonymous_var_nameX1097, unsigned long unsigned  int anonymous_var_nameX1098);
unsigned int towlower(unsigned int anonymous_var_nameX1099);
unsigned int towupper(unsigned int anonymous_var_nameX1100);
unsigned long unsigned  int wctype(const char* anonymous_var_nameX1101);
char* dirname(char* anonymous_var_nameX1102);
char* basename(char* anonymous_var_nameX1103);
unsigned int GC_get_version();
unsigned long unsigned  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX1105)(unsigned long unsigned  int));
void* (*GC_get_oom_fn())(unsigned long unsigned  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX1107)(unsigned long unsigned  int));
void (*GC_get_on_heap_resize())(unsigned long unsigned  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX1109)(enum anonymous_typeY5));
void (*GC_get_on_collection_event())(enum anonymous_typeY5);
void GC_set_find_leak(int anonymous_var_nameX1110);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX1111);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX1112);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX1113);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX1114)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX1115);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX1116);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long unsigned  int anonymous_var_nameX1117);
unsigned long unsigned  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX1118);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long unsigned  int anonymous_var_nameX1119);
unsigned long unsigned  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long unsigned  int anonymous_var_nameX1120);
unsigned long unsigned  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX1121);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long unsigned  int anonymous_var_nameX1122);
unsigned long unsigned  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1123);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long unsigned  int anonymous_var_nameX1124);
unsigned long unsigned  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long unsigned  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX1125);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long unsigned  int anonymous_var_nameX1126);
unsigned long unsigned  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX1127);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX1128);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX1129);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX1130);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long unsigned  int anonymous_var_nameX1131);
void* GC_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX1132);
char* GC_strdup(const char* anonymous_var_nameX1133);
char* GC_strndup(const char* anonymous_var_nameX1134, unsigned long unsigned  int anonymous_var_nameX1135);
void* GC_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX1136);
void* GC_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX1137);
void* GC_memalign(unsigned long unsigned  int anonymous_var_nameX1138, unsigned long unsigned  int anonymous_var_nameX1139);
int GC_posix_memalign(void** anonymous_var_nameX1140, unsigned long unsigned  int anonymous_var_nameX1141, unsigned long unsigned  int anonymous_var_nameX1142);
void GC_free(void* anonymous_var_nameX1143);
void GC_change_stubborn(const void* anonymous_var_nameX1144);
void GC_end_stubborn_change(const void* anonymous_var_nameX1145);
void* GC_base(void* anonymous_var_nameX1146);
int GC_is_heap_ptr(const void* anonymous_var_nameX1147);
unsigned long unsigned  int GC_size(const void* anonymous_var_nameX1148);
void* GC_realloc(void* anonymous_var_nameX1149, unsigned long unsigned  int anonymous_var_nameX1150);
int GC_expand_hp(unsigned long unsigned  int anonymous_var_nameX1151);
void GC_set_max_heap_size(unsigned long unsigned  int anonymous_var_nameX1152);
void GC_exclude_static_roots(void* anonymous_var_nameX1153, void* anonymous_var_nameX1154);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX1155, void* anonymous_var_nameX1156);
void GC_remove_roots(void* anonymous_var_nameX1157, void* anonymous_var_nameX1158);
void GC_register_displacement(unsigned long unsigned  int anonymous_var_nameX1159);
void GC_debug_register_displacement(unsigned long unsigned  int anonymous_var_nameX1160);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX1161)());
void GC_set_stop_func(int (*anonymous_var_nameX1162)());
int (*GC_get_stop_func())();
unsigned long unsigned  int GC_get_heap_size();
unsigned long unsigned  int GC_get_free_bytes();
unsigned long unsigned  int GC_get_unmapped_bytes();
unsigned long unsigned  int GC_get_bytes_since_gc();
unsigned long unsigned  int GC_get_expl_freed_bytes_since_gc();
unsigned long unsigned  int GC_get_total_bytes();
unsigned long unsigned  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long unsigned  int* anonymous_var_nameX1163, unsigned long unsigned  int* anonymous_var_nameX1164, unsigned long unsigned  int* anonymous_var_nameX1165, unsigned long unsigned  int* anonymous_var_nameX1166, unsigned long unsigned  int* anonymous_var_nameX1167);
unsigned long unsigned  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1168, unsigned long unsigned  int anonymous_var_nameX1169);
unsigned long unsigned  int GC_get_size_map_at(int i);
unsigned long unsigned  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX1170);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1171);
void* GC_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1172);
void* GC_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX1173);
void* GC_debug_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX1174, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc(unsigned long unsigned  int anonymous_var_nameX1175, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX1176, unsigned long unsigned  int ra, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX1177, unsigned long unsigned  int ra, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX1178, unsigned long unsigned  int anonymous_var_nameX1179, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX1180, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX1181, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1182, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX1183, unsigned long unsigned  int ra, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX1184);
void* GC_debug_realloc(void* anonymous_var_nameX1185, unsigned long unsigned  int anonymous_var_nameX1186, unsigned long unsigned  int ra, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX1187);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1188);
void* GC_debug_malloc_replacement(unsigned long unsigned  int anonymous_var_nameX1189);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX1190, unsigned long unsigned  int anonymous_var_nameX1191);
void GC_register_finalizer(void* anonymous_var_nameX1194, void (*anonymous_var_nameX1195)(void*,void*), void* anonymous_var_nameX1196, void (*anonymous_var_nameX1197)(void*,void*), void** anonymous_var_nameX1198);
void GC_debug_register_finalizer(void* anonymous_var_nameX1199, void (*anonymous_var_nameX1200)(void*,void*), void* anonymous_var_nameX1201, void (*anonymous_var_nameX1202)(void*,void*), void** anonymous_var_nameX1203);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1204, void (*anonymous_var_nameX1205)(void*,void*), void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void** anonymous_var_nameX1208);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1209, void (*anonymous_var_nameX1210)(void*,void*), void* anonymous_var_nameX1211, void (*anonymous_var_nameX1212)(void*,void*), void** anonymous_var_nameX1213);
void GC_register_finalizer_no_order(void* anonymous_var_nameX1214, void (*anonymous_var_nameX1215)(void*,void*), void* anonymous_var_nameX1216, void (*anonymous_var_nameX1217)(void*,void*), void** anonymous_var_nameX1218);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1219, void (*anonymous_var_nameX1220)(void*,void*), void* anonymous_var_nameX1221, void (*anonymous_var_nameX1222)(void*,void*), void** anonymous_var_nameX1223);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX1224, void (*anonymous_var_nameX1225)(void*,void*), void* anonymous_var_nameX1226, void (*anonymous_var_nameX1227)(void*,void*), void** anonymous_var_nameX1228);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1229, void (*anonymous_var_nameX1230)(void*,void*), void* anonymous_var_nameX1231, void (*anonymous_var_nameX1232)(void*,void*), void** anonymous_var_nameX1233);
int GC_register_disappearing_link(void** anonymous_var_nameX1234);
int GC_general_register_disappearing_link(void** anonymous_var_nameX1235, const void* anonymous_var_nameX1236);
int GC_move_disappearing_link(void** anonymous_var_nameX1237, void** anonymous_var_nameX1238);
int GC_unregister_disappearing_link(void** anonymous_var_nameX1239);
int GC_register_long_link(void** anonymous_var_nameX1240, const void* anonymous_var_nameX1241);
int GC_move_long_link(void** anonymous_var_nameX1242, void** anonymous_var_nameX1243);
int GC_unregister_long_link(void** anonymous_var_nameX1244);
void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1246)(void*));
enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX1247, int anonymous_var_nameX1248);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX1250)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long unsigned  int anonymous_var_nameX1251);
void GC_set_warn_proc(void (*anonymous_var_nameX1254)(char*,unsigned long unsigned  int));
void (*GC_get_warn_proc())(char*,unsigned long unsigned  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX1255, unsigned long unsigned  int anonymous_var_nameX1256);
void GC_set_log_fd(int anonymous_var_nameX1257);
void GC_set_abort_func(void (*anonymous_var_nameX1259)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1261)(void*), void* anonymous_var_nameX1262);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX1265)(struct GC_stack_base*,void*), void* anonymous_var_nameX1266);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX1267)(void*), void* anonymous_var_nameX1268);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX1269)(void*), void* anonymous_var_nameX1270);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1271);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1272);
void GC_set_stackbottom(void* anonymous_var_nameX1273, const struct GC_stack_base* anonymous_var_nameX1274);
void* GC_same_obj(void* anonymous_var_nameX1275, void* anonymous_var_nameX1276);
void* GC_pre_incr(void** anonymous_var_nameX1277, long anonymous_var_nameX1278);
void* GC_post_incr(void** anonymous_var_nameX1279, long anonymous_var_nameX1280);
void* GC_is_visible(void* anonymous_var_nameX1281);
void* GC_is_valid_displacement(void* anonymous_var_nameX1282);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX1283);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX1284, const void* anonymous_var_nameX1285);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1286, const void* anonymous_var_nameX1287);
void* GC_malloc_many(unsigned long unsigned  int anonymous_var_nameX1308);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1312)(const char*,void*,unsigned long unsigned  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1313);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void come_regex_finalizer(void* obj, void* client_data);
struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
void come_regex_finalize(struct come_regex* reg);
struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* regex);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);
unsigned int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* charp_printable(char* str);
char* wchar_tp_to_string(unsigned int* wstr);
unsigned int* charp_to_wstring(char* str);
int wchar_tp_length(unsigned int* str);
unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);
int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);
int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);
unsigned int* wchar_tp_reverse(unsigned int* str);
unsigned int* wchar_tp_multiply(unsigned int* str, int n);
unsigned int* wchar_tp_printable(unsigned int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);
int wstring_compare(unsigned int* left, unsigned int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(unsigned int left, unsigned int right);
unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);
unsigned int* wstring_operator_mult(unsigned int* str, int n);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);
unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
unsigned int wchar_tp_get_hash_key(unsigned int* value);
_Bool wstring_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
unsigned int wchar_t_get_hash_key(unsigned int value);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
char* wchar_t_to_string(unsigned int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long unsigned  int xwcslen(unsigned int* wstr);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2445, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2452, "buffer"));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2461, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2468, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2475, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2482, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2489, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2789, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2794, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2799, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2804, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2809, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2842, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2844, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2849, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2851, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2856, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2858, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2863, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2865, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2870, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2872, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2877, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2879, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2884, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2886, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2891, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2896, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2901, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2906, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2911, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2916, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2921, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2926, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2931, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2936, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2941, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2946, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2951, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2956, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
_Bool result_43;
int i_44;
    result_43=(_Bool)0;
    for(    i_44=0;    i_44<len;    i_44++    ){
        if(        strncmp(self[i_44],str,strlen(self[i_44]))==0) {
            result_43=(_Bool)1;
            break;
        }
    }
    return result_43;
}
static inline unsigned long unsigned  int shortpa_length(short short* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int intpa_length(int* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int longpa_length(long* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int floatpa_length(float* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int doublepa_length(double* self, unsigned long unsigned  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = wchar_tp_substring(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static inline int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = charp_scan_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = charp_split_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = charp_strip(self);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = string_printable(str);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = charp_to_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = wchar_tp_to_string(wstr);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
unsigned int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = wchar_tp_delete(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = wchar_tp_reverse(str);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = wchar_tp_printable(str);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
    return wchar_tp_get_hash_key(value);
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static inline int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = charp_replace(self,index,c);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = charp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = charp_sub(self,reg,replace);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = charp_sub_count(self,reg,replace,count);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = charp_split_str(self,str);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = charp_scan(self,reg);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = charp_split(self,reg);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = charp_sub_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = string_chomp(str);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result8__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result8__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result11__;
    self->memory=value;
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result11__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result13__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result13__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result15__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result15__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result18__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result18__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result23__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result23__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result25__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result25__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_16;
struct list_item$1char* litem_17;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 223, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 233, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 243, "list_item$1char");
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1charp_push_back(self,values[i_19]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_20;
struct list_item$1charp* litem_21;
struct list_item$1charp* litem_22;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 223, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 233, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 243, "list_item$1charp");
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1short_push_back(self,values[i_23]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_24;
struct list_item$1short* litem_25;
struct list_item$1short* litem_26;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 223, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 233, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 243, "list_item$1short");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1int_push_back(self,values[i_27]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_28;
struct list_item$1int* litem_29;
struct list_item$1int* litem_30;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 223, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 233, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 243, "list_item$1int");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1long_push_back(self,values[i_31]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_32;
struct list_item$1long* litem_33;
struct list_item$1long* litem_34;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 223, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 233, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 243, "list_item$1long");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_36;
struct list_item$1float* litem_37;
struct list_item$1float* litem_38;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 223, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 233, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 243, "list_item$1float");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1double_push_back(self,values[i_39]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_40;
struct list_item$1double* litem_41;
struct list_item$1double* litem_42;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 223, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 233, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 243, "list_item$1double");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1020, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result48__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1020, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "comelang.h", 1020, "short");
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1020, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1020, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result56__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1020, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result58__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1020, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}




















































void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_45;
    reg_45=obj;
    if(    reg_45&&reg_45->re) {
        free(reg_45->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_46;
int erro_ofs_47;
int options_48;
_Bool __exception_result_var_b1;
struct come_regex* __result92__;
err_46 = (void*)0;
memset(&erro_ofs_47, 0, sizeof(int));
    options_48=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_48;
    self->re=pcre_compile(str,options_48,&err_46,&erro_ofs_47,((void*)0));
    if(    self->re==((void*)0)) {
        (come_push_stackframe("libcomelang-str-gc.c", 46, 0),__exception_result_var_b1=die(xsprintf("regex error \%s",charp_to_string(str))), come_pop_stackframe(), __exception_result_var_b1);
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct come_regex* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct come_regex* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result95__;
struct come_regex* result_49;
const char* err_50;
int erro_ofs_51;
struct come_regex* __result96__;
err_50 = (void*)0;
memset(&erro_ofs_51, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_49=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_49->str=string_clone(reg->str);
    result_49->ignore_case=reg->ignore_case;
    result_49->multiline=reg->multiline;
    result_49->global=reg->global;
    result_49->extended=reg->extended;
    result_49->dotall=reg->dotall;
    result_49->anchored=reg->anchored;
    result_49->dollar_endonly=reg->dollar_endonly;
    result_49->ungreedy=reg->ungreedy;
    result_49->options=reg->options;
    result_49->re=pcre_compile(result_49->str,result_49->options,&err_50,&erro_ofs_51,((void*)0));
    if(    result_49->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_49->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_49,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result96__ = gComeFunResultObject = __result_obj__ = result_49;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = __builtin_string(regex->str);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_52;
int i_53;
char* __result98__;
    result_52=__builtin_string(str);
    for(    i_53=0;    i_53<strlen(str);    i_53++    ){
        if(        str[i_53]>=65&&str[i_53]<=90) {
            result_52[i_53]=str[i_53]-65+97;
        }
    }
    __result98__ = gComeFunResultObject = __result_obj__ = result_52;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_54;
int i_55;
char* __result99__;
    result_54=__builtin_string(str);
    for(    i_55=0;    i_55<strlen(str);    i_55++    ){
        if(        str[i_55]>=97&&str[i_55]<=122) {
            result_54[i_55]=str[i_55]-97+65;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_54;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result100__;
int len_56;
unsigned int* __result101__;
unsigned int* __result102__;
unsigned int* __result103__;
unsigned int* result_57;
unsigned int* __result104__;
    if(    str==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    len_56=wcslen(str);
    if(    head<0) {
        head+=len_56;
    }
    if(    tail<0) {
        tail+=len_56+1;
    }
    if(    head>tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_56) {
        tail=len_56;
    }
    if(    head==tail) {
        __result102__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    if(    tail-head+1<1) {
        __result103__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    result_57=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 181, "int");
    memcpy(result_57,str+head,sizeof(unsigned int)*(tail-head));
    result_57[tail-head]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = result_57;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result105__;
int len_58;
unsigned int* wstr_59;
int ret_60;
unsigned int* __result106__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_58=strlen(str);
    wstr_59=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_58+1)), "libcomelang-str-gc.c", 196, "int");
    ret_60=mbstowcs(wstr_59,str,len_58+1);
    wstr_59[ret_60]=0;
    if(    ret_60<0) {
        wstr_59[0]=0;
    }
    __result106__ = gComeFunResultObject = __result_obj__ = wstr_59;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_61;
int len_62;
int i_63;
int len2_64;
int j_65;
memset(&j_65, 0, sizeof(int));
    n_61=0;
    len_62=strlen(str);
    for(    i_63=0;    i_63<len_62;    i_63++    ){
        len2_64=strlen(search_str);
        for(        j_65=0;        j_65<len2_64;        j_65++        ){
            if(            str[i_63+j_65]!=search_str[j_65]) {
                break;
            }
        }
        if(        j_65==len2_64) {
            n_61++;
            if(            n_61==count) {
                return i_63;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_66;
int result_70;
int offset_71;
const char* err_72;
int erro_ofs_73;
int options_74;
char* str_75;
struct real_pcre8_or_16* re_76;
int n_77;
int options_78;
int len_79;
int regex_result_80;
int i_81;
int i_82;
err_72 = (void*)0;
memset(&erro_ofs_73, 0, sizeof(int));
    ovec_max_66=16;
    int start_67[ovec_max_66];
    memset(&start_67, 0, sizeof(int)    *(ovec_max_66)    );
    int end_68[ovec_max_66];
    memset(&end_68, 0, sizeof(int)    *(ovec_max_66)    );
    int ovec_value_69[ovec_max_66*3];
    memset(&ovec_value_69, 0, sizeof(int)    *(ovec_max_66*3)    );
    result_70=default_value;
    offset_71=0;
    options_74=reg->options;
    str_75=reg->str;
    re_76=reg->re;
    n_77=0;
    while((_Bool)1) {
        options_78=2097152;
        len_79=strlen(self);
        regex_result_80=pcre_exec(re_76,(struct pcre_extra*)0,self,len_79,offset_71,options_78,ovec_value_69,ovec_max_66*3);
        for(        i_81=0;        i_81<ovec_max_66;        i_81++        ){
            start_67[i_81]=ovec_value_69[i_81*2];
        }
        for(        i_82=0;        i_82<ovec_max_66;        i_82++        ){
            end_68[i_82]=ovec_value_69[i_82*2+1];
        }
        if(        regex_result_80>0) {
            n_77++;
            if(            offset_71==end_68[0]) {
                offset_71++;
            }
            else {
                offset_71=end_68[0];
            }
            if(            n_77==count) {
                result_70=start_67[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_70;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_83;
char* p_84;
    len_83=strlen(search_str);
    p_84=str+strlen(str)-len_83;
    while(p_84>=str) {
        if(        strncmp(p_84,search_str,len_83)==0) {
            return p_84-str;
        }
        p_84--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_85;
int erro_ofs_86;
int options_87;
char* str_88;
struct real_pcre8_or_16* re_89;
char* self2_90;
int ovec_max_91;
int result_95;
int offset_96;
int options_97;
int len_98;
int regex_result_99;
int i_100;
int i_101;
err_85 = (void*)0;
memset(&erro_ofs_86, 0, sizeof(int));
    options_87=reg->options;
    str_88=reg->str;
    re_89=reg->re;
    self2_90=charp_reverse(self);
    ovec_max_91=16;
    int start_92[ovec_max_91];
    memset(&start_92, 0, sizeof(int)    *(ovec_max_91)    );
    int end_93[ovec_max_91];
    memset(&end_93, 0, sizeof(int)    *(ovec_max_91)    );
    int ovec_value_94[ovec_max_91*3];
    memset(&ovec_value_94, 0, sizeof(int)    *(ovec_max_91*3)    );
    result_95=default_value;
    offset_96=0;
    while((_Bool)1) {
        options_97=2097152;
        len_98=strlen(self2_90);
        regex_result_99=pcre_exec(re_89,(struct pcre_extra*)0,self2_90,len_98,offset_96,options_97,ovec_value_94,ovec_max_91*3);
        for(        i_100=0;        i_100<ovec_max_91;        i_100++        ){
            start_92[i_100]=ovec_value_94[i_100*2];
        }
        for(        i_101=0;        i_101<ovec_max_91;        i_101++        ){
            end_93[i_101]=ovec_value_94[i_101*2+1];
        }
        if(        regex_result_99==1||regex_result_99>0) {
            result_95=strlen(self)-1-start_92[0];
            break;
        }
        {
            break;
        }
    }
    return result_95;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_102;
char* p_103;
int n_104;
    len_102=strlen(search_str);
    p_103=str+strlen(str)-len_102;
    n_104=0;
    while(p_103>=str) {
        if(        strncmp(p_103,search_str,len_102)==0) {
            n_104++;
            if(            n_104==count) {
                return p_103-str;
            }
        }
        p_103--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_105;
int offset_106;
int ovec_max_107;
const char* err_111;
int erro_ofs_112;
int options_113;
char* str_114;
struct real_pcre8_or_16* re_115;
int options_116;
int len_117;
int regex_result_118;
int i_119;
int i_120;
char* str_121;
struct list$1charph* group_strings_122;
char* str2_123;
char* str_127;
struct list$1charph* group_strings_128;
int i_129;
char* match_string_130;
char* str2_131;
struct list$1charph* __result109__;
err_111 = (void*)0;
memset(&erro_ofs_112, 0, sizeof(int));
    result_105=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 382, "list$1charph"));
    offset_106=0;
    ovec_max_107=16;
    int start_108[ovec_max_107];
    memset(&start_108, 0, sizeof(int)    *(ovec_max_107)    );
    int end_109[ovec_max_107];
    memset(&end_109, 0, sizeof(int)    *(ovec_max_107)    );
    int ovec_value_110[ovec_max_107*3];
    memset(&ovec_value_110, 0, sizeof(int)    *(ovec_max_107*3)    );
    options_113=reg->options;
    str_114=reg->str;
    re_115=reg->re;
    while((_Bool)1) {
        options_116=2097152;
        len_117=strlen(self);
        regex_result_118=pcre_exec(re_115,(struct pcre_extra*)0,self,len_117,offset_106,options_116,ovec_value_110,ovec_max_107*3);
        for(        i_119=0;        i_119<ovec_max_107;        i_119++        ){
            start_108[i_119]=ovec_value_110[i_119*2];
        }
        for(        i_120=0;        i_120<ovec_max_107;        i_120++        ){
            end_109[i_120]=ovec_value_110[i_120*2+1];
        }
        if(        regex_result_118==1) {
            str_121=charp_substring(self,start_108[0],end_109[0]);
            group_strings_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 416, "list$1charph"));
            str2_123=block(parent,str_121,group_strings_122);
            list$1charph_push_back(result_105,str2_123);
            if(            offset_106==end_109[0]) {
                offset_106++;
            }
            else {
                offset_106=end_109[0];
            }
        }
        else if(        regex_result_118>1) {
            str_127=charp_substring(self,start_108[0],end_109[0]);
            group_strings_128=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 433, "list$1charph"));
            for(            i_129=1;            i_129<regex_result_118;            i_129++            ){
                match_string_130=charp_substring(self,start_108[i_129],end_109[i_129]);
                list$1charph_push_back(group_strings_128,match_string_130);
            }
            str2_131=block(parent,str_127,group_strings_128);
            list$1charph_push_back(result_105,str2_131);
            if(            offset_106==end_109[0]) {
                offset_106++;
            }
            else {
                offset_106=end_109[0];
            }
        }
        else {
            break;
        }
    }
    __result109__ = gComeFunResultObject = __result_obj__ = result_105;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_124;
struct list_item$1charph* litem_125;
struct list_item$1charph* litem_126;
struct list$1charph* __result108__;
    if(    self->len==0) {
        litem_124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 223, "list_item$1charph");
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail=litem_124;
        self->head=litem_124;
    }
    else if(    self->len==1) {
        litem_125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 233, "list_item$1charph");
        litem_125->prev=self->head;
        litem_125->next=((void*)0);
        litem_125->item=item;
        self->tail=litem_125;
        self->head->next=litem_125;
    }
    else {
        litem_126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 243, "list_item$1charph");
        litem_126->prev=self->tail;
        litem_126->next=((void*)0);
        litem_126->item=item;
        self->tail->next=litem_126;
        self->tail=litem_126;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_132;
int offset_133;
int ovec_max_134;
const char* err_138;
int erro_ofs_139;
int options_140;
char* str_141;
struct real_pcre8_or_16* re_142;
int n_143;
int options_144;
int len_145;
int regex_result_146;
int i_147;
int i_148;
char* str_149;
struct list$1charph* group_strings_150;
char* str2_151;
char* str_152;
struct list$1charph* group_strings_153;
int i_154;
char* match_string_155;
char* str2_156;
struct list$1charph* __result110__;
err_138 = (void*)0;
memset(&erro_ofs_139, 0, sizeof(int));
    result_132=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 463, "list$1charph"));
    offset_133=0;
    ovec_max_134=16;
    int start_135[ovec_max_134];
    memset(&start_135, 0, sizeof(int)    *(ovec_max_134)    );
    int end_136[ovec_max_134];
    memset(&end_136, 0, sizeof(int)    *(ovec_max_134)    );
    int ovec_value_137[ovec_max_134*3];
    memset(&ovec_value_137, 0, sizeof(int)    *(ovec_max_134*3)    );
    options_140=reg->options;
    str_141=reg->str;
    re_142=reg->re;
    n_143=0;
    while((_Bool)1) {
        options_144=2097152;
        len_145=strlen(self);
        regex_result_146=pcre_exec(re_142,(struct pcre_extra*)0,self,len_145,offset_133,options_144,ovec_value_137,ovec_max_134*3);
        for(        i_147=0;        i_147<ovec_max_134;        i_147++        ){
            start_135[i_147]=ovec_value_137[i_147*2];
        }
        for(        i_148=0;        i_148<ovec_max_134;        i_148++        ){
            end_136[i_148]=ovec_value_137[i_148*2+1];
        }
        if(        regex_result_146==1) {
            str_149=charp_substring(self,start_135[0],end_136[0]);
            group_strings_150=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 499, "list$1charph"));
            str2_151=block(parent,str_149,group_strings_150);
            list$1charph_push_back(result_132,str2_151);
            if(            offset_133==end_136[0]) {
                offset_133++;
            }
            else {
                offset_133=end_136[0];
            }
            n_143++;
            if(            n_143==count) {
                break;
            }
        }
        else if(        regex_result_146>1) {
            str_152=charp_substring(self,start_135[0],end_136[0]);
            group_strings_153=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 521, "list$1charph"));
            for(            i_154=1;            i_154<regex_result_146;            i_154++            ){
                match_string_155=charp_substring(self,start_135[i_154],end_136[i_154]);
                list$1charph_push_back(group_strings_153,match_string_155);
            }
            str2_156=block(parent,str_152,group_strings_153);
            list$1charph_push_back(result_132,str2_156);
            if(            offset_133==end_136[0]) {
                offset_133++;
            }
            else {
                offset_133=end_136[0];
            }
            n_143++;
            if(            n_143==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_132;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_157;
int erro_ofs_158;
int options_159;
char* str_160;
struct real_pcre8_or_16* re_161;
struct list$1charph* result_162;
int offset_163;
int ovec_max_164;
int options_168;
int len_169;
int regex_result_170;
int i_171;
int i_172;
char* str_173;
struct list$1charph* match_strings_174;
char* str2_175;
char* str_176;
struct list$1charph* match_strings_177;
int i_178;
char* match_str_179;
char* str2_180;
char* str_181;
struct list$1charph* match_strings_182;
char* str2_183;
struct list$1charph* __result111__;
err_157 = (void*)0;
memset(&erro_ofs_158, 0, sizeof(int));
    options_159=reg->options;
    str_160=reg->str;
    re_161=reg->re;
    result_162=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 563, "list$1charph"));
    offset_163=0;
    ovec_max_164=16;
    int start_165[ovec_max_164];
    memset(&start_165, 0, sizeof(int)    *(ovec_max_164)    );
    int end_166[ovec_max_164];
    memset(&end_166, 0, sizeof(int)    *(ovec_max_164)    );
    int ovec_value_167[ovec_max_164*3];
    memset(&ovec_value_167, 0, sizeof(int)    *(ovec_max_164*3)    );
    while((_Bool)1) {
        options_168=2097152;
        len_169=strlen(self);
        regex_result_170=pcre_exec(re_161,(struct pcre_extra*)0,self,len_169,offset_163,options_168,ovec_value_167,ovec_max_164*3);
        for(        i_171=0;        i_171<ovec_max_164;        i_171++        ){
            start_165[i_171]=ovec_value_167[i_171*2];
        }
        for(        i_172=0;        i_172<ovec_max_164;        i_172++        ){
            end_166[i_172]=ovec_value_167[i_172*2+1];
        }
        if(        regex_result_170==1) {
            str_173=charp_substring(self,offset_163,start_165[0]);
            match_strings_174=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 590, "list$1charph"));
            str2_175=block(parent,str_173,match_strings_174);
            list$1charph_push_back(result_162,str2_175);
            if(            offset_163==end_166[0]) {
                offset_163++;
            }
            else {
                offset_163=end_166[0];
            }
        }
        else if(        regex_result_170>1) {
            str_176=charp_substring(self,offset_163,start_165[0]);
            if(            offset_163==end_166[0]) {
                offset_163++;
            }
            else {
                offset_163=end_166[0];
            }
            match_strings_177=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            for(            i_178=1;            i_178<regex_result_170;            i_178++            ){
                match_str_179=charp_substring(self,start_165[i_178],end_166[i_178]);
                list$1charph_push_back(match_strings_177,match_str_179);
            }
            str2_180=block(parent,str_176,match_strings_177);
            list$1charph_push_back(result_162,str2_180);
        }
        else {
            break;
        }
    }
    if(    offset_163<charp_length(self)) {
        str_181=charp_substring(self,offset_163,-1);
        match_strings_182=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 632, "list$1charph"));
        str2_183=block(parent,str_181,match_strings_182);
        list$1charph_push_back(result_162,str2_183);
    }
    __result111__ = gComeFunResultObject = __result_obj__ = result_162;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_184;
int erro_ofs_185;
int options_186;
char* str_187;
struct real_pcre8_or_16* re_188;
struct list$1charph* result_189;
int offset_190;
int ovec_max_191;
int n_195;
int options_196;
int len_197;
int regex_result_198;
int i_199;
int i_200;
char* str_201;
struct list$1charph* match_strings_202;
char* str2_203;
char* str_204;
struct list$1charph* match_strings_205;
int i_206;
char* match_str_207;
char* str2_208;
struct list$1charph* __result112__;
err_184 = (void*)0;
memset(&erro_ofs_185, 0, sizeof(int));
    options_186=reg->options;
    str_187=reg->str;
    re_188=reg->re;
    result_189=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 650, "list$1charph"));
    offset_190=0;
    ovec_max_191=16;
    int start_192[ovec_max_191];
    memset(&start_192, 0, sizeof(int)    *(ovec_max_191)    );
    int end_193[ovec_max_191];
    memset(&end_193, 0, sizeof(int)    *(ovec_max_191)    );
    int ovec_value_194[ovec_max_191*3];
    memset(&ovec_value_194, 0, sizeof(int)    *(ovec_max_191*3)    );
    n_195=0;
    while((_Bool)1) {
        options_196=2097152;
        len_197=strlen(self);
        regex_result_198=pcre_exec(re_188,(struct pcre_extra*)0,self,len_197,offset_190,options_196,ovec_value_194,ovec_max_191*3);
        for(        i_199=0;        i_199<ovec_max_191;        i_199++        ){
            start_192[i_199]=ovec_value_194[i_199*2];
        }
        for(        i_200=0;        i_200<ovec_max_191;        i_200++        ){
            end_193[i_200]=ovec_value_194[i_200*2+1];
        }
        if(        regex_result_198==1) {
            str_201=charp_substring(self,offset_190,start_192[0]);
            match_strings_202=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 679, "list$1charph"));
            str2_203=block(parent,str_201,match_strings_202);
            list$1charph_push_back(result_189,str2_203);
            if(            offset_190==end_193[0]) {
                offset_190++;
            }
            else {
                offset_190=end_193[0];
            }
        }
        else if(        regex_result_198>1) {
            str_204=charp_substring(self,offset_190,start_192[0]);
            if(            offset_190==end_193[0]) {
                offset_190++;
            }
            else {
                offset_190=end_193[0];
            }
            match_strings_205=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 702, "list$1charph"));
            for(            i_206=1;            i_206<regex_result_198;            i_206++            ){
                match_str_207=charp_substring(self,start_192[i_206],end_193[i_206]);
                list$1charph_push_back(match_strings_205,match_str_207);
            }
            str2_208=block(parent,str_204,match_strings_205);
            list$1charph_push_back(result_189,str2_208);
        }
        else {
            break;
        }
        n_195++;
        if(        n_195==count) {
            break;
        }
    }
    __result112__ = gComeFunResultObject = __result_obj__ = result_189;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    strcmp(left->str,right->str)!=0) {
        return (_Bool)0;
    }
    if(    left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(    left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(    left->global!=right->global) {
        return (_Bool)0;
    }
    if(    left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(    left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(    left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(    left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(    left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(    left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* result_209;
int offset_210;
int ovec_max_211;
const char* err_215;
int erro_ofs_216;
int options_217;
char* str_218;
struct real_pcre8_or_16* re_219;
int options_220;
int len_221;
int regex_result_222;
int i_223;
int i_224;
char* str_225;
char* str_226;
int i_227;
char* match_string_228;
struct list$1charph* __result113__;
err_215 = (void*)0;
memset(&erro_ofs_216, 0, sizeof(int));
    result_209=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 766, "list$1charph"));
    offset_210=0;
    ovec_max_211=16;
    int start_212[ovec_max_211];
    memset(&start_212, 0, sizeof(int)    *(ovec_max_211)    );
    int end_213[ovec_max_211];
    memset(&end_213, 0, sizeof(int)    *(ovec_max_211)    );
    int ovec_value_214[ovec_max_211*3];
    memset(&ovec_value_214, 0, sizeof(int)    *(ovec_max_211*3)    );
    options_217=reg->options;
    str_218=reg->str;
    re_219=reg->re;
    while((_Bool)1) {
        options_220=2097152;
        len_221=strlen(self);
        regex_result_222=pcre_exec(re_219,(struct pcre_extra*)0,self,len_221,offset_210,options_220,ovec_value_214,ovec_max_211*3);
        for(        i_223=0;        i_223<ovec_max_211;        i_223++        ){
            start_212[i_223]=ovec_value_214[i_223*2];
        }
        for(        i_224=0;        i_224<ovec_max_211;        i_224++        ){
            end_213[i_224]=ovec_value_214[i_224*2+1];
        }
        if(        regex_result_222==1) {
            str_225=charp_substring(self,start_212[0],end_213[0]);
            list$1charph_push_back(result_209,str_225);
            if(            offset_210==end_213[0]) {
                offset_210++;
            }
            else {
                offset_210=end_213[0];
            }
        }
        else if(        regex_result_222>1) {
            str_226=charp_substring(self,start_212[0],end_213[0]);
            list$1charph_push_back(result_209,str_226);
            if(            offset_210==end_213[0]) {
                offset_210++;
            }
            else {
                offset_210=end_213[0];
            }
            *num_group_string_in_regex=regex_result_222-1;
            for(            i_227=1;            i_227<regex_result_222;            i_227++            ){
                match_string_228=charp_substring(self,start_212[i_227],end_213[i_227]);
                list$1charph_push_back(group_strings,match_string_228);
            }
        }
        else {
            break;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = result_209;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_229;
int len_230;
char* __result114__;
    result_229=__builtin_string(self);
    len_230=strlen(self);
    if(    self[len_230-1]==10) {
        result_229[len_230-1]=0;
    }
    else if(    self[len_230-1]==13) {
        result_229[len_230-1]=0;
    }
    else if(    len_230>2&&self[len_230-2]==13&&self[len_230-1]==10) {
        result_229[len_230-2]=0;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_229;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_231;
char* result_232;
int n_233;
int i_234;
char c_235;
char* __result115__;
    len_231=charp_length(str);
    result_232=(char*)come_calloc(1, sizeof(char)*(1*(len_231*2+1)), "libcomelang-str-gc.c", 860, "char");
    n_233=0;
    for(    i_234=0;    i_234<len_231;    i_234++    ){
        c_235=str[i_234];
        if(        (c_235>=0&&c_235<32)||c_235==127) {
            result_232[n_233++]=94;
            result_232[n_233++]=c_235+65-1;
        }
        else {
            result_232[n_233++]=c_235;
        }
    }
    result_232[n_233]=0;
    __result115__ = gComeFunResultObject = __result_obj__ = result_232;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_236;
char* result_237;
char* __result116__;
    len_236=4*(wcslen(wstr)+1);
    result_237=(char*)come_calloc(1, sizeof(char)*(1*(len_236)), "libcomelang-str-gc.c", 886, "char");
    if(    wcstombs(result_237,wstr,len_236)<0) {
        strncpy(result_237,"",len_236);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_237;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_238;
unsigned int* __result118__;
unsigned int* __result119__;
unsigned int* sub_str_239;
unsigned int* __result120__;
    len_238=wcslen(str);
    if(    len_238==0) {
        __result118__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    if(    head<0) {
        head+=len_238;
    }
    if(    tail<0) {
        tail+=len_238+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result119__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    tail>=len_238) {
        tail=len_238;
    }
    sub_str_239=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_239,sizeof(unsigned int)*(wstring_length(sub_str_239)+1));
    __result120__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result120__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_240;
    head_240=wcsstr(str,search_str);
    if(    head_240==((void*)0)) {
        return default_value;
    }
    return head_240-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_241;
unsigned int* p_242;
int len2_243;
_Bool result_244;
int i_245;
memset(&i_245, 0, sizeof(int));
    len_241=wcslen(search_str);
    p_242=str+wcslen(str)-len_241;
    while(p_242>=str) {
        len2_243=wcslen(p_242);
        result_244=(_Bool)1;
        for(        i_245=0;        i_245<len_241&&i_245<len2_243;        i_245++        ){
            if(            p_242[i_245]!=search_str[i_245]) {
                result_244=(_Bool)0;
            }
        }
        if(        result_244) {
            return (p_242-str);
        }
        p_242--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_246;
unsigned int* result_247;
int i_248;
unsigned int* __result121__;
    len_246=wcslen(str);
    result_247=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_246+1)), "libcomelang-str-gc.c", 986, "int");
    for(    i_248=0;    i_248<len_246;    i_248++    ){
        result_247[i_248]=str[len_246-i_248-1];
    }
    result_247[len_246]=0;
    __result121__ = gComeFunResultObject = __result_obj__ = result_247;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_249;
unsigned int* result_250;
int i_251;
unsigned int* __result122__;
    len_249=wcslen(str)*n+1;
    result_250=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_249)), "libcomelang-str-gc.c", 1001, "int");
    result_250[0]=0;
    for(    i_251=0;    i_251<n;    i_251++    ){
        wcscat(result_250,str);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = result_250;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_252;
unsigned int* result_253;
int n_254;
int i_255;
unsigned int c_256;
unsigned int* __result123__;
    len_252=wchar_tp_length(str);
    result_253=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_252*2+1)), "libcomelang-str-gc.c", 1015, "int");
    n_254=0;
    for(    i_255=0;    i_255<len_252;    i_255++    ){
        c_256=str[i_255];
        if(        (c_256>=0&&c_256<32)||c_256==127) {
            result_253[n_254++]=94;
            result_253[n_254++]=c_256+65-1;
        }
        else {
            result_253[n_254++]=c_256;
        }
    }
    result_253[n_254]=0;
    __result123__ = gComeFunResultObject = __result_obj__ = result_253;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_257;
int ovec_max_258;
const char* err_262;
int erro_ofs_263;
int options_264;
char* str_265;
struct real_pcre8_or_16* re_266;
int n_267;
int options_268;
int len_269;
int regex_result_270;
int i_271;
int i_272;
int i_275;
char* match_string_276;
err_262 = (void*)0;
memset(&erro_ofs_263, 0, sizeof(int));
    offset_257=0;
    ovec_max_258=16;
    int start_259[ovec_max_258];
    memset(&start_259, 0, sizeof(int)    *(ovec_max_258)    );
    int end_260[ovec_max_258];
    memset(&end_260, 0, sizeof(int)    *(ovec_max_258)    );
    int ovec_value_261[ovec_max_258*3];
    memset(&ovec_value_261, 0, sizeof(int)    *(ovec_max_258*3)    );
    options_264=reg->options;
    str_265=reg->str;
    re_266=reg->re;
    n_267=0;
    while((_Bool)1) {
        options_268=2097152;
        len_269=strlen(self);
        regex_result_270=pcre_exec(re_266,(struct pcre_extra*)0,self,len_269,offset_257,options_268,ovec_value_261,ovec_max_258*3);
        for(        i_271=0;        i_271<ovec_max_258;        i_271++        ){
            start_259[i_271]=ovec_value_261[i_271*2];
        }
        for(        i_272=0;        i_272<ovec_max_258;        i_272++        ){
            end_260[i_272]=ovec_value_261[i_272*2+1];
        }
        if(        regex_result_270==1||(group_strings==((void*)0)&&regex_result_270>0)) {
            n_267++;
            if(            n_267==count) {
                return (_Bool)1;
            }
            if(            offset_257==end_260[0]) {
                offset_257++;
            }
            else {
                offset_257=end_260[0];
            }
        }
        else if(        regex_result_270>1) {
            n_267++;
            list$1charph_reset(group_strings);
            for(            i_275=1;            i_275<regex_result_270;            i_275++            ){
                match_string_276=charp_substring(self,start_259[i_275],end_260[i_275]);
                list$1charph_push_back(group_strings,match_string_276);
            }
            if(            n_267==count) {
                return (_Bool)1;
            }
            if(            offset_257==end_260[0]) {
                offset_257++;
            }
            else {
                offset_257=end_260[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_273;
struct list_item$1charph* prev_it_274;
struct list$1charph* __result124__;
    it_273=self->head;
    while(it_273!=((void*)0)) {
        prev_it_274=it_273;
        it_273=it_273->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

int wstring_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
    return left==right;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_277;
unsigned int* __result127__;
    result_277=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1179, "int");
    wcscpy(result_277,left);
    wcscat(result_277,right);
    __result127__ = gComeFunResultObject = __result_obj__ = result_277;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_278;
unsigned int* __result128__;
    result_278=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1189, "int");
    wcscpy(result_278,left);
    wcscat(result_278,right);
    __result128__ = gComeFunResultObject = __result_obj__ = result_278;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_279;
    head_279=strstr(str,search_str);
    if(    head_279==((void*)0)) {
        return default_value;
    }
    return head_279-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_280;
int result_284;
int offset_285;
const char* err_286;
int erro_ofs_287;
int options_288;
char* str_289;
struct real_pcre8_or_16* re_290;
int options_291;
int len_292;
int regex_result_293;
int i_294;
int i_295;
err_286 = (void*)0;
memset(&erro_ofs_287, 0, sizeof(int));
    ovec_max_280=16;
    int start_281[ovec_max_280];
    memset(&start_281, 0, sizeof(int)    *(ovec_max_280)    );
    int end_282[ovec_max_280];
    memset(&end_282, 0, sizeof(int)    *(ovec_max_280)    );
    int ovec_value_283[ovec_max_280*3];
    memset(&ovec_value_283, 0, sizeof(int)    *(ovec_max_280*3)    );
    result_284=default_value;
    offset_285=0;
    options_288=reg->options;
    str_289=reg->str;
    re_290=reg->re;
    while((_Bool)1) {
        options_291=2097152;
        len_292=strlen(self);
        regex_result_293=pcre_exec(re_290,(struct pcre_extra*)0,self,len_292,offset_285,options_291,ovec_value_283,ovec_max_280*3);
        for(        i_294=0;        i_294<ovec_max_280;        i_294++        ){
            start_281[i_294]=ovec_value_283[i_294*2];
        }
        for(        i_295=0;        i_295<ovec_max_280;        i_295++        ){
            end_282[i_295]=ovec_value_283[i_295*2+1];
        }
        if(        regex_result_293==1||regex_result_293>0) {
            result_284=start_281[0];
            break;
        }
        {
            break;
        }
    }
    return result_284;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_296;
char* __result129__;
char* __result130__;
    len_296=strlen(self);
    if(    strcmp(self,"")==0) {
        __result129__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    if(    index<0) {
        index+=len_296;
    }
    if(    index>=len_296) {
        index=len_296-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result130__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_297;
char* result_298;
int i_299;
char* __result131__;
    len_297=strlen(str)*n+1;
    result_298=(char*)come_calloc(1, sizeof(char)*(1*(len_297)), "libcomelang-str-gc.c", 1287, "char");
    result_298[0]=0;
    for(    i_299=0;    i_299<n;    i_299++    ){
        strcat(result_298,str);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_300;
int ovec_max_301;
const char* err_305;
int erro_ofs_306;
int options_307;
char* str_308;
struct real_pcre8_or_16* re_309;
struct buffer* result_310;
int options_311;
int len_312;
int regex_result_313;
int i_314;
int i_315;
char* str_316;
char* str_317;
char* str_318;
char* __result132__;
err_305 = (void*)0;
memset(&erro_ofs_306, 0, sizeof(int));
    offset_300=0;
    ovec_max_301=16;
    int start_302[ovec_max_301];
    memset(&start_302, 0, sizeof(int)    *(ovec_max_301)    );
    int end_303[ovec_max_301];
    memset(&end_303, 0, sizeof(int)    *(ovec_max_301)    );
    int ovec_value_304[ovec_max_301*3];
    memset(&ovec_value_304, 0, sizeof(int)    *(ovec_max_301*3)    );
    options_307=reg->options;
    str_308=reg->str;
    re_309=reg->re;
    result_310=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1315, "buffer"));
    while((_Bool)1) {
        options_311=2097152;
        len_312=strlen(self);
        regex_result_313=pcre_exec(re_309,(struct pcre_extra*)0,self,len_312,offset_300,options_311,ovec_value_304,ovec_max_301*3);
        for(        i_314=0;        i_314<ovec_max_301;        i_314++        ){
            start_302[i_314]=ovec_value_304[i_314*2];
        }
        for(        i_315=0;        i_315<ovec_max_301;        i_315++        ){
            end_303[i_315]=ovec_value_304[i_315*2+1];
        }
        if(        regex_result_313==1) {
            str_316=charp_substring(self,offset_300,start_302[0]);
            buffer_append_str(result_310,str_316);
            buffer_append_str(result_310,replace);
            if(            offset_300==end_303[0]) {
                offset_300++;
            }
            else {
                offset_300=end_303[0];
            }
            if(            !reg->global) {
                str_317=charp_substring(self,offset_300,-1);
                buffer_append_str(result_310,str_317);
                break;
            }
        }
        else {
            str_318=charp_substring(self,offset_300,-1);
            buffer_append_str(result_310,str_318);
            break;
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_310);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_319;
int ovec_max_320;
const char* err_324;
int erro_ofs_325;
int options_326;
char* str_327;
struct real_pcre8_or_16* re_328;
struct buffer* result_329;
int n_330;
int options_331;
int len_332;
int regex_result_333;
int i_334;
int i_335;
char* str_336;
char* str_337;
char* str_338;
char* str_339;
char* __result133__;
err_324 = (void*)0;
memset(&erro_ofs_325, 0, sizeof(int));
    offset_319=0;
    ovec_max_320=16;
    int start_321[ovec_max_320];
    memset(&start_321, 0, sizeof(int)    *(ovec_max_320)    );
    int end_322[ovec_max_320];
    memset(&end_322, 0, sizeof(int)    *(ovec_max_320)    );
    int ovec_value_323[ovec_max_320*3];
    memset(&ovec_value_323, 0, sizeof(int)    *(ovec_max_320*3)    );
    options_326=reg->options;
    str_327=reg->str;
    re_328=reg->re;
    result_329=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1378, "buffer"));
    n_330=0;
    while((_Bool)1) {
        options_331=2097152;
        len_332=strlen(self);
        regex_result_333=pcre_exec(re_328,(struct pcre_extra*)0,self,len_332,offset_319,options_331,ovec_value_323,ovec_max_320*3);
        for(        i_334=0;        i_334<ovec_max_320;        i_334++        ){
            start_321[i_334]=ovec_value_323[i_334*2];
        }
        for(        i_335=0;        i_335<ovec_max_320;        i_335++        ){
            end_322[i_335]=ovec_value_323[i_335*2+1];
        }
        if(        regex_result_333==1) {
            n_330++;
            str_336=charp_substring(self,offset_319,start_321[0]);
            buffer_append_str(result_329,str_336);
            buffer_append_str(result_329,replace);
            if(            offset_319==end_322[0]) {
                offset_319++;
            }
            else {
                offset_319=end_322[0];
            }
            if(            !reg->global) {
                str_337=charp_substring(self,offset_319,-1);
                buffer_append_str(result_329,str_337);
                break;
            }
            if(            n_330==count) {
                str_338=charp_substring(self,offset_319,-1);
                buffer_append_str(result_329,str_338);
                break;
            }
        }
        else {
            str_339=charp_substring(self,offset_319,-1);
            buffer_append_str(result_329,str_339);
            break;
        }
    }
    __result133__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_329);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_340;
struct buffer* buf_341;
int i_342;
struct list$1charph* __result134__;
    result_340=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1437, "list$1charph"));
    buf_341=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1439, "buffer"));
    for(    i_342=0;    i_342<charp_length(self);    i_342++    ){
        if(        strstr(self+i_342,str)==self+i_342) {
            list$1charph_push_back(result_340,__builtin_string(buf_341->buf));
            buffer_reset(buf_341);
            i_342+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_341,self[i_342]);
        }
    }
    if(    buffer_length(buf_341)!=0) {
        list$1charph_push_back(result_340,__builtin_string(buf_341->buf));
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_340;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* result_343;
int offset_344;
int ovec_max_345;
const char* err_349;
int erro_ofs_350;
int options_351;
char* str_352;
struct real_pcre8_or_16* re_353;
int options_354;
int len_355;
int regex_result_356;
int i_357;
int i_358;
char* str_359;
char* str_360;
int i_361;
char* match_string_362;
struct list$1charph* __result135__;
err_349 = (void*)0;
memset(&erro_ofs_350, 0, sizeof(int));
    result_343=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1460, "list$1charph"));
    offset_344=0;
    ovec_max_345=16;
    int start_346[ovec_max_345];
    memset(&start_346, 0, sizeof(int)    *(ovec_max_345)    );
    int end_347[ovec_max_345];
    memset(&end_347, 0, sizeof(int)    *(ovec_max_345)    );
    int ovec_value_348[ovec_max_345*3];
    memset(&ovec_value_348, 0, sizeof(int)    *(ovec_max_345*3)    );
    options_351=reg->options;
    str_352=reg->str;
    re_353=reg->re;
    while((_Bool)1) {
        options_354=2097152;
        len_355=strlen(self);
        regex_result_356=pcre_exec(re_353,(struct pcre_extra*)0,self,len_355,offset_344,options_354,ovec_value_348,ovec_max_345*3);
        for(        i_357=0;        i_357<ovec_max_345;        i_357++        ){
            start_346[i_357]=ovec_value_348[i_357*2];
        }
        for(        i_358=0;        i_358<ovec_max_345;        i_358++        ){
            end_347[i_358]=ovec_value_348[i_358*2+1];
        }
        if(        regex_result_356==1) {
            str_359=charp_substring(self,start_346[0],end_347[0]);
            list$1charph_push_back(result_343,str_359);
            if(            offset_344==end_347[0]) {
                offset_344++;
            }
            else {
                offset_344=end_347[0];
            }
        }
        else if(        regex_result_356>1) {
            str_360=charp_substring(self,start_346[0],end_347[0]);
            list$1charph_push_back(result_343,str_360);
            if(            offset_344==end_347[0]) {
                offset_344++;
            }
            else {
                offset_344=end_347[0];
            }
            for(            i_361=1;            i_361<regex_result_356;            i_361++            ){
                match_string_362=charp_substring(self,start_346[i_361],end_347[i_361]);
                list$1charph_push_back(result_343,match_string_362);
            }
        }
        else {
            break;
        }
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_343;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_363;
int erro_ofs_364;
int options_365;
char* str_366;
struct real_pcre8_or_16* re_367;
struct list$1charph* result_368;
int offset_369;
int ovec_max_370;
int options_374;
int len_375;
int regex_result_376;
int i_377;
int i_378;
char* str_379;
char* str_380;
int i_381;
char* match_str_382;
char* str_383;
struct list$1charph* __result136__;
err_363 = (void*)0;
memset(&erro_ofs_364, 0, sizeof(int));
    options_365=reg->options;
    str_366=reg->str;
    re_367=reg->re;
    result_368=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1541, "list$1charph"));
    offset_369=0;
    ovec_max_370=16;
    int start_371[ovec_max_370];
    memset(&start_371, 0, sizeof(int)    *(ovec_max_370)    );
    int end_372[ovec_max_370];
    memset(&end_372, 0, sizeof(int)    *(ovec_max_370)    );
    int ovec_value_373[ovec_max_370*3];
    memset(&ovec_value_373, 0, sizeof(int)    *(ovec_max_370*3)    );
    while((_Bool)1) {
        options_374=2097152;
        len_375=strlen(self);
        regex_result_376=pcre_exec(re_367,(struct pcre_extra*)0,self,len_375,offset_369,options_374,ovec_value_373,ovec_max_370*3);
        for(        i_377=0;        i_377<ovec_max_370;        i_377++        ){
            start_371[i_377]=ovec_value_373[i_377*2];
        }
        for(        i_378=0;        i_378<ovec_max_370;        i_378++        ){
            end_372[i_378]=ovec_value_373[i_378*2+1];
        }
        if(        regex_result_376==1) {
            str_379=charp_substring(self,offset_369,start_371[0]);
            list$1charph_push_back(result_368,str_379);
            if(            offset_369==end_372[0]) {
                offset_369++;
            }
            else {
                offset_369=end_372[0];
            }
        }
        else if(        regex_result_376>1) {
            str_380=charp_substring(self,offset_369,start_371[0]);
            list$1charph_push_back(result_368,str_380);
            if(            offset_369==end_372[0]) {
                offset_369++;
            }
            else {
                offset_369=end_372[0];
            }
            for(            i_381=1;            i_381<regex_result_376;            i_381++            ){
                match_str_382=charp_substring(self,start_371[i_381],end_372[i_381]);
                list$1charph_push_back(result_368,match_str_382);
            }
        }
        else {
            break;
        }
    }
    if(    offset_369<charp_length(self)) {
        str_383=charp_substring(self,offset_369,-1);
        list$1charph_push_back(result_368,str_383);
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_384;
int ovec_max_385;
const char* err_389;
int erro_ofs_390;
int options_391;
char* str_392;
struct real_pcre8_or_16* re_393;
int options_394;
int len_395;
int regex_result_396;
int i_397;
int i_398;
err_389 = (void*)0;
memset(&erro_ofs_390, 0, sizeof(int));
    offset_384=0;
    ovec_max_385=16;
    int start_386[ovec_max_385];
    memset(&start_386, 0, sizeof(int)    *(ovec_max_385)    );
    int end_387[ovec_max_385];
    memset(&end_387, 0, sizeof(int)    *(ovec_max_385)    );
    int ovec_value_388[ovec_max_385*3];
    memset(&ovec_value_388, 0, sizeof(int)    *(ovec_max_385*3)    );
    options_391=reg->options;
    str_392=reg->str;
    re_393=reg->re;
    while((_Bool)1) {
        options_394=2097152;
        len_395=strlen(self);
        regex_result_396=pcre_exec(re_393,(struct pcre_extra*)0,self,len_395,offset_384,options_394,ovec_value_388,ovec_max_385*3);
        for(        i_397=0;        i_397<ovec_max_385;        i_397++        ){
            start_386[i_397]=ovec_value_388[i_397*2];
        }
        for(        i_398=0;        i_398<ovec_max_385;        i_398++        ){
            end_387[i_398]=ovec_value_388[i_398*2+1];
        }
        if(        regex_result_396>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
const char* err_399;
int erro_ofs_400;
int options_401;
char* str_402;
struct real_pcre8_or_16* re_403;
struct list$1charph* result_404;
int offset_405;
int ovec_max_406;
int n_410;
int options_411;
int len_412;
int regex_result_413;
int i_414;
int i_415;
char* str_416;
char* str_417;
int i_418;
char* match_str_419;
char* str_420;
struct list$1charph* __result137__;
err_399 = (void*)0;
memset(&erro_ofs_400, 0, sizeof(int));
    options_401=reg->options;
    str_402=reg->str;
    re_403=reg->re;
    result_404=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1663, "list$1charph"));
    offset_405=0;
    ovec_max_406=16;
    int start_407[ovec_max_406];
    memset(&start_407, 0, sizeof(int)    *(ovec_max_406)    );
    int end_408[ovec_max_406];
    memset(&end_408, 0, sizeof(int)    *(ovec_max_406)    );
    int ovec_value_409[ovec_max_406*3];
    memset(&ovec_value_409, 0, sizeof(int)    *(ovec_max_406*3)    );
    n_410=0;
    while((_Bool)1) {
        options_411=2097152;
        len_412=strlen(self);
        regex_result_413=pcre_exec(re_403,(struct pcre_extra*)0,self,len_412,offset_405,options_411,ovec_value_409,ovec_max_406*3);
        for(        i_414=0;        i_414<ovec_max_406;        i_414++        ){
            start_407[i_414]=ovec_value_409[i_414*2];
        }
        for(        i_415=0;        i_415<ovec_max_406;        i_415++        ){
            end_408[i_415]=ovec_value_409[i_415*2+1];
        }
        if(        regex_result_413==1) {
            str_416=charp_substring(self,offset_405,start_407[0]);
            list$1charph_push_back(result_404,str_416);
            if(            offset_405==end_408[0]) {
                offset_405++;
            }
            else {
                offset_405=end_408[0];
            }
        }
        else if(        regex_result_413>1) {
            str_417=charp_substring(self,offset_405,start_407[0]);
            list$1charph_push_back(result_404,str_417);
            if(            offset_405==end_408[0]) {
                offset_405++;
            }
            else {
                offset_405=end_408[0];
            }
            for(            i_418=1;            i_418<regex_result_413;            i_418++            ){
                match_str_419=charp_substring(self,start_407[i_418],end_408[i_418]);
                list$1charph_push_back(result_404,match_str_419);
            }
        }
        else {
            break;
        }
        n_410++;
        if(        maxsplit==n_410) {
            break;
        }
    }
    if(    offset_405<charp_length(self)) {
        str_420=charp_substring(self,offset_405,-1);
        list$1charph_push_back(result_404,str_420);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = result_404;
    gComeFunResultObject = (void*)0;
    return __result137__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_421;
int erro_ofs_422;
int options_423;
char* str_424;
struct real_pcre8_or_16* re_425;
char* self2_426;
int ovec_max_427;
int result_431;
int offset_432;
int n_433;
int options_434;
int len_435;
int regex_result_436;
int i_437;
int i_438;
err_421 = (void*)0;
memset(&erro_ofs_422, 0, sizeof(int));
    options_423=reg->options;
    str_424=reg->str;
    re_425=reg->re;
    self2_426=charp_reverse(self);
    ovec_max_427=16;
    int start_428[ovec_max_427];
    memset(&start_428, 0, sizeof(int)    *(ovec_max_427)    );
    int end_429[ovec_max_427];
    memset(&end_429, 0, sizeof(int)    *(ovec_max_427)    );
    int ovec_value_430[ovec_max_427*3];
    memset(&ovec_value_430, 0, sizeof(int)    *(ovec_max_427*3)    );
    result_431=default_value;
    offset_432=0;
    n_433=0;
    while((_Bool)1) {
        options_434=2097152;
        len_435=strlen(self2_426);
        regex_result_436=pcre_exec(re_425,(struct pcre_extra*)0,self2_426,len_435,offset_432,options_434,ovec_value_430,ovec_max_427*3);
        for(        i_437=0;        i_437<ovec_max_427;        i_437++        ){
            start_428[i_437]=ovec_value_430[i_437*2];
        }
        for(        i_438=0;        i_438<ovec_max_427;        i_438++        ){
            end_429[i_438]=ovec_value_430[i_438*2+1];
        }
        if(        regex_result_436>0) {
            n_433++;
            if(            offset_432==end_429[0]) {
                offset_432++;
            }
            else {
                offset_432=end_429[0];
            }
            if(            n_433==count) {
                result_431=strlen(self)-end_429[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_431;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_439;
int ovec_max_440;
const char* err_444;
int erro_ofs_445;
int options_446;
char* str_447;
struct real_pcre8_or_16* re_448;
int n_449;
int options_450;
int len_451;
int regex_result_452;
int i_453;
int i_454;
err_444 = (void*)0;
memset(&erro_ofs_445, 0, sizeof(int));
    offset_439=0;
    ovec_max_440=16;
    int start_441[ovec_max_440];
    memset(&start_441, 0, sizeof(int)    *(ovec_max_440)    );
    int end_442[ovec_max_440];
    memset(&end_442, 0, sizeof(int)    *(ovec_max_440)    );
    int ovec_value_443[ovec_max_440*3];
    memset(&ovec_value_443, 0, sizeof(int)    *(ovec_max_440*3)    );
    options_446=reg->options;
    str_447=reg->str;
    re_448=reg->re;
    n_449=0;
    while((_Bool)1) {
        options_450=2097152;
        len_451=strlen(self);
        regex_result_452=pcre_exec(re_448,(struct pcre_extra*)0,self,len_451,offset_439,options_450,ovec_value_443,ovec_max_440*3);
        for(        i_453=0;        i_453<ovec_max_440;        i_453++        ){
            start_441[i_453]=ovec_value_443[i_453*2];
        }
        for(        i_454=0;        i_454<ovec_max_440;        i_454++        ){
            end_442[i_454]=ovec_value_443[i_454*2+1];
        }
        if(        regex_result_452>0) {
            n_449++;
            if(            count==n_449) {
                return (_Bool)1;
            }
            if(            offset_439==end_442[0]) {
                offset_439++;
            }
            else {
                offset_439=end_442[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_455;
int ovec_max_456;
const char* err_460;
int erro_ofs_461;
int options_462;
char* str_463;
struct real_pcre8_or_16* re_464;
struct buffer* result_465;
int options_466;
int len_467;
int regex_result_468;
int i_469;
int i_470;
char* str_471;
struct list$1charph* group_strings_472;
char* match_string_473;
char* block_result_474;
char* str_475;
char* str_476;
struct list$1charph* group_strings_477;
int i_478;
char* match_string_479;
char* match_string_480;
char* block_result_481;
char* str_482;
char* str_483;
char* __result138__;
err_460 = (void*)0;
memset(&erro_ofs_461, 0, sizeof(int));
    offset_455=0;
    ovec_max_456=16;
    int start_457[ovec_max_456];
    memset(&start_457, 0, sizeof(int)    *(ovec_max_456)    );
    int end_458[ovec_max_456];
    memset(&end_458, 0, sizeof(int)    *(ovec_max_456)    );
    int ovec_value_459[ovec_max_456*3];
    memset(&ovec_value_459, 0, sizeof(int)    *(ovec_max_456*3)    );
    options_462=reg->options;
    str_463=reg->str;
    re_464=reg->re;
    result_465=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1875, "buffer"));
    while((_Bool)1) {
        options_466=2097152;
        len_467=strlen(self);
        regex_result_468=pcre_exec(re_464,(struct pcre_extra*)0,self,len_467,offset_455,options_466,ovec_value_459,ovec_max_456*3);
        for(        i_469=0;        i_469<ovec_max_456;        i_469++        ){
            start_457[i_469]=ovec_value_459[i_469*2];
        }
        for(        i_470=0;        i_470<ovec_max_456;        i_470++        ){
            end_458[i_470]=ovec_value_459[i_470*2+1];
        }
        if(        regex_result_468==1) {
            str_471=charp_substring(self,offset_455,start_457[0]);
            buffer_append_str(result_465,str_471);
            group_strings_472=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1895, "list$1charph"));
            match_string_473=charp_substring(self,start_457[0],end_458[0]);
            list$1charph_push_back(group_strings_472,charp_substring(self,start_457[0],end_458[0]));
            block_result_474=block(parent,match_string_473,group_strings_472);
            buffer_append_str(result_465,block_result_474);
            if(            offset_455==end_458[0]) {
                offset_455++;
            }
            else {
                offset_455=end_458[0];
            }
            if(            !reg->global) {
                str_475=charp_substring(self,offset_455,-1);
                buffer_append_str(result_465,str_475);
                break;
            }
        }
        else if(        regex_result_468>1) {
            str_476=charp_substring(self,offset_455,start_457[0]);
            buffer_append_str(result_465,str_476);
            if(            offset_455==end_458[0]) {
                offset_455++;
            }
            else {
                offset_455=end_458[0];
            }
            group_strings_477=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1930, "list$1charph"));
            for(            i_478=1;            i_478<regex_result_468;            i_478++            ){
                match_string_479=charp_substring(self,start_457[i_478],end_458[i_478]);
                list$1charph_push_back(group_strings_477,match_string_479);
            }
            match_string_480=charp_substring(self,start_457[0],end_458[0]);
            block_result_481=block(parent,match_string_480,group_strings_477);
            buffer_append_str(result_465,block_result_481);
            if(            !reg->global) {
                str_482=charp_substring(self,offset_455,-1);
                buffer_append_str(result_465,str_482);
                break;
            }
        }
        else {
            str_483=charp_substring(self,offset_455,-1);
            buffer_append_str(result_465,str_483);
            break;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_465);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_484;
int ovec_max_485;
const char* err_489;
int erro_ofs_490;
int options_491;
char* str_492;
struct real_pcre8_or_16* re_493;
struct buffer* result_494;
int n_495;
int options_496;
int len_497;
int regex_result_498;
int i_499;
int i_500;
char* str_501;
struct list$1charph* group_strings_502;
char* match_string_503;
char* block_result_504;
char* str_505;
char* str_506;
char* str_507;
struct list$1charph* group_strings_508;
int i_509;
char* match_string_510;
char* match_string_511;
char* block_result_512;
char* str_513;
char* str_514;
char* str_515;
char* __result139__;
err_489 = (void*)0;
memset(&erro_ofs_490, 0, sizeof(int));
    offset_484=0;
    ovec_max_485=16;
    int start_486[ovec_max_485];
    memset(&start_486, 0, sizeof(int)    *(ovec_max_485)    );
    int end_487[ovec_max_485];
    memset(&end_487, 0, sizeof(int)    *(ovec_max_485)    );
    int ovec_value_488[ovec_max_485*3];
    memset(&ovec_value_488, 0, sizeof(int)    *(ovec_max_485*3)    );
    options_491=reg->options;
    str_492=reg->str;
    re_493=reg->re;
    result_494=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1976, "buffer"));
    n_495=0;
    while((_Bool)1) {
        options_496=2097152;
        len_497=strlen(self);
        regex_result_498=pcre_exec(re_493,(struct pcre_extra*)0,self,len_497,offset_484,options_496,ovec_value_488,ovec_max_485*3);
        for(        i_499=0;        i_499<ovec_max_485;        i_499++        ){
            start_486[i_499]=ovec_value_488[i_499*2];
        }
        for(        i_500=0;        i_500<ovec_max_485;        i_500++        ){
            end_487[i_500]=ovec_value_488[i_500*2+1];
        }
        if(        regex_result_498==1) {
            n_495++;
            str_501=charp_substring(self,offset_484,start_486[0]);
            buffer_append_str(result_494,str_501);
            group_strings_502=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1999, "list$1charph"));
            list$1charph_push_back(group_strings_502,charp_substring(self,start_486[0],end_487[0]));
            match_string_503=charp_substring(self,start_486[0],end_487[0]);
            block_result_504=block(parent,match_string_503,group_strings_502);
            buffer_append_str(result_494,block_result_504);
            if(            offset_484==end_487[0]) {
                offset_484++;
            }
            else {
                offset_484=end_487[0];
            }
            if(            !reg->global) {
                str_505=charp_substring(self,offset_484,-1);
                buffer_append_str(result_494,str_505);
                break;
            }
            if(            n_495==count) {
                str_506=charp_substring(self,offset_484,-1);
                buffer_append_str(result_494,str_506);
                break;
            }
        }
        else if(        regex_result_498>1) {
            n_495++;
            str_507=charp_substring(self,offset_484,start_486[0]);
            buffer_append_str(result_494,str_507);
            if(            offset_484==end_487[0]) {
                offset_484++;
            }
            else {
                offset_484=end_487[0];
            }
            group_strings_508=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2042, "list$1charph"));
            for(            i_509=1;            i_509<regex_result_498;            i_509++            ){
                match_string_510=charp_substring(self,start_486[i_509],end_487[i_509]);
                list$1charph_push_back(group_strings_508,match_string_510);
            }
            match_string_511=charp_substring(self,start_486[0],end_487[0]);
            block_result_512=block(parent,match_string_511,group_strings_508);
            buffer_append_str(result_494,block_result_512);
            if(            !reg->global) {
                str_513=charp_substring(self,offset_484,-1);
                buffer_append_str(result_494,str_513);
                break;
            }
            if(            n_495==count) {
                str_514=charp_substring(self,offset_484,-1);
                buffer_append_str(result_494,str_514);
                break;
            }
        }
        else {
            str_515=charp_substring(self,offset_484,-1);
            buffer_append_str(result_494,str_515);
            break;
        }
    }
    __result139__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_494);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_516;
unsigned int* p_517;
    result_516=0;
    p_517=value;
    while(*p_517) {
        result_516+=(*p_517);
        p_517++;
    }
    return result_516;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
char* __result140__;
    __result140__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_518;
char* __result141__;
char* __result142__;
    result_518=__builtin_string(str);
    if(    result_518[string_length(result_518)-1]==10) {
        __result141__ = gComeFunResultObject = __result_obj__ = string_substring(result_518,0,-2);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result143__;
char* result_519;
char* result2_520;
char* __result144__;
    if(    path==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    result_519=realpath(path,((void*)0));
    result2_520=__builtin_string(result_519);
    free(result_519);
    __result144__ = gComeFunResultObject = __result_obj__ = result2_520;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result145__;
char* __result146__;
    if(    path==((void*)0)) {
        __result145__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result146__;
}

unsigned long unsigned  int xwcslen(unsigned int* wstr){
unsigned int* p_521;
unsigned long unsigned  int len_522;
    p_521=wstr;
    len_522=0;
    while(*p_521) {
        p_521++;
        len_522++;
    }
    return len_522;
}

