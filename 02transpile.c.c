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
long long __lldata;
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

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
};

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

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
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

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1void$ph
{
    void* item;
    struct list_item$1void$ph* prev;
    struct list_item$1void$ph* next;
};

struct list$1void$ph
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
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
    struct list$1void$ph* mFields;
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

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1void$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
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
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1void$p
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
};

struct map$2void$phvoid$ph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1void$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2void$phvoid$ph* mHeader;
    struct map$2void$phvoid$ph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2void$phvoid$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
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
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
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
    struct map$2void$phvoid$ph* funcs;
    struct map$2void$phvoid$ph* generics_funcs;
    struct map$2void$phvoid$ph* classes;
    struct map$2void$phvoid$ph* modules;
    struct map$2void$phvoid$ph* types;
    struct map$2void$phvoid$ph* generics_classes;
    struct map$2void$phvoid$ph* struct_definition;
    struct map$2void$phvoid$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1void$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1void$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
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
    struct map$2void$phvoid$ph* module_params;
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
    struct list$1void$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2void$phvoid$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1void$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

extern struct list$1void$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";
struct tuple2$2int$void$p
{
    int v1;
    void* v2;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
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
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
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
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
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
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
static struct tuple2$2int$char$ph* tuple2$2int$char$ph_initialize(struct tuple2$2int$char$ph* self, int v1, char* v2);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct tuple2$2int$void$p* tuple2$2int$void$p_initialize(struct tuple2$2int$void$p* self, int v1, void* v2);
static void tuple2$2int$void$p$p_finalize(struct tuple2$2int$void$p* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph$p_insert(struct list$1char$ph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
static void sClass_finalize(struct sClass* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void sType_finalize(struct sType* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
void create_pico_version_header();
int come_main_v2(int argc, char** argv);
static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self);
static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self);
static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item);
static void list$1void$p_finalize(struct list$1void$p* self);
static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self);
static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self);
static void sModule_finalize(struct sModule* self);
static struct sModule* sModule_clone(struct sModule* self);
static unsigned int sModule_get_hash_key(struct sModule* self);
static _Bool sModule_equals(struct sModule* left, struct sModule* right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_clone(struct map$2void$phvoid$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static void sInfo_finalize(struct sInfo* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
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

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short$* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int$* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long$* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1char$p* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float$* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double$* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char$* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1457, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1467, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1477, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_179;
struct list_item$1char$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1char$p* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1457, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1467, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1477, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_185;
struct list_item$1char$p* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short$* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1457, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1467, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1477, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_191;
struct list_item$1short$* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int$* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1457, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1467, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1477, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_197;
struct list_item$1int$* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long$* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1457, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1467, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1477, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_203;
struct list_item$1long$* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float$* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1457, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1467, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1477, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_209;
struct list_item$1float$* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double$* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1457, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1467, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1477, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_215;
struct list_item$1double$* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
void* __result_obj__=(void*)0;
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result121__;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
void* __result_obj__=(void*)0;
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result124__;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
            (self->items[i_226] = come_decrement_ref_count2(self->items[i_226], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
void* __result_obj__=(void*)0;
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result127__;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
void* __result_obj__=(void*)0;
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result130__;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result134__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
void* __result_obj__=(void*)0;
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result133__;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result137__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
void* __result_obj__=(void*)0;
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result136__;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result140__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
void* __result_obj__=(void*)0;
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result139__;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result178__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj28;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj29;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj30;
struct list$1char$ph* __result180__;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj28=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj29=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj30=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value261=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value259=int_to_string(info->sline))),((char*)(__right_value260=string_to_string(info->sname)))))));
            (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value262 = (void*)0;
char* sname_345;
int sline_346;
int sline_real_347;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj31;
_Bool result_348;
void* __right_value265 = (void*)0;
char* __dec_obj32;
_Bool __result237__;
    sname_345=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_346=info->sline;
    sline_real_347=info->sline_real;
    __dec_obj31=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value263=node->sname(node->_protocol_obj)))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_348=node->compile(node->_protocol_obj,info);
    __dec_obj32=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_345));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_346;
    info->sline_real=sline_real_347;
    __result237__ = result_348;
    (sname_345 = come_decrement_ref_count2(sname_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result237__;
}

struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__=(void*)0;
char* msg2_349;
va_list args_350;
char* p_351;
char* last_lf_352;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_353;
int col_354;
int col_355;
void* __right_value268 = (void*)0;
int __null_value1;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct tuple2$2int$char$ph* __result239__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct tuple2$2int$char$ph* __result241__;
msg2_349 = (void*)0;
memset(&args_350, 0, sizeof(va_list));
memset(&__null_value1, 0, sizeof(int));
    if(    !info->no_output_err) {
        __builtin_va_start(args_350,msg);
        vasprintf(&msg2_349,msg,args_350);
        __builtin_va_end(args_350);
        p_351=info->p;
        last_lf_352=((void*)0);
        while(p_351>=info->head) {
            if(            *p_351==10) {
                last_lf_352=p_351;
                break;
            }
            p_351--;
        }
        buf_353=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 78, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        last_lf_352) {
            col_354=info->p-last_lf_352;
            buffer_append_format(buf_353,"%s %d(real %d)(block %d) %d: %s",info->sname,info->sline,info->sline_real,info->sline_block,col_354,msg2_349);
        }
        else {
            col_355=info->p-info->head;
            buffer_append_format(buf_353,"%s %d(real %d)(block %d) %d: %s",info->sname,info->sline,info->sline_real,info->sline_block,col_355,msg2_349);
        }
        info->err_num++;
        free(msg2_349);
        printf(((char*)(__right_value268=buffer_to_string(buf_353))));
        (__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __result239__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2int$char$ph*)(__right_value271=tuple2$2int$char$ph_initialize((struct tuple2$2int$char$ph*)come_increment_ref_count((struct tuple2$2int$char$ph*)come_calloc(1, sizeof(struct tuple2$2int$char$ph)*(1), "02transpile.c", 96, "struct tuple2$2int$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("compile error")))));
        come_call_finalizer3((&args_350),va_list_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_353,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value271,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result239__;
        come_call_finalizer3((&args_350),va_list_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_353,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result241__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2int$void$p*)(__right_value273=tuple2$2int$void$p_initialize((struct tuple2$2int$void$p*)come_increment_ref_count((struct tuple2$2int$void$p*)come_calloc(1, sizeof(struct tuple2$2int$void$p)*(1), "02transpile.c", 99, "struct tuple2$2int$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),0,((void*)0))));
    come_call_finalizer3(__right_value273,tuple2$2int$void$p$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct tuple2$2int$char$ph* tuple2$2int$char$ph_initialize(struct tuple2$2int$char$ph* self, int v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj33;
struct tuple2$2int$char$ph* __result238__;
    self->v1=v1;
    __dec_obj33=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2int$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
char* __dec_obj34;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj34=self->v2;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2int$void$p* tuple2$2int$void$p_initialize(struct tuple2$2int$void$p* self, int v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2int$void$p* __result240__;
    self->v1=v1;
    self->v2=v2;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2int$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void tuple2$2int$void$p$p_finalize(struct tuple2$2int$void$p* self){
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value274 = (void*)0;
char* output_file_name_356;
void* __right_value275 = (void*)0;
_Bool __result242__;
    output_file_name_356=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    charp_write(((char*)(__right_value275=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_356,(_Bool)0);
    (__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result242__ = (_Bool)1;
    (output_file_name_356 = come_decrement_ref_count2(output_file_name_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result242__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_357;
void* __right_value276 = (void*)0;
    input_file_name_357=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_357!=((void*)0)&&string_operator_not_equals(input_file_name_357,"")) {
        system(((char*)(__right_value276=xsprintf("%s %s.*",RM,input_file_name_357))));
        (__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_357 = come_decrement_ref_count2(input_file_name_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_358;
void* __right_value277 = (void*)0;
    input_file_name_358=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_358!=((void*)0)&&string_operator_not_equals(input_file_name_358,"")) {
        system(((char*)(__right_value277=xsprintf("%s %s.i* %s.c*",RM,input_file_name_358,input_file_name_358))));
        (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_358 = come_decrement_ref_count2(input_file_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_359;
void* __right_value278 = (void*)0;
    input_file_name_359=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_359!=((void*)0)&&string_operator_not_equals(input_file_name_359,"")) {
        system(((char*)(__right_value278=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_359,input_file_name_359))));
        (__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_359 = come_decrement_ref_count2(input_file_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_360;
char* output_file_name_361;
void* __right_value279 = (void*)0;
char* __dec_obj35;
void* __right_value280 = (void*)0;
char* __dec_obj36;
_Bool exist_common_h_362;
struct _IO_FILE* Value_363;
int is_mac_364;
int is_android_365;
int is_debian_366;
int is_m5stack_367;
int is_pico_368;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* cmd3_369;
int rc_370;
void* __right_value283 = (void*)0;
char* command2_371;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* cmd2_372;
int rc_373;
void* __right_value286 = (void*)0;
char* command2_374;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* cmd2_375;
int rc_376;
void* __right_value289 = (void*)0;
char* command2_377;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* cmd2_378;
int rc_379;
void* __right_value292 = (void*)0;
char* command2_380;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* cmd3_381;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj37;
int rc_382;
void* __right_value297 = (void*)0;
char* command2_383;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* cmd4_384;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* __dec_obj38;
void* __right_value302 = (void*)0;
char* command_385;
int rc_386;
void* __right_value303 = (void*)0;
char* __dec_obj39;
void* __right_value304 = (void*)0;
char* command2_387;
_Bool __result243__;
output_file_name_361 = (void*)0;
    input_file_name_360=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj35=output_file_name_361;
        output_file_name_361=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj36=output_file_name_361;
        output_file_name_361=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_362=(_Bool)0;
    {
        Value_363=fopen("common.h","r");
        if(        Value_363) {
            exist_common_h_362=(_Bool)1;
            fclose(Value_363);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_362=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_362=(_Bool)0;
        }
    }
    is_mac_364=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    is_android_365=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    is_debian_366=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
    is_m5stack_367=info->m5stack_cpp;
    is_pico_368=info->pico_cpp;
    if(    is_android_365==0) {
        cmd3_369=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value281=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
        (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_369);
        }
        rc_370=system(cmd3_369);
        command2_371=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
        if(        info->verbose) {
            puts(command2_371);
        }
        (void)system(command2_371);
        if(        rc_370!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        (cmd3_369 = come_decrement_ref_count2(cmd3_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_371 = come_decrement_ref_count2(command2_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_m5stack_367) {
        cmd2_372=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value284=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
        (__right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_372);
        }
        rc_373=system(cmd2_372);
        if(        rc_373!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_372);
            exit(5);
        }
        command2_374=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
        if(        info->verbose) {
            puts(command2_374);
        }
        (void)system(command2_374);
        (cmd2_372 = come_decrement_ref_count2(cmd2_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_374 = come_decrement_ref_count2(command2_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_pico_368) {
        cmd2_375=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value287=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
        (__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_375);
        }
        rc_376=system(cmd2_375);
        if(        rc_376!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_375);
            exit(5);
        }
        command2_377=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
        if(        info->verbose) {
            puts(command2_377);
        }
        (void)system(command2_377);
        (cmd2_375 = come_decrement_ref_count2(cmd2_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_377 = come_decrement_ref_count2(command2_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_mac_364==0) {
        cmd2_378=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value290=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
        (__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_378);
        }
        rc_379=system(cmd2_378);
        if(        rc_379!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_378);
            exit(5);
        }
        command2_380=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
        if(        info->verbose) {
            puts(command2_380);
        }
        (void)system(command2_380);
        (cmd2_378 = come_decrement_ref_count2(cmd2_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_380 = come_decrement_ref_count2(command2_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        cmd3_381=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value293=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
        (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        is_debian_366==0) {
            __dec_obj37=cmd3_381;
            cmd3_381=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value295=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->verbose) {
            puts(cmd3_381);
        }
        rc_382=system(cmd3_381);
        command2_383=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
        if(        info->verbose) {
            puts(command2_383);
        }
        (void)system(command2_383);
        if(        rc_382!=0) {
            cmd4_384=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value298=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
            (__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            is_debian_366==0) {
                __dec_obj38=cmd4_384;
                cmd4_384=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_362)?(((char*)(__right_value300=__builtin_string(" -include common.h ")))):("")),input_file_name_360,output_file_name_361,output_file_name_361));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            command_385=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_361,input_file_name_360,info->clang_option,input_file_name_360));
            if(            info->verbose) {
                puts(cmd4_384);
            }
            rc_386=system(cmd4_384);
            if(            rc_386!=0) {
                __dec_obj39=command_385;
                command_385=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_361,input_file_name_360,info->clang_option,input_file_name_360));
                __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                info->verbose) {
                    puts(cmd4_384);
                }
                rc_386=system(cmd4_384);
                if(                rc_386!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_384);
                    exit(5);
                }
            }
            command2_387=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_361));
            if(            info->verbose) {
                puts(command2_387);
            }
            (void)system(command2_387);
            (cmd4_384 = come_decrement_ref_count2(cmd4_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command_385 = come_decrement_ref_count2(command_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_387 = come_decrement_ref_count2(command2_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_381 = come_decrement_ref_count2(cmd3_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_383 = come_decrement_ref_count2(command2_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result243__ = (_Bool)1;
    (input_file_name_360 = come_decrement_ref_count2(input_file_name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_361 = come_decrement_ref_count2(output_file_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result243__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value305 = (void*)0;
char* input_file_name_388;
char* output_file_name_389;
void* __right_value306 = (void*)0;
char* __dec_obj40;
void* __right_value307 = (void*)0;
char* __dec_obj41;
void* __right_value308 = (void*)0;
char* command_390;
int rc_391;
void* __right_value309 = (void*)0;
char* __dec_obj42;
int rc_392;
void* __right_value310 = (void*)0;
char* command2_393;
void* __right_value314 = (void*)0;
_Bool __result246__;
output_file_name_389 = (void*)0;
    input_file_name_388=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj40=output_file_name_389;
        output_file_name_389=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj41=output_file_name_389;
        output_file_name_389=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_390=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_389,input_file_name_388,info->clang_option,input_file_name_388));
    if(    info->verbose) {
        puts(command_390);
    }
    rc_391=system(command_390);
    if(    rc_391!=0) {
        __dec_obj42=command_390;
        command_390=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_389,input_file_name_388,info->clang_option,input_file_name_388));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->verbose) {
            puts(command_390);
        }
        rc_392=system(command_390);
        if(        rc_392!=0) {
            printf("%s %d: %s is faild\n",info->sname,info->sline,CC);
            command2_393=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_388));
            if(            info->verbose) {
                puts(command2_393);
            }
            (void)system(command2_393);
            exit(2);
            (command2_393 = come_decrement_ref_count2(command2_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    !output_object_file) {
        list$1char$ph$p_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_389)));
    }
    __result246__ = (_Bool)1;
    (input_file_name_388 = come_decrement_ref_count2(input_file_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_389 = come_decrement_ref_count2(output_file_name_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (command_390 = come_decrement_ref_count2(command_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result246__;
}

static struct list$1char$ph* list$1char$ph$p_insert(struct list$1char$ph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_394;
int i_395;
char* default_value_396;
struct list$1char$ph* __result244__;
void* __right_value311 = (void*)0;
struct list_item$1char$ph* litem_397;
char* __dec_obj43;
void* __right_value312 = (void*)0;
struct list_item$1char$ph* litem_398;
char* __dec_obj44;
struct list_item$1char$ph* it_399;
int i_400;
void* __right_value313 = (void*)0;
struct list_item$1char$ph* litem_401;
char* __dec_obj45;
struct list$1char$ph* __result245__;
default_value_396 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_394=self->len;
        for(        i_395=0;        i_395<position-len_394;        i_395++        ){
            memset(&default_value_396,0,sizeof(char*));
            list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(default_value_396));
            (default_value_396 = come_decrement_ref_count2(default_value_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(item));
        __result244__ = gComeFunResultObject = __result_obj__ = self;
        (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    if(    position==0) {
        litem_397=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value311=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1617, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=((void*)0);
        litem_397->next=self->head;
        __dec_obj43=litem_397->item;
        litem_397->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_397;
        self->head=litem_397;
        self->len++;
    }
    else if(    self->len==1) {
        litem_398=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value312=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1629, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->head;
        litem_398->next=self->tail;
        __dec_obj44=litem_398->item;
        litem_398->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_398;
        self->head->next=litem_398;
        self->len++;
    }
    else {
        it_399=self->head;
        i_400=0;
        while(it_399!=((void*)0)) {
            if(            position==i_400) {
                litem_401=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value313=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1645, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_401->prev=it_399->prev;
                litem_401->next=it_399;
                __dec_obj45=litem_401->item;
                litem_401->item=(char*)come_increment_ref_count(item);
                __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_399->prev->next=litem_401;
                it_399->prev=litem_401;
                self->len++;
            }
            it_399=it_399->next;
            i_400++;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name_402;
void* __right_value315 = (void*)0;
char* __dec_obj46;
void* __right_value316 = (void*)0;
char* __dec_obj47;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct buffer* command_403;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1char$ph* o2_saved_404;
char* it_407;
int is_mac_410;
void* __right_value321 = (void*)0;
char* cmd_411;
int rc_412;
void* __right_value322 = (void*)0;
char* cmd_413;
int rc_414;
void* __right_value323 = (void*)0;
char* cmd_415;
int rc_416;
int is_apline_417;
int is_debian_418;
int is_android_419;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
int Value_420;
_Bool _if_conditional1;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* str_421;
int Value_422;
_Bool __result253__;
_Bool __result254__;
    output_file_name_402=((void*)0);
    if(    info->output_file_name) {
        __dec_obj46=output_file_name_402;
        output_file_name_402=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj47=output_file_name_402;
        output_file_name_402=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_403=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 347, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(command_403,"%s -o %s ",CC,output_file_name_402);
    buffer_append_str(command_403,((char*)(__right_value320=charp_operator_add(" ",((char*)(__right_value319=string_operator_add(info->linker_option," ")))))));
    (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_404=(object_files),it_407=list$1char$ph$p_begin((o2_saved_404));    !list$1char$ph$p_end((o2_saved_404));    it_407=list$1char$ph$p_next((o2_saved_404))    ){
        buffer_append_format(command_403,"%s ",it_407);
    }
    is_mac_410=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_410==0) {
        buffer_append_str(command_403," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_411=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_412=system(cmd_411);
    if(    rc_412==0) {
        buffer_append_str(command_403," -L. -L/usr/local/lib ");
    }
    (cmd_411 = come_decrement_ref_count2(cmd_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_413=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_414=system(cmd_413);
    if(    rc_414==0) {
        buffer_append_format(command_403," -L%s/lib ",getenv("HOME"));
    }
    (cmd_413 = come_decrement_ref_count2(cmd_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_415=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_416=system(cmd_415);
    if(    rc_416==0) {
        buffer_append_format(command_403," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_403," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_403," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_403," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_403," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_417=system("which apk 1> /dev/null 2>/dev/null");
        is_debian_418=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        is_android_419=system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        if(        is_android_419==0) {
            buffer_append_str(command_403," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_417==0||is_debian_418==0) {
            buffer_append_str(command_403," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_410==0) {
            buffer_append_format(command_403," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_403," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(    info->verbose) {
        puts(((char*)(__right_value324=buffer_to_string(command_403))));
        (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_420=system(((char*)(__right_value325=buffer_to_string(command_403))));
    if(    (_if_conditional1=(Value_420)),    (__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional1) {
        str_421=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value326=xsprintf("gcc"))),((char*)(__right_value328=charp_substring(((char*)(__right_value327=buffer_to_string(command_403))),strlen(CC),-1)))));
        (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        Value_422=system(str_421);
        if(        Value_422) {
            printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
            __result253__ = (_Bool)0;
            (str_421 = come_decrement_ref_count2(str_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (output_file_name_402 = come_decrement_ref_count2(output_file_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(command_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (cmd_415 = come_decrement_ref_count2(cmd_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result253__;
        }
        else {
        }
        (str_421 = come_decrement_ref_count2(str_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
    }
    __result254__ = (_Bool)1;
    (output_file_name_402 = come_decrement_ref_count2(output_file_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(command_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (cmd_415 = come_decrement_ref_count2(cmd_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result254__;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_405;
char* __result247__;
char* __result248__;
char* result_406;
char* __result249__;
result_405 = (void*)0;
result_406 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_405,0,sizeof(char*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_405;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->head;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_406,0,sizeof(char*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_408;
char* __result250__;
char* __result251__;
char* result_409;
char* __result252__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_408,0,sizeof(char*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_409,0,sizeof(char*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool new_project(int argc, char** argv){
void* __right_value330 = (void*)0;
char* project_name_423;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* project_name_debug_424;
void* __right_value334 = (void*)0;
char* cc_425;
void* __right_value335 = (void*)0;
char* install_426;
void* __right_value336 = (void*)0;
char* libs_427;
void* __right_value337 = (void*)0;
char* os_428;
void* __right_value338 = (void*)0;
char* prefix_429;
void* __right_value339 = (void*)0;
char* cflags_430;
void* __right_value340 = (void*)0;
char* cflags_debug_431;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
int Value_432;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
_Bool __result255__;
    project_name_423=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_424=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value331=__builtin_string(argv[2]))),((char*)(__right_value332=__builtin_string("-debug")))));
    (__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cc_425=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_426=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_427=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_428=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_429=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_430=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_431=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_432=system(((char*)(__right_value342=xsprintf("mkdir \%s",((char*)(__right_value341=string_to_string(project_name_423)))))));
    if(    (_if_conditional2=(Value_432<0)),    (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 436, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value368=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value343=string_to_string(project_name_423))),((char*)(__right_value344=string_to_string(project_name_423))),((char*)(__right_value345=string_to_string(project_name_423))),((char*)(__right_value346=string_to_string(project_name_423))),((char*)(__right_value347=string_to_string(cc_425))),((char*)(__right_value348=string_to_string(install_426))),((char*)(__right_value349=string_to_string(cflags_430))),((char*)(__right_value350=string_to_string(cflags_debug_431))),((char*)(__right_value351=string_to_string(libs_427))),((char*)(__right_value352=string_to_string(os_428))),((char*)(__right_value353=string_to_string(prefix_429))),((char*)(__right_value354=string_to_string(project_name_423))),((char*)(__right_value355=string_to_string(project_name_debug_424))),((char*)(__right_value356=string_to_string(project_name_423))),((char*)(__right_value357=string_to_string(project_name_423))),((char*)(__right_value358=string_to_string(project_name_423))),((char*)(__right_value359=string_to_string(project_name_423))),((char*)(__right_value360=string_to_string(project_name_debug_424))),((char*)(__right_value361=string_to_string(project_name_423))),((char*)(__right_value362=string_to_string(project_name_423))),((char*)(__right_value363=string_to_string(project_name_423))),((char*)(__right_value364=string_to_string(project_name_423))),((char*)(__right_value365=string_to_string(project_name_423))),((char*)(__right_value366=string_to_string(project_name_debug_424))),((char*)(__right_value367=string_to_string(project_name_debug_424)))))),((char*)(__right_value370=xsprintf("\%s/Makefile",((char*)(__right_value369=string_to_string(project_name_423)))))),(_Bool)0);
    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result255__ = (_Bool)1;
    (project_name_423 = come_decrement_ref_count2(project_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (project_name_debug_424 = come_decrement_ref_count2(project_name_debug_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cc_425 = come_decrement_ref_count2(cc_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (install_426 = come_decrement_ref_count2(install_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (libs_427 = come_decrement_ref_count2(libs_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (os_428 = come_decrement_ref_count2(os_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (prefix_429 = come_decrement_ref_count2(prefix_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_430 = come_decrement_ref_count2(cflags_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_debug_431 = come_decrement_ref_count2(cflags_debug_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result255__;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_433;
int Value_434;
_Bool __exception_result_var_b2;
int Value_435;
_Bool __exception_result_var_b3;
    Value_433=fopen("common.h","r");
    if(    Value_433) {
        fclose(Value_433);
    }
    else {
        Value_434=system("make header");
        if(        Value_434<0) {
            (come_push_stackframe("02transpile.c", 542, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_435=system("make run");
    if(    Value_435<0) {
        (come_push_stackframe("02transpile.c", 547, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_436;
_Bool __exception_result_var_b4;
    Value_436=system("make header");
    if(    Value_436<0) {
        (come_push_stackframe("02transpile.c", 556, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_437;
int Value_438;
_Bool __exception_result_var_b5;
int Value_439;
_Bool __exception_result_var_b6;
    Value_437=fopen("common.h","r");
    if(    Value_437) {
        fclose(Value_437);
    }
    else {
        Value_438=system("make header");
        if(        Value_438<0) {
            (come_push_stackframe("02transpile.c", 569, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_439=system("make compile");
    if(    Value_439<0) {
        (come_push_stackframe("02transpile.c", 573, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_440;
int Value_441;
_Bool __exception_result_var_b7;
int Value_442;
_Bool __exception_result_var_b8;
    Value_440=fopen("common.h","r");
    if(    Value_440) {
        fclose(Value_440);
    }
    else {
        Value_441=system("make header");
        if(        Value_441<0) {
            (come_push_stackframe("02transpile.c", 586, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_442=system("make debug");
    if(    Value_442<0) {
        (come_push_stackframe("02transpile.c", 590, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_443;
_Bool __exception_result_var_b9;
    Value_443=system("make clean");
    if(    Value_443<0) {
        (come_push_stackframe("02transpile.c", 599, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
int Value_444;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_444=system(((char*)(__right_value372=xsprintf("make install DESTDIR=\%s",((char*)(__right_value371=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_444<0)),    (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 608, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
int i_503;
void* __right_value432 = (void*)0;
char* generics_type_504;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
int i_505;
void* __right_value435 = (void*)0;
char* generics_type_506;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
int is_mac_507;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* type_name_508;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* type_509;
void* __right_value475 = (void*)0;
char* __dec_obj97;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sClass* klass_533;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 616, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 617, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 618, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 619, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 620, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 622, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 623, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 624, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"_Float16",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 626, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 627, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 628, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_503=0;    i_503<12;    i_503++    ){
        generics_type_504=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_503));
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_504),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 631, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),generics_type_504,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_503,-1,(_Bool)0,info)));
        (generics_type_504 = come_decrement_ref_count2(generics_type_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    i_505=0;    i_505<7;    i_505++    ){
        generics_type_506=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_505));
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_506),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 635, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),generics_type_506,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_505,(_Bool)0,info)));
        (generics_type_506 = come_decrement_ref_count2(generics_type_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    is_mac_507=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_507==0) {
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 640, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_508=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_509=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 644, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"__builtin_va_list",(_Bool)0,info));
        __dec_obj97=type_509->mOriginalTypeName;
        type_509->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_508)),(struct sType*)come_increment_ref_count(type_509));
        (type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_533=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 650, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1void$ph$p_push_back(klass_533->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 652, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 652, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1void$ph$p_push_back(klass_533->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 653, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 653, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1void$ph$p_push_back(klass_533->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 654, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 654, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1void$ph$p_push_back(klass_533->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 655, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 655, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))));
        list$1void$ph$p_push_back(klass_533->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 656, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 656, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))));
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_533));
        come_call_finalizer3(klass_533,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_462;
unsigned int it_463;
_Bool same_key_exist_480;
char* it2_483;
struct map$2void$phvoid$ph* __result277__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_462=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_463=hash_462;
    while((_Bool)1) {
        if(        self->item_existance[it_463]) {
            if(            come_call_equals((void*)0, self->keys[it_463], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_463]);
                    come_call_finalizer3(self->keys[it_463],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_463]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_463]);
                    self->keys[it_463]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_463],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_463]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_463]=item;
                }
                break;
            }
            it_463++;
            if(            it_463>=self->size) {
                it_463=0;
            }
            else if(            it_463==hash_462) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_463]=(_Bool)1;
            if(            1) {
                self->keys[it_463]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_463]=key;
            }
            if(            1) {
                self->items[it_463]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_463]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_480=(_Bool)0;
    for(    it2_483=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_483=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_483, key)) {
            same_key_exist_480=(_Bool)1;
        }
    }
    if(    !same_key_exist_480) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_445;
void* __right_value373 = (void*)0;
void** keys_446;
void* __right_value374 = (void*)0;
void** items_447;
void* __right_value375 = (void*)0;
_Bool* item_existance_448;
int len_449;
void* it_452;
void* default_value_455;
void* __right_value376 = (void*)0;
void* it2_456;
unsigned int hash_459;
int n_460;
void* default_value_461;
void* __right_value377 = (void*)0;
default_value_455 = (void*)0;
default_value_461 = (void*)0;
    size_445=self->size*10;
    keys_446=(void**)come_increment_ref_count(((void**)(__right_value373=(void**)come_calloc(1, sizeof(void*)*(1*(size_445)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_447=(void**)come_increment_ref_count(((void**)(__right_value374=(void**)come_calloc(1, sizeof(void*)*(1*(size_445)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_448=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value375=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_445)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_449=0;
    for(    it_452=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_452=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_455,0,sizeof(void*));
        it2_456=((void*)(__right_value376=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_455))));
        come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_459=come_call_get_hash_key((void*)0, ((void*)it_452))%size_445;
        n_460=hash_459;
        while((_Bool)1) {
            if(            item_existance_448[n_460]) {
                n_460++;
                if(                n_460>=size_445) {
                    n_460=0;
                }
                else if(                n_460==hash_459) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_448[n_460]=(_Bool)1;
                keys_446[n_460]=it_452;
                items_447[n_460]=((void*)(__right_value377=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_461))));
                come_call_finalizer3(__right_value377,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_449++;
                come_call_finalizer3(default_value_461,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_461,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_455,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_446;
    self->items=items_447;
    self->item_existance=item_existance_448;
    self->size=size_445;
    self->len=len_449;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_450;
void* __result256__;
void* __result257__;
void* result_451;
void* __result258__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_450,0,sizeof(void*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_451,0,sizeof(void*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_453;
void* __result259__;
void* __result260__;
void* result_454;
void* __result261__;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_453,0,sizeof(void*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_453;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_454,0,sizeof(void*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_454;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_457;
unsigned int it_458;
void* __result262__;
void* __result263__;
void* __result264__;
void* __result265__;
    hash_457=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            come_call_equals((void*)0, self->keys[it_458], key)) {
                __result262__ = gComeFunResultObject = __result_obj__ = self->items[it_458];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                __result263__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
        }
        else {
            __result264__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_464;
struct list_item$1void$p* it_465;
struct list$1void$p* __result269__;
    it2_464=0;
    it_465=self->head;
    while(it_465!=((void*)0)) {
        if(        come_call_equals((void*)0, it_465->item, item)) {
            list$1void$p$p_delete(self,it2_464,it2_464+1);
            break;
        }
        it2_464++;
        it_465=it_465->next;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_466;
struct list$1void$p* __result266__;
struct list_item$1void$p* it_469;
int i_470;
struct list_item$1void$p* prev_it_471;
struct list_item$1void$p* it_472;
int i_473;
struct list_item$1void$p* prev_it_474;
struct list_item$1void$p* it_475;
struct list_item$1void$p* head_prev_it_476;
struct list_item$1void$p* tail_it_477;
int i_478;
struct list_item$1void$p* prev_it_479;
struct list$1void$p* __result268__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_466=tail;
        tail=head;
        head=tmp_466;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result266__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_469=self->head;
        i_470=0;
        while(it_469!=((void*)0)) {
            if(            i_470<tail) {
                prev_it_471=it_469;
                it_469=it_469->next;
                i_470++;
                come_call_finalizer3(prev_it_471,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_470==tail) {
                self->head=it_469;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_469=it_469->next;
                i_470++;
            }
        }
    }
    else if(    tail==self->len) {
        it_472=self->head;
        i_473=0;
        while(it_472!=((void*)0)) {
            if(            i_473==head) {
                self->tail=it_472->prev;
                self->tail->next=((void*)0);
            }
            if(            i_473>=head) {
                prev_it_474=it_472;
                it_472=it_472->next;
                i_473++;
                come_call_finalizer3(prev_it_474,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_472=it_472->next;
                i_473++;
            }
        }
    }
    else {
        it_475=self->head;
        head_prev_it_476=((void*)0);
        tail_it_477=((void*)0);
        i_478=0;
        while(it_475!=((void*)0)) {
            if(            i_478==head) {
                head_prev_it_476=it_475->prev;
            }
            if(            i_478==tail) {
                tail_it_477=it_475;
            }
            if(            i_478>=head&&i_478<tail) {
                prev_it_479=it_475;
                it_475=it_475->next;
                i_478++;
                come_call_finalizer3(prev_it_479,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_475=it_475->next;
                i_478++;
            }
        }
        if(        head_prev_it_476!=((void*)0)) {
            head_prev_it_476->next=tail_it_477;
        }
        if(        tail_it_477!=((void*)0)) {
            tail_it_477->prev=head_prev_it_476;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_467;
struct list_item$1void$p* prev_it_468;
struct list$1void$p* __result267__;
    it_467=self->head;
    while(it_467!=((void*)0)) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer3(prev_it_468,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_481;
void* __result270__;
void* __result271__;
void* result_482;
void* __result272__;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_481,0,sizeof(void*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_481;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->head;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_482,0,sizeof(void*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_482;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_484;
void* __result273__;
void* __result274__;
void* result_485;
void* __result275__;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_484,0,sizeof(void*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_484;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_485,0,sizeof(void*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_485;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct list_item$1void$p* litem_486;
void* __right_value379 = (void*)0;
struct list_item$1void$p* litem_487;
void* __right_value380 = (void*)0;
struct list_item$1void$p* litem_488;
struct list$1void$p* __result276__;
    if(    self->len==0) {
        litem_486=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value378=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value379=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value380=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        litem_488->item=item;
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj48;
struct list$1void$ph* __dec_obj49;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj48=self->mName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj49=self->mFields;
            come_call_finalizer3(__dec_obj49,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj51=self->mParentClassName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_489;
struct list_item$1void$ph* prev_it_490;
    it_489=self->head;
    while(it_489!=((void*)0)) {
        prev_it_490=it_489;
        it_489=it_489->next;
        come_call_finalizer3(prev_it_490,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
void* __dec_obj50;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            come_call_finalizer3(__dec_obj50,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_491;
struct list_item$1void$ph* prev_it_492;
    it_491=self->head;
    while(it_491!=((void*)0)) {
        prev_it_492=it_491;
        it_491=it_491->next;
        come_call_finalizer3(prev_it_492,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result278__;
void* __right_value382 = (void*)0;
struct sClass* result_496;
void* __right_value383 = (void*)0;
char* __dec_obj53;
void* __right_value391 = (void*)0;
struct list$1void$ph* __dec_obj57;
void* __right_value392 = (void*)0;
char* __dec_obj58;
void* __right_value393 = (void*)0;
char* __dec_obj59;
struct sClass* __result283__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_496=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_496->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_496->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_496->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_496->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_496->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_496->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_496->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_496->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj53=result_496->mName;
        result_496->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_496->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_496->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj57=result_496->mFields;
        result_496->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj57,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj58=result_496->mParentClassName;
        result_496->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj59=result_496->mAttribute;
        result_496->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_496->mDynamic=self->mDynamic;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_496;
    come_call_finalizer3(result_496,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_493;
    result_493=0;
    result_493+=int_get_hash_key(((int)self->mStruct));
    result_493+=int_get_hash_key(((int)self->mFloat));
    result_493+=int_get_hash_key(((int)self->mUnion));
    result_493+=int_get_hash_key(((int)self->mGenerics));
    result_493+=int_get_hash_key(((int)self->mMethodGenerics));
    result_493+=int_get_hash_key(((int)self->mEnum));
    result_493+=int_get_hash_key(((int)self->mProtocol));
    result_493+=int_get_hash_key(((int)self->mNumber));
    result_493+=int_get_hash_key(((int)self->mName));
    result_493+=int_get_hash_key(((int)self->mGenericsNum));
    result_493+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_493+=int_get_hash_key(((int)self->mFields));
    result_493+=int_get_hash_key(((int)self->mParentClassName));
    result_493+=int_get_hash_key(((int)self->mAttribute));
    result_493+=int_get_hash_key(((int)self->mDynamic));
    return result_493;
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
    if(    !list$1void$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right){
struct list_item$1void$ph* it_494;
struct list_item$1void$ph* it2_495;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_494=left->head;
    it2_495=right->head;
    while(it_494!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_494->item, it2_495->item)) {
            return (_Bool)0;
        }
        it_494=it_494->next;
        it2_495=it2_495->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result279__;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1void$ph* result_498;
struct list_item$1void$ph* it_499;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1void$ph* __result282__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_498=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_499=self->head;
    while(it_499!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_498,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_499->item)));
        }
        else {
            list$1void$ph$p_add(result_498,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_499->item)));
        }
        it_499=it_499->next;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_498;
    come_call_finalizer3(result_498,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_497;
    result_497=0;
    result_497+=int_get_hash_key(((int)self->head));
    result_497+=int_get_hash_key(((int)self->tail));
    result_497+=int_get_hash_key(((int)self->len));
    result_497+=int_get_hash_key(((int)self->it));
    return result_497;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result280__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
struct list_item$1void$ph* litem_500;
void* __dec_obj54;
void* __right_value387 = (void*)0;
struct list_item$1void$ph* litem_501;
void* __dec_obj55;
void* __right_value388 = (void*)0;
struct list_item$1void$ph* litem_502;
void* __dec_obj56;
struct list$1void$ph* __result281__;
    if(    self->len==0) {
        litem_500=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value386=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_500->prev=((void*)0);
        litem_500->next=((void*)0);
        __dec_obj54=litem_500->item;
        litem_500->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_500;
        self->head=litem_500;
    }
    else if(    self->len==1) {
        litem_501=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value387=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_501->prev=self->head;
        litem_501->next=((void*)0);
        __dec_obj55=litem_501->item;
        litem_501->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_501;
        self->head->next=litem_501;
    }
    else {
        litem_502=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value388=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_502->prev=self->tail;
        litem_502->next=((void*)0);
        __dec_obj56=litem_502->item;
        litem_502->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_502;
        self->tail=litem_502;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj60;
struct sType* __dec_obj61;
struct list$1void$ph* __dec_obj62;
struct sType* __dec_obj63;
struct sType* __dec_obj64;
struct sNode* __dec_obj65;
struct sNode* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
struct list$1sNode$ph* __dec_obj70;
char* __dec_obj72;
struct list$1void$ph* __dec_obj73;
struct list$1char$ph* __dec_obj74;
struct sType* __dec_obj75;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj60=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj61=self->mChannelType;
            come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj62=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj62,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj63=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj64=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj65=self->mSizeNum;
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj66=self->mAlignas;
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj67=self->mTupleName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj68=self->mAttribute;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj69=self->mAsmName;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj70=self->mArrayNum;
            come_call_finalizer3(__dec_obj70,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj72=self->mOriginalTypeName;
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            come_call_finalizer3(__dec_obj73,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            come_call_finalizer3(__dec_obj74,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj75=self->mResultType;
            come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_510;
struct list_item$1sNode$ph* prev_it_511;
    it_510=self->head;
    while(it_510!=((void*)0)) {
        prev_it_511=it_510;
        it_510=it_510->next;
        come_call_finalizer3(prev_it_511,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
struct sNode* __dec_obj71;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj71=self->item;
            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_512;
struct list_item$1sNode$ph* prev_it_513;
    it_512=self->head;
    while(it_512!=((void*)0)) {
        prev_it_513=it_512;
        it_512=it_512->next;
        come_call_finalizer3(prev_it_513,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_514;
struct list_item$1char$ph* prev_it_515;
    it_514=self->head;
    while(it_514!=((void*)0)) {
        prev_it_515=it_514;
        it_514=it_514->next;
        come_call_finalizer3(prev_it_515,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result284__;
void* __right_value442 = (void*)0;
struct sType* result_521;
void* __right_value443 = (void*)0;
struct sType* __dec_obj76;
void* __right_value444 = (void*)0;
struct sType* __dec_obj77;
void* __right_value445 = (void*)0;
struct list$1void$ph* __dec_obj78;
void* __right_value446 = (void*)0;
struct sType* __dec_obj79;
void* __right_value447 = (void*)0;
struct sType* __dec_obj80;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value450 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value451 = (void*)0;
char* __dec_obj83;
void* __right_value452 = (void*)0;
char* __dec_obj84;
void* __right_value453 = (void*)0;
char* __dec_obj85;
void* __right_value461 = (void*)0;
struct list$1sNode$ph* __dec_obj89;
void* __right_value462 = (void*)0;
char* __dec_obj90;
void* __right_value463 = (void*)0;
struct list$1void$ph* __dec_obj91;
void* __right_value471 = (void*)0;
struct list$1char$ph* __dec_obj95;
void* __right_value472 = (void*)0;
struct sType* __dec_obj96;
struct sType* __result294__;
    if(    self==(void*)0) {
        __result284__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_521=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_521->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj76=result_521->mOriginalLoadVarType;
        result_521->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj77=result_521->mChannelType;
        result_521->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_521->mGenericsTypes;
        result_521->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj79=result_521->mNoSolvedGenericsType;
        result_521->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj80=result_521->mAnyOriginalType;
        result_521->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj81=result_521->mSizeNum;
        result_521->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj82=result_521->mAlignas;
        result_521->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_521->mTupleName;
        result_521->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_521->mAttribute;
        result_521->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_521->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_521->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_521->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_521->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_521->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_521->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_521->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_521->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_521->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_521->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_521->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_521->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_521->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_521->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_521->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_521->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_521->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_521->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_521->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_521->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_521->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_521->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_521->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_521->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_521->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj85=result_521->mAsmName;
        result_521->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_521->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_521->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj89=result_521->mArrayNum;
        result_521->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj89,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_521->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_521->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_521->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_521->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj90=result_521->mOriginalTypeName;
        result_521->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_521->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_521->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_521->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj91=result_521->mParamTypes;
        result_521->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj91,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj95=result_521->mParamNames;
        result_521->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj95,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj96=result_521->mResultType;
        result_521->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->mVarArgs=self->mVarArgs;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_521;
    come_call_finalizer3(result_521,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_516;
    result_516=0;
    result_516+=int_get_hash_key(((int)self->mClass));
    result_516+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_516+=int_get_hash_key(((int)self->mChannelType));
    result_516+=int_get_hash_key(((int)self->mGenericsTypes));
    result_516+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_516+=int_get_hash_key(((int)self->mAnyClass));
    result_516+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_516+=int_get_hash_key(((int)self->mSizeNum));
    result_516+=int_get_hash_key(((int)self->mAlignas));
    result_516+=int_get_hash_key(((int)self->mTupleName));
    result_516+=int_get_hash_key(((int)self->mAttribute));
    result_516+=int_get_hash_key(((int)self->mAllocaValue));
    result_516+=int_get_hash_key(((int)self->mUnsigned));
    result_516+=int_get_hash_key(((int)self->mShort));
    result_516+=int_get_hash_key(((int)self->mLong));
    result_516+=int_get_hash_key(((int)self->mLongLong));
    result_516+=int_get_hash_key(((int)self->mConstant));
    result_516+=int_get_hash_key(((int)self->mAtomic));
    result_516+=int_get_hash_key(((int)self->mRegister));
    result_516+=int_get_hash_key(((int)self->mVolatile));
    result_516+=int_get_hash_key(((int)self->mStatic));
    result_516+=int_get_hash_key(((int)self->mUniq));
    result_516+=int_get_hash_key(((int)self->mRecord));
    result_516+=int_get_hash_key(((int)self->mExtern));
    result_516+=int_get_hash_key(((int)self->mRestrict));
    result_516+=int_get_hash_key(((int)self->mImmutable));
    result_516+=int_get_hash_key(((int)self->mHeap));
    result_516+=int_get_hash_key(((int)self->mChannel));
    result_516+=int_get_hash_key(((int)self->mNoHeap));
    result_516+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_516+=int_get_hash_key(((int)self->mException));
    result_516+=int_get_hash_key(((int)self->mGenerate));
    result_516+=int_get_hash_key(((int)self->mCreateVTable));
    result_516+=int_get_hash_key(((int)self->mDynamic));
    result_516+=int_get_hash_key(((int)self->mInline));
    result_516+=int_get_hash_key(((int)self->mNullValue));
    result_516+=int_get_hash_key(((int)self->mGuardValue));
    result_516+=int_get_hash_key(((int)self->mAsmName));
    result_516+=int_get_hash_key(((int)self->mTypedef));
    result_516+=int_get_hash_key(((int)self->mMultipleTypes));
    result_516+=int_get_hash_key(((int)self->mOriginIsArray));
    result_516+=int_get_hash_key(((int)self->mArrayNum));
    result_516+=int_get_hash_key(((int)self->mPointerNum));
    result_516+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_516+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_516+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_516+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_516+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_516+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_516+=int_get_hash_key(((int)self->mArrayPointerType));
    result_516+=int_get_hash_key(((int)self->mLambdaArray));
    result_516+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_516+=int_get_hash_key(((int)self->mParamTypes));
    result_516+=int_get_hash_key(((int)self->mParamNames));
    result_516+=int_get_hash_key(((int)self->mResultType));
    result_516+=int_get_hash_key(((int)self->mVarArgs));
    return result_516;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_517;
struct list_item$1sNode$ph* it2_518;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_517=left->head;
    it2_518=right->head;
    while(it_517!=((void*)0)) {
        if(        !sNode_equals(it_517->item,it2_518->item)) {
            return (_Bool)0;
        }
        it_517=it_517->next;
        it2_518=it2_518->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_519;
struct list_item$1char$ph* it2_520;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_519=left->head;
    it2_520=right->head;
    while(it_519!=((void*)0)) {
        if(        !string_equals(it_519->item,it2_520->item)) {
            return (_Bool)0;
        }
        it_519=it_519->next;
        it2_520=it2_520->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result285__;
void* __right_value448 = (void*)0;
struct sNode* result_522;
struct sNode* __result286__;
    if(    self==(void*)0) {
        __result285__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_522=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_522->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_522->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_522->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_522->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_522->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_522->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_522->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_522->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_522->kind=self->kind;
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_522;
    ((result_522) ? result_522 = come_decrement_ref_count2(result_522, ((struct sNode*)result_522)->finalize, ((struct sNode*)result_522)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result287__;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1sNode$ph* result_523;
struct list_item$1sNode$ph* it_524;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1sNode$ph* __result290__;
    if(    self==((void*)0)) {
        __result287__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_523=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_524=self->head;
    while(it_524!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_523,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_524->item)));
        }
        else {
            list$1sNode$ph$p_add(result_523,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_524->item)));
        }
        it_524=it_524->next;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_523;
    come_call_finalizer3(result_523,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result288__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
struct list_item$1sNode$ph* litem_525;
struct sNode* __dec_obj86;
void* __right_value457 = (void*)0;
struct list_item$1sNode$ph* litem_526;
struct sNode* __dec_obj87;
void* __right_value458 = (void*)0;
struct list_item$1sNode$ph* litem_527;
struct sNode* __dec_obj88;
struct list$1sNode$ph* __result289__;
    if(    self->len==0) {
        litem_525=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value456=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_525->prev=((void*)0);
        litem_525->next=((void*)0);
        __dec_obj86=litem_525->item;
        litem_525->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_525;
        self->head=litem_525;
    }
    else if(    self->len==1) {
        litem_526=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value457=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_526->prev=self->head;
        litem_526->next=((void*)0);
        __dec_obj87=litem_526->item;
        litem_526->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_526;
        self->head->next=litem_526;
    }
    else {
        litem_527=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value458=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_527->prev=self->tail;
        litem_527->next=((void*)0);
        __dec_obj88=litem_527->item;
        litem_527->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_527;
        self->tail=litem_527;
    }
    self->len++;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result291__;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1char$ph* result_528;
struct list_item$1char$ph* it_529;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1char$ph* __result293__;
    if(    self==((void*)0)) {
        __result291__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    result_528=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_529=self->head;
    while(it_529!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_528,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_529->item)));
        }
        else {
            list$1char$ph$p_add(result_528,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_529->item)));
        }
        it_529=it_529->next;
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_528;
    come_call_finalizer3(result_528,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
struct list_item$1char$ph* litem_530;
char* __dec_obj92;
void* __right_value467 = (void*)0;
struct list_item$1char$ph* litem_531;
char* __dec_obj93;
void* __right_value468 = (void*)0;
struct list_item$1char$ph* litem_532;
char* __dec_obj94;
struct list$1char$ph* __result292__;
    if(    self->len==0) {
        litem_530=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value466=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_530->prev=((void*)0);
        litem_530->next=((void*)0);
        __dec_obj92=litem_530->item;
        litem_530->item=(char*)come_increment_ref_count(item);
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_530;
        self->head=litem_530;
    }
    else if(    self->len==1) {
        litem_531=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value467=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_531->prev=self->head;
        litem_531->next=((void*)0);
        __dec_obj93=litem_531->item;
        litem_531->item=(char*)come_increment_ref_count(item);
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_531;
        self->head->next=litem_531;
    }
    else {
        litem_532=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value468=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_532->prev=self->tail;
        litem_532->next=((void*)0);
        __dec_obj94=litem_532->item;
        litem_532->item=(char*)come_increment_ref_count(item);
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_532;
        self->tail=litem_532;
    }
    self->len++;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value479 = (void*)0;
struct list_item$1void$ph* litem_534;
void* __dec_obj98;
void* __right_value480 = (void*)0;
struct list_item$1void$ph* litem_535;
void* __dec_obj99;
void* __right_value481 = (void*)0;
struct list_item$1void$ph* litem_536;
void* __dec_obj100;
struct list$1void$ph* __result295__;
    if(    self->len==0) {
        litem_534=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value479=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_534->prev=((void*)0);
        litem_534->next=((void*)0);
        __dec_obj98=litem_534->item;
        litem_534->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_534;
        self->head=litem_534;
    }
    else if(    self->len==1) {
        litem_535=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value480=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_535->prev=self->head;
        litem_535->next=((void*)0);
        __dec_obj99=litem_535->item;
        litem_535->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_535;
        self->head->next=litem_535;
    }
    else {
        litem_536=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value481=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_536->prev=self->tail;
        litem_536->next=((void*)0);
        __dec_obj100=litem_536->item;
        litem_536->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_536;
        self->tail=litem_536;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj101;
struct sType* __dec_obj102;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj101=self->v1;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj102=self->v2;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsType$ph* __result296__;
void* __right_value485 = (void*)0;
struct tuple2$2char$phsType$ph* result_537;
void* __right_value486 = (void*)0;
char* __dec_obj103;
void* __right_value487 = (void*)0;
struct sType* __dec_obj104;
struct tuple2$2char$phsType$ph* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_537=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj103=result_537->v1;
        result_537->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj104=result_537->v2;
        result_537->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_537;
    come_call_finalizer3(result_537,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_538;
    result_538=0;
    result_538+=int_get_hash_key(((int)self->v1));
    result_538+=int_get_hash_key(((int)self->v2));
    return result_538;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj105;
struct sType* __dec_obj106;
struct tuple2$2char$phsType$ph* __result298__;
    __dec_obj105=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj107;
struct sType* __dec_obj108;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj107=self->v1;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj108=self->v2;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void create_pico_version_header(){
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* Value_539;
_Bool _if_conditional4;
int version_major_540;
char* p_541;
int version_miner_542;
char* p_543;
int version_revision_544;
char* p_545;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* version_string_546;
int Value_547;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_539=(char*)come_increment_ref_count(charp_read((((char*)(__right_value511=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_539)),        (__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional4) {
            version_major_540=0;
            p_541=strstr(Value_539,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_541) {
                p_541+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_541==32||*p_541==9) {
                    p_541++;
                }
                while(xisdigit(*p_541)) {
                    version_major_540=version_major_540*10+(*p_541-48);
                    p_541++;
                }
            }
            version_miner_542=0;
            p_543=strstr(Value_539,"set(PICO_SDK_VERSION_MINOR");
            if(            p_543) {
                p_543+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_543==32||*p_543==9) {
                    p_543++;
                }
                while(xisdigit(*p_543)) {
                    version_miner_542=version_miner_542*10+*p_543-48;
                    p_543++;
                }
            }
            version_revision_544=0;
            p_545=strstr(Value_539,"set(PICO_SDK_VERSION_REVISION");
            if(            p_545) {
                p_545+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_545==32||*p_545==9) {
                    p_545++;
                }
                while(xisdigit(*p_545)) {
                    version_revision_544=version_revision_544*10+*p_545-48;
                    p_545++;
                }
            }
            version_string_546=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value513=int_to_string(version_major_540))),((char*)(__right_value514=int_to_string(version_miner_542))),((char*)(__right_value515=int_to_string(version_revision_544)))));
            (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            Value_547=system("mkdir -p pico");
            if(            !Value_547) {
                charp_write(((char*)(__right_value521=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value517=int_to_string(version_major_540))),((char*)(__right_value518=int_to_string(version_miner_542))),((char*)(__right_value519=int_to_string(version_revision_544))),((char*)(__right_value520=string_to_string(version_string_546)))))),"pico/version.h",(_Bool)0);
                (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            (version_string_546 = come_decrement_ref_count2(version_string_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        (Value_539 = come_decrement_ref_count2(Value_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main_v2(int argc, char** argv){
int start_num_548;
void* __right_value522 = (void*)0;
char* output_file_name_str_549;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct buffer* clang_option_550;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct buffer* linker_option_551;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct buffer* cpp_option_552;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1char$ph* files_553;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1char$ph* object_files_554;
_Bool output_object_file_555;
_Bool output_cpp_file_556;
_Bool output_source_file_flag_557;
_Bool output_object_file_flag_558;
char* output_file_name_559;
_Bool verbose_560;
_Bool come_debug_561;
_Bool come_malloc_562;
_Bool m5stack_cpp_563;
_Bool pico_cpp_564;
_Bool gcc_compiler_565;
int i_566;
void* __right_value533 = (void*)0;
char* ext_name_567;
void* __right_value534 = (void*)0;
char* __dec_obj109;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* env_568;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct buffer* __dec_obj110;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* env_569;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct buffer* __dec_obj111;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _elif_conditional1;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
_Bool _elif_conditional2;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _elif_conditional3;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
int Value_570;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct _IO_FILE* Value_571;
_Bool __exception_result_var_b12;
void* __right_value620 = (void*)0;
char* tmp_file_572;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
int Value_576;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_577;
void* __right_value628 = (void*)0;
char* __dec_obj112;
void* __right_value629 = (void*)0;
char* __dec_obj113;
void* __right_value630 = (void*)0;
char* __dec_obj114;
void* __right_value631 = (void*)0;
char* __dec_obj115;
void* __right_value632 = (void*)0;
char* __dec_obj116;
void* __right_value640 = (void*)0;
void* __right_value646 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj120;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj121;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj122;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj123;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj124;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj125;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj126;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj127;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sModule* __dec_obj141;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1void$ph* __dec_obj142;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1CVALUE$ph* __dec_obj148;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sVarTable* __dec_obj150;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sVarTable* lv_table_609;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1char$ph* __dec_obj151;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1char$ph* __dec_obj152;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj153;
void* __right_value697 = (void*)0;
char* __dec_obj154;
_Bool Value_611;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct buffer* __dec_obj155;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct buffer* __dec_obj156;
_Bool Value_612;
_Bool Value_613;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
_Bool Value_614;
_Bool Value_615;
_Bool Value_616;
_Bool Value_617;
_Bool Value_618;
_Bool Value_619;
_Bool Value_620;
_Bool Value_621;
int start_num_622;
char* output_file_name_str_623;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct buffer* clang_option_624;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct buffer* linker_option_625;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct buffer* cpp_option_626;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1char$ph* files_627;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1char$ph* object_files_628;
_Bool output_object_file_629;
_Bool output_cpp_file_630;
_Bool output_source_file_flag_631;
_Bool output_object_file_flag_632;
char* output_file_name_633;
_Bool verbose_634;
_Bool come_debug_635;
_Bool come_malloc_636;
_Bool m5stack_cpp_637;
_Bool pico_cpp_638;
_Bool gcc_compiler_639;
int i_640;
void* __right_value717 = (void*)0;
char* ext_name_641;
void* __right_value718 = (void*)0;
char* __dec_obj192;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
char* env_642;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct buffer* __dec_obj193;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
char* env_643;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
_Bool _elif_conditional4;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
_Bool _elif_conditional5;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
_Bool _elif_conditional6;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct list$1char$ph* o2_saved_644;
char* it_645;
struct sInfo info_646;
struct _IO_FILE* Value_647;
void* __right_value803 = (void*)0;
char* __dec_obj195;
void* __right_value804 = (void*)0;
char* __dec_obj196;
void* __right_value805 = (void*)0;
char* __dec_obj197;
void* __right_value806 = (void*)0;
char* __dec_obj198;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj199;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj200;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj201;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj202;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj203;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj204;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj205;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj206;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sModule* __dec_obj207;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1void$ph* __dec_obj208;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1CVALUE$ph* __dec_obj209;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sVarTable* __dec_obj210;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sVarTable* lv_table_648;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct list$1char$ph* __dec_obj211;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct list$1char$ph* __dec_obj212;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj213;
_Bool Value_649;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* __dec_obj214;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* __dec_obj215;
void* __right_value845 = (void*)0;
char* __dec_obj216;
char* __dec_obj217;
_Bool Value_650;
_Bool Value_651;
_Bool Value_652;
_Bool Value_653;
struct sInfo info_654;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
char* __dec_obj218;
void* __right_value848 = (void*)0;
char* __dec_obj219;
void* __right_value849 = (void*)0;
char* __dec_obj220;
void* __right_value850 = (void*)0;
char* __dec_obj221;
char* __dec_obj222;
_Bool Value_658;
memset(&info_577, 0, sizeof(struct sInfo));
memset(&info_646, 0, sizeof(struct sInfo));
memset(&info_654, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        start_num_548=2;
        output_file_name_str_549=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        linker_option_551=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        cpp_option_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(cpp_option_552,"-U__GNUC__");
        files_553=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 729, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_554=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 730, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_555=(_Bool)0;
        output_cpp_file_556=(_Bool)0;
        output_source_file_flag_557=(_Bool)0;
        output_object_file_flag_558=(_Bool)1;
        output_file_name_559=(char*)come_increment_ref_count(output_file_name_str_549);
        verbose_560=(_Bool)0;
        come_debug_561=(_Bool)0;
        come_malloc_562=(_Bool)0;
        m5stack_cpp_563=(_Bool)0;
        pico_cpp_564=(_Bool)0;
        gcc_compiler_565=(_Bool)0;
        for(        i_566=start_num_548;        i_566<argc;        i_566++        ){
            ext_name_567=(char*)come_increment_ref_count(xextname(argv[i_566]));
            if(            charp_operator_equals(argv[i_566],"-o")&&i_566+1<argc) {
                __dec_obj109=output_file_name_559;
                output_file_name_559=(char*)come_increment_ref_count(__builtin_string(argv[i_566+1]));
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_566++;
            }
            else if(            charp_operator_equals(argv[i_566],"-e")&&i_566+1<argc) {
                buffer_append_str(linker_option_551,((char*)(__right_value536=xsprintf("-e \%s",((char*)(__right_value535=charp_to_string(argv[i_566+1])))))));
                (__right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            charp_operator_equals(argv[i_566],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_552,((char*)(__right_value537=xsprintf(" -DENABLE_GC "))));
                (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-gcc")) {
                gcc_compiler_565=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_566],"-pico")) {
                output_source_file_flag_557=(_Bool)1;
                output_object_file_flag_558=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_568=getenv("PICO_SDK_PATH");
                __dec_obj110=cpp_option_552;
                cpp_option_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 772, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj110,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_552,((char*)(__right_value542=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value540=charp_to_string(env_568))),((char*)(__right_value541=charp_to_string(env_568)))))));
                (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_564=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-m5stack")) {
                m5stack_cpp_563=(_Bool)1;
                output_source_file_flag_557=(_Bool)1;
                output_object_file_flag_558=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_569=getenv("IDF_PATH");
                __dec_obj111=cpp_option_552;
                cpp_option_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 783, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj111,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_552,((char*)(__right_value566=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value545=charp_to_string(getenv("HOME")))),((char*)(__right_value546=charp_to_string(env_569))),((char*)(__right_value547=charp_to_string(env_569))),((char*)(__right_value548=charp_to_string(env_569))),((char*)(__right_value549=charp_to_string(env_569))),((char*)(__right_value550=charp_to_string(env_569))),((char*)(__right_value551=charp_to_string(env_569))),((char*)(__right_value552=charp_to_string(env_569))),((char*)(__right_value553=charp_to_string(env_569))),((char*)(__right_value554=charp_to_string(env_569))),((char*)(__right_value555=charp_to_string(env_569))),((char*)(__right_value556=charp_to_string(env_569))),((char*)(__right_value557=charp_to_string(env_569))),((char*)(__right_value558=charp_to_string(env_569))),((char*)(__right_value559=charp_to_string(env_569))),((char*)(__right_value560=charp_to_string(env_569))),((char*)(__right_value561=charp_to_string(env_569))),((char*)(__right_value562=charp_to_string(env_569))),((char*)(__right_value563=charp_to_string(env_569))),((char*)(__right_value564=charp_to_string(env_569))),((char*)(__right_value565=charp_to_string(env_569)))))),"/usr/local/");
                (__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-target")) {
                buffer_append_str(clang_option_550,((char*)(__right_value568=xsprintf("-target \%s",((char*)(__right_value567=charp_to_string(argv[i_566+1])))))));
                (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-T")) {
                buffer_append_str(clang_option_550,((char*)(__right_value570=xsprintf(" -T \%s ",((char*)(__right_value569=charp_to_string(argv[i_566+1])))))));
                (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            charp_operator_equals(argv[i_566],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-cg")) {
                come_debug_561=(_Bool)1;
                buffer_append_str(clang_option_550,"-g ");
            }
            else if(            charp_operator_equals(argv[i_566],"-C")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value572=xsprintf("\%s ",((char*)(__right_value571=charp_to_string(argv[i_566])))))));
                (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-M")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value574=xsprintf("\%s ",((char*)(__right_value573=charp_to_string(argv[i_566])))))));
                (__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-MM")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value576=xsprintf("\%s ",((char*)(__right_value575=charp_to_string(argv[i_566])))))));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-dM")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value578=xsprintf("\%s ",((char*)(__right_value577=charp_to_string(argv[i_566])))))));
                (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-dD")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value580=xsprintf("\%s ",((char*)(__right_value579=charp_to_string(argv[i_566])))))));
                (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-H")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value582=xsprintf("\%s ",((char*)(__right_value581=charp_to_string(argv[i_566])))))));
                (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-P")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value584=xsprintf("\%s ",((char*)(__right_value583=charp_to_string(argv[i_566])))))));
                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-nostdinc")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value586=xsprintf("\%s ",((char*)(__right_value585=charp_to_string(argv[i_566])))))));
                (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-CC")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value588=xsprintf("\%s ",((char*)(__right_value587=charp_to_string(argv[i_566])))))));
                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-target")) {
                buffer_append_str(clang_option_550,((char*)(__right_value590=xsprintf("-target \%s",((char*)(__right_value589=charp_to_string(argv[i_566+1])))))));
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-include")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value592=xsprintf("-iclude \%s",((char*)(__right_value591=charp_to_string(argv[i_566+1])))))));
                (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-isystem")) {
                buffer_append_str(cpp_option_552,((char*)(__right_value594=xsprintf("-isystem \%s",((char*)(__right_value593=charp_to_string(argv[i_566+1])))))));
                (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_550,((char*)(__right_value596=xsprintf("-isystem \%s",((char*)(__right_value595=charp_to_string(argv[i_566+1])))))));
                (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            i_566+1<argc&&charp_operator_equals(argv[i_566],"-T")) {
                buffer_append_str(clang_option_550,((char*)(__right_value598=xsprintf(" -T \%s ",((char*)(__right_value597=charp_to_string(argv[i_566+1])))))));
                (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_566++;
            }
            else if(            charp_operator_equals(argv[i_566],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value599=charp_operator_load_range_element(argv[i_566],0,2))),"-O"))),            (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_550,((char*)(__right_value601=xsprintf(" \%s ",((char*)(__right_value600=charp_to_string(argv[i_566])))))));
                (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_561=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value602=charp_operator_load_range_element(argv[i_566],0,2))),"-D"))),            (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_552,((char*)(__right_value604=xsprintf(" \%s ",((char*)(__right_value603=charp_to_string(argv[i_566])))))));
                (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_550,((char*)(__right_value606=xsprintf(" \%s ",((char*)(__right_value605=charp_to_string(argv[i_566])))))));
                (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value607=charp_operator_load_range_element(argv[i_566],0,2))),"-U"))),            (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_552,((char*)(__right_value609=xsprintf(" \%s ",((char*)(__right_value608=charp_to_string(argv[i_566])))))));
                (__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_550,((char*)(__right_value611=xsprintf(" \%s ",((char*)(__right_value610=charp_to_string(argv[i_566])))))));
                (__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-g")) {
                buffer_append_str(clang_option_550,"-g ");
            }
            else if(            charp_operator_equals(argv[i_566],"-v")) {
                buffer_append_str(clang_option_550,"-v ");
                buffer_append_str(cpp_option_552,"-v ");
                verbose_560=(_Bool)1;
            }
            else if(            strlen(argv[i_566])>=2&&memcmp(argv[i_566],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_552,((char*)(__right_value613=charp_operator_add(" ",((char*)(__right_value612=charp_operator_add(argv[i_566]," ")))))));
                (__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_566],"-gdwarf-4")) {
                buffer_append_str(clang_option_550,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_566],"-s")||charp_operator_equals(argv[i_566],"-S")) {
                output_source_file_flag_557=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_566],"-c")) {
                output_object_file_555=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_566],"-E")) {
                output_cpp_file_556=(_Bool)1;
            }
            else if(            argv[i_566][0]==45) {
                buffer_append_str(clang_option_550,((char*)(__right_value614=charp_operator_add(argv[i_566]," "))));
                (__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_566])>2&&memcmp(argv[i_566]+strlen(argv[i_566])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_554,(char*)come_increment_ref_count(__builtin_string(argv[i_566])));
            }
            else if(            strlen(argv[i_566])>2&&memcmp(argv[i_566]+strlen(argv[i_566])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_554,(char*)come_increment_ref_count(__builtin_string(argv[i_566])));
            }
            else if(            string_operator_equals(ext_name_567,"c")) {
                list$1char$ph$p_push_back(files_553,(char*)come_increment_ref_count(__builtin_string(argv[i_566])));
            }
            else {
                buffer_append_str(clang_option_550,((char*)(__right_value618=charp_operator_add(argv[i_566]," "))));
                (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_567 = come_decrement_ref_count2(ext_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_561;
        gComeMalloc=come_malloc_562;
        Value_570=system(((char*)(__right_value619=xsprintf("%s %s",RM,output_file_name_559))));
        if(        (_if_conditional5=(Value_570<0)),        (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 924, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_571=fopen(output_file_name_559,"w");
        if(        Value_571) {
            fclose(Value_571);
        }
        else {
            (come_push_stackframe("02transpile.c", 931, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_572=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_576=system(((char*)(__right_value627=xsprintf("cat \%s > \%s",((char*)(__right_value625=string_to_string(((char*)(__right_value624=list$1char$ph$p_join(files_553," ")))))),((char*)(__right_value626=string_to_string(tmp_file_572)))))));
        if(        (_if_conditional6=(Value_576<0)),        (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 937, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_577,0,sizeof(struct sInfo));
        __dec_obj112=info_577.base_sname;
        info_577.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_572));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj113=info_577.sname;
        info_577.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_572));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_577.sline=1;
        info_577.err_num=0;
        __dec_obj114=info_577.clang_option;
        info_577.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_550));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj115=info_577.cpp_option;
        info_577.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_552));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj116=info_577.linker_option;
        info_577.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_551));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_577.no_output_err=(_Bool)0;
        __dec_obj120=info_577.funcs;
        info_577.funcs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 952, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj120,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj121=info_577.struct_definition;
        info_577.struct_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 953, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj121,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj122=info_577.uniq_definition;
        info_577.uniq_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 954, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj122,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj123=info_577.previous_struct_definition;
        info_577.previous_struct_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 955, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj123,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj124=info_577.generics_funcs;
        info_577.generics_funcs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 956, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj124,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj125=info_577.classes;
        info_577.classes=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 957, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj125,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj126=info_577.modules;
        info_577.modules=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 958, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj126,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj127=info_577.types;
        info_577.types=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 959, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj127,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj141=info_577.module;
        info_577.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 960, "struct sModule", sModule_finalize, sModule_clone, sModule_get_hash_key, sModule_equals))));
        come_call_finalizer3(__dec_obj141,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj142=info_577.right_value_objects;
        info_577.right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "02transpile.c", 961, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        come_call_finalizer3(__dec_obj142,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj148=info_577.stack;
        info_577.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 962, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj148,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj150=info_577.gv_table;
        info_577.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 963, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj150,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        lv_table_609=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 964, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,((void*)0)));
        info_577.lv_table=lv_table_609;
        __dec_obj151=info_577.generics_type_names;
        info_577.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 966, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj151,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj152=info_577.method_generics_type_names;
        info_577.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 967, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj152,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj153=info_577.generics_classes;
        info_577.generics_classes=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 968, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
        come_call_finalizer3(__dec_obj153,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info_577.verbose=verbose_560;
        info_577.output_header_file=(_Bool)1;
        static int n_610=0;
        info_577.num_source_files=n_610++;
        info_577.max_source_files=list$1char$ph$p_length(files_553);
        __dec_obj154=info_577.output_file_name;
        info_577.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_559));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_577);
        clear_tmp_file(&info_577);
        Value_611=cpp(&info_577);
        if(        !Value_611) {
            printf("%s %d: transpile failed\n",info_577.sname,info_577.sline);
            system(((char*)(__right_value698=xsprintf("%s %s*",RM,tmp_file_572))));
            (__right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj155=info_577.original_source;
        info_577.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value700=charp_read(((char*)(__right_value699=xsprintf("%s",tmp_file_572))))))));
        come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj156=info_577.source;
        info_577.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value703=charp_read(((char*)(__right_value702=xsprintf("%s.i",tmp_file_572))))))));
        come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        info_577.p=info_577.source->buf;
        info_577.head=info_577.source->buf;
        Value_612=output_cpp_file_556;
        if(        !Value_612) {
            transpile_v5(&info_577);
            Value_613=output_header_file(&info_577);
            if(            !Value_613) {
                printf("%s %d: output source file faield\n",info_577.sname,info_577.sline);
                system(((char*)(__right_value705=xsprintf("%s %s*",RM,tmp_file_572))));
                (__right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value706=xsprintf("%s %s*",RM,tmp_file_572))));
        (__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (output_file_name_str_549 = come_decrement_ref_count2(output_file_name_str_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_551,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_553,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_554,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_559 = come_decrement_ref_count2(output_file_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tmp_file_572 = come_decrement_ref_count2(tmp_file_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3((&info_577),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_609,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_614=new_project(argc,argv);
        if(        !Value_614) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_615=run_project(argc,argv);
        if(        !Value_615) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_616=make_header_project(argc,argv);
        if(        !Value_616) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_617=compile_project(argc,argv);
        if(        !Value_617) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_618=debug_run_project(argc,argv);
        if(        !Value_618) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_619=clean_project(argc,argv);
        if(        !Value_619) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_620=install_project(argc,argv,"/usr/local");
            if(            !Value_620) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_621=install_project(argc,argv,argv[2]);
            if(            !Value_621) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        gProgramName=argv[0];
        start_num_622=1;
        output_file_name_str_623=((void*)0);
        clang_option_624=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        linker_option_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        cpp_option_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(cpp_option_626,"-U__GNUC__");
        files_627=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 729, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_628=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 730, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_629=(_Bool)0;
        output_cpp_file_630=(_Bool)0;
        output_source_file_flag_631=(_Bool)0;
        output_object_file_flag_632=(_Bool)1;
        output_file_name_633=(char*)come_increment_ref_count(output_file_name_str_623);
        verbose_634=(_Bool)0;
        come_debug_635=(_Bool)0;
        come_malloc_636=(_Bool)0;
        m5stack_cpp_637=(_Bool)0;
        pico_cpp_638=(_Bool)0;
        gcc_compiler_639=(_Bool)0;
        for(        i_640=start_num_622;        i_640<argc;        i_640++        ){
            ext_name_641=(char*)come_increment_ref_count(xextname(argv[i_640]));
            if(            charp_operator_equals(argv[i_640],"-o")&&i_640+1<argc) {
                __dec_obj192=output_file_name_633;
                output_file_name_633=(char*)come_increment_ref_count(__builtin_string(argv[i_640+1]));
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_640++;
            }
            else if(            charp_operator_equals(argv[i_640],"-e")&&i_640+1<argc) {
                buffer_append_str(linker_option_625,((char*)(__right_value720=xsprintf("-e \%s",((char*)(__right_value719=charp_to_string(argv[i_640+1])))))));
                (__right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            charp_operator_equals(argv[i_640],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_626,((char*)(__right_value721=xsprintf(" -DENABLE_GC "))));
                (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-gcc")) {
                gcc_compiler_639=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_640],"-pico")) {
                output_source_file_flag_631=(_Bool)1;
                output_object_file_flag_632=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_642=getenv("PICO_SDK_PATH");
                __dec_obj193=cpp_option_626;
                cpp_option_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 772, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj193,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_626,((char*)(__right_value726=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value724=charp_to_string(env_642))),((char*)(__right_value725=charp_to_string(env_642)))))));
                (__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_638=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-m5stack")) {
                m5stack_cpp_637=(_Bool)1;
                output_source_file_flag_631=(_Bool)1;
                output_object_file_flag_632=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_643=getenv("IDF_PATH");
                __dec_obj194=cpp_option_626;
                cpp_option_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 783, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_626,((char*)(__right_value750=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value729=charp_to_string(getenv("HOME")))),((char*)(__right_value730=charp_to_string(env_643))),((char*)(__right_value731=charp_to_string(env_643))),((char*)(__right_value732=charp_to_string(env_643))),((char*)(__right_value733=charp_to_string(env_643))),((char*)(__right_value734=charp_to_string(env_643))),((char*)(__right_value735=charp_to_string(env_643))),((char*)(__right_value736=charp_to_string(env_643))),((char*)(__right_value737=charp_to_string(env_643))),((char*)(__right_value738=charp_to_string(env_643))),((char*)(__right_value739=charp_to_string(env_643))),((char*)(__right_value740=charp_to_string(env_643))),((char*)(__right_value741=charp_to_string(env_643))),((char*)(__right_value742=charp_to_string(env_643))),((char*)(__right_value743=charp_to_string(env_643))),((char*)(__right_value744=charp_to_string(env_643))),((char*)(__right_value745=charp_to_string(env_643))),((char*)(__right_value746=charp_to_string(env_643))),((char*)(__right_value747=charp_to_string(env_643))),((char*)(__right_value748=charp_to_string(env_643))),((char*)(__right_value749=charp_to_string(env_643)))))),"/usr/local/");
                (__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-target")) {
                buffer_append_str(clang_option_624,((char*)(__right_value752=xsprintf("-target \%s",((char*)(__right_value751=charp_to_string(argv[i_640+1])))))));
                (__right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-T")) {
                buffer_append_str(clang_option_624,((char*)(__right_value754=xsprintf(" -T \%s ",((char*)(__right_value753=charp_to_string(argv[i_640+1])))))));
                (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            charp_operator_equals(argv[i_640],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-cg")) {
                come_debug_635=(_Bool)1;
                buffer_append_str(clang_option_624,"-g ");
            }
            else if(            charp_operator_equals(argv[i_640],"-C")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value756=xsprintf("\%s ",((char*)(__right_value755=charp_to_string(argv[i_640])))))));
                (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-M")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value758=xsprintf("\%s ",((char*)(__right_value757=charp_to_string(argv[i_640])))))));
                (__right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-MM")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value760=xsprintf("\%s ",((char*)(__right_value759=charp_to_string(argv[i_640])))))));
                (__right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-dM")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value762=xsprintf("\%s ",((char*)(__right_value761=charp_to_string(argv[i_640])))))));
                (__right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-dD")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value764=xsprintf("\%s ",((char*)(__right_value763=charp_to_string(argv[i_640])))))));
                (__right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-H")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value766=xsprintf("\%s ",((char*)(__right_value765=charp_to_string(argv[i_640])))))));
                (__right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-P")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value768=xsprintf("\%s ",((char*)(__right_value767=charp_to_string(argv[i_640])))))));
                (__right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-nostdinc")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value770=xsprintf("\%s ",((char*)(__right_value769=charp_to_string(argv[i_640])))))));
                (__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-CC")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value772=xsprintf("\%s ",((char*)(__right_value771=charp_to_string(argv[i_640])))))));
                (__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-target")) {
                buffer_append_str(clang_option_624,((char*)(__right_value774=xsprintf("-target \%s",((char*)(__right_value773=charp_to_string(argv[i_640+1])))))));
                (__right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-include")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value776=xsprintf("-iclude \%s",((char*)(__right_value775=charp_to_string(argv[i_640+1])))))));
                (__right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-isystem")) {
                buffer_append_str(cpp_option_626,((char*)(__right_value778=xsprintf("-isystem \%s",((char*)(__right_value777=charp_to_string(argv[i_640+1])))))));
                (__right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_624,((char*)(__right_value780=xsprintf("-isystem \%s",((char*)(__right_value779=charp_to_string(argv[i_640+1])))))));
                (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            i_640+1<argc&&charp_operator_equals(argv[i_640],"-T")) {
                buffer_append_str(clang_option_624,((char*)(__right_value782=xsprintf(" -T \%s ",((char*)(__right_value781=charp_to_string(argv[i_640+1])))))));
                (__right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_640++;
            }
            else if(            charp_operator_equals(argv[i_640],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value783=charp_operator_load_range_element(argv[i_640],0,2))),"-O"))),            (__right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_624,((char*)(__right_value785=xsprintf(" \%s ",((char*)(__right_value784=charp_to_string(argv[i_640])))))));
                (__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_635=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value786=charp_operator_load_range_element(argv[i_640],0,2))),"-D"))),            (__right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_626,((char*)(__right_value788=xsprintf(" \%s ",((char*)(__right_value787=charp_to_string(argv[i_640])))))));
                (__right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_624,((char*)(__right_value790=xsprintf(" \%s ",((char*)(__right_value789=charp_to_string(argv[i_640])))))));
                (__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value791=charp_operator_load_range_element(argv[i_640],0,2))),"-U"))),            (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_626,((char*)(__right_value793=xsprintf(" \%s ",((char*)(__right_value792=charp_to_string(argv[i_640])))))));
                (__right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_624,((char*)(__right_value795=xsprintf(" \%s ",((char*)(__right_value794=charp_to_string(argv[i_640])))))));
                (__right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-g")) {
                buffer_append_str(clang_option_624,"-g ");
            }
            else if(            charp_operator_equals(argv[i_640],"-v")) {
                buffer_append_str(clang_option_624,"-v ");
                buffer_append_str(cpp_option_626,"-v ");
                verbose_634=(_Bool)1;
            }
            else if(            strlen(argv[i_640])>=2&&memcmp(argv[i_640],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_626,((char*)(__right_value797=charp_operator_add(" ",((char*)(__right_value796=charp_operator_add(argv[i_640]," ")))))));
                (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_640],"-gdwarf-4")) {
                buffer_append_str(clang_option_624,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_640],"-s")||charp_operator_equals(argv[i_640],"-S")) {
                output_source_file_flag_631=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_640],"-c")) {
                output_object_file_629=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_640],"-E")) {
                output_cpp_file_630=(_Bool)1;
            }
            else if(            argv[i_640][0]==45) {
                buffer_append_str(clang_option_624,((char*)(__right_value798=charp_operator_add(argv[i_640]," "))));
                (__right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_640])>2&&memcmp(argv[i_640]+strlen(argv[i_640])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_628,(char*)come_increment_ref_count(__builtin_string(argv[i_640])));
            }
            else if(            strlen(argv[i_640])>2&&memcmp(argv[i_640]+strlen(argv[i_640])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_628,(char*)come_increment_ref_count(__builtin_string(argv[i_640])));
            }
            else if(            string_operator_equals(ext_name_641,"c")) {
                list$1char$ph$p_push_back(files_627,(char*)come_increment_ref_count(__builtin_string(argv[i_640])));
            }
            else {
                buffer_append_str(clang_option_624,((char*)(__right_value802=charp_operator_add(argv[i_640]," "))));
                (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_641 = come_decrement_ref_count2(ext_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_635;
        gComeMalloc=come_malloc_636;
        for(        o2_saved_644=(struct list$1char$ph*)come_increment_ref_count((files_627)),it_645=list$1char$ph$p_begin((o2_saved_644));        !list$1char$ph$p_end((o2_saved_644));        it_645=list$1char$ph$p_next((o2_saved_644))        ){
            memset(&info_646,0,sizeof(struct sInfo));
            Value_647=fopen(it_645,"r");
            if(            Value_647) {
                fclose(Value_647);
            }
            else {
                come_call_finalizer3((&info_646),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj195=info_646.sname;
            info_646.sname=(char*)come_increment_ref_count(__builtin_string(it_645));
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_646.sline=1;
            info_646.err_num=0;
            __dec_obj196=info_646.clang_option;
            info_646.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_624));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj197=info_646.cpp_option;
            info_646.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_626));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj198=info_646.linker_option;
            info_646.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_625));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_646.no_output_err=(_Bool)0;
            __dec_obj199=info_646.funcs;
            info_646.funcs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1073, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj199,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj200=info_646.struct_definition;
            info_646.struct_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1074, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj200,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj201=info_646.uniq_definition;
            info_646.uniq_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1075, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj201,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj202=info_646.previous_struct_definition;
            info_646.previous_struct_definition=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1076, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj202,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj203=info_646.generics_funcs;
            info_646.generics_funcs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1077, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj203,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj204=info_646.classes;
            info_646.classes=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1078, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj204,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj205=info_646.modules;
            info_646.modules=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1079, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj205,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj206=info_646.types;
            info_646.types=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1080, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj206,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj207=info_646.module;
            info_646.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1081, "struct sModule", sModule_finalize, sModule_clone, sModule_get_hash_key, sModule_equals))));
            come_call_finalizer3(__dec_obj207,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj208=info_646.right_value_objects;
            info_646.right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "02transpile.c", 1082, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            come_call_finalizer3(__dec_obj208,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj209=info_646.stack;
            info_646.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1083, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj209,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj210=info_646.gv_table;
            info_646.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1084, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj210,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            lv_table_648=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1085, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,((void*)0)));
            info_646.lv_table=lv_table_648;
            __dec_obj211=info_646.generics_type_names;
            info_646.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1087, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj211,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj212=info_646.method_generics_type_names;
            info_646.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1088, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj212,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj213=info_646.generics_classes;
            info_646.generics_classes=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "02transpile.c", 1089, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
            come_call_finalizer3(__dec_obj213,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info_646.verbose=verbose_634;
            info_646.m5stack_cpp=m5stack_cpp_637;
            info_646.pico_cpp=pico_cpp_638;
            info_646.gcc_compiler=gcc_compiler_639;
            init_classes(&info_646);
            clear_tmp_file(&info_646);
            Value_649=cpp(&info_646);
            if(            !Value_649) {
                printf("%s %d: transpile failed\n",info_646.sname,info_646.sline);
                exit(2);
            }
            else {
            }
            __dec_obj214=info_646.original_source;
            info_646.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value840=charp_read(((char*)(__right_value839=xsprintf("%s",it_645))))))));
            come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value839 = come_decrement_ref_count2(__right_value839, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj215=info_646.source;
            info_646.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value843=charp_read(((char*)(__right_value842=xsprintf("%s.i",it_645))))))));
            come_call_finalizer3(__dec_obj215,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value842 = come_decrement_ref_count2(__right_value842, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value843 = come_decrement_ref_count2(__right_value843, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info_646.p=info_646.source->buf;
            info_646.head=info_646.source->buf;
            if(            output_file_name_633) {
                __dec_obj216=info_646.output_file_name;
                info_646.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_633));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj217=info_646.output_file_name;
                info_646.output_file_name=((void*)0);
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_650=output_cpp_file_630;
            if(            !Value_650) {
                transpile_v5(&info_646);
                Value_651=output_source_file_v3(&info_646);
                if(                !Value_651) {
                    printf("%s %d: output source file faield\n",info_646.sname,info_646.sline);
                    exit(2);
                }
                else {
                }
                if(                info_646.err_num>0) {
                    printf("transpile error. err num %d\n",info_646.err_num);
                    exit(2);
                }
                else {
                    Value_652=output_object_file_flag_632;
                    if(                    Value_652) {
                        Value_653=compile(&info_646,output_object_file_629,object_files_628);
                        if(                        !Value_653) {
                            printf("%s %d: compile faield\n",info_646.sname,info_646.sline);
                            exit(27);
                        }
                        else {
                        }
                    }
                    else {
                    }
                }
            }
            else {
            }
            if(            output_cpp_file_630) {
            }
            else if(            info_646.err_num>0) {
            }
            else if(            output_source_file_flag_631) {
                clear_tmp_file_without_object_file_and_ccfile(&info_646);
            }
            else {
                clear_tmp_file_without_object_file(&info_646);
            }
            come_call_finalizer3((&info_646),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3(lv_table_648,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_644,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_629&&!output_cpp_file_630&&(list$1char$ph$p_length(files_627)>0||list$1char$ph$p_length(object_files_628)>0)) {
            memset(&info_654,0,sizeof(struct sInfo));
            __dec_obj218=info_654.sname;
            info_654.sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value846=list$1char$ph$p_operator_load_element(files_627,0)))));
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj219=info_654.clang_option;
            info_654.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_624));
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj220=info_654.linker_option;
            info_654.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_625));
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_654.verbose=verbose_634;
            if(            output_file_name_633) {
                __dec_obj221=info_654.output_file_name;
                info_654.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_633));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj222=info_654.output_file_name;
                info_654.output_file_name=((void*)0);
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_632) {
                Value_658=linker(&info_654,object_files_628);
                if(                !Value_658) {
                    printf("%s %d: linker faield\n",info_654.sname,info_654.sline);
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_630&&!output_source_file_flag_631) {
                clear_tmp_file(&info_654);
            }
            come_call_finalizer3((&info_654),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        (output_file_name_str_623 = come_decrement_ref_count2(output_file_name_str_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_627,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_628,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_633 = come_decrement_ref_count2(output_file_name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return 0;
}

static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct buffer* buf_573;
int n_574;
char* it_575;
void* __right_value623 = (void*)0;
char* __result299__;
    buf_573=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2232, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    n_574=0;
    for(    it_575=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_575=list$1char$ph$p_next(self)    ){
        buffer_append_str(buf_573,it_575);
        if(        n_574<list$1char$ph$p_length(self)-1) {
            buffer_append_str(buf_573,sep);
        }
        n_574++;
    }
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value623=buffer_to_string(buf_573)));
    come_call_finalizer3(buf_573,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_578;
int i_579;
    for(    i_578=0;    i_578<self->size;    i_578++    ){
        if(        self->item_existance[i_578]) {
            if(            1) {
                come_call_finalizer3(self->items[i_578],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_579=0;    i_579<self->size;    i_579++    ){
        if(        self->item_existance[i_579]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_579],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_580;
struct list_item$1void$p* prev_it_581;
    it_580=self->head;
    while(it_580!=((void*)0)) {
        prev_it_581=it_580;
        it_580=it_580->next;
        come_call_finalizer3(prev_it_581,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result300__;
void* __right_value633 = (void*)0;
struct map$2void$phvoid$ph* result_582;
void* __right_value639 = (void*)0;
struct list$1void$p* __dec_obj117;
struct map$2void$phvoid$ph* __result305__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_582=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_582->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_582->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_582->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_582->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_582->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj117=result_582->key_list;
        result_582->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj117,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_582->it=self->it;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_582;
    come_call_finalizer3(result_582,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result301__;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1void$p* result_584;
struct list_item$1void$p* it_585;
struct list$1void$p* __result304__;
    if(    self==((void*)0)) {
        __result301__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_584=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1368, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_585=self->head;
    while(it_585!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_584,it_585->item);
        }
        else {
            list$1void$p$p_add(result_584,it_585->item);
        }
        it_585=it_585->next;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_584;
    come_call_finalizer3(result_584,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_583;
    result_583=0;
    result_583+=int_get_hash_key(((int)self->head));
    result_583+=int_get_hash_key(((int)self->tail));
    result_583+=int_get_hash_key(((int)self->len));
    result_583+=int_get_hash_key(((int)self->it));
    return result_583;
}

static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right){
    if(    !list_item$1void$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result302__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value636 = (void*)0;
struct list_item$1void$p* litem_586;
void* __right_value637 = (void*)0;
struct list_item$1void$p* litem_587;
void* __right_value638 = (void*)0;
struct list_item$1void$p* litem_588;
struct list$1void$p* __result303__;
    if(    self->len==0) {
        litem_586=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value636=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1387, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_586->prev=((void*)0);
        litem_586->next=((void*)0);
        litem_586->item=item;
        self->tail=litem_586;
        self->head=litem_586;
    }
    else if(    self->len==1) {
        litem_587=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value637=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1397, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_587->prev=self->head;
        litem_587->next=((void*)0);
        litem_587->item=item;
        self->tail=litem_587;
        self->head->next=litem_587;
    }
    else {
        litem_588=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value638=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1407, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_588->prev=self->tail;
        litem_588->next=((void*)0);
        litem_588->item=item;
        self->tail->next=litem_588;
        self->tail=litem_588;
    }
    self->len++;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_589;
struct list_item$1void$p* prev_it_590;
    it_589=self->head;
    while(it_589!=((void*)0)) {
        prev_it_590=it_589;
        it_589=it_589->next;
        come_call_finalizer3(prev_it_590,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
struct list$1void$p* __dec_obj118;
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        if(        self->key_list==gComeFunResultObject) {
            __dec_obj118=self->key_list;
            come_call_finalizer3(__dec_obj118,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_591;
    result_591=0;
    result_591+=int_get_hash_key(((int)self->keys));
    result_591+=int_get_hash_key(((int)self->item_existance));
    result_591+=int_get_hash_key(((int)self->items));
    result_591+=int_get_hash_key(((int)self->size));
    result_591+=int_get_hash_key(((int)self->len));
    result_591+=int_get_hash_key(((int)self->key_list));
    result_591+=int_get_hash_key(((int)self->it));
    return result_591;
}

static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right){
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
    if(    !list$1void$p$p_equals(left->key_list,right->key_list)) {
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

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
int i_592;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1void$p* __dec_obj119;
struct map$2void$phvoid$ph* __result307__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value641=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value642=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value643=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_592=0;    i_592<128;    i_592++    ){
        self->item_existance[i_592]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj119=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj119,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result306__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj128;
struct buffer* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
struct map$2void$phvoid$ph* __dec_obj132;
struct map$2void$phvoid$ph* __dec_obj133;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj128=self->mSourceHead;
            come_call_finalizer3(__dec_obj128,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj129=self->mSource;
            come_call_finalizer3(__dec_obj129,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj130=self->mLastCode;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj131=self->mLastCode2;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj132=self->mHeader;
            come_call_finalizer3(__dec_obj132,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        if(        self->mHeaderStructs==gComeFunResultObject) {
            __dec_obj133=self->mHeaderStructs;
            come_call_finalizer3(__dec_obj133,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeaderStructs,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sModule* sModule_clone(struct sModule* self){
void* __result_obj__=(void*)0;
struct sModule* __result308__;
void* __right_value661 = (void*)0;
struct sModule* result_594;
void* __right_value662 = (void*)0;
struct buffer* __dec_obj134;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value664 = (void*)0;
char* __dec_obj136;
void* __right_value665 = (void*)0;
char* __dec_obj137;
void* __right_value677 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj139;
void* __right_value678 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj140;
struct sModule* __result312__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_594=(struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "sModule_clone", 3, "struct sModule", sModule_finalize, sModule_clone, sModule_get_hash_key, sModule_equals));
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj134=result_594->mSourceHead;
        result_594->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj134,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj135=result_594->mSource;
        result_594->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        __dec_obj136=result_594->mLastCode;
        result_594->mLastCode=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mLastCode));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        __dec_obj137=result_594->mLastCode2;
        result_594->mLastCode2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mLastCode2));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        __dec_obj139=result_594->mHeader;
        result_594->mHeader=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mHeader));
        come_call_finalizer3(__dec_obj139,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        __dec_obj140=result_594->mHeaderStructs;
        result_594->mHeaderStructs=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mHeaderStructs));
        come_call_finalizer3(__dec_obj140,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_594;
    come_call_finalizer3(result_594,sModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static unsigned int sModule_get_hash_key(struct sModule* self){
unsigned int result_593;
    result_593=0;
    result_593+=int_get_hash_key(((int)self->mSourceHead));
    result_593+=int_get_hash_key(((int)self->mSource));
    result_593+=int_get_hash_key(((int)self->mLastCode));
    result_593+=int_get_hash_key(((int)self->mLastCode2));
    result_593+=int_get_hash_key(((int)self->mHeader));
    result_593+=int_get_hash_key(((int)self->mHeaderStructs));
    return result_593;
}

static _Bool sModule_equals(struct sModule* left, struct sModule* right){
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mLastCode,right->mLastCode)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mLastCode2,right->mLastCode2)) {
        return (_Bool)0;
    }
    if(    !map$2void$phvoid$ph$p_equals(left->mHeader,right->mHeader)) {
        return (_Bool)0;
    }
    if(    !map$2void$phvoid$ph$p_equals(left->mHeaderStructs,right->mHeaderStructs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result309__;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct map$2void$phvoid$ph* result_595;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1void$p* __dec_obj138;
char* it_596;
void* default_value_597;
void* __right_value670 = (void*)0;
char* it2_598;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct map$2void$phvoid$ph* __result311__;
default_value_597 = (void*)0;
    if(    self==((void*)0)) {
        __result309__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_595=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2734, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj138=result_595->key_list;
    result_595->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2736, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj138,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_596=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_596=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_597,0,sizeof(void*));
        it2_598=(char*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_596,(char*)come_increment_ref_count(((char*)default_value_597))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_595,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_596)),(char*)come_increment_ref_count(come_call_cloner(string_clone, it2_598)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_595,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_596)),(char*)come_increment_ref_count(come_call_cloner(string_clone, it2_598)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_595,(char*)come_increment_ref_count(it_596),(char*)come_increment_ref_count(come_call_cloner(string_clone, it2_598)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_595,(char*)come_increment_ref_count(it_596),(char*)come_increment_ref_count(come_call_cloner(string_clone, it2_598)));
        }
        come_call_finalizer3(default_value_597,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_598,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_595;
    come_call_finalizer3(result_595,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_599;
int it_600;
_Bool same_key_exist_601;
char* it2_602;
struct map$2void$phvoid$ph* __result310__;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_599=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_600=hash_599;
    while((_Bool)1) {
        if(        self->item_existance[it_600]) {
            if(            come_call_equals((void*)0, self->keys[it_600], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_600],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_600]);
                    self->keys[it_600]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_600]);
                    self->keys[it_600]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_600],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_600]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_600]=item;
                }
                break;
            }
            it_600++;
            if(            it_600>=self->size) {
                it_600=0;
            }
            else if(            it_600==hash_599) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_600]=(_Bool)1;
            if(            1) {
                self->keys[it_600]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_600]=key;
            }
            if(            1) {
                self->items[it_600]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_600]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_601=(_Bool)0;
    for(    it2_602=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_602=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_602, key)) {
            same_key_exist_601=(_Bool)1;
        }
    }
    if(    !same_key_exist_601) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUE$ph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_603;
struct list_item$1CVALUE$ph* prev_it_604;
    it_603=self->head;
    while(it_603!=((void*)0)) {
        prev_it_604=it_603;
        it_603=it_603->next;
        come_call_finalizer3(prev_it_604,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
struct CVALUE* __dec_obj143;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj143=self->item;
            come_call_finalizer3(__dec_obj143,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj144;
struct sType* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj144=self->c_value;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj145=self->type;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj146=self->c_value_without_right_value_objects;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj147=self->c_value_without_cast_object_value;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_605;
struct list_item$1CVALUE$ph* prev_it_606;
    it_605=self->head;
    while(it_605!=((void*)0)) {
        prev_it_606=it_605;
        it_605=it_605->next;
        come_call_finalizer3(prev_it_606,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result314__;
void* __right_value685 = (void*)0;
struct sVarTable* result_608;
void* __right_value686 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj149;
struct sVarTable* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_608=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj149=result_608->mVars;
        result_608->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj149,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_608->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_608->mParent=self->mParent;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_608;
    come_call_finalizer3(result_608,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_607;
    result_607=0;
    result_607+=int_get_hash_key(((int)self->mVars));
    result_607+=int_get_hash_key(((int)self->mGlobal));
    result_607+=int_get_hash_key(((int)self->mParent));
    return result_607;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2void$phvoid$ph$p_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj157;
struct buffer* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
struct map$2void$phvoid$ph* __dec_obj166;
struct map$2void$phvoid$ph* __dec_obj167;
struct map$2void$phvoid$ph* __dec_obj168;
struct map$2void$phvoid$ph* __dec_obj169;
struct map$2void$phvoid$ph* __dec_obj170;
struct map$2void$phvoid$ph* __dec_obj171;
struct map$2void$phvoid$ph* __dec_obj172;
struct map$2void$phvoid$ph* __dec_obj173;
struct sModule* __dec_obj174;
struct sType* __dec_obj175;
struct list$1void$ph* __dec_obj176;
struct sType* __dec_obj177;
struct list$1void$ph* __dec_obj178;
struct list$1CVALUE$ph* __dec_obj179;
struct sType* __dec_obj180;
struct sType* __dec_obj181;
struct sVarTable* __dec_obj182;
struct list$1char$ph* __dec_obj183;
struct list$1char$ph* __dec_obj184;
struct sType* __dec_obj185;
char* __dec_obj186;
struct sType* __dec_obj187;
struct map$2void$phvoid$ph* __dec_obj188;
char* __dec_obj189;
struct list$1void$ph* __dec_obj190;
struct map$2void$phvoid$ph* __dec_obj191;
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(        self->original_source==gComeFunResultObject) {
            __dec_obj157=self->original_source;
            come_call_finalizer3(__dec_obj157,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj158=self->source;
            come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        if(        self->sname_at_head==gComeFunResultObject) {
            __dec_obj160=self->sname_at_head;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(        self->base_sname==gComeFunResultObject) {
            __dec_obj161=self->base_sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(        self->err_line==gComeFunResultObject) {
            __dec_obj162=self->err_line;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(        self->clang_option==gComeFunResultObject) {
            __dec_obj163=self->clang_option;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(        self->cpp_option==gComeFunResultObject) {
            __dec_obj164=self->cpp_option;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        if(        self->linker_option==gComeFunResultObject) {
            __dec_obj165=self->linker_option;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(        self->funcs==gComeFunResultObject) {
            __dec_obj166=self->funcs;
            come_call_finalizer3(__dec_obj166,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->funcs,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(        self->generics_funcs==gComeFunResultObject) {
            __dec_obj167=self->generics_funcs;
            come_call_finalizer3(__dec_obj167,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_funcs,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        if(        self->classes==gComeFunResultObject) {
            __dec_obj168=self->classes;
            come_call_finalizer3(__dec_obj168,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->classes,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        if(        self->modules==gComeFunResultObject) {
            __dec_obj169=self->modules;
            come_call_finalizer3(__dec_obj169,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->modules,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        if(        self->types==gComeFunResultObject) {
            __dec_obj170=self->types;
            come_call_finalizer3(__dec_obj170,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->types,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(        self->generics_classes==gComeFunResultObject) {
            __dec_obj171=self->generics_classes;
            come_call_finalizer3(__dec_obj171,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_classes,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        if(        self->struct_definition==gComeFunResultObject) {
            __dec_obj172=self->struct_definition;
            come_call_finalizer3(__dec_obj172,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->struct_definition,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        if(        self->previous_struct_definition==gComeFunResultObject) {
            __dec_obj173=self->previous_struct_definition;
            come_call_finalizer3(__dec_obj173,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->previous_struct_definition,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        if(        self->module==gComeFunResultObject) {
            __dec_obj174=self->module;
            come_call_finalizer3(__dec_obj174,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj175=self->type;
            come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(        self->right_value_objects==gComeFunResultObject) {
            __dec_obj176=self->right_value_objects;
            come_call_finalizer3(__dec_obj176,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->right_value_objects,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(        self->generics_type==gComeFunResultObject) {
            __dec_obj177=self->generics_type;
            come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj178=self->method_generics_types;
            come_call_finalizer3(__dec_obj178,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        if(        self->stack==gComeFunResultObject) {
            __dec_obj179=self->stack;
            come_call_finalizer3(__dec_obj179,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->stack,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(        self->come_function_result_type==gComeFunResultObject) {
            __dec_obj180=self->come_function_result_type;
            come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(        self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj181=self->come_method_block_function_result_type;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(        self->gv_table==gComeFunResultObject) {
            __dec_obj182=self->gv_table;
            come_call_finalizer3(__dec_obj182,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(        self->generics_type_names==gComeFunResultObject) {
            __dec_obj183=self->generics_type_names;
            come_call_finalizer3(__dec_obj183,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(        self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj184=self->method_generics_type_names;
            come_call_finalizer3(__dec_obj184,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(        self->impl_type==gComeFunResultObject) {
            __dec_obj185=self->impl_type;
            come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(        self->output_file_name==gComeFunResultObject) {
            __dec_obj186=self->output_file_name;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(        self->function_result_type==gComeFunResultObject) {
            __dec_obj187=self->function_result_type;
            come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(        self->module_params==gComeFunResultObject) {
            __dec_obj188=self->module_params;
            come_call_finalizer3(__dec_obj188,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->module_params,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        if(        self->if_result_var_name==gComeFunResultObject) {
            __dec_obj189=self->if_result_var_name;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        if(        self->match_it_var==gComeFunResultObject) {
            __dec_obj190=self->match_it_var;
            come_call_finalizer3(__dec_obj190,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->match_it_var,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        if(        self->uniq_definition==gComeFunResultObject) {
            __dec_obj191=self->uniq_definition;
            come_call_finalizer3(__dec_obj191,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->uniq_definition,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_655;
int i_656;
char* __result316__;
char* default_value_657;
char* __result317__;
default_value_657 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_655=self->head;
    i_656=0;
    while(it_655!=((void*)0)) {
        if(        position==i_656) {
            __result316__ = gComeFunResultObject = __result_obj__ = it_655->item;
            gComeFunResultObject = (void*)0;
            return __result316__;
        }
        it_655=it_655->next;
        i_656++;
    }
    memset(&default_value_657,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = default_value_657;
    (default_value_657 = come_decrement_ref_count2(default_value_657, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result317__;
}

