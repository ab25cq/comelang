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
struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
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
struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

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
_Bool size_t_equals(long self, long right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
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
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
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
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2205, "buffer"));
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
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2212, "buffer"));
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
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2221, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2228, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2235, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2242, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2249, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2549, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2554, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2559, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2564, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2569, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2602, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2604, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2609, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2611, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2616, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2618, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2623, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2625, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2630, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2632, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2637, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2639, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2644, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2646, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2651, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2656, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2661, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2666, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2671, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2676, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2681, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2686, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2691, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2696, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2701, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2706, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2711, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2716, "vector$1double"),len,self);
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
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 221, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 231, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 241, "list_item$1char");
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
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 221, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 231, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 241, "list_item$1charp");
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
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 221, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 231, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 241, "list_item$1short");
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
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 221, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 231, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 241, "list_item$1int");
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
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 221, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 231, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 241, "list_item$1long");
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
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 221, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 231, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 241, "list_item$1float");
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
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 221, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 231, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 241, "list_item$1double");
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
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 999, "char");
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
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 999, "char*");
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
    self->items=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "comelang.h", 999, "short");
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
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 999, "int");
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
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 999, "long");
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
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 999, "float");
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
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 999, "double");
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

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_44;
int erro_ofs_45;
int options_46;
struct come_regex* __null_value1;
struct tuple2$2come_regexphcharph* __result93__;
struct tuple2$2come_regexphcharph* __result95__;
err_44 = (void*)0;
memset(&erro_ofs_45, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
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
        __result93__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 46, "struct tuple2$2come_regexphcharph"),__null_value1,xsprintf("regex error \%s",charp_to_string(str)));
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result95__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 53, "struct tuple2$2come_regexphvoidp"),self,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* __result92__;
    self->v1=v1;
    self->v2=v2;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphvoidp* __result94__;
    self->v1=v1;
    self->v2=v2;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1;
struct come_regex* come_exception_var_b1_47;
char* Err_48;
struct come_regex* __null_value2;
struct tuple2$2come_regexphcharph* __result96__;
struct tuple2$2come_regexphcharph* __result97__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b1_47=multiple_assign_var1->v1;
    Err_48=multiple_assign_var1->v2;
    if(    Err_48) {
        __result96__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphcharph"),__null_value2,Err_48);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    __result97__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphvoidp"),come_exception_var_b1_47,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result97__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2;
struct come_regex* come_exception_var_b2_49;
char* Err_50;
struct come_regex* __null_value3;
struct tuple2$2come_regexphcharph* __result98__;
struct tuple2$2come_regexphcharph* __result99__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b2_49=multiple_assign_var2->v1;
    Err_50=multiple_assign_var2->v2;
    if(    Err_50) {
        __result98__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphcharph"),__null_value3,Err_50);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    __result99__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphvoidp"),come_exception_var_b2_49,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result100__;
