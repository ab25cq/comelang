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

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
};

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
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
void come_print_heap_info(void* mem);
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
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self);
static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self);
static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item);
static void list$1void$p_finalize(struct list$1void$p* self);
static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_clone(struct map$2void$phvoid$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item);
static struct sVar* sVar_clone(struct sVar* self);
static void sVar_finalize(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_operator_not_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool list$1void$ph$p_operator_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right);
static struct sFun* sFun_clone(struct sFun* self);
static unsigned int sFun_get_hash_key(struct sFun* self);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static struct sBlock* sBlock_clone(struct sBlock* self);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self);
static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self);
static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self);
static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static int list$1void$ph$p_length(struct list$1void$ph* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self);
static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self);
static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1493, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1503, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1513, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1493, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1503, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1513, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1493, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1503, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1513, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1493, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1503, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1513, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1493, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1503, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1513, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1493, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1503, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1513, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1493, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1503, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1513, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2310, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2437, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2310, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2437, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2310, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2437, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2310, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2437, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2310, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2437, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2310, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2437, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2310, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2437, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1493, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1503, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1513, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string("sSemicolonNode"))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sLambdaNode* __result_obj__239;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->mFun=fun;
    __result_obj__239 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__239,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__239;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__240;
    __result_obj__240 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sLambdaNode"))));
    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__240 = come_decrement_ref_count2(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_350;
int block_level_351;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_352;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__257;
    come_fun_350=info->come_fun;
    info->come_fun=self->mFun;
    block_level_351=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_351;
    come_value_352=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_352->c_value;
    come_value_352->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=come_value_352->type;
    come_value_352->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_352->var=((void*)0);
    add_come_last_code(info,"%s",come_value_352->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_352));
    info->come_fun=come_fun_350;
    __result_obj__257 = (_Bool)1;
    come_call_finalizer3(come_value_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__257;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__241;
void* __right_value266 = (void*)0;
struct sType* result_364;
void* __right_value267 = (void*)0;
struct sType* __dec_obj24;
void* __right_value268 = (void*)0;
struct sType* __dec_obj25;
void* __right_value276 = (void*)0;
struct list$1void$ph* __dec_obj29;
void* __right_value277 = (void*)0;
struct sType* __dec_obj30;
void* __right_value278 = (void*)0;
struct sType* __dec_obj31;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value282 = (void*)0;
char* __dec_obj34;
void* __right_value283 = (void*)0;
char* __dec_obj35;
void* __right_value284 = (void*)0;
char* __dec_obj36;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value293 = (void*)0;
char* __dec_obj41;
void* __right_value294 = (void*)0;
struct list$1void$ph* __dec_obj42;
void* __right_value302 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value303 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__255;
    if(    self==(void*)0) {
        __result_obj__241 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__241,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__241;
    }
    result_364=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_364->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_364->mOriginalLoadVarType;
        result_364->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_364->mChannelType;
        result_364->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_364->mGenericsTypes;
        result_364->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_364->mNoSolvedGenericsType;
        result_364->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_364->mAnyOriginalType;
        result_364->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_364->mSizeNum;
        result_364->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_364->mAlignas;
        result_364->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_364->mTupleName;
        result_364->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_364->mAttribute;
        result_364->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_364->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_364->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_364->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_364->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_364->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_364->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_364->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_364->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_364->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_364->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_364->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_364->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_364->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_364->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_364->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_364->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_364->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_364->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_364->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_364->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_364->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_364->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_364->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_364->mAsmName;
        result_364->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_364->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_364->mArrayNum;
        result_364->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_364->mOriginalTypeName;
        result_364->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_364->mParamTypes;
        result_364->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_364->mParamNames;
        result_364->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_364->mResultType;
        result_364->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mVarArgs=self->mVarArgs;
    }
    __result_obj__255 = come_increment_ref_count(result_364);
    come_call_finalizer3(result_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__255,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__255;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_353;
struct list_item$1void$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_355;
struct list_item$1sNode$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_357;
    result_357=0;
    result_357+=int_get_hash_key(((int)self->mClass));
    result_357+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_357+=int_get_hash_key(((int)self->mChannelType));
    result_357+=int_get_hash_key(((int)self->mGenericsTypes));
    result_357+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_357+=int_get_hash_key(((int)self->mAnyClass));
    result_357+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_357+=int_get_hash_key(((int)self->mSizeNum));
    result_357+=int_get_hash_key(((int)self->mAlignas));
    result_357+=int_get_hash_key(((int)self->mTupleName));
    result_357+=int_get_hash_key(((int)self->mAttribute));
    result_357+=int_get_hash_key(((int)self->mAllocaValue));
    result_357+=int_get_hash_key(((int)self->mUnsigned));
    result_357+=int_get_hash_key(((int)self->mShort));
    result_357+=int_get_hash_key(((int)self->mLong));
    result_357+=int_get_hash_key(((int)self->mLongLong));
    result_357+=int_get_hash_key(((int)self->mConstant));
    result_357+=int_get_hash_key(((int)self->mAtomic));
    result_357+=int_get_hash_key(((int)self->mRegister));
    result_357+=int_get_hash_key(((int)self->mVolatile));
    result_357+=int_get_hash_key(((int)self->mStatic));
    result_357+=int_get_hash_key(((int)self->mUniq));
    result_357+=int_get_hash_key(((int)self->mRecord));
    result_357+=int_get_hash_key(((int)self->mExtern));
    result_357+=int_get_hash_key(((int)self->mRestrict));
    result_357+=int_get_hash_key(((int)self->mImmutable));
    result_357+=int_get_hash_key(((int)self->mHeap));
    result_357+=int_get_hash_key(((int)self->mChannel));
    result_357+=int_get_hash_key(((int)self->mNoHeap));
    result_357+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_357+=int_get_hash_key(((int)self->mException));
    result_357+=int_get_hash_key(((int)self->mGenerate));
    result_357+=int_get_hash_key(((int)self->mCreateVTable));
    result_357+=int_get_hash_key(((int)self->mDynamic));
    result_357+=int_get_hash_key(((int)self->mInline));
    result_357+=int_get_hash_key(((int)self->mNullValue));
    result_357+=int_get_hash_key(((int)self->mGuardValue));
    result_357+=int_get_hash_key(((int)self->mAsmName));
    result_357+=int_get_hash_key(((int)self->mTypedef));
    result_357+=int_get_hash_key(((int)self->mMultipleTypes));
    result_357+=int_get_hash_key(((int)self->mOriginIsArray));
    result_357+=int_get_hash_key(((int)self->mArrayNum));
    result_357+=int_get_hash_key(((int)self->mPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_357+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_357+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mArrayPointerType));
    result_357+=int_get_hash_key(((int)self->mLambdaArray));
    result_357+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_357+=int_get_hash_key(((int)self->mParamTypes));
    result_357+=int_get_hash_key(((int)self->mParamNames));
    result_357+=int_get_hash_key(((int)self->mResultType));
    result_357+=int_get_hash_key(((int)self->mVarArgs));
    return result_357;
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
struct list_item$1void$ph* it_358;
struct list_item$1void$ph* it2_359;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_358=left->head;
    it2_359=right->head;
    while(it_358!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_358->item, it2_359->item)) {
            return (_Bool)0;
        }
        it_358=it_358->next;
        it2_359=it2_359->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_360;
struct list_item$1sNode$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !sNode_equals(it_360->item,it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_362;
struct list_item$1char$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !string_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__242;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1void$ph* result_366;
struct list_item$1void$ph* it_367;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1void$ph* __result_obj__245;
    if(    self==((void*)0)) {
        __result_obj__242 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__242,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__242;
    }
    result_366=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1404, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_366,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_367->item)));
        }
        else {
            list$1void$ph$p_add(result_366,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_367->item)));
        }
        it_367=it_367->next;
    }
    __result_obj__245 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_365;
    result_365=0;
    result_365+=int_get_hash_key(((int)self->head));
    result_365+=int_get_hash_key(((int)self->tail));
    result_365+=int_get_hash_key(((int)self->len));
    result_365+=int_get_hash_key(((int)self->it));
    return result_365;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__243;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__243 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value271 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1void$ph* litem_369;
void* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1void$ph* litem_370;
void* __dec_obj28;
struct list$1void$ph* __result_obj__244;
    if(    self->len==0) {
        litem_368=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1423, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj26=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value272=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1433, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj27=litem_369->item;
        litem_369->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value273=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1443, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj28=litem_370->item;
        litem_370->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result_obj__244 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__244;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_371;
struct list_item$1void$ph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__246;
void* __right_value279 = (void*)0;
struct sNode* result_373;
struct sNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = come_increment_ref_count((void*)0);
        ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count2(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    result_373=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_373->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_373->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_373->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_373->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_373->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_373->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_373->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_373->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_373->kind=self->kind;
    }
    __result_obj__247 = come_increment_ref_count(result_373);
    ((result_373) ? result_373 = come_decrement_ref_count2(result_373, ((struct sNode*)result_373)->finalize, ((struct sNode*)result_373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count2(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__248;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_374;
struct list_item$1sNode$ph* it_375;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_374=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_375=self->head;
    while(it_375!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_374,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_375->item)));
        }
        else {
            list$1sNode$ph$p_add(result_374,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_375->item)));
        }
        it_375=it_375->next;
    }
    __result_obj__251 = come_increment_ref_count(result_374);
    come_call_finalizer3(result_374,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_378;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj37=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj38=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj39=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_379;
struct list_item$1sNode$ph* prev_it_380;
    it_379=self->head;
    while(it_379!=((void*)0)) {
        prev_it_380=it_379;
        it_379=it_379->next;
        come_call_finalizer3(prev_it_380,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_381;
struct list_item$1char$ph* it_382;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_381=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_382=self->head;
    while(it_382!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_381,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_382->item)));
        }
        else {
            list$1char$ph$p_add(result_381,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_382->item)));
        }
        it_382=it_382->next;
    }
    __result_obj__254 = come_increment_ref_count(result_381);
    come_call_finalizer3(result_381,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_383;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_385;
char* __dec_obj45;
struct list$1char$ph* __result_obj__253;
    if(    self->len==0) {
        litem_383=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=((void*)0);
        litem_383->next=((void*)0);
        __dec_obj43=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_383;
        self->head=litem_383;
    }
    else if(    self->len==1) {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->head;
        litem_384->next=((void*)0);
        __dec_obj44=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_384;
        self->head->next=litem_384;
    }
    else {
        litem_385=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->tail;
        litem_385->next=((void*)0);
        __dec_obj45=litem_385->item;
        litem_385->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_385;
        self->tail=litem_385;
    }
    self->len++;
    __result_obj__253 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_386;
struct list_item$1char$ph* prev_it_387;
    it_386=self->head;
    while(it_386!=((void*)0)) {
        prev_it_387=it_386;
        it_386=it_386->next;
        come_call_finalizer3(prev_it_387,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_388;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_389;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_390;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__256;
    if(    self->len==0) {
        litem_388=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        __dec_obj49=litem_388->item;
        litem_388->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1) {
        litem_389=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        __dec_obj50=litem_389->item;
        litem_389->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        __dec_obj51=litem_390->item;
        litem_390->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result_obj__256 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__256;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value308 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__258;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sFunNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count2(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_391;
int block_level_392;
void* __right_value310 = (void*)0;
    come_fun_391=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_392=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_392;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_391;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1sNode$ph* __dec_obj53;
struct sBlock* __result_obj__260;
    __dec_obj53=self->mNodes;
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05function.c", 117, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj53,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__260 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __right_value313 = (void*)0;
struct sType* __dec_obj54;
void* __right_value314 = (void*)0;
struct list$1char$ph* __dec_obj55;
void* __right_value315 = (void*)0;
struct list$1char$ph* __dec_obj56;
char* __dec_obj57;
struct sType* __dec_obj58;
struct list$1void$ph* __dec_obj59;
struct list$1char$ph* __dec_obj60;
struct list$1char$ph* __dec_obj61;
char* __dec_obj62;
void* __right_value316 = (void*)0;
char* __dec_obj63;
struct sGenericsFun* __result_obj__261;
    __dec_obj54=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj55=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_type_names));
    come_call_finalizer3(__dec_obj55,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj56=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj56,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj57=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj59=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj59,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj60=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj60,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj61=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj61,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj62=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj63=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result_obj__261 = come_increment_ref_count(self);
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__261,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__261;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sBlock* result_393;
int sline_top_394;
int block_level_395;
char* p_saved_396;
int sline_saved_397;
char* sname_saved_398;
void* __right_value319 = (void*)0;
char* __dec_obj64;
char* __dec_obj65;
struct map$2void$phvoid$ph* __dec_obj66;
char* p_403;
int sline_404;
void* __right_value320 = (void*)0;
char* sname_405;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* module_name_406;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1char$ph* params_407;
void* __right_value325 = (void*)0;
char* word_408;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_409=0;
char* Err_410=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_411=0;
char* Err_412=0;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
char* __dec_obj68;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_416=0;
char* Err_417=0;
struct sBlock* __result_obj__266;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sClassModule* module_418;
void* __right_value335 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_419=0;
char* Err_420=0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj71;
int i_434;
struct list$1char$ph* o2_saved_435;
char* it_438;
void* __right_value350 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj72;
void* __right_value362 = (void*)0;
struct sNode* node_488;
void* __right_value363 = (void*)0;
char* __dec_obj73;
void* __right_value364 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_489=0;
char* Err_490=0;
_Bool omit_semicolon_494;
void* __right_value368 = (void*)0;
char* __dec_obj77;
char* head_509;
void* __right_value369 = (void*)0;
struct sNode* value_510;
char* tail_511;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* node_513;
void* __right_value373 = (void*)0;
char* __dec_obj79;
struct sNode* node_514;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value380 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_516=0;
char* Err_517=0;
_Bool omit_semicolon_518;
char* p_519;
char* head_520;
void* __right_value381 = (void*)0;
char* source_521;
void* __right_value382 = (void*)0;
struct sNode* node_522;
void* __right_value383 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_523=0;
char* Err_524=0;
struct sBlock* __result_obj__311;
node_514 = (void*)0;
    result_393=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 155, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_394=info->sline_top;
    info->sline_top=info->sline;
    block_level_395=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_396=((void*)0);
        sline_saved_397=0;
        sname_saved_398=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_396) {
                if(                *info->p==0) {
                    info->p=p_saved_396;
                    info->sline=sline_saved_397;
                    __dec_obj64=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_398));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_396=((void*)0);
                    sline_saved_397=0;
                    __dec_obj65=sname_saved_398;
                    sname_saved_398=((void*)0);
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj66=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj66,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_403=info->p;
            sline_404=info->sline;
            sname_405=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_404;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value321=parse_word(info)));
                (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_406=(char*)come_increment_ref_count(parse_word(info));
                params_407=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 211, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_408=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_407,(char*)come_increment_ref_count(word_408));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"invalid source end")));
                            come_exception_var_c1_409=multiple_assign_var1->v1;
                            Err_410=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_410)?(puts(Err_410),exit(0)):(0));
                            come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_410 = come_decrement_ref_count2(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_408 = come_decrement_ref_count2(word_408, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_411=multiple_assign_var2->v1;
                            Err_412=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_412)?(puts(Err_412),exit(0)):(0));
                            come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_408 = come_decrement_ref_count2(word_408, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_396=info->p;
                sline_saved_397=info->sline;
                __dec_obj67=sname_saved_398;
                sname_saved_398=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj68=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_406));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value331=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value330=__builtin_string(module_name_406)))))))==((void*)0))),                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value331,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"module not found")));
                    come_exception_var_c3_416=multiple_assign_var3->v1;
                    Err_417=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_417)?(puts(Err_417),exit(0)):(0));
                    come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__266 = come_increment_ref_count(((void*)0));
                    (Err_417 = come_decrement_ref_count2(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_406 = come_decrement_ref_count2(module_name_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_407,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_405 = come_decrement_ref_count2(sname_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_398 = come_decrement_ref_count2(sname_saved_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_393,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__266,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__266;
                    (Err_417 = come_decrement_ref_count2(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_418=((struct sClassModule*)((void*)(__right_value334=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value333=__builtin_string(module_name_406)))))));
                (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                list$1char$ph$p_length(module_418->mParams)!=list$1char$ph$p_length(params_407)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value335=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_419=multiple_assign_var4->v1;
                    Err_420=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_420)?(puts(Err_420),exit(0)):(0));
                    come_call_finalizer3(__right_value335,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_420 = come_decrement_ref_count2(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj71=info->module_params;
                info->module_params=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "05function.c", 265, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
                come_call_finalizer3(__dec_obj71,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_434=0;
                for(                o2_saved_435=(struct list$1char$ph*)come_increment_ref_count((module_418->mParams)),it_438=list$1char$ph$p_begin((o2_saved_435));                !list$1char$ph$p_end((o2_saved_435));                it_438=list$1char$ph$p_next((o2_saved_435))                ){
                    map$2void$phvoid$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_438)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph$p_operator_load_element(params_407,i_434))))));
                    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_434++;
                }
                come_call_finalizer3(o2_saved_435,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_418->mText;
                info->sline=module_418->mSLine;
                __dec_obj72=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_418->mSName));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_406 = come_decrement_ref_count2(module_name_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_407,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_488=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj73=info->sname;
            info->sname=(char*)come_increment_ref_count(node_488->sname(node_488->_protocol_obj));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_488->sline(node_488->_protocol_obj);
            if(            node_488==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value364=err_msg(info,"Invalid expression")));
                come_exception_var_c5_489=multiple_assign_var5->v1;
                Err_490=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_490)?(puts(Err_490),exit(0)):(0));
                come_call_finalizer3(__right_value364,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_490 = come_decrement_ref_count2(Err_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_393->mNodes,(struct sNode*)come_increment_ref_count(node_488));
            parse_sharp_v5(info);
            if(            node_488->terminated(node_488->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_494=(_Bool)1;
            if(            node_488->terminated(node_488->_protocol_obj)) {
                omit_semicolon_494=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_494=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_393->mOmitSemicolon=omit_semicolon_494;
                if(                omit_semicolon_494&&in_function) {
                    list$1sNode$ph$p_delete(result_393->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_403;
                    info->sline=sline_404;
                    __dec_obj77=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_405));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_509=info->p;
                    value_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_511=info->p;
                    __dec_obj78=value_510;
                    value_510=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_510),info));
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_512[tail_511-head_509+1];
                    memset(&buf_512, 0, sizeof(char)                    *(tail_511-head_509+1)                    );
                    memcpy(buf_512,head_509,tail_511-head_509);
                    buf_512[tail_511-head_509]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_513=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_510),(char*)come_increment_ref_count(__builtin_string(buf_512)),info));
                    list$1sNode$ph$p_push_back(result_393->mNodes,(struct sNode*)come_increment_ref_count(node_513));
                    ((value_510) ? value_510 = come_decrement_ref_count2(value_510, ((struct sNode*)value_510)->finalize, ((struct sNode*)value_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_513) ? node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_405 = come_decrement_ref_count2(sname_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_488) ? node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_510) ? value_510 = come_decrement_ref_count2(value_510, ((struct sNode*)value_510)->finalize, ((struct sNode*)value_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_513) ? node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_405 = come_decrement_ref_count2(sname_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_488) ? node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_405 = come_decrement_ref_count2(sname_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_488) ? node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_396) {
            if(            info->p==0) {
                info->p=p_saved_396;
                info->sline=sline_saved_397;
                __dec_obj79=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_398));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_396=((void*)0);
                sline_saved_397=0;
            }
        }
        (sname_saved_398 = come_decrement_ref_count2(sname_saved_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value375=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 369, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj81=node_514;
            node_514=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value375,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_393->mNodes,(struct sNode*)come_increment_ref_count(node_514));
        }
        else {
            __dec_obj82=node_514;
            node_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_514==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"Invalid expression")));
                come_exception_var_c6_516=multiple_assign_var6->v1;
                Err_517=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_517)?(puts(Err_517),exit(0)):(0));
                come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_517 = come_decrement_ref_count2(Err_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_514->terminated(node_514->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_518=(_Bool)1;
            if(            node_514->terminated(node_514->_protocol_obj)) {
                omit_semicolon_518=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_518=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_393->mOmitSemicolon=omit_semicolon_518;
            list$1sNode$ph$p_push_back(result_393->mNodes,(struct sNode*)come_increment_ref_count(node_514));
        }
        ((node_514) ? node_514 = come_decrement_ref_count2(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_519=info->p;
        head_520=info->head;
        source_521=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_521;
        info->head=source_521;
        node_522=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_522==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value383=err_msg(info,"Invalid expression")));
            come_exception_var_c7_523=multiple_assign_var7->v1;
            Err_524=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_524)?(puts(Err_524),exit(0)):(0));
            come_call_finalizer3(__right_value383,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_393->mNodes,(struct sNode*)come_increment_ref_count(node_522));
        info->p=p_519;
        info->head=head_520;
        (source_521 = come_decrement_ref_count2(source_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_522) ? node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_395;
    __result_obj__311 = come_increment_ref_count(result_393);
    come_call_finalizer3(result_393,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_399;
int i_400;
    for(    i_399=0;    i_399<self->size;    i_399++    ){
        if(        self->item_existance[i_399]) {
            if(            1) {
                come_call_finalizer3(self->items[i_399],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_400=0;    i_400<self->size;    i_400++    ){
        if(        self->item_existance[i_400]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_400],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_401;
struct list_item$1void$p* prev_it_402;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_413;
unsigned int hash_414;
unsigned int it_415;
void* __result_obj__262;
void* __result_obj__263;
void* __result_obj__264;
void* __result_obj__265;
default_value_413 = (void*)0;
    memset(&default_value_413,0,sizeof(void*));
    hash_414=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_415=hash_414;
    while((_Bool)1) {
        if(        self->item_existance[it_415]) {
            if(            come_call_equals((void*)0, self->keys[it_415], ((char*)key))) {
                __result_obj__262 = come_increment_ref_count(self->items[it_415]);
                come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__262,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__262;
            }
            it_415++;
            if(            it_415>=self->size) {
                it_415=0;
            }
            else if(            it_415==hash_414) {
                __result_obj__263 = come_increment_ref_count(((struct sClassModule*)default_value_413));
                come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__263,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = come_increment_ref_count(((struct sClassModule*)default_value_413));
            come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__264,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = come_increment_ref_count(((struct sClassModule*)default_value_413));
    come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__265,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__265;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_421;
int i_422;
    for(    i_421=0;    i_421<self->size;    i_421++    ){
        if(        self->item_existance[i_421]) {
            if(            1) {
                come_call_finalizer3(self->items[i_421],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_422=0;    i_422<self->size;    i_422++    ){
        if(        self->item_existance[i_422]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_422],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__267;
void* __right_value336 = (void*)0;
struct map$2void$phvoid$ph* result_423;
void* __right_value342 = (void*)0;
struct list$1void$p* __dec_obj69;
struct map$2void$phvoid$ph* __result_obj__272;
    if(    self==(void*)0) {
        __result_obj__267 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__267,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__267;
    }
    result_423=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_423->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_423->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_423->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_423->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_423->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj69=result_423->key_list;
        result_423->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj69,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->it=self->it;
    }
    __result_obj__272 = come_increment_ref_count(result_423);
    come_call_finalizer3(result_423,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__268;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1void$p* result_425;
struct list_item$1void$p* it_426;
struct list$1void$p* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__268 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__268,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__268;
    }
    result_425=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1404, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_426=self->head;
    while(it_426!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_425,it_426->item);
        }
        else {
            list$1void$p$p_add(result_425,it_426->item);
        }
        it_426=it_426->next;
    }
    __result_obj__271 = come_increment_ref_count(result_425);
    come_call_finalizer3(result_425,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_424;
    result_424=0;
    result_424+=int_get_hash_key(((int)self->head));
    result_424+=int_get_hash_key(((int)self->tail));
    result_424+=int_get_hash_key(((int)self->len));
    result_424+=int_get_hash_key(((int)self->it));
    return result_424;
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
struct list$1void$p* __result_obj__269;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__269 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__269,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__269;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __right_value339 = (void*)0;
struct list_item$1void$p* litem_427;
void* __right_value340 = (void*)0;
struct list_item$1void$p* litem_428;
void* __right_value341 = (void*)0;
struct list_item$1void$p* litem_429;
struct list$1void$p* __result_obj__270;
    if(    self->len==0) {
        litem_427=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value339=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1423, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_427->prev=((void*)0);
        litem_427->next=((void*)0);
        litem_427->item=item;
        self->tail=litem_427;
        self->head=litem_427;
    }
    else if(    self->len==1) {
        litem_428=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value340=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1433, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=self->head;
        litem_428->next=((void*)0);
        litem_428->item=item;
        self->tail=litem_428;
        self->head->next=litem_428;
    }
    else {
        litem_429=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value341=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1443, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=self->tail;
        litem_429->next=((void*)0);
        litem_429->item=item;
        self->tail->next=litem_429;
        self->tail=litem_429;
    }
    self->len++;
    __result_obj__270 = self;
    return __result_obj__270;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_430;
struct list_item$1void$p* prev_it_431;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_432;
    result_432=0;
    result_432+=int_get_hash_key(((int)self->keys));
    result_432+=int_get_hash_key(((int)self->item_existance));
    result_432+=int_get_hash_key(((int)self->items));
    result_432+=int_get_hash_key(((int)self->size));
    result_432+=int_get_hash_key(((int)self->len));
    result_432+=int_get_hash_key(((int)self->key_list));
    result_432+=int_get_hash_key(((int)self->it));
    return result_432;
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
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
int i_433;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1void$p* __dec_obj70;
struct map$2void$phvoid$ph* __result_obj__274;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value344=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2699, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value345=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2700, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_433=0;    i_433<128;    i_433++    ){
        self->item_existance[i_433]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj70=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2711, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj70,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__274 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__273;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__273 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__273,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__273;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_436;
char* __result_obj__275;
char* __result_obj__276;
char* result_437;
char* __result_obj__277;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_436,0,sizeof(char*));
        __result_obj__275 = result_436;
        return __result_obj__275;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__276 = self->it->item;
        return __result_obj__276;
    }
    memset(&result_437,0,sizeof(char*));
    __result_obj__277 = result_437;
    return __result_obj__277;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_439;
char* __result_obj__278;
char* __result_obj__279;
char* result_440;
char* __result_obj__280;
result_439 = (void*)0;
result_440 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_439,0,sizeof(char*));
        __result_obj__278 = result_439;
        return __result_obj__278;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__279 = self->it->item;
        return __result_obj__279;
    }
    memset(&result_440,0,sizeof(char*));
    __result_obj__280 = result_440;
    return __result_obj__280;
}

static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item){
    map$2void$phvoid$ph$p_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_458;
unsigned int it_459;
_Bool same_key_exist_476;
char* it2_479;
struct map$2void$phvoid$ph* __result_obj__302;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_458=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_459=hash_458;
    while((_Bool)1) {
        if(        self->item_existance[it_459]) {
            if(            come_call_equals((void*)0, self->keys[it_459], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_459]);
                    come_call_finalizer3(self->keys[it_459],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_459]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_459]);
                    self->keys[it_459]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_459],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_459]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_459]=item;
                }
                break;
            }
            it_459++;
            if(            it_459>=self->size) {
                it_459=0;
            }
            else if(            it_459==hash_458) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_459]=(_Bool)1;
            if(            1) {
                self->keys[it_459]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_459]=key;
            }
            if(            1) {
                self->items[it_459]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_459]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_476=(_Bool)0;
    for(    it2_479=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_479=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_479, key)) {
            same_key_exist_476=(_Bool)1;
        }
    }
    if(    !same_key_exist_476) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__302 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__302;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_441;
