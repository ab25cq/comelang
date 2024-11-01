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
_Bool bool_equals(_Bool self, void* right);
_Bool char_equals(char self, void* right);
_Bool int_equals(int self, void* right);
_Bool short_equals(short short self, void* right);
_Bool long_equals(long self, void* right);
_Bool size_t_equals(long self, void* right);
_Bool float_equals(float self, void* right);
_Bool double_equals(double self, void* right);
_Bool charp_equals(char* self, void* right);
_Bool string_equals(char* self, void* right);
_Bool string_operator_equals(char* self, void* right);
_Bool charp_operator_equals(char* self, void* right);
_Bool string_operator_not_equals(char* self, void* right);
_Bool charp_operator_not_equals(char* self, void* right);
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
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
struct integer* integer_operator_add(struct integer* left, struct integer* right);
struct integer* integer_operator_sub(struct integer* left, struct integer* right);
struct integer* integer_operator_mult(struct integer* left, struct integer* right);
struct integer* integer_operator_div(struct integer* left, struct integer* right);
struct integer* integer_operator_mod(struct integer* left, struct integer* right);
struct integer* integer_operator_lshift(struct integer* left, struct integer* right);
struct integer* integer_operator_rshift(struct integer* left, struct integer* right);
struct integer* integer_operator_gteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lt(struct integer* left, struct integer* right);
struct integer* integer_operator_gt(struct integer* left, struct integer* right);
struct integer* integer_operator_and(struct integer* left, struct integer* right);
struct integer* integer_operator_xor(struct integer* left, struct integer* right);
struct integer* integer_operator_or(struct integer* left, struct integer* right);
struct integer* integer_operator_andand(struct integer* left, struct integer* right);
struct integer* integer_operator_oror(struct integer* left, struct integer* right);
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
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2342, "buffer"));
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
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2349, "buffer"));
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
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2358, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2365, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2372, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2379, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2386, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2686, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2691, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2696, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2701, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2706, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2739, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2741, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2746, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2748, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2753, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2755, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2760, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2762, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2767, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2769, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2774, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2776, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2781, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2783, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2788, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2793, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2798, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2803, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2808, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2813, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2818, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2823, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2828, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2833, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2838, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2843, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2848, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2853, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
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
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1005, "char");
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
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1005, "char*");
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
    self->items=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "comelang.h", 1005, "short");
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
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1005, "int");
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
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1005, "long");
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
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1005, "float");
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
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1005, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}



















































