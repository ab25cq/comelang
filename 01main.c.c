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
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
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
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
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
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
int come_main_v1(int argc, char** argv);
int main(int argc, char** argv);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item);
static void list$1voidp_finalize(struct list$1voidp* self);
static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
// uniq global variable
void* gComeFunResultObject=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

void* wildcard;

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_2;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 186, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_2=gNumComeStackFrame-2;    i_2>=0;    i_2--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    __right_value2 = come_decrement_ref_count2(__right_value2, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(buf_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

void stackframe(){
int i_3;
    for(    i_3=gNumComeStackFrame-1;    i_3>=0;    i_3--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_3],gComeStackFrameSLine[i_3],gComeStackFrameID[i_3]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value3 = (void*)0;
char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer)));
    __right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result2__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result2__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result2__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result3__;
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
    __result3__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result3__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
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

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
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

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_4;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_4=0;    i_4<gHeapPages.mSizePages;    i_4++    ){
        gHeapPages.mPages[i_4]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_5;
int n_6;
_Bool flag_7;
int i_8;
struct sMemHeaderTiny* it_9;
int n_10;
int i_11;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_5=gAllocMem;
        n_6=0;
        while(it_5) {
            n_6++;
            flag_7=(_Bool)0;
            printf("#%d ",n_6);
            if(            it_5->class_name) {
                printf("%p (%s): ",(char*)it_5+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_5->class_name);
            }
            for(            i_8=0;            i_8<16;            i_8++            ){
                if(                it_5->sname[i_8]) {
                    printf("%s %d #%d, ",it_5->sname[i_8],it_5->sline[i_8],it_5->id[i_8]);
                    flag_7=(_Bool)1;
                }
            }
            if(            flag_7) {
                puts("");
            }
            it_5=it_5->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_6,gNumAlloc,gNumFree);
    }
    else {
        it_9=(struct sMemHeaderTiny*)gAllocMem;
        n_10=0;
        while(it_9) {
            n_10++;
            if(            it_9->class_name) {
                printf("#%d %p (%s) %s %d\n",n_10,(char*)it_9+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_9->class_name,it_9->sname,it_9->sline);
            }
            it_9=it_9->next;
        }
        if(        n_10>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_10,gNumAlloc,gNumFree);
        }
    }
    for(    i_11=0;    i_11<gHeapPages.mSizePages;    i_11++    ){
        free(gHeapPages.mPages[i_11]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_12;
unsigned long  int free_area_13;
int new_size_pages_14;
char** new_pages_15;
int i_16;
void* __result4__;
    result_12=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_12=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_12,0,size);
        }
        if(        result_12==((void*)0)) {
            free_area_13=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_13) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_14=gHeapPages.mSizePages*2;
                    new_pages_15=calloc(1,sizeof(char*)*new_size_pages_14);
                    i_16=0;
                    for(                    ;                    i_16<gHeapPages.mSizePages;                    i_16++                    ){
                        new_pages_15[i_16]=gHeapPages.mPages[i_16];
                    }
                    for(                    ;                    i_16<new_size_pages_14;                    i_16++                    ){
                        new_pages_15[i_16]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_15;
                    gHeapPages.mSizePages=new_size_pages_14;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_12=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_12=calloc(1,size);
    }
    __result4__ = gComeFunResultObject = __result_obj__ = result_12;
    gComeFunResultObject = (void*)0;
    return __result4__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
void* result_17;
struct sMemHeader* it_18;
void* __result5__;
void* result_19;
struct sMemHeaderTiny* it_20;
void* __result6__;
    if(    gComeDebugLib) {
        result_17=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_18=result_17;
        it_18->allocated=177783;
        it_18->size=size+sizeof(struct sMemHeader);
        it_18->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_18->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_18->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_18->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_18->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_18->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_18->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_18->next=gAllocMem;
        it_18->prev=((void*)0);
        it_18->class_name=class_name;
        it_18->finalizer_fun=finalizer_fun;
        it_18->cloner_fun=cloner_fun;
        it_18->get_hash_key_fun=get_hash_key_fun;
        it_18->equaler_fun=equaler_fun;
        if(        gAllocMem) {
            gAllocMem->prev=it_18;
        }
        gAllocMem=it_18;
        gNumAlloc++;
        __result5__ = gComeFunResultObject = __result_obj__ = (char*)result_17+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result5__;
    }
    else {
        result_19=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_20=result_19;
        it_20->allocated=177783;
        it_20->class_name=class_name;
        it_20->finalizer_fun=finalizer_fun;
        it_20->cloner_fun=cloner_fun;
        it_20->get_hash_key_fun=get_hash_key_fun;
        it_20->equaler_fun=equaler_fun;
        it_20->sname=sname;
        it_20->sline=sline;
        it_20->size=size+sizeof(struct sMemHeaderTiny);
        it_20->free_next=((void*)0);
        it_20->next=(struct sMemHeaderTiny*)gAllocMem;
        it_20->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_20;
        }
        gAllocMem=(struct sMemHeader*)it_20;
        gNumAlloc++;
        __result6__ = gComeFunResultObject = __result_obj__ = (char*)result_19+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result6__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_21;
struct sMemHeader* prev_it_22;
struct sMemHeader* next_it_23;
unsigned long  int size_24;
struct sMemHeaderTiny* it_25;
struct sMemHeaderTiny* prev_it_26;
struct sMemHeaderTiny* next_it_27;
unsigned long  int size_28;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_21=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_21->allocated!=177783) {
                return;
            }
            it_21->allocated=0;
            prev_it_22=it_21->prev;
            next_it_23=it_21->next;
            if(            gAllocMem==it_21) {
                gAllocMem=next_it_23;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_22) {
                    prev_it_22->next=next_it_23;
                }
                if(                next_it_23) {
                    next_it_23->prev=prev_it_22;
                }
            }
            size_24=it_21->size;
            if(            size_24<2048*2) {
                if(                gHeapPages.mFreeMem[size_24]==((void*)0)) {
                    it_21->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_24]=(struct sMemHeaderTiny*)it_21;
                }
                else {
                    it_21->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_24];
                    gHeapPages.mFreeMem[size_24]=(struct sMemHeaderTiny*)it_21;
                }
            }
            else {
                free(it_21);
            }
            gNumFree++;
        }
        else {
            it_25=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_25->allocated!=177783) {
                return;
            }
            it_25->allocated=0;
            prev_it_26=it_25->prev;
            next_it_27=it_25->next;
            if(            gAllocMem==it_25) {
                gAllocMem=(struct sMemHeader*)next_it_27;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_26) {
                    prev_it_26->next=next_it_27;
                }
                if(                next_it_27) {
                    next_it_27->prev=prev_it_26;
                }
            }
            size_28=it_25->size;
            if(            size_28<2048*2) {
                if(                gHeapPages.mFreeMem[size_28]==((void*)0)) {
                    it_25->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_28]=it_25;
                }
                else {
                    it_25->free_next=gHeapPages.mFreeMem[size_28];
                    gHeapPages.mFreeMem[size_28]=it_25;
                }
            }
            else {
                free(it_25);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_29;
char* __result7__;
struct sMemHeaderTiny* it_30;
char* __result8__;
    if(    gComeDebugLib) {
        it_29=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_29->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_29);
            exit(2);
        }
        __result7__ = gComeFunResultObject = __result_obj__ = it_29->class_name;
        gComeFunResultObject = (void*)0;
        return __result7__;
    }
    else {
        it_30=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_30->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_30);
            exit(2);
        }
        __result8__ = gComeFunResultObject = __result_obj__ = it_30->class_name;
        gComeFunResultObject = (void*)0;
        return __result8__;
    }
}

void* come_get_finalizer(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_31;
void* __result9__;
void* __result10__;
struct sMemHeaderTiny* it_32;
void* __result11__;
void* __result12__;
    if(    gComeDebugLib) {
        it_31=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_31->allocated!=177783) {
            __result9__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result9__;
        }
        __result10__ = gComeFunResultObject = __result_obj__ = it_31->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result10__;
    }
    else {
        it_32=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_32->allocated!=177783) {
            __result11__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result11__;
        }
        __result12__ = gComeFunResultObject = __result_obj__ = it_32->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result12__;
    }
}

void* come_get_cloner(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_33;
void* __result13__;
void* __result14__;
struct sMemHeaderTiny* it_34;
void* __result15__;
void* __result16__;
    if(    gComeDebugLib) {
        it_33=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_33->allocated!=177783) {
            __result13__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result13__;
        }
        __result14__ = gComeFunResultObject = __result_obj__ = it_33->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result14__;
    }
    else {
        it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_34->allocated!=177783) {
            __result15__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result15__;
        }
        __result16__ = gComeFunResultObject = __result_obj__ = it_34->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result16__;
    }
}

void* come_get_hash_key(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_35;
void* __result17__;
void* __result18__;
struct sMemHeaderTiny* it_36;
void* __result19__;
void* __result20__;
    if(    gComeDebugLib) {
        it_35=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_35->allocated!=177783) {
            __result17__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result17__;
        }
        __result18__ = gComeFunResultObject = __result_obj__ = it_35->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result18__;
    }
    else {
        it_36=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_36->allocated!=177783) {
            __result19__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result19__;
        }
        __result20__ = gComeFunResultObject = __result_obj__ = it_36->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result20__;
    }
}

void* come_get_equaler(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_37;
void* __result21__;
void* __result22__;
struct sMemHeaderTiny* it_38;
void* __result23__;
void* __result24__;
    if(    gComeDebugLib) {
        it_37=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_37->allocated!=177783) {
            __result21__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result21__;
        }
        __result22__ = gComeFunResultObject = __result_obj__ = it_37->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result22__;
    }
    else {
        it_38=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_38->allocated!=177783) {
            __result23__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result23__;
        }
        __result24__ = gComeFunResultObject = __result_obj__ = it_38->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
char* mem_39;
unsigned long  int* ref_count_40;
unsigned long  int* size2_41;
void* __result25__;
    mem_39=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name,finalizer_fun,cloner_fun,get_hash_key_fun,equaler_fun);
    ref_count_40=(unsigned long  int*)mem_39;
    *ref_count_40=0;
    size2_41=(unsigned long  int*)(mem_39+sizeof(unsigned long  int));
    *size2_41=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result25__ = gComeFunResultObject = __result_obj__ = mem_39+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result25__;
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
void* __result26__;
char* mem_44;
unsigned long  int* size_p_45;
unsigned long  int size_46;
void* finalizer_fun_47;
void* cloner_fun_48;
void* get_hash_key_fun_49;
void* equaler_fun_50;
void* result_51;
void* __result27__;
    if(    !block) {
        __result26__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result26__;
    }
    mem_44=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_45=(unsigned long  int*)(mem_44+sizeof(unsigned long  int));
    size_46=*size_p_45-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    finalizer_fun_47=come_get_finalizer(block);
    cloner_fun_48=come_get_cloner(block);
    get_hash_key_fun_49=come_get_hash_key(block);
    equaler_fun_50=come_get_equaler(block);
    result_51=come_calloc(1,size_46,sname,sline,class_name,finalizer_fun_47,cloner_fun_48,get_hash_key_fun_49,equaler_fun_50);
    memcpy(result_51,block,size_46);
    __result27__ = gComeFunResultObject = __result_obj__ = result_51;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result28__;
unsigned long  int* ref_count_52;
void* __result29__;
    if(    mem==((void*)0)) {
        __result28__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result28__;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_52)++;
    __result29__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result29__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result30__;
unsigned long  int* ref_count_53;
void* __result31__;
    if(    mem==((void*)0)) {
        __result30__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result30__;
    }
    ref_count_53=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_53);
    __result31__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result32__;