void* __right_value351 = (void*)0;
void** keys_442;
void* __right_value352 = (void*)0;
void** items_443;
void* __right_value353 = (void*)0;
_Bool* item_existance_444;
int len_445;
void* it_448;
void* default_value_451;
void* __right_value354 = (void*)0;
void* it2_452;
unsigned int hash_455;
int n_456;
void* default_value_457;
void* __right_value355 = (void*)0;
default_value_451 = (void*)0;
default_value_457 = (void*)0;
    size_441=self->size*10;
    keys_442=(void**)come_increment_ref_count(((void**)(__right_value351=(void**)come_calloc(1, sizeof(void*)*(1*(size_441)), "./comelang.h", 2938, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_443=(void**)come_increment_ref_count(((void**)(__right_value352=(void**)come_calloc(1, sizeof(void*)*(1*(size_441)), "./comelang.h", 2939, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_444=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_441)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_445=0;
    for(    it_448=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_448=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_451,0,sizeof(void*));
        it2_452=((void*)(__right_value354=map$2void$phvoid$ph$p_at(self,it_448,(void*)come_increment_ref_count(default_value_451))));
        come_call_finalizer3(__right_value354,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_455=come_call_get_hash_key((void*)0, ((void*)it_448))%size_441;
        n_456=hash_455;
        while((_Bool)1) {
            if(            item_existance_444[n_456]) {
                n_456++;
                if(                n_456>=size_441) {
                    n_456=0;
                }
                else if(                n_456==hash_455) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_444[n_456]=(_Bool)1;
                keys_442[n_456]=it_448;
                items_443[n_456]=((void*)(__right_value355=map$2void$phvoid$ph$p_at(self,it_448,(void*)come_increment_ref_count(default_value_457))));
                come_call_finalizer3(__right_value355,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_445++;
                come_call_finalizer3(default_value_457,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_457,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_451,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_442;
    self->items=items_443;
    self->item_existance=item_existance_444;
    self->size=size_441;
    self->len=len_445;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_446;
void* __result_obj__281;
void* __result_obj__282;
void* result_447;
void* __result_obj__283;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_446,0,sizeof(void*));
        __result_obj__281 = result_446;
        return __result_obj__281;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__282 = self->key_list->it->item;
        return __result_obj__282;
    }
    memset(&result_447,0,sizeof(void*));
    __result_obj__283 = result_447;
    return __result_obj__283;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_449;
void* __result_obj__284;
void* __result_obj__285;
void* result_450;
void* __result_obj__286;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_449,0,sizeof(void*));
        __result_obj__284 = result_449;
        return __result_obj__284;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__285 = self->key_list->it->item;
        return __result_obj__285;
    }
    memset(&result_450,0,sizeof(void*));
    __result_obj__286 = result_450;
    return __result_obj__286;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_453;
unsigned int it_454;
void* __result_obj__287;
void* __result_obj__288;
void* __result_obj__289;
void* __result_obj__290;
    hash_453=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_454=hash_453;
    while((_Bool)1) {
        if(        self->item_existance[it_454]) {
            if(            come_call_equals((void*)0, self->keys[it_454], key)) {
                __result_obj__287 = come_increment_ref_count(self->items[it_454]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__287,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__287;
            }
            it_454++;
            if(            it_454>=self->size) {
                it_454=0;
            }
            else if(            it_454==hash_453) {
                __result_obj__288 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__288,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__288;
            }
        }
        else {
            __result_obj__289 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__289,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__289;
        }
    }
    __result_obj__290 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__290,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__290;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_460;
struct list_item$1void$p* it_461;
struct list$1void$p* __result_obj__294;
    it2_460=0;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        if(        come_call_equals((void*)0, it_461->item, item)) {
            list$1void$p$p_delete(self,it2_460,it2_460+1);
            break;
        }
        it2_460++;
        it_461=it_461->next;
    }
    __result_obj__294 = self;
    return __result_obj__294;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_462;
struct list$1void$p* __result_obj__291;
struct list_item$1void$p* it_465;
int i_466;
struct list_item$1void$p* prev_it_467;
struct list_item$1void$p* it_468;
int i_469;
struct list_item$1void$p* prev_it_470;
struct list_item$1void$p* it_471;
struct list_item$1void$p* head_prev_it_472;
struct list_item$1void$p* tail_it_473;
int i_474;
struct list_item$1void$p* prev_it_475;
struct list$1void$p* __result_obj__293;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_462=tail;
        tail=head;
        head=tmp_462;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__291 = self;
        return __result_obj__291;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_465=self->head;
        i_466=0;
        while(it_465!=((void*)0)) {
            if(            i_466<tail) {
                prev_it_467=it_465;
                it_465=it_465->next;
                i_466++;
                come_call_finalizer3(prev_it_467,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_466==tail) {
                self->head=it_465;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_465=it_465->next;
                i_466++;
            }
        }
    }
    else if(    tail==self->len) {
        it_468=self->head;
        i_469=0;
        while(it_468!=((void*)0)) {
            if(            i_469==head) {
                self->tail=it_468->prev;
                self->tail->next=((void*)0);
            }
            if(            i_469>=head) {
                prev_it_470=it_468;
                it_468=it_468->next;
                i_469++;
                come_call_finalizer3(prev_it_470,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_468=it_468->next;
                i_469++;
            }
        }
    }
    else {
        it_471=self->head;
        head_prev_it_472=((void*)0);
        tail_it_473=((void*)0);
        i_474=0;
        while(it_471!=((void*)0)) {
            if(            i_474==head) {
                head_prev_it_472=it_471->prev;
            }
            if(            i_474==tail) {
                tail_it_473=it_471;
            }
            if(            i_474>=head&&i_474<tail) {
                prev_it_475=it_471;
                it_471=it_471->next;
                i_474++;
                come_call_finalizer3(prev_it_475,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_471=it_471->next;
                i_474++;
            }
        }
        if(        head_prev_it_472!=((void*)0)) {
            head_prev_it_472->next=tail_it_473;
        }
        if(        tail_it_473!=((void*)0)) {
            tail_it_473->prev=head_prev_it_472;
        }
    }
    __result_obj__293 = self;
    return __result_obj__293;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_463;
struct list_item$1void$p* prev_it_464;
struct list$1void$p* __result_obj__292;
    it_463=self->head;
    while(it_463!=((void*)0)) {
        prev_it_464=it_463;
        it_463=it_463->next;
        come_call_finalizer3(prev_it_464,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__292 = self;
    return __result_obj__292;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_477;
void* __result_obj__295;
void* __result_obj__296;
void* result_478;
void* __result_obj__297;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_477,0,sizeof(void*));
        __result_obj__295 = result_477;
        return __result_obj__295;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__296 = self->it->item;
        return __result_obj__296;
    }
    memset(&result_478,0,sizeof(void*));
    __result_obj__297 = result_478;
    return __result_obj__297;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_480;
void* __result_obj__298;
void* __result_obj__299;
void* result_481;
void* __result_obj__300;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_480,0,sizeof(void*));
        __result_obj__298 = result_480;
        return __result_obj__298;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__299 = self->it->item;
        return __result_obj__299;
    }
    memset(&result_481,0,sizeof(void*));
    __result_obj__300 = result_481;
    return __result_obj__300;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value356 = (void*)0;
struct list_item$1void$p* litem_482;
void* __right_value357 = (void*)0;
struct list_item$1void$p* litem_483;
void* __right_value358 = (void*)0;
struct list_item$1void$p* litem_484;
struct list$1void$p* __result_obj__301;
    if(    self->len==0) {
        litem_482=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value356=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1493, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_482->prev=((void*)0);
        litem_482->next=((void*)0);
        litem_482->item=item;
        self->tail=litem_482;
        self->head=litem_482;
    }
    else if(    self->len==1) {
        litem_483=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value357=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1503, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_483->prev=self->head;
        litem_483->next=((void*)0);
        litem_483->item=item;
        self->tail=litem_483;
        self->head->next=litem_483;
    }
    else {
        litem_484=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value358=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1513, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_484->prev=self->tail;
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail->next=litem_484;
        self->tail=litem_484;
    }
    self->len++;
    __result_obj__301 = self;
    return __result_obj__301;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_485;
int i_486;
char* __result_obj__303;
char* default_value_487;
char* __result_obj__304;
default_value_487 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_485=self->head;
    i_486=0;
    while(it_485!=((void*)0)) {
        if(        position==i_486) {
            __result_obj__303 = come_increment_ref_count(it_485->item);
            (__result_obj__303 = come_decrement_ref_count2(__result_obj__303, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__303;
        }
        it_485=it_485->next;
        i_486++;
    }
    memset(&default_value_487,0,sizeof(char*));
    __result_obj__304 = come_increment_ref_count(default_value_487);
    (default_value_487 = come_decrement_ref_count2(default_value_487, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__304 = come_decrement_ref_count2(__result_obj__304, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__304;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value365 = (void*)0;
struct list_item$1sNode$ph* litem_491;
struct sNode* __dec_obj74;
void* __right_value366 = (void*)0;
struct list_item$1sNode$ph* litem_492;
struct sNode* __dec_obj75;
void* __right_value367 = (void*)0;
struct list_item$1sNode$ph* litem_493;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__305;
    if(    self->len==0) {
        litem_491=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value365=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1493, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        __dec_obj74=litem_491->item;
        litem_491->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1) {
        litem_492=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value366=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1503, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        __dec_obj75=litem_492->item;
        litem_492->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value367=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1513, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        __dec_obj76=litem_493->item;
        litem_493->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result_obj__305 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__305;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_495;
struct list$1sNode$ph* __result_obj__306;
struct list_item$1sNode$ph* it_498;
int i_499;
struct list_item$1sNode$ph* prev_it_500;
struct list_item$1sNode$ph* it_501;
int i_502;
struct list_item$1sNode$ph* prev_it_503;
struct list_item$1sNode$ph* it_504;
struct list_item$1sNode$ph* head_prev_it_505;
struct list_item$1sNode$ph* tail_it_506;
int i_507;
struct list_item$1sNode$ph* prev_it_508;
struct list$1sNode$ph* __result_obj__308;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_495=tail;
        tail=head;
        head=tmp_495;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__306 = self;
        return __result_obj__306;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_498=self->head;
        i_499=0;
        while(it_498!=((void*)0)) {
            if(            i_499<tail) {
                prev_it_500=it_498;
                it_498=it_498->next;
                i_499++;
                come_call_finalizer3(prev_it_500,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_499==tail) {
                self->head=it_498;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_498=it_498->next;
                i_499++;
            }
        }
    }
    else if(    tail==self->len) {
        it_501=self->head;
        i_502=0;
        while(it_501!=((void*)0)) {
            if(            i_502==head) {
                self->tail=it_501->prev;
                self->tail->next=((void*)0);
            }
            if(            i_502>=head) {
                prev_it_503=it_501;
                it_501=it_501->next;
                i_502++;
                come_call_finalizer3(prev_it_503,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_501=it_501->next;
                i_502++;
            }
        }
    }
    else {
        it_504=self->head;
        head_prev_it_505=((void*)0);
        tail_it_506=((void*)0);
        i_507=0;
        while(it_504!=((void*)0)) {
            if(            i_507==head) {
                head_prev_it_505=it_504->prev;
            }
            if(            i_507==tail) {
                tail_it_506=it_504;
            }
            if(            i_507>=head&&i_507<tail) {
                prev_it_508=it_504;
                it_504=it_504->next;
                i_507++;
                come_call_finalizer3(prev_it_508,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_504=it_504->next;
                i_507++;
            }
        }
        if(        head_prev_it_505!=((void*)0)) {
            head_prev_it_505->next=tail_it_506;
        }
        if(        tail_it_506!=((void*)0)) {
            tail_it_506->prev=head_prev_it_505;
        }
    }
    __result_obj__308 = self;
    return __result_obj__308;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_496;
struct list_item$1sNode$ph* prev_it_497;
struct list$1sNode$ph* __result_obj__307;
    it_496=self->head;
    while(it_496!=((void*)0)) {
        prev_it_497=it_496;
        it_496=it_496->next;
        come_call_finalizer3(prev_it_497,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__307 = self;
    return __result_obj__307;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__309;
void* __right_value376 = (void*)0;
struct sSemicolonNode* result_515;
void* __right_value377 = (void*)0;
char* __dec_obj80;
struct sSemicolonNode* __result_obj__310;
    if(    self==(void*)0) {
        __result_obj__309 = (void*)0;
        return __result_obj__309;
    }
    result_515=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_515->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj80=result_515->sname;
        result_515->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_515->sline_real=self->sline_real;
    }
    __result_obj__310 = result_515;
    come_call_finalizer3(result_515,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_525;
struct sVarTable* old_table_526;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sVarTable* __dec_obj89;
struct sVarTable* current_loop_vtable_539;
int i_540;
struct list$1char$ph* o2_saved_541;
char* name_542;
void* __right_value404 = (void*)0;
struct sType* type_543;
void* __right_value405 = (void*)0;
int block_level_547;
int i_548;
struct list$1sNode$ph* o2_saved_549;
struct sNode* node_552;
struct list$1void$ph* right_value_objects_555;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1void$ph* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
int stack_num_before_556;
int sline_557;
void* __right_value408 = (void*)0;
char* sname_558;
void* __right_value409 = (void*)0;
char* __dec_obj93;
_Bool Value_559;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_560;
void* __right_value416 = (void*)0;
struct CVALUE* come_value2_561;
void* __right_value417 = (void*)0;
char* __dec_obj98;
void* __right_value418 = (void*)0;
struct CVALUE* come_value2_563;
struct sVar* var__564;
void* __right_value419 = (void*)0;
struct CVALUE* come_value3_565;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_568=0;
char* Err_569=0;
_Bool _if_conditional2;
int __result_obj__329;
void* __right_value422 = (void*)0;
struct sType* __dec_obj99;
void* __right_value423 = (void*)0;
char* c_value_570;
void* __right_value424 = (void*)0;
char* __dec_obj100;
void* __right_value425 = (void*)0;
char* __dec_obj101;
void* __right_value426 = (void*)0;
char* __dec_obj102;
_Bool Value_571;
void* __right_value427 = (void*)0;
char* __dec_obj103;
struct list$1void$ph* __dec_obj104;
void* __if_result__0_574 = (void*)0;
struct list$1void$ph* o2_saved_575;
struct sVar* it_578;
void* __right_value428 = (void*)0;
struct list$1void$ph* __dec_obj105;
memset(&i_540, 0, sizeof(int));
memset(&i_548, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_525=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_526=info->lv_table;
    if(    !no_var_table) {
        __dec_obj89=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 443, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_526));
        come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_539=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_541=(param_names),name_542=list$1char$ph$p_begin((o2_saved_541));        !list$1char$ph$p_end((o2_saved_541));        name_542=list$1char$ph$p_next((o2_saved_541))        ){
            type_543=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types,i_540));
            type_543->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_542,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_543)),info,(_Bool)1);
            i_540++;
            come_call_finalizer3(type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_547=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_549=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_552=list$1sNode$ph$p_begin((o2_saved_549));        !list$1sNode$ph$p_end((o2_saved_549));        node_552=list$1sNode$ph$p_next((o2_saved_549))        ){
            right_value_objects_555=(struct list$1void$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj90=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 481, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            come_call_finalizer3(__dec_obj90,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj91=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_556=list$1CVALUE$ph$p_length(info->stack);
            sline_557=info->sline;
            sname_558=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_552->sline(node_552->_protocol_obj);
            __dec_obj93=info->sname;
            info->sname=(char*)come_increment_ref_count(node_552->sname(node_552->_protocol_obj));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_548==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_559=node_compile(node_552,info);
                if(                !Value_559) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_556+1) {
                    come_value_560=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_560->type->mClass->mName,"void")&&come_value_560->type->mPointerNum==0) {
                        come_value2_561=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_560));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_561));
                        __dec_obj98=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_561->c_value));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_563=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_560));
                        var__564=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__564) {
                            come_value3_565=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__564->mType->mClass=="void"&&var__564->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value421=check_assign_type("invalid if result value",var__564->mType,((struct sType*)(__right_value420=come_call_cloner(sType_clone, come_value_560->type))),come_value3_565,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_568=multiple_assign_var8->v1;
                                Err_569=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_569)),                                come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value421,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__329 = (_Bool)1;
                                    (Err_569 = come_decrement_ref_count2(Err_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_555,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_558 = come_decrement_ref_count2(sname_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_549,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__329;
                                }
                                else {
                                }
                                (Err_569 = come_decrement_ref_count2(Err_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj99=var__564->mType;
                            var__564->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_560->type));
                            come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_560->type->mHeap) {
                                c_value_570=(char*)come_increment_ref_count(increment_ref_count_object(come_value_560->type,come_value_560->c_value,info));
                                __dec_obj100=come_value2_563->c_value;
                                come_value2_563->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__564->mCValueName,c_value_570));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_570 = come_decrement_ref_count2(c_value_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj101=come_value2_563->c_value;
                                come_value2_563->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__564->mCValueName,come_value_560->c_value));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_563));
                        __dec_obj102=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_563->c_value));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_571=node_compile(node_552,info);
                if(                !Value_571) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_557;
            __dec_obj103=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_558));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_556);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1void$ph$p_reset(info->right_value_objects);
            }
            __dec_obj104=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_555);
            come_call_finalizer3(__dec_obj104,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_548++;
            come_call_finalizer3(right_value_objects_555,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_558 = come_decrement_ref_count2(sname_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_549,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_547==0) {
            for(            o2_saved_575=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_578=((struct sVar*)list$1void$ph$p_begin((o2_saved_575)));            !list$1void$ph$p_end((o2_saved_575));            it_578=((struct sVar*)list$1void$ph$p_next((o2_saved_575)))            ){
                free_object(((struct sType*)(__right_value428=come_call_cloner(sType_clone, it_578->mType))),it_578->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj105=info->match_it_var;
            __if_result__0_574=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj105,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_574,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_526;
    info->block_level=block_level_547;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_539;
    info->inhibits_output_code=inhibits_output_code_525;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__312;
void* __right_value384 = (void*)0;
struct sVarTable* result_528;
void* __right_value401 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj88;
struct sVarTable* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__312 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__312,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__312;
    }
    result_528=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj88=result_528->mVars;
        result_528->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj88,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_528->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_528->mParent=self->mParent;
    }
    __result_obj__318 = come_increment_ref_count(result_528);
    come_call_finalizer3(result_528,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__318,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__318;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_527;
    result_527=0;
    result_527+=int_get_hash_key(((int)self->mVars));
    result_527+=int_get_hash_key(((int)self->mGlobal));
    result_527+=int_get_hash_key(((int)self->mParent));
    return result_527;
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

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__313;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct map$2void$phvoid$ph* result_529;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1void$p* __dec_obj83;
char* it_530;
void* default_value_531;
void* __right_value389 = (void*)0;
struct sVar* it2_532;
void* __right_value390 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct map$2void$phvoid$ph* __result_obj__317;
default_value_531 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__313 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__313,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__313;
    }
    result_529=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2770, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj83=result_529->key_list;
    result_529->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2772, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj83,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_530=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_530=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_531,0,sizeof(void*));
        it2_532=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_530,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_531))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_529,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_530)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_532)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_529,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_530)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_532)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_529,(char*)come_increment_ref_count(it_530),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_532)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_529,(char*)come_increment_ref_count(it_530),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_532)));
        }
        come_call_finalizer3(default_value_531,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_532,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__317 = come_increment_ref_count(result_529);
    come_call_finalizer3(result_529,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_533;
int it_534;
_Bool same_key_exist_535;
char* it2_536;
struct map$2void$phvoid$ph* __result_obj__314;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_533=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_534=hash_533;
    while((_Bool)1) {
        if(        self->item_existance[it_534]) {
            if(            come_call_equals((void*)0, self->keys[it_534], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_534],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_534]);
                    self->keys[it_534]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_534]);
                    self->keys[it_534]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_534],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_534]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_534]=item;
                }
                break;
            }
            it_534++;
            if(            it_534>=self->size) {
                it_534=0;
            }
            else if(            it_534==hash_533) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_534]=(_Bool)1;
            if(            1) {
                self->keys[it_534]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_534]=key;
            }
            if(            1) {
                self->items[it_534]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_534]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_535=(_Bool)0;
    for(    it2_536=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_536=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_536, key)) {
            same_key_exist_535=(_Bool)1;
        }
    }
    if(    !same_key_exist_535) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__314 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__314;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__315;
