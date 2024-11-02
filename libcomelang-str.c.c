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
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
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
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
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
int assert_v2(int exp);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX626, int anonymous_var_nameX627, const char** anonymous_var_nameX628, int* anonymous_var_nameX629, const unsigned char* anonymous_var_nameX630);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX631, int anonymous_var_nameX632, const char** anonymous_var_nameX633, int* anonymous_var_nameX634, const unsigned char* anonymous_var_nameX635);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX636, int anonymous_var_nameX637, const char** anonymous_var_nameX638, int* anonymous_var_nameX639, const unsigned char* anonymous_var_nameX640);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX641, int anonymous_var_nameX642, int* anonymous_var_nameX643, const char** anonymous_var_nameX644, int* anonymous_var_nameX645, const unsigned char* anonymous_var_nameX646);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX647, int anonymous_var_nameX648, int* anonymous_var_nameX649, const char** anonymous_var_nameX650, int* anonymous_var_nameX651, const unsigned char* anonymous_var_nameX652);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX653, int anonymous_var_nameX654, int* anonymous_var_nameX655, const char** anonymous_var_nameX656, int* anonymous_var_nameX657, const unsigned char* anonymous_var_nameX658);
int pcre_config(int anonymous_var_nameX659, void* anonymous_var_nameX660);
int pcre16_config(int anonymous_var_nameX661, void* anonymous_var_nameX662);
int pcre32_config(int anonymous_var_nameX663, void* anonymous_var_nameX664);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX665, const char* anonymous_var_nameX666, int* anonymous_var_nameX667, int anonymous_var_nameX668, const char* anonymous_var_nameX669, char* anonymous_var_nameX670, int anonymous_var_nameX671);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX672, const unsigned short int* anonymous_var_nameX673, int* anonymous_var_nameX674, int anonymous_var_nameX675, const unsigned short int* anonymous_var_nameX676, unsigned short int* anonymous_var_nameX677, int anonymous_var_nameX678);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX679, const unsigned int* anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682, const unsigned int* anonymous_var_nameX683, unsigned int* anonymous_var_nameX684, int anonymous_var_nameX685);
int pcre_copy_substring(const char* anonymous_var_nameX686, int* anonymous_var_nameX687, int anonymous_var_nameX688, int anonymous_var_nameX689, char* anonymous_var_nameX690, int anonymous_var_nameX691);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX692, int* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, unsigned short int* anonymous_var_nameX696, int anonymous_var_nameX697);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX698, int* anonymous_var_nameX699, int anonymous_var_nameX700, int anonymous_var_nameX701, unsigned int* anonymous_var_nameX702, int anonymous_var_nameX703);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX704, const struct pcre_extra* anonymous_var_nameX705, const char* anonymous_var_nameX706, int anonymous_var_nameX707, int anonymous_var_nameX708, int anonymous_var_nameX709, int* anonymous_var_nameX710, int anonymous_var_nameX711, int* anonymous_var_nameX712, int anonymous_var_nameX713);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX714, const struct pcre16_extra* anonymous_var_nameX715, const unsigned short int* anonymous_var_nameX716, int anonymous_var_nameX717, int anonymous_var_nameX718, int anonymous_var_nameX719, int* anonymous_var_nameX720, int anonymous_var_nameX721, int* anonymous_var_nameX722, int anonymous_var_nameX723);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX724, const struct pcre32_extra* anonymous_var_nameX725, const unsigned int* anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, int anonymous_var_nameX729, int* anonymous_var_nameX730, int anonymous_var_nameX731, int* anonymous_var_nameX732, int anonymous_var_nameX733);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX734, const struct pcre_extra* anonymous_var_nameX735, const char* anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, int anonymous_var_nameX739, int* anonymous_var_nameX740, int anonymous_var_nameX741);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX742, const struct pcre16_extra* anonymous_var_nameX743, const unsigned short int* anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, int anonymous_var_nameX747, int* anonymous_var_nameX748, int anonymous_var_nameX749);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX750, const struct pcre32_extra* anonymous_var_nameX751, const unsigned int* anonymous_var_nameX752, int anonymous_var_nameX753, int anonymous_var_nameX754, int anonymous_var_nameX755, int* anonymous_var_nameX756, int anonymous_var_nameX757);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX758, const struct pcre_extra* anonymous_var_nameX759, const char* anonymous_var_nameX760, int anonymous_var_nameX761, int anonymous_var_nameX762, int anonymous_var_nameX763, int* anonymous_var_nameX764, int anonymous_var_nameX765, struct real_pcre_jit_stack* anonymous_var_nameX766);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX767, const struct pcre16_extra* anonymous_var_nameX768, const unsigned short int* anonymous_var_nameX769, int anonymous_var_nameX770, int anonymous_var_nameX771, int anonymous_var_nameX772, int* anonymous_var_nameX773, int anonymous_var_nameX774, struct real_pcre16_jit_stack* anonymous_var_nameX775);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX776, const struct pcre32_extra* anonymous_var_nameX777, const unsigned int* anonymous_var_nameX778, int anonymous_var_nameX779, int anonymous_var_nameX780, int anonymous_var_nameX781, int* anonymous_var_nameX782, int anonymous_var_nameX783, struct real_pcre32_jit_stack* anonymous_var_nameX784);
void pcre_free_substring(const char* anonymous_var_nameX785);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX786);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX787);
void pcre_free_substring_list(const char** anonymous_var_nameX788);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX789);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX790);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX791, const struct pcre_extra* anonymous_var_nameX792, int anonymous_var_nameX793, void* anonymous_var_nameX794);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX795, const struct pcre16_extra* anonymous_var_nameX796, int anonymous_var_nameX797, void* anonymous_var_nameX798);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX799, const struct pcre32_extra* anonymous_var_nameX800, int anonymous_var_nameX801, void* anonymous_var_nameX802);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX803, const char* anonymous_var_nameX804, int* anonymous_var_nameX805, int anonymous_var_nameX806, const char* anonymous_var_nameX807, const char** anonymous_var_nameX808);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX809, const unsigned short int* anonymous_var_nameX810, int* anonymous_var_nameX811, int anonymous_var_nameX812, const unsigned short int* anonymous_var_nameX813, const unsigned short int** anonymous_var_nameX814);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX815, const unsigned int* anonymous_var_nameX816, int* anonymous_var_nameX817, int anonymous_var_nameX818, const unsigned int* anonymous_var_nameX819, const unsigned int** anonymous_var_nameX820);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX821, const char* anonymous_var_nameX822);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX823, const unsigned short int* anonymous_var_nameX824);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX825, const unsigned int* anonymous_var_nameX826);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX827, const char* anonymous_var_nameX828, char** anonymous_var_nameX829, char** anonymous_var_nameX830);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX831, const unsigned short int* anonymous_var_nameX832, unsigned short int** anonymous_var_nameX833, unsigned short int** anonymous_var_nameX834);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX835, const unsigned int* anonymous_var_nameX836, unsigned int** anonymous_var_nameX837, unsigned int** anonymous_var_nameX838);
int pcre_get_substring(const char* anonymous_var_nameX839, int* anonymous_var_nameX840, int anonymous_var_nameX841, int anonymous_var_nameX842, const char** anonymous_var_nameX843);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX844, int* anonymous_var_nameX845, int anonymous_var_nameX846, int anonymous_var_nameX847, const unsigned short int** anonymous_var_nameX848);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX849, int* anonymous_var_nameX850, int anonymous_var_nameX851, int anonymous_var_nameX852, const unsigned int** anonymous_var_nameX853);
int pcre_get_substring_list(const char* anonymous_var_nameX854, int* anonymous_var_nameX855, int anonymous_var_nameX856, const char*** anonymous_var_nameX857);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX858, int* anonymous_var_nameX859, int anonymous_var_nameX860, const unsigned short int*** anonymous_var_nameX861);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX862, int* anonymous_var_nameX863, int anonymous_var_nameX864, const unsigned int*** anonymous_var_nameX865);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX866, int anonymous_var_nameX867);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX868, int anonymous_var_nameX869);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX870, int anonymous_var_nameX871);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX872, int anonymous_var_nameX873, const char** anonymous_var_nameX874);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX875, int anonymous_var_nameX876, const char** anonymous_var_nameX877);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX878, int anonymous_var_nameX879, const char** anonymous_var_nameX880);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX881);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX882);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX883);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX884, struct pcre_extra* anonymous_var_nameX885, const unsigned char* anonymous_var_nameX886);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX887, struct pcre16_extra* anonymous_var_nameX888, const unsigned char* anonymous_var_nameX889);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX890, struct pcre32_extra* anonymous_var_nameX891, const unsigned char* anonymous_var_nameX892);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX893, const unsigned short int* anonymous_var_nameX894, int anonymous_var_nameX895, int* anonymous_var_nameX896, int anonymous_var_nameX897);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX898, const unsigned int* anonymous_var_nameX899, int anonymous_var_nameX900, int* anonymous_var_nameX901, int anonymous_var_nameX902);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX903, int anonymous_var_nameX904);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX905, int anonymous_var_nameX906);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX907, int anonymous_var_nameX908);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX909);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX910);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX911);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX912, struct real_pcre_jit_stack* (*anonymous_var_nameX913)(void*), void* anonymous_var_nameX914);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX915, struct real_pcre16_jit_stack* (*anonymous_var_nameX916)(void*), void* anonymous_var_nameX917);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX918, struct real_pcre32_jit_stack* (*anonymous_var_nameX919)(void*), void* anonymous_var_nameX920);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
unsigned int* wcscpy(unsigned int* anonymous_var_nameX921, const unsigned int* anonymous_var_nameX922);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX923, const unsigned int* anonymous_var_nameX924, unsigned long unsigned  int anonymous_var_nameX925);
unsigned int* wcscat(unsigned int* anonymous_var_nameX926, const unsigned int* anonymous_var_nameX927);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929, unsigned long unsigned  int anonymous_var_nameX930);
int wcscmp(const unsigned int* anonymous_var_nameX931, const unsigned int* anonymous_var_nameX932);
int wcsncmp(const unsigned int* anonymous_var_nameX933, const unsigned int* anonymous_var_nameX934, unsigned long unsigned  int anonymous_var_nameX935);
int wcscoll(const unsigned int* anonymous_var_nameX936, const unsigned int* anonymous_var_nameX937);
unsigned long unsigned  int wcsxfrm(unsigned int* anonymous_var_nameX938, const unsigned int* anonymous_var_nameX939, unsigned long unsigned  int anonymous_var_nameX940);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX941, unsigned int anonymous_var_nameX942);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX943, unsigned int anonymous_var_nameX944);
unsigned long unsigned  int wcscspn(const unsigned int* anonymous_var_nameX945, const unsigned int* anonymous_var_nameX946);
unsigned long unsigned  int wcsspn(const unsigned int* anonymous_var_nameX947, const unsigned int* anonymous_var_nameX948);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX949, const unsigned int* anonymous_var_nameX950);
unsigned int* wcstok(unsigned int* anonymous_var_nameX951, const unsigned int* anonymous_var_nameX952, unsigned int** anonymous_var_nameX953);
unsigned long unsigned  int wcslen(const unsigned int* anonymous_var_nameX954);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX955, const unsigned int* anonymous_var_nameX956);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX957, const unsigned int* anonymous_var_nameX958);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX959, unsigned int anonymous_var_nameX960, unsigned long unsigned  int anonymous_var_nameX961);
int wmemcmp(const unsigned int* anonymous_var_nameX962, const unsigned int* anonymous_var_nameX963, unsigned long unsigned  int anonymous_var_nameX964);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX965, const unsigned int* anonymous_var_nameX966, unsigned long unsigned  int anonymous_var_nameX967);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX968, const unsigned int* anonymous_var_nameX969, unsigned long unsigned  int anonymous_var_nameX970);
unsigned int* wmemset(unsigned int* anonymous_var_nameX971, unsigned int anonymous_var_nameX972, unsigned long unsigned  int anonymous_var_nameX973);
unsigned int btowc(int anonymous_var_nameX974);
int wctob(unsigned int anonymous_var_nameX975);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX976);
unsigned long unsigned  int mbrtowc(unsigned int* anonymous_var_nameX977, const char* anonymous_var_nameX978, unsigned long unsigned  int anonymous_var_nameX979, struct __mbstate_t* anonymous_var_nameX980);
unsigned long unsigned  int wcrtomb(char* anonymous_var_nameX981, unsigned int anonymous_var_nameX982, struct __mbstate_t* anonymous_var_nameX983);
unsigned long unsigned  int mbrlen(const char* anonymous_var_nameX984, unsigned long unsigned  int anonymous_var_nameX985, struct __mbstate_t* anonymous_var_nameX986);
unsigned long unsigned  int mbsrtowcs(unsigned int* anonymous_var_nameX987, const char** anonymous_var_nameX988, unsigned long unsigned  int anonymous_var_nameX989, struct __mbstate_t* anonymous_var_nameX990);
unsigned long unsigned  int wcsrtombs(char* anonymous_var_nameX991, const unsigned int** anonymous_var_nameX992, unsigned long unsigned  int anonymous_var_nameX993, struct __mbstate_t* anonymous_var_nameX994);
float wcstof(const unsigned int* anonymous_var_nameX995, unsigned int** anonymous_var_nameX996);
double wcstod(const unsigned int* anonymous_var_nameX997, unsigned int** anonymous_var_nameX998);
long  double wcstold(const unsigned int* anonymous_var_nameX999, unsigned int** anonymous_var_nameX1000);
long wcstol(const unsigned int* anonymous_var_nameX1001, unsigned int** anonymous_var_nameX1002, int anonymous_var_nameX1003);
unsigned long unsigned  int wcstoul(const unsigned int* anonymous_var_nameX1004, unsigned int** anonymous_var_nameX1005, int anonymous_var_nameX1006);
long long wcstoll(const unsigned int* anonymous_var_nameX1007, unsigned int** anonymous_var_nameX1008, int anonymous_var_nameX1009);
unsigned long unsigned  long wcstoull(const unsigned int* anonymous_var_nameX1010, unsigned int** anonymous_var_nameX1011, int anonymous_var_nameX1012);
int fwide(struct _IO_FILE* anonymous_var_nameX1013, int anonymous_var_nameX1014);
int wprintf(const unsigned int* anonymous_var_nameX1015, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX1016, const unsigned int* anonymous_var_nameX1017, ...);
int swprintf(unsigned int* anonymous_var_nameX1018, unsigned long unsigned  int anonymous_var_nameX1019, const unsigned int* anonymous_var_nameX1020, ...);
int vwprintf(const unsigned int* anonymous_var_nameX1021, va_list anonymous_var_nameX1022);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX1023, const unsigned int* anonymous_var_nameX1024, va_list anonymous_var_nameX1025);
int vswprintf(unsigned int* anonymous_var_nameX1026, unsigned long unsigned  int anonymous_var_nameX1027, const unsigned int* anonymous_var_nameX1028, va_list anonymous_var_nameX1029);
int wscanf(const unsigned int* anonymous_var_nameX1030, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX1031, const unsigned int* anonymous_var_nameX1032, ...);
int swscanf(const unsigned int* anonymous_var_nameX1033, const unsigned int* anonymous_var_nameX1034, ...);
int vwscanf(const unsigned int* anonymous_var_nameX1035, va_list anonymous_var_nameX1036);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX1037, const unsigned int* anonymous_var_nameX1038, va_list anonymous_var_nameX1039);
int vswscanf(const unsigned int* anonymous_var_nameX1040, const unsigned int* anonymous_var_nameX1041, va_list anonymous_var_nameX1042);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1043);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1044);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX1045, struct _IO_FILE* anonymous_var_nameX1046);
unsigned int putwc(unsigned int anonymous_var_nameX1047, struct _IO_FILE* anonymous_var_nameX1048);
unsigned int putwchar(unsigned int anonymous_var_nameX1049);
unsigned int* fgetws(unsigned int* anonymous_var_nameX1050, int anonymous_var_nameX1051, struct _IO_FILE* anonymous_var_nameX1052);
int fputws(const unsigned int* anonymous_var_nameX1053, struct _IO_FILE* anonymous_var_nameX1054);
unsigned int ungetwc(unsigned int anonymous_var_nameX1055, struct _IO_FILE* anonymous_var_nameX1056);
unsigned long unsigned  int wcsftime(unsigned int* anonymous_var_nameX1057, unsigned long unsigned  int anonymous_var_nameX1058, const unsigned int* anonymous_var_nameX1059, const struct tm* anonymous_var_nameX1060);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1061);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1062);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1063, struct _IO_FILE* anonymous_var_nameX1064);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1065, struct _IO_FILE* anonymous_var_nameX1066);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1067);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1068, int anonymous_var_nameX1069, struct _IO_FILE* anonymous_var_nameX1070);
int fputws_unlocked(const unsigned int* anonymous_var_nameX1071, struct _IO_FILE* anonymous_var_nameX1072);
unsigned long unsigned  int wcsftime_l(unsigned int* anonymous_var_nameX1073, unsigned long unsigned  int anonymous_var_nameX1074, const unsigned int* anonymous_var_nameX1075, const struct tm* anonymous_var_nameX1076, struct __locale_struct* anonymous_var_nameX1077);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1078, unsigned long unsigned  int* anonymous_var_nameX1079);
unsigned long unsigned  int mbsnrtowcs(unsigned int* anonymous_var_nameX1080, const char** anonymous_var_nameX1081, unsigned long unsigned  int anonymous_var_nameX1082, unsigned long unsigned  int anonymous_var_nameX1083, struct __mbstate_t* anonymous_var_nameX1084);
unsigned long unsigned  int wcsnrtombs(char* anonymous_var_nameX1085, const unsigned int** anonymous_var_nameX1086, unsigned long unsigned  int anonymous_var_nameX1087, unsigned long unsigned  int anonymous_var_nameX1088, struct __mbstate_t* anonymous_var_nameX1089);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1090);
unsigned long unsigned  int wcsnlen(const unsigned int* anonymous_var_nameX1091, unsigned long unsigned  int anonymous_var_nameX1092);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1093, const unsigned int* anonymous_var_nameX1094);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1095, const unsigned int* anonymous_var_nameX1096, unsigned long unsigned  int anonymous_var_nameX1097);
int wcscasecmp(const unsigned int* anonymous_var_nameX1098, const unsigned int* anonymous_var_nameX1099);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX1100, const unsigned int* anonymous_var_nameX1101, struct __locale_struct* anonymous_var_nameX1102);
int wcsncasecmp(const unsigned int* anonymous_var_nameX1103, const unsigned int* anonymous_var_nameX1104, unsigned long unsigned  int anonymous_var_nameX1105);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1106, const unsigned int* anonymous_var_nameX1107, unsigned long unsigned  int anonymous_var_nameX1108, struct __locale_struct* anonymous_var_nameX1109);
int wcscoll_l(const unsigned int* anonymous_var_nameX1110, const unsigned int* anonymous_var_nameX1111, struct __locale_struct* anonymous_var_nameX1112);
unsigned long unsigned  int wcsxfrm_l(unsigned int* anonymous_var_nameX1113, const unsigned int* anonymous_var_nameX1114, unsigned long unsigned  int anonymous_var_nameX1115, struct __locale_struct* anonymous_var_nameX1116);
int wcwidth(unsigned int anonymous_var_nameX1117);
int wcswidth(const unsigned int* anonymous_var_nameX1118, unsigned long unsigned  int anonymous_var_nameX1119);
int iswalnum(unsigned int anonymous_var_nameX1120);
int iswalpha(unsigned int anonymous_var_nameX1121);
int iswblank(unsigned int anonymous_var_nameX1122);
int iswcntrl(unsigned int anonymous_var_nameX1123);
int iswdigit(unsigned int anonymous_var_nameX1124);
int iswgraph(unsigned int anonymous_var_nameX1125);
int iswlower(unsigned int anonymous_var_nameX1126);
int iswprint(unsigned int anonymous_var_nameX1127);
int iswpunct(unsigned int anonymous_var_nameX1128);
int iswspace(unsigned int anonymous_var_nameX1129);
int iswupper(unsigned int anonymous_var_nameX1130);
int iswxdigit(unsigned int anonymous_var_nameX1131);
int iswctype(unsigned int anonymous_var_nameX1132, unsigned long unsigned  int anonymous_var_nameX1133);
unsigned int towlower(unsigned int anonymous_var_nameX1134);
unsigned int towupper(unsigned int anonymous_var_nameX1135);
unsigned long unsigned  int wctype(const char* anonymous_var_nameX1136);
char* dirname(char* anonymous_var_nameX1137);
char* basename(char* anonymous_var_nameX1138);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2342, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2349, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2358, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2365, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2372, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2379, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2386, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2686, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2691, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2696, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2701, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2706, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2739, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2746, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2748, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2753, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2755, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2760, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2762, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2767, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2769, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2774, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2776, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2781, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2783, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2788, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2793, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2798, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2803, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2808, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2813, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2818, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2823, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2828, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2833, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2838, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2843, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2848, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2853, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
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
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
unsigned int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value116=wchar_tp_substring(str,head,tail)));
    __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value117 = (void*)0;
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value117=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value118=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value119=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value120=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value121=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=charp_strip(self)));
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=string_printable(str)));
    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