unsigned long  int* ref_count_54;
unsigned long  int count_55;
void (*finalizer_56)(void*);
void* __result33__;
void* __result34__;
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result32__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result32__;
    }
    ref_count_54=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_54)--;
    }
    count_55=*ref_count_54;
    if(    !no_free&&(count_55<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_56=protocol_fun;
            finalizer_56(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    __result34__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result35__;
void* __result36__;
unsigned long  int* ref_count_57;
unsigned long  int count_58;
void (*finalizer_59)(void*);
void* __result37__;
void* __result38__;
memset(&finalizer_59, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result35__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result35__;
        }
    }
    if(    mem==((void*)0)) {
        __result36__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result36__;
    }
    ref_count_57=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_57)--;
    }
    count_58=*ref_count_57;
    if(    !no_free&&(count_58<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_59=protocol_fun;
            finalizer_59(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result37__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    __result38__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result38__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* fun2_60;
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
void (*finalizer_63)(void*);
void (*finalizer_64)(void*);
unsigned long  int* ref_count_65;
unsigned long  int count_66;
void* fun2_67;
void (*finalizer_68)(void*);
void (*finalizer_69)(void*);
void (*finalizer_70)(void*);
void (*finalizer_71)(void*);
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_60=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_61=protocol_fun;
                finalizer_61(protocol_obj);
            }
            finalizer_62=fun;
            finalizer_62(mem);
        }
        else if(        fun2_60) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_63=protocol_fun;
                finalizer_63(protocol_obj);
            }
            finalizer_64=fun2_60;
            finalizer_64(mem);
        }
    }
    else {
        ref_count_65=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_65)--;
        }
        count_66=*ref_count_65;
        if(        !no_free&&(count_66<=0||force_delete_)) {
            if(            mem) {
                fun2_67=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_68=protocol_fun;
                        finalizer_68(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_69=fun;
                        finalizer_69(mem);
                    }
                }
                else if(                fun2_67) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_70=protocol_fun;
                        finalizer_70(protocol_obj);
                    }
                    finalizer_71=fun2_67;
                    finalizer_71(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_72;
void (*finalizer_73)(void*);
void (*finalizer_74)(void*);
void (*finalizer_75)(void*);
void (*finalizer_76)(void*);
unsigned long  int* ref_count_77;
unsigned long  int count_78;
void* fun2_79;
void (*finalizer_80)(void*);
void (*finalizer_81)(void*);
void (*finalizer_82)(void*);
void (*finalizer_83)(void*);
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_74, 0, sizeof(void (*)(void*)));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
memset(&finalizer_80, 0, sizeof(void (*)(void*)));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
memset(&finalizer_83, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_72=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_73=protocol_fun;
                finalizer_73(protocol_obj);
            }
            finalizer_74=fun;
            finalizer_74(mem);
        }
        else if(        fun2_72) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_75=protocol_fun;
                finalizer_75(protocol_obj);
            }
            finalizer_76=fun2_72;
            finalizer_76(mem);
        }
    }
    else {
        ref_count_77=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_77)--;
        }
        count_78=*ref_count_77;
        if(        !no_free&&(count_78<=0||force_delete_)) {
            if(            mem) {
                fun2_79=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_80=protocol_fun;
                        finalizer_80(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_81=fun;
                        finalizer_81(mem);
                    }
                }
                else if(                fun2_79) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_82=protocol_fun;
                        finalizer_82(protocol_obj);
                    }
                    finalizer_83=fun2_79;
                    finalizer_83(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_84;
void (*finalizer_85)(void*);
void (*finalizer_86)(void*);
unsigned long  int* ref_count_87;
unsigned long  int count_88;
void* fun2_89;
void (*finalizer_90)(void*);
void (*finalizer_91)(void*);
memset(&finalizer_85, 0, sizeof(void (*)(void*)));
memset(&finalizer_86, 0, sizeof(void (*)(void*)));
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
memset(&finalizer_91, 0, sizeof(void (*)(void*)));
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
            fun2_84=come_get_finalizer(mem);
            if(            fun) {
                finalizer_85=fun;
                finalizer_85(mem);
            }
            else if(            fun2_84) {
                finalizer_86=fun2_84;
                finalizer_86(mem);
            }
        }
    }
    else {
        ref_count_87=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_87)--;
        }
        count_88=*ref_count_87;
        if(        !no_free&&(count_88<=0||force_delete_)) {
            if(            mem) {
                fun2_89=come_get_finalizer(mem);
                if(                fun) {
                    finalizer_90=fun;
                    finalizer_90(mem);
                }
                else if(                fun2_89) {
                    finalizer_91=fun2_89;
                    finalizer_91(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__=(void*)0;
void* __result39__;
void* finalizer_fun_92;
void* cloner_fun_93;
void* get_hash_key_fun_94;
void* equaler_fun_95;
void* mem2_96;
void* (*cloner_97)(void*);
void* (*cloner_98)(void*);
struct sMemHeader* it_99;
struct sMemHeader* it2_100;
void* __result40__;
struct sMemHeaderTiny* it_101;
struct sMemHeaderTiny* it2_102;
void* __result41__;
void* __result42__;
memset(&cloner_97, 0, sizeof(void* (*)(void*)));
memset(&cloner_98, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result39__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result39__;
    }
    finalizer_fun_92=come_get_finalizer(mem);
    cloner_fun_93=come_get_cloner(mem);
    get_hash_key_fun_94=come_get_hash_key(mem);
    equaler_fun_95=come_get_equaler(mem);
    mem2_96=((void*)0);
    if(    fun) {
        cloner_97=fun;
        mem2_96=cloner_97(mem);
    }
    else if(    cloner_fun_93) {
        cloner_98=cloner_fun_93;
        mem2_96=cloner_98(mem);
    }
    if(    mem2_96) {
        if(        gComeDebugLib) {
            it_99=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_100=(struct sMemHeader*)((char*)mem2_96-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_100->class_name=it_99->class_name;
            it2_100->finalizer_fun=it_99->finalizer_fun;
            it2_100->cloner_fun=it_99->cloner_fun;
            it2_100->get_hash_key_fun=it_99->get_hash_key_fun;
            it2_100->equaler_fun=it_99->equaler_fun;
            memcpy(it2_100->sname,it_99->sname,sizeof(char*)*16);
            memcpy(it2_100->sline,it_99->sline,sizeof(int)*16);
            memcpy(it2_100->id,it_99->id,sizeof(int)*16);
            __result40__ = gComeFunResultObject = __result_obj__ = mem2_96;
            gComeFunResultObject = (void*)0;
            return __result40__;
        }
        else {
            it_101=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_102=(struct sMemHeaderTiny*)((char*)mem2_96-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_102->class_name=it_101->class_name;
            it2_102->finalizer_fun=it_101->finalizer_fun;
            it2_102->cloner_fun=it_101->cloner_fun;
            it2_102->get_hash_key_fun=it_101->get_hash_key_fun;
            it2_102->equaler_fun=it_101->equaler_fun;
            it2_102->sname=it_101->sname;
            it2_102->sline=it_101->sline;
            __result41__ = gComeFunResultObject = __result_obj__ = mem2_96;
            gComeFunResultObject = (void*)0;
            return __result41__;
        }
    }
    __result42__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result42__;
}

unsigned int come_call_get_hash_key(void* fun, void* mem){
void* fun2_103;
unsigned int (*cloner_104)(void*);
unsigned int (*cloner_105)(void*);
memset(&cloner_104, 0, sizeof(unsigned int (*)(void*)));
memset(&cloner_105, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_103=come_get_hash_key(mem);
    if(    fun) {
        cloner_104=fun;
        return cloner_104(mem);
    }
    else if(    fun2_103) {
        cloner_105=fun2_103;
        return cloner_105(mem);
    }
    return 0;
}

unsigned int come_call_equals(void* fun, void* mem, void* mem2){
void* fun2_106;
unsigned int (*equaler_107)(void*,void*);
unsigned int (*equaler_108)(void*,void*);
memset(&equaler_107, 0, sizeof(unsigned int (*)(void*,void*)));
memset(&equaler_108, 0, sizeof(unsigned int (*)(void*,void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_106=come_get_equaler(mem);
    if(    fun) {
        equaler_107=fun;
        return equaler_107(mem,mem2);
    }
    else if(    fun2_106) {
        equaler_108=fun2_106;
        return equaler_108(mem,mem2);
    }
    return 0;
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result43__;
int len_109;
void* __right_value4 = (void*)0;
char* result_110;
char* __result44__;
    if(    str==((void*)0)) {
        __result43__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result43__;
    }
    len_109=strlen(str)+1;
    result_110=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_109)), "./comelang.h", 1290, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_110,str,len_109);
    __result44__ = gComeFunResultObject = __result_obj__ = result_110;
    result_110 = come_decrement_ref_count2(result_110, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_111;
int i_112;
    found_111=(_Bool)0;
    for(    i_112=0;    i_112<len;    i_112++    ){
        if(        array[i_112]==element) {
            found_111=(_Bool)1;
            break;
        }
    }
    return found_111;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result45__;
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3595, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result45__;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result46__;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3605, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result47__;
void* __right_value7 = (void*)0;
struct buffer* result_113;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result48__;
    if(    self==((void*)0)) {
        __result47__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result47__;
    }
    result_113=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3625, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals));
    result_113->size=self->size;
    __dec_obj3=result_113->buf;
    result_113->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3628, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_113->len=self->len;
    memcpy(result_113->buf,self->buf,self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result49__;
    if(    left==((void*)0)||right==((void*)0)) {
        return (_Bool)0;
    }
    __result49__ = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    __right_value9 = come_decrement_ref_count2(__right_value9, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value10 = come_decrement_ref_count2(__right_value10, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result49__;
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
struct buffer* __result50__;
void* __right_value11 = (void*)0;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result51__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result50__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result50__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_114=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3676, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_114,self->buf,self->size);
        old_len_115=self->len;
        new_size_116=(self->size+size+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "./comelang.h", 3680, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        old_buf_114 = come_decrement_ref_count2(old_buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result51__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result52__;
void* __right_value13 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result53__;
    if(    self==((void*)0)) {
        __result52__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result52__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_117=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3699, "char*"));
        old_len_118=self->len;
        new_size_119=(self->size+10+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_119)), "./comelang.h", 3703, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        old_buf_117 = come_decrement_ref_count2(old_buf_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result53__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result54__;
int size_120;
void* __right_value15 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result55__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result54__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result54__;
    }
    size_120=strlen(mem);
    if(    self->len+size_120+1+1>=self->size) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3725, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_121,self->buf,self->size);
        old_len_122=self->len;
        new_size_123=(self->size+size_120+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_123)), "./comelang.h", 3729, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        old_buf_121 = come_decrement_ref_count2(old_buf_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_120);
    self->len+=size_120;
    self->buf[self->len]=0;
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result55__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result56__;
va_list args_124;
char* result_125;
int len_126;
struct buffer* __result57__;
void* __right_value17 = (void*)0;
char* mem_127;
int size_128;
void* __right_value18 = (void*)0;
char* old_buf_129;
int old_len_130;
int new_size_131;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result58__;
memset(&args_124, 0, sizeof(va_list));
result_125 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result56__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result56__;
    }
    __builtin_va_start(args_124,msg);
    len_126=vasprintf(&result_125,msg,args_124);
    __builtin_va_end(args_124);
    if(    len_126<0) {
        __result57__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3((&args_124),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result57__;
    }
    mem_127=(char*)come_increment_ref_count(__builtin_string(result_125));
    size_128=strlen(mem_127);
    if(    self->len+size_128+1+1>=self->size) {
        old_buf_129=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3762, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_129,self->buf,self->size);
        old_len_130=self->len;
        new_size_131=(self->size+size_128+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_131)), "./comelang.h", 3766, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_129,old_len_130);
        self->buf[old_len_130]=0;
        self->size=new_size_131;
        old_buf_129 = come_decrement_ref_count2(old_buf_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_127,size_128);
    self->len+=size_128;
    self->buf[self->len]=0;
    free(result_125);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3((&args_124),va_list_finalize, 1, 0, 0, 0, (void*)0);
    mem_127 = come_decrement_ref_count2(mem_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void va_list_finalize(va_list self){
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result59__;
int size_132;
void* __right_value20 = (void*)0;
char* old_buf_133;
int old_len_134;
int new_size_135;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result60__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result59__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result59__;
    }
    size_132=strlen(mem)+1;
    if(    self->len+size_132+1+1+1>=self->size) {
        old_buf_133=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3788, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size_132+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_135)), "./comelang.h", 3792, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
        old_buf_133 = come_decrement_ref_count2(old_buf_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_132);
    self->len+=size_132;
    self->buf[self->len]=0;
    self->len++;
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result61__;
int* mem_136;
int size_137;
void* __right_value22 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result62__;
    if(    self==((void*)0)) {
        __result61__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result61__;
    }
    mem_136=&value;
    size_137=sizeof(int);
    if(    self->len+size_137+1+1>=self->size) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3815, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_140)), "./comelang.h", 3819, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        old_buf_138 = come_decrement_ref_count2(old_buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result62__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_141;
int size_142;
void* __right_value24 = (void*)0;
char* old_buf_143;
int old_len_144;
int new_size_145;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result63__;
    mem_141=&value;
    size_142=sizeof(long);
    if(    self->len+size_142+1+1>=self->size) {
        old_buf_143=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3838, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_143,self->buf,self->size);
        old_len_144=self->len;
        new_size_145=(self->size+size_142+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_145)), "./comelang.h", 3842, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_143,old_len_144);
        self->buf[old_len_144]=0;
        self->size=new_size_145;
        old_buf_143 = come_decrement_ref_count2(old_buf_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_141,size_142);
    self->len+=size_142;
    self->buf[self->len]=0;
    __result63__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result63__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
short* mem_146;
int size_147;
void* __right_value26 = (void*)0;
char* old_buf_148;
int old_len_149;
int new_size_150;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result65__;
    if(    self==((void*)0)) {
        __result64__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result64__;
    }
    mem_146=&value;
    size_147=sizeof(short);
    if(    self->len+size_147+1+1>=self->size) {
        old_buf_148=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3865, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_148,self->buf,self->size);
        old_len_149=self->len;
        new_size_150=(self->size+size_147+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_150)), "./comelang.h", 3869, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_148,old_len_149);
        self->buf[old_len_149]=0;
        self->size=new_size_150;
        old_buf_148 = come_decrement_ref_count2(old_buf_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_146,size_147);
    self->len+=size_147;
    self->buf[self->len]=0;
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result65__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result66__;
int len_151;
int new_size_152;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_153;
struct buffer* __result67__;
    if(    self==((void*)0)) {
        __result66__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    len_151=self->len;
    len_151=(len_151+3)&~3;
    if(    len_151>=self->size) {
        new_size_152=(self->size+1+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_152)), "./comelang.h", 3893, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_152;
    }
    for(    i_153=self->len;    i_153<len_151;    i_153++    ){
        self->buf[i_153]=0;
    }
    self->len=len_151;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result67__;
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

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_154;
struct buffer* __result68__;
struct buffer* __result69__;
    result_154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3923, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = result_154;
        come_call_finalizer3(result_154,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    buffer_append_str(result_154,self);
    __result69__ = gComeFunResultObject = __result_obj__ = result_154;
    come_call_finalizer3(result_154,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
char* __result70__;
void* __right_value32 = (void*)0;
char* __result71__;
    if(    self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value31=__builtin_string("")));
        __right_value31 = come_decrement_ref_count2(__right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value32=__builtin_string(self->buf)));
    __right_value32 = come_decrement_ref_count2(__right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_155;
struct buffer* __result73__;
    result_155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3950, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_155,self,sizeof(char)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = result_155;
    come_call_finalizer3(result_155,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_156;
int i_157;
struct buffer* __result74__;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3957, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_157=0;    i_157<len;    i_157++    ){
        buffer_append(result_156,self[i_157],strlen(self[i_157]));
    }
    __result74__ = gComeFunResultObject = __result_obj__ = result_156;
    come_call_finalizer3(result_156,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_158;
struct buffer* __result75__;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3966, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_158,(char*)self,sizeof(short)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = result_158;
    come_call_finalizer3(result_158,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_159;
struct buffer* __result76__;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3973, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_159,(char*)self,sizeof(int)*len);
    __result76__ = gComeFunResultObject = __result_obj__ = result_159;
    come_call_finalizer3(result_159,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_160;
struct buffer* __result77__;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3980, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_160,(char*)self,sizeof(long)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_161;
struct buffer* __result78__;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3987, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_161,(char*)self,sizeof(float)*len);
    __result78__ = gComeFunResultObject = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_162;
struct buffer* __result79__;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3994, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_162,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = result_162;
    come_call_finalizer3(result_162,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

char* buffer_printable(struct buffer* self){
void* __result_obj__=(void*)0;
int len_163;
void* __right_value47 = (void*)0;
char* result_164;
int n_165;
int i_166;
unsigned char c_167;
char* __result80__;
    len_163=self->len;
    result_164=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_163*2+1)), "./comelang.h", 4002, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    n_165=0;
    for(    i_166=0;    i_166<len_163;    i_166++    ){
        c_167=self->buf[i_166];
        if(        (c_167>=0&&c_167<32)||c_167==127) {
            result_164[n_165++]=94;
            result_164[n_165++]=c_167+65-1;
        }
        else if(        c_167>127) {
            result_164[n_165++]=63;
        }
        else {
            result_164[n_165++]=c_167;
        }
    }
    result_164[n_165]=0;
    __result80__ = gComeFunResultObject = __result_obj__ = result_164;
    result_164 = come_decrement_ref_count2(result_164, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4322, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
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

struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4327, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4332, "struct smart_pointer$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
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

struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4337, "struct smart_pointer$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
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

struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4342, "struct smart_pointer$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
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

struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_168;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result90__;
    buf_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4375, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_168,(char*)self,sizeof(char)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4377, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_168))));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_169;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result92__;
    buf_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4382, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_169,(char*)self,sizeof(char*)*len);
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4384, "struct smart_pointer$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_169))));
    come_call_finalizer3(buf_169,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
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

struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_170;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result93__;
    buf_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4389, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_170,(char*)self,sizeof(short)*len);
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4391, "struct smart_pointer$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_170))));
    come_call_finalizer3(buf_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_171;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result94__;
    buf_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4396, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_171,(char*)self,sizeof(int)*len);
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4398, "struct smart_pointer$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_171))));
    come_call_finalizer3(buf_171,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_172;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result95__;
    buf_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4403, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_172,(char*)self,sizeof(long)*len);
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4405, "struct smart_pointer$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_172))));
    come_call_finalizer3(buf_172,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_173;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result97__;
    buf_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4410, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_173,(char*)self,sizeof(float)*len);
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4412, "struct smart_pointer$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_173))));
    come_call_finalizer3(buf_173,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
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

struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_174;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result99__;
    buf_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4417, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_174,(char*)self,sizeof(double)*len);
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4419, "struct smart_pointer$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_174))));
    come_call_finalizer3(buf_174,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
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

struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4424, "struct list$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
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

struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4429, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
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

struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4434, "struct list$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
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

struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4439, "struct list$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
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

struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4444, "struct list$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
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

struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4449, "struct list$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
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

struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4454, "struct list$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
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

struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4459, "struct vector$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
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

struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4464, "struct vector$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
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

struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4469, "struct vector$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
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

struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result128__;
    __result128__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4474, "struct vector$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
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

struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4479, "struct vector$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
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

struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4484, "struct vector$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
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

struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4489, "struct vector$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
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

_Bool bool_equals(_Bool self, _Bool right){
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
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
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
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
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
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
char* __result135__;
int len_224;
void* __right_value148 = (void*)0;
char* result_225;
char* __result136__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value147=__builtin_string("")));
        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    len_224=strlen(self)+strlen(right);
    result_225=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_224+1)), "./comelang.h", 4703, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_225,self,len_224+1);
    strncat(result_225,right,len_224+1);
    __result136__ = gComeFunResultObject = __result_obj__ = result_225;
    result_225 = come_decrement_ref_count2(result_225, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
char* __result137__;
int len_226;
void* __right_value150 = (void*)0;
char* result_227;
char* __result138__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    len_226=strlen(self)+strlen(right);
    result_227=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_226+1)), "./comelang.h", 4718, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_227,self,len_226+1);
    strncat(result_227,right,len_226+1);
    __result138__ = gComeFunResultObject = __result_obj__ = result_227;
    result_227 = come_decrement_ref_count2(result_227, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
char* __result139__;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct buffer* buf_228;
int i_229;
void* __right_value154 = (void*)0;
char* __result140__;
    if(    self==((void*)0)) {
        __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value151=__builtin_string("")));
        __right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    buf_228=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4731, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_229=0;    i_229<right;    i_229++    ){
        buffer_append_str(buf_228,self);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=buffer_to_string(buf_228)));
    come_call_finalizer3(buf_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result141__;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct buffer* buf_230;
int i_231;
void* __right_value158 = (void*)0;
char* __result142__;
    if(    self==((void*)0)) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string("")));
        __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    buf_230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4745, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_231=0;    i_231<right;    i_231++    ){
        buffer_append_str(buf_230,self);
    }
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=buffer_to_string(buf_230)));
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_232;
int i_233;
    result_232=(_Bool)0;
    for(    i_233=0;    i_233<len;    i_233++    ){
        if(        strncmp(self[i_233],str,strlen(self[i_233]))==0) {
            result_232=(_Bool)1;
            break;
        }
    }
    return result_232;
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
int result_234;
char* p_235;
    if(    value==((void*)0)) {
        return 0;
    }
    result_234=0;
    p_235=value;
    while(*p_235) {
        result_234+=(*p_235);
        p_235++;
    }
    return result_234;
}