void* __right_value391 = (void*)0;
struct sVar* result_538;
void* __right_value392 = (void*)0;
char* __dec_obj84;
void* __right_value393 = (void*)0;
char* __dec_obj85;
void* __right_value394 = (void*)0;
struct sType* __dec_obj86;
void* __right_value395 = (void*)0;
char* __dec_obj87;
struct sVar* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__315 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__315,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__315;
    }
    result_538=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj84=result_538->mName;
        result_538->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj85=result_538->mCValueName;
        result_538->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj86=result_538->mType;
        result_538->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_538->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_538->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj87=result_538->mFunName;
        result_538->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__316 = come_increment_ref_count(result_538);
    come_call_finalizer3(result_538,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__316,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_537;
    result_537=0;
    result_537+=int_get_hash_key(((int)self->mName));
    result_537+=int_get_hash_key(((int)self->mCValueName));
    result_537+=int_get_hash_key(((int)self->mType));
    result_537+=int_get_hash_key(((int)self->mGlobal));
    result_537+=int_get_hash_key(((int)self->mAllocaValue));
    result_537+=int_get_hash_key(((int)self->mNoFree));
    result_537+=int_get_hash_key(((int)self->mFunName));
    return result_537;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_544;
int i_545;
void* __result_obj__319;
void* default_value_546;
void* __result_obj__320;
default_value_546 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_544=self->head;
    i_545=0;
    while(it_544!=((void*)0)) {
        if(        position==i_545) {
            __result_obj__319 = come_increment_ref_count(it_544->item);
            come_call_finalizer3(__result_obj__319,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__319;
        }
        it_544=it_544->next;
        i_545++;
    }
    memset(&default_value_546,0,sizeof(void*));
    __result_obj__320 = come_increment_ref_count(((struct sType*)default_value_546));
    come_call_finalizer3(default_value_546,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__320,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__320;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_550;
struct sNode* __result_obj__321;
struct sNode* __result_obj__322;
struct sNode* result_551;
struct sNode* __result_obj__323;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_550,0,sizeof(struct sNode*));
        __result_obj__321 = result_550;
        return __result_obj__321;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__322 = self->it->item;
        return __result_obj__322;
    }
    memset(&result_551,0,sizeof(struct sNode*));
    __result_obj__323 = result_551;
    return __result_obj__323;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_553;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
struct sNode* result_554;
struct sNode* __result_obj__326;
result_553 = (void*)0;
result_554 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_553,0,sizeof(struct sNode*));
        __result_obj__324 = result_553;
        return __result_obj__324;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__325 = self->it->item;
        return __result_obj__325;
    }
    memset(&result_554,0,sizeof(struct sNode*));
    __result_obj__326 = result_554;
    return __result_obj__326;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__327;
