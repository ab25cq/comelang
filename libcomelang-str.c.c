/// previous struct definition ///
struct __locale_struct;

struct real_pcre8_or_16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

struct tm;

/// struct definition ///
typedef unsigned long  int size_t;

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
typedef long (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long  int);
    long (*write)(void*,const char*,unsigned long  int);
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

extern void* gComeFunResultObject;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;

struct buffer
{
    char* buf;
    int len;
    int size;
};

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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

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

typedef struct real_pcre8_or_16 pcre;

typedef struct real_pcre8_or_16 pcre16;

typedef struct real_pcre32 pcre32;

typedef struct real_pcre_jit_stack pcre_jit_stack;

typedef struct real_pcre16_jit_stack pcre16_jit_stack;

typedef struct real_pcre32_jit_stack pcre32_jit_stack;

struct pcre_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};

typedef struct pcre_extra pcre_extra;

struct pcre16_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};

typedef struct pcre16_extra pcre16_extra;

struct pcre32_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
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

extern void* (*pcre_malloc)(unsigned long  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);

typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);

typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);

typedef unsigned int wint_t;

typedef unsigned long  int wctype_t;

struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};

typedef struct __mbstate_t mbstate_t;

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

struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

// source head

// header function
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
unsigned long  int fread(void* anonymous_var_nameX23, unsigned long  int anonymous_var_nameX24, unsigned long  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long  int fwrite(const void* anonymous_var_nameX27, unsigned long  int anonymous_var_nameX28, unsigned long  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
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
int snprintf(char* anonymous_var_nameX51, unsigned long  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long  int* anonymous_var_nameX91);
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
long getdelim(char** anonymous_var_nameX114, unsigned long  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long  int fread_unlocked(void* anonymous_var_nameX137, unsigned long  int anonymous_var_nameX138, unsigned long  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long  int anonymous_var_nameX142, unsigned long  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long  int* anonymous_var_nameX153);
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
unsigned long  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long  int anonymous_var_nameX200);
void* calloc(unsigned long  int anonymous_var_nameX201, unsigned long  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long  int anonymous_var_nameX206, unsigned long  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215, unsigned long  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long  int anonymous_var_nameX220, unsigned long  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
unsigned long  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247, unsigned long  int anonymous_var_nameX248);
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
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long  int anonymous_var_nameX266);
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
void* alloca(unsigned long  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long  int anonymous_var_nameX289);
void* memalign(unsigned long  int anonymous_var_nameX290, unsigned long  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long  int anonymous_var_nameX298, unsigned long  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long  int anonymous_var_nameX416);
unsigned long  int strnlen(const char* anonymous_var_nameX417, unsigned long  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long  int anonymous_var_nameX444);
unsigned long  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
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
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
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
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
static void va_list_finalize(va_list self);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
char* buffer_printable(struct buffer* self);
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
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
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
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
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
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
char* charp_printable(char* str);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
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
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX831, int anonymous_var_nameX832, const char** anonymous_var_nameX833, int* anonymous_var_nameX834, const unsigned char* anonymous_var_nameX835);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX836, int anonymous_var_nameX837, const char** anonymous_var_nameX838, int* anonymous_var_nameX839, const unsigned char* anonymous_var_nameX840);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX841, int anonymous_var_nameX842, const char** anonymous_var_nameX843, int* anonymous_var_nameX844, const unsigned char* anonymous_var_nameX845);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX846, int anonymous_var_nameX847, int* anonymous_var_nameX848, const char** anonymous_var_nameX849, int* anonymous_var_nameX850, const unsigned char* anonymous_var_nameX851);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX852, int anonymous_var_nameX853, int* anonymous_var_nameX854, const char** anonymous_var_nameX855, int* anonymous_var_nameX856, const unsigned char* anonymous_var_nameX857);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX858, int anonymous_var_nameX859, int* anonymous_var_nameX860, const char** anonymous_var_nameX861, int* anonymous_var_nameX862, const unsigned char* anonymous_var_nameX863);
int pcre_config(int anonymous_var_nameX864, void* anonymous_var_nameX865);
int pcre16_config(int anonymous_var_nameX866, void* anonymous_var_nameX867);
int pcre32_config(int anonymous_var_nameX868, void* anonymous_var_nameX869);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX870, const char* anonymous_var_nameX871, int* anonymous_var_nameX872, int anonymous_var_nameX873, const char* anonymous_var_nameX874, char* anonymous_var_nameX875, int anonymous_var_nameX876);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX877, const unsigned short int* anonymous_var_nameX878, int* anonymous_var_nameX879, int anonymous_var_nameX880, const unsigned short int* anonymous_var_nameX881, unsigned short int* anonymous_var_nameX882, int anonymous_var_nameX883);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX884, const unsigned int* anonymous_var_nameX885, int* anonymous_var_nameX886, int anonymous_var_nameX887, const unsigned int* anonymous_var_nameX888, unsigned int* anonymous_var_nameX889, int anonymous_var_nameX890);
int pcre_copy_substring(const char* anonymous_var_nameX891, int* anonymous_var_nameX892, int anonymous_var_nameX893, int anonymous_var_nameX894, char* anonymous_var_nameX895, int anonymous_var_nameX896);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX897, int* anonymous_var_nameX898, int anonymous_var_nameX899, int anonymous_var_nameX900, unsigned short int* anonymous_var_nameX901, int anonymous_var_nameX902);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX903, int* anonymous_var_nameX904, int anonymous_var_nameX905, int anonymous_var_nameX906, unsigned int* anonymous_var_nameX907, int anonymous_var_nameX908);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX909, const struct pcre_extra* anonymous_var_nameX910, const char* anonymous_var_nameX911, int anonymous_var_nameX912, int anonymous_var_nameX913, int anonymous_var_nameX914, int* anonymous_var_nameX915, int anonymous_var_nameX916, int* anonymous_var_nameX917, int anonymous_var_nameX918);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX919, const struct pcre16_extra* anonymous_var_nameX920, const unsigned short int* anonymous_var_nameX921, int anonymous_var_nameX922, int anonymous_var_nameX923, int anonymous_var_nameX924, int* anonymous_var_nameX925, int anonymous_var_nameX926, int* anonymous_var_nameX927, int anonymous_var_nameX928);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX929, const struct pcre32_extra* anonymous_var_nameX930, const unsigned int* anonymous_var_nameX931, int anonymous_var_nameX932, int anonymous_var_nameX933, int anonymous_var_nameX934, int* anonymous_var_nameX935, int anonymous_var_nameX936, int* anonymous_var_nameX937, int anonymous_var_nameX938);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX939, const struct pcre_extra* anonymous_var_nameX940, const char* anonymous_var_nameX941, int anonymous_var_nameX942, int anonymous_var_nameX943, int anonymous_var_nameX944, int* anonymous_var_nameX945, int anonymous_var_nameX946);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX947, const struct pcre16_extra* anonymous_var_nameX948, const unsigned short int* anonymous_var_nameX949, int anonymous_var_nameX950, int anonymous_var_nameX951, int anonymous_var_nameX952, int* anonymous_var_nameX953, int anonymous_var_nameX954);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX955, const struct pcre32_extra* anonymous_var_nameX956, const unsigned int* anonymous_var_nameX957, int anonymous_var_nameX958, int anonymous_var_nameX959, int anonymous_var_nameX960, int* anonymous_var_nameX961, int anonymous_var_nameX962);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX963, const struct pcre_extra* anonymous_var_nameX964, const char* anonymous_var_nameX965, int anonymous_var_nameX966, int anonymous_var_nameX967, int anonymous_var_nameX968, int* anonymous_var_nameX969, int anonymous_var_nameX970, struct real_pcre_jit_stack* anonymous_var_nameX971);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX972, const struct pcre16_extra* anonymous_var_nameX973, const unsigned short int* anonymous_var_nameX974, int anonymous_var_nameX975, int anonymous_var_nameX976, int anonymous_var_nameX977, int* anonymous_var_nameX978, int anonymous_var_nameX979, struct real_pcre16_jit_stack* anonymous_var_nameX980);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX981, const struct pcre32_extra* anonymous_var_nameX982, const unsigned int* anonymous_var_nameX983, int anonymous_var_nameX984, int anonymous_var_nameX985, int anonymous_var_nameX986, int* anonymous_var_nameX987, int anonymous_var_nameX988, struct real_pcre32_jit_stack* anonymous_var_nameX989);
void pcre_free_substring(const char* anonymous_var_nameX990);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX991);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX992);
void pcre_free_substring_list(const char** anonymous_var_nameX993);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX994);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX995);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX996, const struct pcre_extra* anonymous_var_nameX997, int anonymous_var_nameX998, void* anonymous_var_nameX999);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX1000, const struct pcre16_extra* anonymous_var_nameX1001, int anonymous_var_nameX1002, void* anonymous_var_nameX1003);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX1004, const struct pcre32_extra* anonymous_var_nameX1005, int anonymous_var_nameX1006, void* anonymous_var_nameX1007);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX1008, const char* anonymous_var_nameX1009, int* anonymous_var_nameX1010, int anonymous_var_nameX1011, const char* anonymous_var_nameX1012, const char** anonymous_var_nameX1013);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX1014, const unsigned short int* anonymous_var_nameX1015, int* anonymous_var_nameX1016, int anonymous_var_nameX1017, const unsigned short int* anonymous_var_nameX1018, const unsigned short int** anonymous_var_nameX1019);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX1020, const unsigned int* anonymous_var_nameX1021, int* anonymous_var_nameX1022, int anonymous_var_nameX1023, const unsigned int* anonymous_var_nameX1024, const unsigned int** anonymous_var_nameX1025);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX1026, const char* anonymous_var_nameX1027);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX1028, const unsigned short int* anonymous_var_nameX1029);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX1030, const unsigned int* anonymous_var_nameX1031);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX1032, const char* anonymous_var_nameX1033, char** anonymous_var_nameX1034, char** anonymous_var_nameX1035);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX1036, const unsigned short int* anonymous_var_nameX1037, unsigned short int** anonymous_var_nameX1038, unsigned short int** anonymous_var_nameX1039);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX1040, const unsigned int* anonymous_var_nameX1041, unsigned int** anonymous_var_nameX1042, unsigned int** anonymous_var_nameX1043);
int pcre_get_substring(const char* anonymous_var_nameX1044, int* anonymous_var_nameX1045, int anonymous_var_nameX1046, int anonymous_var_nameX1047, const char** anonymous_var_nameX1048);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX1049, int* anonymous_var_nameX1050, int anonymous_var_nameX1051, int anonymous_var_nameX1052, const unsigned short int** anonymous_var_nameX1053);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX1054, int* anonymous_var_nameX1055, int anonymous_var_nameX1056, int anonymous_var_nameX1057, const unsigned int** anonymous_var_nameX1058);
int pcre_get_substring_list(const char* anonymous_var_nameX1059, int* anonymous_var_nameX1060, int anonymous_var_nameX1061, const char*** anonymous_var_nameX1062);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX1063, int* anonymous_var_nameX1064, int anonymous_var_nameX1065, const unsigned short int*** anonymous_var_nameX1066);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX1067, int* anonymous_var_nameX1068, int anonymous_var_nameX1069, const unsigned int*** anonymous_var_nameX1070);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX1071, int anonymous_var_nameX1072);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX1073, int anonymous_var_nameX1074);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX1075, int anonymous_var_nameX1076);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX1077, int anonymous_var_nameX1078, const char** anonymous_var_nameX1079);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX1080, int anonymous_var_nameX1081, const char** anonymous_var_nameX1082);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX1083, int anonymous_var_nameX1084, const char** anonymous_var_nameX1085);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX1086);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX1087);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX1088);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1089, struct pcre_extra* anonymous_var_nameX1090, const unsigned char* anonymous_var_nameX1091);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1092, struct pcre16_extra* anonymous_var_nameX1093, const unsigned char* anonymous_var_nameX1094);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX1095, struct pcre32_extra* anonymous_var_nameX1096, const unsigned char* anonymous_var_nameX1097);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX1098, const unsigned short int* anonymous_var_nameX1099, int anonymous_var_nameX1100, int* anonymous_var_nameX1101, int anonymous_var_nameX1102);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX1103, const unsigned int* anonymous_var_nameX1104, int anonymous_var_nameX1105, int* anonymous_var_nameX1106, int anonymous_var_nameX1107);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX1108, int anonymous_var_nameX1109);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX1110, int anonymous_var_nameX1111);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX1112, int anonymous_var_nameX1113);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX1114);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX1115);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX1116);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX1117, struct real_pcre_jit_stack* (*anonymous_var_nameX1118)(void*), void* anonymous_var_nameX1119);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX1120, struct real_pcre16_jit_stack* (*anonymous_var_nameX1121)(void*), void* anonymous_var_nameX1122);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX1123, struct real_pcre32_jit_stack* (*anonymous_var_nameX1124)(void*), void* anonymous_var_nameX1125);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
unsigned int* wcscpy(unsigned int* anonymous_var_nameX1126, const unsigned int* anonymous_var_nameX1127);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX1128, const unsigned int* anonymous_var_nameX1129, unsigned long  int anonymous_var_nameX1130);
unsigned int* wcscat(unsigned int* anonymous_var_nameX1131, const unsigned int* anonymous_var_nameX1132);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX1133, const unsigned int* anonymous_var_nameX1134, unsigned long  int anonymous_var_nameX1135);
int wcscmp(const unsigned int* anonymous_var_nameX1136, const unsigned int* anonymous_var_nameX1137);
int wcsncmp(const unsigned int* anonymous_var_nameX1138, const unsigned int* anonymous_var_nameX1139, unsigned long  int anonymous_var_nameX1140);
int wcscoll(const unsigned int* anonymous_var_nameX1141, const unsigned int* anonymous_var_nameX1142);
unsigned long  int wcsxfrm(unsigned int* anonymous_var_nameX1143, const unsigned int* anonymous_var_nameX1144, unsigned long  int anonymous_var_nameX1145);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX1146, unsigned int anonymous_var_nameX1147);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX1148, unsigned int anonymous_var_nameX1149);
unsigned long  int wcscspn(const unsigned int* anonymous_var_nameX1150, const unsigned int* anonymous_var_nameX1151);
unsigned long  int wcsspn(const unsigned int* anonymous_var_nameX1152, const unsigned int* anonymous_var_nameX1153);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX1154, const unsigned int* anonymous_var_nameX1155);
unsigned int* wcstok(unsigned int* anonymous_var_nameX1156, const unsigned int* anonymous_var_nameX1157, unsigned int** anonymous_var_nameX1158);
unsigned long  int wcslen(const unsigned int* anonymous_var_nameX1159);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX1160, const unsigned int* anonymous_var_nameX1161);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX1162, const unsigned int* anonymous_var_nameX1163);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX1164, unsigned int anonymous_var_nameX1165, unsigned long  int anonymous_var_nameX1166);
int wmemcmp(const unsigned int* anonymous_var_nameX1167, const unsigned int* anonymous_var_nameX1168, unsigned long  int anonymous_var_nameX1169);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX1170, const unsigned int* anonymous_var_nameX1171, unsigned long  int anonymous_var_nameX1172);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX1173, const unsigned int* anonymous_var_nameX1174, unsigned long  int anonymous_var_nameX1175);
unsigned int* wmemset(unsigned int* anonymous_var_nameX1176, unsigned int anonymous_var_nameX1177, unsigned long  int anonymous_var_nameX1178);
unsigned int btowc(int anonymous_var_nameX1179);
int wctob(unsigned int anonymous_var_nameX1180);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX1181);
unsigned long  int mbrtowc(unsigned int* anonymous_var_nameX1182, const char* anonymous_var_nameX1183, unsigned long  int anonymous_var_nameX1184, struct __mbstate_t* anonymous_var_nameX1185);
unsigned long  int wcrtomb(char* anonymous_var_nameX1186, unsigned int anonymous_var_nameX1187, struct __mbstate_t* anonymous_var_nameX1188);
unsigned long  int mbrlen(const char* anonymous_var_nameX1189, unsigned long  int anonymous_var_nameX1190, struct __mbstate_t* anonymous_var_nameX1191);
unsigned long  int mbsrtowcs(unsigned int* anonymous_var_nameX1192, const char** anonymous_var_nameX1193, unsigned long  int anonymous_var_nameX1194, struct __mbstate_t* anonymous_var_nameX1195);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1196, const unsigned int** anonymous_var_nameX1197, unsigned long  int anonymous_var_nameX1198, struct __mbstate_t* anonymous_var_nameX1199);
float wcstof(const unsigned int* anonymous_var_nameX1200, unsigned int** anonymous_var_nameX1201);
double wcstod(const unsigned int* anonymous_var_nameX1202, unsigned int** anonymous_var_nameX1203);
long  double wcstold(const unsigned int* anonymous_var_nameX1204, unsigned int** anonymous_var_nameX1205);
long wcstol(const unsigned int* anonymous_var_nameX1206, unsigned int** anonymous_var_nameX1207, int anonymous_var_nameX1208);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX1209, unsigned int** anonymous_var_nameX1210, int anonymous_var_nameX1211);
long long wcstoll(const unsigned int* anonymous_var_nameX1212, unsigned int** anonymous_var_nameX1213, int anonymous_var_nameX1214);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX1215, unsigned int** anonymous_var_nameX1216, int anonymous_var_nameX1217);
int fwide(struct _IO_FILE* anonymous_var_nameX1218, int anonymous_var_nameX1219);
int wprintf(const unsigned int* anonymous_var_nameX1220, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX1221, const unsigned int* anonymous_var_nameX1222, ...);
int swprintf(unsigned int* anonymous_var_nameX1223, unsigned long  int anonymous_var_nameX1224, const unsigned int* anonymous_var_nameX1225, ...);
int vwprintf(const unsigned int* anonymous_var_nameX1226, va_list anonymous_var_nameX1227);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX1228, const unsigned int* anonymous_var_nameX1229, va_list anonymous_var_nameX1230);
int vswprintf(unsigned int* anonymous_var_nameX1231, unsigned long  int anonymous_var_nameX1232, const unsigned int* anonymous_var_nameX1233, va_list anonymous_var_nameX1234);
int wscanf(const unsigned int* anonymous_var_nameX1235, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX1236, const unsigned int* anonymous_var_nameX1237, ...);
int swscanf(const unsigned int* anonymous_var_nameX1238, const unsigned int* anonymous_var_nameX1239, ...);
int vwscanf(const unsigned int* anonymous_var_nameX1240, va_list anonymous_var_nameX1241);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX1242, const unsigned int* anonymous_var_nameX1243, va_list anonymous_var_nameX1244);
int vswscanf(const unsigned int* anonymous_var_nameX1245, const unsigned int* anonymous_var_nameX1246, va_list anonymous_var_nameX1247);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1248);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1249);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX1250, struct _IO_FILE* anonymous_var_nameX1251);
unsigned int putwc(unsigned int anonymous_var_nameX1252, struct _IO_FILE* anonymous_var_nameX1253);
unsigned int putwchar(unsigned int anonymous_var_nameX1254);
unsigned int* fgetws(unsigned int* anonymous_var_nameX1255, int anonymous_var_nameX1256, struct _IO_FILE* anonymous_var_nameX1257);
int fputws(const unsigned int* anonymous_var_nameX1258, struct _IO_FILE* anonymous_var_nameX1259);
unsigned int ungetwc(unsigned int anonymous_var_nameX1260, struct _IO_FILE* anonymous_var_nameX1261);
unsigned long  int wcsftime(unsigned int* anonymous_var_nameX1262, unsigned long  int anonymous_var_nameX1263, const unsigned int* anonymous_var_nameX1264, const struct tm* anonymous_var_nameX1265);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1266);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1267);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1268, struct _IO_FILE* anonymous_var_nameX1269);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1270, struct _IO_FILE* anonymous_var_nameX1271);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1272);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1273, int anonymous_var_nameX1274, struct _IO_FILE* anonymous_var_nameX1275);
int fputws_unlocked(const unsigned int* anonymous_var_nameX1276, struct _IO_FILE* anonymous_var_nameX1277);
unsigned long  int wcsftime_l(unsigned int* anonymous_var_nameX1278, unsigned long  int anonymous_var_nameX1279, const unsigned int* anonymous_var_nameX1280, const struct tm* anonymous_var_nameX1281, struct __locale_struct* anonymous_var_nameX1282);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1283, unsigned long  int* anonymous_var_nameX1284);
unsigned long  int mbsnrtowcs(unsigned int* anonymous_var_nameX1285, const char** anonymous_var_nameX1286, unsigned long  int anonymous_var_nameX1287, unsigned long  int anonymous_var_nameX1288, struct __mbstate_t* anonymous_var_nameX1289);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1290, const unsigned int** anonymous_var_nameX1291, unsigned long  int anonymous_var_nameX1292, unsigned long  int anonymous_var_nameX1293, struct __mbstate_t* anonymous_var_nameX1294);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1295);
unsigned long  int wcsnlen(const unsigned int* anonymous_var_nameX1296, unsigned long  int anonymous_var_nameX1297);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1298, const unsigned int* anonymous_var_nameX1299);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1300, const unsigned int* anonymous_var_nameX1301, unsigned long  int anonymous_var_nameX1302);
int wcscasecmp(const unsigned int* anonymous_var_nameX1303, const unsigned int* anonymous_var_nameX1304);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX1305, const unsigned int* anonymous_var_nameX1306, struct __locale_struct* anonymous_var_nameX1307);
int wcsncasecmp(const unsigned int* anonymous_var_nameX1308, const unsigned int* anonymous_var_nameX1309, unsigned long  int anonymous_var_nameX1310);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1311, const unsigned int* anonymous_var_nameX1312, unsigned long  int anonymous_var_nameX1313, struct __locale_struct* anonymous_var_nameX1314);
int wcscoll_l(const unsigned int* anonymous_var_nameX1315, const unsigned int* anonymous_var_nameX1316, struct __locale_struct* anonymous_var_nameX1317);
unsigned long  int wcsxfrm_l(unsigned int* anonymous_var_nameX1318, const unsigned int* anonymous_var_nameX1319, unsigned long  int anonymous_var_nameX1320, struct __locale_struct* anonymous_var_nameX1321);
int wcwidth(unsigned int anonymous_var_nameX1322);
int wcswidth(const unsigned int* anonymous_var_nameX1323, unsigned long  int anonymous_var_nameX1324);
int iswalnum(unsigned int anonymous_var_nameX1325);
int iswalpha(unsigned int anonymous_var_nameX1326);
int iswblank(unsigned int anonymous_var_nameX1327);
int iswcntrl(unsigned int anonymous_var_nameX1328);
int iswdigit(unsigned int anonymous_var_nameX1329);
int iswgraph(unsigned int anonymous_var_nameX1330);
int iswlower(unsigned int anonymous_var_nameX1331);
int iswprint(unsigned int anonymous_var_nameX1332);
int iswpunct(unsigned int anonymous_var_nameX1333);
int iswspace(unsigned int anonymous_var_nameX1334);
int iswupper(unsigned int anonymous_var_nameX1335);
int iswxdigit(unsigned int anonymous_var_nameX1336);
int iswctype(unsigned int anonymous_var_nameX1337, unsigned long  int anonymous_var_nameX1338);
unsigned int towlower(unsigned int anonymous_var_nameX1339);
unsigned int towupper(unsigned int anonymous_var_nameX1340);
unsigned long  int wctype(const char* anonymous_var_nameX1341);
char* dirname(char* anonymous_var_nameX1342);
char* basename(char* anonymous_var_nameX1343);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* reg);
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
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
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
unsigned long  int xwcslen(unsigned int* wstr);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3599, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3606, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3615, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3622, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3629, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3636, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 3643, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 3971, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 3976, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 3981, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 3986, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 3991, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4024, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4031, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 4033, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4038, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 4040, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4045, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 4047, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4052, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 4054, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4059, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 4061, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 4066, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 4068, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 4073, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 4078, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 4083, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 4088, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 4093, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 4098, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 4103, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 4108, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 4113, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 4118, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 4123, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 4128, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 4133, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 4138, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}
static unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
unsigned int* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value245=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}
static int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
struct list$1charph* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value246=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value246,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}
static struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
struct list$1charph* __result200__;
    __result200__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value247=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value247,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result200__;
}
static struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
struct list$1charph* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value248=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value248,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}
static struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list$1charph* __result202__;
    __result202__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value249=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value249,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result202__;
}
static struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
struct list$1charph* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value250=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value250,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}
static char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=charp_strip(self)));
    /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}
static unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
unsigned int* __result205__;
    __result205__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value252=charp_to_wstring(str)));
    /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result205__;
}
static char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result206__;
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=wchar_tp_to_string(wstr)));
    /* U11 */__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result206__;
}
static unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
unsigned int* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value255=string_to_wstring(((char*)(__right_value254=xsprintf("%d",self))))));
    /* U11 */__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}
static int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
unsigned int* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value256=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}
static int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
unsigned int* __result209__;
    __result209__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value257=wchar_tp_reverse(str)));
    /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result209__;
}
static unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
unsigned int* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value258=wchar_tp_multiply(str,n)));
    /* U11 */__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}
static unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
unsigned int* __result211__;
    __result211__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value259=wchar_tp_printable(str)));
    /* U11 */__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result211__;
}
static unsigned int wstring_get_hash_key(unsigned int* value){
    return wchar_tp_get_hash_key(value);
}
static _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=charp_replace(self,index,c)));
    /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}
static char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result213__;
    __result213__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=charp_multiply(str,n)));
    /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result213__;
}
static char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
char* __result214__;
    __result214__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=charp_sub(self,reg,replace)));
    /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result214__;
}
static char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}
static struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list$1charph* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value264=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value264,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}
static struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list$1charph* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value265=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value265,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}
static struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list$1charph* __result218__;
    __result218__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value266=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value266,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}