struct come_regex* result_51;
const char* err_52;
int erro_ofs_53;
struct come_regex* __result101__;
err_52 = (void*)0;
memset(&erro_ofs_53, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_51=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_51->str=string_clone(reg->str);
    result_51->ignore_case=reg->ignore_case;
    result_51->multiline=reg->multiline;
    result_51->global=reg->global;
    result_51->extended=reg->extended;
    result_51->dotall=reg->dotall;
    result_51->anchored=reg->anchored;
    result_51->dollar_endonly=reg->dollar_endonly;
    result_51->ungreedy=reg->ungreedy;
    result_51->options=reg->options;
    result_51->re=pcre_compile(result_51->str,result_51->options,&err_52,&erro_ofs_53,((void*)0));
    if(    result_51->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_51->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_51,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result101__ = gComeFunResultObject = __result_obj__ = result_51;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = __builtin_string(regex->str);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_54;
int i_55;
char* __result103__;
    result_54=__builtin_string(str);
    for(    i_55=0;    i_55<strlen(str);    i_55++    ){
        if(        str[i_55]>=65&&str[i_55]<=90) {
            result_54[i_55]=str[i_55]-65+97;
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = result_54;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_56;
int i_57;
char* __result104__;
    result_56=__builtin_string(str);
    for(    i_57=0;    i_57<strlen(str);    i_57++    ){
        if(        str[i_57]>=97&&str[i_57]<=122) {
            result_56[i_57]=str[i_57]-97+65;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_56;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result105__;
int len_58;
unsigned int* __result106__;
unsigned int* __result107__;
unsigned int* __result108__;
unsigned int* result_59;
unsigned int* __result109__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_58=wcslen(str);
    if(    head<0) {
        head+=len_58;
    }
    if(    tail<0) {
        tail+=len_58+1;
    }
    if(    head>tail) {
        __result106__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_58) {
        tail=len_58;
    }
    if(    head==tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(    tail-head+1<1) {
        __result108__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_59=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 181, "int");
    memcpy(result_59,str+head,sizeof(unsigned int)*(tail-head));
    result_59[tail-head]=0;
    __result109__ = gComeFunResultObject = __result_obj__ = result_59;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result110__;
int len_60;
unsigned int* wstr_61;
int ret_62;
unsigned int* __result111__;
    if(    str==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    len_60=strlen(str);
    wstr_61=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_60+1)), "libcomelang-str-gc.c", 196, "int");
    ret_62=mbstowcs(wstr_61,str,len_60+1);
    wstr_61[ret_62]=0;
    if(    ret_62<0) {
        wstr_61[0]=0;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = wstr_61;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_63;
int len_64;
int i_65;
int len2_66;
int j_67;
memset(&j_67, 0, sizeof(int));
    n_63=0;
    len_64=strlen(str);
    for(    i_65=0;    i_65<len_64;    i_65++    ){
        len2_66=strlen(search_str);
        for(        j_67=0;        j_67<len2_66;        j_67++        ){
            if(            str[i_65+j_67]!=search_str[j_67]) {
                break;
            }
        }
        if(        j_67==len2_66) {
            n_63++;
            if(            n_63==count) {
                return i_65;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_68;
int result_72;
int offset_73;
const char* err_74;
int erro_ofs_75;
int options_76;
char* str_77;
struct real_pcre8_or_16* re_78;
int n_79;
int options_80;
int len_81;
int regex_result_82;
int i_83;
int i_84;
err_74 = (void*)0;
memset(&erro_ofs_75, 0, sizeof(int));
    ovec_max_68=16;
    int start_69[ovec_max_68];
    memset(&start_69, 0, sizeof(int)    *(ovec_max_68)    );
    int end_70[ovec_max_68];
    memset(&end_70, 0, sizeof(int)    *(ovec_max_68)    );
    int ovec_value_71[ovec_max_68*3];
    memset(&ovec_value_71, 0, sizeof(int)    *(ovec_max_68*3)    );
    result_72=default_value;
    offset_73=0;
    options_76=reg->options;
    str_77=reg->str;
    re_78=reg->re;
    n_79=0;
    while((_Bool)1) {
        options_80=2097152;
        len_81=strlen(self);
        regex_result_82=pcre_exec(re_78,(struct pcre_extra*)0,self,len_81,offset_73,options_80,ovec_value_71,ovec_max_68*3);
        for(        i_83=0;        i_83<ovec_max_68;        i_83++        ){
            start_69[i_83]=ovec_value_71[i_83*2];
        }
        for(        i_84=0;        i_84<ovec_max_68;        i_84++        ){
            end_70[i_84]=ovec_value_71[i_84*2+1];
        }
        if(        regex_result_82>0) {
            n_79++;
            if(            offset_73==end_70[0]) {
                offset_73++;
            }
            else {
                offset_73=end_70[0];
            }
            if(            n_79==count) {
                result_72=start_69[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_72;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_85;
char* p_86;
    len_85=strlen(search_str);
    p_86=str+strlen(str)-len_85;
    while(p_86>=str) {
        if(        strncmp(p_86,search_str,len_85)==0) {
            return p_86-str;
        }
        p_86--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_87;
int erro_ofs_88;
int options_89;
char* str_90;
struct real_pcre8_or_16* re_91;
char* self2_92;
int ovec_max_93;
int result_97;
int offset_98;
int options_99;
int len_100;
int regex_result_101;
int i_102;
int i_103;
err_87 = (void*)0;
memset(&erro_ofs_88, 0, sizeof(int));
    options_89=reg->options;
    str_90=reg->str;
    re_91=reg->re;
    self2_92=charp_reverse(self);
    ovec_max_93=16;
    int start_94[ovec_max_93];
    memset(&start_94, 0, sizeof(int)    *(ovec_max_93)    );
    int end_95[ovec_max_93];
    memset(&end_95, 0, sizeof(int)    *(ovec_max_93)    );
    int ovec_value_96[ovec_max_93*3];
    memset(&ovec_value_96, 0, sizeof(int)    *(ovec_max_93*3)    );
    result_97=default_value;
    offset_98=0;
    while((_Bool)1) {
        options_99=2097152;
        len_100=strlen(self2_92);
        regex_result_101=pcre_exec(re_91,(struct pcre_extra*)0,self2_92,len_100,offset_98,options_99,ovec_value_96,ovec_max_93*3);
        for(        i_102=0;        i_102<ovec_max_93;        i_102++        ){
            start_94[i_102]=ovec_value_96[i_102*2];
        }
        for(        i_103=0;        i_103<ovec_max_93;        i_103++        ){
            end_95[i_103]=ovec_value_96[i_103*2+1];
        }
        if(        regex_result_101==1||regex_result_101>0) {
            result_97=strlen(self)-1-start_94[0];
            break;
        }
        {
            break;
        }
    }
    return result_97;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_104;
char* p_105;
int n_106;
    len_104=strlen(search_str);
    p_105=str+strlen(str)-len_104;
    n_106=0;
    while(p_105>=str) {
        if(        strncmp(p_105,search_str,len_104)==0) {
            n_106++;
            if(            n_106==count) {
                return p_105-str;
            }
        }
        p_105--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_107;
int offset_108;
int ovec_max_109;
const char* err_113;
int erro_ofs_114;
int options_115;
char* str_116;
struct real_pcre8_or_16* re_117;
int options_118;
int len_119;
int regex_result_120;
int i_121;
int i_122;
char* str_123;
struct list$1charph* group_strings_124;
char* str2_125;
char* str_129;
struct list$1charph* group_strings_130;
int i_131;
char* match_string_132;
char* str2_133;
struct list$1charph* __result114__;
err_113 = (void*)0;
memset(&erro_ofs_114, 0, sizeof(int));
    result_107=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 382, "list$1charph"));
    offset_108=0;
    ovec_max_109=16;
    int start_110[ovec_max_109];
    memset(&start_110, 0, sizeof(int)    *(ovec_max_109)    );
    int end_111[ovec_max_109];
    memset(&end_111, 0, sizeof(int)    *(ovec_max_109)    );
    int ovec_value_112[ovec_max_109*3];
    memset(&ovec_value_112, 0, sizeof(int)    *(ovec_max_109*3)    );
    options_115=reg->options;
    str_116=reg->str;
    re_117=reg->re;
    while((_Bool)1) {
        options_118=2097152;
        len_119=strlen(self);
        regex_result_120=pcre_exec(re_117,(struct pcre_extra*)0,self,len_119,offset_108,options_118,ovec_value_112,ovec_max_109*3);
        for(        i_121=0;        i_121<ovec_max_109;        i_121++        ){
            start_110[i_121]=ovec_value_112[i_121*2];
        }
        for(        i_122=0;        i_122<ovec_max_109;        i_122++        ){
            end_111[i_122]=ovec_value_112[i_122*2+1];
        }
        if(        regex_result_120==1) {
            str_123=charp_substring(self,start_110[0],end_111[0]);
            group_strings_124=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 416, "list$1charph"));
            str2_125=block(parent,str_123,group_strings_124);
            list$1charph_push_back(result_107,str2_125);
            if(            offset_108==end_111[0]) {
                offset_108++;
            }
            else {
                offset_108=end_111[0];
            }
        }
        else if(        regex_result_120>1) {
            str_129=charp_substring(self,start_110[0],end_111[0]);
            group_strings_130=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 433, "list$1charph"));
            for(            i_131=1;            i_131<regex_result_120;            i_131++            ){
                match_string_132=charp_substring(self,start_110[i_131],end_111[i_131]);
                list$1charph_push_back(group_strings_130,match_string_132);
            }
            str2_133=block(parent,str_129,group_strings_130);
            list$1charph_push_back(result_107,str2_133);
            if(            offset_108==end_111[0]) {
                offset_108++;
            }
            else {
                offset_108=end_111[0];
            }
        }
        else {
            break;
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_107;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_126;
struct list_item$1charph* litem_127;
struct list_item$1charph* litem_128;
struct list$1charph* __result113__;
    if(    self->len==0) {
        litem_126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 221, "list_item$1charph");
        litem_126->prev=((void*)0);
        litem_126->next=((void*)0);
        litem_126->item=item;
        self->tail=litem_126;
        self->head=litem_126;
    }
    else if(    self->len==1) {
        litem_127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 231, "list_item$1charph");
        litem_127->prev=self->head;
        litem_127->next=((void*)0);
        litem_127->item=item;
        self->tail=litem_127;
        self->head->next=litem_127;
    }
    else {
        litem_128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 241, "list_item$1charph");
        litem_128->prev=self->tail;
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail->next=litem_128;
        self->tail=litem_128;
    }
    self->len++;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* result_134;
int offset_135;
int ovec_max_136;
const char* err_140;
int erro_ofs_141;
int options_142;
char* str_143;
struct real_pcre8_or_16* re_144;
int n_145;
int options_146;
int len_147;
int regex_result_148;
int i_149;
int i_150;
char* str_151;
struct list$1charph* group_strings_152;
char* str2_153;
char* str_154;
struct list$1charph* group_strings_155;
int i_156;
char* match_string_157;
char* str2_158;
struct list$1charph* __result115__;
err_140 = (void*)0;
memset(&erro_ofs_141, 0, sizeof(int));
    result_134=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 463, "list$1charph"));
    offset_135=0;
    ovec_max_136=16;
    int start_137[ovec_max_136];
    memset(&start_137, 0, sizeof(int)    *(ovec_max_136)    );
    int end_138[ovec_max_136];
    memset(&end_138, 0, sizeof(int)    *(ovec_max_136)    );
    int ovec_value_139[ovec_max_136*3];
    memset(&ovec_value_139, 0, sizeof(int)    *(ovec_max_136*3)    );
    options_142=reg->options;
    str_143=reg->str;
    re_144=reg->re;
    n_145=0;
    while((_Bool)1) {
        options_146=2097152;
        len_147=strlen(self);
        regex_result_148=pcre_exec(re_144,(struct pcre_extra*)0,self,len_147,offset_135,options_146,ovec_value_139,ovec_max_136*3);
        for(        i_149=0;        i_149<ovec_max_136;        i_149++        ){
            start_137[i_149]=ovec_value_139[i_149*2];
        }
        for(        i_150=0;        i_150<ovec_max_136;        i_150++        ){
            end_138[i_150]=ovec_value_139[i_150*2+1];
        }
        if(        regex_result_148==1) {
            str_151=charp_substring(self,start_137[0],end_138[0]);
            group_strings_152=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 499, "list$1charph"));
            str2_153=block(parent,str_151,group_strings_152);
            list$1charph_push_back(result_134,str2_153);
            if(            offset_135==end_138[0]) {
                offset_135++;
            }
            else {
                offset_135=end_138[0];
            }
            n_145++;
            if(            n_145==count) {
                break;
            }
        }
        else if(        regex_result_148>1) {
            str_154=charp_substring(self,start_137[0],end_138[0]);
            group_strings_155=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 521, "list$1charph"));
            for(            i_156=1;            i_156<regex_result_148;            i_156++            ){
                match_string_157=charp_substring(self,start_137[i_156],end_138[i_156]);
                list$1charph_push_back(group_strings_155,match_string_157);
            }
            str2_158=block(parent,str_154,group_strings_155);
            list$1charph_push_back(result_134,str2_158);
            if(            offset_135==end_138[0]) {
                offset_135++;
            }
            else {
                offset_135=end_138[0];
            }
            n_145++;
            if(            n_145==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result115__ = gComeFunResultObject = __result_obj__ = result_134;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_159;
int erro_ofs_160;
int options_161;
char* str_162;
struct real_pcre8_or_16* re_163;
struct list$1charph* result_164;
int offset_165;
int ovec_max_166;
int options_170;
int len_171;
int regex_result_172;
int i_173;
int i_174;
char* str_175;
struct list$1charph* match_strings_176;
char* str2_177;
char* str_178;
struct list$1charph* match_strings_179;
int i_180;
char* match_str_181;
char* str2_182;
char* str_183;
struct list$1charph* match_strings_184;
char* str2_185;
struct list$1charph* __result116__;
err_159 = (void*)0;
memset(&erro_ofs_160, 0, sizeof(int));
    options_161=reg->options;
    str_162=reg->str;
    re_163=reg->re;
    result_164=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 563, "list$1charph"));
    offset_165=0;
    ovec_max_166=16;
    int start_167[ovec_max_166];
    memset(&start_167, 0, sizeof(int)    *(ovec_max_166)    );
    int end_168[ovec_max_166];
    memset(&end_168, 0, sizeof(int)    *(ovec_max_166)    );
    int ovec_value_169[ovec_max_166*3];
    memset(&ovec_value_169, 0, sizeof(int)    *(ovec_max_166*3)    );
    while((_Bool)1) {
        options_170=2097152;
        len_171=strlen(self);
        regex_result_172=pcre_exec(re_163,(struct pcre_extra*)0,self,len_171,offset_165,options_170,ovec_value_169,ovec_max_166*3);
        for(        i_173=0;        i_173<ovec_max_166;        i_173++        ){
            start_167[i_173]=ovec_value_169[i_173*2];
        }
        for(        i_174=0;        i_174<ovec_max_166;        i_174++        ){
            end_168[i_174]=ovec_value_169[i_174*2+1];
        }
        if(        regex_result_172==1) {
            str_175=charp_substring(self,offset_165,start_167[0]);
            match_strings_176=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 590, "list$1charph"));
            str2_177=block(parent,str_175,match_strings_176);
            list$1charph_push_back(result_164,str2_177);
            if(            offset_165==end_168[0]) {
                offset_165++;
            }
            else {
                offset_165=end_168[0];
            }
        }
        else if(        regex_result_172>1) {
            str_178=charp_substring(self,offset_165,start_167[0]);
            if(            offset_165==end_168[0]) {
                offset_165++;
            }
            else {
                offset_165=end_168[0];
            }
            match_strings_179=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            for(            i_180=1;            i_180<regex_result_172;            i_180++            ){
                match_str_181=charp_substring(self,start_167[i_180],end_168[i_180]);
                list$1charph_push_back(match_strings_179,match_str_181);
            }
            str2_182=block(parent,str_178,match_strings_179);
            list$1charph_push_back(result_164,str2_182);
        }
        else {
            break;
        }
    }
    if(    offset_165<charp_length(self)) {
        str_183=charp_substring(self,offset_165,-1);
        match_strings_184=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 632, "list$1charph"));
        str2_185=block(parent,str_183,match_strings_184);
        list$1charph_push_back(result_164,str2_185);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_164;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_186;