void* __right_value411 = (void*)0;
struct CVALUE* result_562;
void* __right_value412 = (void*)0;
char* __dec_obj94;
void* __right_value413 = (void*)0;
struct sType* __dec_obj95;
void* __right_value414 = (void*)0;
char* __dec_obj96;
void* __right_value415 = (void*)0;
char* __dec_obj97;
struct CVALUE* __result_obj__328;
    if(    self==(void*)0) {
        __result_obj__327 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__327,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__327;
    }
    result_562=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj94=result_562->c_value;
        result_562->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj95=result_562->type;
        result_562->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_562->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_562->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj96=result_562->c_value_without_right_value_objects;
        result_562->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj97=result_562->c_value_without_cast_object_value;
        result_562->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__328 = come_increment_ref_count(result_562);
    come_call_finalizer3(result_562,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__328,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__328;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1void$ph$p_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1void$ph$p_operator_not_equals(struct list$1void$ph* left, struct list$1void$ph* right){
    return !list$1void$ph$p_operator_equals(left,right);
}

static _Bool list$1void$ph$p_operator_equals(struct list$1void$ph* left, struct list$1void$ph* right){
struct list_item$1void$ph* it_566;
struct list_item$1void$ph* it2_567;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_566=left->head;
    it2_567=right->head;
    while(it_566!=((void*)0)) {
        if(        !(voidp_operator_equals(it_566->item,it2_567->item))) {
            return (_Bool)0;
        }
        it_566=it_566->next;
        it2_567=it2_567->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
struct list_item$1void$ph* it_572;
struct list_item$1void$ph* prev_it_573;
struct list$1void$ph* __result_obj__330;
    it_572=self->head;
    while(it_572!=((void*)0)) {
        prev_it_573=it_572;
        it_572=it_572->next;
        come_call_finalizer3(prev_it_573,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__330 = self;
    return __result_obj__330;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_576;
void* __result_obj__331;
void* __result_obj__332;
void* result_577;
void* __result_obj__333;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_576,0,sizeof(void*));
        __result_obj__331 = result_576;
        return __result_obj__331;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__332 = self->it->item;
        return __result_obj__332;
    }
    memset(&result_577,0,sizeof(void*));
    __result_obj__333 = result_577;
    return __result_obj__333;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_579;
void* __result_obj__334;
void* __result_obj__335;
void* result_580;
void* __result_obj__336;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_579,0,sizeof(void*));
        __result_obj__334 = result_579;
        return __result_obj__334;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__335 = self->it->item;
        return __result_obj__335;
    }
    memset(&result_580,0,sizeof(void*));
    __result_obj__336 = result_580;
    return __result_obj__336;
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph$p_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph$p_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph$p_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph$p_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __right_value429 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_581=0;
char* Err_582=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value429=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_581=multiple_assign_var9->v1;
            Err_582=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_582)?(puts(Err_582),exit(0)):(0));
            come_call_finalizer3(__right_value429,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_582 = come_decrement_ref_count2(Err_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
char* head_583;
_Bool dquort_584;
_Bool squort_585;
int sline_586;
int nest_587;
void* __right_value430 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_588=0;
char* Err_589=0;
void* __right_value431 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_590=0;
char* Err_591=0;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_592=0;
char* Err_593=0;
void* __right_value433 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_594=0;
char* Err_595=0;
void* __right_value434 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_596=0;
char* Err_597=0;
void* __right_value435 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_598=0;
char* Err_599=0;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_600=0;
char* Err_601=0;
void* __right_value437 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_602=0;
char* Err_603=0;
char* tail_604;
void* __right_value438 = (void*)0;
char* buf_605;
void* __right_value439 = (void*)0;
char* __result_obj__337;
    head_583=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_584=(_Bool)0;
        squort_585=(_Bool)0;
        sline_586=0;
        nest_587=0;
        while(1) {
            if(            dquort_584) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value430=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c9_588=multiple_assign_var10->v1;
                        Err_589=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_589)?(puts(Err_589),exit(0)):(0));
                        come_call_finalizer3(__right_value430,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_589 = come_decrement_ref_count2(Err_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_584=!dquort_584;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value431=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c10_590=multiple_assign_var11->v1;
                        Err_591=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_591)?(puts(Err_591),exit(0)):(0));
                        come_call_finalizer3(__right_value431,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_591 = come_decrement_ref_count2(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c11_592=multiple_assign_var12->v1;
                        Err_593=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_593)?(puts(Err_593),exit(0)):(0));
                        come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_593 = come_decrement_ref_count2(Err_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_585) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value433=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c12_594=multiple_assign_var13->v1;
                        Err_595=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_595)?(puts(Err_595),exit(0)):(0));
                        come_call_finalizer3(__right_value433,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_595 = come_decrement_ref_count2(Err_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_585=!squort_585;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value434=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c13_596=multiple_assign_var14->v1;
                        Err_597=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_597)?(puts(Err_597),exit(0)):(0));
                        come_call_finalizer3(__right_value434,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_597 = come_decrement_ref_count2(Err_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value435=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_586)));
                        come_exception_var_c14_598=multiple_assign_var15->v1;
                        Err_599=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_599)?(puts(Err_599),exit(0)):(0));
                        come_call_finalizer3(__right_value435,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_599 = come_decrement_ref_count2(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_586=info->sline;
                info->p++;
                squort_585=!squort_585;
            }
            else if(            *info->p==34) {
                sline_586=info->sline;
                info->p++;
                dquort_584=!dquort_584;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_587++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_587==0) {
                    break;
                }
                nest_587--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_600=multiple_assign_var16->v1;
                Err_601=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_601)?(puts(Err_601),exit(0)):(0));
                come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_601 = come_decrement_ref_count2(Err_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value437=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c16_602=multiple_assign_var17->v1;
        Err_603=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_603)?(puts(Err_603),exit(0)):(0));
        come_call_finalizer3(__right_value437,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_603 = come_decrement_ref_count2(Err_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_604=info->p;
    buf_605=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_604-head_583+1)), "05function.c", 752, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_605,head_583,tail_604-head_583);
    buf_605[tail_604-head_583]=0;
    skip_spaces_and_lf(info);
    __result_obj__337 = come_increment_ref_count(((char*)(__right_value439=__builtin_string(buf_605))));
    (buf_605 = come_decrement_ref_count2(buf_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__337 = come_decrement_ref_count2(__result_obj__337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__337;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_606;
char* p3_607;
int i_608;
    terminated_606=(_Bool)0;
    p3_607=p;
    for(    i_608=0;    i_608<strlen(p2);    i_608++    ){
        if(        *p3_607==0) {
            terminated_606=(_Bool)1;
            break;
        }
        p3_607++;
    }
    return !terminated_606&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* asm_fun_name_609;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* result_610;
char* head_611;
int brace_num_612;
char* tail_613;
char* head_614;
int brace_num_615;
char* tail_616;
char* head_617;
char* tail_618;
char* head_619;
char* tail_620;
int len_621;
_Bool in_dquort_622;
int brace_num_623;
char* head_624;
char* tail_625;
char* head_626;
char* tail_627;
char* head_628;
char* tail_629;
char* head_630;
int nest_631;
char* tail_632;
char* head_633;
int nest_634;
char* tail_635;
char* head_636;
int nest_637;
char* tail_638;
char* head_639;
int nest_640;
char* tail_641;
char* head_642;
int nest_643;
char* tail_644;
char* head_645;
char* tail_646;
char* head_647;
char* tail_648;
char* head_649;
char* tail_650;
char* head_651;
char* tail_652;
char* head_653;
char* tail_654;
char* head_655;
int brace_num_656;
char* tail_657;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__341;
    asm_fun_name_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 777, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_611=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_612=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_612++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_612--;
                        if(                        brace_num_612==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_613=info->p;
            buffer_append(result_610,head_611,tail_613-head_611);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_614=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_615=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_615++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_615--;
                        if(                        brace_num_615==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_616=info->p;
            buffer_append(result_610,head_614,tail_616-head_614);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_617=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_618=info->p;
            buffer_append(result_610,head_617,tail_618-head_617);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_619=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_620=info->p;
            buffer_append(result_610,head_619,tail_620-head_619);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_621=0;
            if(            *info->p==40) {
                in_dquort_622=(_Bool)0;
                brace_num_623=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_622=!in_dquort_622;
                    }
                    else if(                    in_dquort_622) {
                        buffer_append_char(asm_fun_name_609,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_623++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_623--;
                        if(                        brace_num_623==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_624=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_625=info->p;
            buffer_append(result_610,head_624,tail_625-head_624);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_626=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_627=info->p;
            buffer_append(result_610,head_626,tail_627-head_626);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_628=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_629=info->p;
            buffer_append(result_610,head_628,tail_629-head_628);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_630=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_631=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631--;
                        if(                        nest_631==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_632=info->p;
            buffer_append(result_610,head_630,tail_632-head_630);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_633=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_634=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634--;
                        if(                        nest_634==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_635=info->p;
            buffer_append(result_610,head_633,tail_635-head_633);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_636=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_637=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_637++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_637--;
                        if(                        nest_637==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_638=info->p;
            buffer_append(result_610,head_636,tail_638-head_636);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_639=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_640=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_640++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_640--;
                        if(                        nest_640==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_641=info->p;
            buffer_append(result_610,head_639,tail_641-head_639);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_642=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_643=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_643++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_643--;
                        if(                        nest_643==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_644=info->p;
            buffer_append(result_610,head_642,tail_644-head_642);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_645=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_646=info->p;
            buffer_append(result_610,head_645,tail_646-head_645);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_647=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_648=info->p;
            buffer_append(result_610,head_647,tail_648-head_647);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_649=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_650=info->p;
            buffer_append(result_610,head_649,tail_650-head_649);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_651=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_652=info->p;
            buffer_append(result_610,head_651,tail_652-head_651);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_653=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_654=info->p;
            buffer_append(result_610,head_653,tail_654-head_653);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_655=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_656=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_656++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_656--;
                        if(                        brace_num_656==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_657=info->p;
            buffer_append(result_610,head_655,tail_657-head_655);
        }
        else {
            break;
        }
    }
    __result_obj__341 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value450=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1192, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_609)),(char*)come_increment_ref_count(buffer_to_string(result_610))))));
    come_call_finalizer3(asm_fun_name_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value450,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__341,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__338;
void* __right_value446 = (void*)0;
struct tuple2$2char$phchar$ph* result_658;
void* __right_value447 = (void*)0;
char* __dec_obj106;
void* __right_value448 = (void*)0;
char* __dec_obj107;
struct tuple2$2char$phchar$ph* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__338,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__338;
    }
    result_658=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj106=result_658->v1;
        result_658->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj107=result_658->v2;
        result_658->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__339 = come_increment_ref_count(result_658);
    come_call_finalizer3(result_658,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_659;
    result_659=0;
    result_659+=int_get_hash_key(((int)self->v1));
    result_659+=int_get_hash_key(((int)self->v2));
    return result_659;
}

static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj108;
char* __dec_obj109;
struct tuple2$2char$phchar$ph* __result_obj__340;
    __dec_obj108=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj109=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__340 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__340,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__340;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* asm_fun_name_660;
void* __right_value453 = (void*)0;
char* attribute_661;
int nest_662;
int nest_663;
int nest_664;
int nest_665;
int nest_666;
void* __right_value454 = (void*)0;
char* __dec_obj110;
int len_667;
_Bool in_dquort_668;
int brace_num_669;
int brace_num_670;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__342;
    asm_fun_name_660=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1197, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_661=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_662=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_662++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_662--;
                        if(                        nest_662==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_663=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_663++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_663--;
                        if(                        nest_663==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_664=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_664++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_664--;
                        if(                        nest_664==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_665=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_665++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_665--;
                        if(                        nest_665==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_666=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_666++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_666--;
                        if(                        nest_666==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj110=attribute_661;
            attribute_661=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_667=0;
            if(            *info->p==40) {
                in_dquort_668=(_Bool)0;
                brace_num_669=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_668=!in_dquort_668;
                    }
                    else if(                    in_dquort_668) {
                        buffer_append_char(asm_fun_name_660,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_669++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_669--;
                        if(                        brace_num_669==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_670=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_670++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_670--;
                        if(                        brace_num_670==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__342 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value457=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1466, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_660)),(char*)come_increment_ref_count(attribute_661)))));
    come_call_finalizer3(asm_fun_name_660,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_661 = come_decrement_ref_count2(attribute_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value457,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value458 = (void*)0;
char* __dec_obj111;
char* head_671;
int head_sline_672;
void* __right_value459 = (void*)0;
char* buf_673;
void* __right_value460 = (void*)0;
struct sNode* node_674;
_Bool Value_675;
    while(*info->p) {
        __dec_obj111=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_671=info->p;
        head_sline_672=info->sline;
        buf_673=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_673 = come_decrement_ref_count2(buf_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_674=(struct sNode*)come_increment_ref_count(top_level_v99(buf_673,head_671,head_sline_672,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_674!=((void*)0)) {
            Value_675=node_compile(node_674,info);
            if(            !Value_675) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_673 = come_decrement_ref_count2(buf_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_673 = come_decrement_ref_count2(buf_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value461 = (void*)0;
char* name_676;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* result_type_677;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __list_values1___678[9];
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1sType$ph* param_types_689;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __list_values2___690[9];
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* param_names_694;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1char$ph* param_default_parametors_695;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* main_fun_699;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* name_700;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* result_type_701;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __list_values3___702[1];
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sType$ph* param_types_703;
void* __right_value546 = (void*)0;
char* __list_values4___704[1];
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1char$ph* param_names_705;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1char$ph* param_default_parametors_706;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sFun* main_fun_707;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
char* name_708;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sType* result_type_709;
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
struct sType* __list_values5___710[7];
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1sType$ph* param_types_711;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
char* __list_values6___712[7];
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1char$ph* param_names_713;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1char$ph* param_default_parametors_714;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sFun* main_fun_715;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* name_716;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* result_type_717;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
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
struct sType* __list_values7___718[5];
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1sType$ph* param_types_719;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
char* __list_values8___720[5];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1char$ph* param_names_721;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1char$ph* param_default_parametors_722;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sFun* main_fun_723;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* name_724;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sType* result_type_725;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* __list_values9___726[1];
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1sType$ph* param_types_727;
void* __right_value643 = (void*)0;
char* __list_values10___728[1];
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1char$ph* param_names_729;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1char$ph* param_default_parametors_730;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sFun* main_fun_731;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* name_732;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* result_type_733;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __list_values11___734[4];
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sType$ph* param_types_735;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
char* __list_values12___736[4];
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1char$ph* param_names_737;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1char$ph* param_default_parametors_738;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sFun* main_fun_739;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
char* name_740;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sType* result_type_741;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* __list_values13___742[3];
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct list$1sType$ph* param_types_743;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
char* __list_values14___744[3];
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1char$ph* param_names_745;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1char$ph* param_default_parametors_746;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* main_fun_747;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
char* name_748;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sType* result_type_749;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* __list_values15___750[1];
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1sType$ph* param_types_751;
void* __right_value723 = (void*)0;
char* __list_values16___752[1];
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1char$ph* param_names_753;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct list$1char$ph* param_default_parametors_754;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sFun* main_fun_755;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
char* name_756;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sType* result_type_757;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sType* __list_values17___758[3];
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct list$1sType$ph* param_types_759;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
char* __list_values18___760[3];
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1char$ph* param_names_761;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1char$ph* param_default_parametors_762;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sFun* main_fun_763;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
char* name_764;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sType* result_type_765;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1void$ph* param_types_766;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1char$ph* param_names_767;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1char$ph* param_default_parametors_768;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sFun* main_fun_769;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
char* name_770;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sType* result_type_771;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* __list_values19___772[4];
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1sType$ph* param_types_773;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
char* __list_values20___774[4];
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct list$1char$ph* param_names_775;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct list$1char$ph* param_default_parametors_776;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sFun* main_fun_777;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
char* name_778;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sType* result_type_779;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1void$ph* param_types_780;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1char$ph* param_names_781;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct list$1char$ph* param_default_parametors_782;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sFun* fun_783;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
char* name_784;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sType* result_type_785;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1void$ph* param_types_786;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1char$ph* param_names_787;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct list$1char$ph* param_default_parametors_788;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sFun* fun_789;
void* __right_value835 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_676=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_677=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_689=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___678[0]=((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___678[1]=((struct sType*)(__right_value470=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___678[2]=((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___678[3]=((struct sType*)(__right_value476=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___678[4]=((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___678[5]=((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___678[6]=((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___678[7]=((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___678[8]=((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___678)));
        come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value470,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value476,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_694=(struct list$1char$ph*)come_increment_ref_count((__list_values2___690[0]=((char*)(__right_value498=__builtin_string("count"))),
__list_values2___690[1]=((char*)(__right_value499=__builtin_string("size"))),
__list_values2___690[2]=((char*)(__right_value500=__builtin_string("sname"))),
__list_values2___690[3]=((char*)(__right_value501=__builtin_string("sline"))),
__list_values2___690[4]=((char*)(__right_value502=__builtin_string("class_name"))),
__list_values2___690[5]=((char*)(__right_value503=__builtin_string("finalizer_fun"))),
__list_values2___690[6]=((char*)(__right_value504=__builtin_string("cloner_fun"))),
__list_values2___690[7]=((char*)(__right_value505=__builtin_string("get_hash_key_fun"))),
__list_values2___690[8]=((char*)(__right_value506=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___690)));
        (__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_695=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_695,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_695,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_695,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_695,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_695,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_699=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1531, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_676),(struct sType*)come_increment_ref_count(result_type_677),(struct list$1sType$ph*)come_increment_ref_count(param_types_689),(struct list$1char$ph*)come_increment_ref_count(param_names_694),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_695),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_676)),(struct sFun*)come_increment_ref_count(main_fun_699));
        (name_676 = come_decrement_ref_count2(name_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_689,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_694,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_695,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_699,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_700=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_701=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_703=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___702[0]=((struct sType*)(__right_value543=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1541, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1541, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___702)));
        come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_705=(struct list$1char$ph*)come_increment_ref_count((__list_values4___704[0]=((char*)(__right_value546=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1542, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___704)));
        (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_706=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1543, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_707=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_700),(struct sType*)come_increment_ref_count(result_type_701),(struct list$1sType$ph*)come_increment_ref_count(param_types_703),(struct list$1char$ph*)come_increment_ref_count(param_names_705),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_706),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_700)),(struct sFun*)come_increment_ref_count(main_fun_707));
        (name_700 = come_decrement_ref_count2(name_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_703,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_705,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_706,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_707,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_708=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_709=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_711=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___710[0]=((struct sType*)(__right_value562=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___710[1]=((struct sType*)(__right_value565=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___710[2]=((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___710[3]=((struct sType*)(__right_value571=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___710[4]=((struct sType*)(__right_value574=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___710[5]=((struct sType*)(__right_value577=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___710[6]=((struct sType*)(__right_value580=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1554, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___710)));
        come_call_finalizer3(__right_value562,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value565,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_713=(struct list$1char$ph*)come_increment_ref_count((__list_values6___712[0]=((char*)(__right_value583=__builtin_string("fun"))),
__list_values6___712[1]=((char*)(__right_value584=__builtin_string("mem"))),
__list_values6___712[2]=((char*)(__right_value585=__builtin_string("protocol_fun"))),
__list_values6___712[3]=((char*)(__right_value586=__builtin_string("protocol_obj"))),
__list_values6___712[4]=((char*)(__right_value587=__builtin_string("call_finalizer_only"))),
__list_values6___712[5]=((char*)(__right_value588=__builtin_string("no_decrement"))),
__list_values6___712[6]=((char*)(__right_value589=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___712)));
        (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_714=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1556, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_715=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1557, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_708),(struct sType*)come_increment_ref_count(result_type_709),(struct list$1sType$ph*)come_increment_ref_count(param_types_711),(struct list$1char$ph*)come_increment_ref_count(param_names_713),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_714),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_708)),(struct sFun*)come_increment_ref_count(main_fun_715));
        (name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_711,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_713,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_714,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_715,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_716=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_717=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_719=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___718[0]=((struct sType*)(__right_value605=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___718[1]=((struct sType*)(__right_value608=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___718[2]=((struct sType*)(__right_value611=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___718[3]=((struct sType*)(__right_value614=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
__list_values7___718[4]=((struct sType*)(__right_value617=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1567, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___718)));
        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value611,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value614,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value617,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_721=(struct list$1char$ph*)come_increment_ref_count((__list_values8___720[0]=((char*)(__right_value620=__builtin_string("mem"))),
__list_values8___720[1]=((char*)(__right_value621=__builtin_string("protocol_fun"))),
__list_values8___720[2]=((char*)(__right_value622=__builtin_string("protocol_obj"))),
__list_values8___720[3]=((char*)(__right_value623=__builtin_string("no_decrement"))),
__list_values8___720[4]=((char*)(__right_value624=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___720)));
        (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_722=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1569, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_723=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1570, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_716),(struct sType*)come_increment_ref_count(result_type_717),(struct list$1sType$ph*)come_increment_ref_count(param_types_719),(struct list$1char$ph*)come_increment_ref_count(param_names_721),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_722),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_716)),(struct sFun*)come_increment_ref_count(main_fun_723));
        (name_716 = come_decrement_ref_count2(name_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_719,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_721,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_722,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_723,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_724=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_725=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_727=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___726[0]=((struct sType*)(__right_value640=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1580, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1580, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___726)));
        come_call_finalizer3(__right_value640,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_729=(struct list$1char$ph*)come_increment_ref_count((__list_values10___728[0]=((char*)(__right_value643=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___728)));
        (__right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_730=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1582, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_731=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1583, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_724),(struct sType*)come_increment_ref_count(result_type_725),(struct list$1sType$ph*)come_increment_ref_count(param_types_727),(struct list$1char$ph*)come_increment_ref_count(param_names_729),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_730),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_724)),(struct sFun*)come_increment_ref_count(main_fun_731));
        (name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_727,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_729,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_730,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_731,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_732=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_733=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_735=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___734[0]=((struct sType*)(__right_value659=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values11___734[1]=((struct sType*)(__right_value662=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values11___734[2]=((struct sType*)(__right_value665=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values11___734[3]=((struct sType*)(__right_value668=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1593, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___734)));
        come_call_finalizer3(__right_value659,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value662,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value665,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value668,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_737=(struct list$1char$ph*)come_increment_ref_count((__list_values12___736[0]=((char*)(__right_value671=__builtin_string("block"))),
__list_values12___736[1]=((char*)(__right_value672=__builtin_string("sname"))),
__list_values12___736[2]=((char*)(__right_value673=__builtin_string("sline"))),
__list_values12___736[3]=((char*)(__right_value674=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___736)));
        (__right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_738=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1595, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_738,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_738,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_738,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_738,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_739=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_732),(struct sType*)come_increment_ref_count(result_type_733),(struct list$1sType$ph*)come_increment_ref_count(param_types_735),(struct list$1char$ph*)come_increment_ref_count(param_names_737),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_738),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_732)),(struct sFun*)come_increment_ref_count(main_fun_739));
        (name_732 = come_decrement_ref_count2(name_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_735,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_737,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_738,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_739,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_740=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_741=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_743=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___742[0]=((struct sType*)(__right_value693=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values13___742[1]=((struct sType*)(__right_value696=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values13___742[2]=((struct sType*)(__right_value699=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1610, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___742)));
        come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value696,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value699,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_745=(struct list$1char$ph*)come_increment_ref_count((__list_values14___744[0]=((char*)(__right_value702=__builtin_string("b"))),
__list_values14___744[1]=((char*)(__right_value703=__builtin_string("c"))),
__list_values14___744[2]=((char*)(__right_value704=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1611, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___744)));
        (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_746=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1612, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_747=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1613, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_740),(struct sType*)come_increment_ref_count(result_type_741),(struct list$1sType$ph*)come_increment_ref_count(param_types_743),(struct list$1char$ph*)come_increment_ref_count(param_names_745),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_746),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_740)),(struct sFun*)come_increment_ref_count(main_fun_747));
        (name_740 = come_decrement_ref_count2(name_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_741,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_743,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_745,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_746,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_747,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_748=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_749=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        param_types_751=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___750[0]=((struct sType*)(__right_value720=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1623, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1623, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___750)));
        come_call_finalizer3(__right_value720,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_753=(struct list$1char$ph*)come_increment_ref_count((__list_values16___752[0]=((char*)(__right_value723=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___752)));
        (__right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_754=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1625, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_755=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1626, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_748),(struct sType*)come_increment_ref_count(result_type_749),(struct list$1sType$ph*)come_increment_ref_count(param_types_751),(struct list$1char$ph*)come_increment_ref_count(param_names_753),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_754),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_748)),(struct sFun*)come_increment_ref_count(main_fun_755));
        (name_748 = come_decrement_ref_count2(name_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_749,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_751,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_753,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_754,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_755,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_756=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_757=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_759=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___758[0]=((struct sType*)(__right_value739=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___758[1]=((struct sType*)(__right_value742=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___758[2]=((struct sType*)(__right_value745=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1636, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___758)));
        come_call_finalizer3(__right_value739,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value742,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value745,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_761=(struct list$1char$ph*)come_increment_ref_count((__list_values18___760[0]=((char*)(__right_value748=xsprintf("come_malloc"))),
__list_values18___760[1]=((char*)(__right_value749=xsprintf("come_debug"))),
__list_values18___760[2]=((char*)(__right_value750=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___760)));
        (__right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_762=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1638, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_762,((void*)0));
        main_fun_763=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1640, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_756),(struct sType*)come_increment_ref_count(result_type_757),(struct list$1sType$ph*)come_increment_ref_count(param_types_759),(struct list$1char$ph*)come_increment_ref_count(param_names_761),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_762),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_756)),(struct sFun*)come_increment_ref_count(main_fun_763));
        (name_756 = come_decrement_ref_count2(name_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_757,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_759,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_761,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_762,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_763,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_764=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_765=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_766=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1650, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_767=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1651, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_768=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1652, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_769=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_764),(struct sType*)come_increment_ref_count(result_type_765),(struct list$1void$ph*)come_increment_ref_count(param_types_766),(struct list$1char$ph*)come_increment_ref_count(param_names_767),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_768),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_764)),(struct sFun*)come_increment_ref_count(main_fun_769));
        (name_764 = come_decrement_ref_count2(name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_766,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_767,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_768,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_769,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_770=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_771=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_773=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___772[0]=((struct sType*)(__right_value781=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values19___772[1]=((struct sType*)(__right_value784=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values19___772[2]=((struct sType*)(__right_value787=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values19___772[3]=((struct sType*)(__right_value790=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1663, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___772)));
        come_call_finalizer3(__right_value781,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value784,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value787,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value790,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_775=(struct list$1char$ph*)come_increment_ref_count((__list_values20___774[0]=((char*)(__right_value793=__builtin_string("mem"))),
__list_values20___774[1]=((char*)(__right_value794=__builtin_string("sname"))),
__list_values20___774[2]=((char*)(__right_value795=__builtin_string("sline"))),
__list_values20___774[3]=((char*)(__right_value796=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___774)));
        (__right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_776=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1665, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_777=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1666, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_770),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_773),(struct list$1char$ph*)come_increment_ref_count(param_names_775),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_776),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_770)),(struct sFun*)come_increment_ref_count(main_fun_777));
        (name_770 = come_decrement_ref_count2(name_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_771,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_773,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_775,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_776,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_777,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_778=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_779=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_780=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1676, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_781=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_782=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1678, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_783=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1679, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_778),(struct sType*)come_increment_ref_count(result_type_779),(struct list$1void$ph*)come_increment_ref_count(param_types_780),(struct list$1char$ph*)come_increment_ref_count(param_names_781),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_782),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_778)),(struct sFun*)come_increment_ref_count(fun_783));
        (name_778 = come_decrement_ref_count2(name_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_779,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_780,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_781,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_782,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_783,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_784=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_785=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_786=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1689, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_787=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_788=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1691, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_789=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1692, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_784),(struct sType*)come_increment_ref_count(result_type_785),(struct list$1void$ph*)come_increment_ref_count(param_types_786),(struct list$1char$ph*)come_increment_ref_count(param_names_787),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_788),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_784)),(struct sFun*)come_increment_ref_count(fun_789));
        (name_784 = come_decrement_ref_count2(name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_785,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_786,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_787,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_788,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_789,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_679;
struct list$1sType$ph* __result_obj__344;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_679=0;    i_679<num_value;    i_679++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_679]));
    }
    __result_obj__344 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__344,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value492 = (void*)0;
struct list_item$1sType$ph* litem_680;
struct sType* __dec_obj112;
void* __right_value493 = (void*)0;
struct list_item$1sType$ph* litem_681;
struct sType* __dec_obj113;
void* __right_value494 = (void*)0;
struct list_item$1sType$ph* litem_682;
struct sType* __dec_obj114;
struct list$1sType$ph* __result_obj__343;
    if(    self->len==0) {
        litem_680=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value492=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_680->prev=((void*)0);
        litem_680->next=((void*)0);
        __dec_obj112=litem_680->item;
        litem_680->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_680;
        self->head=litem_680;
    }
    else if(    self->len==1) {
        litem_681=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value493=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_681->prev=self->head;
        litem_681->next=((void*)0);
        __dec_obj113=litem_681->item;
        litem_681->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_681;
        self->head->next=litem_681;
    }
    else {
        litem_682=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value494=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_682->prev=self->tail;
        litem_682->next=((void*)0);
        __dec_obj114=litem_682->item;
        litem_682->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_682;
        self->tail=litem_682;
    }
    self->len++;
    __result_obj__343 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__343;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_683;
struct list_item$1sType$ph* prev_it_684;
    it_683=self->head;
    while(it_683!=((void*)0)) {
        prev_it_684=it_683;
        it_683=it_683->next;
        come_call_finalizer3(prev_it_684,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_685;
struct list_item$1sType$ph* prev_it_686;
    it_685=self->head;
    while(it_685!=((void*)0)) {
        prev_it_686=it_685;
        it_685=it_685->next;
        come_call_finalizer3(prev_it_686,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__345;
void* __right_value495 = (void*)0;
struct list$1sType$ph* result_687;
struct list$1sType$ph* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__345,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__345;
    }
    result_687=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_687->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_687->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_687->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_687->it=self->it;
    }
    __result_obj__346 = come_increment_ref_count(result_687);
    come_call_finalizer3(result_687,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_688;
    result_688=0;
    result_688+=int_get_hash_key(((int)self->head));
    result_688+=int_get_hash_key(((int)self->tail));
    result_688+=int_get_hash_key(((int)self->len));
    result_688+=int_get_hash_key(((int)self->it));
    return result_688;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    if(    !list_item$1sType$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_691;
struct list$1char$ph* __result_obj__347;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_691=0;    i_691<num_value;    i_691++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_691]));
    }
    __result_obj__347 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__347,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__348;
void* __right_value507 = (void*)0;
struct list$1char$ph* result_692;
struct list$1char$ph* __result_obj__349;
    if(    self==(void*)0) {
        __result_obj__348 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__348,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__348;
    }
    result_692=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_692->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_692->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_692->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_692->it=self->it;
    }
    __result_obj__349 = come_increment_ref_count(result_692);
    come_call_finalizer3(result_692,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_693;
    result_693=0;
    result_693+=int_get_hash_key(((int)self->head));
    result_693+=int_get_hash_key(((int)self->tail));
    result_693+=int_get_hash_key(((int)self->len));
    result_693+=int_get_hash_key(((int)self->it));
    return result_693;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    if(    !list_item$1char$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__350;
void* __right_value515 = (void*)0;
struct sFun* result_697;
void* __right_value516 = (void*)0;
char* __dec_obj115;
void* __right_value517 = (void*)0;
struct sType* __dec_obj116;
void* __right_value518 = (void*)0;
struct list$1void$ph* __dec_obj117;
void* __right_value519 = (void*)0;
struct list$1char$ph* __dec_obj118;
void* __right_value520 = (void*)0;
struct list$1char$ph* __dec_obj119;
void* __right_value521 = (void*)0;
struct sType* __dec_obj120;
void* __right_value525 = (void*)0;
struct sBlock* __dec_obj123;
void* __right_value526 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value527 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value528 = (void*)0;
struct buffer* __dec_obj126;
void* __right_value529 = (void*)0;
struct buffer* __dec_obj127;
void* __right_value530 = (void*)0;
char* __dec_obj128;
void* __right_value531 = (void*)0;
char* __dec_obj129;
struct sFun* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__350 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__350,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__350;
    }
    result_697=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_697->mName;
        result_697->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj116=result_697->mResultType;
        result_697->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj117=result_697->mParamTypes;
        result_697->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj117,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj118=result_697->mParamNames;
        result_697->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj118,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj119=result_697->mParamDefaultParametors;
        result_697->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj120=result_697->mLambdaType;
        result_697->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj123=result_697->mBlock;
        result_697->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj124=result_697->mSource;
        result_697->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj125=result_697->mSourceHead;
        result_697->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj126=result_697->mSourceHead2;
        result_697->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj127=result_697->mSourceDefer;
        result_697->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_697->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_697->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_697->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_697->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_697->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_697->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_697->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj128=result_697->mAttribute;
        result_697->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj129=result_697->mFunAttribute;
        result_697->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__353 = come_increment_ref_count(result_697);
    come_call_finalizer3(result_697,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__353,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_696;
    result_696=0;
    result_696+=int_get_hash_key(((int)self->mName));
    result_696+=int_get_hash_key(((int)self->mResultType));
    result_696+=int_get_hash_key(((int)self->mParamTypes));
    result_696+=int_get_hash_key(((int)self->mParamNames));
    result_696+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_696+=int_get_hash_key(((int)self->mLambdaType));
    result_696+=int_get_hash_key(((int)self->mBlock));
    result_696+=int_get_hash_key(((int)self->mSource));
    result_696+=int_get_hash_key(((int)self->mSourceHead));
    result_696+=int_get_hash_key(((int)self->mSourceHead2));
    result_696+=int_get_hash_key(((int)self->mSourceDefer));
    result_696+=int_get_hash_key(((int)self->mStatic));
    result_696+=int_get_hash_key(((int)self->mInline));
    result_696+=int_get_hash_key(((int)self->mUniq));
    result_696+=int_get_hash_key(((int)self->mGenerate));
    result_696+=int_get_hash_key(((int)self->mExternal));
    result_696+=int_get_hash_key(((int)self->mVarArgs));
    result_696+=int_get_hash_key(((int)self->mNoResultType));
    result_696+=int_get_hash_key(((int)self->mAttribute));
    result_696+=int_get_hash_key(((int)self->mFunAttribute));
    return result_696;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph$p_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__351;
void* __right_value522 = (void*)0;
struct sBlock* result_698;
void* __right_value523 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
void* __right_value524 = (void*)0;
struct sVarTable* __dec_obj122;
struct sBlock* __result_obj__352;
    if(    self==(void*)0) {
        __result_obj__351 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__351,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__351;
    }
    result_698=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj121=result_698->mNodes;
        result_698->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj122=result_698->mVarTable;
        result_698->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_698->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__352 = come_increment_ref_count(result_698);
    come_call_finalizer3(result_698,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__352,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_790;
_Bool is_type_name_flag_791;
int sline_792;
_Bool define_struct_nobody_793;
char* p_794;
int sline_795;
void* __right_value836 = (void*)0;
char* word_796;
_Bool define_function_pointer_result_function_797;
_Bool define_variable_between_brace_798;
char* p_799;
void* __right_value837 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_800=0;
char* fun_name_801=0;
_Bool err_802=0;
void* __right_value838 = (void*)0;
char* word_803;
_Bool define_function_flag_804;
char* p_805;
void* __right_value839 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_806=0;
char* fun_name_807=0;
_Bool err_808=0;
char* word_809;
void* __right_value840 = (void*)0;
char* __dec_obj130;
void* __right_value841 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
void* __right_value842 = (void*)0;
char* __dec_obj133;
_Bool define_variable_810;
char* p_811;
void* __right_value843 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_812=0;
char* fun_name_813=0;
_Bool err_814=0;
void* __right_value844 = (void*)0;
char* word_815;
void* __right_value845 = (void*)0;
char* word_816;
char* p_817;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
char* word_818;
void* __right_value849 = (void*)0;
char* __dec_obj134;
void* __right_value850 = (void*)0;
char* word_819;
void* __right_value851 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_822=0;
char* Err_823=0;
void* __right_value852 = (void*)0;
char* word_824;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct sNode* node_825;
struct sNode* __result_obj__355;
void* __right_value855 = (void*)0;
struct sNode* __result_obj__356;
char* header_head_826;
void* __right_value856 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_827=0;
char* fun_name_828=0;
_Bool err_829=0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1void$ph* param_types_830;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1char$ph* param_names_831;
void* __right_value861 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_832=0;
char* param_name_833=0;
_Bool err_834=0;
void* __right_value862 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_835=0;
char* Err_836=0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_841=0;
char* Err_842=0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1void$ph* param_types2_843;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct list$1char$ph* param_names2_844;
void* __right_value873 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_845=0;
char* param_name_846=0;
_Bool err_847=0;
void* __right_value874 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_848=0;
char* Err_849=0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_851=0;
char* Err_852=0;
char* header_tail_853;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sType* result_type2_854;
struct sType* __dec_obj138;
void* __right_value881 = (void*)0;
struct list$1void$ph* __dec_obj139;
void* __right_value882 = (void*)0;
struct list$1char$ph* __dec_obj140;
_Bool var_args_855;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1char$ph* param_default_parametors_856;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sFun* fun_857;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct sFun* fun2_858;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value898 = (void*)0;
struct sNode* result_859;
struct sNode* __result_obj__360;
void* __right_value899 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_861=0;
char* Err_862=0;
void* __right_value900 = (void*)0;
struct sNode* node_863;
struct sNode* __result_obj__361;
void* __right_value901 = (void*)0;
struct sNode* node_864;
struct sNode* __result_obj__362;
void* __right_value902 = (void*)0;
struct sNode* node_865;
char* source_tail_866;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct buffer* header_867;
struct sNode* __result_obj__363;
void* __right_value905 = (void*)0;
char* buf2_868;
void* __right_value906 = (void*)0;
struct sNode* __result_obj__364;
    info->in_top_level=(_Bool)1;
    source_head_790=info->p;
    is_type_name_flag_791=is_type_name(buf,info);
    sline_792=info->sline;
    define_struct_nobody_793=(_Bool)0;
    {
        p_794=info->p;
        sline_795=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_796=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_793=(_Bool)1;
                }
                (word_796 = come_decrement_ref_count2(word_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_795;
    }
    define_function_pointer_result_function_797=(_Bool)0;
    define_variable_between_brace_798=(_Bool)0;
    if(    is_type_name_flag_791) {
        p_799=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value837=backtrace_parse_type((_Bool)0,info)));
            result_type_800=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_801=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_802=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value837,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_797=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_803=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_803,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_798=(_Bool)1;
                            }
                        }
                        (word_803 = come_decrement_ref_count2(word_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_801 = come_decrement_ref_count2(fun_name_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_792;
    }
    define_function_flag_804=(_Bool)0;
    if(    is_type_name_flag_791&&!define_function_pointer_result_function_797&&charp_operator_not_equals(buf,"__typeof__")) {
        p_805=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value839=backtrace_parse_type((_Bool)0,info)));
            result_type_806=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_807=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_808=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value839,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_806,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_807 = come_decrement_ref_count2(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_809=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj130=word_809;
                word_809=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_809,"extern")) {
                    __dec_obj131=word_809;
                    word_809=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj132=word_809;
                word_809=((void*)0);
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_809) {
                if(                is_type_name(word_809,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj133=word_809;
                        word_809=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_809)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_791) {
                        define_function_flag_804=(_Bool)1;
                    }
                }
            }
            (word_809 = come_decrement_ref_count2(word_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_805;
        info->sline=sline_792;
    }
    define_variable_810=(_Bool)1;
    if(    is_type_name_flag_791&&!define_function_pointer_result_function_797) {
        p_811=info->p;
        info->p=head;
        if(        !is_type_name_flag_791) {
            define_variable_810=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value843=backtrace_parse_type((_Bool)0,info)));
            result_type_812=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_813=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_814=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value843,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_815=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_810=(_Bool)1;
                            }
                        }
                        (word_815 = come_decrement_ref_count2(word_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_816=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_816,info)&&*info->p!=40) {
                            define_variable_810=(_Bool)1;
                        }
                    }
                    (word_816 = come_decrement_ref_count2(word_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_813 = come_decrement_ref_count2(fun_name_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_810=(_Bool)0;
        }
        else if(        define_variable_810) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_810=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_810=(_Bool)0;
            }
        }
        info->p=p_811;
        info->sline=sline_792;
    }
    else {
        define_variable_810=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_797) {
        p_817=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value846=parse_struct_attribute(info)));
            (__right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value847=parse_word(info)));
                (__right_value847 = come_decrement_ref_count2(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_818=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj134=word_818;
                        word_818=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_818,"extends")) {
                            define_variable_810=(_Bool)0;
                        }
                    }
                    (word_818 = come_decrement_ref_count2(word_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_810=(_Bool)0;
        }
        else if(        define_variable_810) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_810=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_810=(_Bool)0;
            }
        }
        info->p=p_817;
        info->sline=sline_792;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_819=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph$p_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value851=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_822=multiple_assign_var21->v1;
                    Err_823=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_823)?(puts(Err_823),exit(0)):(0));
                    come_call_finalizer3(__right_value851,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_823 = come_decrement_ref_count2(Err_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_824=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_824)));
                    (word_824 = come_decrement_ref_count2(word_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_825=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__355 = come_increment_ref_count(node_825);
            ((node_825) ? node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_819 = come_decrement_ref_count2(word_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count2(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__355;
            ((node_825) ? node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_819 = come_decrement_ref_count2(word_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_793) {
    }
    else if(    define_variable_between_brace_798) {
        info->p=head;
        info->sline=sline_792;
        __result_obj__356 = come_increment_ref_count(((struct sNode*)(__right_value855=parse_global_variable(info))));
        ((__right_value855) ? __right_value855 = come_decrement_ref_count2(__right_value855, ((struct sNode*)__right_value855)->finalize, ((struct sNode*)__right_value855)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count2(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__356;
    }
    else if(    define_function_pointer_result_function_797) {
        header_head_826=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value856=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_827=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_828=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_829=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value856,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_830=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2016, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            param_names_831=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2017, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value861=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_832=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_833=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_834=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value861,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_834) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value862=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_835=multiple_assign_var24->v1;
                        Err_836=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_836)?(puts(Err_836),exit(0)):(0));
                        come_call_finalizer3(__right_value862,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_836 = come_decrement_ref_count2(Err_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1void$ph$p_push_back(param_types_830,(struct sType*)come_increment_ref_count(param_type_832));
                    static int num_function_pointer_result_var_name_a_840=0;
                    list$1char$ph$p_push_back(param_names_831,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_840)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value867=parse_word(info)));
                        (__right_value867 = come_decrement_ref_count2(__right_value867, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_832,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_833 = come_decrement_ref_count2(param_name_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value868=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_841=multiple_assign_var25->v1;
                        Err_842=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_842)?(puts(Err_842),exit(0)):(0));
                        come_call_finalizer3(__right_value868,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_842 = come_decrement_ref_count2(Err_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_832,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_833 = come_decrement_ref_count2(param_name_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_843=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2063, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
                param_names2_844=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2064, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value873=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_845=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_846=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_847=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value873,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_847) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value874=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_848=multiple_assign_var27->v1;
                            Err_849=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_849)?(puts(Err_849),exit(0)):(0));
                            come_call_finalizer3(__right_value874,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_849 = come_decrement_ref_count2(Err_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1void$ph$p_push_back(param_types2_843,(struct sType*)come_increment_ref_count(param_type_845));
                        static int num_function_pointer_result_var_name_b_850=0;
                        list$1char$ph$p_push_back(param_names2_844,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_850)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value876=parse_word(info)));
                            (__right_value876 = come_decrement_ref_count2(__right_value876, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_846 = come_decrement_ref_count2(param_name_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value877=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_851=multiple_assign_var28->v1;
                            Err_852=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_852)?(puts(Err_852),exit(0)):(0));
                            come_call_finalizer3(__right_value877,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_852 = come_decrement_ref_count2(Err_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_846 = come_decrement_ref_count2(param_name_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_853=info->p;
                result_type2_854=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2106, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj138=result_type2_854->mResultType;
                result_type2_854->mResultType=(struct sType*)come_increment_ref_count(result_type_827);
                come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj139=result_type2_854->mParamTypes;
                result_type2_854->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types2_843));
                come_call_finalizer3(__dec_obj139,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj140=result_type2_854->mParamNames;
                result_type2_854->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_844));
                come_call_finalizer3(__dec_obj140,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_854->mVarArgs=(_Bool)0;
                result_type2_854->mStatic=(_Bool)0;
                var_args_855=(_Bool)0;
                param_default_parametors_856=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2116, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_857=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_828)),(struct sType*)come_increment_ref_count(result_type2_854),(struct list$1void$ph*)come_increment_ref_count(param_types_830),(struct list$1char$ph*)come_increment_ref_count(param_names_831),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_856),(_Bool)1,var_args_855,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_858=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value890=__builtin_string(fun_name_828)))));
                (__right_value890 = come_decrement_ref_count2(__right_value890, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_858==((void*)0)||fun2_858->mExternal) {
                    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_828)),(struct sFun*)come_increment_ref_count(fun_857));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2131, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value894=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2131, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_857),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_859=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value894,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__360 = come_increment_ref_count(result_859);
                come_call_finalizer3(param_types2_843,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_844,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_854,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_856,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_857,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_858,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_859) ? result_859 = come_decrement_ref_count2(result_859, ((struct sNode*)result_859)->finalize, ((struct sNode*)result_859)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_830,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_831,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_827,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_828 = come_decrement_ref_count2(fun_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count2(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__360;
                come_call_finalizer3(param_types2_843,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_844,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_854,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_856,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_857,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_858,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_859) ? result_859 = come_decrement_ref_count2(result_859, ((struct sNode*)result_859)->finalize, ((struct sNode*)result_859)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value899=err_msg(info,"require (")));
                come_exception_var_c22_861=multiple_assign_var29->v1;
                Err_862=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_862)?(puts(Err_862),exit(0)):(0));
                come_call_finalizer3(__right_value899,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_862 = come_decrement_ref_count2(Err_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_830,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_831,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_827,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_828 = come_decrement_ref_count2(fun_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_792;
        node_863=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__361 = come_increment_ref_count(node_863);
        ((node_863) ? node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__361) ? __result_obj__361 = come_decrement_ref_count2(__result_obj__361, ((struct sNode*)__result_obj__361)->finalize, ((struct sNode*)__result_obj__361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__361;
        ((node_863) ? node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_804) {
        info->p=head;
        info->sline=sline_792;
        node_864=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__362 = come_increment_ref_count(node_864);
        ((node_864) ? node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count2(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
        ((node_864) ? node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_810) {
        info->p=head;
        info->sline=sline_792;
        node_865=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_866=info->p;
        header_867=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2165, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_867,source_head_790,source_tail_866-source_head_790);
        __result_obj__363 = come_increment_ref_count(node_865);
        ((node_865) ? node_865 = come_decrement_ref_count2(node_865, ((struct sNode*)node_865)->finalize, ((struct sNode*)node_865)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_867,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count2(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__363;
        ((node_865) ? node_865 = come_decrement_ref_count2(node_865, ((struct sNode*)node_865)->finalize, ((struct sNode*)node_865)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_867,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_792;
    buf2_868=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__364 = come_increment_ref_count(((struct sNode*)(__right_value906=top_level_v98(buf2_868,head,head_sline,info))));
    (buf2_868 = come_decrement_ref_count2(buf2_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value906) ? __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count2(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__364;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_820;
struct list_item$1char$ph* prev_it_821;
struct list$1char$ph* __result_obj__354;
    it_820=self->head;
    while(it_820!=((void*)0)) {
        prev_it_821=it_820;
        it_820=it_820->next;
        come_call_finalizer3(prev_it_821,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__354 = self;
    return __result_obj__354;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value863 = (void*)0;
struct list_item$1void$ph* litem_837;
void* __dec_obj135;
void* __right_value864 = (void*)0;
struct list_item$1void$ph* litem_838;
void* __dec_obj136;
void* __right_value865 = (void*)0;
struct list_item$1void$ph* litem_839;
void* __dec_obj137;
struct list$1void$ph* __result_obj__357;
    if(    self->len==0) {
        litem_837=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value863=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1493, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_837->prev=((void*)0);
        litem_837->next=((void*)0);
        __dec_obj135=litem_837->item;
        litem_837->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_837;
        self->head=litem_837;
    }
    else if(    self->len==1) {
        litem_838=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value864=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1503, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_838->prev=self->head;
        litem_838->next=((void*)0);
        __dec_obj136=litem_838->item;
        litem_838->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_838;
        self->head->next=litem_838;
    }
    else {
        litem_839=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value865=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1513, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_839->prev=self->tail;
        litem_839->next=((void*)0);
        __dec_obj137=litem_839->item;
        litem_839->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_839;
        self->tail=litem_839;
    }
    self->len++;
    __result_obj__357 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__357;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__358;
void* __right_value895 = (void*)0;
struct sFunNode* result_860;
void* __right_value896 = (void*)0;
char* __dec_obj141;
void* __right_value897 = (void*)0;
struct sFun* __dec_obj142;
struct sFunNode* __result_obj__359;
    if(    self==(void*)0) {
        __result_obj__358 = (void*)0;
        return __result_obj__358;
    }
    result_860=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_860->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj141=result_860->sname;
        result_860->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj142=result_860->mFun;
        result_860->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj142,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__359 = result_860;
    come_call_finalizer3(result_860,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__359;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_869;
int caller_line_870;
char* caller_sname_871;
_Bool comma_instead_of_semicolon_872;
char* last_code_873;
char* __dec_obj143;
char* last_code2_874;
char* __dec_obj144;
void* __right_value907 = (void*)0;
char* sname_top_875;
int sline_top_876;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sFun* funX_877;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__368;
void* __right_value914 = (void*)0;
struct sType* result_type_880;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct list$1void$ph* param_types_881;
struct list$1void$ph* o2_saved_882;
struct sType* it_883;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sType* param_type_884;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct list$1char$ph* param_names_885;
void* __right_value921 = (void*)0;
struct list$1char$ph* param_default_parametors_886;
char* p_887;
int sline_888;
char* sname_889;
char* head_890;
struct buffer* source_891;
void* __right_value922 = (void*)0;
struct buffer* __dec_obj147;
struct sType* generics_type_saved_892;
void* __right_value923 = (void*)0;
struct sType* __dec_obj148;
struct list$1char$ph* method_generics_type_names_893;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct list$1char$ph* __dec_obj149;
struct list$1char$ph* o2_saved_894;
char* it_895;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct list$1char$ph* __dec_obj150;
char* __dec_obj151;
void* __right_value928 = (void*)0;
struct sBlock* block_896;
struct buffer* __dec_obj152;
char* __dec_obj153;
_Bool var_args_897;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct sFun* fun_898;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value936 = (void*)0;
struct sNode* node_899;
_Bool in_generics_fun_900;
_Bool Value_901;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__369;
struct sType* __dec_obj154;
struct list$1char$ph* __dec_obj155;
void* __right_value940 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__370;
    caller_fun_869=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_870=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_871=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_872=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_873=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_874=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_875=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_876=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_877=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value908=__builtin_string(fun_name)))));
    (__right_value908 = come_decrement_ref_count2(__right_value908, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_877) {
        __result_obj__368 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value913=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2204, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_873 = come_decrement_ref_count2(last_code_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_874 = come_decrement_ref_count2(last_code2_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_875 = come_decrement_ref_count2(sname_top_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value913,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__368,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__368;
    }
    result_type_880=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_881=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2210, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_882=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_883=((struct sType*)list$1void$ph$p_begin((o2_saved_882)));    !list$1void$ph$p_end((o2_saved_882));    it_883=((struct sType*)list$1void$ph$p_next((o2_saved_882)))    ){
        param_type_884=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value917=come_call_cloner(sType_clone, it_883))),generics_type,info));
        come_call_finalizer3(__right_value917,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_881,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_884)));
        come_call_finalizer3(param_type_884,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_882,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_885=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_886=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_887=info->p;
    sline_888=info->sline;
    sname_889=(char*)come_increment_ref_count(info->sname);
    head_890=info->head;
    source_891=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_892=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj148=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_893=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj149=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2238, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_894=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_895=list$1char$ph$p_begin((o2_saved_894));    !list$1char$ph$p_end((o2_saved_894));    it_895=list$1char$ph$p_next((o2_saved_894))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_895)));
    }
    come_call_finalizer3(o2_saved_894,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj150=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj150,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj151=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_896=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_890;
    __dec_obj152=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_891);
    come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_887;
    info->sline=sline_888;
    __dec_obj153=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_889);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_880->mInline=(_Bool)0;
    result_type_880->mStatic=(_Bool)0;
    result_type_880->mUniq=(_Bool)0;
    var_args_897=generics_fun->mVarArgs;
    fun_898=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2262, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_880),(struct list$1void$ph*)come_increment_ref_count(param_types_881),(struct list$1char$ph*)come_increment_ref_count(param_names_885),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_886),(_Bool)0,var_args_897,(struct sBlock*)come_increment_ref_count(block_896),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_898));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2269, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value935=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2269, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_898),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_899=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value935,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_900=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_901=node_compile(node_899,info);
    if(    !Value_901) {
        __result_obj__369 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value939=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2274, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_873 = come_decrement_ref_count2(last_code_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_874 = come_decrement_ref_count2(last_code2_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_875 = come_decrement_ref_count2(sname_top_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_881,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_885,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_886,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_889 = come_decrement_ref_count2(sname_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_891,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_892,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_893,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_896,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_898,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_899) ? node_899 = come_decrement_ref_count2(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value939,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__369,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__369;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_900;
    __dec_obj154=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_892);
    come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj155=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_893);
    come_call_finalizer3(__dec_obj155,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj156=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_875));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_876;
    __dec_obj157=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_873);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_874);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_869;
    info->caller_line=caller_line_870;
    info->caller_sname=caller_sname_871;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_872;
    __result_obj__370 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value943=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2294, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_873 = come_decrement_ref_count2(last_code_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_874 = come_decrement_ref_count2(last_code2_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_875 = come_decrement_ref_count2(sname_top_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_881,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_885,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_886,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_889 = come_decrement_ref_count2(sname_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_891,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_892,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_893,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_896,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_898,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_899) ? node_899 = come_decrement_ref_count2(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value943,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__365;
void* __right_value910 = (void*)0;
struct tuple2$2char$phbool$* result_878;
void* __right_value911 = (void*)0;
char* __dec_obj145;
struct tuple2$2char$phbool$* __result_obj__366;
    if(    self==(void*)0) {
        __result_obj__365 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__365,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__365;
    }
    result_878=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj145=result_878->v1;
        result_878->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_878->v2=self->v2;
    }
    __result_obj__366 = come_increment_ref_count(result_878);
    come_call_finalizer3(result_878,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__366,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__366;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_879;
    result_879=0;
    result_879+=int_get_hash_key(((int)self->v1));
    result_879+=int_get_hash_key(((int)self->v2));
    return result_879;
}

static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj146;
struct tuple2$2char$phbool$* __result_obj__367;
    __dec_obj146=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__367 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__367,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__367;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_902;
int caller_line_903;
char* caller_sname_904;
_Bool comma_instead_of_semicolon_905;
char* last_code_906;
char* __dec_obj159;
char* last_code2_907;
char* __dec_obj160;
void* __right_value944 = (void*)0;
char* sname_top_908;
int sline_top_909;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sFun* funX_910;
_Bool __result_obj__371;
void* __right_value947 = (void*)0;
struct sType* result_type_911;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct list$1void$ph* param_types_912;
struct list$1void$ph* o2_saved_913;
struct sType* it_914;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct sType* param_type_915;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct list$1char$ph* param_names_916;
void* __right_value954 = (void*)0;
struct list$1char$ph* param_default_parametors_917;
char* p_918;
int sline_919;
char* sname_920;
char* head_921;
struct buffer* source_922;
void* __right_value955 = (void*)0;
struct buffer* __dec_obj161;
struct list$1char$ph* method_generics_type_names_923;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct list$1char$ph* __dec_obj162;
struct list$1char$ph* o2_saved_924;
char* it_925;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct list$1char$ph* __dec_obj163;
char* __dec_obj164;
void* __right_value960 = (void*)0;
struct sBlock* block_926;
struct buffer* __dec_obj165;
char* __dec_obj166;
_Bool generate__927;
_Bool var_args_928;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sFun* fun_929;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value969 = (void*)0;
struct sNode* node_930;
_Bool Value_931;
void* __if_result__1_932 = (void*)0;
_Bool __result_obj__372;
struct list$1char$ph* __dec_obj167;
void* __right_value970 = (void*)0;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
_Bool __result_obj__373;
    caller_fun_902=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_903=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_904=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_905=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_906=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_907=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_908=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_909=info->sline;
    funX_910=((struct sFun*)((void*)(__right_value946=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value945=__builtin_string(fun_name)))))));
    (__right_value945 = come_decrement_ref_count2(__right_value945, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value946,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    funX_910) {
        __result_obj__371 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_906 = come_decrement_ref_count2(last_code_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_907 = come_decrement_ref_count2(last_code2_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_908 = come_decrement_ref_count2(sname_top_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__371;
    }
    result_type_911=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_912=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2323, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_913=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_914=((struct sType*)list$1void$ph$p_begin((o2_saved_913)));    !list$1void$ph$p_end((o2_saved_913));    it_914=((struct sType*)list$1void$ph$p_next((o2_saved_913)))    ){
        param_type_915=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value950=come_call_cloner(sType_clone, it_914))),info));
        come_call_finalizer3(__right_value950,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_912,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_915)));
        come_call_finalizer3(param_type_915,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_913,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_916=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_917=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_918=info->p;
    sline_919=info->sline;
    sname_920=(char*)come_increment_ref_count(info->sname);
    head_921=info->head;
    source_922=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj161=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_923=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj162=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2345, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj162,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_924=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_925=list$1char$ph$p_begin((o2_saved_924));    !list$1char$ph$p_end((o2_saved_924));    it_925=list$1char$ph$p_next((o2_saved_924))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_925)));
    }
    come_call_finalizer3(o2_saved_924,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj163=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj163,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj164=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_926=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_921;
    __dec_obj165=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_922);
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_918;
    info->sline=sline_919;
    __dec_obj166=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_920);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_911->mInline=(_Bool)0;
    result_type_911->mStatic=(_Bool)0;
    result_type_911->mUniq=(_Bool)0;
    generate__927=(_Bool)0;
    if(    result_type_911->mGenerate) {
        result_type_911->mGenerate=(_Bool)0;
        generate__927=(_Bool)1;
    }
    var_args_928=generics_fun->mVarArgs;
    fun_929=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2375, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_911),(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_912)),(struct list$1char$ph*)come_increment_ref_count(param_names_916),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_917),(_Bool)0,var_args_928,(struct sBlock*)come_increment_ref_count(block_926),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__927,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_929));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2382, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value968=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2382, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_929),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_930=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value968,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_931=node_compile(node_930,info);
    if(    !Value_931) {
        __result_obj__372 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_906 = come_decrement_ref_count2(last_code_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_907 = come_decrement_ref_count2(last_code2_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_908 = come_decrement_ref_count2(sname_top_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_911,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_912,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_916,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_917,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_920 = come_decrement_ref_count2(sname_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_923,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_926,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_929,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_930) ? node_930 = come_decrement_ref_count2(node_930, ((struct sNode*)node_930)->finalize, ((struct sNode*)node_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
    }
    else {
        __if_result__1_932=(void*)(Value_931);
;
    }
    __dec_obj167=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_923);
    come_call_finalizer3(__dec_obj167,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj168=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_908));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_909;
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_906);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_907);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_902;
    info->caller_line=caller_line_903;
    info->caller_sname=caller_sname_904;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_905;
    __result_obj__373 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_906 = come_decrement_ref_count2(last_code_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_907 = come_decrement_ref_count2(last_code2_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_908 = come_decrement_ref_count2(sname_top_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_911,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_912,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_916,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_917,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_920 = come_decrement_ref_count2(sname_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_923,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_926,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_929,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_930) ? node_930 = come_decrement_ref_count2(node_930, ((struct sNode*)node_930)->finalize, ((struct sNode*)node_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__373;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_933;
char* source_head_934;
void* __right_value971 = (void*)0;
char* attribute_935;
struct sType* result_type_936;
char* var_name_937;
_Bool constructor__938;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sType* __dec_obj171;
void* __right_value974 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_939=0;
char* var_name2_940=0;
_Bool err_941=0;
struct sType* __dec_obj172;
char* __dec_obj173;
_Bool method_definition_942;
char* p_943;
int sline_944;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct buffer* buf2_945;
char* fun_name_946;
char* base_fun_name_947;
void* __right_value977 = (void*)0;
char* __dec_obj174;
void* __right_value978 = (void*)0;
char* __dec_obj175;
void* __right_value979 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_948=0;
char* name_949=0;
_Bool err_950=0;
void* __right_value980 = (void*)0;
char* __dec_obj176;
void* __right_value981 = (void*)0;
char* __dec_obj177;
void* __right_value982 = (void*)0;
char* __dec_obj178;
void* __right_value983 = (void*)0;
char* __dec_obj179;
void* __right_value984 = (void*)0;
char* __dec_obj180;
void* __right_value985 = (void*)0;
char* __dec_obj181;
void* __right_value986 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var32 = (void*)0;
struct list$1void$ph* param_types_951=0;
struct list$1char$ph* param_names_952=0;
struct list$1char$ph* param_default_parametors_953=0;
_Bool var_args_954=0;
char* header_tail_955;
int version_956;
int n_957;
_Bool in_top_level_958;
void* __right_value987 = (void*)0;
struct sBlock* block_959;
void* __right_value988 = (void*)0;
char* fun_name_961;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sFun* fun_962;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sFun* fun2_963;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value1001 = (void*)0;
struct sNode* __result_obj__376;
void* __right_value1002 = (void*)0;
char* none_generics_name_965;
void* __right_value1003 = (void*)0;
char* generics_sname_966;
int generics_sline_967;
void* __right_value1004 = (void*)0;
char* block_968;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sGenericsFun* fun_971;
void* __right_value1022 = (void*)0;
char* fun_name3_972;
void* __right_value1023 = (void*)0;
struct sNode* __result_obj__379;
void* __right_value1024 = (void*)0;
char* generics_sname_973;
int generics_sline_974;
void* __right_value1025 = (void*)0;
char* block_975;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sGenericsFun* fun_976;
void* __right_value1032 = (void*)0;
char* fun_name3_977;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct sNode* __result_obj__380;
char* source_tail_978;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* header_979;
void* __right_value1037 = (void*)0;
char* name_980;
void* __right_value1038 = (void*)0;
char* name_981;
int i_982;
void* __right_value1039 = (void*)0;
struct sType* param_type_983;
void* __right_value1040 = (void*)0;
char* param_name_984;
void* __right_value1041 = (void*)0;
char* default_parametor_985;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
char* impl_name_986;
void* __right_value1045 = (void*)0;
char* result_type_name_987;
void* __right_value1046 = (void*)0;
char* impl_name_988;
void* __right_value1047 = (void*)0;
char* result_type_name_989;
int i_990;
void* __right_value1048 = (void*)0;
struct sType* param_type_991;
void* __right_value1049 = (void*)0;
char* param_name_992;
void* __right_value1050 = (void*)0;
char* default_parametor_993;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
char* new_fun_name_994;
void* __right_value1055 = (void*)0;
char* id_995;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
char* id_996;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sBlock* block_997;
_Bool static_fun_998;
_Bool inline_fun_999;
_Bool uniq_fun_1000;
_Bool generate_fun_1001;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
char* new_fun_name_1002;
void* __right_value1062 = (void*)0;
char* __dec_obj193;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct sFun* fun_1003;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sFun* fun2_1004;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1074 = (void*)0;
struct sNode* result_1005;
struct sNode* __result_obj__381;
void* __right_value1075 = (void*)0;
char* new_fun_name_1006;
void* __right_value1076 = (void*)0;
char* __dec_obj194;
char* source_tail_1007;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct buffer* header_1008;
_Bool result_type_static_1009;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct sFun* fun_1010;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sFun* fun2_1011;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
char* id_1012;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1090 = (void*)0;
struct sNode* result_1013;
struct sNode* __result_obj__382;
void* __right_value1091 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1014=0;
char* fun_attribute_1015=0;
void* __right_value1092 = (void*)0;
char* __dec_obj195;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct buffer* header_1016;
char* source_tail_1017;
_Bool result_type_static_1018;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct sFun* fun_1019;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct sFun* fun2_1020;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
char* id_1021;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1105 = (void*)0;
struct sNode* result_1022;
struct sNode* __result_obj__383;
void* __right_value1106 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1023=0;
char* Err_1024=0;
struct sNode* __result_obj__384;
fun_name_946 = (void*)0;
    header_head_933=info->p;
    source_head_934=info->p;
    attribute_935=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_936=((void*)0);
    var_name_937=((void*)0);
    constructor__938=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value972=parse_word(info)));
        (__right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj171=result_type_936;
        result_type_936=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_936->mHeap=(_Bool)1;
        constructor__938=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value974=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_939=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_940=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_941=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value974,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj172=result_type_936;
        result_type_936=(struct sType*)come_increment_ref_count(result_type2_939);
        come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj173=var_name_937;
        var_name_937=(char*)come_increment_ref_count(var_name2_940);
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_941) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_939,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_940 = come_decrement_ref_count2(var_name2_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_942=(_Bool)0;
    {
        p_943=info->p;
        sline_944=info->sline;
        buf2_945=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2448, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_945,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_945)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_942=(_Bool)1;
        }
        info->p=p_943;
        info->sline=sline_944;
        come_call_finalizer3(buf2_945,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_947=((void*)0);
    if(    constructor__938) {
        __dec_obj174=base_fun_name_947;
        base_fun_name_947=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj175=fun_name_946;
        fun_name_946=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_947,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_942) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value979=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_948=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_949=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_950=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value979,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_950) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj176=base_fun_name_947;
        base_fun_name_947=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=fun_name_946;
        fun_name_946=(char*)come_increment_ref_count(create_method_name(obj_type_948,(_Bool)0,base_fun_name_947,info,(_Bool)1));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_948,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_949 = come_decrement_ref_count2(name_949, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj178=base_fun_name_947;
        base_fun_name_947=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=fun_name_946;
        fun_name_946=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_947,info,(_Bool)1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj180=fun_name_946;
        fun_name_946=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj181=base_fun_name_947;
        base_fun_name_947=(char*)come_increment_ref_count(__builtin_string(fun_name_946));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_947,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value986=parse_params(info,constructor__938)));
    param_types_951=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_952=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_953=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_954=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value986,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_955=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_947,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_956=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_957=0;
        while(xisdigit(*info->p)) {
            n_957=n_957*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_956=n_957;
    }
    in_top_level_958=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_947,"lambda")) {
        block_959=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_960=0;
        lambda_num_960++;
        fun_name_961=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_960));
        result_type_936->mInline=(_Bool)0;
        result_type_936->mStatic=(_Bool)0;
        result_type_936->mUniq=(_Bool)0;
        result_type_936->mGenerate=(_Bool)0;
        fun_962=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2546, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_961)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),(_Bool)0,var_args_954,(struct sBlock*)come_increment_ref_count(block_959),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_963=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value994=__builtin_string(fun_name_961)))));
        (__right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_963==((void*)0)||fun2_963->mExternal) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_961)),(struct sFun*)come_increment_ref_count(fun_962));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value998=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2556, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_962,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__376 = come_increment_ref_count(((struct sNode*)(__right_value1001=_inf_value5)));
        come_call_finalizer3(block_959,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_961 = come_decrement_ref_count2(fun_name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_962,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_963,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value998,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1001) ? __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count2(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__376;
        come_call_finalizer3(block_959,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_961 = come_decrement_ref_count2(fun_name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_962,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_963,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_965=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_966=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_967=info->sline;
        block_968=(char*)come_increment_ref_count(skip_block(info));
        fun_971=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2566, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1017=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1018=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),var_args_954,(char*)come_increment_ref_count(block_968),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_966)),generics_sline_967));
        come_call_finalizer3(__right_value1017,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1018,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_972=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_965,base_fun_name_947));
        map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_972)),(struct sGenericsFun*)come_increment_ref_count(fun_971));
        __result_obj__379 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_965 = come_decrement_ref_count2(none_generics_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_966 = come_decrement_ref_count2(generics_sname_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_968 = come_decrement_ref_count2(block_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_971,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_972 = come_decrement_ref_count2(fun_name3_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__379) ? __result_obj__379 = come_decrement_ref_count2(__result_obj__379, ((struct sNode*)__result_obj__379)->finalize, ((struct sNode*)__result_obj__379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__379;
        (none_generics_name_965 = come_decrement_ref_count2(none_generics_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_966 = come_decrement_ref_count2(generics_sname_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_968 = come_decrement_ref_count2(block_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_971,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_972 = come_decrement_ref_count2(fun_name3_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_973=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_974=info->sline;
        block_975=(char*)come_increment_ref_count(skip_block(info));
        fun_976=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2580, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1027=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1028=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),var_args_954,(char*)come_increment_ref_count(block_975),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_973)),generics_sline_974));
        come_call_finalizer3(__right_value1027,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1028,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_977=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_947));
        if(        method_definition_942) {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sGenericsFun*)come_increment_ref_count(fun_976));
        }
        else {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_977)),(struct sGenericsFun*)come_increment_ref_count(fun_976));
        }
        __result_obj__380 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_973 = come_decrement_ref_count2(generics_sname_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_975 = come_decrement_ref_count2(block_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_976,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_977 = come_decrement_ref_count2(fun_name3_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        (generics_sname_973 = come_decrement_ref_count2(generics_sname_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_975 = come_decrement_ref_count2(block_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_976,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_977 = come_decrement_ref_count2(fun_name3_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_978=info->p-1;
        header_979=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2596, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__938) {
            if(            list$1void$ph$p_length(param_types_951)==1) {
                name_980=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_979,"extern %s*%% %s*::initialize(%s*%% self);\n",name_980,name_980,name_980);
                (name_980 = come_decrement_ref_count2(name_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_981=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_979,"extern %s*%% %s*::initialize(%s*%% self, ",name_981,name_981,name_981);
                for(                i_982=1;                i_982<list$1void$ph$p_length(param_types_951);                i_982++                ){
                    param_type_983=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_951,i_982));
                    param_name_984=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_952,i_982));
                    default_parametor_985=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_953,i_982));
                    if(                    default_parametor_985) {
                        buffer_append_format(header_979,"extern %s %s=%s",((char*)(__right_value1042=make_come_type_name_string_no_solved(param_type_983,(_Bool)0,info))),param_name_984,default_parametor_985);
                        (__right_value1042 = come_decrement_ref_count2(__right_value1042, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_979,"extern %s %s",((char*)(__right_value1043=make_come_type_name_string_no_solved(param_type_983,(_Bool)0,info))),param_name_984);
                        (__right_value1043 = come_decrement_ref_count2(__right_value1043, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_982!=list$1void$ph$p_length(param_types_951)-1) {
                        buffer_append_str(header_979,",");
                    }
                    come_call_finalizer3(param_type_983,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_984 = come_decrement_ref_count2(param_name_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_985 = come_decrement_ref_count2(default_parametor_985, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_979,");\n");
                (name_981 = come_decrement_ref_count2(name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1void$ph$p_length(param_types_951)==1) {
                impl_name_986=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_987=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_936,(_Bool)0,info));
                buffer_append_format(header_979,"extern %s %s*::%s(%s* self);\n",result_type_name_987,impl_name_986,base_fun_name_947,impl_name_986);
                (impl_name_986 = come_decrement_ref_count2(impl_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_987 = come_decrement_ref_count2(result_type_name_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_988=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_989=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_936,(_Bool)0,info));
                buffer_append_format(header_979,"extern %s %s*::%s(%s* self, ",result_type_name_989,impl_name_988,base_fun_name_947,impl_name_988);
                for(                i_990=1;                i_990<list$1void$ph$p_length(param_types_951);                i_990++                ){
                    param_type_991=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_951,i_990));
                    param_name_992=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_952,i_990));
                    default_parametor_993=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_953,i_990));
                    if(                    default_parametor_993) {
                        buffer_append_format(header_979,"extern %s %s=%s",((char*)(__right_value1051=make_come_type_name_string_no_solved(param_type_991,(_Bool)0,info))),param_name_992,default_parametor_993);
                        (__right_value1051 = come_decrement_ref_count2(__right_value1051, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_979,"extern %s %s",((char*)(__right_value1052=make_come_type_name_string_no_solved(param_type_991,(_Bool)0,info))),param_name_992);
                        (__right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_990!=list$1void$ph$p_length(param_types_951)-1) {
                        buffer_append_str(header_979,",");
                    }
                    come_call_finalizer3(param_type_991,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_992 = come_decrement_ref_count2(param_name_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_993 = come_decrement_ref_count2(default_parametor_993, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_979,");\n");
                (impl_name_988 = come_decrement_ref_count2(impl_name_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_989 = come_decrement_ref_count2(result_type_name_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_979,source_head_934,source_tail_978-source_head_934);
            buffer_append_str(header_979,";\n");
        }
        if(        !result_type_936->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_956>0) {
                    new_fun_name_994=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1053=__builtin_string(fun_name_946))),version_956));
                    (__right_value1053 = come_decrement_ref_count2(__right_value1053, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    id_995=(char*)come_increment_ref_count(__builtin_string(new_fun_name_994));
                    add_come_code_at_come_header(info,id_995,"%s",((char*)(__right_value1056=buffer_to_string(header_979))));
                    (__right_value1056 = come_decrement_ref_count2(__right_value1056, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_994 = come_decrement_ref_count2(new_fun_name_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_995 = come_decrement_ref_count2(id_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_996=(char*)come_increment_ref_count(__builtin_string(fun_name_946));
                    add_come_code_at_come_header(info,id_996,"%s",((char*)(__right_value1058=buffer_to_string(header_979))));
                    (__right_value1058 = come_decrement_ref_count2(__right_value1058, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_996 = come_decrement_ref_count2(id_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_997=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__938,(_Bool)1));
        static_fun_998=(_Bool)0;
        if(        result_type_936->mStatic) {
            result_type_936->mStatic=(_Bool)0;
            result_type_936->mUniq=(_Bool)0;
            static_fun_998=(_Bool)1;
        }
        inline_fun_999=(_Bool)0;
        if(        result_type_936->mInline) {
            result_type_936->mInline=(_Bool)0;
            result_type_936->mUniq=(_Bool)0;
            inline_fun_999=(_Bool)1;
        }
        uniq_fun_1000=(_Bool)0;
        if(        result_type_936->mUniq) {
            result_type_936->mUniq=(_Bool)0;
            result_type_936->mInline=(_Bool)0;
            result_type_936->mStatic=(_Bool)0;
            uniq_fun_1000=(_Bool)1;
        }
        generate_fun_1001=(_Bool)0;
        if(        result_type_936->mUniq) {
            result_type_936->mUniq=(_Bool)0;
            result_type_936->mInline=(_Bool)0;
            result_type_936->mStatic=(_Bool)0;
            generate_fun_1001=(_Bool)1;
        }
        if(        version_956>0) {
            new_fun_name_1002=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1060=__builtin_string(fun_name_946))),version_956));
            (__right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj193=fun_name_946;
            fun_name_946=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1002));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1002 = come_decrement_ref_count2(new_fun_name_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_1003=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2714, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),(_Bool)0,var_args_954,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_997)),static_fun_998,info,inline_fun_999,uniq_fun_1000,generate_fun_1001,(char*)come_increment_ref_count(attribute_935),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sFun*)come_increment_ref_count(fun_1003));
        }
        else {
            fun2_1004=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1069=__builtin_string(fun_name_946)))));
            (__right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1004==((void*)0)||fun2_1004->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sFun*)come_increment_ref_count(fun_1003));
            }
            come_call_finalizer3(fun2_1004,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2732, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1073=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2732, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1003),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        result_1005=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value1073,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__381 = come_increment_ref_count(result_1005);
        come_call_finalizer3(header_979,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_997,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1003,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1005) ? result_1005 = come_decrement_ref_count2(result_1005, ((struct sNode*)result_1005)->finalize, ((struct sNode*)result_1005)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        come_call_finalizer3(header_979,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_997,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1003,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1005) ? result_1005 = come_decrement_ref_count2(result_1005, ((struct sNode*)result_1005)->finalize, ((struct sNode*)result_1005)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_956>0) {
            new_fun_name_1006=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_946,version_956));
            __dec_obj194=fun_name_946;
            fun_name_946=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1006));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1006 = come_decrement_ref_count2(new_fun_name_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1007=info->p;
            header_1008=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2746, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_1008,source_head_934,source_tail_1007-source_head_934);
            skip_spaces_and_lf(info);
            result_type_static_1009=result_type_936->mStatic;
            result_type_936->mStatic=(_Bool)0;
            result_type_936->mUniq=(_Bool)0;
            result_type_936->mInline=(_Bool)0;
            result_type_936->mGenerate=(_Bool)0;
            fun_1010=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2757, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),(_Bool)1,var_args_954,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_935),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1011=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1083=__builtin_string(fun_name_946)))));
            (__right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1011==((void*)0)||fun2_1011->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sFun*)come_increment_ref_count(fun_1010));
            }
            if(            !result_type_static_1009) {
                if(                !info->no_output_come_code) {
                    id_1012=(char*)come_increment_ref_count(__builtin_string(fun_name_946));
                    add_come_code_at_come_header(info,id_1012,"%s",((char*)(__right_value1087=buffer_to_string(header_1008))));
                    (__right_value1087 = come_decrement_ref_count2(__right_value1087, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1012 = come_decrement_ref_count2(id_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2778, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1089=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2778, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1010),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            result_1013=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer3(__right_value1089,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__382 = come_increment_ref_count(result_1013);
            come_call_finalizer3(header_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1010,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1013) ? result_1013 = come_decrement_ref_count2(result_1013, ((struct sNode*)result_1013)->finalize, ((struct sNode*)result_1013)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__382;
            come_call_finalizer3(header_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1010,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1013) ? result_1013 = come_decrement_ref_count2(result_1013, ((struct sNode*)result_1013)->finalize, ((struct sNode*)result_1013)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1091=parse_function_attribute(info)));
            asm_fun_1014=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1015=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1091,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_1014,"")) {
                __dec_obj195=fun_name_946;
                fun_name_946=(char*)come_increment_ref_count(__builtin_string(asm_fun_1014));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1016=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2788, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1017=info->p;
                buffer_append(header_1016,source_head_934,source_tail_1017-source_head_934);
                skip_spaces_and_lf(info);
            }
            result_type_static_1018=result_type_936->mStatic;
            result_type_936->mStatic=(_Bool)0;
            result_type_936->mUniq=(_Bool)0;
            result_type_936->mInline=(_Bool)0;
            result_type_936->mGenerate=(_Bool)0;
            fun_1019=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2802, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1void$ph*)come_increment_ref_count(param_types_951),(struct list$1char$ph*)come_increment_ref_count(param_names_952),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_953),(_Bool)1,var_args_954,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_935),(char*)come_increment_ref_count(fun_attribute_1015)));
            fun2_1020=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1098=__builtin_string(fun_name_946)))));
            (__right_value1098 = come_decrement_ref_count2(__right_value1098, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1020==((void*)0)||fun2_1020->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_946)),(struct sFun*)come_increment_ref_count(fun_1019));
            }
            if(            !result_type_static_1018) {
                if(                !info->no_output_come_code) {
                    id_1021=(char*)come_increment_ref_count(__builtin_string(fun_name_946));
                    add_come_code_at_come_header(info,id_1021,"%s",((char*)(__right_value1102=buffer_to_string(header_1016))));
                    (__right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1021 = come_decrement_ref_count2(id_1021, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2823, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1104=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2823, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1019),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            result_1022=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value1104,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__383 = come_increment_ref_count(result_1022);
            (asm_fun_1014 = come_decrement_ref_count2(asm_fun_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1015 = come_decrement_ref_count2(fun_attribute_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1016,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1019,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1020,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1022) ? result_1022 = come_decrement_ref_count2(result_1022, ((struct sNode*)result_1022)->finalize, ((struct sNode*)result_1022)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count2(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__383;
            (asm_fun_1014 = come_decrement_ref_count2(asm_fun_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1015 = come_decrement_ref_count2(fun_attribute_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1016,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1019,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1020,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1022) ? result_1022 = come_decrement_ref_count2(result_1022, ((struct sNode*)result_1022)->finalize, ((struct sNode*)result_1022)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1106=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1023=multiple_assign_var34->v1;
        Err_1024=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1024)?(puts(Err_1024),exit(0)):(0));
        come_call_finalizer3(__right_value1106,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_1024 = come_decrement_ref_count2(Err_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_958;
    __result_obj__384 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_935 = come_decrement_ref_count2(attribute_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_937 = come_decrement_ref_count2(var_name_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_946 = come_decrement_ref_count2(fun_name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_947 = come_decrement_ref_count2(base_fun_name_947, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_951,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_952,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_953,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count2(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__384;
}

static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__374;
void* __right_value999 = (void*)0;
struct sLambdaNode* result_964;
void* __right_value1000 = (void*)0;
char* __dec_obj182;
struct sLambdaNode* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)0;
        return __result_obj__374;
    }
    result_964=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_964->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_964->sname;
        result_964->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_964->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_964->mFun=self->mFun;
    }
    __result_obj__375 = result_964;
    come_call_finalizer3(result_964,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
struct sGenericsFun* __result_obj__377;
void* __right_value1005 = (void*)0;
struct sGenericsFun* result_970;
void* __right_value1006 = (void*)0;
struct sType* __dec_obj183;
void* __right_value1007 = (void*)0;
struct list$1char$ph* __dec_obj184;
void* __right_value1008 = (void*)0;
struct list$1char$ph* __dec_obj185;
void* __right_value1009 = (void*)0;
char* __dec_obj186;
void* __right_value1010 = (void*)0;
struct sType* __dec_obj187;
void* __right_value1011 = (void*)0;
struct list$1void$ph* __dec_obj188;
void* __right_value1012 = (void*)0;
struct list$1char$ph* __dec_obj189;
void* __right_value1013 = (void*)0;
struct list$1char$ph* __dec_obj190;
void* __right_value1014 = (void*)0;
char* __dec_obj191;
void* __right_value1015 = (void*)0;
char* __dec_obj192;
struct sGenericsFun* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__377 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__377,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__377;
    }
    result_970=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj183=result_970->mImplType;
        result_970->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj184=result_970->mGenericsTypeNames;
        result_970->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj184,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj185=result_970->mMethodGenericsTypeNames;
        result_970->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj185,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj186=result_970->mName;
        result_970->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj187=result_970->mResultType;
        result_970->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj188=result_970->mParamTypes;
        result_970->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj188,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj189=result_970->mParamNames;
        result_970->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj190=result_970->mParamDefaultParametors;
        result_970->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj190,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj191=result_970->mBlock;
        result_970->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_970->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_970->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_970->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj192=result_970->mGenericsSName;
        result_970->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_970->mGenericsSLine=self->mGenericsSLine;
    }
    __result_obj__378 = come_increment_ref_count(result_970);
    come_call_finalizer3(result_970,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__378,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_969;
    result_969=0;
    result_969+=int_get_hash_key(((int)self->mImplType));
    result_969+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_969+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_969+=int_get_hash_key(((int)self->mName));
    result_969+=int_get_hash_key(((int)self->mResultType));
    result_969+=int_get_hash_key(((int)self->mParamTypes));
    result_969+=int_get_hash_key(((int)self->mParamNames));
    result_969+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_969+=int_get_hash_key(((int)self->mBlock));
    result_969+=int_get_hash_key(((int)self->mSLine));
    result_969+=int_get_hash_key(((int)self->mVarArgs));
    result_969+=int_get_hash_key(((int)self->mGenerate));
    result_969+=int_get_hash_key(((int)self->mGenericsSName));
    result_969+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_969;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1025;
char* __dec_obj196;
char* last_code2_1026;
char* __dec_obj197;
_Bool comma_instead_of_semicolon_1027;
struct sClass* current_stack_frame_struct_1028;
char* real_fun_name_1029;
struct sFun* finalizer_1030;
void* __right_value1107 = (void*)0;
struct sType* type_before_1031;
void* __right_value1108 = (void*)0;
struct sType* type2_1032;
void* __right_value1109 = (void*)0;
char* fun_name2_1033;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
char* none_generics_name_1034;
void* __right_value1112 = (void*)0;
char* generics_fun_name_1035;
void* __right_value1113 = (void*)0;
struct sGenericsFun* generics_fun_1036;
void* __right_value1114 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1037=0;
_Bool err_1038=0;
void* __right_value1115 = (void*)0;
char* __dec_obj198;
int i_1039;
void* __right_value1116 = (void*)0;
char* new_fun_name_1040;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
char* __dec_obj199;
void* __right_value1119 = (void*)0;
char* __dec_obj200;
void* __right_value1120 = (void*)0;
char* __dec_obj201;
void* __right_value1121 = (void*)0;
char* user_real_fun_name_1041;
void* __right_value1122 = (void*)0;
struct sFun* user_finalizer_1042;
void* __right_value1123 = (void*)0;
struct sType* type2_1043;
struct sClass* klass_1044;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct buffer* source_1045;
void* __right_value1126 = (void*)0;
struct list$1void$ph* o2_saved_1047;
struct tuple2$2char$phsType$ph* it_1048;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1049=0;
struct sType* field_type_1050=0;
char* p_1053;
int sline_1054;
char* sname_1055;
char* head_1056;
struct buffer* source3_1057;
struct buffer* __dec_obj202;
void* __right_value1127 = (void*)0;
char* __dec_obj203;
void* __right_value1128 = (void*)0;
struct sBlock* block_1058;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
struct sType* result_type_1059;
void* __right_value1132 = (void*)0;
char* name_1060;
void* __right_value1133 = (void*)0;
struct sType* self_type_1061;
struct sType* __list_values21___1063[1];
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
struct list$1void$ph* param_types_1062;
void* __right_value1136 = (void*)0;
char* __list_values22___1064[1];
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct list$1char$ph* param_names_1065;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct list$1char$ph* param_default_parametors_1066;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
struct sFun* fun2_1067;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct sFun* fun_1068;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1150 = (void*)0;
struct sNode* node_1069;
_Bool Value_1070;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__388;
memset(&i_1039, 0, sizeof(int));
    last_code_1025=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj196=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1026=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj197=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1027=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1028=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1029=((void*)0);
    finalizer_1030=((void*)0);
    type_before_1031=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1032=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1032->mHeap=(_Bool)0;
    fun_name2_1033=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1030=((struct sFun*)((void*)(__right_value1110=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1033))));
        come_call_finalizer3(__right_value1110,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        finalizer_1030==((void*)0)) {
            none_generics_name_1034=(char*)come_increment_ref_count(get_none_generics_name(type2_1032->mClass->mName));
            generics_fun_name_1035=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1034,fun_name));
            generics_fun_1036=((struct sGenericsFun*)((void*)(__right_value1113=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1035))));
            come_call_finalizer3(__right_value1113,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1036) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1114=create_generics_fun((char*)come_increment_ref_count(fun_name2_1033),generics_fun_1036,type,info)));
                name_1037=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1038=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1114,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1038) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1030=((struct sFun*)((void*)(__right_value1115=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1037))));
                come_call_finalizer3(__right_value1115,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1037 = come_decrement_ref_count2(name_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1034 = come_decrement_ref_count2(none_generics_name_1034, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1035 = come_decrement_ref_count2(generics_fun_name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj198=real_fun_name_1029;
        real_fun_name_1029=(char*)come_increment_ref_count(fun_name2_1033);
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1039=128-1;        i_1039>=1;        i_1039--        ){
            new_fun_name_1040=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1033,i_1039));
            finalizer_1030=((struct sFun*)((void*)(__right_value1117=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1040))));
            come_call_finalizer3(__right_value1117,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_1030) {
                __dec_obj199=fun_name2_1033;
                fun_name2_1033=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1040));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1040 = come_decrement_ref_count2(new_fun_name_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1040 = come_decrement_ref_count2(new_fun_name_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1030==((void*)0)) {
            finalizer_1030=((struct sFun*)((void*)(__right_value1119=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1033))));
            come_call_finalizer3(__right_value1119,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj200=real_fun_name_1029;
        real_fun_name_1029=(char*)come_increment_ref_count(fun_name2_1033);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1030==((void*)0)) {
        type=type_before_1031;
        __dec_obj201=real_fun_name_1029;
        real_fun_name_1029=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1041=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1042=((struct sFun*)((void*)(__right_value1122=map$2void$phvoid$ph$p_operator_load_element(info->funcs,user_real_fun_name_1041))));
        come_call_finalizer3(__right_value1122,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type2_1043=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1043;
        klass_1044=type->mClass;
        if(        type->mPointerNum>0&&klass_1044->mStruct||type->mAllocaValue) {
            source_1045=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2924, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1045,123);
            if(            user_finalizer_1042) {
                char source2_1046[1024];
                memset(&source2_1046, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1046,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1041);
                buffer_append_str(source_1045,source2_1046);
            }
            klass_1044=((struct sClass*)((void*)(__right_value1126=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1044->mName))));
            come_call_finalizer3(__right_value1126,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1047=(struct list$1void$ph*)come_increment_ref_count((klass_1044->mFields)),it_1048=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1047)));            !list$1void$ph$p_end((o2_saved_1047));            it_1048=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1047)))            ){
                multiple_assign_var36=it_1048;
                name_1049=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1050=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1050->mHeap) {
                    char source2_1051[1024];
                    memset(&source2_1051, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1051,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1049,name_1049,name_1049,name_1049);
                    buffer_append_str(source_1045,source2_1051);
                }
                else if(                field_type_1050->mChannel) {
                    char source2_1052[1024];
                    memset(&source2_1052, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1052,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1049,name_1049);
                    buffer_append_str(source_1045,source2_1052);
                    snprintf(source2_1052,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1049,name_1049);
                    buffer_append_str(source_1045,source2_1052);
                }
                (name_1049 = come_decrement_ref_count2(name_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1050,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1047,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1045,125);
            p_1053=info->p;
            sline_1054=info->sline;
            sname_1055=(char*)come_increment_ref_count(info->sname);
            head_1056=info->head;
            source3_1057=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj202=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1045);
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1045->buf;
            info->head=source_1045->buf;
            __dec_obj203=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1029));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1058=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1059=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2973, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_1060=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1029));
            self_type_1061=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1061->mHeap=(_Bool)0;
            if(            self_type_1061->mPointerNum==0) {
                self_type_1061->mPointerNum=1;
            }
            if(            self_type_1061->mPointerNum>1) {
                self_type_1061->mPointerNum=1;
            }
            param_types_1062=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1063[0]=self_type_1061,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2983, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1063)));
            param_names_1065=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1064[0]=((char*)(__right_value1136=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2984, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1064)));
            (__right_value1136 = come_decrement_ref_count2(__right_value1136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1066=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2985, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1066,((void*)0));
            result_type_1059->mStatic=(_Bool)0;
            result_type_1059->mUniq=(_Bool)0;
            result_type_1059->mInline=(_Bool)0;
            result_type_1059->mGenerate=(_Bool)0;
            fun2_1067=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1141=__builtin_string(name_1060)))));
            (__right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1067==((void*)0)||fun2_1067->mExternal) {
                fun_1068=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2995, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1060),(struct sType*)come_increment_ref_count(result_type_1059),(struct list$1void$ph*)come_increment_ref_count(param_types_1062),(struct list$1char$ph*)come_increment_ref_count(param_names_1065),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1066),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1058),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1060)),(struct sFun*)come_increment_ref_count(fun_1068));
                finalizer_1030=fun_1068;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3005, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1149=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3005, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1068),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1069=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1149,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1070=node_compile(node_1069,info);
                if(                !Value_1070) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1068,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1069) ? node_1069 = come_decrement_ref_count2(node_1069, ((struct sNode*)node_1069)->finalize, ((struct sNode*)node_1069)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_1030=fun2_1067;
            }
            __dec_obj204=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1057);
            come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1053;
            info->head=head_1056;
            info->sline=sline_1054;
            __dec_obj205=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1055);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1045,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1055 = come_decrement_ref_count2(sname_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1058,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1059,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1060 = come_decrement_ref_count2(name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1061,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1062,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1065,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1066,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1067,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1041 = come_decrement_ref_count2(user_real_fun_name_1041, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1043,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1028;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1025);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1026);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1027;
    __result_obj__388 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1154=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3030, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1030,(char*)come_increment_ref_count(real_fun_name_1029)))));
    (last_code_1025 = come_decrement_ref_count2(last_code_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1026 = come_decrement_ref_count2(last_code2_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1029 = come_decrement_ref_count2(real_fun_name_1029, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1031,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1032,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1033 = come_decrement_ref_count2(fun_name2_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1154,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__388,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__388;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__385;
void* __right_value1151 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1071;
void* __right_value1152 = (void*)0;
char* __dec_obj208;
struct tuple2$2sFun$pchar$ph* __result_obj__386;
    if(    self==(void*)0) {
        __result_obj__385 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__385;
    }
    result_1071=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1071->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj208=result_1071->v2;
        result_1071->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__386 = come_increment_ref_count(result_1071);
    come_call_finalizer3(result_1071,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__386,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__386;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1072;
    result_1072=0;
    result_1072+=int_get_hash_key(((int)self->v1));
    result_1072+=int_get_hash_key(((int)self->v2));
    return result_1072;
}

static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj209;
struct tuple2$2sFun$pchar$ph* __result_obj__387;
    self->v1=v1;
    __dec_obj209=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__387 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__387,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__387;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1073;
char* __dec_obj210;
char* last_code2_1074;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1075;
struct sClass* current_stack_frame_struct_1076;
struct sFun* equaler_1077;
void* __right_value1155 = (void*)0;
char* real_fun_name_1078;
void* __right_value1156 = (void*)0;
struct sType* type2_1079;
struct sClass* klass_1080;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* source_1081;
char* name_1082;
void* __right_value1159 = (void*)0;
struct list$1void$ph* o2_saved_1084;
struct tuple2$2char$phsType$ph* it_1085;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1086=0;
struct sType* field_type_1087=0;
char* p_1089;
int sline_1090;
char* sname_1091;
char* head_1092;
struct buffer* source3_1093;
struct buffer* __dec_obj212;
void* __right_value1160 = (void*)0;
char* __dec_obj213;
void* __right_value1161 = (void*)0;
struct sBlock* block_1094;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct sType* result_type_1095;
void* __right_value1165 = (void*)0;
char* name_1096;
void* __right_value1166 = (void*)0;
struct sType* left_type_1097;
void* __right_value1167 = (void*)0;
struct sType* right_type_1098;
struct sType* __list_values23___1100[2];
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct list$1void$ph* param_types_1099;
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
char* __list_values24___1101[2];
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct list$1char$ph* param_names_1102;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
struct list$1char$ph* param_default_parametors_1103;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct sFun* fun2_1104;
void* __right_value1178 = (void*)0;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sFun* fun_1105;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1185 = (void*)0;
struct sNode* node_1106;
_Bool Value_1107;
void* __right_value1186 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1108=0;
char* Err_1109=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__389;
    last_code_1073=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1074=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1075=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1076=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1077=((void*)0);
    real_fun_name_1078=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1079=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1079;
    klass_1080=type->mClass;
    if(    type->mPointerNum>0&&!klass_1080->mNumber) {
        source_1081=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3056, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1081,123);
        if(        klass_1080->mProtocol) {
            name_1082="_protocol_obj";
            char source2_1083[1024];
            memset(&source2_1083, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1083,1024,"return left.%s.equals(right.%s);\n",name_1082,name_1082);
            buffer_append_str(source_1081,source2_1083);
        }
        else {
            klass_1080=((struct sClass*)((void*)(__right_value1159=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1080->mName))));
            come_call_finalizer3(__right_value1159,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1084=(struct list$1void$ph*)come_increment_ref_count((klass_1080->mFields)),it_1085=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1084)));            !list$1void$ph$p_end((o2_saved_1084));            it_1085=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1084)))            ){
                multiple_assign_var37=it_1085;
                name_1086=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1087=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1088[1024];
                memset(&source2_1088, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1088,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1086,name_1086,name_1086);
                buffer_append_str(source_1081,source2_1088);
                (name_1086 = come_decrement_ref_count2(name_1086, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1087,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1084,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1081,"return true;");
        buffer_append_char(source_1081,125);
        p_1089=info->p;
        sline_1090=info->sline;
        sname_1091=(char*)come_increment_ref_count(info->sname);
        head_1092=info->head;
        source3_1093=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1081);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1081->buf;
        info->head=source_1081->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1078));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1094=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1095=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3096, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1096=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1078));
        left_type_1097=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1097->mHeap=(_Bool)0;
        right_type_1098=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1098->mHeap=(_Bool)0;
        param_types_1099=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1100[0]=left_type_1097,