unsigned int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value124=charp_to_wstring(str)));
    __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=wchar_tp_to_string(wstr)));
    __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
unsigned int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value127=string_to_wstring(((char*)(__right_value126=xsprintf("%d",self))))));
    __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
unsigned int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value128=wchar_tp_delete(str,head,tail)));
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value129 = (void*)0;
unsigned int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value129=wchar_tp_reverse(str)));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
unsigned int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value130=wchar_tp_multiply(str,n)));
    __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
unsigned int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value131=wchar_tp_printable(str)));
    __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value132 = (void*)0;
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=charp_replace(self,index,c)));
    __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=charp_multiply(str,n)));
    __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=charp_sub(self,reg,replace)));
    __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=charp_sub_count(self,reg,replace,count)));
    __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value137=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value138=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value140 = (void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value140=charp_sub_block(self,reg,parent,block)));
    __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value141=charp_sub_block_count(self,reg,count,parent,block)));
    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value143=string_chomp(str)));
    __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
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


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
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



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
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





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 223, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 233, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 243, "list_item$1char"))));
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

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 223, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 233, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 243, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 223, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 233, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 243, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 223, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 233, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 243, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 223, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 233, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 243, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 223, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 233, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 243, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 223, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 233, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 243, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1005, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1005, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "comelang.h", 1005, "short")));
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1005, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1005, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1005, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1005, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_66;
struct list_item$1charph* prev_it_67;
    it_66=self->head;
    while(it_66!=((void*)0)) {
        prev_it_67=it_66;
        it_66=it_66->next;
        /*i*/come_call_finalizer3(prev_it_67,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_68;
int erro_ofs_69;
int options_70;
void* __right_value144 = (void*)0;
char* __dec_obj16;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
_Bool __exception_result_var_b1;
struct come_regex* __result92__;
err_68 = (void*)0;
memset(&erro_ofs_69, 0, sizeof(int));
    options_70=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj16=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_70;
    self->re=pcre_compile(str,options_70,&err_68,&erro_ofs_69,((void*)0));
    if(    self->re==((void*)0)) {
        (come_push_stackframe("libcomelang-str.c", 46, 0),__exception_result_var_b1=die(((char*)(__right_value146=xsprintf("regex error \%s",((char*)(__right_value145=charp_to_string(str))))))), come_pop_stackframe(), __exception_result_var_b1);
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct come_regex* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct come_regex*)(__right_value148=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    /*g*/come_call_finalizer3(__right_value148,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct come_regex* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct come_regex*)(__right_value150=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    /*g*/come_call_finalizer3(__right_value150,come_regex_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result95__;
void* __right_value151 = (void*)0;
struct come_regex* result_71;
void* __right_value152 = (void*)0;
char* __dec_obj17;
const char* err_72;
int erro_ofs_73;
struct come_regex* __result96__;
err_72 = (void*)0;
memset(&erro_ofs_73, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    result_71=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj17=result_71->str;
    result_71->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_71->ignore_case=reg->ignore_case;
    result_71->multiline=reg->multiline;
    result_71->global=reg->global;
    result_71->extended=reg->extended;
    result_71->dotall=reg->dotall;
    result_71->anchored=reg->anchored;
    result_71->dollar_endonly=reg->dollar_endonly;
    result_71->ungreedy=reg->ungreedy;
    result_71->options=reg->options;
    result_71->re=pcre_compile(result_71->str,result_71->options,&err_72,&erro_ofs_73,((void*)0));
    if(    result_71->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_71->str);
        stackframe();
        exit(1);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value153=__builtin_string(regex->str)));
    __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value154 = (void*)0;
char* result_74;
int i_75;
char* __result98__;
    result_74=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_75=0;    i_75<strlen(str);    i_75++    ){
        if(        str[i_75]>=65&&str[i_75]<=90) {
            result_74[i_75]=str[i_75]-65+97;
        }
    }
    __result98__ = gComeFunResultObject = __result_obj__ = result_74;
    result_74 = come_decrement_ref_count2(result_74, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* result_76;
int i_77;
char* __result99__;
    result_76=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_77=0;    i_77<strlen(str);    i_77++    ){
        if(        str[i_77]>=97&&str[i_77]<=122) {
            result_76[i_77]=str[i_77]-97+65;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_76;
    result_76 = come_decrement_ref_count2(result_76, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value156 = (void*)0;
unsigned int* __result100__;
int len_78;
void* __right_value157 = (void*)0;
unsigned int* __result101__;
void* __right_value158 = (void*)0;
unsigned int* __result102__;
void* __right_value159 = (void*)0;
unsigned int* __result103__;
void* __right_value160 = (void*)0;
unsigned int* result_79;
unsigned int* __result104__;
    if(    str==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value156=__builtin_wstring("")));
        __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    len_78=wcslen(str);
    if(    head<0) {
        head+=len_78;
    }
    if(    tail<0) {
        tail+=len_78+1;
    }
    if(    head>tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value157=__builtin_wstring("")));
        __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_78) {
        tail=len_78;
    }
    if(    head==tail) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value158=__builtin_wstring("")));
        __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    if(    tail-head+1<1) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value159=__builtin_wstring("")));
        __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    result_79=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str.c", 181, "int"));
    memcpy(result_79,str+head,sizeof(unsigned int)*(tail-head));
    result_79[tail-head]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = result_79;
    result_79 = come_decrement_ref_count2(result_79, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result105__;
int len_80;
void* __right_value161 = (void*)0;
unsigned int* wstr_81;
int ret_82;
unsigned int* __result106__;
    if(    str==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    len_80=strlen(str);
    wstr_81=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_80+1)), "libcomelang-str.c", 196, "int"));
    ret_82=mbstowcs(wstr_81,str,len_80+1);
    wstr_81[ret_82]=0;
    if(    ret_82<0) {
        wstr_81[0]=0;
    }
    __result106__ = gComeFunResultObject = __result_obj__ = wstr_81;
    wstr_81 = come_decrement_ref_count2(wstr_81, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_83;
int len_84;
int i_85;
int len2_86;
int j_87;
memset(&j_87, 0, sizeof(int));
    n_83=0;
    len_84=strlen(str);
    for(    i_85=0;    i_85<len_84;    i_85++    ){
        len2_86=strlen(search_str);
        for(        j_87=0;        j_87<len2_86;        j_87++        ){
            if(            str[i_85+j_87]!=search_str[j_87]) {
                break;
            }
        }
        if(        j_87==len2_86) {
            n_83++;
            if(            n_83==count) {
                return i_85;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_88;
int result_92;
int offset_93;
const char* err_94;
int erro_ofs_95;
int options_96;
char* str_97;
struct real_pcre8_or_16* re_98;
int n_99;
int options_100;
int len_101;
int regex_result_102;
int i_103;
int i_104;
err_94 = (void*)0;
memset(&erro_ofs_95, 0, sizeof(int));
    ovec_max_88=16;
    int start_89[ovec_max_88];
    memset(&start_89, 0, sizeof(int)    *(ovec_max_88)    );
    int end_90[ovec_max_88];
    memset(&end_90, 0, sizeof(int)    *(ovec_max_88)    );
    int ovec_value_91[ovec_max_88*3];
    memset(&ovec_value_91, 0, sizeof(int)    *(ovec_max_88*3)    );
    result_92=default_value;
    offset_93=0;
    options_96=reg->options;
    str_97=reg->str;
    re_98=reg->re;
    n_99=0;
    while((_Bool)1) {
        options_100=2097152;
        len_101=strlen(self);
        regex_result_102=pcre_exec(re_98,(struct pcre_extra*)0,self,len_101,offset_93,options_100,ovec_value_91,ovec_max_88*3);
        for(        i_103=0;        i_103<ovec_max_88;        i_103++        ){
            start_89[i_103]=ovec_value_91[i_103*2];
        }
        for(        i_104=0;        i_104<ovec_max_88;        i_104++        ){
            end_90[i_104]=ovec_value_91[i_104*2+1];
        }
        if(        regex_result_102>0) {
            n_99++;
            if(            offset_93==end_90[0]) {
                offset_93++;
            }
            else {
                offset_93=end_90[0];
            }
            if(            n_99==count) {
                result_92=start_89[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_92;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_105;
char* p_106;
    len_105=strlen(search_str);
    p_106=str+strlen(str)-len_105;
    while(p_106>=str) {
        if(        strncmp(p_106,search_str,len_105)==0) {
            return p_106-str;
        }
        p_106--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_107;
int erro_ofs_108;
int options_109;
char* str_110;
struct real_pcre8_or_16* re_111;
void* __right_value162 = (void*)0;
char* self2_112;
int ovec_max_113;
int result_117;
int offset_118;
int options_119;
int len_120;
int regex_result_121;
int i_122;
int i_123;
int __result107__;
err_107 = (void*)0;
memset(&erro_ofs_108, 0, sizeof(int));
    options_109=reg->options;
    str_110=reg->str;
    re_111=reg->re;
    self2_112=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_113=16;
    int start_114[ovec_max_113];
    memset(&start_114, 0, sizeof(int)    *(ovec_max_113)    );
    int end_115[ovec_max_113];
    memset(&end_115, 0, sizeof(int)    *(ovec_max_113)    );
    int ovec_value_116[ovec_max_113*3];
    memset(&ovec_value_116, 0, sizeof(int)    *(ovec_max_113*3)    );
    result_117=default_value;
    offset_118=0;
    while((_Bool)1) {
        options_119=2097152;
        len_120=strlen(self2_112);
        regex_result_121=pcre_exec(re_111,(struct pcre_extra*)0,self2_112,len_120,offset_118,options_119,ovec_value_116,ovec_max_113*3);
        for(        i_122=0;        i_122<ovec_max_113;        i_122++        ){
            start_114[i_122]=ovec_value_116[i_122*2];
        }
        for(        i_123=0;        i_123<ovec_max_113;        i_123++        ){
            end_115[i_123]=ovec_value_116[i_123*2+1];
        }
        if(        regex_result_121==1||regex_result_121>0) {
            result_117=strlen(self)-1-start_114[0];
            break;
        }
        {
            break;
        }
    }
    __result107__ = result_117;
    self2_112 = come_decrement_ref_count2(self2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result107__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_124;
char* p_125;
int n_126;
    len_124=strlen(search_str);
    p_125=str+strlen(str)-len_124;
    n_126=0;
    while(p_125>=str) {
        if(        strncmp(p_125,search_str,len_124)==0) {
            n_126++;
            if(            n_126==count) {
                return p_125-str;
            }
        }
        p_125--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct list$1charph* result_127;
int offset_128;
int ovec_max_129;
const char* err_133;
int erro_ofs_134;
int options_135;
char* str_136;
struct real_pcre8_or_16* re_137;
int options_138;
int len_139;
int regex_result_140;
int i_141;
int i_142;
void* __right_value165 = (void*)0;
char* str_143;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct list$1charph* group_strings_144;
void* __right_value168 = (void*)0;
char* str2_145;
void* __right_value172 = (void*)0;
char* str_149;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct list$1charph* group_strings_150;
int i_151;
void* __right_value175 = (void*)0;
char* match_string_152;
void* __right_value176 = (void*)0;
char* str2_153;
struct list$1charph* __result110__;
err_133 = (void*)0;
memset(&erro_ofs_134, 0, sizeof(int));
    result_127=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 382, "list$1charph"))));
    offset_128=0;
    ovec_max_129=16;
    int start_130[ovec_max_129];
    memset(&start_130, 0, sizeof(int)    *(ovec_max_129)    );
    int end_131[ovec_max_129];
    memset(&end_131, 0, sizeof(int)    *(ovec_max_129)    );
    int ovec_value_132[ovec_max_129*3];
    memset(&ovec_value_132, 0, sizeof(int)    *(ovec_max_129*3)    );
    options_135=reg->options;
    str_136=reg->str;
    re_137=reg->re;
    while((_Bool)1) {
        options_138=2097152;
        len_139=strlen(self);
        regex_result_140=pcre_exec(re_137,(struct pcre_extra*)0,self,len_139,offset_128,options_138,ovec_value_132,ovec_max_129*3);
        for(        i_141=0;        i_141<ovec_max_129;        i_141++        ){
            start_130[i_141]=ovec_value_132[i_141*2];
        }
        for(        i_142=0;        i_142<ovec_max_129;        i_142++        ){
            end_131[i_142]=ovec_value_132[i_142*2+1];
        }
        if(        regex_result_140==1) {
            str_143=(char*)come_increment_ref_count(charp_substring(self,start_130[0],end_131[0]));
            group_strings_144=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 416, "list$1charph"))));
            str2_145=(char*)come_increment_ref_count(block(parent,str_143,group_strings_144));
            list$1charph_push_back(result_127,(char*)come_increment_ref_count(str2_145));
            if(            offset_128==end_131[0]) {
                offset_128++;
            }
            else {
                offset_128=end_131[0];
            }
            str_143 = come_decrement_ref_count2(str_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_144,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_145 = come_decrement_ref_count2(str2_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_140>1) {
            str_149=(char*)come_increment_ref_count(charp_substring(self,start_130[0],end_131[0]));
            group_strings_150=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 433, "list$1charph"))));
            for(            i_151=1;            i_151<regex_result_140;            i_151++            ){
                match_string_152=(char*)come_increment_ref_count(charp_substring(self,start_130[i_151],end_131[i_151]));
                list$1charph_push_back(group_strings_150,(char*)come_increment_ref_count(match_string_152));
                match_string_152 = come_decrement_ref_count2(match_string_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_153=(char*)come_increment_ref_count(block(parent,str_149,group_strings_150));
            list$1charph_push_back(result_127,(char*)come_increment_ref_count(str2_153));
            if(            offset_128==end_131[0]) {
                offset_128++;
            }
            else {
                offset_128=end_131[0];
            }
            str_149 = come_decrement_ref_count2(str_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_153 = come_decrement_ref_count2(str2_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_127;
    /*i*/come_call_finalizer3(result_127,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result108__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
struct list_item$1charph* litem_146;
char* __dec_obj18;
void* __right_value170 = (void*)0;
struct list_item$1charph* litem_147;
char* __dec_obj19;
void* __right_value171 = (void*)0;
struct list_item$1charph* litem_148;
char* __dec_obj20;
struct list$1charph* __result109__;
    if(    self->len==0) {
        litem_146=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value169=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 223, "list_item$1charph"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        __dec_obj18=litem_146->item;
        litem_146->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value170=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 233, "list_item$1charph"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        __dec_obj19=litem_147->item;
        litem_147->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 243, "list_item$1charph"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        __dec_obj20=litem_148->item;
        litem_148->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1charph* result_154;
int offset_155;
int ovec_max_156;
const char* err_160;
int erro_ofs_161;
int options_162;
char* str_163;
struct real_pcre8_or_16* re_164;
int n_165;
int options_166;
int len_167;
int regex_result_168;
int i_169;
int i_170;
void* __right_value179 = (void*)0;
char* str_171;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1charph* group_strings_172;
void* __right_value182 = (void*)0;
char* str2_173;
void* __right_value183 = (void*)0;
char* str_174;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct list$1charph* group_strings_175;
int i_176;
void* __right_value186 = (void*)0;
char* match_string_177;
void* __right_value187 = (void*)0;
char* str2_178;
struct list$1charph* __result111__;
err_160 = (void*)0;
memset(&erro_ofs_161, 0, sizeof(int));
    result_154=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 463, "list$1charph"))));
    offset_155=0;
    ovec_max_156=16;
    int start_157[ovec_max_156];
    memset(&start_157, 0, sizeof(int)    *(ovec_max_156)    );
    int end_158[ovec_max_156];
    memset(&end_158, 0, sizeof(int)    *(ovec_max_156)    );
    int ovec_value_159[ovec_max_156*3];
    memset(&ovec_value_159, 0, sizeof(int)    *(ovec_max_156*3)    );
    options_162=reg->options;
    str_163=reg->str;
    re_164=reg->re;
    n_165=0;
    while((_Bool)1) {
        options_166=2097152;
        len_167=strlen(self);
        regex_result_168=pcre_exec(re_164,(struct pcre_extra*)0,self,len_167,offset_155,options_166,ovec_value_159,ovec_max_156*3);
        for(        i_169=0;        i_169<ovec_max_156;        i_169++        ){
            start_157[i_169]=ovec_value_159[i_169*2];
        }
        for(        i_170=0;        i_170<ovec_max_156;        i_170++        ){
            end_158[i_170]=ovec_value_159[i_170*2+1];
        }
        if(        regex_result_168==1) {
            str_171=(char*)come_increment_ref_count(charp_substring(self,start_157[0],end_158[0]));
            group_strings_172=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 499, "list$1charph"))));
            str2_173=(char*)come_increment_ref_count(block(parent,str_171,group_strings_172));
            list$1charph_push_back(result_154,(char*)come_increment_ref_count(str2_173));
            if(            offset_155==end_158[0]) {
                offset_155++;
            }
            else {
                offset_155=end_158[0];
            }
            n_165++;
            if(            n_165==count) {
                str_171 = come_decrement_ref_count2(str_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_173 = come_decrement_ref_count2(str2_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_171 = come_decrement_ref_count2(str_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_173 = come_decrement_ref_count2(str2_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_168>1) {
            str_174=(char*)come_increment_ref_count(charp_substring(self,start_157[0],end_158[0]));
            group_strings_175=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 521, "list$1charph"))));
            for(            i_176=1;            i_176<regex_result_168;            i_176++            ){
                match_string_177=(char*)come_increment_ref_count(charp_substring(self,start_157[i_176],end_158[i_176]));
                list$1charph_push_back(group_strings_175,(char*)come_increment_ref_count(match_string_177));
                match_string_177 = come_decrement_ref_count2(match_string_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_178=(char*)come_increment_ref_count(block(parent,str_174,group_strings_175));
            list$1charph_push_back(result_154,(char*)come_increment_ref_count(str2_178));
            if(            offset_155==end_158[0]) {
                offset_155++;
            }
            else {
                offset_155=end_158[0];
            }
            n_165++;
            if(            n_165==count) {
                str_174 = come_decrement_ref_count2(str_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_175,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                str2_178 = come_decrement_ref_count2(str2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_174 = come_decrement_ref_count2(str_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_175,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_178 = come_decrement_ref_count2(str2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result111__ = gComeFunResultObject = __result_obj__ = result_154;
    /*i*/come_call_finalizer3(result_154,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_179;
int erro_ofs_180;
int options_181;
char* str_182;
struct real_pcre8_or_16* re_183;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* result_184;
int offset_185;
int ovec_max_186;
int options_190;
int len_191;
int regex_result_192;
int i_193;
int i_194;
void* __right_value190 = (void*)0;
char* str_195;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1charph* match_strings_196;
void* __right_value193 = (void*)0;
char* str2_197;
void* __right_value194 = (void*)0;
char* str_198;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1charph* match_strings_199;
int i_200;
void* __right_value197 = (void*)0;
char* match_str_201;
void* __right_value198 = (void*)0;
char* str2_202;
void* __right_value199 = (void*)0;
char* str_203;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1charph* match_strings_204;
void* __right_value202 = (void*)0;
char* str2_205;
struct list$1charph* __result112__;
err_179 = (void*)0;
memset(&erro_ofs_180, 0, sizeof(int));
    options_181=reg->options;
    str_182=reg->str;
    re_183=reg->re;
    result_184=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 563, "list$1charph"))));
    offset_185=0;
    ovec_max_186=16;
    int start_187[ovec_max_186];
    memset(&start_187, 0, sizeof(int)    *(ovec_max_186)    );
    int end_188[ovec_max_186];
    memset(&end_188, 0, sizeof(int)    *(ovec_max_186)    );
    int ovec_value_189[ovec_max_186*3];
    memset(&ovec_value_189, 0, sizeof(int)    *(ovec_max_186*3)    );
    while((_Bool)1) {
        options_190=2097152;
        len_191=strlen(self);
        regex_result_192=pcre_exec(re_183,(struct pcre_extra*)0,self,len_191,offset_185,options_190,ovec_value_189,ovec_max_186*3);
        for(        i_193=0;        i_193<ovec_max_186;        i_193++        ){
            start_187[i_193]=ovec_value_189[i_193*2];
        }
        for(        i_194=0;        i_194<ovec_max_186;        i_194++        ){
            end_188[i_194]=ovec_value_189[i_194*2+1];
        }
        if(        regex_result_192==1) {
            str_195=(char*)come_increment_ref_count(charp_substring(self,offset_185,start_187[0]));
            match_strings_196=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 590, "list$1charph"))));
            str2_197=(char*)come_increment_ref_count(block(parent,str_195,match_strings_196));
            list$1charph_push_back(result_184,(char*)come_increment_ref_count(str2_197));
            if(            offset_185==end_188[0]) {
                offset_185++;
            }
            else {
                offset_185=end_188[0];
            }
            str_195 = come_decrement_ref_count2(str_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_196,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_197 = come_decrement_ref_count2(str2_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_192>1) {
            str_198=(char*)come_increment_ref_count(charp_substring(self,offset_185,start_187[0]));
            if(            offset_185==end_188[0]) {
                offset_185++;
            }
            else {
                offset_185=end_188[0];
            }
            match_strings_199=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            for(            i_200=1;            i_200<regex_result_192;            i_200++            ){
                match_str_201=(char*)come_increment_ref_count(charp_substring(self,start_187[i_200],end_188[i_200]));
                list$1charph_push_back(match_strings_199,(char*)come_increment_ref_count(match_str_201));
                match_str_201 = come_decrement_ref_count2(match_str_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_202=(char*)come_increment_ref_count(block(parent,str_198,match_strings_199));
            list$1charph_push_back(result_184,(char*)come_increment_ref_count(str2_202));
            str_198 = come_decrement_ref_count2(str_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_199,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_202 = come_decrement_ref_count2(str2_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_185<charp_length(self)) {
        str_203=(char*)come_increment_ref_count(charp_substring(self,offset_185,-1));
        match_strings_204=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 632, "list$1charph"))));
        str2_205=(char*)come_increment_ref_count(block(parent,str_203,match_strings_204));
        list$1charph_push_back(result_184,(char*)come_increment_ref_count(str2_205));
        str_203 = come_decrement_ref_count2(str_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_204,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        str2_205 = come_decrement_ref_count2(str2_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = result_184;
    /*i*/come_call_finalizer3(result_184,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
const char* err_206;
int erro_ofs_207;
int options_208;
char* str_209;
struct real_pcre8_or_16* re_210;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1charph* result_211;
int offset_212;
int ovec_max_213;
int n_217;
int options_218;
int len_219;
int regex_result_220;
int i_221;
int i_222;
void* __right_value205 = (void*)0;
char* str_223;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1charph* match_strings_224;
void* __right_value208 = (void*)0;
char* str2_225;
void* __right_value209 = (void*)0;
char* str_226;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1charph* match_strings_227;
int i_228;
void* __right_value212 = (void*)0;
char* match_str_229;
void* __right_value213 = (void*)0;
char* str2_230;
struct list$1charph* __result113__;
err_206 = (void*)0;
memset(&erro_ofs_207, 0, sizeof(int));
    options_208=reg->options;
    str_209=reg->str;
    re_210=reg->re;
    result_211=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 650, "list$1charph"))));
    offset_212=0;
    ovec_max_213=16;
    int start_214[ovec_max_213];
    memset(&start_214, 0, sizeof(int)    *(ovec_max_213)    );
    int end_215[ovec_max_213];
    memset(&end_215, 0, sizeof(int)    *(ovec_max_213)    );
    int ovec_value_216[ovec_max_213*3];
    memset(&ovec_value_216, 0, sizeof(int)    *(ovec_max_213*3)    );
    n_217=0;
    while((_Bool)1) {
        options_218=2097152;
        len_219=strlen(self);
        regex_result_220=pcre_exec(re_210,(struct pcre_extra*)0,self,len_219,offset_212,options_218,ovec_value_216,ovec_max_213*3);
        for(        i_221=0;        i_221<ovec_max_213;        i_221++        ){
            start_214[i_221]=ovec_value_216[i_221*2];
        }
        for(        i_222=0;        i_222<ovec_max_213;        i_222++        ){
            end_215[i_222]=ovec_value_216[i_222*2+1];
        }
        if(        regex_result_220==1) {
            str_223=(char*)come_increment_ref_count(charp_substring(self,offset_212,start_214[0]));
            match_strings_224=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 679, "list$1charph"))));
            str2_225=(char*)come_increment_ref_count(block(parent,str_223,match_strings_224));
            list$1charph_push_back(result_211,(char*)come_increment_ref_count(str2_225));
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
            str_223 = come_decrement_ref_count2(str_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_224,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_225 = come_decrement_ref_count2(str2_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_220>1) {
            str_226=(char*)come_increment_ref_count(charp_substring(self,offset_212,start_214[0]));
            if(            offset_212==end_215[0]) {
                offset_212++;
            }
            else {
                offset_212=end_215[0];
            }
            match_strings_227=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 702, "list$1charph"))));
            for(            i_228=1;            i_228<regex_result_220;            i_228++            ){
                match_str_229=(char*)come_increment_ref_count(charp_substring(self,start_214[i_228],end_215[i_228]));
                list$1charph_push_back(match_strings_227,(char*)come_increment_ref_count(match_str_229));
                match_str_229 = come_decrement_ref_count2(match_str_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_230=(char*)come_increment_ref_count(block(parent,str_226,match_strings_227));
            list$1charph_push_back(result_211,(char*)come_increment_ref_count(str2_230));
            str_226 = come_decrement_ref_count2(str_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            str2_230 = come_decrement_ref_count2(str2_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_217++;
        if(        n_217==count) {
            break;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = result_211;
    /*i*/come_call_finalizer3(result_211,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
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
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* result_231;
int offset_232;
int ovec_max_233;
const char* err_237;
int erro_ofs_238;
int options_239;
char* str_240;
struct real_pcre8_or_16* re_241;
int options_242;
int len_243;
int regex_result_244;
int i_245;
int i_246;
void* __right_value216 = (void*)0;
char* str_247;
void* __right_value217 = (void*)0;
char* str_248;
int i_249;
void* __right_value218 = (void*)0;
char* match_string_250;
struct list$1charph* __result114__;
err_237 = (void*)0;
memset(&erro_ofs_238, 0, sizeof(int));
    result_231=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 766, "list$1charph"))));
    offset_232=0;
    ovec_max_233=16;
    int start_234[ovec_max_233];
    memset(&start_234, 0, sizeof(int)    *(ovec_max_233)    );
    int end_235[ovec_max_233];
    memset(&end_235, 0, sizeof(int)    *(ovec_max_233)    );
    int ovec_value_236[ovec_max_233*3];
    memset(&ovec_value_236, 0, sizeof(int)    *(ovec_max_233*3)    );
    options_239=reg->options;
    str_240=reg->str;
    re_241=reg->re;
    while((_Bool)1) {
        options_242=2097152;
        len_243=strlen(self);
        regex_result_244=pcre_exec(re_241,(struct pcre_extra*)0,self,len_243,offset_232,options_242,ovec_value_236,ovec_max_233*3);
        for(        i_245=0;        i_245<ovec_max_233;        i_245++        ){
            start_234[i_245]=ovec_value_236[i_245*2];
        }
        for(        i_246=0;        i_246<ovec_max_233;        i_246++        ){
            end_235[i_246]=ovec_value_236[i_246*2+1];
        }
        if(        regex_result_244==1) {
            str_247=(char*)come_increment_ref_count(charp_substring(self,start_234[0],end_235[0]));
            list$1charph_push_back(result_231,(char*)come_increment_ref_count(str_247));
            if(            offset_232==end_235[0]) {
                offset_232++;
            }
            else {
                offset_232=end_235[0];
            }
            str_247 = come_decrement_ref_count2(str_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_244>1) {
            str_248=(char*)come_increment_ref_count(charp_substring(self,start_234[0],end_235[0]));
            list$1charph_push_back(result_231,(char*)come_increment_ref_count(str_248));
            if(            offset_232==end_235[0]) {
                offset_232++;
            }
            else {
                offset_232=end_235[0];
            }
            *num_group_string_in_regex=regex_result_244-1;
            for(            i_249=1;            i_249<regex_result_244;            i_249++            ){
                match_string_250=(char*)come_increment_ref_count(charp_substring(self,start_234[i_249],end_235[i_249]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_250));
                match_string_250 = come_decrement_ref_count2(match_string_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_248 = come_decrement_ref_count2(str_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_231;
    /*i*/come_call_finalizer3(result_231,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* result_251;
int len_252;
char* __result115__;
    result_251=(char*)come_increment_ref_count(__builtin_string(self));
    len_252=strlen(self);
    if(    self[len_252-1]==10) {
        result_251[len_252-1]=0;
    }
    else if(    self[len_252-1]==13) {
        result_251[len_252-1]=0;
    }
    else if(    len_252>2&&self[len_252-2]==13&&self[len_252-1]==10) {
        result_251[len_252-2]=0;
    }
    __result115__ = gComeFunResultObject = __result_obj__ = result_251;
    result_251 = come_decrement_ref_count2(result_251, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_253;
void* __right_value220 = (void*)0;
char* result_254;
int n_255;
int i_256;
char c_257;
char* __result116__;
    len_253=charp_length(str);
    result_254=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_253*2+1)), "libcomelang-str.c", 860, "char"));
    n_255=0;
    for(    i_256=0;    i_256<len_253;    i_256++    ){
        c_257=str[i_256];
        if(        (c_257>=0&&c_257<32)||c_257==127) {
            result_254[n_255++]=94;
            result_254[n_255++]=c_257+65-1;
        }
        else {
            result_254[n_255++]=c_257;
        }
    }
    result_254[n_255]=0;
    __result116__ = gComeFunResultObject = __result_obj__ = result_254;
    result_254 = come_decrement_ref_count2(result_254, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_258;
void* __right_value221 = (void*)0;
char* result_259;
char* __result117__;
    len_258=4*(wcslen(wstr)+1);
    result_259=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_258)), "libcomelang-str.c", 886, "char"));
    if(    wcstombs(result_259,wstr,len_258)<0) {
        strncpy(result_259,"",len_258);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_259;
    result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
unsigned int* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value222=__builtin_wstring(str)));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_260;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
unsigned int* __result119__;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
unsigned int* __result120__;
void* __right_value227 = (void*)0;
unsigned int* sub_str_261;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
unsigned int* __result121__;
    len_260=wcslen(str);
    if(    len_260==0) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value224=string_to_wstring(((char*)(__right_value223=wchar_tp_to_string(str))))));
        __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    if(    head<0) {
        head+=len_260;
    }
    if(    tail<0) {
        tail+=len_260+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value226=string_to_wstring(((char*)(__right_value225=wchar_tp_to_string(str))))));
        __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    if(    tail>=len_260) {
        tail=len_260;
    }
    sub_str_261=(unsigned int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_261,sizeof(unsigned int)*(wstring_length(sub_str_261)+1));
    __result121__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value229=string_to_wstring(((char*)(__right_value228=wchar_tp_to_string(str))))));
    sub_str_261 = come_decrement_ref_count2(sub_str_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_262;
    head_262=wcsstr(str,search_str);
    if(    head_262==((void*)0)) {
        return default_value;
    }
    return head_262-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_263;
unsigned int* p_264;
int len2_265;
_Bool result_266;
int i_267;
memset(&i_267, 0, sizeof(int));
    len_263=wcslen(search_str);
    p_264=str+wcslen(str)-len_263;
    while(p_264>=str) {
        len2_265=wcslen(p_264);
        result_266=(_Bool)1;
        for(        i_267=0;        i_267<len_263&&i_267<len2_265;        i_267++        ){
            if(            p_264[i_267]!=search_str[i_267]) {
                result_266=(_Bool)0;
            }
        }
        if(        result_266) {
            return (p_264-str);
        }
        p_264--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_268;
void* __right_value230 = (void*)0;
unsigned int* result_269;
int i_270;
unsigned int* __result122__;
    len_268=wcslen(str);
    result_269=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_268+1)), "libcomelang-str.c", 986, "int"));
    for(    i_270=0;    i_270<len_268;    i_270++    ){
        result_269[i_270]=str[len_268-i_270-1];
    }
    result_269[len_268]=0;
    __result122__ = gComeFunResultObject = __result_obj__ = result_269;
    result_269 = come_decrement_ref_count2(result_269, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_271;
void* __right_value231 = (void*)0;
unsigned int* result_272;
int i_273;
unsigned int* __result123__;
    len_271=wcslen(str)*n+1;
    result_272=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_271)), "libcomelang-str.c", 1001, "int"));
    result_272[0]=0;
    for(    i_273=0;    i_273<n;    i_273++    ){
        wcscat(result_272,str);
    }
    __result123__ = gComeFunResultObject = __result_obj__ = result_272;
    result_272 = come_decrement_ref_count2(result_272, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_274;
void* __right_value232 = (void*)0;
unsigned int* result_275;
int n_276;
int i_277;
unsigned int c_278;
unsigned int* __result124__;
    len_274=wchar_tp_length(str);
    result_275=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_274*2+1)), "libcomelang-str.c", 1015, "int"));
    n_276=0;
    for(    i_277=0;    i_277<len_274;    i_277++    ){
        c_278=str[i_277];
        if(        (c_278>=0&&c_278<32)||c_278==127) {
            result_275[n_276++]=94;
            result_275[n_276++]=c_278+65-1;
        }
        else {
            result_275[n_276++]=c_278;
        }
    }
    result_275[n_276]=0;
    __result124__ = gComeFunResultObject = __result_obj__ = result_275;
    result_275 = come_decrement_ref_count2(result_275, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_279;
int ovec_max_280;
const char* err_284;
int erro_ofs_285;
int options_286;
char* str_287;
struct real_pcre8_or_16* re_288;
int n_289;
int options_290;
int len_291;
int regex_result_292;
int i_293;
int i_294;
int i_297;
void* __right_value233 = (void*)0;
char* match_string_298;
err_284 = (void*)0;
memset(&erro_ofs_285, 0, sizeof(int));
    offset_279=0;
    ovec_max_280=16;
    int start_281[ovec_max_280];
    memset(&start_281, 0, sizeof(int)    *(ovec_max_280)    );
    int end_282[ovec_max_280];
    memset(&end_282, 0, sizeof(int)    *(ovec_max_280)    );
    int ovec_value_283[ovec_max_280*3];
    memset(&ovec_value_283, 0, sizeof(int)    *(ovec_max_280*3)    );
    options_286=reg->options;
    str_287=reg->str;
    re_288=reg->re;
    n_289=0;
    while((_Bool)1) {
        options_290=2097152;
        len_291=strlen(self);
        regex_result_292=pcre_exec(re_288,(struct pcre_extra*)0,self,len_291,offset_279,options_290,ovec_value_283,ovec_max_280*3);
        for(        i_293=0;        i_293<ovec_max_280;        i_293++        ){
            start_281[i_293]=ovec_value_283[i_293*2];
        }
        for(        i_294=0;        i_294<ovec_max_280;        i_294++        ){
            end_282[i_294]=ovec_value_283[i_294*2+1];
        }
        if(        regex_result_292==1||(group_strings==((void*)0)&&regex_result_292>0)) {
            n_289++;
            if(            n_289==count) {
                return (_Bool)1;
            }
            if(            offset_279==end_282[0]) {
                offset_279++;
            }
            else {
                offset_279=end_282[0];
            }
        }
        else if(        regex_result_292>1) {
            n_289++;
            list$1charph_reset(group_strings);
            for(            i_297=1;            i_297<regex_result_292;            i_297++            ){
                match_string_298=(char*)come_increment_ref_count(charp_substring(self,start_281[i_297],end_282[i_297]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_298));
                match_string_298 = come_decrement_ref_count2(match_string_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_289==count) {
                return (_Bool)1;
            }
            if(            offset_279==end_282[0]) {
                offset_279++;
            }
            else {
                offset_279=end_282[0];
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
struct list_item$1charph* it_295;
struct list_item$1charph* prev_it_296;
struct list$1charph* __result125__;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        /*i*/come_call_finalizer3(prev_it_296,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result125__;
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
void* __right_value234 = (void*)0;
unsigned int* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value234=wchar_tp_multiply(str,n)));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
unsigned int* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value235=wchar_tp_multiply(str,n)));
    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
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
void* __right_value236 = (void*)0;
unsigned int* result_299;
unsigned int* __result128__;
    result_299=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1179, "int"));
    wcscpy(result_299,left);
    wcscat(result_299,right);
    __result128__ = gComeFunResultObject = __result_obj__ = result_299;
    result_299 = come_decrement_ref_count2(result_299, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
unsigned int* result_300;
unsigned int* __result129__;
    result_300=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1189, "int"));
    wcscpy(result_300,left);
    wcscat(result_300,right);
    __result129__ = gComeFunResultObject = __result_obj__ = result_300;
    result_300 = come_decrement_ref_count2(result_300, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_301;
    head_301=strstr(str,search_str);
    if(    head_301==((void*)0)) {
        return default_value;
    }
    return head_301-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_302;
int result_306;
int offset_307;
const char* err_308;
int erro_ofs_309;
int options_310;
char* str_311;
struct real_pcre8_or_16* re_312;
int options_313;
int len_314;
int regex_result_315;
int i_316;
int i_317;
err_308 = (void*)0;
memset(&erro_ofs_309, 0, sizeof(int));
    ovec_max_302=16;
    int start_303[ovec_max_302];
    memset(&start_303, 0, sizeof(int)    *(ovec_max_302)    );
    int end_304[ovec_max_302];
    memset(&end_304, 0, sizeof(int)    *(ovec_max_302)    );
    int ovec_value_305[ovec_max_302*3];
    memset(&ovec_value_305, 0, sizeof(int)    *(ovec_max_302*3)    );
    result_306=default_value;
    offset_307=0;
    options_310=reg->options;
    str_311=reg->str;
    re_312=reg->re;
    while((_Bool)1) {
        options_313=2097152;
        len_314=strlen(self);
        regex_result_315=pcre_exec(re_312,(struct pcre_extra*)0,self,len_314,offset_307,options_313,ovec_value_305,ovec_max_302*3);
        for(        i_316=0;        i_316<ovec_max_302;        i_316++        ){
            start_303[i_316]=ovec_value_305[i_316*2];
        }
        for(        i_317=0;        i_317<ovec_max_302;        i_317++        ){
            end_304[i_317]=ovec_value_305[i_317*2+1];
        }
        if(        regex_result_315==1||regex_result_315>0) {
            result_306=start_303[0];
            break;
        }
        {
            break;
        }
    }
    return result_306;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_318;
void* __right_value238 = (void*)0;
char* __result130__;
void* __right_value239 = (void*)0;
char* __result131__;
    len_318=strlen(self);
    if(    strcmp(self,"")==0) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string(self)));
        __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    index<0) {
        index+=len_318;
    }
    if(    index>=len_318) {
        index=len_318-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string(self)));
    __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_319;