static _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list$1charph* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value267=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value267,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result219__;
}
static int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value268=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}
static char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}
static char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=string_chomp(str)));
    /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

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

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
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

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1106, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1116, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 1126, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1106, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1116, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 1126, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1106, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1116, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 1126, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1106, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1116, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 1126, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1106, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1116, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 1126, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1106, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1116, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 1126, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1106, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1116, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 1126, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1900, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1900, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "comelang.h", 1900, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1900, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1900, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1900, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1900, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1106, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1116, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 1126, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_247;
int erro_ofs_248;
int options_249;
void* __right_value272 = (void*)0;
char* __dec_obj32;
struct come_regex* __null_value1;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct tuple2$2come_regexphcharph* __result225__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct tuple2$2come_regexphcharph* __result227__;
err_247 = (void*)0;
memset(&erro_ofs_248, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_249=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj32=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_249;
    self->re=pcre_compile(str,options_249,&err_247,&erro_ofs_248,((void*)0));
    if(    self->re==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value276=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value273=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value276,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value278=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value278,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj33;
char* __dec_obj34;
struct tuple2$2come_regexphcharph* __result224__;
    __dec_obj33=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj33,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj34=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self){
struct come_regex* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj36=self->v2;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj37;
struct tuple2$2come_regexphvoidp* __result226__;
    __dec_obj37=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj37,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self){
struct come_regex* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        /* U13 */reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_250=0;
char* Err_251=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple2$2come_regexphcharph* __result228__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct tuple2$2come_regexphcharph* __result229__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value280=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_250=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_251=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_251)),    /*f*/come_call_finalizer3(__right_value280,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value282=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_251))));
        /*i*/come_call_finalizer3(come_exception_var_b1_250,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_251 = come_decrement_ref_count2(Err_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value282,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value284=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_250),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_250,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_251 = come_decrement_ref_count2(Err_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value284,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_252=0;
char* Err_253=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct tuple2$2come_regexphcharph* __result230__;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct tuple2$2come_regexphcharph* __result231__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value286=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_252=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_253=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_253)),    /*f*/come_call_finalizer3(__right_value286,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value288=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_253))));
        /*i*/come_call_finalizer3(come_exception_var_b2_252,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_253 = come_decrement_ref_count2(Err_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value288,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value290=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_252),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_252,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_253 = come_decrement_ref_count2(Err_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value290,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result232__;
void* __right_value291 = (void*)0;
struct come_regex* result_254;
void* __right_value292 = (void*)0;
char* __dec_obj39;
const char* err_255;
int erro_ofs_256;
struct come_regex* __result233__;
err_255 = (void*)0;
memset(&erro_ofs_256, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_254=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj39=result_254->str;
    result_254->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_254->ignore_case=reg->ignore_case;
    result_254->multiline=reg->multiline;
    result_254->global=reg->global;
    result_254->extended=reg->extended;
    result_254->dotall=reg->dotall;
    result_254->anchored=reg->anchored;
    result_254->dollar_endonly=reg->dollar_endonly;
    result_254->ungreedy=reg->ungreedy;
    result_254->options=reg->options;
    result_254->re=pcre_compile(result_254->str,result_254->options,&err_255,&erro_ofs_256,((void*)0));
    if(    result_254->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_254->str);
        stackframe();
        exit(1);
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_254;
    /*i*/come_call_finalizer3(result_254,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
char* __result234__;
void* __right_value294 = (void*)0;
char* __result235__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value293=__builtin_string("")));
        /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value294=__builtin_string(reg->str)));
    /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