__list_values23___1100[1]=right_type_1098,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3102, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1100)));
        param_names_1102=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1101[0]=((char*)(__right_value1170=__builtin_string("left"))),
__list_values24___1101[1]=((char*)(__right_value1171=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3103, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1101)));
        (__right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1171 = come_decrement_ref_count2(__right_value1171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1103=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3104, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1103,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1103,((void*)0));
        result_type_1095->mStatic=(_Bool)0;
        result_type_1095->mUniq=(_Bool)0;
        result_type_1095->mInline=(_Bool)0;
        result_type_1095->mGenerate=(_Bool)0;
        fun2_1104=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1176=__builtin_string(name_1096)))));
        (__right_value1176 = come_decrement_ref_count2(__right_value1176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1104==((void*)0)||fun2_1104->mExternal) {
            fun_1105=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3115, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1096),(struct sType*)come_increment_ref_count(result_type_1095),(struct list$1void$ph*)come_increment_ref_count(param_types_1099),(struct list$1char$ph*)come_increment_ref_count(param_names_1102),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1103),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1094),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1096)),(struct sFun*)come_increment_ref_count(fun_1105));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3123, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1184=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3123, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1105),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1106=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1184,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1107=node_compile(node_1106,info);
            if(            !Value_1107) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1186=err_msg(info,"compiling error")));
                come_exception_var_c24_1108=multiple_assign_var38->v1;
                Err_1109=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1109)?(puts(Err_1109),exit(0)):(0));
                come_call_finalizer3(__right_value1186,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1109 = come_decrement_ref_count2(Err_1109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1077=fun_1105;
            come_call_finalizer3(fun_1105,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1106) ? node_1106 = come_decrement_ref_count2(node_1106, ((struct sNode*)node_1106)->finalize, ((struct sNode*)node_1106)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1077=fun2_1104;
        }
        __dec_obj214=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1093);
        come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1089;
        info->head=head_1092;
        info->sline=sline_1090;
        __dec_obj215=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1091);
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1081,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1091 = come_decrement_ref_count2(sname_1091, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1093,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1094,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1095,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1096 = come_decrement_ref_count2(name_1096, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1097,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1098,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1099,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1102,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1103,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1104,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1076;
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1073);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1074);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1075;
    __result_obj__389 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1188=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3149, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1077,(char*)come_increment_ref_count(real_fun_name_1078)))));
    (last_code_1073 = come_decrement_ref_count2(last_code_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1074 = come_decrement_ref_count2(last_code2_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1078 = come_decrement_ref_count2(real_fun_name_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1079,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1188,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__389;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1110;
char* __dec_obj218;
char* last_code2_1111;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1112;
struct sClass* current_stack_frame_struct_1113;
struct sFun* equaler_1114;
void* __right_value1189 = (void*)0;
char* real_fun_name_1115;
void* __right_value1190 = (void*)0;
struct sType* type2_1116;
struct sClass* klass_1117;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct buffer* source_1118;
char* name_1119;
int i_1122;
void* __right_value1193 = (void*)0;
struct list$1void$ph* o2_saved_1123;
struct tuple2$2char$phsType$ph* it_1124;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1125=0;
struct sType* field_type_1126=0;
char* p_1130;
int sline_1131;
char* sname_1132;
char* head_1133;
struct buffer* source3_1134;
struct buffer* __dec_obj220;
void* __right_value1194 = (void*)0;
char* __dec_obj221;
void* __right_value1195 = (void*)0;
struct sBlock* block_1135;
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct sType* result_type_1136;
void* __right_value1199 = (void*)0;
char* name_1137;
void* __right_value1200 = (void*)0;
struct sType* left_type_1138;
void* __right_value1201 = (void*)0;
struct sType* right_type_1139;
struct sType* __list_values25___1141[2];
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
struct list$1void$ph* param_types_1140;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
char* __list_values26___1142[2];
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct list$1char$ph* param_names_1143;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct list$1char$ph* param_default_parametors_1144;
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
struct sFun* fun2_1145;
void* __right_value1212 = (void*)0;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct sFun* fun_1146;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1219 = (void*)0;
struct sNode* node_1147;
_Bool Value_1148;
void* __right_value1220 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1149=0;
char* Err_1150=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
    last_code_1110=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1111=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1112=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1113=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1114=((void*)0);
    real_fun_name_1115=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1116=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1116;
    klass_1117=type->mClass;
    if(    type->mPointerNum>0&&!klass_1117->mNumber) {
        source_1118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3174, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1118,123);
        if(        klass_1117->mProtocol) {
            name_1119="_protocol_obj";
            char source2_1120[1024];
            memset(&source2_1120, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1120,1024,"return left.%s !== right.%s;\n",name_1119,name_1119);
            buffer_append_str(source_1118,source2_1120);
        }
        else {
            char source2_1121[1024];
            memset(&source2_1121, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1121,1024,"return !(");
            buffer_append_str(source_1118,source2_1121);
            snprintf(source2_1121,1024,"( ");
            buffer_append_str(source_1118,source2_1121);
            i_1122=0;
            klass_1117=((struct sClass*)((void*)(__right_value1193=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1117->mName))));
            come_call_finalizer3(__right_value1193,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1123=(struct list$1void$ph*)come_increment_ref_count((klass_1117->mFields)),it_1124=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1123)));            !list$1void$ph$p_end((o2_saved_1123));            it_1124=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1123)))            ){
                multiple_assign_var39=it_1124;
                name_1125=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1126=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1127[1024];
                memset(&source2_1127, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1127,1024,"(left.%s === right.%s)",name_1125,name_1125,name_1125);
                buffer_append_str(source_1118,source2_1127);
                if(                i_1122==list$1void$ph$p_length(klass_1117->mFields)-1) {
                    char source2_1128[1024];
                    memset(&source2_1128, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1128,1024,"));");
                    buffer_append_str(source_1118,source2_1128);
                }
                else {
                    char source2_1129[1024];
                    memset(&source2_1129, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1129,1024," && ");
                    buffer_append_str(source_1118,source2_1129);
                }
                i_1122++;
                (name_1125 = come_decrement_ref_count2(name_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1126,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1123,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1118,125);
        p_1130=info->p;
        sline_1131=info->sline;
        sname_1132=(char*)come_increment_ref_count(info->sname);
        head_1133=info->head;
        source3_1134=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1118);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1118->buf;
        info->head=source_1118->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1115));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1135=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1136=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3234, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1137=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1115));
        left_type_1138=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1138->mHeap=(_Bool)0;
        right_type_1139=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1139->mHeap=(_Bool)0;
        param_types_1140=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1141[0]=left_type_1138,