int erro_ofs_187;
int options_188;
char* str_189;
struct real_pcre8_or_16* re_190;
struct list$1charph* result_191;
int offset_192;
int ovec_max_193;
int n_197;
int options_198;
int len_199;
int regex_result_200;
int i_201;
int i_202;
char* str_203;
struct list$1charph* match_strings_204;
char* str2_205;
char* str_206;
struct list$1charph* match_strings_207;
int i_208;
char* match_str_209;
char* str2_210;
struct list$1charph* __result117__;
err_186 = (void*)0;
memset(&erro_ofs_187, 0, sizeof(int));
    options_188=reg->options;
    str_189=reg->str;
    re_190=reg->re;
    result_191=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 650, "list$1charph"));
    offset_192=0;
    ovec_max_193=16;
    int start_194[ovec_max_193];
    memset(&start_194, 0, sizeof(int)    *(ovec_max_193)    );
    int end_195[ovec_max_193];
    memset(&end_195, 0, sizeof(int)    *(ovec_max_193)    );
    int ovec_value_196[ovec_max_193*3];
    memset(&ovec_value_196, 0, sizeof(int)    *(ovec_max_193*3)    );
    n_197=0;
    while((_Bool)1) {
        options_198=2097152;
        len_199=strlen(self);
        regex_result_200=pcre_exec(re_190,(struct pcre_extra*)0,self,len_199,offset_192,options_198,ovec_value_196,ovec_max_193*3);
        for(        i_201=0;        i_201<ovec_max_193;        i_201++        ){
            start_194[i_201]=ovec_value_196[i_201*2];
        }
        for(        i_202=0;        i_202<ovec_max_193;        i_202++        ){
            end_195[i_202]=ovec_value_196[i_202*2+1];
        }
        if(        regex_result_200==1) {
            str_203=charp_substring(self,offset_192,start_194[0]);
            match_strings_204=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 679, "list$1charph"));
            str2_205=block(parent,str_203,match_strings_204);
            list$1charph_push_back(result_191,str2_205);
            if(            offset_192==end_195[0]) {
                offset_192++;
            }
            else {
                offset_192=end_195[0];
            }
        }
        else if(        regex_result_200>1) {
            str_206=charp_substring(self,offset_192,start_194[0]);
            if(            offset_192==end_195[0]) {
                offset_192++;
            }
            else {
                offset_192=end_195[0];
            }
            match_strings_207=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 702, "list$1charph"));
            for(            i_208=1;            i_208<regex_result_200;            i_208++            ){
                match_str_209=charp_substring(self,start_194[i_208],end_195[i_208]);
                list$1charph_push_back(match_strings_207,match_str_209);
            }
            str2_210=block(parent,str_206,match_strings_207);
            list$1charph_push_back(result_191,str2_210);
        }
        else {
            break;
        }
        n_197++;
        if(        n_197==count) {
            break;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_191;
    gComeFunResultObject = (void*)0;
    return __result117__;
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
struct list$1charph* result_211;
int offset_212;
int ovec_max_213;
const char* err_217;
int erro_ofs_218;
int options_219;
char* str_220;
struct real_pcre8_or_16* re_221;
int options_222;
int len_223;
int regex_result_224;
int i_225;
int i_226;
char* str_227;
char* str_228;
int i_229;
char* match_string_230;
struct list$1charph* __result118__;
err_217 = (void*)0;
memset(&erro_ofs_218, 0, sizeof(int));
    result_211=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 766, "list$1charph"));
    offset_212=0;
    ovec_max_213=16;
    int start_214[ovec_max_213];
    memset(&start_214, 0, sizeof(int)    *(ovec_max_213)    );
    int end_215[ovec_max_213];
    memset(&end_215, 0, sizeof(int)    *(ovec_max_213)    );
    int ovec_value_216[ovec_max_213*3];
    memset(&ovec_value_216, 0, sizeof(int)    *(ovec_max_213*3)    );
    options_219=reg->options;
    str_220=reg->str;
    re_221=reg->re;
    while((_Bool)1) {
        options_222=2097152;
        len_223=strlen(self);
        regex_result_224=pcre_exec(re_221,(struct pcre_extra*)0,self,len_223,offset_212,options_222,ovec_value_216,ovec_max_213*3);
        for(        i_225=0;        i_225<ovec_max_213;        i_225++        ){
            start_214[i_225]=ovec_value_216[i_225*2];
        }
        for(        i_226=0;        i_226<ovec_max_213;        i_226++        ){
            end_215[i_226]=ovec_value_216[i_226*2+1];
        }
        if(        regex_result_224==1) {
            str_227=charp_substring(self,start_214[0],end_215[0]);
            list$1charph_push_back(result_211,str_227);
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
        }
        else if(        regex_result_224>1) {
            str_228=charp_substring(self,start_214[0],end_215[0]);
            list$1charph_push_back(result_211,str_228);
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
            *num_group_string_in_regex=regex_result_224-1;
            for(            i_229=1;            i_229<regex_result_224;            i_229++            ){
                match_string_230=charp_substring(self,start_214[i_229],end_215[i_229]);
                list$1charph_push_back(group_strings,match_string_230);
            }
        }
        else {
            break;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_211;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_231;
int len_232;
char* __result119__;
    result_231=__builtin_string(self);
    len_232=strlen(self);
    if(    self[len_232-1]==10) {
        result_231[len_232-1]=0;
    }
    else if(    self[len_232-1]==13) {
        result_231[len_232-1]=0;
    }
    else if(    len_232>2&&self[len_232-2]==13&&self[len_232-1]==10) {
        result_231[len_232-2]=0;
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_231;
    gComeFunResultObject = (void*)0;
    return __result119__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_233;
char* result_234;
int n_235;
int i_236;
char c_237;
char* __result120__;
    len_233=charp_length(str);
    result_234=(char*)come_calloc(1, sizeof(char)*(1*(len_233*2+1)), "libcomelang-str-gc.c", 860, "char");
    n_235=0;
    for(    i_236=0;    i_236<len_233;    i_236++    ){
        c_237=str[i_236];
        if(        (c_237>=0&&c_237<32)||c_237==127) {
            result_234[n_235++]=94;
            result_234[n_235++]=c_237+65-1;
        }
        else {
            result_234[n_235++]=c_237;
        }
    }
    result_234[n_235]=0;
    __result120__ = gComeFunResultObject = __result_obj__ = result_234;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_238;
char* result_239;
char* __result121__;
    len_238=4*(wcslen(wstr)+1);
    result_239=(char*)come_calloc(1, sizeof(char)*(1*(len_238)), "libcomelang-str-gc.c", 886, "char");
    if(    wcstombs(result_239,wstr,len_238)<0) {
        strncpy(result_239,"",len_238);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = result_239;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_240;
unsigned int* __result123__;
unsigned int* __result124__;
unsigned int* sub_str_241;
unsigned int* __result125__;
    len_240=wcslen(str);
    if(    len_240==0) {
        __result123__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    if(    head<0) {
        head+=len_240;
    }
    if(    tail<0) {
        tail+=len_240+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result124__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    if(    tail>=len_240) {
        tail=len_240;
    }
    sub_str_241=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_241,sizeof(unsigned int)*(wstring_length(sub_str_241)+1));
    __result125__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result125__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_242;
    head_242=wcsstr(str,search_str);
    if(    head_242==((void*)0)) {
        return default_value;
    }
    return head_242-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_243;
unsigned int* p_244;
int len2_245;
_Bool result_246;
int i_247;
memset(&i_247, 0, sizeof(int));
    len_243=wcslen(search_str);
    p_244=str+wcslen(str)-len_243;
    while(p_244>=str) {
        len2_245=wcslen(p_244);
        result_246=(_Bool)1;
        for(        i_247=0;        i_247<len_243&&i_247<len2_245;        i_247++        ){
            if(            p_244[i_247]!=search_str[i_247]) {
                result_246=(_Bool)0;
            }
        }
        if(        result_246) {
            return (p_244-str);
        }
        p_244--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_248;
unsigned int* result_249;
int i_250;
unsigned int* __result126__;
    len_248=wcslen(str);
    result_249=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_248+1)), "libcomelang-str-gc.c", 986, "int");
    for(    i_250=0;    i_250<len_248;    i_250++    ){
        result_249[i_250]=str[len_248-i_250-1];
    }
    result_249[len_248]=0;
    __result126__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_251;
unsigned int* result_252;
int i_253;
unsigned int* __result127__;
    len_251=wcslen(str)*n+1;
    result_252=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_251)), "libcomelang-str-gc.c", 1001, "int");
    result_252[0]=0;
    for(    i_253=0;    i_253<n;    i_253++    ){
        wcscat(result_252,str);
    }
    __result127__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_254;