char* result_257;
int i_258;
char* __result236__;
    result_257=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_258=0;    i_258<strlen(str);    i_258++    ){
        if(        str[i_258]>=65&&str[i_258]<=90) {
            result_257[i_258]=str[i_258]-65+97;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_257;
    /* U13 */result_257 = come_decrement_ref_count2(result_257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* result_259;
int i_260;
char* __result237__;
    result_259=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_260=0;    i_260<strlen(str);    i_260++    ){
        if(        str[i_260]>=97&&str[i_260]<=122) {
            result_259[i_260]=str[i_260]-97+65;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_259;
    /* U13 */result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
unsigned int* __result238__;
int len_261;
void* __right_value298 = (void*)0;
unsigned int* __result239__;
void* __right_value299 = (void*)0;
unsigned int* __result240__;
void* __right_value300 = (void*)0;
unsigned int* __result241__;
void* __right_value301 = (void*)0;
unsigned int* result_262;
unsigned int* __result242__;
    if(    str==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value297=__builtin_wstring("")));
        /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    len_261=wcslen(str);
    if(    head<0) {
        head+=len_261;
    }
    if(    tail<0) {
        tail+=len_261+1;
    }
    if(    head>tail) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value298=__builtin_wstring("")));
        /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_261) {
        tail=len_261;
    }
    if(    head==tail) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value299=__builtin_wstring("")));
        /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    if(    tail-head+1<1) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value300=__builtin_wstring("")));
        /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_262=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_262,str+head,sizeof(unsigned int)*(tail-head));
    result_262[tail-head]=0;
    __result242__ = gComeFunResultObject = __result_obj__ = result_262;
    /* U13 */result_262 = come_decrement_ref_count2(result_262, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result243__;
int len_263;
void* __right_value302 = (void*)0;
unsigned int* wstr_264;
int ret_265;
unsigned int* __result244__;
    if(    str==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    len_263=strlen(str);
    wstr_264=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_263+1)), "libcomelang-str.c", 200, "int"));
    ret_265=mbstowcs(wstr_264,str,len_263+1);
    wstr_264[ret_265]=0;
    if(    ret_265<0) {
        wstr_264[0]=0;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = wstr_264;
    /* U13 */wstr_264 = come_decrement_ref_count2(wstr_264, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_266;
int len_267;
int i_268;
int len2_269;
int j_270;
memset(&j_270, 0, sizeof(int));
    n_266=0;
    len_267=strlen(str);
    for(    i_268=0;    i_268<len_267;    i_268++    ){
        len2_269=strlen(search_str);
        for(        j_270=0;        j_270<len2_269;        j_270++        ){
            if(            str[i_268+j_270]!=search_str[j_270]) {
                break;
            }
        }
        if(        j_270==len2_269) {
            n_266++;
            if(            n_266==count) {
                return i_268;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_271;
int result_275;
int offset_276;
const char* err_277;
int erro_ofs_278;
int options_279;
char* str_280;
struct real_pcre8_or_16* re_281;
int n_282;
int options_283;
int len_284;
int regex_result_285;
int i_286;
int i_287;
err_277 = (void*)0;
memset(&erro_ofs_278, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_271=16;
    int start_272[ovec_max_271];
    memset(&start_272, 0, sizeof(int)    *(ovec_max_271)    );
    int end_273[ovec_max_271];
    memset(&end_273, 0, sizeof(int)    *(ovec_max_271)    );
    int ovec_value_274[ovec_max_271*3];
    memset(&ovec_value_274, 0, sizeof(int)    *(ovec_max_271*3)    );
    result_275=default_value;
    offset_276=0;
    options_279=reg->options;
    str_280=reg->str;
    re_281=reg->re;
    n_282=0;
    while((_Bool)1) {
        options_283=2097152;
        len_284=strlen(self);
        regex_result_285=pcre_exec(re_281,(struct pcre_extra*)0,self,len_284,offset_276,options_283,ovec_value_274,ovec_max_271*3);
        for(        i_286=0;        i_286<ovec_max_271;        i_286++        ){
            start_272[i_286]=ovec_value_274[i_286*2];
        }
        for(        i_287=0;        i_287<ovec_max_271;        i_287++        ){
            end_273[i_287]=ovec_value_274[i_287*2+1];
        }
        if(        regex_result_285>0) {
            n_282++;
            if(            offset_276==end_273[0]) {
                offset_276++;
            }
            else {
                offset_276=end_273[0];
            }
            if(            n_282==count) {
                result_275=start_272[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_275;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_288;
char* p_289;
    len_288=strlen(search_str);
    p_289=str+strlen(str)-len_288;
    while(p_289>=str) {
        if(        strncmp(p_289,search_str,len_288)==0) {
            return p_289-str;
        }
        p_289--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_290;
int erro_ofs_291;
int options_292;
char* str_293;
struct real_pcre8_or_16* re_294;
void* __right_value303 = (void*)0;
char* self2_295;
int ovec_max_296;
int result_300;
int offset_301;
int options_302;
int len_303;
int regex_result_304;
int i_305;
int i_306;
int __result245__;
err_290 = (void*)0;
memset(&erro_ofs_291, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_292=reg->options;
    str_293=reg->str;
    re_294=reg->re;
    self2_295=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_296=16;
    int start_297[ovec_max_296];
    memset(&start_297, 0, sizeof(int)    *(ovec_max_296)    );
    int end_298[ovec_max_296];
    memset(&end_298, 0, sizeof(int)    *(ovec_max_296)    );
    int ovec_value_299[ovec_max_296*3];
    memset(&ovec_value_299, 0, sizeof(int)    *(ovec_max_296*3)    );
    result_300=default_value;
    offset_301=0;
    while((_Bool)1) {
        options_302=2097152;
        len_303=strlen(self2_295);
        regex_result_304=pcre_exec(re_294,(struct pcre_extra*)0,self2_295,len_303,offset_301,options_302,ovec_value_299,ovec_max_296*3);
        for(        i_305=0;        i_305<ovec_max_296;        i_305++        ){
            start_297[i_305]=ovec_value_299[i_305*2];
        }
        for(        i_306=0;        i_306<ovec_max_296;        i_306++        ){
            end_298[i_306]=ovec_value_299[i_306*2+1];
        }
        if(        regex_result_304==1||regex_result_304>0) {
            result_300=strlen(self)-1-start_297[0];
            break;
        }
        {
            break;
        }
    }
    __result245__ = result_300;
    /* U13 */self2_295 = come_decrement_ref_count2(self2_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result245__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_307;
char* p_308;
int n_309;
    len_307=strlen(search_str);
    p_308=str+strlen(str)-len_307;
    n_309=0;
    while(p_308>=str) {
        if(        strncmp(p_308,search_str,len_307)==0) {
            n_309++;
            if(            n_309==count) {
                return p_308-str;
            }
        }
        p_308--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1charph* __result246__;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1charph* result_310;
int offset_311;
int ovec_max_312;
const char* err_316;
int erro_ofs_317;
int options_318;
char* str_319;
struct real_pcre8_or_16* re_320;
int options_321;
int len_322;
int regex_result_323;
int i_324;
int i_325;
void* __right_value308 = (void*)0;
char* str_326;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1charph* group_strings_327;
void* __right_value311 = (void*)0;
char* str2_328;
void* __right_value312 = (void*)0;
char* str_329;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* group_strings_330;
int i_331;
void* __right_value315 = (void*)0;
char* match_string_332;
void* __right_value316 = (void*)0;
char* str2_333;
struct list$1charph* __result247__;
err_316 = (void*)0;
memset(&erro_ofs_317, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result246__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value305=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value305,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_311=0;
    ovec_max_312=16;
    int start_313[ovec_max_312];
    memset(&start_313, 0, sizeof(int)    *(ovec_max_312)    );
    int end_314[ovec_max_312];
    memset(&end_314, 0, sizeof(int)    *(ovec_max_312)    );
    int ovec_value_315[ovec_max_312*3];
    memset(&ovec_value_315, 0, sizeof(int)    *(ovec_max_312*3)    );
    options_318=reg->options;
    str_319=reg->str;
    re_320=reg->re;
    while((_Bool)1) {
        options_321=2097152;
        len_322=strlen(self);
        regex_result_323=pcre_exec(re_320,(struct pcre_extra*)0,self,len_322,offset_311,options_321,ovec_value_315,ovec_max_312*3);
        for(        i_324=0;        i_324<ovec_max_312;        i_324++        ){
            start_313[i_324]=ovec_value_315[i_324*2];
        }
        for(        i_325=0;        i_325<ovec_max_312;        i_325++        ){
            end_314[i_325]=ovec_value_315[i_325*2+1];
        }
        if(        regex_result_323==1) {
            str_326=(char*)come_increment_ref_count(charp_substring(self,start_313[0],end_314[0]));
            group_strings_327=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_328=(char*)come_increment_ref_count(block(parent,str_326,group_strings_327));
            list$1charph_push_back(result_310,(char*)come_increment_ref_count(str2_328));
            if(            offset_311==end_314[0]) {
                offset_311++;
            }
            else {
                offset_311=end_314[0];
            }
            /* U13 */str_326 = come_decrement_ref_count2(str_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_328 = come_decrement_ref_count2(str2_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_323>1) {
            str_329=(char*)come_increment_ref_count(charp_substring(self,start_313[0],end_314[0]));
            group_strings_330=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_331=1;            i_331<regex_result_323;            i_331++            ){
                match_string_332=(char*)come_increment_ref_count(charp_substring(self,start_313[i_331],end_314[i_331]));
                list$1charph_push_back(group_strings_330,(char*)come_increment_ref_count(match_string_332));
                /* U13 */match_string_332 = come_decrement_ref_count2(match_string_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_333=(char*)come_increment_ref_count(block(parent,str_329,group_strings_330));
            list$1charph_push_back(result_310,(char*)come_increment_ref_count(str2_333));
            if(            offset_311==end_314[0]) {
                offset_311++;
            }
            else {
                offset_311=end_314[0];
            }
            /* U13 */str_329 = come_decrement_ref_count2(str_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_330,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_333 = come_decrement_ref_count2(str2_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_310;
    /*i*/come_call_finalizer3(result_310,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* __result248__;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* result_334;
int offset_335;
int ovec_max_336;
const char* err_340;
int erro_ofs_341;
int options_342;
char* str_343;
struct real_pcre8_or_16* re_344;
int n_345;
int options_346;
int len_347;
int regex_result_348;
int i_349;
int i_350;
void* __right_value321 = (void*)0;
char* str_351;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1charph* group_strings_352;
void* __right_value324 = (void*)0;
char* str2_353;
void* __right_value325 = (void*)0;
char* str_354;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1charph* group_strings_355;
int i_356;
void* __right_value328 = (void*)0;
char* match_string_357;
void* __right_value329 = (void*)0;
char* str2_358;
struct list$1charph* __result249__;
err_340 = (void*)0;
memset(&erro_ofs_341, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value318=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value318,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
    offset_335=0;
    ovec_max_336=16;
    int start_337[ovec_max_336];
    memset(&start_337, 0, sizeof(int)    *(ovec_max_336)    );
    int end_338[ovec_max_336];
    memset(&end_338, 0, sizeof(int)    *(ovec_max_336)    );
    int ovec_value_339[ovec_max_336*3];
    memset(&ovec_value_339, 0, sizeof(int)    *(ovec_max_336*3)    );
    options_342=reg->options;
    str_343=reg->str;
    re_344=reg->re;
    n_345=0;
    while((_Bool)1) {
        options_346=2097152;
        len_347=strlen(self);
        regex_result_348=pcre_exec(re_344,(struct pcre_extra*)0,self,len_347,offset_335,options_346,ovec_value_339,ovec_max_336*3);
        for(        i_349=0;        i_349<ovec_max_336;        i_349++        ){
            start_337[i_349]=ovec_value_339[i_349*2];
        }
        for(        i_350=0;        i_350<ovec_max_336;        i_350++        ){
            end_338[i_350]=ovec_value_339[i_350*2+1];
        }
        if(        regex_result_348==1) {
            str_351=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_352=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_353=(char*)come_increment_ref_count(block(parent,str_351,group_strings_352));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_353));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            n_345++;
            if(            n_345==count) {
                /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_352,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_353 = come_decrement_ref_count2(str2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_352,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_353 = come_decrement_ref_count2(str2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_348>1) {
            str_354=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_355=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_356=1;            i_356<regex_result_348;            i_356++            ){
                match_string_357=(char*)come_increment_ref_count(charp_substring(self,start_337[i_356],end_338[i_356]));
                list$1charph_push_back(group_strings_355,(char*)come_increment_ref_count(match_string_357));
                /* U13 */match_string_357 = come_decrement_ref_count2(match_string_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_358=(char*)come_increment_ref_count(block(parent,str_354,group_strings_355));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_358));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            n_345++;
            if(            n_345==count) {
                /* U13 */str_354 = come_decrement_ref_count2(str_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_358 = come_decrement_ref_count2(str2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_354 = come_decrement_ref_count2(str_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_358 = come_decrement_ref_count2(str2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_334;
    /*i*/come_call_finalizer3(result_334,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1charph* __result250__;
const char* err_359;
int erro_ofs_360;
int options_361;
char* str_362;
struct real_pcre8_or_16* re_363;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charph* result_364;
int offset_365;
int ovec_max_366;
int options_370;
int len_371;
int regex_result_372;
int i_373;
int i_374;
void* __right_value334 = (void*)0;
char* str_375;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1charph* match_strings_376;
void* __right_value337 = (void*)0;
char* str2_377;
void* __right_value338 = (void*)0;
char* str_378;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* match_strings_379;
int i_380;
void* __right_value341 = (void*)0;
char* match_str_381;
void* __right_value342 = (void*)0;
char* str2_382;
void* __right_value343 = (void*)0;
char* str_383;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* match_strings_384;
void* __right_value346 = (void*)0;
char* str2_385;
struct list$1charph* __result251__;
err_359 = (void*)0;
memset(&erro_ofs_360, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value331=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value331,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    options_361=reg->options;
    str_362=reg->str;
    re_363=reg->re;
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_365=0;
    ovec_max_366=16;
    int start_367[ovec_max_366];
    memset(&start_367, 0, sizeof(int)    *(ovec_max_366)    );
    int end_368[ovec_max_366];
    memset(&end_368, 0, sizeof(int)    *(ovec_max_366)    );
    int ovec_value_369[ovec_max_366*3];
    memset(&ovec_value_369, 0, sizeof(int)    *(ovec_max_366*3)    );
    while((_Bool)1) {
        options_370=2097152;
        len_371=strlen(self);
        regex_result_372=pcre_exec(re_363,(struct pcre_extra*)0,self,len_371,offset_365,options_370,ovec_value_369,ovec_max_366*3);
        for(        i_373=0;        i_373<ovec_max_366;        i_373++        ){
            start_367[i_373]=ovec_value_369[i_373*2];
        }
        for(        i_374=0;        i_374<ovec_max_366;        i_374++        ){
            end_368[i_374]=ovec_value_369[i_374*2+1];
        }
        if(        regex_result_372==1) {
            str_375=(char*)come_increment_ref_count(charp_substring(self,offset_365,start_367[0]));
            match_strings_376=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_377=(char*)come_increment_ref_count(block(parent,str_375,match_strings_376));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_377));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_372>1) {
            str_378=(char*)come_increment_ref_count(charp_substring(self,offset_365,start_367[0]));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            match_strings_379=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_380=1;            i_380<regex_result_372;            i_380++            ){
                match_str_381=(char*)come_increment_ref_count(charp_substring(self,start_367[i_380],end_368[i_380]));
                list$1charph_push_back(match_strings_379,(char*)come_increment_ref_count(match_str_381));
                /* U13 */match_str_381 = come_decrement_ref_count2(match_str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_382=(char*)come_increment_ref_count(block(parent,str_378,match_strings_379));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_382));
            /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_365<charp_length(self)) {
        str_383=(char*)come_increment_ref_count(charp_substring(self,offset_365,-1));
        match_strings_384=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_385=(char*)come_increment_ref_count(block(parent,str_383,match_strings_384));
        list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_385));
        /* U13 */str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_384,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_385 = come_decrement_ref_count2(str2_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1charph* __result252__;
const char* err_386;
int erro_ofs_387;
int options_388;
char* str_389;
struct real_pcre8_or_16* re_390;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1charph* result_391;
int offset_392;
int ovec_max_393;
int n_397;
int options_398;
int len_399;
int regex_result_400;
int i_401;
int i_402;
void* __right_value351 = (void*)0;
char* str_403;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1charph* match_strings_404;
void* __right_value354 = (void*)0;
char* str2_405;
void* __right_value355 = (void*)0;
char* str_406;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1charph* match_strings_407;
int i_408;
void* __right_value358 = (void*)0;
char* match_str_409;
void* __right_value359 = (void*)0;
char* str2_410;
struct list$1charph* __result253__;
err_386 = (void*)0;
memset(&erro_ofs_387, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value348=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value348,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    options_388=reg->options;
    str_389=reg->str;
    re_390=reg->re;
    result_391=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_392=0;
    ovec_max_393=16;
    int start_394[ovec_max_393];
    memset(&start_394, 0, sizeof(int)    *(ovec_max_393)    );
    int end_395[ovec_max_393];
    memset(&end_395, 0, sizeof(int)    *(ovec_max_393)    );
    int ovec_value_396[ovec_max_393*3];
    memset(&ovec_value_396, 0, sizeof(int)    *(ovec_max_393*3)    );
    n_397=0;
    while((_Bool)1) {
        options_398=2097152;
        len_399=strlen(self);
        regex_result_400=pcre_exec(re_390,(struct pcre_extra*)0,self,len_399,offset_392,options_398,ovec_value_396,ovec_max_393*3);
        for(        i_401=0;        i_401<ovec_max_393;        i_401++        ){
            start_394[i_401]=ovec_value_396[i_401*2];
        }
        for(        i_402=0;        i_402<ovec_max_393;        i_402++        ){
            end_395[i_402]=ovec_value_396[i_402*2+1];
        }
        if(        regex_result_400==1) {
            str_403=(char*)come_increment_ref_count(charp_substring(self,offset_392,start_394[0]));
            match_strings_404=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_405=(char*)come_increment_ref_count(block(parent,str_403,match_strings_404));
            list$1charph_push_back(result_391,(char*)come_increment_ref_count(str2_405));
            if(            offset_392==end_395[0]) {
                offset_392++;
            }
            else {
                offset_392=end_395[0];
            }
            /* U13 */str_403 = come_decrement_ref_count2(str_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_404,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_405 = come_decrement_ref_count2(str2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_400>1) {
            str_406=(char*)come_increment_ref_count(charp_substring(self,offset_392,start_394[0]));
            if(            offset_392==end_395[0]) {
                offset_392++;
            }
            else {
                offset_392=end_395[0];
            }
            match_strings_407=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_408=1;            i_408<regex_result_400;            i_408++            ){
                match_str_409=(char*)come_increment_ref_count(charp_substring(self,start_394[i_408],end_395[i_408]));
                list$1charph_push_back(match_strings_407,(char*)come_increment_ref_count(match_str_409));
                /* U13 */match_str_409 = come_decrement_ref_count2(match_str_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_410=(char*)come_increment_ref_count(block(parent,str_406,match_strings_407));
            list$1charph_push_back(result_391,(char*)come_increment_ref_count(str2_410));
            /* U13 */str_406 = come_decrement_ref_count2(str_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_410 = come_decrement_ref_count2(str2_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_397++;
        if(        n_397==count) {
            break;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_391;
    /*i*/come_call_finalizer3(result_391,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    left==((void*)0)||left->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    right==((void*)0)||right->re==((void*)0)) {
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
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1charph* __result254__;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1charph* result_411;
int offset_412;
int ovec_max_413;
const char* err_417;
int erro_ofs_418;
int options_419;
char* str_420;
struct real_pcre8_or_16* re_421;
int options_422;
int len_423;
int regex_result_424;
int i_425;
int i_426;
void* __right_value364 = (void*)0;
char* str_427;
void* __right_value365 = (void*)0;
char* str_428;
int i_429;
void* __right_value366 = (void*)0;
char* match_string_430;
struct list$1charph* __result255__;
err_417 = (void*)0;
memset(&erro_ofs_418, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value361=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value361,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_411=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_412=0;
    ovec_max_413=16;
    int start_414[ovec_max_413];
    memset(&start_414, 0, sizeof(int)    *(ovec_max_413)    );
    int end_415[ovec_max_413];
    memset(&end_415, 0, sizeof(int)    *(ovec_max_413)    );
    int ovec_value_416[ovec_max_413*3];
    memset(&ovec_value_416, 0, sizeof(int)    *(ovec_max_413*3)    );
    options_419=reg->options;
    str_420=reg->str;
    re_421=reg->re;
    while((_Bool)1) {
        options_422=2097152;
        len_423=strlen(self);
        regex_result_424=pcre_exec(re_421,(struct pcre_extra*)0,self,len_423,offset_412,options_422,ovec_value_416,ovec_max_413*3);
        for(        i_425=0;        i_425<ovec_max_413;        i_425++        ){
            start_414[i_425]=ovec_value_416[i_425*2];
        }
        for(        i_426=0;        i_426<ovec_max_413;        i_426++        ){
            end_415[i_426]=ovec_value_416[i_426*2+1];
        }
        if(        regex_result_424==1) {
            str_427=(char*)come_increment_ref_count(charp_substring(self,start_414[0],end_415[0]));
            list$1charph_push_back(result_411,(char*)come_increment_ref_count(str_427));
            if(            offset_412==end_415[0]) {
                offset_412++;
            }
            else {
                offset_412=end_415[0];
            }
            /* U13 */str_427 = come_decrement_ref_count2(str_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_424>1) {
            str_428=(char*)come_increment_ref_count(charp_substring(self,start_414[0],end_415[0]));
            list$1charph_push_back(result_411,(char*)come_increment_ref_count(str_428));
            if(            offset_412==end_415[0]) {
                offset_412++;
            }
            else {
                offset_412=end_415[0];
            }
            *num_group_string_in_regex=regex_result_424-1;
            for(            i_429=1;            i_429<regex_result_424;            i_429++            ){
                match_string_430=(char*)come_increment_ref_count(charp_substring(self,start_414[i_429],end_415[i_429]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_430));
                /* U13 */match_string_430 = come_decrement_ref_count2(match_string_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_428 = come_decrement_ref_count2(str_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_411;
    /*i*/come_call_finalizer3(result_411,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* result_431;
int len_432;
char* __result256__;
    result_431=(char*)come_increment_ref_count(__builtin_string(self));
    len_432=strlen(self);
    if(    self[len_432-1]==10) {
        result_431[len_432-1]=0;
    }
    else if(    self[len_432-1]==13) {
        result_431[len_432-1]=0;
    }
    else if(    len_432>2&&self[len_432-2]==13&&self[len_432-1]==10) {
        result_431[len_432-2]=0;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_431;
    /* U13 */result_431 = come_decrement_ref_count2(result_431, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_433;
void* __right_value368 = (void*)0;
char* result_434;
char* __result257__;
    len_433=4*(wcslen(wstr)+1);
    result_434=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_433)), "libcomelang-str.c", 894, "char"));
    if(    wcstombs(result_434,wstr,len_433)<0) {
        strncpy(result_434,"",len_433);
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_434;
    /* U13 */result_434 = come_decrement_ref_count2(result_434, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
unsigned int* __result258__;
    __result258__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value369=__builtin_wstring(str)));
    /* U11 */__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_435;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
unsigned int* __result259__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
unsigned int* __result260__;
void* __right_value374 = (void*)0;
unsigned int* sub_str_436;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
unsigned int* __result261__;
    len_435=wcslen(str);
    if(    len_435==0) {
        __result259__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value371=string_to_wstring(((char*)(__right_value370=wchar_tp_to_string(str))))));
        /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    if(    head<0) {
        head+=len_435;
    }
    if(    tail<0) {
        tail+=len_435+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result260__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value373=string_to_wstring(((char*)(__right_value372=wchar_tp_to_string(str))))));
        /* U11 */__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    if(    tail>=len_435) {
        tail=len_435;
    }
    sub_str_436=(unsigned int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_436,sizeof(unsigned int)*(wstring_length(sub_str_436)+1));
    __result261__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value376=string_to_wstring(((char*)(__right_value375=wchar_tp_to_string(str))))));
    /* U13 */sub_str_436 = come_decrement_ref_count2(sub_str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_437;
    head_437=wcsstr(str,search_str);
    if(    head_437==((void*)0)) {
        return default_value;
    }
    return head_437-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_438;
unsigned int* p_439;
int len2_440;
_Bool result_441;
int i_442;
memset(&i_442, 0, sizeof(int));
    len_438=wcslen(search_str);
    p_439=str+wcslen(str)-len_438;
    while(p_439>=str) {
        len2_440=wcslen(p_439);
        result_441=(_Bool)1;
        for(        i_442=0;        i_442<len_438&&i_442<len2_440;        i_442++        ){
            if(            p_439[i_442]!=search_str[i_442]) {
                result_441=(_Bool)0;
            }
        }
        if(        result_441) {
            return (p_439-str);
        }
        p_439--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_443;
void* __right_value377 = (void*)0;
unsigned int* result_444;
int i_445;
unsigned int* __result262__;
    len_443=wcslen(str);
    result_444=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_443+1)), "libcomelang-str.c", 994, "int"));
    for(    i_445=0;    i_445<len_443;    i_445++    ){
        result_444[i_445]=str[len_443-i_445-1];
    }
    result_444[len_443]=0;
    __result262__ = gComeFunResultObject = __result_obj__ = result_444;
    /* U13 */result_444 = come_decrement_ref_count2(result_444, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_446;
void* __right_value378 = (void*)0;
unsigned int* result_447;
int i_448;
unsigned int* __result263__;
    len_446=wcslen(str)*n+1;
    result_447=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_446)), "libcomelang-str.c", 1009, "int"));
    result_447[0]=0;
    for(    i_448=0;    i_448<n;    i_448++    ){
        wcscat(result_447,str);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_447;
    /* U13 */result_447 = come_decrement_ref_count2(result_447, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_449;
void* __right_value379 = (void*)0;
unsigned int* result_450;
int n_451;
int i_452;
unsigned int c_453;
unsigned int* __result264__;
    len_449=wchar_tp_length(str);
    result_450=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_449*2+1)), "libcomelang-str.c", 1023, "int"));
    n_451=0;
    for(    i_452=0;    i_452<len_449;    i_452++    ){
        c_453=str[i_452];
        if(        (c_453>=0&&c_453<32)||c_453==127) {
            result_450[n_451++]=94;
            result_450[n_451++]=c_453+65-1;
        }
        else {
            result_450[n_451++]=c_453;
        }
    }
    result_450[n_451]=0;
    __result264__ = gComeFunResultObject = __result_obj__ = result_450;
    /* U13 */result_450 = come_decrement_ref_count2(result_450, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_454;
int ovec_max_455;
const char* err_459;
int erro_ofs_460;
int options_461;
char* str_462;
struct real_pcre8_or_16* re_463;
int n_464;
int options_465;
int len_466;
int regex_result_467;
int i_468;
int i_469;
int i_472;
void* __right_value380 = (void*)0;
char* match_string_473;
err_459 = (void*)0;
memset(&erro_ofs_460, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_454=0;
    ovec_max_455=16;
    int start_456[ovec_max_455];
    memset(&start_456, 0, sizeof(int)    *(ovec_max_455)    );
    int end_457[ovec_max_455];
    memset(&end_457, 0, sizeof(int)    *(ovec_max_455)    );
    int ovec_value_458[ovec_max_455*3];
    memset(&ovec_value_458, 0, sizeof(int)    *(ovec_max_455*3)    );
    options_461=reg->options;
    str_462=reg->str;
    re_463=reg->re;
    n_464=0;
    while((_Bool)1) {
        options_465=2097152;
        len_466=strlen(self);
        regex_result_467=pcre_exec(re_463,(struct pcre_extra*)0,self,len_466,offset_454,options_465,ovec_value_458,ovec_max_455*3);
        for(        i_468=0;        i_468<ovec_max_455;        i_468++        ){
            start_456[i_468]=ovec_value_458[i_468*2];
        }
        for(        i_469=0;        i_469<ovec_max_455;        i_469++        ){
            end_457[i_469]=ovec_value_458[i_469*2+1];
        }
        if(        regex_result_467==1||(group_strings==((void*)0)&&regex_result_467>0)) {
            n_464++;
            if(            n_464==count) {
                return (_Bool)1;
            }
            if(            offset_454==end_457[0]) {
                offset_454++;
            }
            else {
                offset_454=end_457[0];
            }
        }
        else if(        regex_result_467>1) {
            n_464++;
            list$1charph_reset(group_strings);
            for(            i_472=1;            i_472<regex_result_467;            i_472++            ){
                match_string_473=(char*)come_increment_ref_count(charp_substring(self,start_456[i_472],end_457[i_472]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_473));
                /* U13 */match_string_473 = come_decrement_ref_count2(match_string_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_464==count) {
                return (_Bool)1;
            }
            if(            offset_454==end_457[0]) {
                offset_454++;
            }
            else {
                offset_454=end_457[0];
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
struct list_item$1charph* it_470;
struct list_item$1charph* prev_it_471;
struct list$1charph* __result265__;
    it_470=self->head;
    while(it_470!=((void*)0)) {
        prev_it_471=it_470;
        it_470=it_470->next;
        /*i*/come_call_finalizer3(prev_it_471,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

int wstring_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return 0;
    }
    return charp_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
    return left==right;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
unsigned int* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value381=wchar_tp_multiply(str,n)));
    /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
unsigned int* __result267__;
    __result267__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value382=wchar_tp_multiply(str,n)));
    /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
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
void* __right_value383 = (void*)0;
unsigned int* result_474;
unsigned int* __result268__;
    result_474=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1194, "int"));
    wcscpy(result_474,left);
    wcscat(result_474,right);
    __result268__ = gComeFunResultObject = __result_obj__ = result_474;
    /* U13 */result_474 = come_decrement_ref_count2(result_474, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
unsigned int* result_475;
unsigned int* __result269__;
    result_475=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1204, "int"));
    wcscpy(result_475,left);
    wcscat(result_475,right);
    __result269__ = gComeFunResultObject = __result_obj__ = result_475;
    /* U13 */result_475 = come_decrement_ref_count2(result_475, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_476;
    head_476=strstr(str,search_str);
    if(    head_476==((void*)0)) {
        return default_value;
    }
    return head_476-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_477;
int result_481;
int offset_482;
const char* err_483;
int erro_ofs_484;
int options_485;
char* str_486;
struct real_pcre8_or_16* re_487;
int options_488;
int len_489;
int regex_result_490;
int i_491;
int i_492;
err_483 = (void*)0;
memset(&erro_ofs_484, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_477=16;
    int start_478[ovec_max_477];
    memset(&start_478, 0, sizeof(int)    *(ovec_max_477)    );
    int end_479[ovec_max_477];
    memset(&end_479, 0, sizeof(int)    *(ovec_max_477)    );
    int ovec_value_480[ovec_max_477*3];
    memset(&ovec_value_480, 0, sizeof(int)    *(ovec_max_477*3)    );
    result_481=default_value;
    offset_482=0;
    options_485=reg->options;
    str_486=reg->str;
    re_487=reg->re;
    while((_Bool)1) {
        options_488=2097152;
        len_489=strlen(self);
        regex_result_490=pcre_exec(re_487,(struct pcre_extra*)0,self,len_489,offset_482,options_488,ovec_value_480,ovec_max_477*3);
        for(        i_491=0;        i_491<ovec_max_477;        i_491++        ){
            start_478[i_491]=ovec_value_480[i_491*2];
        }
        for(        i_492=0;        i_492<ovec_max_477;        i_492++        ){
            end_479[i_492]=ovec_value_480[i_492*2+1];
        }
        if(        regex_result_490==1||regex_result_490>0) {
            result_481=start_478[0];
            break;
        }
        {
            break;
        }
    }
    return result_481;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_493;
void* __right_value385 = (void*)0;
char* __result270__;
void* __right_value386 = (void*)0;
char* __result271__;
    len_493=strlen(self);
    if(    strcmp(self,"")==0) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value385=__builtin_string(self)));
        /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    if(    index<0) {
        index+=len_493;
    }
    if(    index>=len_493) {
        index=len_493-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string(self)));
    /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_494;
void* __right_value387 = (void*)0;
char* result_495;
int i_496;
char* __result272__;
    len_494=strlen(str)*n+1;
    result_495=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_494)), "libcomelang-str.c", 1305, "char"));
    result_495[0]=0;
    for(    i_496=0;    i_496<n;    i_496++    ){
        strcat(result_495,str);
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_495;
    /* U13 */result_495 = come_decrement_ref_count2(result_495, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result273__;
int offset_497;
int ovec_max_498;
const char* err_502;
int erro_ofs_503;
int options_504;
char* str_505;
struct real_pcre8_or_16* re_506;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* result_507;
int options_508;
int len_509;
int regex_result_510;
int i_511;
int i_512;
void* __right_value391 = (void*)0;
char* str_513;
void* __right_value392 = (void*)0;
char* str_514;
void* __right_value393 = (void*)0;
char* str_515;
void* __right_value394 = (void*)0;
char* __result274__;
err_502 = (void*)0;
memset(&erro_ofs_503, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(self)));
        /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    offset_497=0;
    ovec_max_498=16;
    int start_499[ovec_max_498];
    memset(&start_499, 0, sizeof(int)    *(ovec_max_498)    );
    int end_500[ovec_max_498];
    memset(&end_500, 0, sizeof(int)    *(ovec_max_498)    );
    int ovec_value_501[ovec_max_498*3];
    memset(&ovec_value_501, 0, sizeof(int)    *(ovec_max_498*3)    );
    options_504=reg->options;
    str_505=reg->str;
    re_506=reg->re;
    result_507=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1336, "buffer"))));
    while((_Bool)1) {
        options_508=2097152;
        len_509=strlen(self);
        regex_result_510=pcre_exec(re_506,(struct pcre_extra*)0,self,len_509,offset_497,options_508,ovec_value_501,ovec_max_498*3);
        for(        i_511=0;        i_511<ovec_max_498;        i_511++        ){
            start_499[i_511]=ovec_value_501[i_511*2];
        }
        for(        i_512=0;        i_512<ovec_max_498;        i_512++        ){
            end_500[i_512]=ovec_value_501[i_512*2+1];
        }
        if(        regex_result_510==1) {
            str_513=(char*)come_increment_ref_count(charp_substring(self,offset_497,start_499[0]));
            buffer_append_str(result_507,str_513);
            buffer_append_str(result_507,replace);
            if(            offset_497==end_500[0]) {
                offset_497++;
            }
            else {
                offset_497=end_500[0];
            }
            if(            !reg->global) {
                str_514=(char*)come_increment_ref_count(charp_substring(self,offset_497,-1));
                buffer_append_str(result_507,str_514);
                /* U13 */str_514 = come_decrement_ref_count2(str_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_513 = come_decrement_ref_count2(str_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_514 = come_decrement_ref_count2(str_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_513 = come_decrement_ref_count2(str_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_515=(char*)come_increment_ref_count(charp_substring(self,offset_497,-1));
            buffer_append_str(result_507,str_515);
            /* U13 */str_515 = come_decrement_ref_count2(str_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_515 = come_decrement_ref_count2(str_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=buffer_to_string(result_507)));
    /*i*/come_call_finalizer3(result_507,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result275__;
int offset_516;
int ovec_max_517;
const char* err_521;
int erro_ofs_522;
int options_523;
char* str_524;
struct real_pcre8_or_16* re_525;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* result_526;
int n_527;
int options_528;
int len_529;
int regex_result_530;
int i_531;
int i_532;
void* __right_value398 = (void*)0;
char* str_533;
void* __right_value399 = (void*)0;
char* str_534;
void* __right_value400 = (void*)0;
char* str_535;
void* __right_value401 = (void*)0;
char* str_536;
void* __right_value402 = (void*)0;
char* __result276__;
err_521 = (void*)0;
memset(&erro_ofs_522, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string(self)));
        /* U11 */__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    offset_516=0;
    ovec_max_517=16;
    int start_518[ovec_max_517];
    memset(&start_518, 0, sizeof(int)    *(ovec_max_517)    );
    int end_519[ovec_max_517];
    memset(&end_519, 0, sizeof(int)    *(ovec_max_517)    );
    int ovec_value_520[ovec_max_517*3];
    memset(&ovec_value_520, 0, sizeof(int)    *(ovec_max_517*3)    );
    options_523=reg->options;
    str_524=reg->str;
    re_525=reg->re;
    result_526=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1402, "buffer"))));
    n_527=0;
    while((_Bool)1) {
        options_528=2097152;
        len_529=strlen(self);
        regex_result_530=pcre_exec(re_525,(struct pcre_extra*)0,self,len_529,offset_516,options_528,ovec_value_520,ovec_max_517*3);
        for(        i_531=0;        i_531<ovec_max_517;        i_531++        ){
            start_518[i_531]=ovec_value_520[i_531*2];
        }
        for(        i_532=0;        i_532<ovec_max_517;        i_532++        ){
            end_519[i_532]=ovec_value_520[i_532*2+1];
        }
        if(        regex_result_530==1) {
            n_527++;
            str_533=(char*)come_increment_ref_count(charp_substring(self,offset_516,start_518[0]));
            buffer_append_str(result_526,str_533);
            buffer_append_str(result_526,replace);
            if(            offset_516==end_519[0]) {
                offset_516++;
            }
            else {
                offset_516=end_519[0];
            }
            if(            !reg->global) {
                str_534=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
                buffer_append_str(result_526,str_534);
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_527==count) {
                str_535=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
                buffer_append_str(result_526,str_535);
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_536=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
            buffer_append_str(result_526,str_536);
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=buffer_to_string(result_526)));
    /*i*/come_call_finalizer3(result_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1charph* result_537;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* buf_538;
int i_539;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* __result277__;
    result_537=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1461, "list$1charph"))));
    buf_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1463, "buffer"))));
    for(    i_539=0;    i_539<charp_length(self);    i_539++    ){
        if(        strstr(self+i_539,str)==self+i_539) {
            list$1charph_push_back(result_537,(char*)come_increment_ref_count(__builtin_string(buf_538->buf)));
            buffer_reset(buf_538);
            i_539+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_538,self[i_539]);
        }
    }
    if(    buffer_length(buf_538)!=0) {
        list$1charph_push_back(result_537,(char*)come_increment_ref_count(__builtin_string(buf_538->buf)));
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_537;
    /*i*/come_call_finalizer3(result_537,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1charph* __result278__;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1charph* result_540;
int offset_541;
int ovec_max_542;
const char* err_546;
int erro_ofs_547;
int options_548;
char* str_549;
struct real_pcre8_or_16* re_550;
int options_551;
int len_552;
int regex_result_553;
int i_554;
int i_555;
void* __right_value413 = (void*)0;
char* str_556;
void* __right_value414 = (void*)0;
char* str_557;
int i_558;
void* __right_value415 = (void*)0;
char* match_string_559;
struct list$1charph* __result279__;
err_546 = (void*)0;
memset(&erro_ofs_547, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result278__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value410=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1485, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_540=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1487, "list$1charph"))));
    offset_541=0;
    ovec_max_542=16;
    int start_543[ovec_max_542];
    memset(&start_543, 0, sizeof(int)    *(ovec_max_542)    );
    int end_544[ovec_max_542];
    memset(&end_544, 0, sizeof(int)    *(ovec_max_542)    );
    int ovec_value_545[ovec_max_542*3];
    memset(&ovec_value_545, 0, sizeof(int)    *(ovec_max_542*3)    );
    options_548=reg->options;
    str_549=reg->str;
    re_550=reg->re;
    while((_Bool)1) {
        options_551=2097152;
        len_552=strlen(self);
        regex_result_553=pcre_exec(re_550,(struct pcre_extra*)0,self,len_552,offset_541,options_551,ovec_value_545,ovec_max_542*3);
        for(        i_554=0;        i_554<ovec_max_542;        i_554++        ){
            start_543[i_554]=ovec_value_545[i_554*2];
        }
        for(        i_555=0;        i_555<ovec_max_542;        i_555++        ){
            end_544[i_555]=ovec_value_545[i_555*2+1];
        }
        if(        regex_result_553==1) {
            str_556=(char*)come_increment_ref_count(charp_substring(self,start_543[0],end_544[0]));
            list$1charph_push_back(result_540,(char*)come_increment_ref_count(str_556));
            if(            offset_541==end_544[0]) {
                offset_541++;
            }
            else {
                offset_541=end_544[0];
            }
            /* U13 */str_556 = come_decrement_ref_count2(str_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_553>1) {
            str_557=(char*)come_increment_ref_count(charp_substring(self,start_543[0],end_544[0]));
            list$1charph_push_back(result_540,(char*)come_increment_ref_count(str_557));
            if(            offset_541==end_544[0]) {
                offset_541++;
            }
            else {
                offset_541=end_544[0];
            }
            for(            i_558=1;            i_558<regex_result_553;            i_558++            ){
                match_string_559=(char*)come_increment_ref_count(charp_substring(self,start_543[i_558],end_544[i_558]));
                list$1charph_push_back(result_540,(char*)come_increment_ref_count(match_string_559));
                /* U13 */match_string_559 = come_decrement_ref_count2(match_string_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_540;
    /*i*/come_call_finalizer3(result_540,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1charph* __result280__;
const char* err_560;
int erro_ofs_561;
int options_562;
char* str_563;
struct real_pcre8_or_16* re_564;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1charph* result_565;
int offset_566;
int ovec_max_567;
int options_571;
int len_572;
int regex_result_573;
int i_574;
int i_575;
void* __right_value420 = (void*)0;
char* str_576;
void* __right_value421 = (void*)0;
char* str_577;
int i_578;
void* __right_value422 = (void*)0;
char* match_str_579;
void* __right_value423 = (void*)0;
char* str_580;
struct list$1charph* __result281__;
err_560 = (void*)0;
memset(&erro_ofs_561, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result280__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value417=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1561, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value417,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    options_562=reg->options;
    str_563=reg->str;
    re_564=reg->re;
    result_565=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1571, "list$1charph"))));
    offset_566=0;
    ovec_max_567=16;
    int start_568[ovec_max_567];
    memset(&start_568, 0, sizeof(int)    *(ovec_max_567)    );
    int end_569[ovec_max_567];
    memset(&end_569, 0, sizeof(int)    *(ovec_max_567)    );
    int ovec_value_570[ovec_max_567*3];
    memset(&ovec_value_570, 0, sizeof(int)    *(ovec_max_567*3)    );
    while((_Bool)1) {
        options_571=2097152;
        len_572=strlen(self);
        regex_result_573=pcre_exec(re_564,(struct pcre_extra*)0,self,len_572,offset_566,options_571,ovec_value_570,ovec_max_567*3);
        for(        i_574=0;        i_574<ovec_max_567;        i_574++        ){
            start_568[i_574]=ovec_value_570[i_574*2];
        }
        for(        i_575=0;        i_575<ovec_max_567;        i_575++        ){
            end_569[i_575]=ovec_value_570[i_575*2+1];
        }
        if(        regex_result_573==1) {
            str_576=(char*)come_increment_ref_count(charp_substring(self,offset_566,start_568[0]));
            list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_576));
            if(            offset_566==end_569[0]) {
                offset_566++;
            }
            else {
                offset_566=end_569[0];
            }
            /* U13 */str_576 = come_decrement_ref_count2(str_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_573>1) {
            str_577=(char*)come_increment_ref_count(charp_substring(self,offset_566,start_568[0]));
            list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_577));
            if(            offset_566==end_569[0]) {
                offset_566++;
            }
            else {
                offset_566=end_569[0];
            }
            for(            i_578=1;            i_578<regex_result_573;            i_578++            ){
                match_str_579=(char*)come_increment_ref_count(charp_substring(self,start_568[i_578],end_569[i_578]));
                list$1charph_push_back(result_565,(char*)come_increment_ref_count(match_str_579));
                /* U13 */match_str_579 = come_decrement_ref_count2(match_str_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_577 = come_decrement_ref_count2(str_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_566<charp_length(self)) {
        str_580=(char*)come_increment_ref_count(charp_substring(self,offset_566,-1));
        list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_580));
        /* U13 */str_580 = come_decrement_ref_count2(str_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_565;
    /*i*/come_call_finalizer3(result_565,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_581;
int ovec_max_582;
const char* err_586;
int erro_ofs_587;
int options_588;
char* str_589;
struct real_pcre8_or_16* re_590;
int options_591;
int len_592;
int regex_result_593;
int i_594;
int i_595;
err_586 = (void*)0;
memset(&erro_ofs_587, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_581=0;
    ovec_max_582=16;
    int start_583[ovec_max_582];
    memset(&start_583, 0, sizeof(int)    *(ovec_max_582)    );
    int end_584[ovec_max_582];
    memset(&end_584, 0, sizeof(int)    *(ovec_max_582)    );
    int ovec_value_585[ovec_max_582*3];
    memset(&ovec_value_585, 0, sizeof(int)    *(ovec_max_582*3)    );
    options_588=reg->options;
    str_589=reg->str;
    re_590=reg->re;
    while((_Bool)1) {
        options_591=2097152;
        len_592=strlen(self);
        regex_result_593=pcre_exec(re_590,(struct pcre_extra*)0,self,len_592,offset_581,options_591,ovec_value_585,ovec_max_582*3);
        for(        i_594=0;        i_594<ovec_max_582;        i_594++        ){
            start_583[i_594]=ovec_value_585[i_594*2];
        }
        for(        i_595=0;        i_595<ovec_max_582;        i_595++        ){
            end_584[i_595]=ovec_value_585[i_595*2+1];
        }
        if(        regex_result_593>0) {
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
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1charph* __result282__;
const char* err_596;
int erro_ofs_597;
int options_598;
char* str_599;
struct real_pcre8_or_16* re_600;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1charph* result_601;
int offset_602;
int ovec_max_603;
int n_607;
int options_608;
int len_609;
int regex_result_610;
int i_611;
int i_612;
void* __right_value428 = (void*)0;
char* str_613;
void* __right_value429 = (void*)0;
char* str_614;
int i_615;
void* __right_value430 = (void*)0;
char* match_str_616;
void* __right_value431 = (void*)0;
char* str_617;
struct list$1charph* __result283__;
err_596 = (void*)0;
memset(&erro_ofs_597, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result282__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value425=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1689, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value425,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    options_598=reg->options;
    str_599=reg->str;
    re_600=reg->re;
    result_601=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1699, "list$1charph"))));
    offset_602=0;
    ovec_max_603=16;
    int start_604[ovec_max_603];
    memset(&start_604, 0, sizeof(int)    *(ovec_max_603)    );
    int end_605[ovec_max_603];
    memset(&end_605, 0, sizeof(int)    *(ovec_max_603)    );
    int ovec_value_606[ovec_max_603*3];
    memset(&ovec_value_606, 0, sizeof(int)    *(ovec_max_603*3)    );
    n_607=0;
    while((_Bool)1) {
        options_608=2097152;
        len_609=strlen(self);
        regex_result_610=pcre_exec(re_600,(struct pcre_extra*)0,self,len_609,offset_602,options_608,ovec_value_606,ovec_max_603*3);
        for(        i_611=0;        i_611<ovec_max_603;        i_611++        ){
            start_604[i_611]=ovec_value_606[i_611*2];
        }
        for(        i_612=0;        i_612<ovec_max_603;        i_612++        ){
            end_605[i_612]=ovec_value_606[i_612*2+1];
        }
        if(        regex_result_610==1) {
            str_613=(char*)come_increment_ref_count(charp_substring(self,offset_602,start_604[0]));
            list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_613));
            if(            offset_602==end_605[0]) {
                offset_602++;
            }
            else {
                offset_602=end_605[0];
            }
            /* U13 */str_613 = come_decrement_ref_count2(str_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_610>1) {
            str_614=(char*)come_increment_ref_count(charp_substring(self,offset_602,start_604[0]));
            list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_614));
            if(            offset_602==end_605[0]) {
                offset_602++;
            }
            else {
                offset_602=end_605[0];
            }
            for(            i_615=1;            i_615<regex_result_610;            i_615++            ){
                match_str_616=(char*)come_increment_ref_count(charp_substring(self,start_604[i_615],end_605[i_615]));
                list$1charph_push_back(result_601,(char*)come_increment_ref_count(match_str_616));
                /* U13 */match_str_616 = come_decrement_ref_count2(match_str_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_614 = come_decrement_ref_count2(str_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_607++;
        if(        maxsplit==n_607) {
            break;
        }
    }
    if(    offset_602<charp_length(self)) {
        str_617=(char*)come_increment_ref_count(charp_substring(self,offset_602,-1));
        list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_617));
        /* U13 */str_617 = come_decrement_ref_count2(str_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_601;
    /*i*/come_call_finalizer3(result_601,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_618;
int erro_ofs_619;
int options_620;
char* str_621;
struct real_pcre8_or_16* re_622;
void* __right_value432 = (void*)0;
char* self2_623;
int ovec_max_624;
int result_628;
int offset_629;
int n_630;
int options_631;
int len_632;
int regex_result_633;
int i_634;
int i_635;
int __result284__;
err_618 = (void*)0;
memset(&erro_ofs_619, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_620=reg->options;
    str_621=reg->str;
    re_622=reg->re;
    self2_623=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_624=16;
    int start_625[ovec_max_624];
    memset(&start_625, 0, sizeof(int)    *(ovec_max_624)    );
    int end_626[ovec_max_624];
    memset(&end_626, 0, sizeof(int)    *(ovec_max_624)    );
    int ovec_value_627[ovec_max_624*3];
    memset(&ovec_value_627, 0, sizeof(int)    *(ovec_max_624*3)    );
    result_628=default_value;
    offset_629=0;
    n_630=0;
    while((_Bool)1) {
        options_631=2097152;
        len_632=strlen(self2_623);
        regex_result_633=pcre_exec(re_622,(struct pcre_extra*)0,self2_623,len_632,offset_629,options_631,ovec_value_627,ovec_max_624*3);
        for(        i_634=0;        i_634<ovec_max_624;        i_634++        ){
            start_625[i_634]=ovec_value_627[i_634*2];
        }
        for(        i_635=0;        i_635<ovec_max_624;        i_635++        ){
            end_626[i_635]=ovec_value_627[i_635*2+1];
        }
        if(        regex_result_633>0) {
            n_630++;
            if(            offset_629==end_626[0]) {
                offset_629++;
            }
            else {
                offset_629=end_626[0];
            }
            if(            n_630==count) {
                result_628=strlen(self)-end_626[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result284__ = result_628;
    /* U13 */self2_623 = come_decrement_ref_count2(self2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result284__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_636;
int ovec_max_637;
const char* err_641;
int erro_ofs_642;
int options_643;
char* str_644;
struct real_pcre8_or_16* re_645;
int n_646;
int options_647;
int len_648;
int regex_result_649;
int i_650;
int i_651;
err_641 = (void*)0;
memset(&erro_ofs_642, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_636=0;
    ovec_max_637=16;
    int start_638[ovec_max_637];
    memset(&start_638, 0, sizeof(int)    *(ovec_max_637)    );
    int end_639[ovec_max_637];
    memset(&end_639, 0, sizeof(int)    *(ovec_max_637)    );
    int ovec_value_640[ovec_max_637*3];
    memset(&ovec_value_640, 0, sizeof(int)    *(ovec_max_637*3)    );
    options_643=reg->options;
    str_644=reg->str;
    re_645=reg->re;
    n_646=0;
    while((_Bool)1) {
        options_647=2097152;
        len_648=strlen(self);
        regex_result_649=pcre_exec(re_645,(struct pcre_extra*)0,self,len_648,offset_636,options_647,ovec_value_640,ovec_max_637*3);
        for(        i_650=0;        i_650<ovec_max_637;        i_650++        ){
            start_638[i_650]=ovec_value_640[i_650*2];
        }
        for(        i_651=0;        i_651<ovec_max_637;        i_651++        ){
            end_639[i_651]=ovec_value_640[i_651*2+1];
        }
        if(        regex_result_649>0) {
            n_646++;
            if(            count==n_646) {
                return (_Bool)1;
            }
            if(            offset_636==end_639[0]) {
                offset_636++;
            }
            else {
                offset_636=end_639[0];
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
void* __right_value433 = (void*)0;
char* __result285__;
int offset_652;
int ovec_max_653;
const char* err_657;
int erro_ofs_658;
int options_659;
char* str_660;
struct real_pcre8_or_16* re_661;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* result_662;
int options_663;
int len_664;
int regex_result_665;
int i_666;
int i_667;
void* __right_value436 = (void*)0;
char* str_668;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* group_strings_669;
void* __right_value439 = (void*)0;
char* match_string_670;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* block_result_671;
void* __right_value442 = (void*)0;
char* str_672;
void* __right_value443 = (void*)0;
char* str_673;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* group_strings_674;
int i_675;
void* __right_value446 = (void*)0;
char* match_string_676;
void* __right_value447 = (void*)0;
char* match_string_677;
void* __right_value448 = (void*)0;
char* block_result_678;
void* __right_value449 = (void*)0;
char* str_679;
void* __right_value450 = (void*)0;
char* str_680;
void* __right_value451 = (void*)0;
char* __result286__;
err_657 = (void*)0;
memset(&erro_ofs_658, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value433=__builtin_string("")));
        /* U11 */__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    offset_652=0;
    ovec_max_653=16;
    int start_654[ovec_max_653];
    memset(&start_654, 0, sizeof(int)    *(ovec_max_653)    );
    int end_655[ovec_max_653];
    memset(&end_655, 0, sizeof(int)    *(ovec_max_653)    );
    int ovec_value_656[ovec_max_653*3];
    memset(&ovec_value_656, 0, sizeof(int)    *(ovec_max_653*3)    );
    options_659=reg->options;
    str_660=reg->str;
    re_661=reg->re;
    result_662=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1920, "buffer"))));
    while((_Bool)1) {
        options_663=2097152;
        len_664=strlen(self);
        regex_result_665=pcre_exec(re_661,(struct pcre_extra*)0,self,len_664,offset_652,options_663,ovec_value_656,ovec_max_653*3);
        for(        i_666=0;        i_666<ovec_max_653;        i_666++        ){
            start_654[i_666]=ovec_value_656[i_666*2];
        }
        for(        i_667=0;        i_667<ovec_max_653;        i_667++        ){
            end_655[i_667]=ovec_value_656[i_667*2+1];
        }
        if(        regex_result_665==1) {
            str_668=(char*)come_increment_ref_count(charp_substring(self,offset_652,start_654[0]));
            buffer_append_str(result_662,str_668);
            group_strings_669=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1940, "list$1charph"))));
            match_string_670=(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0]));
            list$1charph_push_back(group_strings_669,(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0])));
            block_result_671=(char*)come_increment_ref_count(block(parent,match_string_670,group_strings_669));
            buffer_append_str(result_662,block_result_671);
            if(            offset_652==end_655[0]) {
                offset_652++;
            }
            else {
                offset_652=end_655[0];
            }
            if(            !reg->global) {
                str_672=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
                buffer_append_str(result_662,str_672);
                /* U13 */str_672 = come_decrement_ref_count2(str_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_668 = come_decrement_ref_count2(str_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_670 = come_decrement_ref_count2(match_string_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_671 = come_decrement_ref_count2(block_result_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_672 = come_decrement_ref_count2(str_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_668 = come_decrement_ref_count2(str_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_670 = come_decrement_ref_count2(match_string_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_671 = come_decrement_ref_count2(block_result_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_665>1) {
            str_673=(char*)come_increment_ref_count(charp_substring(self,offset_652,start_654[0]));
            buffer_append_str(result_662,str_673);
            if(            offset_652==end_655[0]) {
                offset_652++;
            }
            else {
                offset_652=end_655[0];
            }
            group_strings_674=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1975, "list$1charph"))));
            for(            i_675=1;            i_675<regex_result_665;            i_675++            ){
                match_string_676=(char*)come_increment_ref_count(charp_substring(self,start_654[i_675],end_655[i_675]));
                list$1charph_push_back(group_strings_674,(char*)come_increment_ref_count(match_string_676));
                /* U13 */match_string_676 = come_decrement_ref_count2(match_string_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_677=(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0]));
            block_result_678=(char*)come_increment_ref_count(block(parent,match_string_677,group_strings_674));
            buffer_append_str(result_662,block_result_678);
            if(            !reg->global) {
                str_679=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
                buffer_append_str(result_662,str_679);
                /* U13 */str_679 = come_decrement_ref_count2(str_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_673 = come_decrement_ref_count2(str_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_677 = come_decrement_ref_count2(match_string_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_678 = come_decrement_ref_count2(block_result_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_679 = come_decrement_ref_count2(str_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_673 = come_decrement_ref_count2(str_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_677 = come_decrement_ref_count2(match_string_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_678 = come_decrement_ref_count2(block_result_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_680=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
            buffer_append_str(result_662,str_680);
            /* U13 */str_680 = come_decrement_ref_count2(str_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_680 = come_decrement_ref_count2(str_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value451=buffer_to_string(result_662)));
    /*i*/come_call_finalizer3(result_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
char* __result287__;
int offset_681;
int ovec_max_682;
const char* err_686;
int erro_ofs_687;
int options_688;
char* str_689;
struct real_pcre8_or_16* re_690;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct buffer* result_691;
int n_692;
int options_693;
int len_694;
int regex_result_695;
int i_696;
int i_697;
void* __right_value455 = (void*)0;
char* str_698;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1charph* group_strings_699;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
char* match_string_700;
void* __right_value460 = (void*)0;
char* block_result_701;
void* __right_value461 = (void*)0;
char* str_702;
void* __right_value462 = (void*)0;
char* str_703;
void* __right_value463 = (void*)0;
char* str_704;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* group_strings_705;
int i_706;
void* __right_value466 = (void*)0;
char* match_string_707;
void* __right_value467 = (void*)0;
char* match_string_708;
void* __right_value468 = (void*)0;
char* block_result_709;
void* __right_value469 = (void*)0;
char* str_710;
void* __right_value470 = (void*)0;
char* str_711;
void* __right_value471 = (void*)0;
char* str_712;
void* __right_value472 = (void*)0;
char* __result288__;
err_686 = (void*)0;
memset(&erro_ofs_687, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value452=__builtin_string("")));
        /* U11 */__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    offset_681=0;
    ovec_max_682=16;
    int start_683[ovec_max_682];
    memset(&start_683, 0, sizeof(int)    *(ovec_max_682)    );
    int end_684[ovec_max_682];
    memset(&end_684, 0, sizeof(int)    *(ovec_max_682)    );
    int ovec_value_685[ovec_max_682*3];
    memset(&ovec_value_685, 0, sizeof(int)    *(ovec_max_682*3)    );
    options_688=reg->options;
    str_689=reg->str;
    re_690=reg->re;
    result_691=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2024, "buffer"))));
    n_692=0;
    while((_Bool)1) {
        options_693=2097152;
        len_694=strlen(self);
        regex_result_695=pcre_exec(re_690,(struct pcre_extra*)0,self,len_694,offset_681,options_693,ovec_value_685,ovec_max_682*3);
        for(        i_696=0;        i_696<ovec_max_682;        i_696++        ){
            start_683[i_696]=ovec_value_685[i_696*2];
        }
        for(        i_697=0;        i_697<ovec_max_682;        i_697++        ){
            end_684[i_697]=ovec_value_685[i_697*2+1];
        }
        if(        regex_result_695==1) {
            n_692++;
            str_698=(char*)come_increment_ref_count(charp_substring(self,offset_681,start_683[0]));
            buffer_append_str(result_691,str_698);
            group_strings_699=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2047, "list$1charph"))));
            list$1charph_push_back(group_strings_699,(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0])));
            match_string_700=(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0]));
            block_result_701=(char*)come_increment_ref_count(block(parent,match_string_700,group_strings_699));
            buffer_append_str(result_691,block_result_701);
            if(            offset_681==end_684[0]) {
                offset_681++;
            }
            else {
                offset_681=end_684[0];
            }
            if(            !reg->global) {
                str_702=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_702);
                /* U13 */str_702 = come_decrement_ref_count2(str_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_702 = come_decrement_ref_count2(str_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_692==count) {
                str_703=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_703);
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_695>1) {
            n_692++;
            str_704=(char*)come_increment_ref_count(charp_substring(self,offset_681,start_683[0]));
            buffer_append_str(result_691,str_704);
            if(            offset_681==end_684[0]) {
                offset_681++;
            }
            else {
                offset_681=end_684[0];
            }
            group_strings_705=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2090, "list$1charph"))));
            for(            i_706=1;            i_706<regex_result_695;            i_706++            ){
                match_string_707=(char*)come_increment_ref_count(charp_substring(self,start_683[i_706],end_684[i_706]));
                list$1charph_push_back(group_strings_705,(char*)come_increment_ref_count(match_string_707));
                /* U13 */match_string_707 = come_decrement_ref_count2(match_string_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_708=(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0]));
            block_result_709=(char*)come_increment_ref_count(block(parent,match_string_708,group_strings_705));
            buffer_append_str(result_691,block_result_709);
            if(            !reg->global) {
                str_710=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_710);
                /* U13 */str_710 = come_decrement_ref_count2(str_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_710 = come_decrement_ref_count2(str_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_692==count) {
                str_711=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_711);
                /* U13 */str_711 = come_decrement_ref_count2(str_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_711 = come_decrement_ref_count2(str_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_712=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
            buffer_append_str(result_691,str_712);
            /* U13 */str_712 = come_decrement_ref_count2(str_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_712 = come_decrement_ref_count2(str_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value472=buffer_to_string(result_691)));
    /*i*/come_call_finalizer3(result_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_713;
unsigned int* p_714;
    result_713=0;
    p_714=value;
    while(*p_714) {
        result_713+=(*p_714);
        p_714++;
    }
    return result_713;
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
void* __right_value473 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value473=xsprintf("%ls",wc)));
    /* U11 */__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* result_715;
void* __right_value475 = (void*)0;
char* __result290__;
char* __result291__;
    result_715=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_715[string_length(result_715)-1]==10) {
        __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value475=charp_substring(result_715,0,-2)));
        /* U13 */result_715 = come_decrement_ref_count2(result_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_715;
    /* U13 */result_715 = come_decrement_ref_count2(result_715, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
char* __result292__;
char* result_716;
void* __right_value477 = (void*)0;
char* result2_717;
char* __result293__;
    if(    path==((void*)0)) {
        __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value476=__builtin_string("")));
        /* U11 */__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_716=realpath(path,((void*)0));
    result2_717=(char*)come_increment_ref_count(__builtin_string(result_716));
    free(result_716);
    __result293__ = gComeFunResultObject = __result_obj__ = result2_717;
    /* U13 */result2_717 = come_decrement_ref_count2(result2_717, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
char* __result294__;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
char* __result295__;
    if(    path==((void*)0)) {
        __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value478=__builtin_string("")));
        /* U11 */__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value480=__builtin_string(dirname(((char*)(__right_value479=__builtin_string(path)))))));
    /* U11 */__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

unsigned long  int xwcslen(unsigned int* wstr){
unsigned int* p_718;
unsigned long  int len_719;
    p_718=wstr;
    len_719=0;
    while(*p_718) {
        p_718++;
        len_719++;
    }
    return len_719;
}