__list_values25___1141[1]=right_type_1139,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3240, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1141)));
        param_names_1143=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1142[0]=((char*)(__right_value1204=__builtin_string("left"))),
__list_values26___1142[1]=((char*)(__right_value1205=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3241, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1142)));
        (__right_value1204 = come_decrement_ref_count2(__right_value1204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1205 = come_decrement_ref_count2(__right_value1205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1144=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3242, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1144,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1144,((void*)0));
        result_type_1136->mStatic=(_Bool)0;
        result_type_1136->mUniq=(_Bool)0;
        result_type_1136->mInline=(_Bool)0;
        result_type_1136->mGenerate=(_Bool)0;
        fun2_1145=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1210=__builtin_string(name_1137)))));
        (__right_value1210 = come_decrement_ref_count2(__right_value1210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1145==((void*)0)||fun2_1145->mExternal) {
            fun_1146=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3253, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1137),(struct sType*)come_increment_ref_count(result_type_1136),(struct list$1void$ph*)come_increment_ref_count(param_types_1140),(struct list$1char$ph*)come_increment_ref_count(param_names_1143),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1144),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1135),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1137)),(struct sFun*)come_increment_ref_count(fun_1146));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3261, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1218=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3261, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1146),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1147=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1218,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1148=node_compile(node_1147,info);
            if(            !Value_1148) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1220=err_msg(info,"compiling error")));
                come_exception_var_c25_1149=multiple_assign_var40->v1;
                Err_1150=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1150)?(puts(Err_1150),exit(0)):(0));
                come_call_finalizer3(__right_value1220,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1150 = come_decrement_ref_count2(Err_1150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1114=fun_1146;
            come_call_finalizer3(fun_1146,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1147) ? node_1147 = come_decrement_ref_count2(node_1147, ((struct sNode*)node_1147)->finalize, ((struct sNode*)node_1147)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1114=fun2_1145;
        }
        __dec_obj222=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1134);
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1130;
        info->head=head_1133;
        info->sline=sline_1131;
        __dec_obj223=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1132);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1118,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1132 = come_decrement_ref_count2(sname_1132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1135,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1136,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1137 = come_decrement_ref_count2(name_1137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1138,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1140,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1143,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1144,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1145,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1113;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1110);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1111);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1112;
    __result_obj__390 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1222=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3287, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1114,(char*)come_increment_ref_count(real_fun_name_1115)))));
    (last_code_1110 = come_decrement_ref_count2(last_code_1110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1111 = come_decrement_ref_count2(last_code2_1111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1115 = come_decrement_ref_count2(real_fun_name_1115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1222,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1151;
char* __dec_obj226;
char* last_code2_1152;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1153;
struct sClass* current_stack_frame_struct_1154;
struct sFun* equaler_1155;
void* __right_value1223 = (void*)0;
char* real_fun_name_1156;
void* __right_value1224 = (void*)0;
struct sType* type2_1157;
struct sClass* klass_1158;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct buffer* source_1159;
char* name_1160;
int i_1163;
void* __right_value1227 = (void*)0;
struct list$1void$ph* o2_saved_1164;
struct tuple2$2char$phsType$ph* it_1165;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1166=0;
struct sType* field_type_1167=0;
char* p_1171;
int sline_1172;
char* sname_1173;
char* head_1174;
struct buffer* source3_1175;
struct buffer* __dec_obj228;
void* __right_value1228 = (void*)0;
char* __dec_obj229;
void* __right_value1229 = (void*)0;
struct sBlock* block_1176;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
struct sType* result_type_1177;
void* __right_value1233 = (void*)0;
char* name_1178;
void* __right_value1234 = (void*)0;
struct sType* left_type_1179;
void* __right_value1235 = (void*)0;
struct sType* right_type_1180;
struct sType* __list_values27___1182[2];
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
struct list$1void$ph* param_types_1181;
void* __right_value1238 = (void*)0;
void* __right_value1239 = (void*)0;
char* __list_values28___1183[2];
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct list$1char$ph* param_names_1184;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
struct list$1char$ph* param_default_parametors_1185;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
struct sFun* fun2_1186;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct sFun* fun_1187;
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1253 = (void*)0;
struct sNode* node_1188;
_Bool Value_1189;
void* __right_value1254 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1190=0;
char* Err_1191=0;
struct buffer* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__391;
    last_code_1151=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1152=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1153=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1154=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1155=((void*)0);
    real_fun_name_1156=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1157=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1157;
    klass_1158=type->mClass;
    if(    type->mPointerNum>0&&!klass_1158->mNumber) {
        source_1159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3312, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1159,123);
        if(        klass_1158->mProtocol) {
            name_1160="_protocol_obj";
            char source2_1161[1024];
            memset(&source2_1161, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1161,1024,"return !left.%s.equals(right.%s);\n",name_1160,name_1160);
            buffer_append_str(source_1159,source2_1161);
        }
        else {
            char source2_1162[1024];
            memset(&source2_1162, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1162,1024,"return !(");
            buffer_append_str(source_1159,source2_1162);
            i_1163=0;
            klass_1158=((struct sClass*)((void*)(__right_value1227=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1158->mName))));
            come_call_finalizer3(__right_value1227,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1164=(struct list$1void$ph*)come_increment_ref_count((klass_1158->mFields)),it_1165=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1164)));            !list$1void$ph$p_end((o2_saved_1164));            it_1165=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1164)))            ){
                multiple_assign_var41=it_1165;
                name_1166=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1167=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1168[1024];
                memset(&source2_1168, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1168,1024,"left.%s.equals(right.%s)",name_1166,name_1166);
                buffer_append_str(source_1159,source2_1168);
                if(                i_1163==list$1void$ph$p_length(klass_1158->mFields)-1) {
                    char source2_1169[1024];
                    memset(&source2_1169, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1169,1024,");");
                    buffer_append_str(source_1159,source2_1169);
                }
                else {
                    char source2_1170[1024];
                    memset(&source2_1170, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1170,1024," && ");
                    buffer_append_str(source_1159,source2_1170);
                }
                i_1163++;
                (name_1166 = come_decrement_ref_count2(name_1166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1167,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1164,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1159,125);
        p_1171=info->p;
        sline_1172=info->sline;
        sname_1173=(char*)come_increment_ref_count(info->sname);
        head_1174=info->head;
        source3_1175=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj228=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1159);
        come_call_finalizer3(__dec_obj228,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1159->buf;
        info->head=source_1159->buf;
        __dec_obj229=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1156));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1176=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1177=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3369, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1178=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1156));
        left_type_1179=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1179->mHeap=(_Bool)0;
        right_type_1180=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1180->mHeap=(_Bool)0;
        param_types_1181=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1182[0]=left_type_1179,