void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_43;
    reg_43=obj;
    if(    reg_43&&reg_43->re) {
        free(reg_43->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_44;
int erro_ofs_45;
int options_46;
_Bool __exception_result_var_b1;
struct come_regex* __result92__;
err_44 = (void*)0;
memset(&erro_ofs_45, 0, sizeof(int));
    options_46=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_46;
    self->re=pcre_compile(str,options_46,&err_44,&erro_ofs_45,((void*)0));
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
struct come_regex* result_47;
const char* err_48;
int erro_ofs_49;
struct come_regex* __result96__;
err_48 = (void*)0;
memset(&erro_ofs_49, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_47=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_47->str=string_clone(reg->str);
    result_47->ignore_case=reg->ignore_case;
    result_47->multiline=reg->multiline;
    result_47->global=reg->global;
    result_47->extended=reg->extended;
    result_47->dotall=reg->dotall;
    result_47->anchored=reg->anchored;
    result_47->dollar_endonly=reg->dollar_endonly;
    result_47->ungreedy=reg->ungreedy;
    result_47->options=reg->options;
    result_47->re=pcre_compile(result_47->str,result_47->options,&err_48,&erro_ofs_49,((void*)0));
    if(    result_47->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_47->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_47,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result96__ = gComeFunResultObject = __result_obj__ = result_47;
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
char* result_50;
int i_51;
char* __result98__;
    result_50=__builtin_string(str);
    for(    i_51=0;    i_51<strlen(str);    i_51++    ){
        if(        str[i_51]>=65&&str[i_51]<=90) {
            result_50[i_51]=str[i_51]-65+97;
        }
    }
    __result98__ = gComeFunResultObject = __result_obj__ = result_50;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_52;
int i_53;
char* __result99__;
    result_52=__builtin_string(str);
    for(    i_53=0;    i_53<strlen(str);    i_53++    ){
        if(        str[i_53]>=97&&str[i_53]<=122) {
            result_52[i_53]=str[i_53]-97+65;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_52;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result100__;
int len_54;
unsigned int* __result101__;
unsigned int* __result102__;
unsigned int* __result103__;
unsigned int* result_55;
unsigned int* __result104__;
    if(    str==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    len_54=wcslen(str);
    if(    head<0) {
        head+=len_54;
    }
    if(    tail<0) {
        tail+=len_54+1;
    }
    if(    head>tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_54) {
        tail=len_54;
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
    result_55=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 181, "int");
    memcpy(result_55,str+head,sizeof(unsigned int)*(tail-head));
    result_55[tail-head]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = result_55;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result105__;
int len_56;
unsigned int* wstr_57;
int ret_58;
unsigned int* __result106__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_56=strlen(str);
    wstr_57=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_56+1)), "libcomelang-str-gc.c", 196, "int");
    ret_58=mbstowcs(wstr_57,str,len_56+1);
    wstr_57[ret_58]=0;
    if(    ret_58<0) {
        wstr_57[0]=0;
    }
    __result106__ = gComeFunResultObject = __result_obj__ = wstr_57;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_59;
int len_60;
int i_61;
int len2_62;
int j_63;
memset(&j_63, 0, sizeof(int));
    n_59=0;
    len_60=strlen(str);
    for(    i_61=0;    i_61<len_60;    i_61++    ){
        len2_62=strlen(search_str);
        for(        j_63=0;        j_63<len2_62;        j_63++        ){
            if(            str[i_61+j_63]!=search_str[j_63]) {
                break;
            }
        }
        if(        j_63==len2_62) {
            n_59++;
            if(            n_59==count) {
                return i_61;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_64;
int result_68;
int offset_69;
const char* err_70;
int erro_ofs_71;
int options_72;
char* str_73;
struct real_pcre8_or_16* re_74;
int n_75;
int options_76;
int len_77;
int regex_result_78;
int i_79;
int i_80;
err_70 = (void*)0;
memset(&erro_ofs_71, 0, sizeof(int));
    ovec_max_64=16;
    int start_65[ovec_max_64];
    memset(&start_65, 0, sizeof(int)    *(ovec_max_64)    );
    int end_66[ovec_max_64];
    memset(&end_66, 0, sizeof(int)    *(ovec_max_64)    );
    int ovec_value_67[ovec_max_64*3];
    memset(&ovec_value_67, 0, sizeof(int)    *(ovec_max_64*3)    );
    result_68=default_value;
    offset_69=0;
    options_72=reg->options;
    str_73=reg->str;
    re_74=reg->re;
    n_75=0;
    while((_Bool)1) {
        options_76=2097152;
        len_77=strlen(self);
        regex_result_78=pcre_exec(re_74,(struct pcre_extra*)0,self,len_77,offset_69,options_76,ovec_value_67,ovec_max_64*3);
        for(        i_79=0;        i_79<ovec_max_64;        i_79++        ){
            start_65[i_79]=ovec_value_67[i_79*2];
        }
        for(        i_80=0;        i_80<ovec_max_64;        i_80++        ){
            end_66[i_80]=ovec_value_67[i_80*2+1];
        }
        if(        regex_result_78>0) {
            n_75++;
            if(            offset_69==end_66[0]) {
                offset_69++;
            }
            else {
                offset_69=end_66[0];
            }
            if(            n_75==count) {
                result_68=start_65[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_68;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_81;
char* p_82;
    len_81=strlen(search_str);
    p_82=str+strlen(str)-len_81;
    while(p_82>=str) {
        if(        strncmp(p_82,search_str,len_81)==0) {
            return p_82-str;
        }
        p_82--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_83;
int erro_ofs_84;
int options_85;
char* str_86;
struct real_pcre8_or_16* re_87;
char* self2_88;
int ovec_max_89;
int result_93;
int offset_94;
int options_95;
int len_96;
int regex_result_97;
int i_98;
int i_99;
err_83 = (void*)0;
memset(&erro_ofs_84, 0, sizeof(int));
    options_85=reg->options;
    str_86=reg->str;
    re_87=reg->re;
    self2_88=charp_reverse(self);
    ovec_max_89=16;
    int start_90[ovec_max_89];
    memset(&start_90, 0, sizeof(int)    *(ovec_max_89)    );
    int end_91[ovec_max_89];
    memset(&end_91, 0, sizeof(int)    *(ovec_max_89)    );
    int ovec_value_92[ovec_max_89*3];
    memset(&ovec_value_92, 0, sizeof(int)    *(ovec_max_89*3)    );
    result_93=default_value;
    offset_94=0;
    while((_Bool)1) {
        options_95=2097152;
        len_96=strlen(self2_88);
        regex_result_97=pcre_exec(re_87,(struct pcre_extra*)0,self2_88,len_96,offset_94,options_95,ovec_value_92,ovec_max_89*3);
        for(        i_98=0;        i_98<ovec_max_89;        i_98++        ){
            start_90[i_98]=ovec_value_92[i_98*2];
        }
        for(        i_99=0;        i_99<ovec_max_89;        i_99++        ){
            end_91[i_99]=ovec_value_92[i_99*2+1];
        }
        if(        regex_result_97==1||regex_result_97>0) {
            result_93=strlen(self)-1-start_90[0];
            break;
        }
        {
            break;
        }
    }
    return result_93;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_100;
char* p_101;
int n_102;
    len_100=strlen(search_str);
    p_101=str+strlen(str)-len_100;
    n_102=0;
    while(p_101>=str) {
        if(        strncmp(p_101,search_str,len_100)==0) {
            n_102++;
            if(            n_102==count) {
                return p_101-str;
            }
        }
        p_101--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_103;
int offset_104;
int ovec_max_105;
const char* err_109;
int erro_ofs_110;
int options_111;
char* str_112;
struct real_pcre8_or_16* re_113;
int options_114;
int len_115;
int regex_result_116;
int i_117;
int i_118;
char* str_119;
struct list$1charph* group_strings_120;
char* str2_121;
char* str_125;
struct list$1charph* group_strings_126;
int i_127;
char* match_string_128;
char* str2_129;
struct list$1charph* __result109__;
err_109 = (void*)0;
memset(&erro_ofs_110, 0, sizeof(int));
    result_103=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 382, "list$1charph"));
    offset_104=0;
    ovec_max_105=16;
    int start_106[ovec_max_105];
    memset(&start_106, 0, sizeof(int)    *(ovec_max_105)    );
    int end_107[ovec_max_105];
    memset(&end_107, 0, sizeof(int)    *(ovec_max_105)    );
    int ovec_value_108[ovec_max_105*3];
    memset(&ovec_value_108, 0, sizeof(int)    *(ovec_max_105*3)    );
    options_111=reg->options;
    str_112=reg->str;
    re_113=reg->re;
    while((_Bool)1) {
        options_114=2097152;
        len_115=strlen(self);
        regex_result_116=pcre_exec(re_113,(struct pcre_extra*)0,self,len_115,offset_104,options_114,ovec_value_108,ovec_max_105*3);
        for(        i_117=0;        i_117<ovec_max_105;        i_117++        ){
            start_106[i_117]=ovec_value_108[i_117*2];
        }
        for(        i_118=0;        i_118<ovec_max_105;        i_118++        ){
            end_107[i_118]=ovec_value_108[i_118*2+1];
        }
        if(        regex_result_116==1) {
            str_119=charp_substring(self,start_106[0],end_107[0]);
            group_strings_120=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 416, "list$1charph"));
            str2_121=block(parent,str_119,group_strings_120);
            list$1charph_push_back(result_103,str2_121);
            if(            offset_104==end_107[0]) {
                offset_104++;
            }
            else {
                offset_104=end_107[0];
            }
        }
        else if(        regex_result_116>1) {
            str_125=charp_substring(self,start_106[0],end_107[0]);
            group_strings_126=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 433, "list$1charph"));
            for(            i_127=1;            i_127<regex_result_116;            i_127++            ){
                match_string_128=charp_substring(self,start_106[i_127],end_107[i_127]);
                list$1charph_push_back(group_strings_126,match_string_128);
            }
            str2_129=block(parent,str_125,group_strings_126);
            list$1charph_push_back(result_103,str2_129);
            if(            offset_104==end_107[0]) {
                offset_104++;
            }
            else {
                offset_104=end_107[0];
            }
        }
        else {
            break;
        }
    }
    __result109__ = gComeFunResultObject = __result_obj__ = result_103;
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
struct list_item$1charph* litem_122;
struct list_item$1charph* litem_123;
struct list_item$1charph* litem_124;
struct list$1charph* __result108__;
    if(    self->len==0) {
        litem_122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 223, "list_item$1charph");
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 233, "list_item$1charph");
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 243, "list_item$1charph");
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_130;
int offset_131;
int ovec_max_132;
const char* err_136;
int erro_ofs_137;
int options_138;
char* str_139;
struct real_pcre8_or_16* re_140;
int n_141;
int options_142;
int len_143;
int regex_result_144;
int i_145;
int i_146;
char* str_147;
struct list$1charph* group_strings_148;
char* str2_149;
char* str_150;
struct list$1charph* group_strings_151;
int i_152;
char* match_string_153;
char* str2_154;
struct list$1charph* __result110__;
err_136 = (void*)0;
memset(&erro_ofs_137, 0, sizeof(int));
    result_130=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 463, "list$1charph"));
    offset_131=0;
    ovec_max_132=16;
    int start_133[ovec_max_132];
    memset(&start_133, 0, sizeof(int)    *(ovec_max_132)    );
    int end_134[ovec_max_132];
    memset(&end_134, 0, sizeof(int)    *(ovec_max_132)    );
    int ovec_value_135[ovec_max_132*3];
    memset(&ovec_value_135, 0, sizeof(int)    *(ovec_max_132*3)    );
    options_138=reg->options;
    str_139=reg->str;
    re_140=reg->re;
    n_141=0;
    while((_Bool)1) {
        options_142=2097152;
        len_143=strlen(self);
        regex_result_144=pcre_exec(re_140,(struct pcre_extra*)0,self,len_143,offset_131,options_142,ovec_value_135,ovec_max_132*3);
        for(        i_145=0;        i_145<ovec_max_132;        i_145++        ){
            start_133[i_145]=ovec_value_135[i_145*2];
        }
        for(        i_146=0;        i_146<ovec_max_132;        i_146++        ){
            end_134[i_146]=ovec_value_135[i_146*2+1];
        }
        if(        regex_result_144==1) {
            str_147=charp_substring(self,start_133[0],end_134[0]);
            group_strings_148=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 499, "list$1charph"));
            str2_149=block(parent,str_147,group_strings_148);
            list$1charph_push_back(result_130,str2_149);
            if(            offset_131==end_134[0]) {
                offset_131++;
            }
            else {
                offset_131=end_134[0];
            }
            n_141++;
            if(            n_141==count) {
                break;
            }
        }
        else if(        regex_result_144>1) {
            str_150=charp_substring(self,start_133[0],end_134[0]);
            group_strings_151=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 521, "list$1charph"));
            for(            i_152=1;            i_152<regex_result_144;            i_152++            ){
                match_string_153=charp_substring(self,start_133[i_152],end_134[i_152]);
                list$1charph_push_back(group_strings_151,match_string_153);
            }
            str2_154=block(parent,str_150,group_strings_151);
            list$1charph_push_back(result_130,str2_154);
            if(            offset_131==end_134[0]) {
                offset_131++;
            }
            else {
                offset_131=end_134[0];
            }
            n_141++;
            if(            n_141==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_130;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_155;
int erro_ofs_156;
int options_157;
char* str_158;
struct real_pcre8_or_16* re_159;
struct list$1charph* result_160;
int offset_161;
int ovec_max_162;
int options_166;
int len_167;
int regex_result_168;
int i_169;
int i_170;
char* str_171;
struct list$1charph* match_strings_172;
char* str2_173;
char* str_174;
struct list$1charph* match_strings_175;
int i_176;
char* match_str_177;
char* str2_178;
char* str_179;
struct list$1charph* match_strings_180;
char* str2_181;
struct list$1charph* __result111__;
err_155 = (void*)0;
memset(&erro_ofs_156, 0, sizeof(int));
    options_157=reg->options;
    str_158=reg->str;
    re_159=reg->re;
    result_160=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 563, "list$1charph"));
    offset_161=0;
    ovec_max_162=16;
    int start_163[ovec_max_162];
    memset(&start_163, 0, sizeof(int)    *(ovec_max_162)    );
    int end_164[ovec_max_162];
    memset(&end_164, 0, sizeof(int)    *(ovec_max_162)    );
    int ovec_value_165[ovec_max_162*3];
    memset(&ovec_value_165, 0, sizeof(int)    *(ovec_max_162*3)    );
    while((_Bool)1) {
        options_166=2097152;
        len_167=strlen(self);
        regex_result_168=pcre_exec(re_159,(struct pcre_extra*)0,self,len_167,offset_161,options_166,ovec_value_165,ovec_max_162*3);
        for(        i_169=0;        i_169<ovec_max_162;        i_169++        ){
            start_163[i_169]=ovec_value_165[i_169*2];
        }
        for(        i_170=0;        i_170<ovec_max_162;        i_170++        ){
            end_164[i_170]=ovec_value_165[i_170*2+1];
        }
        if(        regex_result_168==1) {
            str_171=charp_substring(self,offset_161,start_163[0]);
            match_strings_172=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 590, "list$1charph"));
            str2_173=block(parent,str_171,match_strings_172);
            list$1charph_push_back(result_160,str2_173);
            if(            offset_161==end_164[0]) {
                offset_161++;
            }
            else {
                offset_161=end_164[0];
            }
        }
        else if(        regex_result_168>1) {
            str_174=charp_substring(self,offset_161,start_163[0]);
            if(            offset_161==end_164[0]) {
                offset_161++;
            }
            else {
                offset_161=end_164[0];
            }
            match_strings_175=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            for(            i_176=1;            i_176<regex_result_168;            i_176++            ){
                match_str_177=charp_substring(self,start_163[i_176],end_164[i_176]);
                list$1charph_push_back(match_strings_175,match_str_177);
            }
            str2_178=block(parent,str_174,match_strings_175);
            list$1charph_push_back(result_160,str2_178);
        }
        else {
            break;
        }
    }
    if(    offset_161<charp_length(self)) {
        str_179=charp_substring(self,offset_161,-1);
        match_strings_180=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 632, "list$1charph"));
        str2_181=block(parent,str_179,match_strings_180);
        list$1charph_push_back(result_160,str2_181);
    }
    __result111__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_182;