unsigned int* result_255;
int n_256;
int i_257;
unsigned int c_258;
unsigned int* __result128__;
    len_254=wchar_tp_length(str);
    result_255=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_254*2+1)), "libcomelang-str-gc.c", 1015, "int");
    n_256=0;
    for(    i_257=0;    i_257<len_254;    i_257++    ){
        c_258=str[i_257];
        if(        (c_258>=0&&c_258<32)||c_258==127) {
            result_255[n_256++]=94;
            result_255[n_256++]=c_258+65-1;
        }
        else {
            result_255[n_256++]=c_258;
        }
    }
    result_255[n_256]=0;
    __result128__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_259;
int ovec_max_260;
const char* err_264;
int erro_ofs_265;
int options_266;
char* str_267;
struct real_pcre8_or_16* re_268;
int n_269;
int options_270;
int len_271;
int regex_result_272;
int i_273;
int i_274;
int i_277;
char* match_string_278;
err_264 = (void*)0;
memset(&erro_ofs_265, 0, sizeof(int));
    offset_259=0;
    ovec_max_260=16;
    int start_261[ovec_max_260];
    memset(&start_261, 0, sizeof(int)    *(ovec_max_260)    );
    int end_262[ovec_max_260];
    memset(&end_262, 0, sizeof(int)    *(ovec_max_260)    );
    int ovec_value_263[ovec_max_260*3];
    memset(&ovec_value_263, 0, sizeof(int)    *(ovec_max_260*3)    );
    options_266=reg->options;
    str_267=reg->str;
    re_268=reg->re;
    n_269=0;
    while((_Bool)1) {
        options_270=2097152;
        len_271=strlen(self);
        regex_result_272=pcre_exec(re_268,(struct pcre_extra*)0,self,len_271,offset_259,options_270,ovec_value_263,ovec_max_260*3);
        for(        i_273=0;        i_273<ovec_max_260;        i_273++        ){
            start_261[i_273]=ovec_value_263[i_273*2];
        }
        for(        i_274=0;        i_274<ovec_max_260;        i_274++        ){
            end_262[i_274]=ovec_value_263[i_274*2+1];
        }
        if(        regex_result_272==1||(group_strings==((void*)0)&&regex_result_272>0)) {
            n_269++;
            if(            n_269==count) {
                return (_Bool)1;
            }
            if(            offset_259==end_262[0]) {
                offset_259++;
            }
            else {
                offset_259=end_262[0];
            }
        }
        else if(        regex_result_272>1) {
            n_269++;
            list$1charph_reset(group_strings);
            for(            i_277=1;            i_277<regex_result_272;            i_277++            ){
                match_string_278=charp_substring(self,start_261[i_277],end_262[i_277]);
                list$1charph_push_back(group_strings,match_string_278);
            }
            if(            n_269==count) {
                return (_Bool)1;
            }
            if(            offset_259==end_262[0]) {
                offset_259++;
            }
            else {
                offset_259=end_262[0];
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
struct list_item$1charph* it_275;
struct list_item$1charph* prev_it_276;
struct list$1charph* __result129__;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result129__;
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
unsigned int* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result131__;
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
unsigned int* result_279;
unsigned int* __result132__;
    result_279=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1179, "int");
    wcscpy(result_279,left);
    wcscat(result_279,right);
    __result132__ = gComeFunResultObject = __result_obj__ = result_279;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_280;
unsigned int* __result133__;
    result_280=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1189, "int");
    wcscpy(result_280,left);
    wcscat(result_280,right);
    __result133__ = gComeFunResultObject = __result_obj__ = result_280;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_281;
    head_281=strstr(str,search_str);
    if(    head_281==((void*)0)) {
        return default_value;
    }
    return head_281-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_282;
int result_286;
int offset_287;
const char* err_288;
int erro_ofs_289;
int options_290;
char* str_291;
struct real_pcre8_or_16* re_292;
int options_293;
int len_294;
int regex_result_295;
int i_296;
int i_297;
err_288 = (void*)0;
memset(&erro_ofs_289, 0, sizeof(int));
    ovec_max_282=16;
    int start_283[ovec_max_282];
    memset(&start_283, 0, sizeof(int)    *(ovec_max_282)    );
    int end_284[ovec_max_282];
    memset(&end_284, 0, sizeof(int)    *(ovec_max_282)    );
    int ovec_value_285[ovec_max_282*3];
    memset(&ovec_value_285, 0, sizeof(int)    *(ovec_max_282*3)    );
    result_286=default_value;
    offset_287=0;
    options_290=reg->options;
    str_291=reg->str;
    re_292=reg->re;
    while((_Bool)1) {
        options_293=2097152;
        len_294=strlen(self);
        regex_result_295=pcre_exec(re_292,(struct pcre_extra*)0,self,len_294,offset_287,options_293,ovec_value_285,ovec_max_282*3);
        for(        i_296=0;        i_296<ovec_max_282;        i_296++        ){
            start_283[i_296]=ovec_value_285[i_296*2];
        }
        for(        i_297=0;        i_297<ovec_max_282;        i_297++        ){
            end_284[i_297]=ovec_value_285[i_297*2+1];
        }
        if(        regex_result_295==1||regex_result_295>0) {
            result_286=start_283[0];
            break;
        }
        {
            break;
        }
    }
    return result_286;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_298;
char* __result134__;
char* __result135__;
    len_298=strlen(self);
    if(    strcmp(self,"")==0) {
        __result134__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    if(    index<0) {
        index+=len_298;
    }
    if(    index>=len_298) {
        index=len_298-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result135__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_299;
char* result_300;
int i_301;
char* __result136__;
    len_299=strlen(str)*n+1;
    result_300=(char*)come_calloc(1, sizeof(char)*(1*(len_299)), "libcomelang-str-gc.c", 1287, "char");
    result_300[0]=0;
    for(    i_301=0;    i_301<n;    i_301++    ){
        strcat(result_300,str);
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_300;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_302;
int ovec_max_303;
const char* err_307;
int erro_ofs_308;
int options_309;
char* str_310;
struct real_pcre8_or_16* re_311;
struct buffer* result_312;
int options_313;
int len_314;
int regex_result_315;
int i_316;
int i_317;
char* str_318;
char* str_319;
char* str_320;
char* __result137__;
err_307 = (void*)0;
memset(&erro_ofs_308, 0, sizeof(int));
    offset_302=0;
    ovec_max_303=16;
    int start_304[ovec_max_303];
    memset(&start_304, 0, sizeof(int)    *(ovec_max_303)    );
    int end_305[ovec_max_303];
    memset(&end_305, 0, sizeof(int)    *(ovec_max_303)    );
    int ovec_value_306[ovec_max_303*3];
    memset(&ovec_value_306, 0, sizeof(int)    *(ovec_max_303*3)    );
    options_309=reg->options;
    str_310=reg->str;
    re_311=reg->re;
    result_312=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1315, "buffer"));
    while((_Bool)1) {
        options_313=2097152;
        len_314=strlen(self);
        regex_result_315=pcre_exec(re_311,(struct pcre_extra*)0,self,len_314,offset_302,options_313,ovec_value_306,ovec_max_303*3);
        for(        i_316=0;        i_316<ovec_max_303;        i_316++        ){
            start_304[i_316]=ovec_value_306[i_316*2];
        }
        for(        i_317=0;        i_317<ovec_max_303;        i_317++        ){
            end_305[i_317]=ovec_value_306[i_317*2+1];
        }
        if(        regex_result_315==1) {
            str_318=charp_substring(self,offset_302,start_304[0]);
            buffer_append_str(result_312,str_318);
            buffer_append_str(result_312,replace);
            if(            offset_302==end_305[0]) {
                offset_302++;
            }
            else {
                offset_302=end_305[0];
            }
            if(            !reg->global) {
                str_319=charp_substring(self,offset_302,-1);
                buffer_append_str(result_312,str_319);
                break;
            }
        }
        else {
            str_320=charp_substring(self,offset_302,-1);
            buffer_append_str(result_312,str_320);
            break;
        }
    }
    __result137__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_312);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_321;
int ovec_max_322;
const char* err_326;
int erro_ofs_327;
int options_328;
char* str_329;
struct real_pcre8_or_16* re_330;
struct buffer* result_331;
int n_332;
int options_333;
int len_334;
int regex_result_335;
int i_336;
int i_337;
char* str_338;
char* str_339;
char* str_340;
char* str_341;
char* __result138__;
err_326 = (void*)0;
memset(&erro_ofs_327, 0, sizeof(int));
    offset_321=0;
    ovec_max_322=16;
    int start_323[ovec_max_322];
    memset(&start_323, 0, sizeof(int)    *(ovec_max_322)    );
    int end_324[ovec_max_322];
    memset(&end_324, 0, sizeof(int)    *(ovec_max_322)    );
    int ovec_value_325[ovec_max_322*3];
    memset(&ovec_value_325, 0, sizeof(int)    *(ovec_max_322*3)    );
    options_328=reg->options;
    str_329=reg->str;
    re_330=reg->re;
    result_331=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1378, "buffer"));
    n_332=0;
    while((_Bool)1) {
        options_333=2097152;
        len_334=strlen(self);
        regex_result_335=pcre_exec(re_330,(struct pcre_extra*)0,self,len_334,offset_321,options_333,ovec_value_325,ovec_max_322*3);
        for(        i_336=0;        i_336<ovec_max_322;        i_336++        ){
            start_323[i_336]=ovec_value_325[i_336*2];
        }
        for(        i_337=0;        i_337<ovec_max_322;        i_337++        ){
            end_324[i_337]=ovec_value_325[i_337*2+1];
        }
        if(        regex_result_335==1) {
            n_332++;
            str_338=charp_substring(self,offset_321,start_323[0]);
            buffer_append_str(result_331,str_338);
            buffer_append_str(result_331,replace);
            if(            offset_321==end_324[0]) {
                offset_321++;
            }
            else {
                offset_321=end_324[0];
            }
            if(            !reg->global) {
                str_339=charp_substring(self,offset_321,-1);
                buffer_append_str(result_331,str_339);
                break;
            }
            if(            n_332==count) {
                str_340=charp_substring(self,offset_321,-1);
                buffer_append_str(result_331,str_340);
                break;
            }
        }
        else {
            str_341=charp_substring(self,offset_321,-1);
            buffer_append_str(result_331,str_341);
            break;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_331);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_342;
struct buffer* buf_343;
int i_344;
struct list$1charph* __result139__;
    result_342=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1437, "list$1charph"));
    buf_343=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1439, "buffer"));
    for(    i_344=0;    i_344<charp_length(self);    i_344++    ){
        if(        strstr(self+i_344,str)==self+i_344) {
            list$1charph_push_back(result_342,__builtin_string(buf_343->buf));
            buffer_reset(buf_343);
            i_344+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_343,self[i_344]);
        }
    }
    if(    buffer_length(buf_343)!=0) {
        list$1charph_push_back(result_342,__builtin_string(buf_343->buf));
    }
    __result139__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* result_345;