__list_values27___1182[1]=right_type_1180,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3375, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1182)));
        param_names_1184=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1183[0]=((char*)(__right_value1238=__builtin_string("left"))),
__list_values28___1183[1]=((char*)(__right_value1239=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3376, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1183)));
        (__right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1185=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3377, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1185,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1185,((void*)0));
        result_type_1177->mStatic=(_Bool)0;
        result_type_1177->mUniq=(_Bool)0;
        result_type_1177->mInline=(_Bool)0;
        result_type_1177->mGenerate=(_Bool)0;
        fun2_1186=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1244=__builtin_string(name_1178)))));
        (__right_value1244 = come_decrement_ref_count2(__right_value1244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1186==((void*)0)||fun2_1186->mExternal) {
            fun_1187=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3388, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1178),(struct sType*)come_increment_ref_count(result_type_1177),(struct list$1void$ph*)come_increment_ref_count(param_types_1181),(struct list$1char$ph*)come_increment_ref_count(param_names_1184),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1185),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1176),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1178)),(struct sFun*)come_increment_ref_count(fun_1187));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3396, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1252=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3396, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1187),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1188=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1252,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1189=node_compile(node_1188,info);
            if(            !Value_1189) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1254=err_msg(info,"compiling error")));
                come_exception_var_c26_1190=multiple_assign_var42->v1;
                Err_1191=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1191)?(puts(Err_1191),exit(0)):(0));
                come_call_finalizer3(__right_value1254,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1191 = come_decrement_ref_count2(Err_1191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1155=fun_1187;
            come_call_finalizer3(fun_1187,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1188) ? node_1188 = come_decrement_ref_count2(node_1188, ((struct sNode*)node_1188)->finalize, ((struct sNode*)node_1188)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1155=fun2_1186;
        }
        __dec_obj230=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1175);
        come_call_finalizer3(__dec_obj230,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1171;
        info->head=head_1174;
        info->sline=sline_1172;
        __dec_obj231=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1173);
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1173 = come_decrement_ref_count2(sname_1173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1175,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1176,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1178 = come_decrement_ref_count2(name_1178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1180,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1181,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1184,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1185,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1186,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1154;
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1151);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1152);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1153;
    __result_obj__391 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1256=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3422, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1155,(char*)come_increment_ref_count(real_fun_name_1156)))));
    (last_code_1151 = come_decrement_ref_count2(last_code_1151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1152 = come_decrement_ref_count2(last_code2_1152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1156 = come_decrement_ref_count2(real_fun_name_1156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1256,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__391,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1192;
char* __dec_obj234;
char* last_code2_1193;
char* __dec_obj235;
_Bool comma_instead_of_semicolon_1194;
struct sClass* current_stack_frame_struct_1195;
struct sFun* equaler_1196;
void* __right_value1257 = (void*)0;
char* real_fun_name_1197;
void* __right_value1258 = (void*)0;
struct sType* type2_1198;
struct sClass* klass_1199;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct buffer* source_1200;
char* name_1201;
void* __right_value1261 = (void*)0;
struct list$1void$ph* o2_saved_1204;
struct tuple2$2char$phsType$ph* it_1205;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1206=0;
struct sType* field_type_1207=0;
char* p_1209;
int sline_1210;
char* sname_1211;
char* head_1212;
struct buffer* source3_1213;
struct buffer* __dec_obj236;
void* __right_value1262 = (void*)0;
char* __dec_obj237;
void* __right_value1263 = (void*)0;
struct sBlock* block_1214;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
struct sType* result_type_1215;
void* __right_value1267 = (void*)0;
char* name_1216;
void* __right_value1268 = (void*)0;
struct sType* left_type_1217;
void* __right_value1269 = (void*)0;
struct sType* right_type_1218;
struct sType* __list_values29___1220[2];
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
struct list$1void$ph* param_types_1219;
void* __right_value1272 = (void*)0;
void* __right_value1273 = (void*)0;
char* __list_values30___1221[2];
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct list$1char$ph* param_names_1222;
void* __right_value1276 = (void*)0;
void* __right_value1277 = (void*)0;
struct list$1char$ph* param_default_parametors_1223;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct sFun* fun2_1224;
void* __right_value1280 = (void*)0;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
void* __right_value1283 = (void*)0;
struct sFun* fun_1225;
void* __right_value1284 = (void*)0;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1287 = (void*)0;
struct sNode* node_1226;
_Bool Value_1227;
void* __right_value1288 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1228=0;
char* Err_1229=0;
struct buffer* __dec_obj238;
char* __dec_obj239;
char* __dec_obj240;
char* __dec_obj241;
void* __right_value1289 = (void*)0;
void* __right_value1290 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__392;
    last_code_1192=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj234=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1193=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj235=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1194=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1195=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1196=((void*)0);
    real_fun_name_1197=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1198=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1198;
    klass_1199=type->mClass;
    if(    type->mPointerNum>0&&!klass_1199->mNumber) {
        source_1200=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1200,123);
        if(        klass_1199->mProtocol) {
            name_1201="_protocol_obj";
            char source2_1202[1024];
            memset(&source2_1202, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1202,1024,"return left.%s === right.%s;\n",name_1201,name_1201);
            buffer_append_str(source_1200,source2_1202);
        }
        else {
            char source2_1203[1024];
            memset(&source2_1203, 0, sizeof(char)            *(1024)            );
            klass_1199=((struct sClass*)((void*)(__right_value1261=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1199->mName))));
            come_call_finalizer3(__right_value1261,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1204=(struct list$1void$ph*)come_increment_ref_count((klass_1199->mFields)),it_1205=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1204)));            !list$1void$ph$p_end((o2_saved_1204));            it_1205=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1204)))            ){
                multiple_assign_var43=it_1205;
                name_1206=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1207=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1208[1024];
                memset(&source2_1208, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1208,1024,"if(left.%s !== right.%s) { return false; }\n",name_1206,name_1206,name_1206);
                buffer_append_str(source_1200,source2_1208);
                (name_1206 = come_decrement_ref_count2(name_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1207,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1204,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1200,"return true;\n");
        buffer_append_char(source_1200,125);
        p_1209=info->p;
        sline_1210=info->sline;
        sname_1211=(char*)come_increment_ref_count(info->sname);
        head_1212=info->head;
        source3_1213=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj236=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1200);
        come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1200->buf;
        info->head=source_1200->buf;
        __dec_obj237=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1197));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1214=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1215=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3489, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1216=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1197));
        left_type_1217=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1217->mHeap=(_Bool)0;
        right_type_1218=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1218->mHeap=(_Bool)0;
        param_types_1219=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1220[0]=left_type_1217,
__list_values29___1220[1]=right_type_1218,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3495, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1220)));
        param_names_1222=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1221[0]=((char*)(__right_value1272=__builtin_string("left"))),
