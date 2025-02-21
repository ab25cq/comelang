/// previous struct definition ///
struct __locale_struct;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

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
typedef unsigned int wint_t;

typedef unsigned long  int wctype_t;

struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};

typedef struct __mbstate_t mbstate_t;

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
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
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

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ4
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ5
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ5 u;
};

typedef struct regex_t regex_t;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1voidph* mFields;
    char* mParentClassName;
    char* mAttribute;
    _Bool mDynamic;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    struct sType* mChannelType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mAllocaValue;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2voidphvoidph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool struct_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    char* if_result_var_name;
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
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
char* basename();
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
int isalnum(int anonymous_var_nameX474);
int isalpha(int anonymous_var_nameX475);
int isblank(int anonymous_var_nameX476);
int iscntrl(int anonymous_var_nameX477);
int isdigit(int anonymous_var_nameX478);
int isgraph(int anonymous_var_nameX479);
int islower(int anonymous_var_nameX480);
int isprint(int anonymous_var_nameX481);
int ispunct(int anonymous_var_nameX482);
int isspace(int anonymous_var_nameX483);
int isupper(int anonymous_var_nameX484);
int isxdigit(int anonymous_var_nameX485);
int tolower(int anonymous_var_nameX486);
int toupper(int anonymous_var_nameX487);
int isalnum_l(int anonymous_var_nameX488, struct __locale_struct* anonymous_var_nameX489);
int isalpha_l(int anonymous_var_nameX490, struct __locale_struct* anonymous_var_nameX491);
int isblank_l(int anonymous_var_nameX492, struct __locale_struct* anonymous_var_nameX493);
int iscntrl_l(int anonymous_var_nameX494, struct __locale_struct* anonymous_var_nameX495);
int isdigit_l(int anonymous_var_nameX496, struct __locale_struct* anonymous_var_nameX497);
int isgraph_l(int anonymous_var_nameX498, struct __locale_struct* anonymous_var_nameX499);
int islower_l(int anonymous_var_nameX500, struct __locale_struct* anonymous_var_nameX501);
int isprint_l(int anonymous_var_nameX502, struct __locale_struct* anonymous_var_nameX503);
int ispunct_l(int anonymous_var_nameX504, struct __locale_struct* anonymous_var_nameX505);
int isspace_l(int anonymous_var_nameX506, struct __locale_struct* anonymous_var_nameX507);
int isupper_l(int anonymous_var_nameX508, struct __locale_struct* anonymous_var_nameX509);
int isxdigit_l(int anonymous_var_nameX510, struct __locale_struct* anonymous_var_nameX511);
int tolower_l(int anonymous_var_nameX512, struct __locale_struct* anonymous_var_nameX513);
int toupper_l(int anonymous_var_nameX514, struct __locale_struct* anonymous_var_nameX515);
int isascii(int anonymous_var_nameX516);
int toascii(int anonymous_var_nameX517);
unsigned int* wcscpy(unsigned int* anonymous_var_nameX518, const unsigned int* anonymous_var_nameX519);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX520, const unsigned int* anonymous_var_nameX521, unsigned long  int anonymous_var_nameX522);
unsigned int* wcscat(unsigned int* anonymous_var_nameX523, const unsigned int* anonymous_var_nameX524);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX525, const unsigned int* anonymous_var_nameX526, unsigned long  int anonymous_var_nameX527);
int wcscmp(const unsigned int* anonymous_var_nameX528, const unsigned int* anonymous_var_nameX529);
int wcsncmp(const unsigned int* anonymous_var_nameX530, const unsigned int* anonymous_var_nameX531, unsigned long  int anonymous_var_nameX532);
int wcscoll(const unsigned int* anonymous_var_nameX533, const unsigned int* anonymous_var_nameX534);
unsigned long  int wcsxfrm(unsigned int* anonymous_var_nameX535, const unsigned int* anonymous_var_nameX536, unsigned long  int anonymous_var_nameX537);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX538, unsigned int anonymous_var_nameX539);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX540, unsigned int anonymous_var_nameX541);
unsigned long  int wcscspn(const unsigned int* anonymous_var_nameX542, const unsigned int* anonymous_var_nameX543);
unsigned long  int wcsspn(const unsigned int* anonymous_var_nameX544, const unsigned int* anonymous_var_nameX545);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX546, const unsigned int* anonymous_var_nameX547);
unsigned int* wcstok(unsigned int* anonymous_var_nameX548, const unsigned int* anonymous_var_nameX549, unsigned int** anonymous_var_nameX550);
unsigned long  int wcslen(const unsigned int* anonymous_var_nameX551);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX552, const unsigned int* anonymous_var_nameX553);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX554, const unsigned int* anonymous_var_nameX555);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX556, unsigned int anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558);
int wmemcmp(const unsigned int* anonymous_var_nameX559, const unsigned int* anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX562, const unsigned int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX565, const unsigned int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
unsigned int* wmemset(unsigned int* anonymous_var_nameX568, unsigned int anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
unsigned int btowc(int anonymous_var_nameX571);
int wctob(unsigned int anonymous_var_nameX572);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX573);
unsigned long  int mbrtowc(unsigned int* anonymous_var_nameX574, const char* anonymous_var_nameX575, unsigned long  int anonymous_var_nameX576, struct __mbstate_t* anonymous_var_nameX577);
unsigned long  int wcrtomb(char* anonymous_var_nameX578, unsigned int anonymous_var_nameX579, struct __mbstate_t* anonymous_var_nameX580);
unsigned long  int mbrlen(const char* anonymous_var_nameX581, unsigned long  int anonymous_var_nameX582, struct __mbstate_t* anonymous_var_nameX583);
unsigned long  int mbsrtowcs(unsigned int* anonymous_var_nameX584, const char** anonymous_var_nameX585, unsigned long  int anonymous_var_nameX586, struct __mbstate_t* anonymous_var_nameX587);
unsigned long  int wcsrtombs(char* anonymous_var_nameX588, const unsigned int** anonymous_var_nameX589, unsigned long  int anonymous_var_nameX590, struct __mbstate_t* anonymous_var_nameX591);
float wcstof(const unsigned int* anonymous_var_nameX592, unsigned int** anonymous_var_nameX593);
double wcstod(const unsigned int* anonymous_var_nameX594, unsigned int** anonymous_var_nameX595);
long  double wcstold(const unsigned int* anonymous_var_nameX596, unsigned int** anonymous_var_nameX597);
long wcstol(const unsigned int* anonymous_var_nameX598, unsigned int** anonymous_var_nameX599, int anonymous_var_nameX600);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX601, unsigned int** anonymous_var_nameX602, int anonymous_var_nameX603);
long long wcstoll(const unsigned int* anonymous_var_nameX604, unsigned int** anonymous_var_nameX605, int anonymous_var_nameX606);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX607, unsigned int** anonymous_var_nameX608, int anonymous_var_nameX609);
int fwide(struct _IO_FILE* anonymous_var_nameX610, int anonymous_var_nameX611);
int wprintf(const unsigned int* anonymous_var_nameX612, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX613, const unsigned int* anonymous_var_nameX614, ...);
int swprintf(unsigned int* anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, const unsigned int* anonymous_var_nameX617, ...);
int vwprintf(const unsigned int* anonymous_var_nameX618, va_list anonymous_var_nameX619);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX620, const unsigned int* anonymous_var_nameX621, va_list anonymous_var_nameX622);
int vswprintf(unsigned int* anonymous_var_nameX623, unsigned long  int anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, va_list anonymous_var_nameX626);
int wscanf(const unsigned int* anonymous_var_nameX627, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX628, const unsigned int* anonymous_var_nameX629, ...);
int swscanf(const unsigned int* anonymous_var_nameX630, const unsigned int* anonymous_var_nameX631, ...);
int vwscanf(const unsigned int* anonymous_var_nameX632, va_list anonymous_var_nameX633);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX634, const unsigned int* anonymous_var_nameX635, va_list anonymous_var_nameX636);
int vswscanf(const unsigned int* anonymous_var_nameX637, const unsigned int* anonymous_var_nameX638, va_list anonymous_var_nameX639);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX640);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX641);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX642, struct _IO_FILE* anonymous_var_nameX643);
unsigned int putwc(unsigned int anonymous_var_nameX644, struct _IO_FILE* anonymous_var_nameX645);
unsigned int putwchar(unsigned int anonymous_var_nameX646);
unsigned int* fgetws(unsigned int* anonymous_var_nameX647, int anonymous_var_nameX648, struct _IO_FILE* anonymous_var_nameX649);
int fputws(const unsigned int* anonymous_var_nameX650, struct _IO_FILE* anonymous_var_nameX651);
unsigned int ungetwc(unsigned int anonymous_var_nameX652, struct _IO_FILE* anonymous_var_nameX653);
unsigned long  int wcsftime(unsigned int* anonymous_var_nameX654, unsigned long  int anonymous_var_nameX655, const unsigned int* anonymous_var_nameX656, const struct tm* anonymous_var_nameX657);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX658);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX659);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX660, struct _IO_FILE* anonymous_var_nameX661);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX662, struct _IO_FILE* anonymous_var_nameX663);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX664);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX665, int anonymous_var_nameX666, struct _IO_FILE* anonymous_var_nameX667);
int fputws_unlocked(const unsigned int* anonymous_var_nameX668, struct _IO_FILE* anonymous_var_nameX669);
unsigned long  int wcsftime_l(unsigned int* anonymous_var_nameX670, unsigned long  int anonymous_var_nameX671, const unsigned int* anonymous_var_nameX672, const struct tm* anonymous_var_nameX673, struct __locale_struct* anonymous_var_nameX674);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX675, unsigned long  int* anonymous_var_nameX676);
unsigned long  int mbsnrtowcs(unsigned int* anonymous_var_nameX677, const char** anonymous_var_nameX678, unsigned long  int anonymous_var_nameX679, unsigned long  int anonymous_var_nameX680, struct __mbstate_t* anonymous_var_nameX681);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX682, const unsigned int** anonymous_var_nameX683, unsigned long  int anonymous_var_nameX684, unsigned long  int anonymous_var_nameX685, struct __mbstate_t* anonymous_var_nameX686);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX687);
unsigned long  int wcsnlen(const unsigned int* anonymous_var_nameX688, unsigned long  int anonymous_var_nameX689);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX690, const unsigned int* anonymous_var_nameX691);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX692, const unsigned int* anonymous_var_nameX693, unsigned long  int anonymous_var_nameX694);
int wcscasecmp(const unsigned int* anonymous_var_nameX695, const unsigned int* anonymous_var_nameX696);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX697, const unsigned int* anonymous_var_nameX698, struct __locale_struct* anonymous_var_nameX699);
int wcsncasecmp(const unsigned int* anonymous_var_nameX700, const unsigned int* anonymous_var_nameX701, unsigned long  int anonymous_var_nameX702);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX703, const unsigned int* anonymous_var_nameX704, unsigned long  int anonymous_var_nameX705, struct __locale_struct* anonymous_var_nameX706);
int wcscoll_l(const unsigned int* anonymous_var_nameX707, const unsigned int* anonymous_var_nameX708, struct __locale_struct* anonymous_var_nameX709);
unsigned long  int wcsxfrm_l(unsigned int* anonymous_var_nameX710, const unsigned int* anonymous_var_nameX711, unsigned long  int anonymous_var_nameX712, struct __locale_struct* anonymous_var_nameX713);
int wcwidth(unsigned int anonymous_var_nameX714);
int wcswidth(const unsigned int* anonymous_var_nameX715, unsigned long  int anonymous_var_nameX716);
int iswalnum(unsigned int anonymous_var_nameX717);
int iswalpha(unsigned int anonymous_var_nameX718);
int iswblank(unsigned int anonymous_var_nameX719);
int iswcntrl(unsigned int anonymous_var_nameX720);
int iswdigit(unsigned int anonymous_var_nameX721);
int iswgraph(unsigned int anonymous_var_nameX722);
int iswlower(unsigned int anonymous_var_nameX723);
int iswprint(unsigned int anonymous_var_nameX724);
int iswpunct(unsigned int anonymous_var_nameX725);
int iswspace(unsigned int anonymous_var_nameX726);
int iswupper(unsigned int anonymous_var_nameX727);
int iswxdigit(unsigned int anonymous_var_nameX728);
int iswctype(unsigned int anonymous_var_nameX729, unsigned long  int anonymous_var_nameX730);
unsigned int towlower(unsigned int anonymous_var_nameX731);
unsigned int towupper(unsigned int anonymous_var_nameX732);
unsigned long  int wctype(const char* anonymous_var_nameX733);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static unsigned int buffer_get_hash_key(struct buffer* self);
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
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
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
void* come_call_cloner(void* fun, void* mem);
unsigned int come_call_get_hash_key(void* fun, void* mem);
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
static void va_list_finalize(va_list self);
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
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
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
char* get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static int list$1voidphp_length(struct list$1voidph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
void show_type(struct sType* type, struct sInfo* info);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
struct sType* get_no_solved_type(struct sType* type);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* output_function(struct sFun* fun, struct sInfo* info);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
_Bool output_header_file(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_last_code_to_source(struct sInfo* info);
void add_last_code_to_source_with_comma(struct sInfo* info);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEphp_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEphp_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_317;
char* class_name_318;
void* __right_value254 = (void*)0;
char* __result230__;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_319;
void* __right_value256 = (void*)0;
char* result_type_str_330;
int j_331;
struct list$1voidph* o2_saved_332;
struct sType* it_335;
void* __right_value257 = (void*)0;
char* param_type_str_338;
void* __right_value258 = (void*)0;
char* __result237__;
int i_339;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __result238__;
    buf_317=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_318=type->mClass->mName;
    if(    type->mAlignas) {
        if(        !node_compile(type->mAlignas,info)) {
            printf("_Alignas error\n");
            __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("")));
            come_call_finalizer3(buf_317,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
        come_value_319=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(buf_317,"_Alignas(%s) ",come_value_319->c_value);
        come_call_finalizer3(come_value_319,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mStatic&&!no_static) {
        buffer_append_str(buf_317,"static ");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_317,"_Atomic(");
    }
    if(    type->mConstant) {
        buffer_append_str(buf_317,"const ");
    }
    if(    type->mUnsigned) {
        buffer_append_str(buf_317,"unsigned ");
    }
    if(    type->mShort) {
        buffer_append_str(buf_317,"short ");
    }
    if(    string_operator_equals(type->mOriginalTypeName,"va_list")) {
        buffer_append_str(buf_317,"va_list");
    }
    else if(    string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_317,"__builtin_va_list");
    }
    else if(    charp_operator_equals(class_name_318,"__builtin_va_list")) {
        if(        in_header) {
            buffer_append_str(buf_317,class_name_318);
        }
        else {
            buffer_append_str(buf_317,"va_list");
        }
    }
    else if(    type->mClass->mStruct) {
        buffer_append_str(buf_317,"struct ");
        buffer_append_str(buf_317,class_name_318);
    }
    else if(    type->mClass->mUnion) {
        buffer_append_str(buf_317,"union ");
        buffer_append_str(buf_317,class_name_318);
    }
    else if(    type->mClass->mEnum) {
        buffer_append_str(buf_317,"enum ");
        buffer_append_str(buf_317,class_name_318);
    }
    else if(    type->mLongLong) {
        if(        charp_operator_equals(class_name_318,"int")) {
            buffer_append_str(buf_317,"long long int");
        }
        else if(        charp_operator_equals(class_name_318,"long")) {
            buffer_append_str(buf_317,"long long");
        }
    }
    else if(    type->mLong) {
        buffer_append_str(buf_317,"long ");
        if(        charp_operator_equals(class_name_318,"int")) {
            buffer_append_str(buf_317," int");
        }
        else if(        charp_operator_equals(class_name_318,"long")) {
            buffer_append_str(buf_317," long");
        }
        else if(        charp_operator_equals(class_name_318,"double")) {
            buffer_append_str(buf_317," double");
        }
    }
    else if(    charp_operator_equals(class_name_318,"long")) {
        buffer_append_str(buf_317,"long");
    }
    else if(    charp_operator_equals(class_name_318,"__uint128_t")) {
        buffer_append_str(buf_317,"__uint128_t");
    }
    else if(    charp_operator_equals(class_name_318,"bool")) {
        buffer_append_str(buf_317,"_Bool");
    }
    else if(    charp_operator_equals(class_name_318,"lambda")) {
        result_type_str_330=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
        buffer_append_str(buf_317,result_type_str_330);
        buffer_append_str(buf_317," (*)(");
        j_331=0;
        for(        o2_saved_332=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_335=((struct sType*)list$1voidphp_begin((o2_saved_332)));        !list$1voidphp_end((o2_saved_332));        it_335=((struct sType*)list$1voidphp_next((o2_saved_332)))        ){
            param_type_str_338=(char*)come_increment_ref_count(make_type_name_string(it_335,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_317,param_type_str_338);
            if(            j_331!=list$1voidphp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_317,",");
            }
            j_331++;
            param_type_str_338 = come_decrement_ref_count2(param_type_str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_332,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_317,")");
        result_type_str_330 = come_decrement_ref_count2(result_type_str_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        class_name_318==((void*)0)) {
            err_msg(info,"class name is null");
            __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=__builtin_string("")));
            come_call_finalizer3(buf_317,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
        buffer_append_str(buf_317,class_name_318);
    }
    if(    charp_operator_not_equals(class_name_318,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        for(        i_339=0;        i_339<type->mPointerNum;        i_339++        ){
            buffer_append_str(buf_317,"*");
        }
    }
    if(    array_cast_pointer&&list$1sNodephp_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_317,"*");
    }
    if(    type->mRestrict) {
        buffer_append_str(buf_317,"restrict");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_317,")");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_317,((char*)(__right_value259=charp_operator_add(" ",type->mAttribute))));
        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=buffer_to_string(buf_317)));
    come_call_finalizer3(buf_317,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj31;
struct sType* __dec_obj32;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj31=self->c_value;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj32=self->type;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj50=self->c_value_without_right_value_objects;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj51=self->c_value_without_cast_object_value;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct list$1voidph* __dec_obj37;
struct list$1sNodeph* __dec_obj39;
struct list$1voidph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct sType* __dec_obj43;
struct sNode* __dec_obj44;
struct sNode* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj35=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj36=self->mChannelType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj37=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj37,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj39=self->mArrayNum;
            come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj41=self->mParamTypes;
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj42=self->mParamNames;
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj43=self->mResultType;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj44=self->mSizeNum;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj46=self->mOriginalTypeName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj47=self->mAsmName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj48=self->mTupleName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj49=self->mAttribute;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_320;
struct list_item$1voidph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            come_call_finalizer3(__dec_obj38,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_322;
struct list_item$1voidph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_324;
struct list_item$1sNodeph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_326;
struct list_item$1sNodeph* prev_it_327;
    it_326=self->head;
    while(it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        come_call_finalizer3(prev_it_327,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_328;
struct list_item$1charph* prev_it_329;
    it_328=self->head;
    while(it_328!=((void*)0)) {
        prev_it_329=it_328;
        it_328=it_328->next;
        come_call_finalizer3(prev_it_329,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_333;
void* __result231__;
void* __result232__;
void* result_334;
void* __result233__;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(void*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_333;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->head;
    if(    self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_334,0,sizeof(void*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_334;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_336;
void* __result234__;
void* __result235__;
void* result_337;
void* __result236__;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(void*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_336;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_337,0,sizeof(void*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_337;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* buf_340;
char* class_name_341;
int i_342;
void* __right_value263 = (void*)0;
struct sType* gtype_343;
void* __right_value264 = (void*)0;
int i_347;
int i_348;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
char* __result241__;
    buf_340=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 154, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_341=type->mClass->mName;
    buffer_append_str(buf_340,class_name_341);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        buffer_append_str(buf_340,"<");
        for(        i_342=0;        i_342<list$1voidphp_length(type->mGenericsTypes);        i_342++        ){
            gtype_343=((struct sType*)((void*)(__right_value263=list$1voidphp_operator_load_element(type->mGenericsTypes,i_342))));
            come_call_finalizer3(__right_value263,(void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_340,((char*)(__right_value264=make_come_type_name_string(gtype_343,info))));
            __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            i_342!=list$1voidphp_length(type->mGenericsTypes)-1) {
                buffer_append_str(buf_340,",");
            }
        }
        buffer_append_str(buf_340,">");
    }
    if(    charp_operator_not_equals(class_name_341,"lambda")) {
        for(        i_347=0;        i_347<type->mPointerNum;        i_347++        ){
            buffer_append_str(buf_340,"*");
        }
    }
    if(    list$1sNodephp_length(type->mArrayNum)>0) {
        for(        i_348=0;        i_348<list$1sNodephp_length(type->mArrayNum);        i_348++        ){
            buffer_append_str(buf_340,"[]");
        }
    }
    if(    type->mHeap) {
        buffer_append_str(buf_340,"%");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_340,((char*)(__right_value265=charp_operator_add(" ",type->mAttribute))));
        __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result241__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value266=buffer_to_string(buf_340)));
    come_call_finalizer3(buf_340,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_344;
int i_345;
void* __result239__;
void* default_value_346;
void* __result240__;
default_value_346 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_344=self->head;
    i_345=0;
    while(it_344!=((void*)0)) {
        if(        position==i_345) {
            __result239__ = gComeFunResultObject = __result_obj__ = it_344->item;
            gComeFunResultObject = (void*)0;
            return __result239__;
        }
        it_344=it_344->next;
        i_345++;
    }
    memset(&default_value_346,0,sizeof(void*));
    __result240__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_346);
    come_call_finalizer3(default_value_346, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

void show_type(struct sType* type, struct sInfo* info){
void* __right_value267 = (void*)0;
    puts(((char*)(__right_value267=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct buffer* buf_349;
void* __right_value270 = (void*)0;
char* __result242__;
int i_350;
struct list$1voidph* o2_saved_351;
struct sType* it_352;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
char* __result243__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
int i_353;
int i_354;
struct list$1voidph* o2_saved_355;
struct sType* it_356;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
char* __result244__;
void* __right_value279 = (void*)0;
char* __result245__;
    buf_349=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 205, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    type->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string("")));
        come_call_finalizer3(buf_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")) {
        buffer_append_format(buf_349,"(*%s)(",var_name);
        i_350=0;
        for(        o2_saved_351=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_352=((struct sType*)list$1voidphp_begin((o2_saved_351)));        !list$1voidphp_end((o2_saved_351));        it_352=((struct sType*)list$1voidphp_next((o2_saved_351)))        ){
            buffer_append_str(buf_349,((char*)(__right_value271=make_type_name_string(it_352,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            i_350!=list$1voidphp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_349,",");
            }
            i_350++;
        }
        come_call_finalizer3(o2_saved_351,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_349,")");
        __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value273=make_lambda_type_name_string(type->mResultType,((char*)(__right_value272=buffer_to_string(buf_349))),info)));
        come_call_finalizer3(buf_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    else {
        if(        type->mLambdaArray) {
            if(            type->mLambdaArrayNum==0) {
                buffer_append_format(buf_349,"%s (*%s[])(",((char*)(__right_value274=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                buffer_append_format(buf_349,"%s (*%s[%d])(",((char*)(__right_value275=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            buffer_append_format(buf_349,"%s ",((char*)(__right_value276=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            type->mFunctionPointerNum>1) {
                buffer_append_str(buf_349,"(");
                for(                i_353=0;                i_353<type->mFunctionPointerNum;                i_353++                ){
                    buffer_append_str(buf_349,"*");
                }
                buffer_append_format(buf_349,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_349,"(*%s)(",var_name);
            }
        }
        i_354=0;
        for(        o2_saved_355=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_356=((struct sType*)list$1voidphp_begin((o2_saved_355)));        !list$1voidphp_end((o2_saved_355));        it_356=((struct sType*)list$1voidphp_next((o2_saved_355)))        ){
            buffer_append_str(buf_349,((char*)(__right_value277=make_type_name_string(it_356,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            i_354!=list$1voidphp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_349,",");
            }
            i_354++;
        }
        come_call_finalizer3(o2_saved_355,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_349,")");
        __result244__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value278=buffer_to_string(buf_349)));
        come_call_finalizer3(buf_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value279=buffer_to_string(buf_349)));
    come_call_finalizer3(buf_349,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct buffer* buf_357;
void* __right_value317 = (void*)0;
struct sType* type2_358;
void* __right_value318 = (void*)0;
char* str_384;
void* __right_value319 = (void*)0;
char* str_385;
void* __right_value320 = (void*)0;
char* __result261__;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value322 = (void*)0;
char* type_str_387;
void* __right_value323 = (void*)0;
char* type_str_388;
void* __right_value324 = (void*)0;
char* type_str_389;
struct list$1sNodeph* o2_saved_390;
struct sNode* it_393;
void* __right_value325 = (void*)0;
char* __result268__;
void* __right_value326 = (void*)0;
struct CVALUE* cvalue_396;
void* __right_value327 = (void*)0;
char* type_str_397;
void* __right_value328 = (void*)0;
char* __result269__;
void* __right_value329 = (void*)0;
char* __result270__;
    buf_357=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 274, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_358=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type2_358->mArrayPointerType) {
        type2_358->mPointerNum--;
    }
    if(    string_operator_equals(type2_358->mClass->mName,"lambda")&&type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
        str_384=(char*)come_increment_ref_count(header_lambda(type2_358,(char*)come_increment_ref_count(type2_358->mAsmName),info));
        buffer_append_str(buf_357,str_384);
        str_384 = come_decrement_ref_count2(str_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type2_358->mClass->mName,"lambda")) {
        str_385=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_358,name,info));
        buffer_append_str(buf_357,str_385);
        str_385 = come_decrement_ref_count2(str_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    type2_358->mSizeNum!=((void*)0)) {
        if(        !node_compile(type2_358->mSizeNum,info)) {
            err_msg(info,"invalid bit field number");
            __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string("")));
            come_call_finalizer3(buf_357,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
        come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        type_str_387=(char*)come_increment_ref_count(make_type_name_string(type2_358,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_format(buf_357,"%s ",type_str_387);
        buffer_append_format(buf_357,"%s:%s",name,come_value_386->c_value);
        if(        type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
            buffer_append_format(buf_357," __asm__(\"%s\")",type2_358->mAsmName);
        }
        if(        type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
            buffer_append_format(buf_357," __asm__(\"%s\")",type2_358->mAsmName);
        }
        come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        type_str_387 = come_decrement_ref_count2(type_str_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    type2_358->mOmitArrayNum) {
        type_str_388=(char*)come_increment_ref_count(make_type_name_string(type2_358,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_357,type_str_388);
        buffer_append_str(buf_357," ");
        buffer_append_str(buf_357,name);
        buffer_append_str(buf_357,"[]");
        if(        type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
            buffer_append_format(buf_357," __asm__(\"%s\")",type2_358->mAsmName);
        }
        type_str_388 = come_decrement_ref_count2(type_str_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1sNodephp_length(type2_358->mArrayNum)>0) {
        type_str_389=(char*)come_increment_ref_count(make_type_name_string(type2_358,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_357,type_str_389);
        buffer_append_str(buf_357," ");
        buffer_append_str(buf_357,name);
        for(        o2_saved_390=(struct list$1sNodeph*)come_increment_ref_count((type2_358->mArrayNum)),it_393=list$1sNodephp_begin((o2_saved_390));        !list$1sNodephp_end((o2_saved_390));        it_393=list$1sNodephp_next((o2_saved_390))        ){
            if(            !node_compile(it_393,info)) {
                err_msg(info,"invalid array number");
                __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value325=__builtin_string("")));
                come_call_finalizer3(o2_saved_390,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                type_str_389 = come_decrement_ref_count2(type_str_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_357,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
                __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result268__;
            }
            cvalue_396=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_format(buf_357,"[%s]",cvalue_396->c_value);
            come_call_finalizer3(cvalue_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_390,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        if(        type2_358->mArrayPointerType) {
            buffer_append_str(buf_357,"[]");
        }
        if(        type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
            buffer_append_format(buf_357," __asm__(\"%s\")",type2_358->mAsmName);
        }
        type_str_389 = come_decrement_ref_count2(type_str_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        type_str_397=(char*)come_increment_ref_count(make_type_name_string(type2_358,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        string_operator_equals(type_str_397,"")) {
            __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("")));
            type_str_397 = come_decrement_ref_count2(type_str_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_357,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
        buffer_append_str(buf_357,type_str_397);
        buffer_append_str(buf_357," ");
        buffer_append_str(buf_357,name);
        if(        type2_358->mArrayPointerType) {
            buffer_append_str(buf_357,"[]");
        }
        if(        type2_358->mAsmName!=((void*)0)&&string_operator_not_equals(type2_358->mAsmName,"")) {
            buffer_append_format(buf_357," __asm__(\"%s\")",type2_358->mAsmName);
        }
        type_str_397 = come_decrement_ref_count2(type_str_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=buffer_to_string(buf_357)));
    come_call_finalizer3(buf_357,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result246__;
void* __right_value282 = (void*)0;
struct sType* result_366;
void* __right_value283 = (void*)0;
struct sType* __dec_obj52;
void* __right_value284 = (void*)0;
struct sType* __dec_obj53;
void* __right_value285 = (void*)0;
struct sType* __dec_obj54;
void* __right_value286 = (void*)0;
struct sType* __dec_obj55;
void* __right_value293 = (void*)0;
struct list$1voidph* __dec_obj59;
void* __right_value301 = (void*)0;
struct list$1sNodeph* __dec_obj63;
void* __right_value302 = (void*)0;
struct list$1voidph* __dec_obj64;
void* __right_value309 = (void*)0;
struct list$1charph* __dec_obj68;
void* __right_value310 = (void*)0;
struct sType* __dec_obj69;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value313 = (void*)0;
char* __dec_obj72;
void* __right_value314 = (void*)0;
char* __dec_obj73;
void* __right_value315 = (void*)0;
char* __dec_obj74;
void* __right_value316 = (void*)0;
char* __dec_obj75;
struct sType* __result260__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_366=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_366->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj52=result_366->mNoSolvedGenericsType;
        result_366->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj53=result_366->mOriginalLoadVarType;
        result_366->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj54=result_366->mAnyOriginalType;
        result_366->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj55=result_366->mChannelType;
        result_366->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj59=result_366->mGenericsTypes;
        result_366->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj59,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj63=result_366->mArrayNum;
        result_366->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj63,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj64=result_366->mParamTypes;
        result_366->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj64,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj68=result_366->mParamNames;
        result_366->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj69=result_366->mResultType;
        result_366->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_366->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_366->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_366->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_366->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_366->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_366->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_366->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_366->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_366->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_366->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_366->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_366->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_366->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_366->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_366->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_366->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_366->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj70=result_366->mSizeNum;
        result_366->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_366->mAlignas;
        result_366->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_366->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj72=result_366->mOriginalTypeName;
        result_366->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_366->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_366->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_366->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj73=result_366->mAsmName;
        result_366->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_366->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_366->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj74=result_366->mTupleName;
        result_366->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj75=result_366->mAttribute;
        result_366->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_366->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_366->mDynamic=self->mDynamic;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_366;
    come_call_finalizer3(result_366,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_359;
    result_359=0;
    result_359+=int_get_hash_key(((int)self->mClass));
    result_359+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_359+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_359+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_359+=int_get_hash_key(((int)self->mChannelType));
    result_359+=int_get_hash_key(((int)self->mAnyClass));
    result_359+=int_get_hash_key(((int)self->mGenericsTypes));
    result_359+=int_get_hash_key(((int)self->mArrayNum));
    result_359+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_359+=int_get_hash_key(((int)self->mParamTypes));
    result_359+=int_get_hash_key(((int)self->mParamNames));
    result_359+=int_get_hash_key(((int)self->mResultType));
    result_359+=int_get_hash_key(((int)self->mVarArgs));
    result_359+=int_get_hash_key(((int)self->mUnsigned));
    result_359+=int_get_hash_key(((int)self->mShort));
    result_359+=int_get_hash_key(((int)self->mLong));
    result_359+=int_get_hash_key(((int)self->mLongLong));
    result_359+=int_get_hash_key(((int)self->mConstant));
    result_359+=int_get_hash_key(((int)self->mAtomic));
    result_359+=int_get_hash_key(((int)self->mRegister));
    result_359+=int_get_hash_key(((int)self->mVolatile));
    result_359+=int_get_hash_key(((int)self->mStatic));
    result_359+=int_get_hash_key(((int)self->mUniq));
    result_359+=int_get_hash_key(((int)self->mRecord));
    result_359+=int_get_hash_key(((int)self->mExtern));
    result_359+=int_get_hash_key(((int)self->mRestrict));
    result_359+=int_get_hash_key(((int)self->mImmutable));
    result_359+=int_get_hash_key(((int)self->mHeap));
    result_359+=int_get_hash_key(((int)self->mChannel));
    result_359+=int_get_hash_key(((int)self->mNoHeap));
    result_359+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_359+=int_get_hash_key(((int)self->mException));
    result_359+=int_get_hash_key(((int)self->mSizeNum));
    result_359+=int_get_hash_key(((int)self->mAlignas));
    result_359+=int_get_hash_key(((int)self->mPointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_359+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_359+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_359+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_359+=int_get_hash_key(((int)self->mAllocaValue));
    result_359+=int_get_hash_key(((int)self->mInline));
    result_359+=int_get_hash_key(((int)self->mNullValue));
    result_359+=int_get_hash_key(((int)self->mGuardValue));
    result_359+=int_get_hash_key(((int)self->mAsmName));
    result_359+=int_get_hash_key(((int)self->mArrayPointerType));
    result_359+=int_get_hash_key(((int)self->mLambdaArray));
    result_359+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_359+=int_get_hash_key(((int)self->mTypedef));
    result_359+=int_get_hash_key(((int)self->mMultipleTypes));
    result_359+=int_get_hash_key(((int)self->mOriginIsArray));
    result_359+=int_get_hash_key(((int)self->mTupleName));
    result_359+=int_get_hash_key(((int)self->mAttribute));
    result_359+=int_get_hash_key(((int)self->mGenerate));
    result_359+=int_get_hash_key(((int)self->mCreateVTable));
    result_359+=int_get_hash_key(((int)self->mDynamic));
    return result_359;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_360;
struct list_item$1voidph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_360->item, it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_362;
struct list_item$1sNodeph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !sNode_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_364;
struct list_item$1charph* it2_365;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_364=left->head;
    it2_365=right->head;
    while(it_364!=((void*)0)) {
        if(        !string_equals(it_364->item,it2_365->item)) {
            return (_Bool)0;
        }
        it_364=it_364->next;
        it2_365=it2_365->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result247__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1voidph* result_368;
struct list_item$1voidph* it_369;
void* __right_value292 = (void*)0;
struct list$1voidph* __result250__;
    if(    self==((void*)0)) {
        __result247__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_368=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_369=self->head;
    while(it_369!=((void*)0)) {
        list$1voidphp_add(result_368,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_369->item)));
        it_369=it_369->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_368;
    come_call_finalizer3(result_368,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_367;
    result_367=0;
    result_367+=int_get_hash_key(((int)self->head));
    result_367+=int_get_hash_key(((int)self->tail));
    result_367+=int_get_hash_key(((int)self->len));
    result_367+=int_get_hash_key(((int)self->it));
    return result_367;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result248__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1voidph* litem_370;
void* __dec_obj56;
void* __right_value290 = (void*)0;
struct list_item$1voidph* litem_371;
void* __dec_obj57;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_372;
void* __dec_obj58;
struct list$1voidph* __result249__;
    if(    self->len==0) {
        litem_370=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value289=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj56=litem_370->item;
        litem_370->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value290=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj57=litem_371->item;
        litem_371->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj58=litem_372->item;
        litem_372->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result251__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNodeph* result_373;
struct list_item$1sNodeph* it_374;
void* __right_value300 = (void*)0;
struct list$1sNodeph* __result256__;
    if(    self==((void*)0)) {
        __result251__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_373=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        list$1sNodephp_add(result_373,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_374->item)));
        it_374=it_374->next;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_373;
    come_call_finalizer3(result_373,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result252__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_375;
struct sNode* __dec_obj60;
void* __right_value297 = (void*)0;
struct list_item$1sNodeph* litem_376;
struct sNode* __dec_obj61;
void* __right_value298 = (void*)0;
struct list_item$1sNodeph* litem_377;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result253__;
    if(    self->len==0) {
        litem_375=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj60=litem_375->item;
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value297=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj61=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value298=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj62=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result254__;
void* __right_value299 = (void*)0;
struct sNode* result_378;
struct sNode* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_378=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_378->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_378->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_378->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_378->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_378->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_378->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_378->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_378->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_378->kind=self->kind;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_378;
    if(result_378) { result_378 = come_decrement_ref_count2(result_378, ((struct sNode*)result_378)->finalize, ((struct sNode*)result_378)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result257__;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1charph* result_379;
struct list_item$1charph* it_380;
void* __right_value308 = (void*)0;
struct list$1charph* __result259__;
    if(    self==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_379=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_380=self->head;
    while(it_380!=((void*)0)) {
        list$1charphp_add(result_379,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_380->item)));
        it_380=it_380->next;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_379;
    come_call_finalizer3(result_379,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
struct list_item$1charph* litem_381;
char* __dec_obj65;
void* __right_value306 = (void*)0;
struct list_item$1charph* litem_382;
char* __dec_obj66;
void* __right_value307 = (void*)0;
struct list_item$1charph* litem_383;
char* __dec_obj67;
struct list$1charph* __result258__;
    if(    self->len==0) {
        litem_381=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=((void*)0);
        litem_381->next=((void*)0);
        __dec_obj65=litem_381->item;
        litem_381->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_381;
        self->head=litem_381;
    }
    else if(    self->len==1) {
        litem_382=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value306=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->head;
        litem_382->next=((void*)0);
        __dec_obj66=litem_382->item;
        litem_382->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_382;
        self->head->next=litem_382;
    }
    else {
        litem_383=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value307=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->tail;
        litem_383->next=((void*)0);
        __dec_obj67=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_383;
        self->tail=litem_383;
    }
    self->len++;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_391;
struct sNode* __result262__;
struct sNode* __result263__;
struct sNode* result_392;
struct sNode* __result264__;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_391,0,sizeof(struct sNode*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_391;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->head;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_392,0,sizeof(struct sNode*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_392;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_394;
struct sNode* __result265__;
struct sNode* __result266__;
struct sNode* result_395;
struct sNode* __result267__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_394,0,sizeof(struct sNode*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_395,0,sizeof(struct sNode*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

struct sType* get_no_solved_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* result_398;
struct sType* __dec_obj76;
void* __right_value330 = (void*)0;
struct sType* __dec_obj77;
int i_399;
struct list$1voidph* o2_saved_400;
struct sType* it_401;
void* __right_value334 = (void*)0;
struct sType* __result274__;
result_398 = (void*)0;
    if(    type->mNoSolvedGenericsType) {
        __dec_obj76=result_398;
        result_398=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj77=result_398;
        result_398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_399=0;
    for(    o2_saved_400=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_401=((struct sType*)list$1voidphp_begin((o2_saved_400)));    !list$1voidphp_end((o2_saved_400));    it_401=((struct sType*)list$1voidphp_next((o2_saved_400)))    ){
        list$1voidphp_operator_store_element(result_398->mGenericsTypes,i_399,(struct sType*)come_increment_ref_count(get_no_solved_type(it_401)));
        i_399++;
    }
    come_call_finalizer3(o2_saved_400,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result274__ = gComeFunResultObject = __result_obj__ = result_398;
    come_call_finalizer3(result_398,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_402;
int i_403;
void* default_value_404;
struct list$1voidph* __result272__;
struct list_item$1voidph* it_408;
int i_409;
void* __dec_obj81;
struct list$1voidph* __result273__;
default_value_404 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_402=self->len;
        for(        i_403=0;        i_403<position-len_402;        i_403++        ){
            memset(&default_value_404,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_404));
            come_call_finalizer3(default_value_404, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result272__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    it_408=self->head;
    i_409=0;
    while(it_408!=((void*)0)) {
        if(        position==i_409) {
            __dec_obj81=it_408->item;
            it_408->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj81,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_408=it_408->next;
        i_409++;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
struct list_item$1voidph* litem_405;
void* __dec_obj78;
void* __right_value332 = (void*)0;
struct list_item$1voidph* litem_406;
void* __dec_obj79;
void* __right_value333 = (void*)0;
struct list_item$1voidph* litem_407;
void* __dec_obj80;
struct list$1voidph* __result271__;
    if(    self->len==0) {
        litem_405=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value331=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_405->prev=((void*)0);
        litem_405->next=((void*)0);
        __dec_obj78=litem_405->item;
        litem_405->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_405;
        self->head=litem_405;
    }
    else if(    self->len==1) {
        litem_406=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value332=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_406->prev=self->head;
        litem_406->next=((void*)0);
        __dec_obj79=litem_406->item;
        litem_406->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_406;
        self->head->next=litem_406;
    }
    else {
        litem_407=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value333=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=self->tail;
        litem_407->next=((void*)0);
        __dec_obj80=litem_407->item;
        litem_407->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_407;
        self->tail=litem_407;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct buffer* buf_410;
int i_411;
void* __right_value337 = (void*)0;
char* __result275__;
void* __right_value338 = (void*)0;
struct sType* no_solved_type_412;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct buffer* buf_413;
char* class_name_414;
int i_415;
void* __right_value341 = (void*)0;
struct sType* gtype_416;
void* __right_value342 = (void*)0;
int i_417;
int i_418;
void* __right_value343 = (void*)0;
char* __result276__;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")) {
        buf_410=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 399, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_410,type->mOriginalTypeName);
        for(        i_411=0;        i_411<type->mOriginalTypeNamePointerNum;        i_411++        ){
            buffer_append_str(buf_410,"*");
        }
        if(        type->mOriginalTypeNameHeap) {
            buffer_append_str(buf_410,"%");
        }
        __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value337=buffer_to_string(buf_410)));
        come_call_finalizer3(buf_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result275__;
        come_call_finalizer3(buf_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        no_solved_type_412=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
        buf_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 414, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        class_name_414=no_solved_type_412->mClass->mName;
        buffer_append_str(buf_413,class_name_414);
        if(        list$1voidphp_length(no_solved_type_412->mGenericsTypes)>0) {
            buffer_append_str(buf_413,"<");
            for(            i_415=0;            i_415<list$1voidphp_length(no_solved_type_412->mGenericsTypes);            i_415++            ){
                gtype_416=((struct sType*)((void*)(__right_value341=list$1voidphp_operator_load_element(no_solved_type_412->mGenericsTypes,i_415))));
                come_call_finalizer3(__right_value341,(void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_413,((char*)(__right_value342=make_come_type_name_string_no_solved(gtype_416,(_Bool)1,info))));
                __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                i_415!=list$1voidphp_length(no_solved_type_412->mGenericsTypes)-1) {
                    buffer_append_str(buf_413,",");
                }
            }
            buffer_append_str(buf_413,">");
        }
        if(        charp_operator_not_equals(class_name_414,"lambda")) {
            for(            i_417=0;            i_417<no_solved_type_412->mPointerNum;            i_417++            ){
                buffer_append_str(buf_413,"*");
            }
        }
        if(        list$1sNodephp_length(no_solved_type_412->mArrayNum)>0) {
            for(            i_418=0;            i_418<list$1sNodephp_length(no_solved_type_412->mArrayNum);            i_418++            ){
                buffer_append_str(buf_413,"[]");
            }
        }
        if(        no_solved_type_412->mHeap) {
            buffer_append_str(buf_413,"%");
        }
        __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value343=buffer_to_string(buf_413)));
        come_call_finalizer3(no_solved_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result276__;
        come_call_finalizer3(no_solved_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
char* type_name_419;
void* __right_value345 = (void*)0;
char* __result277__;
    type_name_419=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(type,original_type_name,info));
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value345=xsprintf("%s %s",type_name_419,name)));
    type_name_419 = come_decrement_ref_count2(type_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct buffer* output_420;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct buffer* output2_421;
int i_422;
struct list$1voidph* o2_saved_423;
struct sType* it_424;
void* __right_value350 = (void*)0;
char* name_425;
void* __right_value351 = (void*)0;
char* str_429;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* str_430;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* base_result_type_431;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value359 = (void*)0;
char* result_type_str_432;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
int i_433;
struct list$1voidph* o2_saved_434;
struct sType* it_435;
void* __right_value362 = (void*)0;
char* name_436;
void* __right_value363 = (void*)0;
char* str_437;
void* __right_value364 = (void*)0;
struct sNode* node_438;
void* __right_value365 = (void*)0;
char* __result282__;
void* __right_value366 = (void*)0;
struct CVALUE* cvalue_442;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* result_type_str_443;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
int i_444;
struct list$1voidph* o2_saved_445;
struct sType* it_446;
void* __right_value371 = (void*)0;
char* name_447;
void* __right_value372 = (void*)0;
char* str_448;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* __result283__;
    output_420=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 464, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    fun->mResultType->mResultType) {
        output2_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 466, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(output2_421,fun->mName);
        buffer_append_str(output2_421,"(");
        i_422=0;
        for(        o2_saved_423=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_424=((struct sType*)list$1voidphp_begin((o2_saved_423)));        !list$1voidphp_end((o2_saved_423));        it_424=((struct sType*)list$1voidphp_next((o2_saved_423)))        ){
            name_425=((char*)(__right_value350=list$1charphp_operator_load_element(fun->mParamNames,i_422)));
            __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_429=(char*)come_increment_ref_count(make_define_var(it_424,name_425,(_Bool)0,info));
            buffer_append_str(output2_421,str_429);
            if(            i_422==list$1voidphp_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output2_421,", ...");
                }
            }
            else {
                buffer_append_str(output2_421,", ");
            }
            i_422++;
            str_429 = come_decrement_ref_count2(str_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_423,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_421,")");
        str_430=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value352=buffer_to_string(output2_421))),info));
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_420,((char*)(__right_value355=xsprintf("\%s ",((char*)(__right_value354=string_to_string(fun->mAttribute)))))));
            __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_420,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_420,"inline ");
        }
        buffer_append_str(output_420,str_430);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value356=buffer_to_string(output_420))));
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer3(output2_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_430 = come_decrement_ref_count2(str_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1sNodephp_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_431=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj82=base_result_type_431->mArrayNum;
        base_result_type_431->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 517, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        result_type_str_432=(char*)come_increment_ref_count(make_type_name_string(base_result_type_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_420,((char*)(__right_value361=xsprintf("\%s ",((char*)(__right_value360=string_to_string(fun->mAttribute)))))));
            __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_420,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_420,"inline ");
        }
        buffer_append_str(output_420,result_type_str_432);
        buffer_append_str(output_420," (*");
        buffer_append_str(output_420,fun->mName);
        buffer_append_str(output_420,"(");
        i_433=0;
        for(        o2_saved_434=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_435=((struct sType*)list$1voidphp_begin((o2_saved_434)));        !list$1voidphp_end((o2_saved_434));        it_435=((struct sType*)list$1voidphp_next((o2_saved_434)))        ){
            name_436=((char*)(__right_value362=list$1charphp_operator_load_element(fun->mParamNames,i_433)));
            __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_437=(char*)come_increment_ref_count(make_define_var(it_435,name_436,(_Bool)0,info));
            buffer_append_str(output_420,str_437);
            if(            i_433==list$1voidphp_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_420,", ...");
                }
            }
            else {
                buffer_append_str(output_420,", ");
            }
            i_433++;
            str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_434,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        node_438=((struct sNode*)(__right_value364=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
        if(__right_value364) { __right_value364 = come_decrement_ref_count2(__right_value364, ((struct sNode*)__right_value364)->finalize, ((struct sNode*)__right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(        !node_compile(node_438,info)) {
            err_msg(info,"invalid array number");
            __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("")));
            come_call_finalizer3(base_result_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_432 = come_decrement_ref_count2(result_type_str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(output_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
        cvalue_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(output_420,"))[%s]",cvalue_442->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value367=buffer_to_string(output_420))));
        __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer3(base_result_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_str_432 = come_decrement_ref_count2(result_type_str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cvalue_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        result_type_str_443=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_420,((char*)(__right_value370=xsprintf("\%s ",((char*)(__right_value369=string_to_string(fun->mAttribute)))))));
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_420,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_420,"inline ");
        }
        buffer_append_str(output_420,result_type_str_443);
        buffer_append_str(output_420," ");
        buffer_append_str(output_420,fun->mName);
        buffer_append_str(output_420,"(");
        i_444=0;
        for(        o2_saved_445=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_446=((struct sType*)list$1voidphp_begin((o2_saved_445)));        !list$1voidphp_end((o2_saved_445));        it_446=((struct sType*)list$1voidphp_next((o2_saved_445)))        ){
            name_447=((char*)(__right_value371=list$1charphp_operator_load_element(fun->mParamNames,i_444)));
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_448=(char*)come_increment_ref_count(make_define_var(it_446,name_447,(_Bool)0,info));
            buffer_append_str(output_420,str_448);
            if(            i_444==list$1voidphp_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_420,", ...");
                }
            }
            else {
                buffer_append_str(output_420,", ");
            }
            i_444++;
            str_448 = come_decrement_ref_count2(str_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output_420,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value373=buffer_to_string(output_420))));
        __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        result_type_str_443 = come_decrement_ref_count2(result_type_str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(output_420,"{\n");
    buffer_append_str(output_420,((char*)(__right_value374=buffer_to_string(fun->mSourceHead))));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_420,((char*)(__right_value375=buffer_to_string(fun->mSourceHead2))));
    __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_420,((char*)(__right_value376=buffer_to_string(fun->mSource))));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_420,"}\n");
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=buffer_to_string(output_420)));
    come_call_finalizer3(output_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_426;
int i_427;
char* __result278__;
char* default_value_428;
char* __result279__;
default_value_428 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_426=self->head;
    i_427=0;
    while(it_426!=((void*)0)) {
        if(        position==i_427) {
            __result278__ = gComeFunResultObject = __result_obj__ = it_426->item;
            gComeFunResultObject = (void*)0;
            return __result278__;
        }
        it_426=it_426->next;
        i_427++;
    }
    memset(&default_value_428,0,sizeof(char*));
    __result279__ = gComeFunResultObject = __result_obj__ = default_value_428;
    default_value_428 = come_decrement_ref_count2(default_value_428, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_439;
int i_440;
struct sNode* __result280__;
struct sNode* default_value_441;
struct sNode* __result281__;
default_value_441 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_439=self->head;
    i_440=0;
    while(it_439!=((void*)0)) {
        if(        position==i_440) {
            __result280__ = gComeFunResultObject = __result_obj__ = it_439->item;
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        it_439=it_439->next;
        i_440++;
    }
    memset(&default_value_441,0,sizeof(struct sNode*));
    __result281__ = gComeFunResultObject = __result_obj__ = default_value_441;
    if(default_value_441) { default_value_441 = come_decrement_ref_count2(default_value_441, ((struct sNode*)default_value_441)->finalize, ((struct sNode*)default_value_441)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct buffer* output_449;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct buffer* output2_450;
int i_451;
struct list$1voidph* o2_saved_452;
struct sType* it_453;
void* __right_value382 = (void*)0;
char* name_454;
void* __right_value383 = (void*)0;
char* str_455;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
char* str_456;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* base_result_type_457;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct list$1sNodeph* __dec_obj83;
void* __right_value390 = (void*)0;
char* result_type_str_458;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
int i_459;
struct list$1voidph* o2_saved_460;
struct sType* it_461;
void* __right_value393 = (void*)0;
char* name_462;
void* __right_value394 = (void*)0;
char* str_463;
void* __right_value395 = (void*)0;
struct sNode* node_464;
void* __right_value396 = (void*)0;
char* __result284__;
void* __right_value397 = (void*)0;
struct CVALUE* cvalue_465;
void* __right_value398 = (void*)0;
char* result_type_str_466;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
int i_467;
struct list$1voidph* o2_saved_468;
struct sType* it_469;
void* __right_value401 = (void*)0;
char* name_470;
void* __right_value402 = (void*)0;
char* str_471;
void* __right_value403 = (void*)0;
char* __result285__;
    output_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 646, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    fun->mResultType->mResultType) {
        output2_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 649, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(output2_450,fun->mName);
        buffer_append_str(output2_450,"(");
        i_451=0;
        for(        o2_saved_452=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_453=((struct sType*)list$1voidphp_begin((o2_saved_452)));        !list$1voidphp_end((o2_saved_452));        it_453=((struct sType*)list$1voidphp_next((o2_saved_452)))        ){
            name_454=((char*)(__right_value382=list$1charphp_operator_load_element(fun->mParamNames,i_451)));
            __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_455=(char*)come_increment_ref_count(make_define_var(it_453,name_454,(_Bool)0,info));
            buffer_append_str(output2_450,str_455);
            if(            i_451!=list$1voidphp_length(fun->mParamTypes)-1) {
                buffer_append_str(output2_450,", ");
            }
            i_451++;
            str_455 = come_decrement_ref_count2(str_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_452,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_450,")");
        str_456=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value384=buffer_to_string(output2_450))),info));
        __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_449,((char*)(__right_value387=xsprintf("\%s ",((char*)(__right_value386=string_to_string(fun->mAttribute)))))));
            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_449,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_449,"inline ");
        }
        buffer_append_str(output_449,str_456);
        buffer_append_str(output_449,";\n");
        come_call_finalizer3(output2_450,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_456 = come_decrement_ref_count2(str_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1sNodephp_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_457=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj83=base_result_type_457->mArrayNum;
        base_result_type_457->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 691, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        result_type_str_458=(char*)come_increment_ref_count(make_type_name_string(base_result_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_449,((char*)(__right_value392=xsprintf("\%s ",((char*)(__right_value391=string_to_string(fun->mAttribute)))))));
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_449,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_449,"inline ");
        }
        buffer_append_str(output_449,result_type_str_458);
        buffer_append_str(output_449," (*");
        buffer_append_str(output_449,fun->mName);
        buffer_append_str(output_449,"(");
        i_459=0;
        for(        o2_saved_460=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_461=((struct sType*)list$1voidphp_begin((o2_saved_460)));        !list$1voidphp_end((o2_saved_460));        it_461=((struct sType*)list$1voidphp_next((o2_saved_460)))        ){
            name_462=((char*)(__right_value393=list$1charphp_operator_load_element(fun->mParamNames,i_459)));
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_463=(char*)come_increment_ref_count(make_define_var(it_461,name_462,(_Bool)0,info));
            buffer_append_str(output_449,str_463);
            if(            i_459==list$1voidphp_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_449,", ...");
                }
            }
            else {
                buffer_append_str(output_449,", ");
            }
            i_459++;
            str_463 = come_decrement_ref_count2(str_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_460,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        node_464=((struct sNode*)(__right_value395=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
        if(__right_value395) { __right_value395 = come_decrement_ref_count2(__right_value395, ((struct sNode*)__right_value395)->finalize, ((struct sNode*)__right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(        !node_compile(node_464,info)) {
            err_msg(info,"invalid array number");
            __result284__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("")));
            come_call_finalizer3(base_result_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_458 = come_decrement_ref_count2(result_type_str_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(output_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
        cvalue_465=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(output_449,"))[%s];\n",cvalue_465->c_value);
        come_call_finalizer3(base_result_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_str_458 = come_decrement_ref_count2(result_type_str_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cvalue_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        result_type_str_466=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_449,((char*)(__right_value400=xsprintf("\%s ",((char*)(__right_value399=string_to_string(fun->mAttribute)))))));
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(        fun->mStatic) {
            buffer_append_str(output_449,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_449,"inline ");
        }
        buffer_append_str(output_449,result_type_str_466);
        buffer_append_str(output_449," ");
        buffer_append_str(output_449,fun->mName);
        buffer_append_str(output_449,"(");
        i_467=0;
        for(        o2_saved_468=(struct list$1voidph*)come_increment_ref_count((fun->mParamTypes)),it_469=((struct sType*)list$1voidphp_begin((o2_saved_468)));        !list$1voidphp_end((o2_saved_468));        it_469=((struct sType*)list$1voidphp_next((o2_saved_468)))        ){
            name_470=((char*)(__right_value401=list$1charphp_operator_load_element(fun->mParamNames,i_467)));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_471=(char*)come_increment_ref_count(make_define_var(it_469,name_470,(_Bool)0,info));
            buffer_append_str(output_449,str_471);
            if(            i_467==list$1voidphp_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_449,", ...");
                }
            }
            else {
                buffer_append_str(output_449,", ");
            }
            i_467++;
            str_471 = come_decrement_ref_count2(str_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_468,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output_449,");\n");
        result_type_str_466 = come_decrement_ref_count2(result_type_str_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=buffer_to_string(output_449)));
    come_call_finalizer3(output_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct buffer* output_472;
void* __right_value406 = (void*)0;
char* result_type_str_473;
int i_474;
struct list$1voidph* o2_saved_475;
struct sType* it_476;
void* __right_value407 = (void*)0;
char* name_477;
void* __right_value408 = (void*)0;
char* str_478;
void* __right_value409 = (void*)0;
char* __result286__;
    output_472=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 799, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_type_str_473=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_472,result_type_str_473);
    buffer_append_str(output_472," ");
    buffer_append_str(output_472,name);
    buffer_append_str(output_472,"(");
    i_474=0;
    for(    o2_saved_475=(struct list$1voidph*)come_increment_ref_count((lambda_type->mParamTypes)),it_476=((struct sType*)list$1voidphp_begin((o2_saved_475)));    !list$1voidphp_end((o2_saved_475));    it_476=((struct sType*)list$1voidphp_next((o2_saved_475)))    ){
        name_477=((char*)(__right_value407=list$1charphp_operator_load_element(lambda_type->mParamNames,i_474)));
        __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        str_478=(char*)come_increment_ref_count(make_define_var(it_476,name_477,(_Bool)0,info));
        buffer_append_str(output_472,str_478);
        if(        i_474==list$1voidphp_length(lambda_type->mParamTypes)-1) {
            if(            lambda_type->mVarArgs) {
                buffer_append_str(output_472,", ...");
            }
        }
        else {
            buffer_append_str(output_472,", ");
        }
        i_474++;
        str_478 = come_decrement_ref_count2(str_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_475,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(output_472,");\n");
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value409=buffer_to_string(output_472)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(output_472,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_type_str_473 = come_decrement_ref_count2(result_type_str_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_479;
va_list args_480;
int len_481;
int i_482;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
msg2_479 = (void*)0;
memset(&args_480, 0, sizeof(va_list));
memset(&i_482, 0, sizeof(int));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_480,msg);
    len_481=vasprintf(&msg2_479,msg,args_480);
    __builtin_va_end(args_480);
    if(    info->come_fun) {
        for(        i_482=0;        i_482<info->block_level;        i_482++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value410=xsprintf("%s",msg2_479))));
        __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value411=xsprintf("%s",msg2_479))));
        __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    free(msg2_479);
    come_call_finalizer3((&args_480),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_483;
va_list args_484;
int len_485;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
_Bool _if_conditional1;
void* __right_value414 = (void*)0;
void* __right_value423 = (void*)0;
msg2_483 = (void*)0;
memset(&args_484, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        id = come_decrement_ref_count2(id, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_484,msg);
        len_485=vasprintf(&msg2_483,msg,args_484);
        __builtin_va_end(args_484);
        if(        (_if_conditional1=(((char*)((void*)(__right_value413=map$2voidphvoidphp_operator_load_element(info->module->mHeader,((char*)(__right_value412=__builtin_string(id)))))))==((void*)0))),        (__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        come_call_finalizer3(__right_value413,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            map$2voidphvoidphp_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_483)));
        }
        free(msg2_483);
        come_call_finalizer3((&args_484),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
    id = come_decrement_ref_count2(id, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_486;
unsigned int hash_487;
unsigned int it_488;
void* __result287__;
void* __result288__;
void* __result289__;
void* __result290__;
default_value_486 = (void*)0;
    memset(&default_value_486,0,sizeof(void*));
    hash_487=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_488=hash_487;
    while((_Bool)1) {
        if(        self->item_existance[it_488]) {
            if(            come_call_equals((void*)0, self->keys[it_488], ((char*)key))) {
                __result287__ = gComeFunResultObject = __result_obj__ = self->items[it_488];
                come_call_finalizer3(default_value_486, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
            it_488++;
            if(            it_488>=self->size) {
                it_488=0;
            }
            else if(            it_488==hash_487) {
                __result288__ = gComeFunResultObject = __result_obj__ = ((char*)default_value_486);
                come_call_finalizer3(default_value_486, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
        }
        else {
            __result289__ = gComeFunResultObject = __result_obj__ = ((char*)default_value_486);
            come_call_finalizer3(default_value_486, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
    }
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)default_value_486);
    come_call_finalizer3(default_value_486, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item){
    map$2voidphvoidphp_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_506;
unsigned int it_507;
_Bool same_key_exist_524;
char* it2_527;
struct map$2voidphvoidph* __result312__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_506=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_507=hash_506;
    while((_Bool)1) {
        if(        self->item_existance[it_507]) {
            if(            come_call_equals((void*)0, self->keys[it_507], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_507]);
                    come_call_finalizer3(self->keys[it_507], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_507]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_507]);
                    self->keys[it_507]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_507], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_507]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_507]=item;
                }
                break;
            }
            it_507++;
            if(            it_507>=self->size) {
                it_507=0;
            }
            else if(            it_507==hash_506) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_507]=(_Bool)1;
            if(            1) {
                self->keys[it_507]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_507]=key;
            }
            if(            1) {
                self->items[it_507]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_507]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_524=(_Bool)0;
    for(    it2_527=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_527=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_527, key)) {
            same_key_exist_524=(_Bool)1;
        }
    }
    if(    !same_key_exist_524) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_489;
void* __right_value415 = (void*)0;
void** keys_490;
void* __right_value416 = (void*)0;
void** items_491;
void* __right_value417 = (void*)0;
_Bool* item_existance_492;
int len_493;
void* it_496;
void* default_value_499;
void* __right_value418 = (void*)0;
void* it2_500;
unsigned int hash_503;
int n_504;
void* default_value_505;
void* __right_value419 = (void*)0;
default_value_499 = (void*)0;
default_value_505 = (void*)0;
    size_489=self->size*10;
    keys_490=(void**)come_increment_ref_count(((void**)(__right_value415=(void**)come_calloc(1, sizeof(void*)*(1*(size_489)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_491=(void**)come_increment_ref_count(((void**)(__right_value416=(void**)come_calloc(1, sizeof(void*)*(1*(size_489)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_492=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value417=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_489)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_493=0;
    for(    it_496=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_496=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_499,0,sizeof(void*));
        it2_500=((void*)(__right_value418=map$2voidphvoidphp_at(self,it_496,default_value_499)));
        come_call_finalizer3(__right_value418,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_503=come_call_get_hash_key((void*)0, ((void*)it_496))%size_489;
        n_504=hash_503;
        while((_Bool)1) {
            if(            item_existance_492[n_504]) {
                n_504++;
                if(                n_504>=size_489) {
                    n_504=0;
                }
                else if(                n_504==hash_503) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_492[n_504]=(_Bool)1;
                keys_490[n_504]=it_496;
                items_491[n_504]=((void*)(__right_value419=map$2voidphvoidphp_at(self,it_496,default_value_505)));
                come_call_finalizer3(__right_value419,(void*)0, 0, 1, 0, 0, (void*)0);
                len_493++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_490;
    self->items=items_491;
    self->item_existance=item_existance_492;
    self->size=size_489;
    self->len=len_493;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_494;
void* __result291__;
void* __result292__;
void* result_495;
void* __result293__;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(void*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_494;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_495,0,sizeof(void*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_495;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_497;
void* __result294__;
void* __result295__;
void* result_498;
void* __result296__;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_497,0,sizeof(void*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_497;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_498,0,sizeof(void*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_498;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_501;
unsigned int it_502;
void* __result297__;
void* __result298__;
void* __result299__;
void* __result300__;
    hash_501=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_502=hash_501;
    while((_Bool)1) {
        if(        self->item_existance[it_502]) {
            if(            come_call_equals((void*)0, self->keys[it_502], key)) {
                __result297__ = gComeFunResultObject = __result_obj__ = self->items[it_502];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            it_502++;
            if(            it_502>=self->size) {
                it_502=0;
            }
            else if(            it_502==hash_501) {
                __result298__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        else {
            __result299__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_508;
struct list_item$1voidp* it_509;
struct list$1voidp* __result304__;
    it2_508=0;
    it_509=self->head;
    while(it_509!=((void*)0)) {
        if(        come_call_equals((void*)0, it_509->item, item)) {
            list$1voidpp_delete(self,it2_508,it2_508+1);
            break;
        }
        it2_508++;
        it_509=it_509->next;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_510;
struct list$1voidp* __result301__;
struct list_item$1voidp* it_513;
int i_514;
struct list_item$1voidp* prev_it_515;
struct list_item$1voidp* it_516;
int i_517;
struct list_item$1voidp* prev_it_518;
struct list_item$1voidp* it_519;
struct list_item$1voidp* head_prev_it_520;
struct list_item$1voidp* tail_it_521;
int i_522;
struct list_item$1voidp* prev_it_523;
struct list$1voidp* __result303__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_510=tail;
        tail=head;
        head=tmp_510;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result301__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_513=self->head;
        i_514=0;
        while(it_513!=((void*)0)) {
            if(            i_514<tail) {
                prev_it_515=it_513;
                it_513=it_513->next;
                i_514++;
                come_call_finalizer3(prev_it_515,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_514==tail) {
                self->head=it_513;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_513=it_513->next;
                i_514++;
            }
        }
    }
    else if(    tail==self->len) {
        it_516=self->head;
        i_517=0;
        while(it_516!=((void*)0)) {
            if(            i_517==head) {
                self->tail=it_516->prev;
                self->tail->next=((void*)0);
            }
            if(            i_517>=head) {
                prev_it_518=it_516;
                it_516=it_516->next;
                i_517++;
                come_call_finalizer3(prev_it_518,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_516=it_516->next;
                i_517++;
            }
        }
    }
    else {
        it_519=self->head;
        head_prev_it_520=((void*)0);
        tail_it_521=((void*)0);
        i_522=0;
        while(it_519!=((void*)0)) {
            if(            i_522==head) {
                head_prev_it_520=it_519->prev;
            }
            if(            i_522==tail) {
                tail_it_521=it_519;
            }
            if(            i_522>=head&&i_522<tail) {
                prev_it_523=it_519;
                it_519=it_519->next;
                i_522++;
                come_call_finalizer3(prev_it_523,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_519=it_519->next;
                i_522++;
            }
        }
        if(        head_prev_it_520!=((void*)0)) {
            head_prev_it_520->next=tail_it_521;
        }
        if(        tail_it_521!=((void*)0)) {
            tail_it_521->prev=head_prev_it_520;
        }
    }
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_511;
struct list_item$1voidp* prev_it_512;
struct list$1voidp* __result302__;
    it_511=self->head;
    while(it_511!=((void*)0)) {
        prev_it_512=it_511;
        it_511=it_511->next;
        come_call_finalizer3(prev_it_512,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_525;
void* __result305__;
void* __result306__;
void* result_526;
void* __result307__;
result_525 = (void*)0;
result_526 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_525,0,sizeof(void*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_525;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->it=self->head;
    if(    self->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_526,0,sizeof(void*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_526;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_528;
void* __result308__;
void* __result309__;
void* result_529;
void* __result310__;
result_528 = (void*)0;
result_529 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_528,0,sizeof(void*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_528;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_529,0,sizeof(void*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_529;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
struct list_item$1voidp* litem_530;
void* __right_value421 = (void*)0;
struct list_item$1voidp* litem_531;
void* __right_value422 = (void*)0;
struct list_item$1voidp* litem_532;
struct list$1voidp* __result311__;
    if(    self->len==0) {
        litem_530=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value420=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_530->prev=((void*)0);
        litem_530->next=((void*)0);
        litem_530->item=item;
        self->tail=litem_530;
        self->head=litem_530;
    }
    else if(    self->len==1) {
        litem_531=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value421=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_531->prev=self->head;
        litem_531->next=((void*)0);
        litem_531->item=item;
        self->tail=litem_531;
        self->head->next=litem_531;
    }
    else {
        litem_532=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value422=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_532->prev=self->tail;
        litem_532->next=((void*)0);
        litem_532->item=item;
        self->tail->next=litem_532;
        self->tail=litem_532;
    }
    self->len++;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_533;
va_list args_534;
int len_535;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
_Bool _if_conditional2;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
msg2_533 = (void*)0;
memset(&args_534, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        id = come_decrement_ref_count2(id, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_534,msg);
        len_535=vasprintf(&msg2_533,msg,args_534);
        __builtin_va_end(args_534);
        if(        (_if_conditional2=(((char*)((void*)(__right_value425=map$2voidphvoidphp_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value424=__builtin_string(id)))))))==((void*)0))),        (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        come_call_finalizer3(__right_value425,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            map$2voidphvoidphp_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_533)));
        }
        free(msg2_533);
        come_call_finalizer3((&args_534),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
    id = come_decrement_ref_count2(id, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int transpile_v3(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sFun* main_fun_536;
_Bool main_module_537;
void* __right_value430 = (void*)0;
char* output_file_name_538;
struct _IO_FILE* f_539;
_Bool __exception_result_var_b1;
struct map$2voidphvoidph* o2_saved_540;
char* it_541;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* buf_542;
void* __right_value433 = (void*)0;
struct map$2voidphvoidph* o2_saved_547;
char* it_548;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* buf_549;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct map$2voidphvoidph* o2_saved_550;
char* it_551;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* it2_552;
void* __right_value440 = (void*)0;
char* header_553;
struct map$2voidphvoidph* o2_saved_554;
char* it_555;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* str_556;
struct map$2voidphvoidph* o2_saved_557;
char* it_558;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sFun* it2_559;
void* __right_value445 = (void*)0;
char* output_560;
struct map$2voidphvoidph* o2_saved_561;
char* it_562;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sFun* it2_563;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
int n_564;
void* __right_value451 = (void*)0;
char* output_565;
_Bool __result313__;
    main_fun_536=((struct sFun*)((void*)(__right_value429=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value428=xsprintf("main")))))));
    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value429,(void*)0, 0, 1, 0, 0, (void*)0);
    main_module_537=(_Bool)0;
    if(    main_fun_536) {
        if(        !main_fun_536->mExternal) {
            main_module_537=(_Bool)1;
        }
    }
    output_file_name_538=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_539=fopen(output_file_name_538,"w");
    if(    f_539==((void*)0)) {
        (come_push_stackframe("03output_code.c", 922, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_539,"/// previous struct definition ///\n");
    for(    o2_saved_540=(struct map$2voidphvoidph*)come_increment_ref_count((info->previous_struct_definition)),it_541=((char*)map$2voidphvoidphp_begin((o2_saved_540)));    !map$2voidphvoidphp_end((o2_saved_540));    it_541=((char*)map$2voidphvoidphp_next((o2_saved_540)))    ){
        buf_542=((struct buffer*)((void*)(__right_value432=map$2voidphvoidphp_operator_load_element(info->previous_struct_definition,((char*)(__right_value431=__builtin_string(it_541)))))));
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value432,(void*)0, 0, 1, 0, 0, (void*)0);
        fprintf(f_539,"%s\n",((char*)(__right_value433=buffer_to_string(buf_542))));
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_540,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_539,"/// struct definition ///\n");
    for(    o2_saved_547=(struct map$2voidphvoidph*)come_increment_ref_count((info->struct_definition)),it_548=((char*)map$2voidphvoidphp_begin((o2_saved_547)));    !map$2voidphvoidphp_end((o2_saved_547));    it_548=((char*)map$2voidphvoidphp_next((o2_saved_547)))    ){
        buf_549=((struct buffer*)((void*)(__right_value435=map$2voidphvoidphp_operator_load_element(info->struct_definition,((char*)(__right_value434=__builtin_string(it_548)))))));
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value435,(void*)0, 0, 1, 0, 0, (void*)0);
        fprintf(f_539,"%s\n",((char*)(__right_value436=buffer_to_string(buf_549))));
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_547,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_539,"// source head\n");
    fprintf(f_539,"%s\n",((char*)(__right_value437=buffer_to_string(info->module->mSourceHead))));
    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fprintf(f_539,"// header function\n");
    for(    o2_saved_550=(struct map$2voidphvoidph*)come_increment_ref_count((info->funcs)),it_551=((char*)map$2voidphvoidphp_begin((o2_saved_550)));    !map$2voidphvoidphp_end((o2_saved_550));    it_551=((char*)map$2voidphvoidphp_next((o2_saved_550)))    ){
        it2_552=((struct sFun*)((void*)(__right_value439=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value438=__builtin_string(it_551)))))));
        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value439,(void*)0, 0, 1, 0, 0, (void*)0);
        header_553=(char*)come_increment_ref_count(header_function(it2_552,info));
        if(        it2_552->mInline) {
        }
        else if(        string_operator_not_equals(it_551,"__builtin_va_start")&&string_operator_not_equals(it_551,"__builtin_va_end")) {
            fprintf(f_539,"%s",header_553,it_551);
        }
        header_553 = come_decrement_ref_count2(header_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_550,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_539,"// uniq global variable\n");
    if(    main_module_537) {
        for(        o2_saved_554=(struct map$2voidphvoidph*)come_increment_ref_count((info->uniq_definition)),it_555=((char*)map$2voidphvoidphp_begin((o2_saved_554)));        !map$2voidphvoidphp_end((o2_saved_554));        it_555=((char*)map$2voidphvoidphp_next((o2_saved_554)))        ){
            str_556=((char*)((void*)(__right_value442=map$2voidphvoidphp_operator_load_element(info->uniq_definition,((char*)(__right_value441=__builtin_string(it_555)))))));
            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value442,(void*)0, 0, 1, 0, 0, (void*)0);
            fprintf(f_539,"%s\n",str_556);
        }
        come_call_finalizer3(o2_saved_554,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    fprintf(f_539,"// inline function\n");
    for(    o2_saved_557=(struct map$2voidphvoidph*)come_increment_ref_count((info->funcs)),it_558=((char*)map$2voidphvoidphp_begin((o2_saved_557)));    !map$2voidphvoidphp_end((o2_saved_557));    it_558=((char*)map$2voidphvoidphp_next((o2_saved_557)))    ){
        it2_559=((struct sFun*)((void*)(__right_value444=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value443=__builtin_string(it_558)))))));
        __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value444,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        it2_559->mInline) {
            output_560=(char*)come_increment_ref_count(output_function(it2_559,info));
            fprintf(f_539,"%s",output_560);
            output_560 = come_decrement_ref_count2(output_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_557,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_539,"\n");
    fprintf(f_539,"// body function\n");
    for(    o2_saved_561=(struct map$2voidphvoidph*)come_increment_ref_count((info->funcs)),it_562=((char*)map$2voidphvoidphp_begin((o2_saved_561)));    !map$2voidphvoidphp_end((o2_saved_561));    it_562=((char*)map$2voidphvoidphp_next((o2_saved_561)))    ){
        it2_563=((struct sFun*)((void*)(__right_value447=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value446=__builtin_string(it_562)))))));
        __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value447,(void*)0, 0, 1, 0, 0, (void*)0);
        n_564=string_length(((char*)(__right_value448=buffer_to_string(it2_563->mSourceHead))))+string_length(((char*)(__right_value449=buffer_to_string(it2_563->mSourceHead2))))+string_length(((char*)(__right_value450=buffer_to_string(it2_563->mSource))));
        __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        it2_563->mExternal) {
        }
        else if(        !main_module_537&&it2_563->mUniq) {
        }
        else if(        it2_563->mInline) {
        }
        else {
            output_565=(char*)come_increment_ref_count(output_function(it2_563,info));
            fprintf(f_539,"%s",output_565);
            fprintf(f_539,"\n");
            output_565 = come_decrement_ref_count2(output_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_561,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fclose(f_539);
    __result313__ = (_Bool)1;
    output_file_name_538 = come_decrement_ref_count2(output_file_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result313__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_543;
int i_544;
    for(    i_543=0;    i_543<self->size;    i_543++    ){
        if(        self->item_existance[i_543]) {
            if(            1) {
                come_call_finalizer3(self->items[i_543], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_544=0;    i_544<self->size;    i_544++    ){
        if(        self->item_existance[i_544]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_544], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_545;
struct list_item$1voidp* prev_it_546;
    it_545=self->head;
    while(it_545!=((void*)0)) {
        prev_it_546=it_545;
        it_545=it_545->next;
        come_call_finalizer3(prev_it_546,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_566;
struct _IO_FILE* f_567;
struct map$2voidphvoidph* o2_saved_568;
char* it_569;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* item_570;
struct map$2voidphvoidph* o2_saved_571;
char* it_572;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* item_573;
_Bool __result314__;
    output_file_name_566=(char*)come_increment_ref_count(info->output_file_name);
    f_567=fopen(output_file_name_566,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_567,"#ifndef __COMMON_H__\n");
        fprintf(f_567,"#define __COMMON_H__\n");
        fprintf(f_567,"#include <comelang.h>\n");
    }
    for(    o2_saved_568=(struct map$2voidphvoidph*)come_increment_ref_count((info->module->mHeaderStructs)),it_569=((char*)map$2voidphvoidphp_begin((o2_saved_568)));    !map$2voidphvoidphp_end((o2_saved_568));    it_569=((char*)map$2voidphvoidphp_next((o2_saved_568)))    ){
        item_570=(char*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value452=__builtin_string(it_569)))));
        __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fprintf(f_567,"%s",item_570);
        item_570 = come_decrement_ref_count2(item_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_568,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_571=(struct map$2voidphvoidph*)come_increment_ref_count((info->module->mHeader)),it_572=((char*)map$2voidphvoidphp_begin((o2_saved_571)));    !map$2voidphvoidphp_end((o2_saved_571));    it_572=((char*)map$2voidphvoidphp_next((o2_saved_571)))    ){
        item_573=(char*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->module->mHeader,((char*)(__right_value454=__builtin_string(it_572)))));
        __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fprintf(f_567,"%s",item_573);
        item_573 = come_decrement_ref_count2(item_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_571,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_567,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_567,"#endif\n");
    }
    fclose(f_567);
    __result314__ = (_Bool)1;
    output_file_name_566 = come_decrement_ref_count2(output_file_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result314__;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_574;
va_list args_575;
int len_576;
msg2_574 = (void*)0;
memset(&args_575, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_575,code);
    len_576=vasprintf(&msg2_574,code,args_575);
    __builtin_va_end(args_575);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_574);
    }
    free(msg2_574);
    come_call_finalizer3((&args_575),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_577;
va_list args_578;
int len_579;
msg2_577 = (void*)0;
memset(&args_578, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_578,code);
    len_579=vasprintf(&msg2_577,code,args_578);
    __builtin_va_end(args_578);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_577);
    }
    free(msg2_577);
    come_call_finalizer3((&args_578),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj84;
char* __dec_obj85;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        add_last_code_to_source_with_comma(info);
    }
    else {
        if(        info->module->mLastCode) {
            add_come_code(info,"%s;\n",info->module->mLastCode);
            __dec_obj84=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        info->module->mLastCode2) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj85=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj86;
char* __dec_obj87;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->module->mLastCode) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj86=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->module->mLastCode2) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj87=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_580;
va_list args_581;
int len_582;
void* __right_value456 = (void*)0;
char* __dec_obj88;
msg2_580 = (void*)0;
memset(&args_581, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_581,msg);
    len_582=vasprintf(&msg2_580,msg,args_581);
    __builtin_va_end(args_581);
    __dec_obj88=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_580));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    free(msg2_580);
    come_call_finalizer3((&args_581),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_583;
va_list args_584;
int len_585;
void* __right_value457 = (void*)0;
char* __dec_obj89;
msg2_583 = (void*)0;
memset(&args_584, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_584,msg);
    len_585=vasprintf(&msg2_583,msg,args_584);
    __builtin_va_end(args_584);
    __dec_obj89=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_583));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    free(msg2_583);
    come_call_finalizer3((&args_584),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUEphp_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEphp_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_586;
struct list$1CVALUEph* __result315__;
struct list_item$1CVALUEph* it_589;
int i_590;
struct list_item$1CVALUEph* prev_it_591;
struct list_item$1CVALUEph* it_592;
int i_593;
struct list_item$1CVALUEph* prev_it_594;
struct list_item$1CVALUEph* it_595;
struct list_item$1CVALUEph* head_prev_it_596;
struct list_item$1CVALUEph* tail_it_597;
int i_598;
struct list_item$1CVALUEph* prev_it_599;
struct list$1CVALUEph* __result317__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_586=tail;
        tail=head;
        head=tmp_586;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result315__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    if(    head==0&&tail==self->len) {
        list$1CVALUEphp_reset(self);
    }
    else if(    head==0) {
        it_589=self->head;
        i_590=0;
        while(it_589!=((void*)0)) {
            if(            i_590<tail) {
                prev_it_591=it_589;
                it_589=it_589->next;
                i_590++;
                come_call_finalizer3(prev_it_591,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_590==tail) {
                self->head=it_589;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_589=it_589->next;
                i_590++;
            }
        }
    }
    else if(    tail==self->len) {
        it_592=self->head;
        i_593=0;
        while(it_592!=((void*)0)) {
            if(            i_593==head) {
                self->tail=it_592->prev;
                self->tail->next=((void*)0);
            }
            if(            i_593>=head) {
                prev_it_594=it_592;
                it_592=it_592->next;
                i_593++;
                come_call_finalizer3(prev_it_594,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_592=it_592->next;
                i_593++;
            }
        }
    }
    else {
        it_595=self->head;
        head_prev_it_596=((void*)0);
        tail_it_597=((void*)0);
        i_598=0;
        while(it_595!=((void*)0)) {
            if(            i_598==head) {
                head_prev_it_596=it_595->prev;
            }
            if(            i_598==tail) {
                tail_it_597=it_595;
            }
            if(            i_598>=head&&i_598<tail) {
                prev_it_599=it_595;
                it_595=it_595->next;
                i_598++;
                come_call_finalizer3(prev_it_599,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_595=it_595->next;
                i_598++;
            }
        }
        if(        head_prev_it_596!=((void*)0)) {
            head_prev_it_596->next=tail_it_597;
        }
        if(        tail_it_597!=((void*)0)) {
            tail_it_597->prev=head_prev_it_596;
        }
    }
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct list$1CVALUEph* list$1CVALUEphp_reset(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_587;
struct list_item$1CVALUEph* prev_it_588;
struct list$1CVALUEph* __result316__;
    it_587=self->head;
    while(it_587!=((void*)0)) {
        prev_it_588=it_587;
        it_587=it_587->next;
        come_call_finalizer3(prev_it_588,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj90;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj90=self->item;
            come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__=(void*)0;
char* __dec_obj91;
void* __right_value458 = (void*)0;
void* __right_value464 = (void*)0;
struct CVALUE* result_600;
struct CVALUE* __result322__;
    __dec_obj91=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_600=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, ((struct CVALUE*)(__right_value458=list$1CVALUEphp_operator_load_element(info->stack,offset)))));
    come_call_finalizer3(__right_value458,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(    result_600==((void*)0)) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_600;
    come_call_finalizer3(result_600,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_601;
int i_602;
struct CVALUE* __result318__;
struct CVALUE* default_value_603;
struct CVALUE* __result319__;
default_value_603 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_601=self->head;
    i_602=0;
    while(it_601!=((void*)0)) {
        if(        position==i_602) {
            __result318__ = gComeFunResultObject = __result_obj__ = it_601->item;
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        it_601=it_601->next;
        i_602++;
    }
    memset(&default_value_603,0,sizeof(struct CVALUE*));
    __result319__ = gComeFunResultObject = __result_obj__ = default_value_603;
    come_call_finalizer3(default_value_603,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result320__;
void* __right_value459 = (void*)0;
struct CVALUE* result_604;
void* __right_value460 = (void*)0;
char* __dec_obj92;
void* __right_value461 = (void*)0;
struct sType* __dec_obj93;
void* __right_value462 = (void*)0;
char* __dec_obj94;
void* __right_value463 = (void*)0;
char* __dec_obj95;
struct CVALUE* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_604=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj92=result_604->c_value;
        result_604->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj93=result_604->type;
        result_604->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_604->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_604->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj94=result_604->c_value_without_right_value_objects;
        result_604->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj95=result_604->c_value_without_cast_object_value;
        result_604->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj96;
char* __dec_obj97;
    __dec_obj96=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
}