int offset_346;
int ovec_max_347;
const char* err_351;
int erro_ofs_352;
int options_353;
char* str_354;
struct real_pcre8_or_16* re_355;
int options_356;
int len_357;
int regex_result_358;
int i_359;
int i_360;
char* str_361;
char* str_362;
int i_363;
char* match_string_364;
struct list$1charph* __result140__;
err_351 = (void*)0;
memset(&erro_ofs_352, 0, sizeof(int));
    result_345=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1460, "list$1charph"));
    offset_346=0;
    ovec_max_347=16;
    int start_348[ovec_max_347];
    memset(&start_348, 0, sizeof(int)    *(ovec_max_347)    );
    int end_349[ovec_max_347];
    memset(&end_349, 0, sizeof(int)    *(ovec_max_347)    );
    int ovec_value_350[ovec_max_347*3];
    memset(&ovec_value_350, 0, sizeof(int)    *(ovec_max_347*3)    );
    options_353=reg->options;
    str_354=reg->str;
    re_355=reg->re;
    while((_Bool)1) {
        options_356=2097152;
        len_357=strlen(self);
        regex_result_358=pcre_exec(re_355,(struct pcre_extra*)0,self,len_357,offset_346,options_356,ovec_value_350,ovec_max_347*3);
        for(        i_359=0;        i_359<ovec_max_347;        i_359++        ){
            start_348[i_359]=ovec_value_350[i_359*2];
        }
        for(        i_360=0;        i_360<ovec_max_347;        i_360++        ){
            end_349[i_360]=ovec_value_350[i_360*2+1];
        }
        if(        regex_result_358==1) {
            str_361=charp_substring(self,start_348[0],end_349[0]);
            list$1charph_push_back(result_345,str_361);
            if(            offset_346==end_349[0]) {
                offset_346++;
            }
            else {
                offset_346=end_349[0];
            }
        }
        else if(        regex_result_358>1) {
            str_362=charp_substring(self,start_348[0],end_349[0]);
            list$1charph_push_back(result_345,str_362);
            if(            offset_346==end_349[0]) {
                offset_346++;
            }
            else {
                offset_346=end_349[0];
            }
            for(            i_363=1;            i_363<regex_result_358;            i_363++            ){
                match_string_364=charp_substring(self,start_348[i_363],end_349[i_363]);
                list$1charph_push_back(result_345,match_string_364);
            }
        }
        else {
            break;
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result140__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_365;
int erro_ofs_366;
int options_367;
char* str_368;
struct real_pcre8_or_16* re_369;
struct list$1charph* result_370;
int offset_371;
int ovec_max_372;
int options_376;
int len_377;
int regex_result_378;
int i_379;
int i_380;
char* str_381;
char* str_382;
int i_383;
char* match_str_384;
char* str_385;
struct list$1charph* __result141__;
err_365 = (void*)0;
memset(&erro_ofs_366, 0, sizeof(int));
    options_367=reg->options;
    str_368=reg->str;
    re_369=reg->re;
    result_370=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1541, "list$1charph"));
    offset_371=0;
    ovec_max_372=16;
    int start_373[ovec_max_372];
    memset(&start_373, 0, sizeof(int)    *(ovec_max_372)    );
    int end_374[ovec_max_372];
    memset(&end_374, 0, sizeof(int)    *(ovec_max_372)    );
    int ovec_value_375[ovec_max_372*3];
    memset(&ovec_value_375, 0, sizeof(int)    *(ovec_max_372*3)    );
    while((_Bool)1) {
        options_376=2097152;
        len_377=strlen(self);
        regex_result_378=pcre_exec(re_369,(struct pcre_extra*)0,self,len_377,offset_371,options_376,ovec_value_375,ovec_max_372*3);
        for(        i_379=0;        i_379<ovec_max_372;        i_379++        ){
            start_373[i_379]=ovec_value_375[i_379*2];
        }
        for(        i_380=0;        i_380<ovec_max_372;        i_380++        ){
            end_374[i_380]=ovec_value_375[i_380*2+1];
        }
        if(        regex_result_378==1) {
            str_381=charp_substring(self,offset_371,start_373[0]);
            list$1charph_push_back(result_370,str_381);
            if(            offset_371==end_374[0]) {
                offset_371++;
            }
            else {
                offset_371=end_374[0];
            }
        }
        else if(        regex_result_378>1) {
            str_382=charp_substring(self,offset_371,start_373[0]);
            list$1charph_push_back(result_370,str_382);
            if(            offset_371==end_374[0]) {
                offset_371++;
            }
            else {
                offset_371=end_374[0];
            }
            for(            i_383=1;            i_383<regex_result_378;            i_383++            ){
                match_str_384=charp_substring(self,start_373[i_383],end_374[i_383]);
                list$1charph_push_back(result_370,match_str_384);
            }
        }
        else {
            break;
        }
    }
    if(    offset_371<charp_length(self)) {
        str_385=charp_substring(self,offset_371,-1);
        list$1charph_push_back(result_370,str_385);
    }
    __result141__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_386;