void* __right_value240 = (void*)0;
char* result_320;
int i_321;
char* __result132__;
    len_319=strlen(str)*n+1;
    result_320=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_319)), "libcomelang-str.c", 1287, "char"));
    result_320[0]=0;
    for(    i_321=0;    i_321<n;    i_321++    ){
        strcat(result_320,str);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_320;
    result_320 = come_decrement_ref_count2(result_320, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
int offset_322;
int ovec_max_323;
const char* err_327;
int erro_ofs_328;
int options_329;
char* str_330;
struct real_pcre8_or_16* re_331;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct buffer* result_332;
int options_333;
int len_334;
int regex_result_335;
int i_336;
int i_337;
void* __right_value243 = (void*)0;
char* str_338;
void* __right_value244 = (void*)0;
char* str_339;
void* __right_value245 = (void*)0;
char* str_340;
void* __right_value246 = (void*)0;
char* __result133__;
err_327 = (void*)0;
memset(&erro_ofs_328, 0, sizeof(int));
    offset_322=0;
    ovec_max_323=16;
    int start_324[ovec_max_323];
    memset(&start_324, 0, sizeof(int)    *(ovec_max_323)    );
    int end_325[ovec_max_323];
    memset(&end_325, 0, sizeof(int)    *(ovec_max_323)    );
    int ovec_value_326[ovec_max_323*3];
    memset(&ovec_value_326, 0, sizeof(int)    *(ovec_max_323*3)    );
    options_329=reg->options;
    str_330=reg->str;
    re_331=reg->re;
    result_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1315, "buffer"))));
    while((_Bool)1) {
        options_333=2097152;
        len_334=strlen(self);
        regex_result_335=pcre_exec(re_331,(struct pcre_extra*)0,self,len_334,offset_322,options_333,ovec_value_326,ovec_max_323*3);
        for(        i_336=0;        i_336<ovec_max_323;        i_336++        ){
            start_324[i_336]=ovec_value_326[i_336*2];
        }
        for(        i_337=0;        i_337<ovec_max_323;        i_337++        ){
            end_325[i_337]=ovec_value_326[i_337*2+1];
        }
        if(        regex_result_335==1) {
            str_338=(char*)come_increment_ref_count(charp_substring(self,offset_322,start_324[0]));
            buffer_append_str(result_332,str_338);
            buffer_append_str(result_332,replace);
            if(            offset_322==end_325[0]) {
                offset_322++;
            }
            else {
                offset_322=end_325[0];
            }
            if(            !reg->global) {
                str_339=(char*)come_increment_ref_count(charp_substring(self,offset_322,-1));
                buffer_append_str(result_332,str_339);
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_340=(char*)come_increment_ref_count(charp_substring(self,offset_322,-1));
            buffer_append_str(result_332,str_340);
            str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result133__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=buffer_to_string(result_332)));
    /*i*/come_call_finalizer3(result_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
int offset_341;
int ovec_max_342;
const char* err_346;
int erro_ofs_347;
int options_348;
char* str_349;
struct real_pcre8_or_16* re_350;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct buffer* result_351;
int n_352;
int options_353;
int len_354;
int regex_result_355;
int i_356;
int i_357;
void* __right_value249 = (void*)0;
char* str_358;
void* __right_value250 = (void*)0;
char* str_359;
void* __right_value251 = (void*)0;
char* str_360;
void* __right_value252 = (void*)0;
char* str_361;
void* __right_value253 = (void*)0;
char* __result134__;
err_346 = (void*)0;
memset(&erro_ofs_347, 0, sizeof(int));
    offset_341=0;
    ovec_max_342=16;
    int start_343[ovec_max_342];
    memset(&start_343, 0, sizeof(int)    *(ovec_max_342)    );
    int end_344[ovec_max_342];
    memset(&end_344, 0, sizeof(int)    *(ovec_max_342)    );
    int ovec_value_345[ovec_max_342*3];
    memset(&ovec_value_345, 0, sizeof(int)    *(ovec_max_342*3)    );
    options_348=reg->options;
    str_349=reg->str;
    re_350=reg->re;
    result_351=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1378, "buffer"))));
    n_352=0;
    while((_Bool)1) {
        options_353=2097152;
        len_354=strlen(self);
        regex_result_355=pcre_exec(re_350,(struct pcre_extra*)0,self,len_354,offset_341,options_353,ovec_value_345,ovec_max_342*3);
        for(        i_356=0;        i_356<ovec_max_342;        i_356++        ){
            start_343[i_356]=ovec_value_345[i_356*2];
        }
        for(        i_357=0;        i_357<ovec_max_342;        i_357++        ){
            end_344[i_357]=ovec_value_345[i_357*2+1];
        }
        if(        regex_result_355==1) {
            n_352++;
            str_358=(char*)come_increment_ref_count(charp_substring(self,offset_341,start_343[0]));
            buffer_append_str(result_351,str_358);
            buffer_append_str(result_351,replace);
            if(            offset_341==end_344[0]) {
                offset_341++;
            }
            else {
                offset_341=end_344[0];
            }
            if(            !reg->global) {
                str_359=(char*)come_increment_ref_count(charp_substring(self,offset_341,-1));
                buffer_append_str(result_351,str_359);
                str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_352==count) {
                str_360=(char*)come_increment_ref_count(charp_substring(self,offset_341,-1));
                buffer_append_str(result_351,str_360);
                str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_361=(char*)come_increment_ref_count(charp_substring(self,offset_341,-1));
            buffer_append_str(result_351,str_361);
            str_361 = come_decrement_ref_count2(str_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_361 = come_decrement_ref_count2(str_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=buffer_to_string(result_351)));
    /*i*/come_call_finalizer3(result_351,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1charph* result_362;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct buffer* buf_363;
int i_364;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1charph* __result135__;
    result_362=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1437, "list$1charph"))));
    buf_363=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1439, "buffer"))));
    for(    i_364=0;    i_364<charp_length(self);    i_364++    ){
        if(        strstr(self+i_364,str)==self+i_364) {
            list$1charph_push_back(result_362,(char*)come_increment_ref_count(__builtin_string(buf_363->buf)));
            buffer_reset(buf_363);
            i_364+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_363,self[i_364]);
        }
    }
    if(    buffer_length(buf_363)!=0) {
        list$1charph_push_back(result_362,(char*)come_increment_ref_count(__builtin_string(buf_363->buf)));
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_362;
    /*i*/come_call_finalizer3(result_362,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_363,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1charph* result_365;
int offset_366;
int ovec_max_367;
const char* err_371;
int erro_ofs_372;
int options_373;
char* str_374;
struct real_pcre8_or_16* re_375;
int options_376;
int len_377;
int regex_result_378;
int i_379;
int i_380;
void* __right_value262 = (void*)0;
char* str_381;
void* __right_value263 = (void*)0;
char* str_382;
int i_383;
void* __right_value264 = (void*)0;
char* match_string_384;
struct list$1charph* __result136__;
err_371 = (void*)0;
memset(&erro_ofs_372, 0, sizeof(int));
    result_365=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1460, "list$1charph"))));
    offset_366=0;
    ovec_max_367=16;
    int start_368[ovec_max_367];
    memset(&start_368, 0, sizeof(int)    *(ovec_max_367)    );
    int end_369[ovec_max_367];
    memset(&end_369, 0, sizeof(int)    *(ovec_max_367)    );
    int ovec_value_370[ovec_max_367*3];
    memset(&ovec_value_370, 0, sizeof(int)    *(ovec_max_367*3)    );
    options_373=reg->options;
    str_374=reg->str;
    re_375=reg->re;
    while((_Bool)1) {
        options_376=2097152;
        len_377=strlen(self);
        regex_result_378=pcre_exec(re_375,(struct pcre_extra*)0,self,len_377,offset_366,options_376,ovec_value_370,ovec_max_367*3);
        for(        i_379=0;        i_379<ovec_max_367;        i_379++        ){
            start_368[i_379]=ovec_value_370[i_379*2];
        }
        for(        i_380=0;        i_380<ovec_max_367;        i_380++        ){
            end_369[i_380]=ovec_value_370[i_380*2+1];
        }
        if(        regex_result_378==1) {
            str_381=(char*)come_increment_ref_count(charp_substring(self,start_368[0],end_369[0]));
            list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_381));
            if(            offset_366==end_369[0]) {
                offset_366++;
            }
            else {
                offset_366=end_369[0];
            }
            str_381 = come_decrement_ref_count2(str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_378>1) {
            str_382=(char*)come_increment_ref_count(charp_substring(self,start_368[0],end_369[0]));
            list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_382));
            if(            offset_366==end_369[0]) {
                offset_366++;
            }
            else {
                offset_366=end_369[0];
            }
            for(            i_383=1;            i_383<regex_result_378;            i_383++            ){
                match_string_384=(char*)come_increment_ref_count(charp_substring(self,start_368[i_383],end_369[i_383]));
                list$1charph_push_back(result_365,(char*)come_increment_ref_count(match_string_384));
                match_string_384 = come_decrement_ref_count2(match_string_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result136__ = gComeFunResultObject = __result_obj__ = result_365;
    /*i*/come_call_finalizer3(result_365,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
const char* err_385;
int erro_ofs_386;
int options_387;
char* str_388;
struct real_pcre8_or_16* re_389;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1charph* result_390;
int offset_391;
int ovec_max_392;
int options_396;
int len_397;
int regex_result_398;
int i_399;
int i_400;
void* __right_value267 = (void*)0;
char* str_401;
void* __right_value268 = (void*)0;
char* str_402;
int i_403;
void* __right_value269 = (void*)0;
char* match_str_404;
void* __right_value270 = (void*)0;
char* str_405;
struct list$1charph* __result137__;
err_385 = (void*)0;
memset(&erro_ofs_386, 0, sizeof(int));
    options_387=reg->options;
    str_388=reg->str;
    re_389=reg->re;
    result_390=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1541, "list$1charph"))));
    offset_391=0;
    ovec_max_392=16;
    int start_393[ovec_max_392];
    memset(&start_393, 0, sizeof(int)    *(ovec_max_392)    );
    int end_394[ovec_max_392];
    memset(&end_394, 0, sizeof(int)    *(ovec_max_392)    );
    int ovec_value_395[ovec_max_392*3];
    memset(&ovec_value_395, 0, sizeof(int)    *(ovec_max_392*3)    );
    while((_Bool)1) {
        options_396=2097152;
        len_397=strlen(self);
        regex_result_398=pcre_exec(re_389,(struct pcre_extra*)0,self,len_397,offset_391,options_396,ovec_value_395,ovec_max_392*3);
        for(        i_399=0;        i_399<ovec_max_392;        i_399++        ){
            start_393[i_399]=ovec_value_395[i_399*2];
        }
        for(        i_400=0;        i_400<ovec_max_392;        i_400++        ){
            end_394[i_400]=ovec_value_395[i_400*2+1];
        }
        if(        regex_result_398==1) {
            str_401=(char*)come_increment_ref_count(charp_substring(self,offset_391,start_393[0]));
            list$1charph_push_back(result_390,(char*)come_increment_ref_count(str_401));
            if(            offset_391==end_394[0]) {
                offset_391++;
            }
            else {
                offset_391=end_394[0];
            }
            str_401 = come_decrement_ref_count2(str_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_398>1) {
            str_402=(char*)come_increment_ref_count(charp_substring(self,offset_391,start_393[0]));
            list$1charph_push_back(result_390,(char*)come_increment_ref_count(str_402));
            if(            offset_391==end_394[0]) {
                offset_391++;
            }
            else {
                offset_391=end_394[0];
            }
            for(            i_403=1;            i_403<regex_result_398;            i_403++            ){
                match_str_404=(char*)come_increment_ref_count(charp_substring(self,start_393[i_403],end_394[i_403]));
                list$1charph_push_back(result_390,(char*)come_increment_ref_count(match_str_404));
                match_str_404 = come_decrement_ref_count2(match_str_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_402 = come_decrement_ref_count2(str_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_391<charp_length(self)) {
        str_405=(char*)come_increment_ref_count(charp_substring(self,offset_391,-1));
        list$1charph_push_back(result_390,(char*)come_increment_ref_count(str_405));
        str_405 = come_decrement_ref_count2(str_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = result_390;
    /*i*/come_call_finalizer3(result_390,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_406;
int ovec_max_407;
const char* err_411;
int erro_ofs_412;
int options_413;
char* str_414;
struct real_pcre8_or_16* re_415;
int options_416;
int len_417;
int regex_result_418;
int i_419;
int i_420;
err_411 = (void*)0;
memset(&erro_ofs_412, 0, sizeof(int));
    offset_406=0;
    ovec_max_407=16;
    int start_408[ovec_max_407];
    memset(&start_408, 0, sizeof(int)    *(ovec_max_407)    );
    int end_409[ovec_max_407];
    memset(&end_409, 0, sizeof(int)    *(ovec_max_407)    );
    int ovec_value_410[ovec_max_407*3];
    memset(&ovec_value_410, 0, sizeof(int)    *(ovec_max_407*3)    );
    options_413=reg->options;
    str_414=reg->str;
    re_415=reg->re;
    while((_Bool)1) {
        options_416=2097152;
        len_417=strlen(self);
        regex_result_418=pcre_exec(re_415,(struct pcre_extra*)0,self,len_417,offset_406,options_416,ovec_value_410,ovec_max_407*3);
        for(        i_419=0;        i_419<ovec_max_407;        i_419++        ){
            start_408[i_419]=ovec_value_410[i_419*2];
        }
        for(        i_420=0;        i_420<ovec_max_407;        i_420++        ){
            end_409[i_420]=ovec_value_410[i_420*2+1];
        }
        if(        regex_result_418>0) {
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
const char* err_421;
int erro_ofs_422;
int options_423;
char* str_424;
struct real_pcre8_or_16* re_425;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* result_426;
int offset_427;
int ovec_max_428;
int n_432;
int options_433;
int len_434;
int regex_result_435;
int i_436;
int i_437;
void* __right_value273 = (void*)0;
char* str_438;
void* __right_value274 = (void*)0;
char* str_439;
int i_440;
void* __right_value275 = (void*)0;
char* match_str_441;
void* __right_value276 = (void*)0;
char* str_442;
struct list$1charph* __result138__;
err_421 = (void*)0;
memset(&erro_ofs_422, 0, sizeof(int));
    options_423=reg->options;
    str_424=reg->str;
    re_425=reg->re;
    result_426=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1663, "list$1charph"))));
    offset_427=0;
    ovec_max_428=16;
    int start_429[ovec_max_428];
    memset(&start_429, 0, sizeof(int)    *(ovec_max_428)    );
    int end_430[ovec_max_428];
    memset(&end_430, 0, sizeof(int)    *(ovec_max_428)    );
    int ovec_value_431[ovec_max_428*3];
    memset(&ovec_value_431, 0, sizeof(int)    *(ovec_max_428*3)    );
    n_432=0;
    while((_Bool)1) {
        options_433=2097152;
        len_434=strlen(self);
        regex_result_435=pcre_exec(re_425,(struct pcre_extra*)0,self,len_434,offset_427,options_433,ovec_value_431,ovec_max_428*3);
        for(        i_436=0;        i_436<ovec_max_428;        i_436++        ){
            start_429[i_436]=ovec_value_431[i_436*2];
        }
        for(        i_437=0;        i_437<ovec_max_428;        i_437++        ){
            end_430[i_437]=ovec_value_431[i_437*2+1];
        }
        if(        regex_result_435==1) {
            str_438=(char*)come_increment_ref_count(charp_substring(self,offset_427,start_429[0]));
            list$1charph_push_back(result_426,(char*)come_increment_ref_count(str_438));
            if(            offset_427==end_430[0]) {
                offset_427++;
            }
            else {
                offset_427=end_430[0];
            }
            str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_435>1) {
            str_439=(char*)come_increment_ref_count(charp_substring(self,offset_427,start_429[0]));
            list$1charph_push_back(result_426,(char*)come_increment_ref_count(str_439));
            if(            offset_427==end_430[0]) {
                offset_427++;
            }
            else {
                offset_427=end_430[0];
            }
            for(            i_440=1;            i_440<regex_result_435;            i_440++            ){
                match_str_441=(char*)come_increment_ref_count(charp_substring(self,start_429[i_440],end_430[i_440]));
                list$1charph_push_back(result_426,(char*)come_increment_ref_count(match_str_441));
                match_str_441 = come_decrement_ref_count2(match_str_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_439 = come_decrement_ref_count2(str_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_432++;
        if(        maxsplit==n_432) {
            break;
        }
    }
    if(    offset_427<charp_length(self)) {
        str_442=(char*)come_increment_ref_count(charp_substring(self,offset_427,-1));
        list$1charph_push_back(result_426,(char*)come_increment_ref_count(str_442));
        str_442 = come_decrement_ref_count2(str_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result138__ = gComeFunResultObject = __result_obj__ = result_426;
    /*i*/come_call_finalizer3(result_426,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_443;
int erro_ofs_444;
int options_445;
char* str_446;
struct real_pcre8_or_16* re_447;
void* __right_value277 = (void*)0;
char* self2_448;
int ovec_max_449;
int result_453;
int offset_454;
int n_455;
int options_456;
int len_457;
int regex_result_458;
int i_459;
int i_460;
int __result139__;
err_443 = (void*)0;
memset(&erro_ofs_444, 0, sizeof(int));
    options_445=reg->options;
    str_446=reg->str;
    re_447=reg->re;
    self2_448=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_449=16;
    int start_450[ovec_max_449];
    memset(&start_450, 0, sizeof(int)    *(ovec_max_449)    );
    int end_451[ovec_max_449];
    memset(&end_451, 0, sizeof(int)    *(ovec_max_449)    );
    int ovec_value_452[ovec_max_449*3];
    memset(&ovec_value_452, 0, sizeof(int)    *(ovec_max_449*3)    );
    result_453=default_value;
    offset_454=0;
    n_455=0;
    while((_Bool)1) {
        options_456=2097152;
        len_457=strlen(self2_448);
        regex_result_458=pcre_exec(re_447,(struct pcre_extra*)0,self2_448,len_457,offset_454,options_456,ovec_value_452,ovec_max_449*3);
        for(        i_459=0;        i_459<ovec_max_449;        i_459++        ){
            start_450[i_459]=ovec_value_452[i_459*2];
        }
        for(        i_460=0;        i_460<ovec_max_449;        i_460++        ){
            end_451[i_460]=ovec_value_452[i_460*2+1];
        }
        if(        regex_result_458>0) {
            n_455++;
            if(            offset_454==end_451[0]) {
                offset_454++;
            }
            else {
                offset_454=end_451[0];
            }
            if(            n_455==count) {
                result_453=strlen(self)-end_451[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result139__ = result_453;
    self2_448 = come_decrement_ref_count2(self2_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result139__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_461;
int ovec_max_462;
const char* err_466;
int erro_ofs_467;
int options_468;
char* str_469;
struct real_pcre8_or_16* re_470;
int n_471;
int options_472;
int len_473;
int regex_result_474;
int i_475;
int i_476;
err_466 = (void*)0;
memset(&erro_ofs_467, 0, sizeof(int));
    offset_461=0;
    ovec_max_462=16;
    int start_463[ovec_max_462];
    memset(&start_463, 0, sizeof(int)    *(ovec_max_462)    );
    int end_464[ovec_max_462];
    memset(&end_464, 0, sizeof(int)    *(ovec_max_462)    );
    int ovec_value_465[ovec_max_462*3];
    memset(&ovec_value_465, 0, sizeof(int)    *(ovec_max_462*3)    );
    options_468=reg->options;
    str_469=reg->str;
    re_470=reg->re;
    n_471=0;
    while((_Bool)1) {
        options_472=2097152;
        len_473=strlen(self);
        regex_result_474=pcre_exec(re_470,(struct pcre_extra*)0,self,len_473,offset_461,options_472,ovec_value_465,ovec_max_462*3);
        for(        i_475=0;        i_475<ovec_max_462;        i_475++        ){
            start_463[i_475]=ovec_value_465[i_475*2];
        }
        for(        i_476=0;        i_476<ovec_max_462;        i_476++        ){
            end_464[i_476]=ovec_value_465[i_476*2+1];
        }
        if(        regex_result_474>0) {
            n_471++;
            if(            count==n_471) {
                return (_Bool)1;
            }
            if(            offset_461==end_464[0]) {
                offset_461++;
            }
            else {
                offset_461=end_464[0];
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
int offset_477;
int ovec_max_478;
const char* err_482;
int erro_ofs_483;
int options_484;
char* str_485;
struct real_pcre8_or_16* re_486;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct buffer* result_487;
int options_488;
int len_489;
int regex_result_490;
int i_491;
int i_492;
void* __right_value280 = (void*)0;
char* str_493;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* group_strings_494;
void* __right_value283 = (void*)0;
char* match_string_495;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* block_result_496;
void* __right_value286 = (void*)0;
char* str_497;
void* __right_value287 = (void*)0;
char* str_498;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1charph* group_strings_499;
int i_500;
void* __right_value290 = (void*)0;
char* match_string_501;
void* __right_value291 = (void*)0;
char* match_string_502;
void* __right_value292 = (void*)0;
char* block_result_503;
void* __right_value293 = (void*)0;
char* str_504;
void* __right_value294 = (void*)0;
char* str_505;
void* __right_value295 = (void*)0;
char* __result140__;
err_482 = (void*)0;
memset(&erro_ofs_483, 0, sizeof(int));
    offset_477=0;
    ovec_max_478=16;
    int start_479[ovec_max_478];
    memset(&start_479, 0, sizeof(int)    *(ovec_max_478)    );
    int end_480[ovec_max_478];
    memset(&end_480, 0, sizeof(int)    *(ovec_max_478)    );
    int ovec_value_481[ovec_max_478*3];
    memset(&ovec_value_481, 0, sizeof(int)    *(ovec_max_478*3)    );
    options_484=reg->options;
    str_485=reg->str;
    re_486=reg->re;
    result_487=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1875, "buffer"))));
    while((_Bool)1) {
        options_488=2097152;
        len_489=strlen(self);
        regex_result_490=pcre_exec(re_486,(struct pcre_extra*)0,self,len_489,offset_477,options_488,ovec_value_481,ovec_max_478*3);
        for(        i_491=0;        i_491<ovec_max_478;        i_491++        ){
            start_479[i_491]=ovec_value_481[i_491*2];
        }
        for(        i_492=0;        i_492<ovec_max_478;        i_492++        ){
            end_480[i_492]=ovec_value_481[i_492*2+1];
        }
        if(        regex_result_490==1) {
            str_493=(char*)come_increment_ref_count(charp_substring(self,offset_477,start_479[0]));
            buffer_append_str(result_487,str_493);
            group_strings_494=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1895, "list$1charph"))));
            match_string_495=(char*)come_increment_ref_count(charp_substring(self,start_479[0],end_480[0]));
            list$1charph_push_back(group_strings_494,(char*)come_increment_ref_count(charp_substring(self,start_479[0],end_480[0])));
            block_result_496=(char*)come_increment_ref_count(block(parent,match_string_495,group_strings_494));
            buffer_append_str(result_487,block_result_496);
            if(            offset_477==end_480[0]) {
                offset_477++;
            }
            else {
                offset_477=end_480[0];
            }
            if(            !reg->global) {
                str_497=(char*)come_increment_ref_count(charp_substring(self,offset_477,-1));
                buffer_append_str(result_487,str_497);
                str_497 = come_decrement_ref_count2(str_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_493 = come_decrement_ref_count2(str_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_494,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_495 = come_decrement_ref_count2(match_string_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_496 = come_decrement_ref_count2(block_result_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_497 = come_decrement_ref_count2(str_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_493 = come_decrement_ref_count2(str_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_494,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_495 = come_decrement_ref_count2(match_string_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_496 = come_decrement_ref_count2(block_result_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_490>1) {
            str_498=(char*)come_increment_ref_count(charp_substring(self,offset_477,start_479[0]));
            buffer_append_str(result_487,str_498);
            if(            offset_477==end_480[0]) {
                offset_477++;
            }
            else {
                offset_477=end_480[0];
            }
            group_strings_499=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1930, "list$1charph"))));
            for(            i_500=1;            i_500<regex_result_490;            i_500++            ){
                match_string_501=(char*)come_increment_ref_count(charp_substring(self,start_479[i_500],end_480[i_500]));
                list$1charph_push_back(group_strings_499,(char*)come_increment_ref_count(match_string_501));
                match_string_501 = come_decrement_ref_count2(match_string_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_502=(char*)come_increment_ref_count(charp_substring(self,start_479[0],end_480[0]));
            block_result_503=(char*)come_increment_ref_count(block(parent,match_string_502,group_strings_499));
            buffer_append_str(result_487,block_result_503);
            if(            !reg->global) {
                str_504=(char*)come_increment_ref_count(charp_substring(self,offset_477,-1));
                buffer_append_str(result_487,str_504);
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_498 = come_decrement_ref_count2(str_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_502 = come_decrement_ref_count2(match_string_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_503 = come_decrement_ref_count2(block_result_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_498 = come_decrement_ref_count2(str_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_499,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_502 = come_decrement_ref_count2(match_string_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_503 = come_decrement_ref_count2(block_result_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_505=(char*)come_increment_ref_count(charp_substring(self,offset_477,-1));
            buffer_append_str(result_487,str_505);
            str_505 = come_decrement_ref_count2(str_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_505 = come_decrement_ref_count2(str_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value295=buffer_to_string(result_487)));
    /*i*/come_call_finalizer3(result_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
int offset_506;
int ovec_max_507;
const char* err_511;
int erro_ofs_512;
int options_513;
char* str_514;
struct real_pcre8_or_16* re_515;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct buffer* result_516;
int n_517;
int options_518;
int len_519;
int regex_result_520;
int i_521;
int i_522;
void* __right_value298 = (void*)0;
char* str_523;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* group_strings_524;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
char* match_string_525;
void* __right_value303 = (void*)0;
char* block_result_526;
void* __right_value304 = (void*)0;
char* str_527;
void* __right_value305 = (void*)0;
char* str_528;
void* __right_value306 = (void*)0;
char* str_529;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1charph* group_strings_530;
int i_531;
void* __right_value309 = (void*)0;
char* match_string_532;
void* __right_value310 = (void*)0;
char* match_string_533;
void* __right_value311 = (void*)0;
char* block_result_534;
void* __right_value312 = (void*)0;
char* str_535;
void* __right_value313 = (void*)0;
char* str_536;
void* __right_value314 = (void*)0;
char* str_537;
void* __right_value315 = (void*)0;
char* __result141__;
err_511 = (void*)0;
memset(&erro_ofs_512, 0, sizeof(int));
    offset_506=0;
    ovec_max_507=16;
    int start_508[ovec_max_507];
    memset(&start_508, 0, sizeof(int)    *(ovec_max_507)    );
    int end_509[ovec_max_507];
    memset(&end_509, 0, sizeof(int)    *(ovec_max_507)    );
    int ovec_value_510[ovec_max_507*3];
    memset(&ovec_value_510, 0, sizeof(int)    *(ovec_max_507*3)    );
    options_513=reg->options;
    str_514=reg->str;
    re_515=reg->re;
    result_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1976, "buffer"))));
    n_517=0;
    while((_Bool)1) {
        options_518=2097152;
        len_519=strlen(self);
        regex_result_520=pcre_exec(re_515,(struct pcre_extra*)0,self,len_519,offset_506,options_518,ovec_value_510,ovec_max_507*3);
        for(        i_521=0;        i_521<ovec_max_507;        i_521++        ){
            start_508[i_521]=ovec_value_510[i_521*2];
        }
        for(        i_522=0;        i_522<ovec_max_507;        i_522++        ){
            end_509[i_522]=ovec_value_510[i_522*2+1];
        }
        if(        regex_result_520==1) {
            n_517++;
            str_523=(char*)come_increment_ref_count(charp_substring(self,offset_506,start_508[0]));
            buffer_append_str(result_516,str_523);
            group_strings_524=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1999, "list$1charph"))));
            list$1charph_push_back(group_strings_524,(char*)come_increment_ref_count(charp_substring(self,start_508[0],end_509[0])));
            match_string_525=(char*)come_increment_ref_count(charp_substring(self,start_508[0],end_509[0]));
            block_result_526=(char*)come_increment_ref_count(block(parent,match_string_525,group_strings_524));
            buffer_append_str(result_516,block_result_526);
            if(            offset_506==end_509[0]) {
                offset_506++;
            }
            else {
                offset_506=end_509[0];
            }
            if(            !reg->global) {
                str_527=(char*)come_increment_ref_count(charp_substring(self,offset_506,-1));
                buffer_append_str(result_516,str_527);
                str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_523 = come_decrement_ref_count2(str_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_524,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_525 = come_decrement_ref_count2(match_string_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_526 = come_decrement_ref_count2(block_result_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_517==count) {
                str_528=(char*)come_increment_ref_count(charp_substring(self,offset_506,-1));
                buffer_append_str(result_516,str_528);
                str_528 = come_decrement_ref_count2(str_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_523 = come_decrement_ref_count2(str_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_524,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_525 = come_decrement_ref_count2(match_string_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_526 = come_decrement_ref_count2(block_result_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_528 = come_decrement_ref_count2(str_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_523 = come_decrement_ref_count2(str_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_524,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_525 = come_decrement_ref_count2(match_string_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_526 = come_decrement_ref_count2(block_result_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_520>1) {
            n_517++;
            str_529=(char*)come_increment_ref_count(charp_substring(self,offset_506,start_508[0]));
            buffer_append_str(result_516,str_529);
            if(            offset_506==end_509[0]) {
                offset_506++;
            }
            else {
                offset_506=end_509[0];
            }
            group_strings_530=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2042, "list$1charph"))));
            for(            i_531=1;            i_531<regex_result_520;            i_531++            ){
                match_string_532=(char*)come_increment_ref_count(charp_substring(self,start_508[i_531],end_509[i_531]));
                list$1charph_push_back(group_strings_530,(char*)come_increment_ref_count(match_string_532));
                match_string_532 = come_decrement_ref_count2(match_string_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_533=(char*)come_increment_ref_count(charp_substring(self,start_508[0],end_509[0]));
            block_result_534=(char*)come_increment_ref_count(block(parent,match_string_533,group_strings_530));
            buffer_append_str(result_516,block_result_534);
            if(            !reg->global) {
                str_535=(char*)come_increment_ref_count(charp_substring(self,offset_506,-1));
                buffer_append_str(result_516,str_535);
                str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_529 = come_decrement_ref_count2(str_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_533 = come_decrement_ref_count2(match_string_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_534 = come_decrement_ref_count2(block_result_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_517==count) {
                str_536=(char*)come_increment_ref_count(charp_substring(self,offset_506,-1));
                buffer_append_str(result_516,str_536);
                str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_529 = come_decrement_ref_count2(str_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                match_string_533 = come_decrement_ref_count2(match_string_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_534 = come_decrement_ref_count2(block_result_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_529 = come_decrement_ref_count2(str_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            match_string_533 = come_decrement_ref_count2(match_string_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_534 = come_decrement_ref_count2(block_result_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_537=(char*)come_increment_ref_count(charp_substring(self,offset_506,-1));
            buffer_append_str(result_516,str_537);
            str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=buffer_to_string(result_516)));
    /*i*/come_call_finalizer3(result_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_538;
unsigned int* p_539;
    result_538=0;
    p_539=value;
    while(*p_539) {
        result_538+=(*p_539);
        p_539++;
    }
    return result_538;
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
void* __right_value316 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value316=xsprintf("%ls",wc)));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* result_540;
void* __right_value318 = (void*)0;
char* __result143__;
char* __result144__;
    result_540=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_540[string_length(result_540)-1]==10) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value318=string_substring(result_540,0,-2)));
        result_540 = come_decrement_ref_count2(result_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    __result144__ = gComeFunResultObject = __result_obj__ = result_540;
    result_540 = come_decrement_ref_count2(result_540, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* __result145__;
char* result_541;
void* __right_value320 = (void*)0;
char* result2_542;
char* __result146__;
    if(    path==((void*)0)) {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=__builtin_string("")));
        __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    result_541=realpath(path,((void*)0));
    result2_542=(char*)come_increment_ref_count(__builtin_string(result_541));
    free(result_541);
    __result146__ = gComeFunResultObject = __result_obj__ = result2_542;
    result2_542 = come_decrement_ref_count2(result2_542, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result147__;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __result148__;
    if(    path==((void*)0)) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string("")));
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string(dirname(((char*)(__right_value322=__builtin_string(path)))))));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

unsigned long unsigned  int xwcslen(unsigned int* wstr){
unsigned int* p_543;
unsigned long unsigned  int len_544;
    p_543=wstr;
    len_544=0;
    while(*p_543) {
        p_543++;
        len_544++;
    }
    return len_544;
}