unsigned int string_get_hash_key(char* value){
int result_236;
char* p_237;
    if(    value==((void*)0)) {
        return 0;
    }
    result_236=0;
    p_237=value;
    while(*p_237) {
        result_236+=(*p_237);
        p_237++;
    }
    return result_236;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
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
char* __result143__;
void* __right_value159 = (void*)0;
char* __result144__;
    if(    self==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string(self)));
    __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result145__;
void* __right_value160 = (void*)0;
char* __result146__;
    if(    self==((void*)0)) {
        __result145__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value160=__builtin_string(self)));
    __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_238;
    result_238=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_238;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_239;
    result_239=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_239;
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
_Bool result_240;
    result_240=(c>=32&&c<=126);
    return result_240;
}

_Bool xiswascii(unsigned int c){
_Bool result_241;
    result_241=(c>=32&&c<=126);
    return result_241;
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

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
char* __result147__;
int len_242;
void* __right_value162 = (void*)0;
char* result_243;
int i_244;
char* __result148__;
    if(    str==((void*)0)) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    len_242=strlen(str);
    result_243=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_242+1)), "./comelang.h", 5019, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    for(    i_244=0;    i_244<len_242;    i_244++    ){
        result_243[i_244]=str[len_242-i_244-1];
    }
    result_243[len_242]=0;
    __result148__ = gComeFunResultObject = __result_obj__ = result_243;
    result_243 = come_decrement_ref_count2(result_243, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value163 = (void*)0;
char* __result149__;
int len_245;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
char* __result150__;
void* __right_value166 = (void*)0;
char* __result151__;
void* __right_value167 = (void*)0;
char* __result152__;
void* __right_value168 = (void*)0;
char* result_246;
char* __result153__;
    if(    str==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=__builtin_string("")));
        __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    len_245=strlen(str);
    if(    head<0) {
        head+=len_245;
    }
    if(    tail<0) {
        tail+=len_245+1;
    }
    if(    head>tail) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=charp_reverse(((char*)(__right_value164=charp_substring(str,tail,head))))));
        __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_245) {
        tail=len_245;
    }
    if(    head==tail) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("")));
        __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    if(    tail-head+1<1) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string("")));
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result_246=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5065, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_246,str+head,tail-head);
    result_246[tail-head]=0;
    __result153__ = gComeFunResultObject = __result_obj__ = result_246;
    result_246 = come_decrement_ref_count2(result_246, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
char* __result154__;
int len_247;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* __result155__;
void* __right_value172 = (void*)0;
char* __result156__;
void* __right_value173 = (void*)0;
char* __result157__;
void* __right_value174 = (void*)0;
char* result_248;
char* __result158__;
    if(    str==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=__builtin_string("")));
        __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    len_247=strlen(str);
    if(    head<0) {
        head+=len_247;
    }
    if(    tail<0) {
        tail+=len_247+1;
    }
    if(    head>tail) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=charp_reverse(((char*)(__right_value170=charp_substring(str,tail,head))))));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_247) {
        tail=len_247;
    }
    if(    head==tail) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value172=__builtin_string("")));
        __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    if(    tail-head+1<1) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("")));
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_248=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5108, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_248,str+head,tail-head);
    result_248[tail-head]=0;
    __result158__ = gComeFunResultObject = __result_obj__ = result_248;
    result_248 = come_decrement_ref_count2(result_248, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value175 = (void*)0;
char* __result159__;
int len_249;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __result160__;
void* __right_value178 = (void*)0;
char* __result161__;
void* __right_value179 = (void*)0;
char* __result162__;
void* __right_value180 = (void*)0;
char* result_250;
char* __result163__;
    if(    str==((void*)0)) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    len_249=strlen(str);
    if(    head<0) {
        head+=len_249;
    }
    if(    tail<0) {
        tail+=len_249+1;
    }
    if(    head>tail) {
        __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=charp_reverse(((char*)(__right_value176=charp_substring(str,tail,head))))));
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_249) {
        tail=len_249;
    }
    if(    head==tail) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value178=__builtin_string("")));
        __right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    if(    tail-head+1<1) {
        __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    result_250=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5151, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_250,str+head,tail-head);
    result_250[tail-head]=0;
    __result163__ = gComeFunResultObject = __result_obj__ = result_250;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value181 = (void*)0;