int erro_ofs_183;
int options_184;
char* str_185;
struct real_pcre8_or_16* re_186;
struct list$1charph* result_187;
int offset_188;
int ovec_max_189;
int n_193;
int options_194;
int len_195;
int regex_result_196;
int i_197;
int i_198;
char* str_199;
struct list$1charph* match_strings_200;
char* str2_201;
char* str_202;
struct list$1charph* match_strings_203;
int i_204;
char* match_str_205;
char* str2_206;
struct list$1charph* __result112__;
err_182 = (void*)0;
memset(&erro_ofs_183, 0, sizeof(int));
    options_184=reg->options;
    str_185=reg->str;
    re_186=reg->re;
    result_187=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 650, "list$1charph"));
    offset_188=0;
    ovec_max_189=16;
    int start_190[ovec_max_189];
    memset(&start_190, 0, sizeof(int)    *(ovec_max_189)    );
    int end_191[ovec_max_189];
    memset(&end_191, 0, sizeof(int)    *(ovec_max_189)    );
    int ovec_value_192[ovec_max_189*3];
    memset(&ovec_value_192, 0, sizeof(int)    *(ovec_max_189*3)    );
    n_193=0;
    while((_Bool)1) {
        options_194=2097152;
        len_195=strlen(self);
        regex_result_196=pcre_exec(re_186,(struct pcre_extra*)0,self,len_195,offset_188,options_194,ovec_value_192,ovec_max_189*3);
        for(        i_197=0;        i_197<ovec_max_189;        i_197++        ){
            start_190[i_197]=ovec_value_192[i_197*2];
        }
        for(        i_198=0;        i_198<ovec_max_189;        i_198++        ){
            end_191[i_198]=ovec_value_192[i_198*2+1];
        }
        if(        regex_result_196==1) {
            str_199=charp_substring(self,offset_188,start_190[0]);
            match_strings_200=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 679, "list$1charph"));
            str2_201=block(parent,str_199,match_strings_200);
            list$1charph_push_back(result_187,str2_201);
            if(            offset_188==end_191[0]) {
                offset_188++;
            }
            else {
                offset_188=end_191[0];
            }
        }
        else if(        regex_result_196>1) {
            str_202=charp_substring(self,offset_188,start_190[0]);
            if(            offset_188==end_191[0]) {
                offset_188++;
            }
            else {
                offset_188=end_191[0];
            }
            match_strings_203=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 702, "list$1charph"));
            for(            i_204=1;            i_204<regex_result_196;            i_204++            ){
                match_str_205=charp_substring(self,start_190[i_204],end_191[i_204]);
                list$1charph_push_back(match_strings_203,match_str_205);
            }
            str2_206=block(parent,str_202,match_strings_203);
            list$1charph_push_back(result_187,str2_206);
        }
        else {
            break;
        }
        n_193++;
        if(        n_193==count) {
            break;
        }
    }
    __result112__ = gComeFunResultObject = __result_obj__ = result_187;
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
struct list$1charph* result_207;
int offset_208;
int ovec_max_209;
const char* err_213;
int erro_ofs_214;
int options_215;
char* str_216;
struct real_pcre8_or_16* re_217;
int options_218;
int len_219;
int regex_result_220;
int i_221;
int i_222;
char* str_223;
char* str_224;
int i_225;
char* match_string_226;
struct list$1charph* __result113__;
err_213 = (void*)0;
memset(&erro_ofs_214, 0, sizeof(int));
    result_207=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 766, "list$1charph"));
    offset_208=0;
    ovec_max_209=16;
    int start_210[ovec_max_209];
    memset(&start_210, 0, sizeof(int)    *(ovec_max_209)    );
    int end_211[ovec_max_209];
    memset(&end_211, 0, sizeof(int)    *(ovec_max_209)    );
    int ovec_value_212[ovec_max_209*3];
    memset(&ovec_value_212, 0, sizeof(int)    *(ovec_max_209*3)    );
    options_215=reg->options;
    str_216=reg->str;
    re_217=reg->re;
    while((_Bool)1) {
        options_218=2097152;
        len_219=strlen(self);
        regex_result_220=pcre_exec(re_217,(struct pcre_extra*)0,self,len_219,offset_208,options_218,ovec_value_212,ovec_max_209*3);
        for(        i_221=0;        i_221<ovec_max_209;        i_221++        ){
            start_210[i_221]=ovec_value_212[i_221*2];
        }
        for(        i_222=0;        i_222<ovec_max_209;        i_222++        ){
            end_211[i_222]=ovec_value_212[i_222*2+1];
        }
        if(        regex_result_220==1) {
            str_223=charp_substring(self,start_210[0],end_211[0]);
            list$1charph_push_back(result_207,str_223);
            if(            offset_208==end_211[0]) {
                offset_208++;
            }
            else {
                offset_208=end_211[0];
            }
        }
        else if(        regex_result_220>1) {
            str_224=charp_substring(self,start_210[0],end_211[0]);
            list$1charph_push_back(result_207,str_224);
            if(            offset_208==end_211[0]) {
                offset_208++;
            }
            else {
                offset_208=end_211[0];
            }
            *num_group_string_in_regex=regex_result_220-1;
            for(            i_225=1;            i_225<regex_result_220;            i_225++            ){
                match_string_226=charp_substring(self,start_210[i_225],end_211[i_225]);
                list$1charph_push_back(group_strings,match_string_226);
            }
        }
        else {
            break;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = result_207;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_227;
int len_228;
char* __result114__;
    result_227=__builtin_string(self);
    len_228=strlen(self);
    if(    self[len_228-1]==10) {
        result_227[len_228-1]=0;
    }
    else if(    self[len_228-1]==13) {
        result_227[len_228-1]=0;
    }
    else if(    len_228>2&&self[len_228-2]==13&&self[len_228-1]==10) {
        result_227[len_228-2]=0;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_227;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_229;
char* result_230;
int n_231;
int i_232;
char c_233;
char* __result115__;
    len_229=charp_length(str);
    result_230=(char*)come_calloc(1, sizeof(char)*(1*(len_229*2+1)), "libcomelang-str-gc.c", 860, "char");
    n_231=0;
    for(    i_232=0;    i_232<len_229;    i_232++    ){
        c_233=str[i_232];
        if(        (c_233>=0&&c_233<32)||c_233==127) {
            result_230[n_231++]=94;
            result_230[n_231++]=c_233+65-1;
        }
        else {
            result_230[n_231++]=c_233;
        }
    }
    result_230[n_231]=0;
    __result115__ = gComeFunResultObject = __result_obj__ = result_230;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_234;
char* result_235;
char* __result116__;
    len_234=4*(wcslen(wstr)+1);
    result_235=(char*)come_calloc(1, sizeof(char)*(1*(len_234)), "libcomelang-str-gc.c", 886, "char");
    if(    wcstombs(result_235,wstr,len_234)<0) {
        strncpy(result_235,"",len_234);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_235;
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
int len_236;
unsigned int* __result118__;
unsigned int* __result119__;
unsigned int* sub_str_237;
unsigned int* __result120__;
    len_236=wcslen(str);
    if(    len_236==0) {
        __result118__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    if(    head<0) {
        head+=len_236;
    }
    if(    tail<0) {
        tail+=len_236+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result119__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    tail>=len_236) {
        tail=len_236;
    }
    sub_str_237=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_237,sizeof(unsigned int)*(wstring_length(sub_str_237)+1));
    __result120__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result120__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_238;
    head_238=wcsstr(str,search_str);
    if(    head_238==((void*)0)) {
        return default_value;
    }
    return head_238-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_239;
unsigned int* p_240;
int len2_241;
_Bool result_242;
int i_243;
memset(&i_243, 0, sizeof(int));
    len_239=wcslen(search_str);
    p_240=str+wcslen(str)-len_239;
    while(p_240>=str) {
        len2_241=wcslen(p_240);
        result_242=(_Bool)1;
        for(        i_243=0;        i_243<len_239&&i_243<len2_241;        i_243++        ){
            if(            p_240[i_243]!=search_str[i_243]) {
                result_242=(_Bool)0;
            }
        }
        if(        result_242) {
            return (p_240-str);
        }
        p_240--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_244;
unsigned int* result_245;
int i_246;
unsigned int* __result121__;
    len_244=wcslen(str);
    result_245=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_244+1)), "libcomelang-str-gc.c", 986, "int");
    for(    i_246=0;    i_246<len_244;    i_246++    ){
        result_245[i_246]=str[len_244-i_246-1];
    }
    result_245[len_244]=0;
    __result121__ = gComeFunResultObject = __result_obj__ = result_245;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_247;
unsigned int* result_248;
int i_249;
unsigned int* __result122__;
    len_247=wcslen(str)*n+1;
    result_248=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_247)), "libcomelang-str-gc.c", 1001, "int");
    result_248[0]=0;
    for(    i_249=0;    i_249<n;    i_249++    ){
        wcscat(result_248,str);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = result_248;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_250;
unsigned int* result_251;
int n_252;
int i_253;
unsigned int c_254;
unsigned int* __result123__;
    len_250=wchar_tp_length(str);
    result_251=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_250*2+1)), "libcomelang-str-gc.c", 1015, "int");
    n_252=0;
    for(    i_253=0;    i_253<len_250;    i_253++    ){
        c_254=str[i_253];
        if(        (c_254>=0&&c_254<32)||c_254==127) {
            result_251[n_252++]=94;
            result_251[n_252++]=c_254+65-1;
        }
        else {
            result_251[n_252++]=c_254;
        }
    }
    result_251[n_252]=0;
    __result123__ = gComeFunResultObject = __result_obj__ = result_251;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_255;