int ovec_max_387;
const char* err_391;
int erro_ofs_392;
int options_393;
char* str_394;
struct real_pcre8_or_16* re_395;
int options_396;
int len_397;
int regex_result_398;
int i_399;
int i_400;
err_391 = (void*)0;
memset(&erro_ofs_392, 0, sizeof(int));
    offset_386=0;
    ovec_max_387=16;
    int start_388[ovec_max_387];
    memset(&start_388, 0, sizeof(int)    *(ovec_max_387)    );
    int end_389[ovec_max_387];
    memset(&end_389, 0, sizeof(int)    *(ovec_max_387)    );
    int ovec_value_390[ovec_max_387*3];
    memset(&ovec_value_390, 0, sizeof(int)    *(ovec_max_387*3)    );
    options_393=reg->options;
    str_394=reg->str;
    re_395=reg->re;
    while((_Bool)1) {
        options_396=2097152;
        len_397=strlen(self);
        regex_result_398=pcre_exec(re_395,(struct pcre_extra*)0,self,len_397,offset_386,options_396,ovec_value_390,ovec_max_387*3);
        for(        i_399=0;        i_399<ovec_max_387;        i_399++        ){
            start_388[i_399]=ovec_value_390[i_399*2];
        }
        for(        i_400=0;        i_400<ovec_max_387;        i_400++        ){
            end_389[i_400]=ovec_value_390[i_400*2+1];
        }
        if(        regex_result_398>0) {
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
const char* err_401;
int erro_ofs_402;
int options_403;
char* str_404;
struct real_pcre8_or_16* re_405;
struct list$1charph* result_406;
int offset_407;
int ovec_max_408;
int n_412;
int options_413;
int len_414;
int regex_result_415;
int i_416;
int i_417;
char* str_418;
char* str_419;
int i_420;
char* match_str_421;
char* str_422;
struct list$1charph* __result142__;
err_401 = (void*)0;
memset(&erro_ofs_402, 0, sizeof(int));
    options_403=reg->options;
    str_404=reg->str;
    re_405=reg->re;
    result_406=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1663, "list$1charph"));
    offset_407=0;
    ovec_max_408=16;
    int start_409[ovec_max_408];
    memset(&start_409, 0, sizeof(int)    *(ovec_max_408)    );
    int end_410[ovec_max_408];
    memset(&end_410, 0, sizeof(int)    *(ovec_max_408)    );
    int ovec_value_411[ovec_max_408*3];
    memset(&ovec_value_411, 0, sizeof(int)    *(ovec_max_408*3)    );
    n_412=0;
    while((_Bool)1) {
        options_413=2097152;
        len_414=strlen(self);
        regex_result_415=pcre_exec(re_405,(struct pcre_extra*)0,self,len_414,offset_407,options_413,ovec_value_411,ovec_max_408*3);
        for(        i_416=0;        i_416<ovec_max_408;        i_416++        ){
            start_409[i_416]=ovec_value_411[i_416*2];
        }
        for(        i_417=0;        i_417<ovec_max_408;        i_417++        ){
            end_410[i_417]=ovec_value_411[i_417*2+1];
        }
        if(        regex_result_415==1) {
            str_418=charp_substring(self,offset_407,start_409[0]);
            list$1charph_push_back(result_406,str_418);
            if(            offset_407==end_410[0]) {
                offset_407++;
            }
            else {
                offset_407=end_410[0];
            }
        }
        else if(        regex_result_415>1) {
            str_419=charp_substring(self,offset_407,start_409[0]);
            list$1charph_push_back(result_406,str_419);
            if(            offset_407==end_410[0]) {
                offset_407++;
            }
            else {
                offset_407=end_410[0];
            }
            for(            i_420=1;            i_420<regex_result_415;            i_420++            ){
                match_str_421=charp_substring(self,start_409[i_420],end_410[i_420]);
                list$1charph_push_back(result_406,match_str_421);
            }
        }
        else {
            break;
        }
        n_412++;
        if(        maxsplit==n_412) {
            break;
        }
    }
    if(    offset_407<charp_length(self)) {
        str_422=charp_substring(self,offset_407,-1);
        list$1charph_push_back(result_406,str_422);
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_423;
int erro_ofs_424;
int options_425;
char* str_426;
struct real_pcre8_or_16* re_427;
char* self2_428;
int ovec_max_429;
int result_433;
int offset_434;
int n_435;
int options_436;
int len_437;
int regex_result_438;
int i_439;
int i_440;
err_423 = (void*)0;
memset(&erro_ofs_424, 0, sizeof(int));
    options_425=reg->options;
    str_426=reg->str;
    re_427=reg->re;
    self2_428=charp_reverse(self);
    ovec_max_429=16;
    int start_430[ovec_max_429];
    memset(&start_430, 0, sizeof(int)    *(ovec_max_429)    );
    int end_431[ovec_max_429];
    memset(&end_431, 0, sizeof(int)    *(ovec_max_429)    );
    int ovec_value_432[ovec_max_429*3];
    memset(&ovec_value_432, 0, sizeof(int)    *(ovec_max_429*3)    );
    result_433=default_value;
    offset_434=0;
    n_435=0;
    while((_Bool)1) {
        options_436=2097152;
        len_437=strlen(self2_428);
        regex_result_438=pcre_exec(re_427,(struct pcre_extra*)0,self2_428,len_437,offset_434,options_436,ovec_value_432,ovec_max_429*3);
        for(        i_439=0;        i_439<ovec_max_429;        i_439++        ){
            start_430[i_439]=ovec_value_432[i_439*2];
        }
        for(        i_440=0;        i_440<ovec_max_429;        i_440++        ){
            end_431[i_440]=ovec_value_432[i_440*2+1];
        }
        if(        regex_result_438>0) {
            n_435++;
            if(            offset_434==end_431[0]) {
                offset_434++;
            }
            else {
                offset_434=end_431[0];
            }
            if(            n_435==count) {
                result_433=strlen(self)-end_431[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_433;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_441;
int ovec_max_442;
const char* err_446;
int erro_ofs_447;
int options_448;
char* str_449;
struct real_pcre8_or_16* re_450;
int n_451;
int options_452;
int len_453;
int regex_result_454;
int i_455;
int i_456;
err_446 = (void*)0;
memset(&erro_ofs_447, 0, sizeof(int));
    offset_441=0;
    ovec_max_442=16;
    int start_443[ovec_max_442];
    memset(&start_443, 0, sizeof(int)    *(ovec_max_442)    );
    int end_444[ovec_max_442];
    memset(&end_444, 0, sizeof(int)    *(ovec_max_442)    );
    int ovec_value_445[ovec_max_442*3];
    memset(&ovec_value_445, 0, sizeof(int)    *(ovec_max_442*3)    );
    options_448=reg->options;
    str_449=reg->str;
    re_450=reg->re;
    n_451=0;
    while((_Bool)1) {
        options_452=2097152;
        len_453=strlen(self);
        regex_result_454=pcre_exec(re_450,(struct pcre_extra*)0,self,len_453,offset_441,options_452,ovec_value_445,ovec_max_442*3);
        for(        i_455=0;        i_455<ovec_max_442;        i_455++        ){
            start_443[i_455]=ovec_value_445[i_455*2];
        }
        for(        i_456=0;        i_456<ovec_max_442;        i_456++        ){
            end_444[i_456]=ovec_value_445[i_456*2+1];
        }
        if(        regex_result_454>0) {
            n_451++;
            if(            count==n_451) {
                return (_Bool)1;
            }
            if(            offset_441==end_444[0]) {
                offset_441++;
            }
            else {
                offset_441=end_444[0];
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
int offset_457;
int ovec_max_458;
const char* err_462;
int erro_ofs_463;
int options_464;
char* str_465;
struct real_pcre8_or_16* re_466;
struct buffer* result_467;
int options_468;
int len_469;
int regex_result_470;
int i_471;
int i_472;
char* str_473;
struct list$1charph* group_strings_474;
char* match_string_475;
char* block_result_476;
char* str_477;
char* str_478;
struct list$1charph* group_strings_479;
int i_480;
char* match_string_481;
char* match_string_482;
char* block_result_483;
char* str_484;
char* str_485;
char* __result143__;
err_462 = (void*)0;
memset(&erro_ofs_463, 0, sizeof(int));
    offset_457=0;
    ovec_max_458=16;
    int start_459[ovec_max_458];
    memset(&start_459, 0, sizeof(int)    *(ovec_max_458)    );
    int end_460[ovec_max_458];
    memset(&end_460, 0, sizeof(int)    *(ovec_max_458)    );
    int ovec_value_461[ovec_max_458*3];
    memset(&ovec_value_461, 0, sizeof(int)    *(ovec_max_458*3)    );
    options_464=reg->options;
    str_465=reg->str;
    re_466=reg->re;
    result_467=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1875, "buffer"));
    while((_Bool)1) {
        options_468=2097152;
        len_469=strlen(self);
        regex_result_470=pcre_exec(re_466,(struct pcre_extra*)0,self,len_469,offset_457,options_468,ovec_value_461,ovec_max_458*3);
        for(        i_471=0;        i_471<ovec_max_458;        i_471++        ){
            start_459[i_471]=ovec_value_461[i_471*2];
        }
        for(        i_472=0;        i_472<ovec_max_458;        i_472++        ){
            end_460[i_472]=ovec_value_461[i_472*2+1];
        }
        if(        regex_result_470==1) {
            str_473=charp_substring(self,offset_457,start_459[0]);
            buffer_append_str(result_467,str_473);
            group_strings_474=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1895, "list$1charph"));
            match_string_475=charp_substring(self,start_459[0],end_460[0]);
            list$1charph_push_back(group_strings_474,charp_substring(self,start_459[0],end_460[0]));
            block_result_476=block(parent,match_string_475,group_strings_474);
            buffer_append_str(result_467,block_result_476);
            if(            offset_457==end_460[0]) {
                offset_457++;
            }
            else {
                offset_457=end_460[0];
            }
            if(            !reg->global) {
                str_477=charp_substring(self,offset_457,-1);
                buffer_append_str(result_467,str_477);
                break;
            }
        }
        else if(        regex_result_470>1) {
            str_478=charp_substring(self,offset_457,start_459[0]);
            buffer_append_str(result_467,str_478);
            if(            offset_457==end_460[0]) {
                offset_457++;
            }
            else {
                offset_457=end_460[0];
            }
            group_strings_479=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1930, "list$1charph"));
            for(            i_480=1;            i_480<regex_result_470;            i_480++            ){
                match_string_481=charp_substring(self,start_459[i_480],end_460[i_480]);
                list$1charph_push_back(group_strings_479,match_string_481);
            }
            match_string_482=charp_substring(self,start_459[0],end_460[0]);
            block_result_483=block(parent,match_string_482,group_strings_479);
            buffer_append_str(result_467,block_result_483);
            if(            !reg->global) {
                str_484=charp_substring(self,offset_457,-1);
                buffer_append_str(result_467,str_484);
                break;
            }
        }
        else {
            str_485=charp_substring(self,offset_457,-1);
            buffer_append_str(result_467,str_485);
            break;
        }
    }
    __result143__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_467);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_486;
int ovec_max_487;
const char* err_491;
int erro_ofs_492;
int options_493;
char* str_494;
struct real_pcre8_or_16* re_495;
struct buffer* result_496;
int n_497;
int options_498;
int len_499;
int regex_result_500;
int i_501;
int i_502;
char* str_503;
struct list$1charph* group_strings_504;
char* match_string_505;
char* block_result_506;
char* str_507;
char* str_508;
char* str_509;
struct list$1charph* group_strings_510;
int i_511;
char* match_string_512;
char* match_string_513;
char* block_result_514;
char* str_515;
char* str_516;
char* str_517;
char* __result144__;
err_491 = (void*)0;
memset(&erro_ofs_492, 0, sizeof(int));
    offset_486=0;
    ovec_max_487=16;
    int start_488[ovec_max_487];
    memset(&start_488, 0, sizeof(int)    *(ovec_max_487)    );
    int end_489[ovec_max_487];
    memset(&end_489, 0, sizeof(int)    *(ovec_max_487)    );
    int ovec_value_490[ovec_max_487*3];
    memset(&ovec_value_490, 0, sizeof(int)    *(ovec_max_487*3)    );
    options_493=reg->options;
    str_494=reg->str;
    re_495=reg->re;
    result_496=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1976, "buffer"));
    n_497=0;
    while((_Bool)1) {
        options_498=2097152;
        len_499=strlen(self);
        regex_result_500=pcre_exec(re_495,(struct pcre_extra*)0,self,len_499,offset_486,options_498,ovec_value_490,ovec_max_487*3);
        for(        i_501=0;        i_501<ovec_max_487;        i_501++        ){
            start_488[i_501]=ovec_value_490[i_501*2];
        }
        for(        i_502=0;        i_502<ovec_max_487;        i_502++        ){
            end_489[i_502]=ovec_value_490[i_502*2+1];
        }
        if(        regex_result_500==1) {
            n_497++;
            str_503=charp_substring(self,offset_486,start_488[0]);
            buffer_append_str(result_496,str_503);
            group_strings_504=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1999, "list$1charph"));
            list$1charph_push_back(group_strings_504,charp_substring(self,start_488[0],end_489[0]));
            match_string_505=charp_substring(self,start_488[0],end_489[0]);
            block_result_506=block(parent,match_string_505,group_strings_504);
            buffer_append_str(result_496,block_result_506);
            if(            offset_486==end_489[0]) {
                offset_486++;
            }
            else {
                offset_486=end_489[0];
            }
            if(            !reg->global) {
                str_507=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_507);
                break;
            }
            if(            n_497==count) {
                str_508=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_508);
                break;
            }
        }
        else if(        regex_result_500>1) {
            n_497++;
            str_509=charp_substring(self,offset_486,start_488[0]);
            buffer_append_str(result_496,str_509);
            if(            offset_486==end_489[0]) {
                offset_486++;
            }
            else {
                offset_486=end_489[0];
            }
            group_strings_510=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2042, "list$1charph"));
            for(            i_511=1;            i_511<regex_result_500;            i_511++            ){
                match_string_512=charp_substring(self,start_488[i_511],end_489[i_511]);
                list$1charph_push_back(group_strings_510,match_string_512);
            }
            match_string_513=charp_substring(self,start_488[0],end_489[0]);
            block_result_514=block(parent,match_string_513,group_strings_510);
            buffer_append_str(result_496,block_result_514);
            if(            !reg->global) {
                str_515=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_515);
                break;
            }
            if(            n_497==count) {
                str_516=charp_substring(self,offset_486,-1);
                buffer_append_str(result_496,str_516);
                break;
            }
        }
        else {
            str_517=charp_substring(self,offset_486,-1);
            buffer_append_str(result_496,str_517);
            break;
        }
    }
    __result144__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_496);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_518;
unsigned int* p_519;
    result_518=0;
    p_519=value;
    while(*p_519) {
        result_518+=(*p_519);
        p_519++;
    }
    return result_518;
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
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_520;
char* __result146__;
char* __result147__;
    result_520=__builtin_string(str);
    if(    result_520[string_length(result_520)-1]==10) {
        __result146__ = gComeFunResultObject = __result_obj__ = string_substring(result_520,0,-2);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    __result147__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result148__;
char* result_521;
char* result2_522;
char* __result149__;
    if(    path==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    result_521=realpath(path,((void*)0));
    result2_522=__builtin_string(result_521);
    free(result_521);
    __result149__ = gComeFunResultObject = __result_obj__ = result2_522;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result150__;
char* __result151__;
    if(    path==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    __result151__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result151__;
}

unsigned long unsigned  int xwcslen(unsigned int* wstr){
unsigned int* p_523;
unsigned long unsigned  int len_524;
    p_523=wstr;
    len_524=0;
    while(*p_523) {
        p_523++;
        len_524++;
    }
    return len_524;
}