char* __result164__;
va_list args_251;
char* result_252;
int len_253;
void* __right_value182 = (void*)0;
char* __result165__;
void* __right_value183 = (void*)0;
char* result2_254;
char* __result166__;
memset(&args_251, 0, sizeof(va_list));
result_252 = (void*)0;
    if(    msg==((void*)0)) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=__builtin_string("")));
        __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    __builtin_va_start(args_251,msg);
    len_253=vasprintf(&result_252,msg,args_251);
    __builtin_va_end(args_251);
    if(    len_253<0) {
        __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value182=__builtin_string("")));
        come_call_finalizer3((&args_251),va_list_finalize, 1, 0, 0, 0, (void*)0);
        __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    result2_254=(char*)come_increment_ref_count(__builtin_string(result_252));
    free(result_252);
    __result166__ = gComeFunResultObject = __result_obj__ = result2_254;
    come_call_finalizer3((&args_251),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_254 = come_decrement_ref_count2(result2_254, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
char* __result167__;
int len_255;
void* __right_value185 = (void*)0;
char* __result168__;
void* __right_value186 = (void*)0;
char* __result169__;
void* __right_value187 = (void*)0;
char* result_256;
char* __result170__;
    if(    str==((void*)0)) {
        __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value184=__builtin_string("")));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    len_255=strlen(str);
    if(    strcmp(str,"")==0) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string(str)));
        __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    if(    head<0) {
        head+=len_255;
    }
    if(    tail<0) {
        tail+=len_255+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string(str)));
        __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    if(    tail>=len_255) {
        tail=len_255;
    }
    result_256=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_255-(tail-head)+1)), "./comelang.h", 5213, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_256,str,head);
    memcpy(result_256+head,str+tail,len_255-tail);
    result_256[len_255-(tail-head)]=0;
    __result170__ = gComeFunResultObject = __result_obj__ = result_256;
    result_256 = come_decrement_ref_count2(result_256, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* __result172__;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct list$1charph* result_259;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct buffer* str_260;
int i_261;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1charph* __result174__;
    if(    self==((void*)0)) {
        __result172__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value189=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5226, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0)))));
        come_call_finalizer3(__right_value189,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    result_259=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5229, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    str_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5231, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_261=0;    i_261<charp_length(self);    i_261++    ){
        if(        self[i_261]==c) {
            list$1charphp_push_back(result_259,(char*)come_increment_ref_count(__builtin_string(str_260->buf)));
            buffer_reset(str_260);
        }
        else {
            buffer_append_char(str_260,self[i_261]);
        }
    }
    if(    buffer_length(str_260)!=0) {
        list$1charphp_push_back(result_259,(char*)come_increment_ref_count(__builtin_string(str_260->buf)));
    }
    __result174__ = gComeFunResultObject = __result_obj__ = result_259;
    come_call_finalizer3(result_259,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_260,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
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

char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
char* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value199=xsprintf(msg,self)));
    __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result176__;
    __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=xsprintf(msg,self)));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_265;
void* __right_value201 = (void*)0;
char* result_266;
int n_267;
int i_268;
char c_269;
char* __result177__;
    len_265=charp_length(str);
    result_266=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_265*2+1)), "./comelang.h", 5263, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    n_267=0;
    for(    i_268=0;    i_268<len_265;    i_268++    ){
        c_269=str[i_268];
        if(        (c_269>=0&&c_269<32)||c_269==127) {
            result_266[n_267++]=94;
            result_266[n_267++]=c_269+65-1;
        }
        else {
            result_266[n_267++]=c_269;
        }
    }
    result_266[n_267]=0;
    __result177__ = gComeFunResultObject = __result_obj__ = result_266;
    result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
char* __result178__;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct buffer* result_270;
char* p_271;
char* p2_272;
void* __right_value205 = (void*)0;
char* __result179__;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value202=__builtin_string(self)));
        __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    result_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5291, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_271=self;
    while((_Bool)1) {
        p2_272=strstr(p_271,str);
        if(        p2_272==((void*)0)) {
            p2_272=p_271;
            while(*p2_272) {
                p2_272++;
            }
            buffer_append(result_270,p_271,p2_272-p_271);
            break;
        }
        buffer_append(result_270,p_271,p2_272-p_271);
        buffer_append_str(result_270,replace);
        p_271=p2_272+strlen(str);
    }
    __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value205=buffer_to_string(result_270)));
    come_call_finalizer3(result_270,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result180__;
char* p_273;
void* __right_value207 = (void*)0;
char* __result181__;
void* __right_value208 = (void*)0;
char* __result182__;
void* __right_value209 = (void*)0;
char* __result183__;
    if(    path==((void*)0)) {
        __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=__builtin_string("")));
        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    p_273=path+strlen(path);
    while(p_273>=path) {
        if(        *p_273==47) {
            break;
        }
        else {
            p_273--;
        }
    }
    if(    p_273<path) {
        __result181__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string(path)));
        __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    else {
        __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value208=__builtin_string(p_273+1)));
        __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value209=__builtin_string("")));
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
char* __result184__;
void* __right_value211 = (void*)0;
char* path2_274;
char* p_275;
void* __right_value212 = (void*)0;
char* __result185__;
void* __right_value213 = (void*)0;
char* __result186__;
void* __right_value214 = (void*)0;
char* __result187__;
    if(    path==((void*)0)) {
        __result184__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string("")));
        __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    path2_274=(char*)come_increment_ref_count(xbasename(path));
    p_275=path2_274+strlen(path2_274);
    while(p_275>=path2_274) {
        if(        *p_275==46) {
            break;
        }
        else {
            p_275--;
        }
    }
    if(    p_275<path2_274) {
        __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value212=__builtin_string(path2_274)));
        path2_274 = come_decrement_ref_count2(path2_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    else {
        __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=charp_substring(path2_274,0,p_275-path2_274)));
        path2_274 = come_decrement_ref_count2(path2_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value214=__builtin_string("")));
    path2_274 = come_decrement_ref_count2(path2_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
char* __result188__;
char* p_276;
void* __right_value216 = (void*)0;
char* __result189__;
void* __right_value217 = (void*)0;
char* __result190__;
void* __right_value218 = (void*)0;
char* __result191__;
    if(    path==((void*)0)) {
        __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string("")));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    p_276=path+strlen(path);
    while(p_276>=path) {
        if(        *p_276==46) {
            break;
        }
        else {
            p_276--;
        }
    }
    if(    p_276<path) {
        __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value216=__builtin_string(path)));
        __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    else {
        __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string(p_276+1)));
        __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("")));
    __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* __result192__;
void* __right_value220 = (void*)0;
char* __result193__;
    if(    self) {
        __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=__builtin_string("true")));
        __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    else {
        __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=__builtin_string("false")));
        __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result194__;
    __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf("%c",self)));
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result195__;
    __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf("%d",self)));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result196__;
    __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=xsprintf("%d",self)));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result197__;
    __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=xsprintf("%ld",self)));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=xsprintf("%ld",self)));
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=xsprintf("%f",self)));
    __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
char* __result200__;
    __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=xsprintf("%lf",self)));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
char* __result201__;
void* __right_value229 = (void*)0;
char* __result202__;
    if(    self==((void*)0)) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=__builtin_string("")));
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=__builtin_string(self)));
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
char* __result203__;
void* __right_value231 = (void*)0;
char* __result204__;
    if(    self==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=__builtin_string("")));
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=__builtin_string(self)));
    __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