int ovec_max_256;
const char* err_260;
int erro_ofs_261;
int options_262;
char* str_263;
struct real_pcre8_or_16* re_264;
int n_265;
int options_266;
int len_267;
int regex_result_268;
int i_269;
int i_270;
int i_273;
char* match_string_274;
err_260 = (void*)0;
memset(&erro_ofs_261, 0, sizeof(int));
    offset_255=0;
    ovec_max_256=16;
    int start_257[ovec_max_256];
    memset(&start_257, 0, sizeof(int)    *(ovec_max_256)    );
    int end_258[ovec_max_256];
    memset(&end_258, 0, sizeof(int)    *(ovec_max_256)    );
    int ovec_value_259[ovec_max_256*3];
    memset(&ovec_value_259, 0, sizeof(int)    *(ovec_max_256*3)    );
    options_262=reg->options;
    str_263=reg->str;
    re_264=reg->re;
    n_265=0;
    while((_Bool)1) {
        options_266=2097152;
        len_267=strlen(self);
        regex_result_268=pcre_exec(re_264,(struct pcre_extra*)0,self,len_267,offset_255,options_266,ovec_value_259,ovec_max_256*3);
        for(        i_269=0;        i_269<ovec_max_256;        i_269++        ){
            start_257[i_269]=ovec_value_259[i_269*2];
        }
        for(        i_270=0;        i_270<ovec_max_256;        i_270++        ){
            end_258[i_270]=ovec_value_259[i_270*2+1];
        }
        if(        regex_result_268==1||(group_strings==((void*)0)&&regex_result_268>0)) {
            n_265++;
            if(            n_265==count) {
                return (_Bool)1;
            }
            if(            offset_255==end_258[0]) {
                offset_255++;
            }
            else {
                offset_255=end_258[0];
            }
        }
        else if(        regex_result_268>1) {
            n_265++;
            list$1charph_reset(group_strings);
            for(            i_273=1;            i_273<regex_result_268;            i_273++            ){
                match_string_274=charp_substring(self,start_257[i_273],end_258[i_273]);
                list$1charph_push_back(group_strings,match_string_274);
            }
            if(            n_265==count) {
                return (_Bool)1;
            }
            if(            offset_255==end_258[0]) {
                offset_255++;
            }
            else {
                offset_255=end_258[0];
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
struct list_item$1charph* it_271;
struct list_item$1charph* prev_it_272;
struct list$1charph* __result124__;
    it_271=self->head;
    while(it_271!=((void*)0)) {
        prev_it_272=it_271;
        it_271=it_271->next;
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
unsigned int* result_275;
unsigned int* __result127__;
    result_275=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1179, "int");
    wcscpy(result_275,left);
    wcscat(result_275,right);
    __result127__ = gComeFunResultObject = __result_obj__ = result_275;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_276;
unsigned int* __result128__;
    result_276=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1189, "int");
    wcscpy(result_276,left);
    wcscat(result_276,right);
    __result128__ = gComeFunResultObject = __result_obj__ = result_276;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_277;
    head_277=strstr(str,search_str);
    if(    head_277==((void*)0)) {
        return default_value;
    }
    return head_277-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_278;
int result_282;
int offset_283;
const char* err_284;
int erro_ofs_285;
int options_286;
char* str_287;
struct real_pcre8_or_16* re_288;
int options_289;
int len_290;
int regex_result_291;
int i_292;
int i_293;
err_284 = (void*)0;
memset(&erro_ofs_285, 0, sizeof(int));
    ovec_max_278=16;
    int start_279[ovec_max_278];
    memset(&start_279, 0, sizeof(int)    *(ovec_max_278)    );
    int end_280[ovec_max_278];
    memset(&end_280, 0, sizeof(int)    *(ovec_max_278)    );
    int ovec_value_281[ovec_max_278*3];
    memset(&ovec_value_281, 0, sizeof(int)    *(ovec_max_278*3)    );
    result_282=default_value;
    offset_283=0;
    options_286=reg->options;
    str_287=reg->str;
    re_288=reg->re;
    while((_Bool)1) {
        options_289=2097152;
        len_290=strlen(self);
        regex_result_291=pcre_exec(re_288,(struct pcre_extra*)0,self,len_290,offset_283,options_289,ovec_value_281,ovec_max_278*3);
        for(        i_292=0;        i_292<ovec_max_278;        i_292++        ){
            start_279[i_292]=ovec_value_281[i_292*2];
        }
        for(        i_293=0;        i_293<ovec_max_278;        i_293++        ){
            end_280[i_293]=ovec_value_281[i_293*2+1];
        }
        if(        regex_result_291==1||regex_result_291>0) {
            result_282=start_279[0];
            break;
        }
        {
            break;
        }
    }
    return result_282;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_294;
char* __result129__;
char* __result130__;
    len_294=strlen(self);
    if(    strcmp(self,"")==0) {
        __result129__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    if(    index<0) {
        index+=len_294;
    }
    if(    index>=len_294) {
        index=len_294-1;
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
int len_295;
char* result_296;
int i_297;
char* __result131__;
    len_295=strlen(str)*n+1;
    result_296=(char*)come_calloc(1, sizeof(char)*(1*(len_295)), "libcomelang-str-gc.c", 1287, "char");
    result_296[0]=0;
    for(    i_297=0;    i_297<n;    i_297++    ){
        strcat(result_296,str);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_296;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_298;
int ovec_max_299;
const char* err_303;
int erro_ofs_304;
int options_305;
char* str_306;
struct real_pcre8_or_16* re_307;
struct buffer* result_308;
int options_309;
int len_310;
int regex_result_311;
int i_312;
int i_313;
char* str_314;
char* str_315;
char* str_316;
char* __result132__;
err_303 = (void*)0;
memset(&erro_ofs_304, 0, sizeof(int));
    offset_298=0;
    ovec_max_299=16;
    int start_300[ovec_max_299];
    memset(&start_300, 0, sizeof(int)    *(ovec_max_299)    );
    int end_301[ovec_max_299];
    memset(&end_301, 0, sizeof(int)    *(ovec_max_299)    );
    int ovec_value_302[ovec_max_299*3];
    memset(&ovec_value_302, 0, sizeof(int)    *(ovec_max_299*3)    );
    options_305=reg->options;
    str_306=reg->str;
    re_307=reg->re;
    result_308=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1315, "buffer"));
    while((_Bool)1) {
        options_309=2097152;
        len_310=strlen(self);
        regex_result_311=pcre_exec(re_307,(struct pcre_extra*)0,self,len_310,offset_298,options_309,ovec_value_302,ovec_max_299*3);
        for(        i_312=0;        i_312<ovec_max_299;        i_312++        ){
            start_300[i_312]=ovec_value_302[i_312*2];
        }
        for(        i_313=0;        i_313<ovec_max_299;        i_313++        ){
            end_301[i_313]=ovec_value_302[i_313*2+1];
        }
        if(        regex_result_311==1) {
            str_314=charp_substring(self,offset_298,start_300[0]);
            buffer_append_str(result_308,str_314);
            buffer_append_str(result_308,replace);
            if(            offset_298==end_301[0]) {
                offset_298++;
            }
            else {
                offset_298=end_301[0];
            }
            if(            !reg->global) {
                str_315=charp_substring(self,offset_298,-1);
                buffer_append_str(result_308,str_315);
                break;
            }
        }
        else {
            str_316=charp_substring(self,offset_298,-1);
            buffer_append_str(result_308,str_316);
            break;
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_308);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_317;
int ovec_max_318;
const char* err_322;
int erro_ofs_323;
int options_324;
char* str_325;
struct real_pcre8_or_16* re_326;
struct buffer* result_327;
int n_328;
int options_329;
int len_330;
int regex_result_331;
int i_332;
int i_333;
char* str_334;
char* str_335;
char* str_336;
char* str_337;
char* __result133__;
err_322 = (void*)0;
memset(&erro_ofs_323, 0, sizeof(int));
    offset_317=0;
    ovec_max_318=16;
    int start_319[ovec_max_318];
    memset(&start_319, 0, sizeof(int)    *(ovec_max_318)    );
    int end_320[ovec_max_318];
    memset(&end_320, 0, sizeof(int)    *(ovec_max_318)    );
    int ovec_value_321[ovec_max_318*3];
    memset(&ovec_value_321, 0, sizeof(int)    *(ovec_max_318*3)    );
    options_324=reg->options;
    str_325=reg->str;
    re_326=reg->re;
    result_327=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1378, "buffer"));
    n_328=0;
    while((_Bool)1) {
        options_329=2097152;
        len_330=strlen(self);
        regex_result_331=pcre_exec(re_326,(struct pcre_extra*)0,self,len_330,offset_317,options_329,ovec_value_321,ovec_max_318*3);
        for(        i_332=0;        i_332<ovec_max_318;        i_332++        ){
            start_319[i_332]=ovec_value_321[i_332*2];
        }
        for(        i_333=0;        i_333<ovec_max_318;        i_333++        ){
            end_320[i_333]=ovec_value_321[i_333*2+1];
        }
        if(        regex_result_331==1) {
            n_328++;
            str_334=charp_substring(self,offset_317,start_319[0]);
            buffer_append_str(result_327,str_334);
            buffer_append_str(result_327,replace);
            if(            offset_317==end_320[0]) {
                offset_317++;
            }
            else {
                offset_317=end_320[0];
            }
            if(            !reg->global) {
                str_335=charp_substring(self,offset_317,-1);
                buffer_append_str(result_327,str_335);
                break;
            }
            if(            n_328==count) {
                str_336=charp_substring(self,offset_317,-1);
                buffer_append_str(result_327,str_336);
                break;
            }
        }
        else {
            str_337=charp_substring(self,offset_317,-1);
            buffer_append_str(result_327,str_337);
            break;
        }
    }
    __result133__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_327);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_338;
struct buffer* buf_339;
int i_340;
struct list$1charph* __result134__;
    result_338=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1437, "list$1charph"));
    buf_339=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1439, "buffer"));
    for(    i_340=0;    i_340<charp_length(self);    i_340++    ){
        if(        strstr(self+i_340,str)==self+i_340) {
            list$1charph_push_back(result_338,__builtin_string(buf_339->buf));
            buffer_reset(buf_339);
            i_340+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_339,self[i_340]);
        }
    }
    if(    buffer_length(buf_339)!=0) {
        list$1charph_push_back(result_338,__builtin_string(buf_339->buf));
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_338;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* result_341;
int offset_342;
int ovec_max_343;
const char* err_347;
int erro_ofs_348;
int options_349;
char* str_350;
struct real_pcre8_or_16* re_351;
int options_352;
int len_353;
int regex_result_354;
int i_355;
int i_356;
char* str_357;
char* str_358;
int i_359;
char* match_string_360;
struct list$1charph* __result135__;
err_347 = (void*)0;
memset(&erro_ofs_348, 0, sizeof(int));
    result_341=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1460, "list$1charph"));
    offset_342=0;
    ovec_max_343=16;
    int start_344[ovec_max_343];
    memset(&start_344, 0, sizeof(int)    *(ovec_max_343)    );
    int end_345[ovec_max_343];
    memset(&end_345, 0, sizeof(int)    *(ovec_max_343)    );
    int ovec_value_346[ovec_max_343*3];
    memset(&ovec_value_346, 0, sizeof(int)    *(ovec_max_343*3)    );
    options_349=reg->options;
    str_350=reg->str;
    re_351=reg->re;
    while((_Bool)1) {
        options_352=2097152;
        len_353=strlen(self);
        regex_result_354=pcre_exec(re_351,(struct pcre_extra*)0,self,len_353,offset_342,options_352,ovec_value_346,ovec_max_343*3);
        for(        i_355=0;        i_355<ovec_max_343;        i_355++        ){
            start_344[i_355]=ovec_value_346[i_355*2];
        }
        for(        i_356=0;        i_356<ovec_max_343;        i_356++        ){
            end_345[i_356]=ovec_value_346[i_356*2+1];
        }
        if(        regex_result_354==1) {
            str_357=charp_substring(self,start_344[0],end_345[0]);
            list$1charph_push_back(result_341,str_357);
            if(            offset_342==end_345[0]) {
                offset_342++;
            }
            else {
                offset_342=end_345[0];
            }
        }
        else if(        regex_result_354>1) {
            str_358=charp_substring(self,start_344[0],end_345[0]);
            list$1charph_push_back(result_341,str_358);
            if(            offset_342==end_345[0]) {
                offset_342++;
            }
            else {
                offset_342=end_345[0];
            }
            for(            i_359=1;            i_359<regex_result_354;            i_359++            ){
                match_string_360=charp_substring(self,start_344[i_359],end_345[i_359]);
                list$1charph_push_back(result_341,match_string_360);
            }
        }
        else {
            break;
        }
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_341;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_361;
int erro_ofs_362;
int options_363;
char* str_364;
struct real_pcre8_or_16* re_365;
struct list$1charph* result_366;
int offset_367;
int ovec_max_368;
int options_372;
int len_373;
int regex_result_374;
int i_375;
int i_376;
char* str_377;
char* str_378;
int i_379;
char* match_str_380;
char* str_381;
struct list$1charph* __result136__;
err_361 = (void*)0;
memset(&erro_ofs_362, 0, sizeof(int));
    options_363=reg->options;
    str_364=reg->str;
    re_365=reg->re;
    result_366=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1541, "list$1charph"));
    offset_367=0;
    ovec_max_368=16;
    int start_369[ovec_max_368];
    memset(&start_369, 0, sizeof(int)    *(ovec_max_368)    );
    int end_370[ovec_max_368];
    memset(&end_370, 0, sizeof(int)    *(ovec_max_368)    );
    int ovec_value_371[ovec_max_368*3];
    memset(&ovec_value_371, 0, sizeof(int)    *(ovec_max_368*3)    );
    while((_Bool)1) {
        options_372=2097152;
        len_373=strlen(self);
        regex_result_374=pcre_exec(re_365,(struct pcre_extra*)0,self,len_373,offset_367,options_372,ovec_value_371,ovec_max_368*3);
        for(        i_375=0;        i_375<ovec_max_368;        i_375++        ){
            start_369[i_375]=ovec_value_371[i_375*2];
        }
        for(        i_376=0;        i_376<ovec_max_368;        i_376++        ){
            end_370[i_376]=ovec_value_371[i_376*2+1];
        }
        if(        regex_result_374==1) {
            str_377=charp_substring(self,offset_367,start_369[0]);
            list$1charph_push_back(result_366,str_377);
            if(            offset_367==end_370[0]) {
                offset_367++;
            }
            else {
                offset_367=end_370[0];
            }
        }
        else if(        regex_result_374>1) {
            str_378=charp_substring(self,offset_367,start_369[0]);
            list$1charph_push_back(result_366,str_378);
            if(            offset_367==end_370[0]) {
                offset_367++;
            }
            else {
                offset_367=end_370[0];
            }
            for(            i_379=1;            i_379<regex_result_374;            i_379++            ){
                match_str_380=charp_substring(self,start_369[i_379],end_370[i_379]);
                list$1charph_push_back(result_366,match_str_380);
            }
        }
        else {
            break;
        }
    }
    if(    offset_367<charp_length(self)) {
        str_381=charp_substring(self,offset_367,-1);
        list$1charph_push_back(result_366,str_381);
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_382;
int ovec_max_383;
const char* err_387;
int erro_ofs_388;
int options_389;
char* str_390;
struct real_pcre8_or_16* re_391;
int options_392;
int len_393;
int regex_result_394;
int i_395;
int i_396;
err_387 = (void*)0;
memset(&erro_ofs_388, 0, sizeof(int));
    offset_382=0;
    ovec_max_383=16;
    int start_384[ovec_max_383];
    memset(&start_384, 0, sizeof(int)    *(ovec_max_383)    );
    int end_385[ovec_max_383];
    memset(&end_385, 0, sizeof(int)    *(ovec_max_383)    );
    int ovec_value_386[ovec_max_383*3];
    memset(&ovec_value_386, 0, sizeof(int)    *(ovec_max_383*3)    );
    options_389=reg->options;
    str_390=reg->str;
    re_391=reg->re;
    while((_Bool)1) {
        options_392=2097152;
        len_393=strlen(self);
        regex_result_394=pcre_exec(re_391,(struct pcre_extra*)0,self,len_393,offset_382,options_392,ovec_value_386,ovec_max_383*3);
        for(        i_395=0;        i_395<ovec_max_383;        i_395++        ){
            start_384[i_395]=ovec_value_386[i_395*2];
        }
        for(        i_396=0;        i_396<ovec_max_383;        i_396++        ){
            end_385[i_396]=ovec_value_386[i_396*2+1];
        }
        if(        regex_result_394>0) {
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
const char* err_397;
int erro_ofs_398;
int options_399;
char* str_400;
struct real_pcre8_or_16* re_401;
struct list$1charph* result_402;
int offset_403;
int ovec_max_404;
int n_408;
int options_409;
int len_410;
int regex_result_411;
int i_412;
int i_413;
char* str_414;
char* str_415;
int i_416;
char* match_str_417;
char* str_418;
struct list$1charph* __result137__;
err_397 = (void*)0;
memset(&erro_ofs_398, 0, sizeof(int));
    options_399=reg->options;
    str_400=reg->str;
    re_401=reg->re;
    result_402=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1663, "list$1charph"));
    offset_403=0;
    ovec_max_404=16;
    int start_405[ovec_max_404];
    memset(&start_405, 0, sizeof(int)    *(ovec_max_404)    );
    int end_406[ovec_max_404];
    memset(&end_406, 0, sizeof(int)    *(ovec_max_404)    );
    int ovec_value_407[ovec_max_404*3];
    memset(&ovec_value_407, 0, sizeof(int)    *(ovec_max_404*3)    );
    n_408=0;
    while((_Bool)1) {
        options_409=2097152;
        len_410=strlen(self);
        regex_result_411=pcre_exec(re_401,(struct pcre_extra*)0,self,len_410,offset_403,options_409,ovec_value_407,ovec_max_404*3);
        for(        i_412=0;        i_412<ovec_max_404;        i_412++        ){
            start_405[i_412]=ovec_value_407[i_412*2];
        }
        for(        i_413=0;        i_413<ovec_max_404;        i_413++        ){
            end_406[i_413]=ovec_value_407[i_413*2+1];
        }
        if(        regex_result_411==1) {
            str_414=charp_substring(self,offset_403,start_405[0]);
            list$1charph_push_back(result_402,str_414);
            if(            offset_403==end_406[0]) {
                offset_403++;
            }
            else {
                offset_403=end_406[0];
            }
        }
        else if(        regex_result_411>1) {
            str_415=charp_substring(self,offset_403,start_405[0]);
            list$1charph_push_back(result_402,str_415);
            if(            offset_403==end_406[0]) {
                offset_403++;
            }
            else {
                offset_403=end_406[0];
            }
            for(            i_416=1;            i_416<regex_result_411;            i_416++            ){
                match_str_417=charp_substring(self,start_405[i_416],end_406[i_416]);
                list$1charph_push_back(result_402,match_str_417);
            }
        }
        else {
            break;
        }
        n_408++;
        if(        maxsplit==n_408) {
            break;
        }
    }
    if(    offset_403<charp_length(self)) {
        str_418=charp_substring(self,offset_403,-1);
        list$1charph_push_back(result_402,str_418);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result137__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_419;
int erro_ofs_420;
int options_421;
char* str_422;
struct real_pcre8_or_16* re_423;
char* self2_424;
int ovec_max_425;
int result_429;
int offset_430;
int n_431;
int options_432;
int len_433;
int regex_result_434;
int i_435;
int i_436;
err_419 = (void*)0;
memset(&erro_ofs_420, 0, sizeof(int));
    options_421=reg->options;
    str_422=reg->str;
    re_423=reg->re;
    self2_424=charp_reverse(self);
    ovec_max_425=16;
    int start_426[ovec_max_425];
    memset(&start_426, 0, sizeof(int)    *(ovec_max_425)    );
    int end_427[ovec_max_425];
    memset(&end_427, 0, sizeof(int)    *(ovec_max_425)    );
    int ovec_value_428[ovec_max_425*3];
    memset(&ovec_value_428, 0, sizeof(int)    *(ovec_max_425*3)    );
    result_429=default_value;
    offset_430=0;
    n_431=0;
    while((_Bool)1) {
        options_432=2097152;
        len_433=strlen(self2_424);
        regex_result_434=pcre_exec(re_423,(struct pcre_extra*)0,self2_424,len_433,offset_430,options_432,ovec_value_428,ovec_max_425*3);
        for(        i_435=0;        i_435<ovec_max_425;        i_435++        ){
            start_426[i_435]=ovec_value_428[i_435*2];
        }
        for(        i_436=0;        i_436<ovec_max_425;        i_436++        ){
            end_427[i_436]=ovec_value_428[i_436*2+1];
        }
        if(        regex_result_434>0) {
            n_431++;
            if(            offset_430==end_427[0]) {
                offset_430++;
            }
            else {
                offset_430=end_427[0];
            }
            if(            n_431==count) {
                result_429=strlen(self)-end_427[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_429;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_437;
int ovec_max_438;
const char* err_442;
int erro_ofs_443;
int options_444;
char* str_445;
struct real_pcre8_or_16* re_446;
int n_447;
int options_448;
int len_449;
int regex_result_450;
int i_451;
int i_452;
err_442 = (void*)0;
memset(&erro_ofs_443, 0, sizeof(int));
    offset_437=0;
    ovec_max_438=16;
    int start_439[ovec_max_438];
    memset(&start_439, 0, sizeof(int)    *(ovec_max_438)    );
    int end_440[ovec_max_438];
    memset(&end_440, 0, sizeof(int)    *(ovec_max_438)    );
    int ovec_value_441[ovec_max_438*3];
    memset(&ovec_value_441, 0, sizeof(int)    *(ovec_max_438*3)    );
    options_444=reg->options;
    str_445=reg->str;
    re_446=reg->re;
    n_447=0;
    while((_Bool)1) {
        options_448=2097152;
        len_449=strlen(self);
        regex_result_450=pcre_exec(re_446,(struct pcre_extra*)0,self,len_449,offset_437,options_448,ovec_value_441,ovec_max_438*3);
        for(        i_451=0;        i_451<ovec_max_438;        i_451++        ){
            start_439[i_451]=ovec_value_441[i_451*2];
        }
        for(        i_452=0;        i_452<ovec_max_438;        i_452++        ){
            end_440[i_452]=ovec_value_441[i_452*2+1];
        }
        if(        regex_result_450>0) {
            n_447++;
            if(            count==n_447) {
                return (_Bool)1;
            }
            if(            offset_437==end_440[0]) {
                offset_437++;
            }
            else {
                offset_437=end_440[0];
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
int offset_453;
int ovec_max_454;
const char* err_458;
int erro_ofs_459;
int options_460;
char* str_461;
struct real_pcre8_or_16* re_462;
struct buffer* result_463;
int options_464;
int len_465;
int regex_result_466;
int i_467;
int i_468;
char* str_469;
struct list$1charph* group_strings_470;
char* match_string_471;
char* block_result_472;
char* str_473;
char* str_474;
struct list$1charph* group_strings_475;
int i_476;
char* match_string_477;
char* match_string_478;
char* block_result_479;
char* str_480;
char* str_481;
char* __result138__;
err_458 = (void*)0;
memset(&erro_ofs_459, 0, sizeof(int));
    offset_453=0;
    ovec_max_454=16;
    int start_455[ovec_max_454];
    memset(&start_455, 0, sizeof(int)    *(ovec_max_454)    );
    int end_456[ovec_max_454];
    memset(&end_456, 0, sizeof(int)    *(ovec_max_454)    );
    int ovec_value_457[ovec_max_454*3];
    memset(&ovec_value_457, 0, sizeof(int)    *(ovec_max_454*3)    );
    options_460=reg->options;
    str_461=reg->str;
    re_462=reg->re;
    result_463=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1875, "buffer"));
    while((_Bool)1) {
        options_464=2097152;
        len_465=strlen(self);
        regex_result_466=pcre_exec(re_462,(struct pcre_extra*)0,self,len_465,offset_453,options_464,ovec_value_457,ovec_max_454*3);
        for(        i_467=0;        i_467<ovec_max_454;        i_467++        ){
            start_455[i_467]=ovec_value_457[i_467*2];
        }
        for(        i_468=0;        i_468<ovec_max_454;        i_468++        ){
            end_456[i_468]=ovec_value_457[i_468*2+1];
        }
        if(        regex_result_466==1) {
            str_469=charp_substring(self,offset_453,start_455[0]);
            buffer_append_str(result_463,str_469);
            group_strings_470=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1895, "list$1charph"));
            match_string_471=charp_substring(self,start_455[0],end_456[0]);
            list$1charph_push_back(group_strings_470,charp_substring(self,start_455[0],end_456[0]));
            block_result_472=block(parent,match_string_471,group_strings_470);
            buffer_append_str(result_463,block_result_472);
            if(            offset_453==end_456[0]) {
                offset_453++;
            }
            else {
                offset_453=end_456[0];
            }
            if(            !reg->global) {
                str_473=charp_substring(self,offset_453,-1);
                buffer_append_str(result_463,str_473);
                break;
            }
        }
        else if(        regex_result_466>1) {
            str_474=charp_substring(self,offset_453,start_455[0]);
            buffer_append_str(result_463,str_474);
            if(            offset_453==end_456[0]) {
                offset_453++;
            }
            else {
                offset_453=end_456[0];
            }
            group_strings_475=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1930, "list$1charph"));
            for(            i_476=1;            i_476<regex_result_466;            i_476++            ){
                match_string_477=charp_substring(self,start_455[i_476],end_456[i_476]);
                list$1charph_push_back(group_strings_475,match_string_477);
            }
            match_string_478=charp_substring(self,start_455[0],end_456[0]);
            block_result_479=block(parent,match_string_478,group_strings_475);
            buffer_append_str(result_463,block_result_479);
            if(            !reg->global) {
                str_480=charp_substring(self,offset_453,-1);
                buffer_append_str(result_463,str_480);
                break;
            }
        }
        else {
            str_481=charp_substring(self,offset_453,-1);
            buffer_append_str(result_463,str_481);
            break;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_463);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_482;
int ovec_max_483;
const char* err_487;
int erro_ofs_488;
int options_489;
char* str_490;
struct real_pcre8_or_16* re_491;
struct buffer* result_492;
int n_493;
int options_494;
int len_495;
int regex_result_496;
int i_497;
int i_498;
char* str_499;
struct list$1charph* group_strings_500;
char* match_string_501;
char* block_result_502;
char* str_503;
char* str_504;
char* str_505;
struct list$1charph* group_strings_506;
int i_507;
char* match_string_508;
char* match_string_509;
char* block_result_510;
char* str_511;
char* str_512;
char* str_513;
char* __result139__;
err_487 = (void*)0;
memset(&erro_ofs_488, 0, sizeof(int));
    offset_482=0;
    ovec_max_483=16;
    int start_484[ovec_max_483];
    memset(&start_484, 0, sizeof(int)    *(ovec_max_483)    );
    int end_485[ovec_max_483];
    memset(&end_485, 0, sizeof(int)    *(ovec_max_483)    );
    int ovec_value_486[ovec_max_483*3];
    memset(&ovec_value_486, 0, sizeof(int)    *(ovec_max_483*3)    );
    options_489=reg->options;
    str_490=reg->str;
    re_491=reg->re;
    result_492=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1976, "buffer"));
    n_493=0;
    while((_Bool)1) {
        options_494=2097152;
        len_495=strlen(self);
        regex_result_496=pcre_exec(re_491,(struct pcre_extra*)0,self,len_495,offset_482,options_494,ovec_value_486,ovec_max_483*3);
        for(        i_497=0;        i_497<ovec_max_483;        i_497++        ){
            start_484[i_497]=ovec_value_486[i_497*2];
        }
        for(        i_498=0;        i_498<ovec_max_483;        i_498++        ){
            end_485[i_498]=ovec_value_486[i_498*2+1];
        }
        if(        regex_result_496==1) {
            n_493++;
            str_499=charp_substring(self,offset_482,start_484[0]);
            buffer_append_str(result_492,str_499);
            group_strings_500=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1999, "list$1charph"));
            list$1charph_push_back(group_strings_500,charp_substring(self,start_484[0],end_485[0]));
            match_string_501=charp_substring(self,start_484[0],end_485[0]);
            block_result_502=block(parent,match_string_501,group_strings_500);
            buffer_append_str(result_492,block_result_502);
            if(            offset_482==end_485[0]) {
                offset_482++;
            }
            else {
                offset_482=end_485[0];
            }
            if(            !reg->global) {
                str_503=charp_substring(self,offset_482,-1);
                buffer_append_str(result_492,str_503);
                break;
            }
            if(            n_493==count) {
                str_504=charp_substring(self,offset_482,-1);
                buffer_append_str(result_492,str_504);
                break;
            }
        }
        else if(        regex_result_496>1) {
            n_493++;
            str_505=charp_substring(self,offset_482,start_484[0]);
            buffer_append_str(result_492,str_505);
            if(            offset_482==end_485[0]) {
                offset_482++;
            }
            else {
                offset_482=end_485[0];
            }
            group_strings_506=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2042, "list$1charph"));
            for(            i_507=1;            i_507<regex_result_496;            i_507++            ){
                match_string_508=charp_substring(self,start_484[i_507],end_485[i_507]);
                list$1charph_push_back(group_strings_506,match_string_508);
            }
            match_string_509=charp_substring(self,start_484[0],end_485[0]);
            block_result_510=block(parent,match_string_509,group_strings_506);
            buffer_append_str(result_492,block_result_510);
            if(            !reg->global) {
                str_511=charp_substring(self,offset_482,-1);
                buffer_append_str(result_492,str_511);
                break;
            }
            if(            n_493==count) {
                str_512=charp_substring(self,offset_482,-1);
                buffer_append_str(result_492,str_512);
                break;
            }
        }
        else {
            str_513=charp_substring(self,offset_482,-1);
            buffer_append_str(result_492,str_513);
            break;
        }
    }
    __result139__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_492);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_514;
unsigned int* p_515;
    result_514=0;
    p_515=value;
    while(*p_515) {
        result_514+=(*p_515);
        p_515++;
    }
    return result_514;
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
char* result_516;
char* __result141__;
char* __result142__;
    result_516=__builtin_string(str);
    if(    result_516[string_length(result_516)-1]==10) {
        __result141__ = gComeFunResultObject = __result_obj__ = string_substring(result_516,0,-2);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_516;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result143__;
char* result_517;
char* result2_518;
char* __result144__;
    if(    path==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    result_517=realpath(path,((void*)0));
    result2_518=__builtin_string(result_517);
    free(result_517);
    __result144__ = gComeFunResultObject = __result_obj__ = result2_518;
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
unsigned int* p_519;
unsigned long unsigned  int len_520;
    p_519=wstr;
    len_520=0;
    while(*p_519) {
        p_519++;
        len_520++;
    }
    return len_520;
}