__list_values30___1221[1]=((char*)(__right_value1273=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3496, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1221)));
        (__right_value1272 = come_decrement_ref_count2(__right_value1272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1273 = come_decrement_ref_count2(__right_value1273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1223=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3497, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1223,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1223,((void*)0));
        result_type_1215->mStatic=(_Bool)0;
        result_type_1215->mUniq=(_Bool)0;
        result_type_1215->mInline=(_Bool)0;
        result_type_1215->mGenerate=(_Bool)0;
        fun2_1224=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1278=__builtin_string(name_1216)))));
        (__right_value1278 = come_decrement_ref_count2(__right_value1278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1224==((void*)0)||fun2_1224->mExternal) {
            fun_1225=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3508, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1216),(struct sType*)come_increment_ref_count(result_type_1215),(struct list$1void$ph*)come_increment_ref_count(param_types_1219),(struct list$1char$ph*)come_increment_ref_count(param_names_1222),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1223),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1214),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1216)),(struct sFun*)come_increment_ref_count(fun_1225));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3516, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1286=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3516, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1225),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1226=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1286,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1227=node_compile(node_1226,info);
            if(            !Value_1227) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1288=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1228=multiple_assign_var44->v1;
                Err_1229=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1229)?(puts(Err_1229),exit(0)):(0));
                come_call_finalizer3(__right_value1288,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1229 = come_decrement_ref_count2(Err_1229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1196=fun_1225;
            come_call_finalizer3(fun_1225,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1226) ? node_1226 = come_decrement_ref_count2(node_1226, ((struct sNode*)node_1226)->finalize, ((struct sNode*)node_1226)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1196=fun2_1224;
        }
        __dec_obj238=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1213);
        come_call_finalizer3(__dec_obj238,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1209;
        info->head=head_1212;
        info->sline=sline_1210;
        __dec_obj239=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1211);
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1211 = come_decrement_ref_count2(sname_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1213,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1214,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1215,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1216 = come_decrement_ref_count2(name_1216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1217,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1218,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1219,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1222,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1223,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1224,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1195;
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1192);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1193);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1194;
    __result_obj__392 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1290=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3542, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1196,(char*)come_increment_ref_count(real_fun_name_1197)))));
    (last_code_1192 = come_decrement_ref_count2(last_code_1192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1193 = come_decrement_ref_count2(last_code2_1193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1197 = come_decrement_ref_count2(real_fun_name_1197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1198,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1290,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__392,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__392;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__393;
char* last_code_1230;
char* __dec_obj242;
char* last_code2_1231;
char* __dec_obj243;
_Bool comma_instead_of_semicolon_1232;
struct sClass* current_stack_frame_struct_1233;
struct sFun* cloner_1234;
void* __right_value1293 = (void*)0;
char* real_fun_name_1235;
void* __right_value1294 = (void*)0;
struct sType* type2_1236;
struct sClass* klass_1237;
char* fun_name2_1238;
void* __right_value1295 = (void*)0;
char* none_generics_name_1239;
void* __right_value1296 = (void*)0;
struct sType* obj_type_1240;
void* __right_value1297 = (void*)0;
char* __dec_obj244;
void* __right_value1298 = (void*)0;
char* fun_name3_1241;
void* __right_value1299 = (void*)0;
struct sGenericsFun* generics_fun_1242;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1243=0;
_Bool err_1244=0;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__394;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
char* __dec_obj245;
void* __right_value1306 = (void*)0;
char* __dec_obj246;
int i_1245;
void* __right_value1307 = (void*)0;
char* new_fun_name_1246;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
char* __dec_obj247;
void* __right_value1310 = (void*)0;
char* __dec_obj248;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
struct buffer* source_1247;
void* __right_value1313 = (void*)0;
char* name_1248;
void* __right_value1314 = (void*)0;
struct list$1void$ph* o2_saved_1250;
struct tuple2$2char$phsType$ph* it_1251;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1252=0;
struct sType* field_type_1253=0;
void* __right_value1315 = (void*)0;
struct list$1void$ph* o2_saved_1256;
struct tuple2$2char$phsType$ph* it_1257;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1258=0;
struct sType* field_type_1259=0;
char* p_1263;
int sline_1264;
char* sname_1265;
struct buffer* source3_1266;
char* head_1267;
struct buffer* __dec_obj249;
void* __right_value1316 = (void*)0;
char* __dec_obj250;
void* __right_value1317 = (void*)0;
struct sBlock* block_1268;
void* __right_value1318 = (void*)0;
struct sType* result_type_1269;
void* __right_value1319 = (void*)0;
char* name_1270;
void* __right_value1320 = (void*)0;
struct sType* self_type_1271;
struct sType* __list_values31___1273[1];
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
struct list$1void$ph* param_types_1272;
void* __right_value1323 = (void*)0;
char* __list_values32___1274[1];
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
struct list$1char$ph* param_names_1275;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
struct list$1char$ph* param_default_parametors_1276;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
struct sFun* fun2_1277;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct sFun* fun_1278;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1337 = (void*)0;
struct sNode* node_1279;
_Bool Value_1280;
void* __right_value1338 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1281=0;
char* Err_1282=0;
char* __dec_obj251;
struct buffer* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
void* __right_value1339 = (void*)0;
void* __right_value1340 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__395;
fun_name2_1238 = (void*)0;
memset(&i_1245, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__393 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1292=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3548, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value1292,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__393,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__393;
    }
    last_code_1230=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj242=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1231=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj243=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1232=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1233=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1234=((void*)0);
    real_fun_name_1235=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1236=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1236;
    klass_1237=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1239=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1240=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj244=fun_name2_1238;
        fun_name2_1238=(char*)come_increment_ref_count(create_method_name(obj_type_1240,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1241=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1239,fun_name));
        generics_fun_1242=((struct sGenericsFun*)((void*)(__right_value1299=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_1241,((void*)0)))));
        come_call_finalizer3(__right_value1299,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_1242) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1301=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1238)),generics_fun_1242,obj_type_1240,info)));
            name_1243=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1244=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1301,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1244) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__394 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1303=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3588, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1243 = come_decrement_ref_count2(name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1239 = come_decrement_ref_count2(none_generics_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1240,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1241 = come_decrement_ref_count2(fun_name3_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1230 = come_decrement_ref_count2(last_code_1230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1231 = come_decrement_ref_count2(last_code2_1231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1235 = come_decrement_ref_count2(real_fun_name_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1236,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1238 = come_decrement_ref_count2(fun_name2_1238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1303,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__394,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__394;
                }
            }
            cloner_1234=((struct sFun*)((void*)(__right_value1304=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1243))));
            come_call_finalizer3(__right_value1304,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_1243 = come_decrement_ref_count2(name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1234=((struct sFun*)((void*)(__right_value1305=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1238))));
            come_call_finalizer3(__right_value1305,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj245=real_fun_name_1235;
        real_fun_name_1235=(char*)come_increment_ref_count(fun_name2_1238);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1239 = come_decrement_ref_count2(none_generics_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1240,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1241 = come_decrement_ref_count2(fun_name3_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj246=fun_name2_1238;
        fun_name2_1238=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1245=128-1;        i_1245>=1;        i_1245--        ){
            new_fun_name_1246=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1238,i_1245));
            cloner_1234=((struct sFun*)((void*)(__right_value1308=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1246))));
            come_call_finalizer3(__right_value1308,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_1234) {
                __dec_obj247=fun_name2_1238;
                fun_name2_1238=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1246));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1246 = come_decrement_ref_count2(new_fun_name_1246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1246 = come_decrement_ref_count2(new_fun_name_1246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1234==((void*)0)) {
            cloner_1234=((struct sFun*)((void*)(__right_value1310=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1238))));
            come_call_finalizer3(__right_value1310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj248=real_fun_name_1235;
        real_fun_name_1235=(char*)come_increment_ref_count(fun_name2_1238);
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1234==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1247,"{\n");
        buffer_append_str(source_1247,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1247,"var result = new %s;\n",((char*)(__right_value1313=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1313 = come_decrement_ref_count2(__right_value1313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1237->mProtocol) {
            name_1248="_protocol_obj";
            char source2_1249[1024];
            memset(&source2_1249, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1249,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1247,source2_1249);
            klass_1237=((struct sClass*)((void*)(__right_value1314=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1237->mName))));
            come_call_finalizer3(__right_value1314,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1250=(struct list$1void$ph*)come_increment_ref_count((klass_1237->mFields)),it_1251=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1250)));            !list$1void$ph$p_end((o2_saved_1250));            it_1251=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1250)))            ){
                multiple_assign_var46=it_1251;
                name_1252=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1253=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1252,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1253->mArrayNum)>0) {
                    char source2_1254[1024];
                    memset(&source2_1254, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1254,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1252,name_1252,name_1252);
                    buffer_append_str(source_1247,source2_1254);
                }
                else {
                    char source2_1255[1024];
                    memset(&source2_1255, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1255,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1252,name_1252);
                    buffer_append_str(source_1247,source2_1255);
                }
                (name_1252 = come_decrement_ref_count2(name_1252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1253,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1250,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1237=((struct sClass*)((void*)(__right_value1315=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1237->mName))));
            come_call_finalizer3(__right_value1315,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1256=(struct list$1void$ph*)come_increment_ref_count((klass_1237->mFields)),it_1257=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1256)));            !list$1void$ph$p_end((o2_saved_1256));            it_1257=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1256)))            ){
                multiple_assign_var47=it_1257;
                name_1258=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1259=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1259->mHeap) {
                    char source2_1260[1024];
                    memset(&source2_1260, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1260,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1258,name_1258,name_1258);
                    buffer_append_str(source_1247,source2_1260);
                }
                else if(                list$1sNode$ph$p_length(field_type_1259->mArrayNum)>0) {
                    char source2_1261[1024];
                    memset(&source2_1261, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1261,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1258,name_1258,name_1258);
                    buffer_append_str(source_1247,source2_1261);
                }
                else {
                    char source2_1262[1024];
                    memset(&source2_1262, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1262,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1258,name_1258);
                    buffer_append_str(source_1247,source2_1262);
                }
                (name_1258 = come_decrement_ref_count2(name_1258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1259,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1256,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1247,"return result;");
        buffer_append_char(source_1247,125);
        p_1263=info->p;
        sline_1264=info->sline;
        sname_1265=(char*)come_increment_ref_count(info->sname);
        source3_1266=(struct buffer*)come_increment_ref_count(info->source);
        head_1267=info->head;
        __dec_obj249=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1247);
        come_call_finalizer3(__dec_obj249,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj250=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1235));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1268=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1269=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1270=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1235));
        self_type_1271=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1271->mHeap=(_Bool)0;
        param_types_1272=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1273[0]=self_type_1271,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3704, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1273)));
        param_names_1275=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1274[0]=((char*)(__right_value1323=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3705, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1274)));
        (__right_value1323 = come_decrement_ref_count2(__right_value1323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1276=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3706, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1276,((void*)0));
        result_type_1269->mStatic=(_Bool)0;
        result_type_1269->mUniq=(_Bool)0;
        result_type_1269->mInline=(_Bool)0;
        result_type_1269->mGenerate=(_Bool)0;
        fun2_1277=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1328=__builtin_string(name_1270)))));
        (__right_value1328 = come_decrement_ref_count2(__right_value1328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1277==((void*)0)||fun2_1277->mExternal) {
            fun_1278=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3717, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1270),(struct sType*)come_increment_ref_count(result_type_1269),(struct list$1void$ph*)come_increment_ref_count(param_types_1272),(struct list$1char$ph*)come_increment_ref_count(param_names_1275),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1276),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1268),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1270)),(struct sFun*)come_increment_ref_count(fun_1278));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3725, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1336=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3725, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1278),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1279=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1336,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1280=node_compile(node_1279,info);
            if(            !Value_1280) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1338=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1281=multiple_assign_var48->v1;
                Err_1282=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1282)?(puts(Err_1282),exit(0)):(0));
                come_call_finalizer3(__right_value1338,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1282 = come_decrement_ref_count2(Err_1282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1234=fun_1278;
            come_call_finalizer3(fun_1278,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1279) ? node_1279 = come_decrement_ref_count2(node_1279, ((struct sNode*)node_1279)->finalize, ((struct sNode*)node_1279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1234=fun2_1277;
        }
        __dec_obj251=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1265);
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1264;
        __dec_obj252=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1266);
        come_call_finalizer3(__dec_obj252,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1263;
        info->head=head_1267;
        info->sline=sline_1264;
        come_call_finalizer3(source_1247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1265 = come_decrement_ref_count2(sname_1265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1268,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1269,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1270 = come_decrement_ref_count2(name_1270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1271,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1272,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1275,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1276,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1277,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1233;
    __dec_obj253=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1230);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj254=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1231);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1232;
    __result_obj__395 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1340=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3753, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1234,(char*)come_increment_ref_count(real_fun_name_1235)))));
    (last_code_1230 = come_decrement_ref_count2(last_code_1230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1231 = come_decrement_ref_count2(last_code2_1231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1235 = come_decrement_ref_count2(real_fun_name_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1236,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1238 = come_decrement_ref_count2(fun_name2_1238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1340,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__395,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__395;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1283;
char* __dec_obj255;
char* last_code2_1284;
char* __dec_obj256;
_Bool comma_instead_of_semicolon_1285;
struct sClass* current_stack_frame_struct_1286;
struct sFun* cloner_1287;
void* __right_value1341 = (void*)0;
char* real_fun_name_1288;
void* __right_value1342 = (void*)0;
struct sType* type2_1289;
struct sClass* klass_1290;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct buffer* source_1291;
int i_1292;
void* __right_value1345 = (void*)0;
struct list$1void$ph* o2_saved_1293;
struct tuple2$2char$phsType$ph* it_1294;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1295=0;
struct sType* field_type_1296=0;
char* p_1299;
int sline_1300;
char* sname_1301;
struct buffer* source3_1302;
char* head_1303;
struct buffer* __dec_obj257;
void* __right_value1346 = (void*)0;
char* __dec_obj258;
void* __right_value1347 = (void*)0;
struct sBlock* block_1304;
void* __right_value1348 = (void*)0;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
struct sType* result_type_1305;
void* __right_value1351 = (void*)0;
char* name_1306;
void* __right_value1352 = (void*)0;
struct sType* self_type_1307;
struct sType* __list_values33___1309[1];
void* __right_value1353 = (void*)0;
void* __right_value1354 = (void*)0;
struct list$1void$ph* param_types_1308;
void* __right_value1355 = (void*)0;
char* __list_values34___1310[1];
void* __right_value1356 = (void*)0;
void* __right_value1357 = (void*)0;
struct list$1char$ph* param_names_1311;
void* __right_value1358 = (void*)0;
void* __right_value1359 = (void*)0;
struct list$1char$ph* param_default_parametors_1312;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
struct sFun* fun2_1313;
void* __right_value1362 = (void*)0;
void* __right_value1363 = (void*)0;
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
struct sFun* fun_1314;
void* __right_value1366 = (void*)0;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1369 = (void*)0;
struct sNode* node_1315;
_Bool Value_1316;
void* __right_value1370 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1317=0;
char* Err_1318=0;
char* __dec_obj259;
struct buffer* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
void* __right_value1371 = (void*)0;
void* __right_value1372 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__396;
    last_code_1283=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1284=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1285=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1286=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1287=((void*)0);
    real_fun_name_1288=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1289=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1289;
    klass_1290=type->mClass;
    if(    type->mPointerNum>0&&!klass_1290->mNumber) {
        source_1291=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1291,"{\n");
        buffer_append_str(source_1291,"var result = new buffer();\n");
        buffer_append_format(source_1291,"result.append_str(\"%s {\");\n",klass_1290->mName);
        i_1292=0;
        klass_1290=((struct sClass*)((void*)(__right_value1345=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1290->mName))));
        come_call_finalizer3(__right_value1345,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1293=(struct list$1void$ph*)come_increment_ref_count((klass_1290->mFields)),it_1294=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1293)));        !list$1void$ph$p_end((o2_saved_1293));        it_1294=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1293)))        ){
            multiple_assign_var49=it_1294;
            name_1295=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1296=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1292==list$1void$ph$p_length(klass_1290->mFields)-1) {
                char source2_1297[1024];
                memset(&source2_1297, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1297,1024,"result.append_str(\"%s:\");\n",name_1295);
                buffer_append_str(source_1291,source2_1297);
                snprintf(source2_1297,1024,"result.append_str(self.%s.to_string());\n",name_1295);
                buffer_append_str(source_1291,source2_1297);
            }
            else {
                char source2_1298[1024];
                memset(&source2_1298, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1298,1024,"result.append_str(\"%s:\");\n",name_1295);
                buffer_append_str(source_1291,source2_1298);
                snprintf(source2_1298,1024,"result.append_str(self.%s.to_string());\n",name_1295);
                buffer_append_str(source_1291,source2_1298);
                snprintf(source2_1298,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1291,source2_1298);
            }
            i_1292++;
            (name_1295 = come_decrement_ref_count2(name_1295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1296,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1293,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1291,"result.append_str(\"}\");\n");
        buffer_append_format(source_1291,"return result.to_string();\n");
        buffer_append_char(source_1291,125);
        p_1299=info->p;
        sline_1300=info->sline;
        sname_1301=(char*)come_increment_ref_count(info->sname);
        source3_1302=(struct buffer*)come_increment_ref_count(info->source);
        head_1303=info->head;
        __dec_obj257=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1291);
        come_call_finalizer3(__dec_obj257,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj258=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1288));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1304=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3839, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1305->mHeap=(_Bool)1;
        name_1306=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1288));
        self_type_1307=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1307->mHeap=(_Bool)0;
        param_types_1308=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1309[0]=self_type_1307,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3844, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1309)));
        param_names_1311=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1310[0]=((char*)(__right_value1355=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3845, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1310)));
        (__right_value1355 = come_decrement_ref_count2(__right_value1355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1312=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3846, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1312,((void*)0));
        result_type_1305->mStatic=(_Bool)0;
        result_type_1305->mUniq=(_Bool)0;
        result_type_1305->mInline=(_Bool)0;
        result_type_1305->mGenerate=(_Bool)0;
        fun2_1313=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1360=__builtin_string(name_1306)))));
        (__right_value1360 = come_decrement_ref_count2(__right_value1360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1313==((void*)0)||fun2_1313->mExternal) {
            fun_1314=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3856, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1306),(struct sType*)come_increment_ref_count(result_type_1305),(struct list$1void$ph*)come_increment_ref_count(param_types_1308),(struct list$1char$ph*)come_increment_ref_count(param_names_1311),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1312),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1304),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1306)),(struct sFun*)come_increment_ref_count(fun_1314));
            cloner_1287=fun_1314;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3866, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1368=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3866, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1314),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1315=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1368,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1316=node_compile(node_1315,info);
            if(            !Value_1316) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1370=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1317=multiple_assign_var50->v1;
                Err_1318=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1318)?(puts(Err_1318),exit(0)):(0));
                come_call_finalizer3(__right_value1370,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1318 = come_decrement_ref_count2(Err_1318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1314,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1315) ? node_1315 = come_decrement_ref_count2(node_1315, ((struct sNode*)node_1315)->finalize, ((struct sNode*)node_1315)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1287=fun2_1313;
        }
        __dec_obj259=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1301);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1300;
        __dec_obj260=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1302);
        come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1299;
        info->head=head_1303;
        info->sline=sline_1300;
        come_call_finalizer3(source_1291,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1301 = come_decrement_ref_count2(sname_1301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1304,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1305,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1306 = come_decrement_ref_count2(name_1306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1307,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1308,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1311,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1312,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1313,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1286;
    __dec_obj261=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1283);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1284);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1285;
    __result_obj__396 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1372=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3892, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1287,(char*)come_increment_ref_count(real_fun_name_1288)))));
    (last_code_1283 = come_decrement_ref_count2(last_code_1283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1284 = come_decrement_ref_count2(last_code2_1284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1288 = come_decrement_ref_count2(real_fun_name_1288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1289,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1372,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__396,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__396;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1364;
char* __dec_obj273;
char* last_code2_1365;
char* __dec_obj274;
_Bool comma_instead_of_semicolon_1366;
struct sClass* current_stack_frame_struct_1367;
struct sFun* get_hash_key_fun_1368;
void* __right_value1417 = (void*)0;
char* real_fun_name_1369;
void* __right_value1418 = (void*)0;
struct sType* type2_1370;
struct sClass* klass_1371;
void* __right_value1419 = (void*)0;
void* __right_value1420 = (void*)0;
char* none_generics_name_1372;
void* __right_value1421 = (void*)0;
char* generics_fun_name_1373;
void* __right_value1422 = (void*)0;
struct sGenericsFun* generics_fun_1374;
void* __right_value1423 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1375=0;
_Bool err_1376=0;
void* __right_value1424 = (void*)0;
int i_1377;
void* __right_value1425 = (void*)0;
char* new_fun_name_1378;
void* __right_value1426 = (void*)0;
void* __right_value1427 = (void*)0;
char* __dec_obj275;
void* __right_value1428 = (void*)0;
void* __right_value1429 = (void*)0;
void* __right_value1430 = (void*)0;
struct buffer* source_1379;
int i_1380;
void* __right_value1431 = (void*)0;
struct list$1void$ph* o2_saved_1381;
struct tuple2$2char$phsType$ph* it_1382;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1383=0;
struct sType* field_type_1384=0;
char* p_1386;
int sline_1387;
char* sname_1388;
struct buffer* source3_1389;
char* head_1390;
struct buffer* __dec_obj276;
void* __right_value1432 = (void*)0;
char* __dec_obj277;
void* __right_value1433 = (void*)0;
struct sBlock* block_1391;
void* __right_value1434 = (void*)0;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
struct sType* result_type_1392;
void* __right_value1437 = (void*)0;
char* name_1393;
void* __right_value1438 = (void*)0;
struct sType* self_type_1394;
struct sType* __list_values37___1396[1];
void* __right_value1439 = (void*)0;
void* __right_value1440 = (void*)0;
struct list$1void$ph* param_types_1395;
void* __right_value1441 = (void*)0;
char* __list_values38___1397[1];
void* __right_value1442 = (void*)0;
void* __right_value1443 = (void*)0;
struct list$1char$ph* param_names_1398;
void* __right_value1444 = (void*)0;
void* __right_value1445 = (void*)0;
struct list$1char$ph* param_default_parametors_1399;
void* __right_value1446 = (void*)0;
void* __right_value1447 = (void*)0;
struct sFun* fun2_1400;
void* __right_value1448 = (void*)0;
void* __right_value1449 = (void*)0;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
struct sFun* fun_1401;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1455 = (void*)0;
struct sNode* node_1402;
_Bool Value_1403;
void* __right_value1456 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1404=0;
char* Err_1405=0;
char* __dec_obj278;
struct buffer* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value1457 = (void*)0;
void* __right_value1458 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__398;
memset(&i_1377, 0, sizeof(int));
    last_code_1364=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1365=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1366=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1367=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1368=((void*)0);
    real_fun_name_1369=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1370=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1370;
    klass_1371=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1368=((struct sFun*)((void*)(__right_value1419=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1369))));
        come_call_finalizer3(__right_value1419,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        get_hash_key_fun_1368==((void*)0)) {
            none_generics_name_1372=(char*)come_increment_ref_count(get_none_generics_name(type2_1370->mClass->mName));
            generics_fun_name_1373=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1372,fun_name));
            generics_fun_1374=((struct sGenericsFun*)((void*)(__right_value1422=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1373))));
            come_call_finalizer3(__right_value1422,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1374) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1423=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1369),generics_fun_1374,type,info)));
                name_1375=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1376=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1423,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1376) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1368=((struct sFun*)((void*)(__right_value1424=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1375))));
                come_call_finalizer3(__right_value1424,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1375 = come_decrement_ref_count2(name_1375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1372 = come_decrement_ref_count2(none_generics_name_1372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1373 = come_decrement_ref_count2(generics_fun_name_1373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1377=128-1;        i_1377>=1;        i_1377--        ){
            new_fun_name_1378=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1369,i_1377));
            get_hash_key_fun_1368=((struct sFun*)((void*)(__right_value1426=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1378))));
            come_call_finalizer3(__right_value1426,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            get_hash_key_fun_1368) {
                __dec_obj275=real_fun_name_1369;
                real_fun_name_1369=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1378));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1378 = come_decrement_ref_count2(new_fun_name_1378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1378 = come_decrement_ref_count2(new_fun_name_1378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1368==((void*)0)) {
            get_hash_key_fun_1368=((struct sFun*)((void*)(__right_value1428=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1369))));
            come_call_finalizer3(__right_value1428,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    get_hash_key_fun_1368==((void*)0)&&type->mPointerNum>0&&!klass_1371->mNumber&&!klass_1371->mProtocol) {
        source_1379=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1379,"{\n");
        buffer_append_str(source_1379,"unsigned int result = 0;\n");
        i_1380=0;
        klass_1371=((struct sClass*)((void*)(__right_value1431=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1371->mName))));
        come_call_finalizer3(__right_value1431,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1381=(struct list$1void$ph*)come_increment_ref_count((klass_1371->mFields)),it_1382=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1381)));        !list$1void$ph$p_end((o2_saved_1381));        it_1382=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1381)))        ){
            multiple_assign_var55=it_1382;
            name_1383=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1384=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1385[1024];
            memset(&source2_1385, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1385,1024,"result += ((int)self.%s).get_hash_key();\n",name_1383);
            buffer_append_str(source_1379,source2_1385);
            i_1380++;
            (name_1383 = come_decrement_ref_count2(name_1383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1384,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1381,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1379,"return result;\n");
        buffer_append_char(source_1379,125);
        p_1386=info->p;
        sline_1387=info->sline;
        sname_1388=(char*)come_increment_ref_count(info->sname);
        source3_1389=(struct buffer*)come_increment_ref_count(info->source);
        head_1390=info->head;
        __dec_obj276=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1379);
        come_call_finalizer3(__dec_obj276,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj277=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1369));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1391=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1392=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4192, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1392->mUnsigned=(_Bool)1;
        name_1393=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1369));
        self_type_1394=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1394->mHeap=(_Bool)0;
        param_types_1395=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1396[0]=self_type_1394,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4197, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1396)));
        param_names_1398=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1397[0]=((char*)(__right_value1441=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4198, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1397)));
        (__right_value1441 = come_decrement_ref_count2(__right_value1441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1399=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4199, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1399,((void*)0));
        result_type_1392->mStatic=(_Bool)0;
        result_type_1392->mUniq=(_Bool)0;
        result_type_1392->mInline=(_Bool)0;
        result_type_1392->mGenerate=(_Bool)0;
        fun2_1400=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1446=__builtin_string(name_1393)))));
        (__right_value1446 = come_decrement_ref_count2(__right_value1446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1400==((void*)0)||fun2_1400->mExternal) {
            fun_1401=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4209, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1393),(struct sType*)come_increment_ref_count(result_type_1392),(struct list$1void$ph*)come_increment_ref_count(param_types_1395),(struct list$1char$ph*)come_increment_ref_count(param_names_1398),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1399),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1391),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1393)),(struct sFun*)come_increment_ref_count(fun_1401));
            get_hash_key_fun_1368=fun_1401;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4219, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1454=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4219, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1401),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1402=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1454,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1403=node_compile(node_1402,info);
            if(            !Value_1403) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1456=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1404=multiple_assign_var56->v1;
                Err_1405=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1405)?(puts(Err_1405),exit(0)):(0));
                come_call_finalizer3(__right_value1456,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1405 = come_decrement_ref_count2(Err_1405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1401,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1402) ? node_1402 = come_decrement_ref_count2(node_1402, ((struct sNode*)node_1402)->finalize, ((struct sNode*)node_1402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1368=fun2_1400;
        }
        __dec_obj278=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1388);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1387;
        __dec_obj279=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1389);
        come_call_finalizer3(__dec_obj279,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1386;
        info->head=head_1390;
        info->sline=sline_1387;
        come_call_finalizer3(source_1379,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1388 = come_decrement_ref_count2(sname_1388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1389,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1391,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1392,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1393 = come_decrement_ref_count2(name_1393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1394,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1395,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1398,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1399,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1400,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1367;
    __dec_obj280=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1364);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1365);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1366;
    __result_obj__398 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1458=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4245, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1368,(char*)come_increment_ref_count(real_fun_name_1369)))));
    (last_code_1364 = come_decrement_ref_count2(last_code_1364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1365 = come_decrement_ref_count2(last_code2_1365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1369 = come_decrement_ref_count2(real_fun_name_1369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1370,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1458,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__398,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__398;
}