int bool_compare(_Bool left, _Bool right){
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

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
char* __result205__;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct buffer* buf_277;
int size_279;
void* __right_value235 = (void*)0;
char* __result206__;
    if(    f==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=__builtin_string("")));
        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    buf_277=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5627, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_278[1024];
        memset(&buf2_278, 0, sizeof(char)        *(1024)        );
        size_279=fread(buf2_278,1,1024,f);
        buffer_append(buf_277,buf2_278,size_279);
        if(        size_279<1024) {
            break;
        }
    }
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=buffer_to_string(buf_277)));
    come_call_finalizer3(buf_277,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_280;
    if(    f==((void*)0)) {
        return -1;
    }
    result_280=fclose(f);
    if(    result_280<0) {
        return result_280;
    }
    return result_280;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result207__;
va_list args_282;
int result_283;
struct _IO_FILE* __result208__;
struct _IO_FILE* __result209__;
memset(&args_282, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    char msg2_281[1024*2*2*2];
    memset(&msg2_281, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_282,msg);
    vsnprintf(msg2_281,1024*2*2*2,msg,args_282);
    __builtin_va_end(args_282);
    result_283=fprintf(f,"%s",msg2_281);
    if(    result_283<0) {
        __result208__ = gComeFunResultObject = __result_obj__ = f;
        come_call_finalizer3((&args_282),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = f;
    come_call_finalizer3((&args_282),va_list_finalize, 1, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_284;
int result_285;
int result2_286;
f_284 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_284=fopen(file_name,"a");
    }
    else {
        f_284=fopen(file_name,"w");
    }
    if(    f_284==((void*)0)) {
        return -1;
    }
    result_285=fwrite(self,strlen(self),1,f_284);
    if(    result_285<0) {
        return result_285;
    }
    result2_286=fclose(f_284);
    if(    result2_286<0) {
        return result2_286;
    }
    return result_285;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
char* __result210__;
struct _IO_FILE* f_287;
void* __right_value237 = (void*)0;
char* __result211__;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct buffer* buf_288;
int size_290;
void* __right_value240 = (void*)0;
char* result_291;
int result2_292;
void* __right_value241 = (void*)0;
char* __result212__;
char* __result213__;
    if(    file_name==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value236=__builtin_string("")));
        __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    f_287=fopen(file_name,"r");
    if(    f_287==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("")));
        __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5735, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_289[1024];
        memset(&buf2_289, 0, sizeof(char)        *(1024)        );
        size_290=fread(buf2_289,1,1024,f_287);
        buffer_append(buf_288,buf2_289,size_290);
        if(        size_290<1024) {
            break;
        }
    }
    result_291=(char*)come_increment_ref_count(buffer_to_string(buf_288));
    result2_292=fclose(f_287);
    if(    result2_292<0) {
        __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=__builtin_string("")));
        come_call_finalizer3(buf_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_291 = come_decrement_ref_count2(result_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(buf_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_291 = come_decrement_ref_count2(result_291, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1charph* result_293;
struct list$1charph* __result214__;
void* __right_value244 = (void*)0;
struct list$1charph* __result215__;
    result_293=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5762, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    f==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = result_293;
        come_call_finalizer3(result_293,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    while(1) {
        char buf_294[1024];
        memset(&buf_294, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_294,1024,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_293,(char*)come_increment_ref_count(__builtin_string(buf_294)));
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_295;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_295=fopen(path,mode);
    if(    f_295) {
        block(parent,f_295);
        fclose(f_295);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* __result216__;
void* __right_value246 = (void*)0;
char* __result217__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value245=__builtin_string("")));
        __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    puts(self);
    __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(self)));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result218__;
void* __right_value248 = (void*)0;
char* __result219__;
    if(    self==((void*)0)) {
        __result218__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    printf("%s",self);
    __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string(self)));
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
char* __result220__;
char* msg2_296;
va_list args_297;
void* __right_value250 = (void*)0;
char* __result221__;
msg2_296 = (void*)0;
memset(&args_297, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value249=__builtin_string("")));
        __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    __builtin_va_start(args_297,self);
    vasprintf(&msg2_296,self,args_297);
    __builtin_va_end(args_297);
    printf("%s",msg2_296);
    free(msg2_296);
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self)));
    come_call_finalizer3((&args_297),va_list_finalize, 1, 0, 0, 0, (void*)0);
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_298;
    for(    i_298=0;    i_298<self;    i_298++    ){
        block(parent,i_298);
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

int re_match(const char* pattern, const char* text, int* matchlength){
    return re_matchp(re_compile(pattern),text,matchlength);
}

int re_matchp(struct regex_t* pattern, const char* text, int* matchlength){
int idx_299;
    *matchlength=0;
    if(    pattern!=0) {
        if(        pattern[0].type==(2)) {
            return ((((matchpattern(&pattern[1],text,matchlength)))?(0):(-1)));
        }
        else {
            idx_299=-1;
            do {
                idx_299+=1;
                if(                matchpattern(pattern,text,matchlength)) {
                    if(                    text[0]==0) {
                        return -1;
                    }
                    return idx_299;
                }
            } while(*text++!=0);
        }
    }
    return -1;
}

struct regex_t* re_compile(const char* pattern){
void* __result_obj__=(void*)0;
int ccl_bufidx_302;
char c_303;
int i_304;
int j_305;
int buf_begin_306;
struct regex_t* __result222__;
struct regex_t* __result223__;
struct regex_t* __result224__;
struct regex_t* __result225__;
struct regex_t* __result226__;
struct regex_t* __result227__;
struct regex_t* __result228__;
memset(&c_303, 0, sizeof(char));
    static struct regex_t re_compiled_300[30];
    memset(&re_compiled_300, 0, sizeof(struct regex_t)    *(30)    );
    static unsigned char ccl_buf_301[40];
    memset(&ccl_buf_301, 0, sizeof(unsigned char)    *(40)    );
    ccl_bufidx_302=1;
    i_304=0;
    j_305=0;
    while(pattern[i_304]!=0&&(j_305+1<30)) {
        c_303=pattern[i_304];
        switch (c_303) {
            case 94:
            {
                re_compiled_300[j_305].type=(2);
            }
            break;
            case 36:
            {
                re_compiled_300[j_305].type=(3);
            }
            break;
            case 46:
            {
                re_compiled_300[j_305].type=(1);
            }
            break;
            case 42:
            {
                re_compiled_300[j_305].type=(5);
            }
            break;
            case 43:
            {
                re_compiled_300[j_305].type=(6);
            }
            break;
            case 63:
            {
                re_compiled_300[j_305].type=(4);
            }
            break;
            case 92:
            {
                if(                pattern[i_304+1]!=0) {
                    i_304+=1;
                    switch (pattern[i_304]) {
                        case 100:
                        {
                            re_compiled_300[j_305].type=(10);
                        }
                        break;
                        case 68:
                        {
                            re_compiled_300[j_305].type=(11);
                        }
                        break;
                        case 119:
                        {
                            re_compiled_300[j_305].type=(12);
                        }
                        break;
                        case 87:
                        {
                            re_compiled_300[j_305].type=(13);
                        }
                        break;
                        case 115:
                        {
                            re_compiled_300[j_305].type=(14);
                        }
                        break;
                        case 83:
                        {
                            re_compiled_300[j_305].type=(15);
                        }
                        break;
                        default:
                        {
                            re_compiled_300[j_305].type=(7);
                            re_compiled_300[j_305].u.ch=pattern[i_304];
                        }
                        break;
                    }
                }
            }
            break;
            case 91:
            {
                buf_begin_306=ccl_bufidx_302;
                if(                pattern[i_304+1]==94) {
                    re_compiled_300[j_305].type=(9);
                    i_304+=1;
                    if(                    pattern[i_304+1]==0) {
                        __result222__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result222__;
                    }
                }
                else {
                    re_compiled_300[j_305].type=(8);
                }
                while((pattern[++i_304]!=93)&&(pattern[i_304]!=0)) {
                    if(                    pattern[i_304]==92) {
                        if(                        ccl_bufidx_302>=40-1) {
                            __result223__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result223__;
                        }
                        if(                        pattern[i_304+1]==0) {
                            __result224__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result224__;
                        }
                        ccl_buf_301[ccl_bufidx_302++]=pattern[i_304++];
                    }
                    else if(                    ccl_bufidx_302>=40) {
                        __result225__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result225__;
                    }
                    ccl_buf_301[ccl_bufidx_302++]=pattern[i_304];
                }
                if(                ccl_bufidx_302>=40) {
                    __result226__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                    gComeFunResultObject = (void*)0;
                    return __result226__;
                }
                ccl_buf_301[ccl_bufidx_302++]=0;
                re_compiled_300[j_305].u.ccl=&ccl_buf_301[buf_begin_306];
            }
            break;
            default:
            {
                re_compiled_300[j_305].type=(7);
                re_compiled_300[j_305].u.ch=c_303;
            }
            break;
        }
        if(        pattern[i_304]==0) {
            __result227__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
        i_304+=1;
        j_305+=1;
    }
    re_compiled_300[j_305].type=(0);
    __result228__ = gComeFunResultObject = __result_obj__ = (struct regex_t*)re_compiled_300;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

void re_print(struct regex_t* pattern){
int i_308;
int j_309;
char c_310;
memset(&i_308, 0, sizeof(int));
memset(&j_309, 0, sizeof(int));
memset(&c_310, 0, sizeof(char));
    const char* types_307[]={"UNUSED","DOT","BEGIN","END","QUESTIONMARK","STAR","PLUS","CHAR","CHAR_CLASS","INV_CHAR_CLASS","DIGIT","NOT_DIGIT","ALPHA","NOT_ALPHA","WHITESPACE","NOT_WHITESPACE","BRANCH"};
    for(    i_308=0;    i_308<30;    ++i_308    ){
        if(        pattern[i_308].type==(0)) {
            break;
        }
        printf("type: %s",types_307[pattern[i_308].type]);
        if(        pattern[i_308].type==(8)||pattern[i_308].type==(9)) {
            printf(" [");
            for(            j_309=0;            j_309<40;            ++j_309            ){
                c_310=pattern[i_308].u.ccl[j_309];
                if(                (c_310==0)||(c_310==93)) {
                    break;
                }
                printf("%c",c_310);
            }
            printf("]");
        }
        else if(        pattern[i_308].type==(7)) {
            printf(" '%c'",pattern[i_308].u.ch);
        }
        printf("\n");
    }
}

int matchdigit(char c){
    return (((0)?(isdigit(c)):(((unsigned int)(c)-48)<10)));
}

int matchalpha(char c){
    return (((0)?(isalpha(c)):((((unsigned int)(c)|32)-97)<26)));
}

int matchwhitespace(char c){
    return __isspace(c);
}

int matchalphanum(char c){
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str){
    return ((c!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((c>=str[0])&&(c<=str[2])));
}

int matchdot(char c){
    (void)c;
    return 1;
}

int ismetachar(char c){
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str){
    switch (str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str){
    do {
        if(        matchrange(c,str)) {
            return 1;
        }
        else if(        str[0]==92) {
            str+=1;
            if(            matchmetachar(c,str)) {
                return 1;
            }
            else if(            (c==str[0])&&!ismetachar(c)) {
                return 1;
            }
        }
        else if(        c==str[0]) {
            if(            c==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

int matchone(struct regex_t p, char c){
    switch (p.type) {
        case (1):
        return matchdot(c);
        case (8):
        return matchcharclass(c,(const char*)p.u.ccl);
        case (9):
        return !matchcharclass(c,(const char*)p.u.ccl);
        case (10):
        return matchdigit(c);
        case (11):
        return !matchdigit(c);
        case (12):
        return matchalphanum(c);
        case (13):
        return !matchalphanum(c);
        case (14):
        return matchwhitespace(c);
        case (15):
        return !matchwhitespace(c);
        default:
        return (p.u.ch==c);
    }
}

int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
int prelen_311;
    prelen_311=*matchlength;
    const char* prepoint_312=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>=prepoint_312) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    *matchlength=prelen_311;
    return 0;
}

int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    const char* prepoint_313=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>prepoint_313) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    return 0;
}

int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    if(    p.type==(0)) {
        return 1;
    }
    if(    matchpattern(pattern,text,matchlength)) {
        return 1;
    }
    if(    *text&&matchone(p,*text++)) {
        if(        matchpattern(pattern,text,matchlength)) {
            (*matchlength)++;
            return 1;
        }
    }
    return 0;
}

int matchpattern(struct regex_t* pattern, const char* text, int* matchlength){
int pre_314;
    pre_314=*matchlength;
    do {
        if(        (pattern[0].type==(0))||(pattern[1].type==(4))) {
            return matchquestion(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(5)) {
            return matchstar(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(6)) {
            return matchplus(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        (pattern[0].type==(3))&&pattern[1].type==(0)) {
            return (text[0]==0);
        }
        (*matchlength)++;
    } while((text[0]!=0)&&matchone(*pattern++,*text++));
    *matchlength=pre_314;
    return 0;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_tp_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
unsigned int result_315;
unsigned int* p_316;
    result_315=0;
    p_316=value;
    while(*p_316) {
        result_315+=*p_316;
        p_316++;
    }
    return result_315;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=xsprintf("%ls",wc)));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    return 0;
}

int main(int argc, char** argv){
int __result230__;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result230__ = come_main_v2(argc,argv);
    come_call_finalizer3(gExceptionRightValueObjects,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result230__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_317;
struct list_item$1voidph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj32;
struct sType* __dec_obj33;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj32=self->c_value;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj33=self->type;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct list$1voidph* __dec_obj37;
struct list$1sNodeph* __dec_obj38;
struct list$1voidph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct sType* __dec_obj42;
struct sNode* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj38=self->mArrayNum;
            come_call_finalizer3(__dec_obj38,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj40=self->mParamTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj41=self->mParamNames;
            come_call_finalizer3(__dec_obj41,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj42=self->mResultType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj43=self->mAlignas;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj44=self->mChannelType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj45=self->mSizeNum;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
struct list_item$1voidph* it_319;
struct list_item$1voidph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_321;
struct list_item$1sNodeph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_323;
struct list_item$1sNodeph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_325;
struct list_item$1charph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* __dec_obj52;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
void* __right_value263 = (void*)0;
void* __right_value269 = (void*)0;
struct map$2voidphvoidph* __dec_obj59;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct map$2voidphvoidph* __dec_obj60;
struct sModule* __result240__;
    __dec_obj52=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 24, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj52,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj53=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 25, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj53,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj54=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj59=self->mHeader;
    self->mHeader=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "01main.c", 28, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    come_call_finalizer3(__dec_obj59,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj60=self->mHeaderStructs;
    self->mHeaderStructs=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "01main.c", 29, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    come_call_finalizer3(__dec_obj60,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_327;
int i_328;
    for(    i_327=0;    i_327<self->size;    i_327++    ){
        if(        self->item_existance[i_327]) {
            if(            1) {
                come_call_finalizer3(self->items[i_327], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_328=0;    i_328<self->size;    i_328++    ){
        if(        self->item_existance[i_328]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_328], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_329;
struct list_item$1voidp* prev_it_330;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        prev_it_330=it_329;
        it_329=it_329->next;
        come_call_finalizer3(prev_it_330,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result232__;
void* __right_value256 = (void*)0;
struct map$2voidphvoidph* result_331;
void* __right_value262 = (void*)0;
struct list$1voidp* __dec_obj56;
struct map$2voidphvoidph* __result237__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_331=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_331->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_331->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_331->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_331->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_331->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj56=result_331->key_list;
        result_331->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj56,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_331->it=self->it;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_331;
    come_call_finalizer3(result_331,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result233__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1voidp* result_333;
struct list_item$1voidp* it_334;
struct list$1voidp* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_333=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_334=self->head;
    while(it_334!=((void*)0)) {
        list$1voidpp_add(result_333,it_334->item);
        it_334=it_334->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_332;
    result_332=0;
    result_332+=int_get_hash_key(((int)self->head));
    result_332+=int_get_hash_key(((int)self->tail));
    result_332+=int_get_hash_key(((int)self->len));
    result_332+=int_get_hash_key(((int)self->it));
    return result_332;
}

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1voidp* litem_335;
void* __right_value260 = (void*)0;
struct list_item$1voidp* litem_336;
void* __right_value261 = (void*)0;
struct list_item$1voidp* litem_337;
struct list$1voidp* __result235__;
    if(    self->len==0) {
        litem_335=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value259=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=((void*)0);
        litem_335->next=((void*)0);
        litem_335->item=item;
        self->tail=litem_335;
        self->head=litem_335;
    }
    else if(    self->len==1) {
        litem_336=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value260=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->head;
        litem_336->next=((void*)0);
        litem_336->item=item;
        self->tail=litem_336;
        self->head->next=litem_336;
    }
    else {
        litem_337=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value261=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=self->tail;
        litem_337->next=((void*)0);
        litem_337->item=item;
        self->tail->next=litem_337;
        self->tail=litem_337;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_338;
struct list_item$1voidp* prev_it_339;
    it_338=self->head;
    while(it_338!=((void*)0)) {
        prev_it_339=it_338;
        it_338=it_338->next;
        come_call_finalizer3(prev_it_339,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
struct list$1voidp* __dec_obj57;
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        if(        self->key_list==gComeFunResultObject) {
            __dec_obj57=self->key_list;
            come_call_finalizer3(__dec_obj57,list$1voidp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_340;
    result_340=0;
    result_340+=int_get_hash_key(((int)self->keys));
    result_340+=int_get_hash_key(((int)self->item_existance));
    result_340+=int_get_hash_key(((int)self->items));
    result_340+=int_get_hash_key(((int)self->size));
    result_340+=int_get_hash_key(((int)self->len));
    result_340+=int_get_hash_key(((int)self->key_list));
    result_340+=int_get_hash_key(((int)self->it));
    return result_340;
}

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
    if(    !come_call_equals((void*)0, left->keys, right->keys)) {
        return (_Bool)0;
    }
    if(    !boolp_equals(left->item_existance,right->item_existance)) {
        return (_Bool)0;
    }
    if(    !come_call_equals((void*)0, left->items, right->items)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list$1voidpp_equals(left->key_list,right->key_list)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool voidpp_equals(void** left, void** right){
    return (_Bool)1;
}

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
int i_341;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1voidp* __dec_obj58;
struct map$2voidphvoidph* __result239__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value264=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value265=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value266=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_341=0;    i_341<128;    i_341++    ){
        self->item_existance[i_341]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj58,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result238__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj61;
struct buffer* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
struct map$2voidphvoidph* __dec_obj65;
struct map$2voidphvoidph* __dec_obj66;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj61=self->mSourceHead;
            come_call_finalizer3(__dec_obj61,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj62=self->mSource;
            come_call_finalizer3(__dec_obj62,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj63=self->mLastCode;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj64=self->mLastCode2;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj65=self->mHeader;
            come_call_finalizer3(__dec_obj65,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        if(        self->mHeaderStructs==gComeFunResultObject) {
            __dec_obj66=self->mHeaderStructs;
            come_call_finalizer3(__dec_obj66,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeaderStructs,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct map$2voidphvoidph* __dec_obj67;
struct sVarTable* __result241__;
    __dec_obj67=self->mVars;
    self->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "01main.c", 36, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    come_call_finalizer3(__dec_obj67,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    static int id_342=0;
    self->mID=++id_342;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer3(self->mVars,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__=(void*)0;
int pointer_num_343;
char* p_344;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* name2_345;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sClass* klass_346;
void* __right_value278 = (void*)0;
struct sClass* generics_class_350;
void* __right_value290 = (void*)0;
struct sClass* klass2_351;
void* __right_value291 = (void*)0;
char* __dec_obj79;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj80;
struct sType* __dec_obj81;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1voidph* __dec_obj82;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNodeph* __dec_obj83;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1voidph* __dec_obj84;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj85;
struct sType* __dec_obj86;
struct sNode* __dec_obj87;
void* __right_value311 = (void*)0;
char* __dec_obj88;
struct sType* __result275__;
    pointer_num_343=0;
    p_344=name;
    while(*p_344) {
        if(        xisalpha(*p_344)) {
            p_344++;
        }
        else {
            break;
        }
    }
    while(*p_344==42) {
        pointer_num_343++;
        p_344++;
    }
    name2_345=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value274=__builtin_string(name))),0,-pointer_num_343-1));
    __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_346=((struct sClass*)((void*)(__right_value277=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value276=__builtin_string(name2_345)))))));
    __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value277,(void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_350=((struct sClass*)((void*)(__right_value278=map$2voidphvoidphp_operator_load_element(info->generics_classes,name2_345))));
    come_call_finalizer3(__right_value278,(void*)0, 0, 1, 0, 0, __result_obj__);
    if(    klass_346==((void*)0)&&generics_class_350==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_345);
    }
    if(    klass_346) {
        self->mClass=klass_346;
    }
    else {
        klass2_351=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 80, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
        __dec_obj79=klass2_351->mName;
        klass2_351->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_351));
        self->mClass=((struct sClass*)((void*)(__right_value302=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value301=__builtin_string(name)))))));
        __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value302,(void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_351,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj80=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj81=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj82=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 90, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj82,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj83=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "01main.c", 91, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj84=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 93, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj84,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj85=self->mParamNames;
    self->mParamNames=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 94, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj86=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_343;
    __dec_obj87=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj88=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_345 = come_decrement_ref_count2(name2_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_347;
unsigned int hash_348;
unsigned int it_349;
void* __result242__;
void* __result243__;
void* __result244__;
void* __result245__;
default_value_347 = (void*)0;
    memset(&default_value_347,0,sizeof(void*));
    hash_348=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_349=hash_348;
    while((_Bool)1) {
        if(        self->item_existance[it_349]) {
            if(            come_call_equals((void*)0, self->keys[it_349], ((char*)key))) {
                __result242__ = gComeFunResultObject = __result_obj__ = self->items[it_349];
                come_call_finalizer3(default_value_347, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
            it_349++;
            if(            it_349>=self->size) {
                it_349=0;
            }
            else if(            it_349==hash_348) {
                __result243__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_347);
                come_call_finalizer3(default_value_347, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
        }
        else {
            __result244__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_347);
            come_call_finalizer3(default_value_347, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result244__;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_347);
    come_call_finalizer3(default_value_347, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj68;
struct list$1voidph* __dec_obj69;
char* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj68=self->mName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj69=self->mFields;
            come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj70=self->mParentClassName;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj71=self->mAttribute;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result246__;
void* __right_value279 = (void*)0;
struct sClass* result_355;
void* __right_value280 = (void*)0;
char* __dec_obj72;
void* __right_value287 = (void*)0;
struct list$1voidph* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
struct sClass* __result251__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_355=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_355->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_355->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_355->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_355->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_355->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_355->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_355->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_355->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj72=result_355->mName;
        result_355->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_355->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_355->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj76=result_355->mFields;
        result_355->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj76,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj77=result_355->mParentClassName;
        result_355->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_355->mAttribute;
        result_355->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_355->mDynamic=self->mDynamic;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_355;
    come_call_finalizer3(result_355,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_352;
    result_352=0;
    result_352+=int_get_hash_key(((int)self->mStruct));
    result_352+=int_get_hash_key(((int)self->mFloat));
    result_352+=int_get_hash_key(((int)self->mUnion));
    result_352+=int_get_hash_key(((int)self->mGenerics));
    result_352+=int_get_hash_key(((int)self->mMethodGenerics));
    result_352+=int_get_hash_key(((int)self->mEnum));
    result_352+=int_get_hash_key(((int)self->mProtocol));
    result_352+=int_get_hash_key(((int)self->mNumber));
    result_352+=int_get_hash_key(((int)self->mName));
    result_352+=int_get_hash_key(((int)self->mGenericsNum));
    result_352+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_352+=int_get_hash_key(((int)self->mFields));
    result_352+=int_get_hash_key(((int)self->mParentClassName));
    result_352+=int_get_hash_key(((int)self->mAttribute));
    result_352+=int_get_hash_key(((int)self->mDynamic));
    return result_352;
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
struct list_item$1voidph* it_353;
struct list_item$1voidph* it2_354;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_353=left->head;
    it2_354=right->head;
    while(it_353!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_353->item, it2_354->item)) {
            return (_Bool)0;
        }
        it_353=it_353->next;
        it2_354=it2_354->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result247__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1voidph* result_357;
struct list_item$1voidph* it_358;
void* __right_value286 = (void*)0;
struct list$1voidph* __result250__;
    if(    self==((void*)0)) {
        __result247__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_357=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_358=self->head;
    while(it_358!=((void*)0)) {
        list$1voidphp_add(result_357,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_358->item)));
        it_358=it_358->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_356;
    result_356=0;
    result_356+=int_get_hash_key(((int)self->head));
    result_356+=int_get_hash_key(((int)self->tail));
    result_356+=int_get_hash_key(((int)self->len));
    result_356+=int_get_hash_key(((int)self->it));
    return result_356;
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
void* __right_value283 = (void*)0;
struct list_item$1voidph* litem_359;
void* __dec_obj73;
void* __right_value284 = (void*)0;
struct list_item$1voidph* litem_360;
void* __dec_obj74;
void* __right_value285 = (void*)0;
struct list_item$1voidph* litem_361;
void* __dec_obj75;
struct list$1voidph* __result249__;
    if(    self->len==0) {
        litem_359=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value283=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj73=litem_359->item;
        litem_359->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value284=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj74=litem_360->item;
        litem_360->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value285=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj75=litem_361->item;
        litem_361->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_379;
unsigned int it_380;
_Bool same_key_exist_397;
char* it2_400;
struct map$2voidphvoidph* __result273__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_379=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_380=hash_379;
    while((_Bool)1) {
        if(        self->item_existance[it_380]) {
            if(            come_call_equals((void*)0, self->keys[it_380], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_380]);
                    come_call_finalizer3(self->keys[it_380], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_380]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_380]);
                    self->keys[it_380]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_380], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_380]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_380]=item;
                }
                break;
            }
            it_380++;
            if(            it_380>=self->size) {
                it_380=0;
            }
            else if(            it_380==hash_379) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_380]=(_Bool)1;
            if(            1) {
                self->keys[it_380]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_380]=key;
            }
            if(            1) {
                self->items[it_380]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_380]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_397=(_Bool)0;
    for(    it2_400=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_400=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_400, key)) {
            same_key_exist_397=(_Bool)1;
        }
    }
    if(    !same_key_exist_397) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_362;
void* __right_value292 = (void*)0;
void** keys_363;
void* __right_value293 = (void*)0;
void** items_364;
void* __right_value294 = (void*)0;
_Bool* item_existance_365;
int len_366;
void* it_369;
void* default_value_372;
void* __right_value295 = (void*)0;
void* it2_373;
unsigned int hash_376;
int n_377;
void* default_value_378;
void* __right_value296 = (void*)0;
default_value_372 = (void*)0;
default_value_378 = (void*)0;
    size_362=self->size*10;
    keys_363=(void**)come_increment_ref_count(((void**)(__right_value292=(void**)come_calloc(1, sizeof(void*)*(1*(size_362)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_364=(void**)come_increment_ref_count(((void**)(__right_value293=(void**)come_calloc(1, sizeof(void*)*(1*(size_362)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_365=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value294=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_362)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_366=0;
    for(    it_369=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_369=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_372,0,sizeof(void*));
        it2_373=((void*)(__right_value295=map$2voidphvoidphp_at(self,it_369,default_value_372)));
        come_call_finalizer3(__right_value295,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_376=come_call_get_hash_key((void*)0, ((void*)it_369))%size_362;
        n_377=hash_376;
        while((_Bool)1) {
            if(            item_existance_365[n_377]) {
                n_377++;
                if(                n_377>=size_362) {
                    n_377=0;
                }
                else if(                n_377==hash_376) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_365[n_377]=(_Bool)1;
                keys_363[n_377]=it_369;
                items_364[n_377]=((void*)(__right_value296=map$2voidphvoidphp_at(self,it_369,default_value_378)));
                come_call_finalizer3(__right_value296,(void*)0, 0, 1, 0, 0, (void*)0);
                len_366++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_363;
    self->items=items_364;
    self->item_existance=item_existance_365;
    self->size=size_362;
    self->len=len_366;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_367;
void* __result252__;
void* __result253__;
void* result_368;
void* __result254__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_367,0,sizeof(void*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_368,0,sizeof(void*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_370;
void* __result255__;
void* __result256__;
void* result_371;
void* __result257__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_370,0,sizeof(void*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_371,0,sizeof(void*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_374;
unsigned int it_375;
void* __result258__;
void* __result259__;
void* __result260__;
void* __result261__;
    hash_374=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_375=hash_374;
    while((_Bool)1) {
        if(        self->item_existance[it_375]) {
            if(            come_call_equals((void*)0, self->keys[it_375], key)) {
                __result258__ = gComeFunResultObject = __result_obj__ = self->items[it_375];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result258__;
            }
            it_375++;
            if(            it_375>=self->size) {
                it_375=0;
            }
            else if(            it_375==hash_374) {
                __result259__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
        }
        else {
            __result260__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result260__;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_381;
struct list_item$1voidp* it_382;
struct list$1voidp* __result265__;
    it2_381=0;
    it_382=self->head;
    while(it_382!=((void*)0)) {
        if(        come_call_equals((void*)0, it_382->item, item)) {
            list$1voidpp_delete(self,it2_381,it2_381+1);
            break;
        }
        it2_381++;
        it_382=it_382->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_383;
struct list$1voidp* __result262__;
struct list_item$1voidp* it_386;
int i_387;
struct list_item$1voidp* prev_it_388;
struct list_item$1voidp* it_389;
int i_390;
struct list_item$1voidp* prev_it_391;
struct list_item$1voidp* it_392;
struct list_item$1voidp* head_prev_it_393;
struct list_item$1voidp* tail_it_394;
int i_395;
struct list_item$1voidp* prev_it_396;
struct list$1voidp* __result264__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_383=tail;
        tail=head;
        head=tmp_383;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result262__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_386=self->head;
        i_387=0;
        while(it_386!=((void*)0)) {
            if(            i_387<tail) {
                prev_it_388=it_386;
                it_386=it_386->next;
                i_387++;
                come_call_finalizer3(prev_it_388,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_387==tail) {
                self->head=it_386;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_386=it_386->next;
                i_387++;
            }
        }
    }
    else if(    tail==self->len) {
        it_389=self->head;
        i_390=0;
        while(it_389!=((void*)0)) {
            if(            i_390==head) {
                self->tail=it_389->prev;
                self->tail->next=((void*)0);
            }
            if(            i_390>=head) {
                prev_it_391=it_389;
                it_389=it_389->next;
                i_390++;
                come_call_finalizer3(prev_it_391,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_389=it_389->next;
                i_390++;
            }
        }
    }
    else {
        it_392=self->head;
        head_prev_it_393=((void*)0);
        tail_it_394=((void*)0);
        i_395=0;
        while(it_392!=((void*)0)) {
            if(            i_395==head) {
                head_prev_it_393=it_392->prev;
            }
            if(            i_395==tail) {
                tail_it_394=it_392;
            }
            if(            i_395>=head&&i_395<tail) {
                prev_it_396=it_392;
                it_392=it_392->next;
                i_395++;
                come_call_finalizer3(prev_it_396,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_392=it_392->next;
                i_395++;
            }
        }
        if(        head_prev_it_393!=((void*)0)) {
            head_prev_it_393->next=tail_it_394;
        }
        if(        tail_it_394!=((void*)0)) {
            tail_it_394->prev=head_prev_it_393;
        }
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_384;
struct list_item$1voidp* prev_it_385;
struct list$1voidp* __result263__;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        prev_it_385=it_384;
        it_384=it_384->next;
        come_call_finalizer3(prev_it_385,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_398;
void* __result266__;
void* __result267__;
void* result_399;
void* __result268__;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_398,0,sizeof(void*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_398;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->it=self->head;
    if(    self->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_399,0,sizeof(void*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_399;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_401;
void* __result269__;
void* __result270__;
void* result_402;
void* __result271__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_401,0,sizeof(void*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_402,0,sizeof(void*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct list_item$1voidp* litem_403;
void* __right_value298 = (void*)0;
struct list_item$1voidp* litem_404;
void* __right_value299 = (void*)0;
struct list_item$1voidp* litem_405;
struct list$1voidp* __result272__;
    if(    self->len==0) {
        litem_403=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value297=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_403->prev=((void*)0);
        litem_403->next=((void*)0);
        litem_403->item=item;
        self->tail=litem_403;
        self->head=litem_403;
    }
    else if(    self->len==1) {
        litem_404=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value298=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_404->prev=self->head;
        litem_404->next=((void*)0);
        litem_404->item=item;
        self->tail=litem_404;
        self->head->next=litem_404;
    }
    else {
        litem_405=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value299=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_405->prev=self->tail;
        litem_405->next=((void*)0);
        litem_405->item=item;
        self->tail->next=litem_405;
        self->tail=litem_405;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result274__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj89;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1voidph* __dec_obj90;
struct sClass* __result276__;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj89=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj90=self->mFields;
    self->mFields=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 136, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj90,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj91;
void* __right_value316 = (void*)0;
char* __dec_obj92;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* __dec_obj93;
void* __right_value319 = (void*)0;
char* __dec_obj94;
struct sClassModule* __result277__;
    __dec_obj91=self->mName;
    self->mName=(char*)come_increment_ref_count(come_call_cloner(charp_clone, name));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=self->mText;
    self->mText=(char*)come_increment_ref_count(come_call_cloner(string_clone, text));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "01main.c", 145, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mSName;
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=sline;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj95;
char* __dec_obj96;
struct list$1charph* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj96=self->mText;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj97=self->mParams;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj98=self->mSName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute){
void* __result_obj__=(void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
struct list$1voidph* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* __dec_obj125;
struct list$1voidph* o2_saved_423;
struct sType* it_426;
void* __right_value354 = (void*)0;
struct list$1charph* o2_saved_432;
char* it_435;
void* __right_value355 = (void*)0;
struct sType* __dec_obj129;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct buffer* __dec_obj130;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct buffer* __dec_obj131;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct buffer* __dec_obj132;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct buffer* __dec_obj133;
struct sBlock* __dec_obj134;
struct sType* result_438;
char* __dec_obj137;
char* __dec_obj138;
struct sFun* __result301__;
result_438 = (void*)0;
    __dec_obj99=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj101=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj101,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj102=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj103=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mGenerate=generate_;
    __dec_obj125=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 166, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_423=(struct list$1voidph*)come_increment_ref_count((param_types)),it_426=((struct sType*)list$1voidphp_begin((o2_saved_423)));    !list$1voidphp_end((o2_saved_423));    it_426=((struct sType*)list$1voidphp_next((o2_saved_423)))    ){
        list$1voidphp_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_426)));
    }
    come_call_finalizer3(o2_saved_423,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_432=(struct list$1charph*)come_increment_ref_count((param_names)),it_435=list$1charphp_begin((o2_saved_432));    !list$1charphp_end((o2_saved_432));    it_435=list$1charphp_next((o2_saved_432))    ){
        list$1charphp_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_435)));
    }
    come_call_finalizer3(o2_saved_432,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj130=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 179, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj130,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj131=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 180, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj132=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 181, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj132,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj133=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 182, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj133,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj134=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer3(__dec_obj134,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(    (string_operator_equals(result_type->mClass->mName,"void")||result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj137=self->mAttribute;
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=self->mFunAttribute;
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_attribute = come_decrement_ref_count2(fun_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result278__;
void* __right_value320 = (void*)0;
struct sType* result_411;
void* __right_value321 = (void*)0;
struct sType* __dec_obj104;
void* __right_value322 = (void*)0;
struct sType* __dec_obj105;
void* __right_value323 = (void*)0;
struct sType* __dec_obj106;
void* __right_value324 = (void*)0;
struct list$1voidph* __dec_obj107;
void* __right_value332 = (void*)0;
struct list$1sNodeph* __dec_obj111;
void* __right_value333 = (void*)0;
struct list$1voidph* __dec_obj112;
void* __right_value340 = (void*)0;
struct list$1charph* __dec_obj116;
void* __right_value341 = (void*)0;
struct sType* __dec_obj117;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value343 = (void*)0;
struct sType* __dec_obj119;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value345 = (void*)0;
char* __dec_obj121;
void* __right_value346 = (void*)0;
char* __dec_obj122;
void* __right_value347 = (void*)0;
char* __dec_obj123;
void* __right_value348 = (void*)0;
char* __dec_obj124;
struct sType* __result287__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_411=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_411->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj104=result_411->mNoSolvedGenericsType;
        result_411->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj105=result_411->mOriginalLoadVarType;
        result_411->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj106=result_411->mAnyOriginalType;
        result_411->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj107=result_411->mGenericsTypes;
        result_411->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj107,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj111=result_411->mArrayNum;
        result_411->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj111,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj112=result_411->mParamTypes;
        result_411->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj112,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj116=result_411->mParamNames;
        result_411->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj117=result_411->mResultType;
        result_411->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj118=result_411->mAlignas;
        result_411->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj119=result_411->mChannelType;
        result_411->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_411->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_411->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_411->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_411->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_411->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_411->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_411->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_411->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_411->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_411->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_411->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_411->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_411->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_411->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_411->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_411->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_411->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_411->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj120=result_411->mSizeNum;
        result_411->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_411->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj121=result_411->mOriginalTypeName;
        result_411->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_411->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_411->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_411->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_411->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_411->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj122=result_411->mAsmName;
        result_411->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_411->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_411->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_411->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_411->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_411->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj123=result_411->mTupleName;
        result_411->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj124=result_411->mAttribute;
        result_411->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_411->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_411->mDynamic=self->mDynamic;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_411;
    come_call_finalizer3(result_411,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_406;
    result_406=0;
    result_406+=int_get_hash_key(((int)self->mClass));
    result_406+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_406+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_406+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_406+=int_get_hash_key(((int)self->mAnyClass));
    result_406+=int_get_hash_key(((int)self->mGenericsTypes));
    result_406+=int_get_hash_key(((int)self->mArrayNum));
    result_406+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_406+=int_get_hash_key(((int)self->mParamTypes));
    result_406+=int_get_hash_key(((int)self->mParamNames));
    result_406+=int_get_hash_key(((int)self->mResultType));
    result_406+=int_get_hash_key(((int)self->mVarArgs));
    result_406+=int_get_hash_key(((int)self->mAlignas));
    result_406+=int_get_hash_key(((int)self->mChannelType));
    result_406+=int_get_hash_key(((int)self->mUnsigned));
    result_406+=int_get_hash_key(((int)self->mShort));
    result_406+=int_get_hash_key(((int)self->mLong));
    result_406+=int_get_hash_key(((int)self->mLongLong));
    result_406+=int_get_hash_key(((int)self->mConstant));
    result_406+=int_get_hash_key(((int)self->mAtomic));
    result_406+=int_get_hash_key(((int)self->mRegister));
    result_406+=int_get_hash_key(((int)self->mVolatile));
    result_406+=int_get_hash_key(((int)self->mStatic));
    result_406+=int_get_hash_key(((int)self->mUniq));
    result_406+=int_get_hash_key(((int)self->mRecord));
    result_406+=int_get_hash_key(((int)self->mExtern));
    result_406+=int_get_hash_key(((int)self->mRestrict));
    result_406+=int_get_hash_key(((int)self->mImmutable));
    result_406+=int_get_hash_key(((int)self->mHeap));
    result_406+=int_get_hash_key(((int)self->mChannel));
    result_406+=int_get_hash_key(((int)self->mNoHeap));
    result_406+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_406+=int_get_hash_key(((int)self->mException));
    result_406+=int_get_hash_key(((int)self->mPointerNum));
    result_406+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_406+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_406+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_406+=int_get_hash_key(((int)self->mSizeNum));
    result_406+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_406+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_406+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_406+=int_get_hash_key(((int)self->mFunctionParam));
    result_406+=int_get_hash_key(((int)self->mAllocaValue));
    result_406+=int_get_hash_key(((int)self->mInline));
    result_406+=int_get_hash_key(((int)self->mNullValue));
    result_406+=int_get_hash_key(((int)self->mGuardValue));
    result_406+=int_get_hash_key(((int)self->mAsmName));
    result_406+=int_get_hash_key(((int)self->mArrayPointerType));
    result_406+=int_get_hash_key(((int)self->mLambdaArray));
    result_406+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_406+=int_get_hash_key(((int)self->mTypedef));
    result_406+=int_get_hash_key(((int)self->mMultipleTypes));
    result_406+=int_get_hash_key(((int)self->mOriginIsArray));
    result_406+=int_get_hash_key(((int)self->mTupleName));
    result_406+=int_get_hash_key(((int)self->mAttribute));
    result_406+=int_get_hash_key(((int)self->mGenerate));
    result_406+=int_get_hash_key(((int)self->mCreateVTable));
    result_406+=int_get_hash_key(((int)self->mDynamic));
    return result_406;
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
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
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
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_407;
struct list_item$1sNodeph* it2_408;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_407=left->head;
    it2_408=right->head;
    while(it_407!=((void*)0)) {
        if(        !sNode_equals(it_407->item,it2_408->item)) {
            return (_Bool)0;
        }
        it_407=it_407->next;
        it2_408=it2_408->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_409;
struct list_item$1charph* it2_410;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_409=left->head;
    it2_410=right->head;
    while(it_409!=((void*)0)) {
        if(        !string_equals(it_409->item,it2_410->item)) {
            return (_Bool)0;
        }
        it_409=it_409->next;
        it2_410=it2_410->next;
    }
    return (_Bool)1;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result279__;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1sNodeph* result_412;
struct list_item$1sNodeph* it_413;
void* __right_value331 = (void*)0;
struct list$1sNodeph* __result283__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_412=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_413=self->head;
    while(it_413!=((void*)0)) {
        list$1sNodephp_add(result_412,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_413->item)));
        it_413=it_413->next;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_412;
    come_call_finalizer3(result_412,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1sNodeph* litem_414;
struct sNode* __dec_obj108;
void* __right_value328 = (void*)0;
struct list_item$1sNodeph* litem_415;
struct sNode* __dec_obj109;
void* __right_value329 = (void*)0;
struct list_item$1sNodeph* litem_416;
struct sNode* __dec_obj110;
struct list$1sNodeph* __result280__;
    if(    self->len==0) {
        litem_414=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value327=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj108=litem_414->item;
        litem_414->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value328=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj109=litem_415->item;
        litem_415->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value329=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj110=litem_416->item;
        litem_416->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result281__;
void* __right_value330 = (void*)0;
struct sNode* result_417;
struct sNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_417=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_417->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_417->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_417->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_417->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_417->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_417->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_417->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_417->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_417->kind=self->kind;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_417;
    if(result_417) { result_417 = come_decrement_ref_count2(result_417, ((struct sNode*)result_417)->finalize, ((struct sNode*)result_417)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result284__;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct list$1charph* result_418;
struct list_item$1charph* it_419;
void* __right_value339 = (void*)0;
struct list$1charph* __result286__;
    if(    self==((void*)0)) {
        __result284__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_418=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_419=self->head;
    while(it_419!=((void*)0)) {
        list$1charphp_add(result_418,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_419->item)));
        it_419=it_419->next;
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
struct list_item$1charph* litem_420;
char* __dec_obj113;
void* __right_value337 = (void*)0;
struct list_item$1charph* litem_421;
char* __dec_obj114;
void* __right_value338 = (void*)0;
struct list_item$1charph* litem_422;
char* __dec_obj115;
struct list$1charph* __result285__;
    if(    self->len==0) {
        litem_420=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value336=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj113=litem_420->item;
        litem_420->item=(char*)come_increment_ref_count(item);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value337=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj114=litem_421->item;
        litem_421->item=(char*)come_increment_ref_count(item);
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value338=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj115=litem_422->item;
        litem_422->item=(char*)come_increment_ref_count(item);
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_424;
void* __result288__;
void* __result289__;
void* result_425;
void* __result290__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_424,0,sizeof(void*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->head;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_425,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_427;
void* __result291__;
void* __result292__;
void* result_428;
void* __result293__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_427,0,sizeof(void*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_428,0,sizeof(void*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
struct list_item$1voidph* litem_429;
void* __dec_obj126;
void* __right_value352 = (void*)0;
struct list_item$1voidph* litem_430;
void* __dec_obj127;
void* __right_value353 = (void*)0;
struct list_item$1voidph* litem_431;
void* __dec_obj128;
struct list$1voidph* __result294__;
    if(    self->len==0) {
        litem_429=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value351=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=((void*)0);
        litem_429->next=((void*)0);
        __dec_obj126=litem_429->item;
        litem_429->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_429;
        self->head=litem_429;
    }
    else if(    self->len==1) {
        litem_430=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value352=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=self->head;
        litem_430->next=((void*)0);
        __dec_obj127=litem_430->item;
        litem_430->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_430;
        self->head->next=litem_430;
    }
    else {
        litem_431=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value353=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=self->tail;
        litem_431->next=((void*)0);
        __dec_obj128=litem_431->item;
        litem_431->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_431;
        self->tail=litem_431;
    }
    self->len++;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_433;
char* __result295__;
char* __result296__;
char* result_434;
char* __result297__;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_433,0,sizeof(char*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_433;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->head;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_434,0,sizeof(char*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_434;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_436;
char* __result298__;
char* __result299__;
char* result_437;
char* __result300__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_436,0,sizeof(char*));
        __result298__ = gComeFunResultObject = __result_obj__ = result_436;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result299__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    memset(&result_437,0,sizeof(char*));
    __result300__ = gComeFunResultObject = __result_obj__ = result_437;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj135;
struct sVarTable* __dec_obj136;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj135=self->mNodes;
            come_call_finalizer3(__dec_obj135,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj136=self->mVarTable;
            come_call_finalizer3(__dec_obj136,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj139;
struct sType* __dec_obj140;
struct list$1voidph* __dec_obj141;
struct list$1charph* __dec_obj142;
struct list$1charph* __dec_obj143;
struct sType* __dec_obj144;
struct sBlock* __dec_obj145;
struct buffer* __dec_obj146;
struct buffer* __dec_obj147;
struct buffer* __dec_obj148;
struct buffer* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj139=self->mName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj140=self->mResultType;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj141=self->mParamTypes;
            come_call_finalizer3(__dec_obj141,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj142=self->mParamNames;
            come_call_finalizer3(__dec_obj142,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj143=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj143,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj144=self->mLambdaType;
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj145=self->mBlock;
            come_call_finalizer3(__dec_obj145,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj146=self->mSource;
            come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj147=self->mSourceHead;
            come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj148=self->mSourceHead2;
            come_call_finalizer3(__dec_obj148,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj149=self->mSourceDefer;
            come_call_finalizer3(__dec_obj149,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj150=self->mDeclareSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj151=self->mAttribute;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj152=self->mFunAttribute;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj153;
struct sNodeBase* __result302__;
    self->sline=info->sline;
    __dec_obj153=self->sname;
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj154;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string(self->sname)));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

